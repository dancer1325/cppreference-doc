* preprocessor
  * supports
    * text macro replacement
    * function-like text macro replacement 

## Contents

  * [1 Syntax](replace.html#Syntax)
  * [2 Explanation](replace.html#Explanation)
    * [2.1 #define directives](replace.html#.23define_directives)
      * [2.1.1 Object-like macros](replace.html#Object-like_macros)
      * [2.1.2 Function-like macros](replace.html#Function-like_macros)
      * [2.1.3 Scanning and Replacement](replace.html#Scanning_and_Replacement)
    * [2.2 Reserved macro names](replace.html#Reserved_macro_names)
    * [2.3 # and ## operators](replace.html#.23_and_.23.23_operators)
    * [2.4 #undef directive](replace.html#.23undef_directive)
  * [3 Predefined macros](replace.html#Predefined_macros)
    * [3.1 Language feature-testing macros](replace.html#Language_feature-testing_macros)
  * [4 Notes](replace.html#Notes)
  * [5 Example](replace.html#Example)
  * [6 Defect reports](replace.html#Defect_reports)
  * [7 See also](replace.html#See_also)

### Syntax  
  
* `#define identifier replacement-list`
  * `replacement-list`
    * OPTIONAL
* `#define identifier(parameters) replacement-list`
  * `replacement-list`
    * OPTIONAL
* `#define identifier(parameters, ...) replacement-list`
  * `replacement-list`
    * OPTIONAL
  * requirements
    * C++11
* `#define identifier(...) replacement-list`
  * `replacement-list`
    * OPTIONAL
  * requirements
    * C++11
* `#undef identifier`   
  
### Explanation

#### `#define` directives

* `#define` directives 
  * define the `identifier` -- as -- macro /
    * 👀compiler replace successive occurrences of `identifier` -- with -- `replacement-list`👀
    * POSSIBLE Exceptions: ⚠️rules of [scanning and replacement](#scanning-and-replacement)⚠️
    * if the `identifier` is ALREADY defined --- as -- any type of macro & DIFFERENT definitions -> program is ill-formed 

##### Object-like macros

Object-like macros replace every occurrence of defined identifier with replacement-list. Version (1) of the #define directive behaves exactly like that. 

##### Function-like macros

Function-like macros replace each occurrence of defined identifier with replacement-list, additionally taking a number of arguments, which then replace corresponding occurrences of any of the parameters in the replacement-list. 

The syntax of a function-like macro invocation is similar to the syntax of a function call: each instance of the macro name followed by a ( as the next preprocessing token introduces the sequence of tokens that is replaced by the replacement-list. The sequence is terminated by the matching ) token, skipping intervening matched pairs of left and right parentheses. 

For version (2), the number of arguments must be the same as the number of parameters in macro definition. For versions (3,4), the number of arguments must not be less than the number of parameters (not(since C++20) counting `**...**`). Otherwise the program is ill-formed. If the identifier is not in functional-notation, i.e. does not have parentheses after itself, it is not replaced at all. 

Version (2) of the #define directive defines a simple function-like macro. 

Version (3) of the #define directive defines a function-like macro with variable number of arguments. The additional arguments (called _variable arguments_) can be accessed using `__VA_ARGS__` identifier, which is then replaced with arguments, supplied with the identifier to be replaced. 

Version (4) of the #define directive defines a function-like macro with variable number of arguments, but no regular arguments. The arguments (called _variable arguments_) can be accessed only with `__VA_ARGS__` identifier, which is then replaced with arguments, supplied with the identifier to be replaced. 

For versions (3,4), replacement-list may contain the token sequence `**__VA_OPT__(**` content ﻿`**)**`, which is replaced by content if `__VA_ARGS__` is non-empty, and expands to nothing otherwise. 
    
    
    #define F(...) f(0 __VA_OPT__(,) __VA_ARGS__)
    F(a, b, c) // replaced by f(0, a, b, c)
    F()        // replaced by f(0)
     
    #define G(X, ...) f(0, X __VA_OPT__(,) __VA_ARGS__)
    G(a, b, c) // replaced by f(0, a, b, c)
    G(a, )     // replaced by f(0, a)
    G(a)       // replaced by f(0, a)
     
    #define SDEF(sname, ...) S sname __VA_OPT__(= { __VA_ARGS__ })
    SDEF(foo);       // replaced by S foo;
    SDEF(bar, 1, 2); // replaced by S bar = { 1, 2 };

| (since C++20)  
---|---  
  
Note: if an argument of a function-like macro includes commas that are not protected by matched pairs of left and right parentheses (most commonly found in template argument lists, as in [assert](../error/assert.html)([std::is_same_v](../types/is_same.html)<int, int>); or BOOST_FOREACH([std::pair](../utility/pair.html)<int, int> p, m)), the comma is interpreted as macro argument separator, causing a compilation failure due to argument count mismatch. 

##### Scanning and Replacement

  * Scanning keeps track of macros they replaced. If scan finds text matching such macro, it marks it "to be ignored" (all scans will ignore it). This prevents recursion. 
  * If scanning found function-like macro, arguments are scanned before put inside replacement-list. Except # and ## operators take argument without scan. 
  * After macro was replaced, result text is scanned. 



Note, it is possible to define pseudo recursive macro: 

Run this code
    
    
    #define EMPTY
    #define SCAN(x)     x
    #define EXAMPLE_()  EXAMPLE
    #define EXAMPLE(n)  EXAMPLE_ EMPTY()(n-1) (n)
    EXAMPLE(5)
    SCAN(EXAMPLE(5))

Output: 
    
    
    EXAMPLE_ ()(5 -1) (5)
    EXAMPLE_ ()(5 -1 -1) (5 -1) (5)

#### Reserved macro names

A translation unit that [includes a standard library header](../standard_library.html#Including_headers "cpp/standard library") may not #define or #undef names declared in any [standard library header](../headers.html "cpp/header"). 

A translation unit that uses any part of the standard library is not allowed to #define or #undef names lexically identical to: 

  * [keywords](../keywords.html "cpp/keyword")



  * [identifiers with special meaning](../keywords.html "cpp/keyword")
  * [any standard attribute token](../language/attributes.html#Standard_attributes "cpp/language/attributes"), except that [`likely`](../language/attributes/likely.html "cpp/language/attributes/likely") and [`unlikely`](../language/attributes/likely.html "cpp/language/attributes/likely") may be defined as function-like macros(since C++20)

| (since C++11)  
---|---  
  
Otherwise, the behavior is undefined. 

#### # and ## operators

In function-like macros, a # operator before an identifier in the replacement-list runs the identifier through parameter replacement and encloses the result in quotes, effectively creating a string literal. In addition, the preprocessor adds backslashes to escape the quotes surrounding embedded string literals, if any, and doubles the backslashes within the string as necessary. All leading and trailing whitespace is removed, and any sequence of whitespace in the middle of the text (but not inside embedded string literals) is collapsed to a single space. This operation is called "stringification". If the result of stringification is not a valid string literal, the behavior is undefined. 

When # appears before `__VA_ARGS__`, the entire expanded `__VA_ARGS__` is enclosed in quotes: 
    
    
    #define showlist(...) puts(#__VA_ARGS__)
    showlist();            // expands to puts("")
    showlist(1, "x", int); // expands to puts("1, \"x\", int")

| (since C++11)  
---|---  
  
A ## operator between any two successive identifiers in the replacement-list runs parameter replacement on the two identifiers (which are not macro-expanded first) and then concatenates the result. This operation is called "concatenation" or "token pasting". Only tokens that form a valid token together may be pasted: identifiers that form a longer identifier, digits that form a number, or operators `+` and `=` that form a `+=`. A comment cannot be created by pasting `/` and `*` because comments are removed from text before macro substitution is considered. If the result of concatenation is not a valid token, the behavior is undefined. 

Note: some compilers offer an extension that allows ## to appear after a comma and before `__VA_ARGS__`, in which case the ## does nothing when the variable arguments are present, but removes the comma when the variable arguments are not present: this makes it possible to define macros such as fprintf (stderr, format, ##__VA_ARGS__). This can also be achieved in a standard manner using `__VA_OPT__`, such as fprintf (stderr, format __VA_OPT__(, ) __VA_ARGS__).(since C++20)

#### #undef directive

The #undef directive undefines the identifier, that is cancels previous definition of the identifier by #define directive. If the identifier does not have associated macro, the directive is ignored. 

### Predefined macros

The following macro names are predefined in every translation unit: 

__cplusplus |  denotes the version of C++ standard that is being used, expands to value 

  * 199711L(until C++11), 
  * 201103L(C++11), 
  * 201402L(C++14), 
  * 201703L(C++17), 
  * 202002L(C++20), or 
  * 202302L(C++23)   
(macro constant)

  
---|---  
__STDC_HOSTED__(C++11) |  expands to the integer constant 1 if the implementation is hosted (runs under an OS), ​0​ if freestanding (runs without an OS)   
(macro constant)  
__FILE__ |  expands to the name of the current file, as a character string literal, can be changed by the [`#line`](line.html "cpp/preprocessor/line") directive   
(macro constant)  
__LINE__ |  expands to the line number of the current [physical source line](../language/translation_phases.html#Phase_2 "cpp/language/translation phases"), an integer constant, can be changed by the [`#line`](line.html "cpp/preprocessor/line") directive   
(macro constant)  
__DATE__ |  expands to the date of translation, a character string literal of the form "Mmm dd yyyy". The first character of "dd" is a space if the day of the month is less than 10. The name of the month is as if generated by [std::asctime](../chrono/c/asctime.html)()   
(macro constant)  
__TIME__ |  expands to the time of translation, a character string literal of the form "hh:mm:ss"   
(macro constant)  
__STDCPP_DEFAULT_NEW_ALIGNMENT__(C++17) |  expands to an [std::size_t](../types/size_t.html "cpp/types/size t") literal whose value is the alignment guaranteed by a call to alignment-unaware [operator new](../memory/new/operator_new.html "cpp/memory/new/operator new") (larger alignments will be passed to alignment-aware overload, such as [operator new](../memory/new/operator_new.html)([std::size_t](../types/size_t.html), [std::align_val_t](../memory/new/align_val_t.html)))   
(macro constant)  
__STDCPP_­BFLOAT16_­T____STDCPP_­FLOAT16_­T____STDCPP_FLOAT32_T____STDCPP_FLOAT64_T____STDCPP_FLOAT128_T__(C++23) |  expands to 1 if and only if the implementation supports corresponding [extended floating-point type](../types/floating-point.html "cpp/types/floating-point")   
(macro constant)  
__STDC_EMBED_NOT_FOUND____STDC_EMBED_FOUND____STDC_EMBED_EMPTY__(C++26) |  expands to ​0​, 1 and 2 respectively   
(macro constant)  
  
The following additional macro names may be predefined by the implementations: 

__STDC__ |  implementation-defined value, if present, typically used to indicate C conformance   
(macro constant)  
---|---  
__STDC_VERSION__(C++11) |  implementation-defined value, if present   
(macro constant)  
__STDC_ISO_10646__(C++11) |  |  expands to an integer constant of the form yyyymmL, if wchar_t uses Unicode, the date indicates the latest revision of Unicode supported  | (until C++23)  
---|---  
implementation-defined value, if present  | (since C++23)  
  
(macro constant)  
__STDC_MB_MIGHT_NEQ_WC__(C++11) |  expands to 1 if 'x' == L'x' might be false for a member `x` of the basic character set, such as on EBCDIC-based systems that use Unicode for wchar_t   
(macro constant)  
__STDCPP_THREADS__(C++11) |  expands to 1 if the program can have more than one thread of execution   
(macro constant)  
__STDCPP_STRICT_POINTER_SAFETY__(C++11)(removed in C++23) |  expands to 1 if the implementation has strict [std::pointer_safety](../memory/gc/pointer_safety.html "cpp/memory/gc/pointer safety")   
(macro constant)  
---|---  
  
The values of these macros (except for `__FILE__` and `__LINE__`) remain constant throughout the translation unit. Attempts to redefine or undefine these macros result in undefined behavior. 

####  Language feature-testing macros

The standard defines a set of preprocessor macros corresponding to C++ language features introduced in C++11 or later. They are intended as a simple and portable way to detect the presence of said features. See [Feature testing](../experimental/feature_test.html "cpp/feature test") for details.  | (since C++20)  
---|---  
  
  


###  Notes

The [function-local predefined variable __func__](../language/function.html#func "cpp/language/function") is not a predefined macro, but it is usually used together with __FILE__ and __LINE__, e.g. by [assert](../error/assert.html "cpp/error/assert").  | (since C++11)  
---|---

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[CWG 2908](https://cplusplus.github.io/CWG/issues/2908.html) | C++98  | it was unclear whether `__LINE__` expands to the current  
physical line number or the current logical line number  | expands to the current  
physical line number   
[LWG 294](https://cplusplus.github.io/LWG/issue294) | C++98  | a translation unit that includes a standard library header could contain  
macros that define names declared in other standard library headers  | prohibited   
[P2621R2](https://wg21.link/P2621R2) | C++23  | universal character names were not allowed  
to be formed by token concatenation  | allowed   
  
### See also

* [C++ macro symbolS](../symbol_index/macro.md)
* [C - how to replace text macros](../../c/preprocessor/replace.md)
