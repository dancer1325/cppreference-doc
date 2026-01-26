 
  


  
  
  
  
  
  
  
  
  
  
  
  


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
**bind1st bind2nd**(until C++17*)(until C++17*)  
  
  
[mem_fun_ref](mem_fun_ref.html "cpp/utility/functional/mem fun ref")(until C++17*)  
[mem_fun_ref_tmem_fun1_ref_tconst_mem_fun_ref_tconst_mem_fun1_ref_t](mem_fun_ref_t.html "cpp/utility/functional/mem fun ref t")(until C++17*)(until C++17*)(until C++17*)(until C++17*)  
[unary_negate](unary_negate.html "cpp/utility/functional/unary negate")(until C++20*)  
[binary_negate](binary_negate.html "cpp/utility/functional/binary negate")(until C++20*)  
  


Defined in header `[<functional>](../../header/functional.html "cpp/header/functional")` |  |   
---|---|---  
template< class F, class T >  
[std::binder1st](binder12.html)<F> bind1st( const F& f, const T& x ); |  (1)  |  (deprecated in C++11)   
(removed in C++17)  
template< class F, class T >  
[std::binder2nd](binder12.html)<F> bind2nd( const F& f, const T& x ); |  (2)  |  (deprecated in C++11)   
(removed in C++17)  
| |   
  
Binds a given argument x to a first or second parameter of the given binary function object f. That is, stores x within the resulting wrapper, which, if called, passes x as the first or the second parameter of f. 

1) Binds the first argument of f to x. Effectively calls [std::binder1st](binder12.html)<F>(f, typename F::first_argument_type(x)).

2) Binds the second argument of f to x. Effectively calls [std::binder2nd](binder12.html)<F>(f, typename F::second_argument_type(x)).

## Contents

  * [1 Parameters](bind12.html#Parameters)
  * [2 Return value](bind12.html#Return_value)
  * [3 Exceptions](bind12.html#Exceptions)
  * [4 Example](bind12.html#Example)
  * [5 See also](bind12.html#See_also)

  
---  
  
### Parameters

f  |  \-  |  pointer to a function to bind an argument to   
---|---|---  
x  |  \-  |  argument to bind to f  
  
### Return value

A function object wrapping f and x. 

### Exceptions

May throw implementation-defined exceptions. 

### Example

Run this code
    
    
    #include <algorithm>
    #include <cmath>
    #include <cstddef>
    #include <functional>
    #include <iomanip>
    #include <iostream>
    #include <vector>
     
    int main()
    {
        [std::vector](../../container/vector.html)<double> a = {0, 30, 45, 60, 90, 180};
        [std::vector](../../container/vector.html)<double> r(a.size());
        const double pi = [std::acos](../../numeric/math/acos.html)(-1); // since C++20 use std::numbers::pi
     
        [std::transform](../../algorithm/transform.html)(a.begin(), a.end(), r.begin(),
            std::bind1st([std::multiplies](multiplies.html)<double>(), pi / 180.0));
    //  an equivalent lambda is: [pi](double a) { return a * pi / 180.0; });
     
        for ([std::size_t](../../types/size_t.html) n = 0; n < a.size(); ++n)
            [std::cout](../../io/cout.html) << [std::setw](../../io/manip/setw.html)(3) << a[n] << "° = " << [std::fixed](../../io/manip/fixed.html) << r[n]
                      << " rad\n" << [std::defaultfloat](../../io/manip/fixed.html);
    }

Output: 
    
    
      0° = 0.000000 rad
     30° = 0.523599 rad
     45° = 0.785398 rad
     60° = 1.047198 rad
     90° = 1.570796 rad
    180° = 3.141593 rad

### See also

[ binder1stbinder2nd](binder12.html "cpp/utility/functional/binder12")(deprecated in C++11)(removed in C++17) |  function object holding a binary function and one of its arguments   
(class template)   
---|---  
[ bind_frontbind_back](bind_front.html "cpp/utility/functional/bind front")(C++20)(C++23) |  bind a variable number of arguments, in order, to a function object   
(function template) 
