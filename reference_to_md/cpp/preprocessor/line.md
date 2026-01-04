* allows
  * changing the 
    * source code's line number
    * current file name | preprocessor
      * OPTIONALLY 

## Contents

  * [1 Syntax](line.html#Syntax)
  * [2 Explanation](line.html#Explanation)
  * [3 Notes](line.html#Notes)
  * [4 Example](line.html#Example)
  * [5 References](line.html#References)
  * [6 See also](line.html#See_also)

  
### Syntax  
#### (1)
* `#line lineno`
#### (2)
* `#line lineno "filename"` 
  
### Explanation
* [(1)](#1)
  * changes the current preprocessor line number -- to -- `lineno`
  * TODO: Expansions of the macro __LINE__ beyond this point will expand to lineno plus the number of actual source code lines encountered since. 

* [(2)](#2)
  * changes the current preprocessor 
    * line number -- to -- `lineno`
    * file name -- to -- `filename`
  * Expansions of the macro __FILE__ from this point will produce filename. 

Any preprocessing tokens (macro constants or expressions) are permitted as arguments to #line as long as they expand to a valid decimal integer optionally following a valid character string. 

lineno must be a sequence of at least one decimal digit (the program is ill-formed, otherwise) and is always interpreted as decimal (even if it starts with `0`). 

If lineno is `0` or greater than `32767`(until C++11)`2147483647`(since C++11), the behavior is undefined. 

### Notes

This directive is used by some automatic code generation tools which produce C++ source files from a file written in another language. In that case, #line directives may be inserted in the generated C++ file referencing line numbers and the file name of the original (human-editable) source file.

### References

  * C++23 standard (ISO/IEC 14882:2024): 



    

  * 15.7 Line control [cpp.line] 



  * C++20 standard (ISO/IEC 14882:2020): 



    

  * 15.7 Line control [cpp.line] 



  * C++17 standard (ISO/IEC 14882:2017): 



    

  * 19.4 Line control [cpp.line] 



  * C++14 standard (ISO/IEC 14882:2014): 



    

  * 16.4 Line control [cpp.line] 



  * C++11 standard (ISO/IEC 14882:2011): 



    

  * 16.4 Line control [cpp.line] 



  * C++98 standard (ISO/IEC 14882:1998): 



    

  * 16.4 Line control [cpp.line] 



### See also

[ source_location](../utility/source_location.html "cpp/utility/source location")(C++20) |  a class representing information about the source code, such as file names, line numbers, and function names   
(class)  
---|---  
[C documentation](../../c/preprocessor/line.html "c/preprocessor/line") for Filename and line information
