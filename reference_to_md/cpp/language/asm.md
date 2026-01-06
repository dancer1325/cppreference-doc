

  
  
  
  
  

  
  
  

---  
  
| [`delete` expression](delete.html "cpp/language/delete")  
---  
  
[Classes](classes.html "cpp/language/classes")  
| [Class declaration](class.html "cpp/language/class")  
---  
[Constructors](initializer_list.html "cpp/language/constructor")  
[`this` pointer](this.html "cpp/language/this")  
  
| [Access specifiers](access.html "cpp/language/access")  
---  
[`friend` specifier](friend.html "cpp/language/friend")  
  
  
  
Class-specific function properties  
| [Virtual function](virtual.html "cpp/language/virtual")  
---  
[`override` specifier](override.html "cpp/language/override") (C++11)` `  
[`final` specifier](final.html "cpp/language/final") (C++11)  
  
| [`explicit`](explicit.html "cpp/language/explicit") (C++11)  
---  
[`static`](static.html "cpp/language/static")  
  
  
  
Special member functions  
| [Default constructor](default_constructor.html "cpp/language/default constructor")  
---  
[Copy constructor](copy_constructor.html "cpp/language/copy constructor")  
[Move constructor](move_constructor.html "cpp/language/move constructor") (C++11)  
  
| [Copy assignment](as_operator.html "cpp/language/as operator")  
---  
[Move assignment](move_operator.html "cpp/language/move operator") (C++11)  
[Destructor](destructor.html "cpp/language/destructor")  
  
[Templates](templates.html "cpp/language/templates")  
| [Class template](class_template.html "cpp/language/class template")  
---  
[Function template](function_template.html "cpp/language/function template")  
  
| [Template specialization](template_specialization.html "cpp/language/template specialization")  
---  
[Parameter packs](parameter_pack.html "cpp/language/pack") (C++11)  
  
Miscellaneous  
| **Inline assembly**  
---  
  
| [History of C++](history.html "cpp/language/history")  
---  
  



  
| Declarators  
---  
[Reference](reference.html "cpp/language/reference")  
[Pointer](pointer.html "cpp/language/pointer")  
[Array](array.html "cpp/language/array")  
Block declarations  
[Simple-declaration](declarations.html "cpp/language/declarations")  
→[Structured binding declaration](structured_binding.html "cpp/language/structured binding") (C++17)  
[Alias declaration](type_alias.html "cpp/language/type alias") (C++11)  
[Namespace alias definition](namespace_alias.html "cpp/language/namespace alias")  
[using declaration](using_declaration.html "cpp/language/using declaration")  
[`using` directive](namespace.html#Using-directives "cpp/language/namespace")  
[static_assert declaration](static_assert.html "cpp/language/static assert") (C++11)  
**asm declaration**  
[Opaque enum declaration](enum.html "cpp/language/enum") (C++11)  
Other declarations  
[Namespace definition](namespace.html "cpp/language/namespace")  
[Function declaration](function.html "cpp/language/function")  
[Class template declaration](class_template.html "cpp/language/class template")  
[Function template declaration](function_template.html "cpp/language/function template")  
[Explicit template instantiation](class_template.html#Explicit_instantiation "cpp/language/class template") (C++11)  
[Explicit template specialization](template_specialization.html "cpp/language/template specialization")  
[Linkage specification](language_linkage.html "cpp/language/language linkage")  
[Attribute declaration](declarations.html "cpp/language/declarations") (C++11)  
[Empty declaration](declarations.html "cpp/language/declarations")  
  
  
  


_asm-declaration_ gives the ability to embed assembly language source code within a C++ program. This declaration is conditionally-supported and (since C++11)implementation defined, meaning that it may not be present and, even when provided by the implementation, (since C++11)it does not have a fixed meaning. 

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

  
---  
  
### Syntax  
  
---  
attr ﻿(optional) `**asm (**` string-literal `**)**` `**;**` |  |  (until C++26)  
attr ﻿(optional) `**asm (**` balanced-token-seq `**)**` `**;**` |  |  (since C++26)  
attr |  \-  |  (since C++11) any number of [attributes](attributes.html "cpp/language/attributes")  
---|---|---  
string-literal |  \-  |  same as in [string literal](string_literal.html "cpp/language/string literal"), including raw string literals   
balanced-token-seq |  \-  |  a sequence of tokens where parentheses, brackets and braces are balanced; any restrictions on the balanced-token-seq and its meaning are implementation-defined   
  
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

### Example

Demonstrates two kinds of inline assembly syntax offered by the GCC/Clang compilers. This program works correctly only on the x86_64 platform under Linux.

Run this code
    
    
    #include <iostream>
     
    extern "C" int func(int x);
    // the definition of func is written in assembly language
    // raw string literal could be very useful
    asm(R"(
    .globl func
        .type func, @function
        func:
        .cfi_startproc
        movl %edi, %eax /* x is in RDI, see x86-64 calling convention */
        addl $1, %eax
        ret
        .cfi_endproc
    )");
     
    int main()
    {
        int n = func(0110);
        // formerly non-standard inline assembly, made comforming by P2361R6
        asm ("leal (%0,%0,4),%0"
             : "=r" (n)
             : "0" (n));
        [std::cout](../io/cout.html) << "73*5 = " << n << [std::endl](../io/manip/endl.html); // flush is intentional
     
        // standard inline assembly
        asm ("movq $60, %rax\n" // the exit syscall number on Linux
             "movq $2,  %rdi\n" // this program returns 2
             "syscall");
    }

Output: 
    
    
    73*5 = 365

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

  * [C++ ABIs](../resources.html#C.2B.2B_ABIs "cpp/links")

[C documentation](../../c/language/asm.html "c/language/asm") for Inline assembly  
---  
  
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
