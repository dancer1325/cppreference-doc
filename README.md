Information
-----------

* == [Cppreference](http://en.cppreference.com) source package
  * standard library reference documentation
  * allows
    * build the Cppreference C++'s offline archive
      * if there is NO [reference/](reference/) subdirectory -> actual documentation MUST be obtained separately

* ways to obtain the documentation
  * download the archive | [here](https://cppreference.com/w/Cppreference%253AArchives.html)
    * recommended one
    * Problems:
      * Problem1: OLD versions
        * Solution: TODO:
  * `make source`
    * Problems:
      * Problem1: "bash: wget: command not found"
        * Solution: `brew install wget`
    * pull the documentation directly -- from the -- website page-by-page
      * ONLY take in account if there's NEW release | [Archives](https://cppreference.com/w/Cppreference%253AArchives.html)
      * if the layout of the website has changed since the last release -> the download script might NOT work
    * supported documentation formats (`make all` generate ALL)
      1) Plain html documentation
         * generated -- via -- `make doc_html`
         * The result of the transformation will be placed at the 'output/reference' subdirectory
      2) Devhelp documentation format
         * generated -- via -- `make doc_devhelp`
         * `make install` installs the documentation | proper locations
      3) QT Help documentation format (.qch)
         * generated -- via -- `make doc_qch`
         * `make install` installs the documentation | proper locations
      4) 💡Markdown format💡
         * steps
           * `make source`
           * `pip3 install beautifulsoup4 html2text`
           * `python3 html_to_md.py`
             * generate ⭐️[reference_to_md](reference_to_md)⭐️
         * ⚠️NEXT executions will generate reference_to_md_new/ ⚠️
           * Reason:🧠I take notes | [reference_to_md](reference_to_md)🧠

* `make release` 
  * generate the release archives / are uploaded | [Archives](https://cppreference.com/w/Cppreference%253AArchives.html)

Dependencies
------------

* [requirements.txt](requirements.txt)

# Documentation -- to -- study
* ⭐️[here](reference_to_md)⭐️

## ways to compare changes | generate "reference_to_md_new/"?
### way1
* `diff -r reference_to_md/ reference_to_md_new/`
### way2