* == attribute specifier
* allows
  * indicating that dependency chain | release-consume [std::memory_order](../../atomic/memory_order.md) propagates in and out of the function
    * -> compiler can skip unnecessary memory fence instructions 

## Contents

  * [1 Syntax](carries_dependency.html#Syntax)
  * [2 Explanation](carries_dependency.html#Explanation)
  * [3 Example](carries_dependency.html#Example)
  * [4 References](carries_dependency.html#References)
  * [5 See also](carries_dependency.html#See_also)

### Syntax  
   
`**[[carries_dependency]]**` |  |   
  
### Explanation

This attribute may appear in two situations: 

1) it may apply to the parameter declarations of a function or lambda-expressions, in which case it indicates that initialization of the parameter carries dependency into lvalue-to-rvalue conversion of that object.

2) It may apply to the function declaration as a whole, in which case it indicates that the return value carries dependency to the evaluation of the function call expression.

This attribute must appear on the first declaration of a function or one of its parameters in any translation unit. If it is not used on the first declaration of a function or one of its parameters in another translation unit, the program is ill-formed; no diagnostic required.


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

[ kill_dependency](../../atomic/kill_dependency.html "cpp/atomic/kill dependency")(C++11)(deprecated in C++26) |  removes the specified object from the [std::memory_order_consume](../../atomic/memory_order.html "cpp/atomic/memory order") dependency tree   
(function template)   
---|---
