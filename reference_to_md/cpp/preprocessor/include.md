
  



  
|   
  
---  
[`catch` handler](../language/catch.html "cpp/language/catch")  
  

  
  
  
  
  
  

  


[Preprocessor](../preprocessor.html "cpp/preprocessor")

[#if#ifdef#ifndef#else#elif#elifdef#elifndef#endif](conditional.html "cpp/preprocessor/conditional")(C++23)(C++23)  
---  
[#define#undef#,## operators](replace.html "cpp/preprocessor/replace")  
**#include __has_include**(C++17)  
[#error#warning](warning.html "cpp/preprocessor/error")(C++23)  
[#pragma_Pragma](impl.html "cpp/preprocessor/impl")(C++11)  
[#line](line.html "cpp/preprocessor/line")  
[#embed](embed.html "cpp/preprocessor/embed")(C++26)  
  


Includes other source file into current source file at the line immediately after the directive. 

## Contents

  * [1 Syntax](include.html#Syntax)
  * [2 Explanation](include.html#Explanation)
  * [3 Notes](include.html#Notes)
  * [4 Example](include.html#Example)
  * [5 Defect reports](include.html#Defect_reports)
  * [6 See also](include.html#See_also)

  
---  
  
### Syntax  
  
---  
`**#include <**` h-char-sequence `**>**` new-line |  (1)  |   
`**#include "**` q-char-sequence `**"**` new-line |  (2)  |   
`**#include**` pp-tokens new-line |  (3)  |   
`**__has_include**` `**(**` `**"**` q-char-sequence `**"**` `**)**`  
`**__has_include**` `**(**` `**<**` h-char-sequence `**>**` `**)**` |  (4)  |  (since C++17)  
`**__has_include**` `**(**` string-literal `**)**`  
`**__has_include**` `**(**` `**<**` h-pp-tokens `**>**` `**)**` |  (5)  |  (since C++17)  
  
1) Searches for a header identified uniquely by h-char-sequence and replaces the directive by the entire contents of the header.

2) Searches for a source file identified by q-char-sequence and replaces the directive by the entire contents of the source file. It may fallback to (1) and treat q-char-sequence as a header identifier.

3) If neither (1) nor (2) is matched, pp-tokens will undergo macro replacement. The directive after replacement will be tried to match with (1) or (2) again.

4) Checks whether a header or source file is available for inclusion.

5) If (4) is not matched, h-pp-tokens will undergo macro replacement. The directive after replacement will be tried to match with (4) again.

new-line |  \-  |  The new-line character   
---|---|---  
h-char-sequence |  \-  |  A sequence of one or more h-char ﻿s, where the appearance of any of the following is conditionally-supported with implementation-defined semantics: 

  * the character '
  * the character "
  * the character \
  * the character sequence //
  * the character sequence /*

  
h-char |  \-  |  Any member of the [source character set](../language/translation_phases.html#Phase_5 "cpp/language/translation phases")(until C++23)[translation character set](../language/charset.html#Translation_character_set "cpp/language/charset")(since C++23) except new-line and >  
q-char-sequence |  \-  |  A sequence of one or more q-char ﻿s, where the appearance of any of the following is conditionally-supported with implementation-defined semantics: 

  * the character '
  * the character \
  * the character sequence //
  * the character sequence /*

  
q-char |  \-  |  Any member of the [source character set](../language/translation_phases.html#Phase_5 "cpp/language/translation phases")(until C++23)[translation character set](../language/charset.html#Translation_character_set "cpp/language/charset")(since C++23) except new-line and "  
pp-tokens |  \-  |  A sequence of one or more [preprocessing tokens](../language/translation_phases.html#Preprocessing_tokens "cpp/language/translation phases")  
string-literal |  \-  |  A [string literal](../language/string_literal.html "cpp/language/string literal")  
h-pp-tokens |  \-  |  A sequence of one or more [preprocessing tokens](../language/translation_phases.html#Preprocessing_tokens "cpp/language/translation phases") except >  
  
### Explanation

1) Searches a sequence of places for a header identified uniquely by h-char-sequence ﻿, and causes the replacement of that directive by the entire contents of the header. How the places are specified or the header identified is implementation-defined.

2) Causes the replacement of that directive by the entire contents of the source file identified by q-char-sequence ﻿. The named source file is searched for in an implementation-defined manner.

If this search is not supported, or if the search fails, the directive is reprocessed as if it reads syntax (1) with the identical contained sequence (including > characters, if any) from the original directive.

3) The preprocessing tokens after `**include**` in the directive are processed just as in normal text (i.e., each identifier currently defined as a macro name is replaced by its replacement list of preprocessing tokens).

If the directive resulting after all replacements does not match one of the two previous forms, the behavior is undefined.

The method by which a sequence of preprocessing tokens between a < and a > preprocessing token pair or a pair of " characters is combined into a single header name preprocessing token is implementation-defined.

4) The header or source file identified by h-char-sequence or q-char-sequence is searched for as if that preprocessing token sequence were the pp-tokens in syntax (3), except that no further macro expansion is performed. 

  * If such a directive would not satisfy the syntactic requirements of an #include directive, the program is ill-formed. 
  * Otherwise, the `__has_include` expression evaluates to 1 if the search for the source file succeeds, and to ​0​ if the search fails.



5) This form is considered only if syntax (4) does not match, in which case the preprocessing tokens are processed just as in normal text.

If the header identified by the header-name (i.e., `**<**` h-char-sequence `**>**` or `**"**` q-char-sequence `**"**`) denotes an importable header, it is implementation-defined whether the #include preprocessing directive is instead replaced by an [import directive](../language/modules.html#Importing_modules_and_headers "cpp/language/modules") of the form `**import**` header-name `**;**` new-line | (since C++20)  
---|---  
  
`__has_include` can be expanded in the expression of [` #if`](conditional.html "cpp/preprocessor/conditional") and [` #elif`](conditional.html "cpp/preprocessor/conditional"). It is treated as a defined macro by [` #ifdef`](conditional.html "cpp/preprocessor/conditional"), [` #ifndef`](conditional.html "cpp/preprocessor/conditional"), [` #elifdef`](conditional.html "cpp/preprocessor/conditional"), [` #elifndef`](conditional.html "cpp/preprocessor/conditional")(since C++23) and [`defined`](conditional.html "cpp/preprocessor/conditional") but cannot be used anywhere else. 

### Notes

Typical implementations search only standard include directories for syntax (1). The standard C++ library and the standard C library are implicitly included in these standard include directories. The standard include directories usually can be controlled by the user through compiler options. 

The intent of syntax (2) is to search for the files that are not controlled by the implementation. Typical implementations first search the directory where the current file resides then falls back to (1). 

When a file is included, it is processed by [translation phases](../language/translation_phases.html "cpp/language/translation phases") 1-4, which may include, recursively, expansion of the nested #include directives, up to an implementation-defined nesting limit. To avoid repeated inclusion of the same file and endless recursion when a file includes itself, perhaps transitively, _header guards_ are commonly used: the entire header is wrapped in 
    
    
    #ifndef FOO_H_INCLUDED /* any name uniquely mapped to file name */
    #define FOO_H_INCLUDED
    // contents of the file are here
    #endif

Many compilers also implement the non-standard [`pragma`](impl.html "cpp/preprocessor/impl") #pragma once with similar effects: it disables processing of a file if the same file (where file identity is determined in OS-specific way) has already been included. 

A sequence of characters that resembles an escape sequence in q-char-sequence or h-char-sequence might result in an error, be interpreted as the character corresponding to the escape sequence, or have a completely different meaning, depending on the implementation. 

A `__has_include` result of 1 only means that a header or source file with the specified name exists. It does not mean that the header or source file, when included, would not cause an error or would contain anything useful. For example, on a C++ implementation that supports both C++14 and C++17 modes (and provides __has_include in its C++14 mode as a conforming extension), __has_include(<optional>) may be 1 in C++14 mode, but actually #include <optional> may cause an error. 

### Example

Run this code
    
    
    #if __has_include(<optional>)
        #include <optional>
        #define has_optional 1
        template<class T>
        using optional_t = [std::optional](../utility/optional.html)<T>;
    #elif __has_include(<experimental/optional>)
        #include <experimental/optional>
        #define has_optional -1
        template<class T>
        using optional_t = [std::experimental::optional](../experimental/optional.html)<T>;
    #else
        #define has_optional 0
        template<class V>
        class optional_t
        {
            V v{};
            bool has{};
     
        public:
            optional_t() = default;
            optional_t(V&& v) : v(v), has{true} {}
            V value_or(V&& alt) const&
            {
                return has ? v : alt;
            }
            // etc.
        };
    #endif
     
    #include <iostream>
     
    int main()
    {
        if (has_optional > 0)
            [std::cout](../io/cout.html) << "<optional> is present\n";
        else if (has_optional < 0)
            [std::cout](../io/cout.html) << "<experimental/optional> is present\n";
        else
            [std::cout](../io/cout.html) << "<optional> is not present\n";
     
        optional_t<int> op;
        [std::cout](../io/cout.html) << "op = " << op.value_or(-1) << '\n';
        op = 42;
        [std::cout](../io/cout.html) << "op = " << op.value_or(-1) << '\n';
    }

Output: 
    
    
    <optional> is present
    op = -1
    op = 42

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[CWG 787](https://cplusplus.github.io/CWG/issues/787.html) | C++98  | the behavior is undefined if an escape sequence is  
resembled in q-char-sequence or h-char-sequence | it is conditionally-supported   
  
### See also

  * [Resource inclusion (since C++26)](embed.html "cpp/preprocessor/embed")

[A list of C++ Standard Library header files](../headers.html "cpp/header")  
---  
[C documentation](../../c/preprocessor/include.html "c/preprocessor/include") for Source file inclusion
