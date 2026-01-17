(C++17) |  suppresses compiler warnings on unused entities, if any  
(attribute specifier)
Suppresses warnings on unused entities. 

## Contents

  * [1 Syntax](maybe_unused.html#Syntax)
  * [2 Explanation](maybe_unused.html#Explanation)
  * [3 Example](maybe_unused.html#Example)
  * [4 Defect reports](maybe_unused.html#Defect_reports)
  * [5 References](maybe_unused.html#References)
  * [6 See also](maybe_unused.html#See_also)

  
---  
  
### Syntax  
  
---  
`**[[maybe_unused]]**` |  |   
  
### Explanation

This attribute can appear in the declaration of the following entities: 

  * [class](../classes.html "cpp/language/classes"): struct [[maybe_unused]] S;
  * [`typedef`](../typedef.html "cpp/language/typedef"), including those declared by [alias declaration](../type_alias.html "cpp/language/type alias"): [[maybe_unused]] typedef S* PS;, using PS [[maybe_unused]] = S*;
  * variable, including [static data member](../static.html "cpp/language/static"): [[maybe_unused]] int x;
  * [non-static data member](../data_members.html "cpp/language/data members"): union U { [[maybe_unused]] int n; };, 
  * [function](../function.html "cpp/language/function"): [[maybe_unused]] void f();
  * [enumeration](../enum.html "cpp/language/enum"): enum [[maybe_unused]] E {};
  * enumerator: enum { A [[maybe_unused]], B [[maybe_unused]] = 42 };
  * [structured binding](../structured_binding.html "cpp/language/structured binding"): [[maybe_unused]] auto [a, b] = [std::make_pair](../../utility/pair/make_pair.html)(42, 0.23);



  * [result binding](../function.html#Postcondition_assertions "cpp/language/function"): post(r [[maybe_unused]] : this->empty())

| (since C++26)  
---|---  
  
For entities declared [[maybe_unused]], if the entities or their structured bindings are unused, the warning on unused entities issued by the compiler is suppressed. 

For labels declared [[maybe_unused]], if they are unused, the warning on unused labels issued by the compiler is suppressed.  | (since C++26)  
---|---  
  
### Example

Run this code
    
    
    #include <cassert>
     
    [[maybe_unused]] void f([[maybe_unused]] bool thing1,
                            [[maybe_unused]] bool thing2)
    {
        [[maybe_unused]] lbl: // the label “lbl” is not used, no warning
        [[maybe_unused]] bool b = not false and not true;
        [assert](../../error/assert.html)(b); // in release mode, assert is compiled out, and “b” is unused
                   // no warning because it is declared [[maybe_unused]]
    } // parameters “thing1” and “thing2” are not used, no warning
     
    int main() {}

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[CWG 2360](https://cplusplus.github.io/CWG/issues/2360.html) | C++17  | could not apply [[maybe_unused]] to structured bindings  | allowed   
  
### References

  * C++23 standard (ISO/IEC 14882:2024): 



    

  * 9.12.8 Maybe unused attribute [dcl.attr.unused] 



  * C++20 standard (ISO/IEC 14882:2020): 



    

  * 9.12.7 Maybe unused attribute [dcl.attr.unused] 



  * C++17 standard (ISO/IEC 14882:2017): 



    

  * 10.6.6 Maybe unused attribute [dcl.attr.unused] 



### See also

[C documentation](../../../c/language/attributes/maybe_unused.html "c/language/attributes/maybe unused") for maybe_unused  
---
