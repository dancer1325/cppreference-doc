#!/usr/bin/env python3

import os
import re
from pathlib import Path
from bs4 import BeautifulSoup
import html2text

def extract_content_from_html(html_file):
    """Extract content from mw-content-text div and convert to markdown"""
    try:
        with open(html_file, 'r', encoding='utf-8') as f:
            content = f.read()
        
        soup = BeautifulSoup(content, 'html.parser')
        content_div = soup.find('div', id='mw-content-text')
        
        if not content_div:
            return None
        
        # Convert HTML to markdown
        h = html2text.HTML2Text()
        h.ignore_links = False
        h.body_width = 0
        
        markdown_content = h.handle(str(content_div))
        return markdown_content
        
    except Exception as e:
        print(f"Error processing {html_file}: {e}")
        return None

def main():
    source_dir = Path("/Volumes/ExternalKingston/C++/cppreference-doc/reference/en.cppreference.com/w")
    # output_dir = Path("/Volumes/ExternalKingston/C++/cppreference-doc/reference_to_md")       -- used | FIRST execution -- for -- generating it
    output_dir = Path("/Volumes/ExternalKingston/C++/cppreference-doc/reference_to_md_new")
    
    # Create output directory
    output_dir.mkdir(exist_ok=True)
    
    # Find all HTML files
    html_files = list(source_dir.rglob("*.html"))
    
    print(f"Found {len(html_files)} HTML files")
    
    for html_file in html_files:
        # Create relative path structure in output
        rel_path = html_file.relative_to(source_dir)
        md_path = output_dir / rel_path.with_suffix('.md')
        
        # Create subdirectories if needed
        md_path.parent.mkdir(parents=True, exist_ok=True)
        
        # Extract and convert content
        markdown_content = extract_content_from_html(html_file)
        
        if markdown_content:
            with open(md_path, 'w', encoding='utf-8') as f:
                f.write(markdown_content)
            print(f"Converted: {rel_path}")
        else:
            print(f"Skipped: {rel_path} (no content found)")

if __name__ == "__main__":
    main()
