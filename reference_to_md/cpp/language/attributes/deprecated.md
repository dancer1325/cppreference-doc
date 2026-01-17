* (C++14)(C++14) |  indicates that the use of the name or entity declared with this attribute is allowed, but discouraged for some reason  
  (attribute specifier)  
Indicates that the name or entity declared with this attribute is [deprecated](https://en.wikipedia.org/wiki/Deprecation "enwiki:Deprecation"), 
* that is, the use is allowed, but discouraged for some reason. 

## Contents

  * [1 Syntax](deprecated.html#Syntax)
  * [2 Explanation](deprecated.html#Explanation)
  * [3 Example](deprecated.html#Example)
  * [4 References](deprecated.html#References)
  * [5 See also](deprecated.html#See_also)


### Syntax  
   
`**[[deprecated]]**` |  (1)  |   
`**[[deprecated(**` string-literal `**)]]**` |  (2)  |   
string-literal |  \-  |  an [unevaluated string literal](../string_literal.html#Unevaluated_strings "cpp/language/string literal") that could be used to explain the rationale for deprecation and/or to suggest a replacing entity   
---|---|---  
  
### Explanation

Indicates that the use of the name or entity declared with this attribute is allowed, but discouraged for some reason. Compilers typically issue warnings on such uses. The string-literal, if specified, is usually included in the warnings. 

This attribute is allowed in declarations of the following names or entities: 

  * [class/struct/union](../classes.html "cpp/language/classes"), e.g., struct [[deprecated]] S;, 
  * [typedef-name](../typedef.html "cpp/language/typedef"), including those declared by [alias declaration](../type_alias.html "cpp/language/type alias"), e.g., 



    

  * [[deprecated]] typedef S* PS;, 
  * using PS [[deprecated]] = S*;, 



  * (non-member) variable, e.g., [[deprecated]] int x;, 
  * [static data member](../static.html "cpp/language/static"), e.g., struct S { [[deprecated]] static constexpr char CR{13}; };, 
  * [non-static data member](../data_members.html "cpp/language/data members"), e.g., union U { [[deprecated]] int n; };, 
  * [function](../function.html "cpp/language/function"), e.g., [[deprecated]] void f();, 
  * [namespace](../namespace.html "cpp/language/namespace"), e.g., namespace [[deprecated]] NS { int x; }, 
  * [enumeration](../enum.html "cpp/language/enum"), e.g., enum [[deprecated]] E {};, 



  * enumerator, e.g., enum { A [[deprecated]], B [[deprecated]] = 42 };, 

| (since C++17)  
---|---  
  
  * [template specialization](../template_specialization.html "cpp/language/template specialization"), e.g., template<> struct [[deprecated]] X<int> {};. 



A name declared non-deprecated may be redeclared deprecated. A name declared deprecated cannot be un-deprecated by redeclaring it without this attribute. 

### Example

Run this code
    
    
    #include <iostream>
     
    [[deprecated]]
    void TriassicPeriod()
    {
        [std::clog](../../io/clog.html) << "Triassic Period: [251.9 - 208.5] million years ago.\n";
    }
     
    [[deprecated("Use NeogenePeriod() instead.")]]
    void JurassicPeriod()
    {
        [std::clog](../../io/clog.html) << "Jurassic Period: [201.3 - 152.1] million years ago.\n";
    }
     
    [[deprecated("Use calcSomethingDifferently(int).")]]
    int calcSomething(int x)
    {
        return x * 2;
    }
     
    int main()
    {
        TriassicPeriod();
        JurassicPeriod();
    }

Possible output: 
    
    
    Triassic Period: [251.9 - 208.5] million years ago.
    Jurassic Period: [201.3 - 152.1] million years ago.
     
    main.cpp:20:5: warning: 'TriassicPeriod' is deprecated [-Wdeprecated-declarations]
        TriassicPeriod();
        ^
    main.cpp:3:3: note: 'TriassicPeriod' has been explicitly marked deprecated here
    [[deprecated]]
      ^
    main.cpp:21:5: warning: 'JurassicPeriod' is deprecated: Use NeogenePeriod() instead ⮠
     [-Wdeprecated-declarations]
        JurassicPeriod();
        ^
    main.cpp:8:3: note: 'JurassicPeriod' has been explicitly marked deprecated here
    [[deprecated("Use NeogenePeriod() instead")]]
      ^
    2 warnings generated.

### References

  * C++23 standard (ISO/IEC 14882:2024): 



    

  * 9.12.5 Deprecated attribute [dcl.attr.deprecated] 



  * C++20 standard (ISO/IEC 14882:2020): 



    

  * 9.12.4 Deprecated attribute [dcl.attr.deprecated] 



  * C++17 standard (ISO/IEC 14882:2017): 



    

  * 10.6.4 Deprecated attribute [dcl.attr.deprecated] 



  * C++14 standard (ISO/IEC 14882:2014): 



    

  * 7.6.5 Deprecated attribute [dcl.attr.deprecated] 



### See also

[C documentation](../../../c/language/attributes/deprecated.html "c/language/attributes/deprecated") for deprecated  
---
