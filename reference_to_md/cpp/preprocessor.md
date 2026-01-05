* preprocessor
  * is executed | [translation phase 4](language/translation_phases.md#phase-4-preprocessing)
  * 's output
    * 1! file / it's passed -- to the -- actual compiler 

## Contents

  * [1 Directives](preprocessor.html#Directives)
  * [2 Capabilities](preprocessor.html#Capabilities)
  * [3 Defect reports](preprocessor.html#Defect_reports)
  * [4 See also](preprocessor.html#See_also)
  
### Directives

* allows
  * control the preprocessor's behavior
* syntax
  * 1 line / EACH directive
  * 👀ALLOWED ones👀
    * directive + 's arguments
      ```c++
      #standardDefinedDirectiveName directiveArguments
    
      ```
      * [ALLOWED directives](#capabilities)
    * \>= 1[preprocessing tokens](language/translation_phases.md#phase-3-lexing) / beginning token != standard-defined directive name
      ```c++
      #preprocessingTokenWhichIsNotStandardDefinedDirectiveName
    
      ```
      * `preprocessingTokenWhichIsNotStandardDefinedDirectiveName`
        * conditionally-supported -- with -- implementation-defined semantics
          * _Example:_ | C++23-, `#warning`
            * directive / 
              * comes from common non-standard extension
              * | compilation, emits a user-defined message  
    * empty directive
      ```c++
      #
    
      ```


The [module and import directives](language/modules.md) are also preprocessing directives.  | (since C++20)
  
Preprocessing directives must not come from macro expansion. 
    
    
    #define EMPTY
    EMPTY   #   include <file.h> // not a preprocessing directive

### Capabilities

* == source file translation capabilities
  * [conditionally](preprocessor/conditional.md)
    * == compile parts of source file
      * ALLOWED directives: `#if`, `#ifdef`, `#ifndef`, `#else`, `#elif`, `#elifdef`, `#elifndef`(| C++23), and `#endif`
  * [replace](preprocessor/replace.md)
    * text macros while possibly concatenating or quoting identifiers (TODO:)
      * ALLOWED 
        * directives: `#define` and `#undef`
        * operators: `#` and `##` 
  * [include](preprocessor/include.md)
    * other files (controlled by directive #include and checked with __has_include(since C++17)). 
  * cause an **[error](preprocessor/warning.html "cpp/preprocessor/error")** or **[warning](preprocessor/warning.html "cpp/preprocessor/error")**(since C++23) (controlled by directive #error or #warning respectively(since C++23)). 



* preprocessor's aspects / can be controlled
  * [implementation-defined](preprocessor/impl.md)
    * behavior
      * directive: `#pragma`
      * operator: `_Pragma`
        * requirements
          * C++11
    * In addition, some compilers support (to varying degrees) the operator __pragma as a _non-standard_ extension. 
  * [file name and line information](preprocessor/line.md)
    * available to the preprocessor (controlled by directive #line). 

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[CWG 2001](https://cplusplus.github.io/CWG/issues/2001.html) | C++98  | the behavior of using non-standard-defined directives was not clear  | made conditionally-supported   

### See also

* [C++'s Predefined Macro Symbols](preprocessor/replace.md#predefined-macros)   
* [C++'s Macro Symbol Index](symbol_index/macro.md)  
* [C's preprocessor](../c/preprocessor.md) 
