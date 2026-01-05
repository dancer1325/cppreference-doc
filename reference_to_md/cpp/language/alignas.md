

  
| [`goto`](goto.html "cpp/language/goto") \- [`return`](return.html "cpp/language/return")  
---  
  
[Functions](functions.html "cpp/language/functions")  
[Function declaration](function.html "cpp/language/function")  
[Lambda function expression](lambda.html "cpp/language/lambda")  
[`inline` specifier](inline.html "cpp/language/inline")  
[Dynamic exception specifications](except_spec.html "cpp/language/except spec") (until C++17*)  
[`noexcept` specifier](noexcept_spec.html "cpp/language/noexcept spec") (C++11)  
Exceptions  
| [`throw`-expression](throw.html "cpp/language/throw")  
---  
[`try` block](try.html "cpp/language/try")  
  
|   
  
---  
[`catch` handler](catch.html "cpp/language/catch")  
  
Namespaces  
| [Namespace declaration](namespace.html "cpp/language/namespace")` `  
---  
  
| [Namespace aliases](namespace_alias.html "cpp/language/namespace alias")  
---  
  
Types  
| [Fundamental types](types.html "cpp/language/types")  
---  
[Enumeration types](enum.html "cpp/language/enum")  
[Function types](function.html "cpp/language/function")  
  
| [Class/struct types](class.html "cpp/language/class")  
---  
[Union types](union.html "cpp/language/union")  
  
  
  

  
  
  

---  
  

---  
  


[Declarations](declarations.html "cpp/language/declarations")

