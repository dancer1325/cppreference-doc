#!/bin/bash

# Remove all [edit] links from .md files in cpp/ directory
find reference_to_md/cpp -name "*.md" -type f -exec python3 -c "
import re
import sys

file_path = sys.argv[1]
with open(file_path, 'r') as f:
    lines = f.readlines()

processed_lines = []
for line in lines:
    # Handle headers with [[edit]](...)] pattern
    if line.strip().startswith('#') and '[[edit]' in line and ')] ' in line:
        parts = line.split(')] ', 1)
        header_level = parts[0].split(' ')[0]
        processed_lines.append(header_level + ' ' + parts[1])
    else:
        # Remove any remaining [[edit]](...) patterns
        line = re.sub(r'\[\[edit\]\].*?\)', '', line)
        processed_lines.append(line)

with open(file_path, 'w') as f:
    f.writelines(processed_lines)

print(f'Processed: {file_path}')
" {} \;

echo "Done! All [edit] links removed from cpp/ .md files"
