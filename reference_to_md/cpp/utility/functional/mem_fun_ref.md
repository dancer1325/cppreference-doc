 
  


  
  
  
  
  
  
  
  
  
  
  
  


---  
[invokeinvoke_r](invoke.html "cpp/utility/functional/invoke")(C++17)(C++23)  
Identity function object  
[identity](identity.html "cpp/utility/functional/identity")(C++20)  
  
| [Reference wrappers](../../functional.html#Reference_wrappers "cpp/utility/functional")  
---  
[reference_wrapper](reference_wrapper.html "cpp/utility/functional/reference wrapper")(C++11)  
[refcref](ref.html "cpp/utility/functional/ref")(C++11)(C++11)  
[unwrap_referenceunwrap_ref_decay](unwrap_reference.html "cpp/utility/functional/unwrap reference")(C++20)(C++20)  
  
| [Operator wrappers](../../functional.html#Operator_function_objects "cpp/utility/functional")  
---  
| [plus](plus.html "cpp/utility/functional/plus")  
---  
[minus](minus.html "cpp/utility/functional/minus")  
[negate](negate.html "cpp/utility/functional/negate")  
[multiplies](multiplies.html "cpp/utility/functional/multiplies")  
[divides](divides.html "cpp/utility/functional/divides")  
[modulus](modulus.html "cpp/utility/functional/modulus")  
[bit_and](bit_and.html "cpp/utility/functional/bit and")  
[bit_or](bit_or.html "cpp/utility/functional/bit or")  
[bit_not](bit_not.html "cpp/utility/functional/bit not")(C++14)  
[bit_xor](bit_xor.html "cpp/utility/functional/bit xor")  
  
| [equal_to](equal_to.html "cpp/utility/functional/equal to")  
---  
  
  
  
  
  
  
  
| [binder1stbinder2nd](binder12.html "cpp/utility/functional/binder12")(until C++17*)(until C++17*)  
---  
[bind1stbind2nd](bind12.html "cpp/utility/functional/bind12")(until C++17*)(until C++17*)  
  
  
**mem_fun_ref**(until C++17*)  
[mem_fun_ref_tmem_fun1_ref_tconst_mem_fun_ref_tconst_mem_fun1_ref_t](mem_fun_ref_t.html "cpp/utility/functional/mem fun ref t")(until C++17*)(until C++17*)(until C++17*)(until C++17*)  
[unary_negate](unary_negate.html "cpp/utility/functional/unary negate")(until C++20*)  
[binary_negate](binary_negate.html "cpp/utility/functional/binary negate")(until C++20*)  
  


Defined in header `[<functional>](../../header/functional.html "cpp/header/functional")` |  |   
---|---|---  
template< class Res, class T >  
[std::mem_fun_ref_t](mem_fun_ref_t.html)<Res,T> mem_fun_ref( Res (T::*f)() ); |  (1)  |  (deprecated in C++11)   
(removed in C++17)  
template< class Res, class T >  
[std::const_mem_fun_ref_t](mem_fun_ref_t.html)<Res,T> mem_fun_ref( Res (T::*f)() const ); |  (1)  |  (deprecated in C++11)   
(removed in C++17)  
template< class Res, class T, class Arg >  
[std::mem_fun1_ref_t](mem_fun_ref_t.html)<Res,T,Arg> mem_fun_ref( Res (T::*f)(Arg) ); |  (2)  |  (deprecated in C++11)   
(removed in C++17)  
template< class Res, class T, class Arg >  
[std::const_mem_fun1_ref_t](mem_fun_ref_t.html)<Res,T,Arg> mem_fun_ref( Res (T::*f)(Arg) const ); |  (2)  |  (deprecated in C++11)   
(removed in C++17)  
| |   
  
Creates a member function wrapper object, deducing the target type from the template arguments. The wrapper object expects a reference to an object of type `T` as the first parameter to its operator(). 

1) Effectively calls [std::mem_fun_ref_t](mem_fun_ref_t.html)<S,T>(f) or [std::const_mem_fun_ref_t](mem_fun_ref_t.html)<S,T>(f).

2) Effectively calls [std::mem_fun1_ref_t](mem_fun_ref_t.html)<S,T>(f) or [std::const_mem_fun1_ref_t](mem_fun_ref_t.html)<S,T>(f).

This function and the related types were deprecated in C++11 and removed in C++17 in favor of the more general [std::mem_fn](mem_fn.html "cpp/utility/functional/mem fn") and [std::bind](bind.html "cpp/utility/functional/bind"), both of which create callable adaptor-compatible function objects from member functions. 

## Contents

  * [1 Parameters](mem_fun_ref.html#Parameters)
  * [2 Return value](mem_fun_ref.html#Return_value)
  * [3 Exceptions](mem_fun_ref.html#Exceptions)
  * [4 Notes](mem_fun_ref.html#Notes)
  * [5 Example](mem_fun_ref.html#Example)
  * [6 See also](mem_fun_ref.html#See_also)

  
---  
  
### Parameters

f  |  \-  |  pointer to a member function to create a wrapper for   
---|---|---  
  
### Return value

A function object wrapping f. 

### Exceptions

May throw implementation-defined exceptions. 

### Notes

The difference between [std::mem_fun](mem_fun.html) and std::mem_fun_ref is that the former produces a function wrapper that expects a pointer to an object, whereas the latter — a reference. 

### Example

Uses `std::mem_fun_ref` to bind [std::string](../../string/basic_string.html "cpp/string/basic string")'s member function [size()](../../string/basic_string/size.html "cpp/string/basic string/size").

Run this code
    
    
    #include <algorithm>
    #include <functional>
    #include <iostream>
    #include <iterator>
    #include <string>
    #include <vector>
     
    int main()
    {
        [std::vector](../../container/vector.html)<[std::string](../../string/basic_string.html)> v = {"once", "upon", "a", "time"};
        [std::transform](../../algorithm/transform.html)(v.cbegin(), v.cend(),
                       [std::ostream_iterator](../../iterator/ostream_iterator.html)<[std::size_t](../../types/size_t.html)>([std::cout](../../io/cout.html), " "),
                       std::mem_fun_ref(&std::string::size));
    }

Output: 
    
    
    4 4 1 4

### See also

[ mem_fun](mem_fun.html "cpp/utility/functional/mem fun")(deprecated in C++11)(removed in C++17) |  creates a wrapper from a pointer to member function, callable with a pointer to object   
(function template)   
---|---