| Overview  
---  
[Declaration syntax](declarations.html "cpp/language/declarations")  
[_decl-specifier-seq_](declarations.html#Specifiers "cpp/language/declarations")  
[Declarator](declarations.html#Declarators "cpp/language/declarations")  
[Conflicting declarations](conflicting_declarations.html "cpp/language/conflicting declarations")  
Specifiers  
[typedef](typedef.html "cpp/language/typedef")  
[inline](inline.html "cpp/language/inline")  
[virtual function specifier](virtual.html "cpp/language/virtual")  
[explicit function specifier](explicit.html "cpp/language/explicit")  
[friend](friend.html "cpp/language/friend")  
[constexpr](constexpr.html "cpp/language/constexpr")(C++11)  
[consteval](consteval.html "cpp/language/consteval")(C++20)  
[constinit](constinit.html "cpp/language/constinit")(C++20)  
[Storage class specifiers](storage_duration.html "cpp/language/storage duration")  
[Translation-unit-local](tu_local.html "cpp/language/tu local") (C++20)  
[class/struct](class.html "cpp/language/class")  
[union](union.html "cpp/language/union")  
[enum](enum.html "cpp/language/enum")  
[decltype](decltype.html "cpp/language/decltype")(C++11)  
[auto](auto.html "cpp/language/auto")(C++11)  
**alignas**(C++11)  
[constvolatile](cv.html "cpp/language/cv")  
[Pack indexing specifier](pack_indexing.html#Pack_indexing_specifier "cpp/language/pack indexing") (C++26)  
[Elaborated type specifier](elaborated_type_specifier.html "cpp/language/elaborated type specifier")  
[Attributes](attributes.html "cpp/language/attributes") (C++11)  
  
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
[asm declaration](asm.html "cpp/language/asm")  
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
  
  
  


Specifies the [alignment requirement](objects.html#Alignment "cpp/language/object") of a type or an object. 

## Contents

  * [1 Syntax](alignas.html#Syntax)
  * [2 Explanation](alignas.html#Explanation)
  * [3 Notes](alignas.html#Notes)
  * [4 Keywords](alignas.html#Keywords)
  * [5 Example](alignas.html#Example)
  * [6 Defect reports](alignas.html#Defect_reports)
  * [7 References](alignas.html#References)
  * [8 See also](alignas.html#See_also)

  
---  
  
### Syntax  
  
---  
`**alignas(**` expression `**)**` |  |   
`**alignas(**` type-id `**)**` |  |   
`**alignas(**` pack `**...**` `**)**` |  |   
  
1) expression must be an [integral constant expression](constant_expression.html#Integral_constant_expression "cpp/language/constant expression") that evaluates to zero, or to a valid value for an [alignment](objects.html#Alignment "cpp/language/object") or extended alignment.

2) Equivalent to alignas(alignof( `type-id` )).

3) Equivalent to multiple alignas specifiers applied to the same declaration, one for each member of the [parameter pack](parameter_pack.html "cpp/language/parameter pack"), which can be either type or constant parameter pack.

### Explanation

The alignas specifier may be applied to: 

  * the declaration or definition of a [class](classes.html "cpp/language/classes"); 
  * the declaration of a non-bitfield class data member; 
  * the declaration of a variable, except that it cannot be applied to the following: 
    * a function parameter; 
    * the exception parameter of a catch clause. 



The object or the type declared by such a declaration will have its [alignment requirement](objects.html#Alignment "cpp/language/object") equal to the strictest (largest) non-zero expression of all `alignas` specifiers used in the declaration, unless it would weaken the natural alignment of the type. 

If the strictest (largest) `alignas` on a declaration is weaker than the alignment it would have without any `alignas` specifiers (that is, weaker than its natural alignment or weaker than `alignas` on another declaration of the same object or type), the program is ill-formed: 
    
    
    struct alignas(8) S {};
    struct alignas(1) U { S s; }; // error: alignment of U would have been 8 without alignas(1)

Invalid non-zero alignments, such as alignas(3) are ill-formed. 

Valid non-zero alignments that are weaker than another alignas on the same declaration are ignored. 

alignas(0) is always ignored. 

### Notes

As of the ISO C11 standard, the C language has the _Alignas keyword and defines alignas as a preprocessor macro expanding to the keyword in the header [`<stdalign.h>`](../../c/types.html "c/types"). 

In C++, this is a keyword, and 

the headers [`<stdalign.h>`](../header/cstdalign.html "cpp/header/cstdalign") and [`<cstdalign>`](../header/cstdalign.html "cpp/header/cstdalign") do not define such macro. They do, however, define the macro constant __alignas_is_defined.  | (until C++20)  
---|---  
the header [`<stdalign.h>`](../header/cstdalign.html "cpp/header/cstdalign") does not define such macro. It does, however, define the macro constant __alignas_is_defined.  | (since C++20)  
  
### Keywords

[`alignas`](../keyword/alignas.html "cpp/keyword/alignas")

### Example

Run this code
    
    
    #include <iostream>
     
    // Every object of type struct_float will be aligned
    // to alignof(float) boundary (usually 4):
    struct alignas(float) struct_float
    {
        // your definition here
    };
     
    // Every object of type sse_t will be aligned to 32-byte boundary:
    struct alignas(32) sse_t
    {
        float sse_data[4];
    };
     
    int main()
    {
        struct default_aligned
        {
            float data[4];
        } a, b, c;
        sse_t x, y, z;
     
        [std::cout](../io/cout.html)
            << "alignof(struct_float) = " << alignof(struct_float) << '\n'
            << "sizeof(sse_t) = " << sizeof(sse_t) << '\n'
            << "alignof(sse_t) = " << alignof(sse_t) << '\n'
            << [std::hex](../io/manip/hex.html) << [std::showbase](../io/manip/showbase.html)
            << "&a: " << &a << "\n"
               "&b: " << &b << "\n"
               "&c: " << &c << "\n"
               "&x: " << &x << "\n"
               "&y: " << &y << "\n"
               "&z: " << &z << '\n';
    }

Possible output: 
    
    
    alignof(struct_float) = 4
    sizeof(sse_t) = 32
    alignof(sse_t) = 32
    &a: 0x7fffcec89930
    &b: 0x7fffcec89940
    &c: 0x7fffcec89950
    &x: 0x7fffcec89960
    &y: 0x7fffcec89980
    &z: 0x7fffcec899a0

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[CWG 1437](https://cplusplus.github.io/CWG/issues/1437.html) | C++11  | alignas could be used in alias declarations  | prohibited   
[CWG 2354](https://cplusplus.github.io/CWG/issues/2354.html) | C++11  | alignas could be applied to the declaration of an enumeration  | prohibited   
  
### References

  * C++23 standard (ISO/IEC 14882:2024): 



    

  * 9.12.4 Carries dependency attribute [dcl.attr.depend] 



  * C++20 standard (ISO/IEC 14882:2020): 



    

  * 9.12.3 Carries dependency attribute [dcl.attr.depend] 



  * C++17 standard (ISO/IEC 14882:2017): 



    

  * 10.6.3 Carries dependency attribute [dcl.attr.depend] 



  * C++14 standard (ISO/IEC 14882:2014): 



    

  * 7.6.4 Carries dependency attribute [dcl.attr.depend] 



  * C++11 standard (ISO/IEC 14882:2011): 



    

  * 7.6.4 Carries dependency attribute [dcl.attr.depend] 



### See also

`**[alignof](alignof.html "cpp/language/alignof")**` (C++11) |  queries alignment requirements of a type  
(operator)  
---|---  
[ alignment_of](../types/alignment_of.html "cpp/types/alignment of")(C++11) |  obtains the type's alignment requirements   
(class template)   
[C documentation](../../c/language/alignas.html "c/language/ Alignas") for _Alignas, alignas
