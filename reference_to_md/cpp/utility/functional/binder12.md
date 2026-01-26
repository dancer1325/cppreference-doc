 
  


  
  
  
  
  
  
  
  
  
  
  
  


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
  
  
  
  
  
  
  
| **binder1st binder2nd**(until C++17*)(until C++17*)  
---  
[bind1stbind2nd](bind12.html "cpp/utility/functional/bind12")(until C++17*)(until C++17*)  
  
  
[mem_fun_ref](mem_fun_ref.html "cpp/utility/functional/mem fun ref")(until C++17*)  
[mem_fun_ref_tmem_fun1_ref_tconst_mem_fun_ref_tconst_mem_fun1_ref_t](mem_fun_ref_t.html "cpp/utility/functional/mem fun ref t")(until C++17*)(until C++17*)(until C++17*)(until C++17*)  
[unary_negate](unary_negate.html "cpp/utility/functional/unary negate")(until C++20*)  
[binary_negate](binary_negate.html "cpp/utility/functional/binary negate")(until C++20*)  
  


Defined in header `[<functional>](../../header/functional.html "cpp/header/functional")` |  |   
---|---|---  
template< class Fn >  
class binder1st  
: public [std::unary_function](unary_function.html)<typename Fn::second_argument_type,   
typename Fn::result_type> {  
protected:  
Fn op;  
typename Fn::first_argument_type value;  
public:  
binder1st( const Fn& fn,   
const typename Fn::first_argument_type& value );  
  
typename Fn::result_type   
operator()(const typename Fn::second_argument_type& x) const;  
  
typename Fn::result_type   
operator()(typename Fn::second_argument_type& x) const;  
}; |  (1)  |  (deprecated in C++11)   
(removed in C++17)  
template< class Fn >  
class binder2nd  
: public [std::unary_function](unary_function.html)<typename Fn::first_argument_type,  
typename Fn::result_type> {  
protected:  
Fn op;  
typename Fn::second_argument_type value;  
public:  
binder2nd( const Fn& fn,   
const typename Fn::second_argument_type& value );  
  
typename Fn::result_type   
operator()(const typename Fn::first_argument_type& x) const;  
  
typename Fn::result_type   
operator()(typename Fn::first_argument_type& x) const;  
}; |  (2)  |  (deprecated in C++11)   
(removed in C++17)  
| |   
  
A function object that binds an argument to a binary function. 

The value of the parameter is passed to the object at the construction time and stored within the object. Whenever the function object is invoked though `operator()`, the stored value is passed as one of the arguments, the other argument is passed as an argument of `operator()`. The resulting function object is a unary function. 

1) Binds the first parameter to the value value given at the construction of the object.

2) Binds the second parameter to the value value given at the construction of the object.

### Example

Run this code
    
    
    #include <cmath>
    #include <functional>
    #include <iostream>
    #include <vector>
     
    const double pi = [std::acos](../../numeric/math/acos.html)(-1); // use std::numbers::pi in C++20
     
    int main()
    {
        // deprecated in C++11, removed in C++17
        auto f1 = [std::bind1st](bind12.html)([std::multiplies](multiplies.html)<double>(), pi / 180.0);
     
        // C++11 replacement
        auto f2 = [](double a) { return a * pi / 180.0; };
     
        for (double n : {0, 30, 45, 60, 90, 180})
            [std::cout](../../io/cout.html) << n << "°\t" << [std::fixed](../../io/manip/fixed.html) << "= "
                      << f1(n) << " rad (using binder)\t= "
                      << f2(n) << " rad (using lambda)\n"
                      << [std::defaultfloat](../../io/manip/fixed.html);
    }

Output: 
    
    
    0°	= 0.000000 rad (using binder)	= 0.000000 rad (using lambda)
    30°	= 0.523599 rad (using binder)	= 0.523599 rad (using lambda)
    45°	= 0.785398 rad (using binder)	= 0.785398 rad (using lambda)
    60°	= 1.047198 rad (using binder)	= 1.047198 rad (using lambda)
    90°	= 1.570796 rad (using binder)	= 1.570796 rad (using lambda)
    180°	= 3.141593 rad (using binder)	= 3.141593 rad (using lambda)

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 109](https://cplusplus.github.io/LWG/issue109) | C++98  | `operator()` could not modify to argument passed to it  | added overloads to handle this   
  
### See also

[ bind1stbind2nd](bind12.html "cpp/utility/functional/bind12")(deprecated in C++11)(removed in C++17) |  binds one argument to a binary function   
(function template)   
---|---
