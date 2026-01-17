* _asm-declaration_ 
  * enable to
    * 👀embed assembly language source code | C++ program👀
  * conditionally-supported
  * implementation defined
    * | C++11
    * ⚠️== may NOT be present⚠️
      * ❌ALTHOUGH the implementation is provided -> NOT have a fixed meaning❌ 

## Contents

  * [1 Syntax](asm.html#Syntax)
  * [2 Explanation](asm.html#Explanation)
  * [3 Notes](asm.html#Notes)
  * [4 Keywords](asm.html#Keywords)
  * [5 Example](asm.html#Example)
  * [6 Defect reports](asm.html#Defect_reports)
  * [7 References](asm.html#References)
  * [8 See also](asm.html#See_also)
  * [9 External links](asm.html#External_links)

### Syntax  

* `attr asm ( string-literal ) ;`
  * `attr`
    * OPTIONAL
  * | C++26-  
* `attr asm ( balanced-token-seq ) ;`
  * `attr`
    * OPTIONAL
  * | C++26

* `attr`
  * == sequence of [attributes](attributes.md)
  * | C++11 
* `string-literal`
  * == [string literal](string_literal.md)
    * ⚠️include ALSO raw string literals⚠️
* `balanced-token-seq`
  * == sequence of tokens / parentheses, brackets and braces are balanced
  * 's restrictions & its meaning
    * are implementation-defined   
  
### Explanation

The balanced-token-seq is typically a string literal that represents a short program written in assembly language, which is executed whenever this declaration is executed. Different C++ compilers have wildly varying rules for asm-declarations, and different conventions for the interaction with the surrounding C++ code. 

As other [block declarations](declarations.html "cpp/language/declarations"), this declaration can appear inside a block (a function body or another compound statement), and, as all other declarations, this declaration can also appear outside a block. 

| This section is incomplete  
Reason: write a note on GCC extended assembly syntax, since it is now supported by Intel, IBM, Sun (as of v12), etc   
---|---  
  
### Notes

Feature-test macro | Value | Std | Feature   
---|---|---|---  
[`__cpp_constexpr`](../experimental/feature_test.html#cpp_constexpr "cpp/feature test") | [`201907L`](../compiler_support/20.html#cpp_constexpr_201907L "cpp/compiler support/20") | (C++20) | Trivial [default initialization](default_initialization.html "cpp/language/default initialization") and [asm-declaration](asm.html#Syntax) in `constexpr` functions   
  
### Keywords

[`asm`](../keyword/asm.html "cpp/keyword/asm")

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[CWG 195](https://cplusplus.github.io/CWG/issues/195.html) | C++98  | it was required to support all asm declarations  | made conditionally-supported   
[CWG 2262](https://cplusplus.github.io/CWG/issues/2262.html) | C++11  | attributes could not be applied to asm declarations  | allowed   
  
### References

  * C++26 standard (ISO/IEC 14882:2026): 



    

  * 9.10 The `asm` declaration [dcl.asm] 



  * C++23 standard (ISO/IEC 14882:2024): 



    

  * 9.10 The `asm` declaration [dcl.asm] 



  * C++20 standard (ISO/IEC 14882:2020): 



    

  * 9.10 The `asm` declaration [dcl.asm] 



  * C++17 standard (ISO/IEC 14882:2017): 



    

  * 10.4 The `asm` declaration [dcl.asm] 



  * C++14 standard (ISO/IEC 14882:2014): 



    

  * 7.4 The `asm` declaration [dcl.asm] 



  * C++11 standard (ISO/IEC 14882:2011): 



    

  * 7.4 The `asm` declaration [dcl.asm] 



  * C++03 standard (ISO/IEC 14882:2003): 



    

  * 7.4 The `asm` declaration [dcl.asm] 



  * C++98 standard (ISO/IEC 14882:1998): 



    

  * 7.4 The `asm` declaration [dcl.asm] 



### See also

* [C++ ABIs](../resources.md#c-abis)
* [C's Inline assembly](../../c/language/asm.md)
  
### External links

1\.  | [GCC Inline Assembly HOWTO](https://www.ibiblio.org/gferg/ldp/GCC-Inline-Assembly-HOWTO.html)  
---|---  
2\.  | [GCC Inline ASM](http://locklessinc.com/articles/gcc_asm/) — Locklessinc.com   
3\.  | [IBM XL C/C++ Inline Assembly](https://www.ibm.com/docs/en/xl-c-and-cpp-aix/16.1?topic=compatibility-inline-assembly-statements)  
4\.  | [Intel C++ Inline Assembly](https://www.intel.com/content/www/us/en/develop/documentation/cpp-compiler-developer-guide-and-reference/top/compiler-reference/intrinsics/data-align-mem-alloc-intrins-and-inline-asmbly/inline-assembly.html)  
5\.  | [Visual Studio Inline Assembler](https://learn.microsoft.com/en-us/cpp/assembler/inline/inline-assembler)  
6\.  | [Sun Studio 12 Asm Statements](https://web.archive.org/web/20160528215011/https://blogs.oracle.com/x86be/entry/gcc_style_asm_inlining_support)  
7\.  | [Inline assembly for Itanium-based HP-UX](https://web.archive.org/web/20151009200102/https://h21007.www2.hp.com/portal/site/dspp/menuitem.863c3e4cbcdc3f3515b49c108973a801?ciid=4308e2f5bde02110e2f5bde02110275d6e10RCRD)  
8\.  | [X86 calling conventions](https://en.wikipedia.org/wiki/X86_calling_conventions "enwiki:X86 calling conventions") — Wikipedia 
  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
