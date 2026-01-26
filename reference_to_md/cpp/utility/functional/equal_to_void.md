 
  


  
  
  
  
  
  
  
  
  
  
  
  


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
[minus<>](minus_void.html "cpp/utility/functional/minus void")(C++14)  
[negate<>](negate_void.html "cpp/utility/functional/negate void")(C++14)  
[multiplies<>](multiplies_void.html "cpp/utility/functional/multiplies void")(C++14)  
[divides<>](divides_void.html "cpp/utility/functional/divides void")(C++14)  
[modulus<>](modulus_void.html "cpp/utility/functional/modulus void")(C++14)  
[bit_and<>](bit_and_void.html "cpp/utility/functional/bit and void")(C++14)  
[bit_or<>](bit_or_void.html "cpp/utility/functional/bit or void")(C++14)  
[bit_not<>](bit_not_void.html "cpp/utility/functional/bit not void")(C++14)  
[bit_xor<>](bit_xor_void.html "cpp/utility/functional/bit xor void")(C++14)  
  
| **equal_to <>**(C++14)  
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
class equal_to<void>; |  |  (since C++14)  
| |   
  
[std::equal_to](equal_to.html)<void> is a specialization of [std::equal_to](equal_to.html "cpp/utility/functional/equal to") with parameter and return type deduced. 

## Contents

  * [1 Nested types](equal_to_void.html#Nested_types)
  * [2 Member functions](equal_to_void.html#Member_functions)
  * [3 std::equal_to<void>::operator()](equal_to_void.html#std::equal_to.3Cvoid.3E::operator.28.29)
    * [3.1 Parameters](equal_to_void.html#Parameters)
    * [3.2 Return value](equal_to_void.html#Return_value)
    * [3.3 Example](equal_to_void.html#Example)

  
---  
  
### Nested types

Nested type  |  Definition   
---|---  
`is_transparent` |  [unspecified](../../functional.html#Transparent_function_objects "cpp/utility/functional")  
  
### Member functions

** operator()** |  tests if the two arguments compare equal   
(public member function)  
---|---  
  
##  std::equal_to<void>::operator()

template< class T, class U >  
constexpr auto operator()( T&& lhs, U&& rhs ) const  
-> decltype([std::forward](../forward.html)<T>(lhs) == [std::forward](../forward.html)<U>(rhs)); |  |   
---|---|---  
| |   
  
Returns the result of equality comparison between lhs and rhs. 

###  Parameters

lhs, rhs  |  \-  |  values to compare   
---|---|---  
  
###  Return value

[std::forward](../forward.html)<T>(lhs) == [std::forward](../forward.html)<U>(rhs). 

### Example

Run this code
    
    
    #include <functional>
     
    int main()
    {
        constexpr int a = 0, b = 8;
        [std::equal_to](equal_to.html)<> equal{};
        static_assert(equal(a, a));
        static_assert(!equal(a, b));
    }
