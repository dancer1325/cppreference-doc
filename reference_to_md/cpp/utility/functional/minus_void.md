 
  


  
  
  
  
  
  
  
  
  
  
  
  


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
  
  
  
| [Transparent operator wrappers](../../functional.html#Transparent_function_objects "cpp/utility/functional")  
---  
| [plus<>](plus_void.html "cpp/utility/functional/plus void")(C++14)  
---  
**minus <>**(C++14)  
[negate<>](negate_void.html "cpp/utility/functional/negate void")(C++14)  
[multiplies<>](multiplies_void.html "cpp/utility/functional/multiplies void")(C++14)  
[divides<>](divides_void.html "cpp/utility/functional/divides void")(C++14)  
[modulus<>](modulus_void.html "cpp/utility/functional/modulus void")(C++14)  
[bit_and<>](bit_and_void.html "cpp/utility/functional/bit and void")(C++14)  
[bit_or<>](bit_or_void.html "cpp/utility/functional/bit or void")(C++14)  
[bit_not<>](bit_not_void.html "cpp/utility/functional/bit not void")(C++14)  
[bit_xor<>](bit_xor_void.html "cpp/utility/functional/bit xor void")(C++14)  
  
| [equal_to<>](equal_to_void.html "cpp/utility/functional/equal to void")(C++14)  
---  
[not_equal_to<>](not_equal_to_void.html "cpp/utility/functional/not equal to void")(C++14)  
[greater<>](greater_void.html "cpp/utility/functional/greater void")(C++14)  
[less<>](less_void.html "cpp/utility/functional/less void")(C++14)  
[greater_equal<>](greater_equal_void.html "cpp/utility/functional/greater equal void")(C++14)  
[less_equal<>](less_equal_void.html "cpp/utility/functional/less equal void")(C++14)  
[logical_and<>](logical_and_void.html "cpp/utility/functional/logical and void")(C++14)  
[logical_or<>](logical_or_void.html "cpp/utility/functional/logical or void")(C++14)  
[logical_not<>](logical_not_void.html "cpp/utility/functional/logical not void")(C++14)  
  
  
  
  


Defined in header `[<functional>](../../header/functional.html "cpp/header/functional")` |  |   
---|---|---  
template<>  
class minus<void>; |  |  (since C++14)  
| |   
  
[std::minus](minus.html)<void> is a specialization of [std::minus](minus.html "cpp/utility/functional/minus") with parameter and return type deduced. 

## Contents

  * [1 Member types](minus_void.html#Member_types)
  * [2 Member functions](minus_void.html#Member_functions)
  * [3 std::minus<void>::operator()](minus_void.html#std::minus.3Cvoid.3E::operator.28.29)
    * [3.1 Parameters](minus_void.html#Parameters)
    * [3.2 Return value](minus_void.html#Return_value)
    * [3.3 Example](minus_void.html#Example)

  
---  
  
### Member types

Type  |  Definition   
---|---  
`is_transparent` |  [unspecified](../../functional.html#Transparent_function_objects "cpp/utility/functional")  
  
### Member functions

** operator()** |  returns the difference of two arguments   
(public member function)  
---|---  
  
##  std::minus<void>::operator()

template< class T, class U >  
constexpr auto operator()( T&& lhs, U&& rhs ) const  
-> decltype([std::forward](../forward.html)<T>(lhs) - [std::forward](../forward.html)<U>(rhs)); |  |   
---|---|---  
| |   
  
Returns the difference of lhs and rhs. 

###  Parameters

lhs, rhs  |  \-  |  values to subtract   
---|---|---  
  
###  Return value

[std::forward](../forward.html)<T>(lhs) - [std::forward](../forward.html)<U>(rhs). 

### Example

Run this code
    
    
    #include <complex>
    #include <functional>
    #include <iostream>
     
    int main()
    {
        auto complex_minus = [std::minus](minus.html)<void>{}; // “void” can be omitted
        constexpr [std::complex](../../numeric/complex.html)<int> z(4, 2);
        [std::cout](../../io/cout.html) << complex_minus(z, 1) << '\n';
        [std::cout](../../io/cout.html) << (z - 1) << '\n';
    }

Output: 
    
    
    (3,2)
    (3,2)
