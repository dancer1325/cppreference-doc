 
  


  
  
  
  
  
  
  
  
  
  
  
  


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
  
| [equal_to<>](equal_to_void.html "cpp/utility/functional/equal to void")(C++14)  
---  
[not_equal_to<>](not_equal_to_void.html "cpp/utility/functional/not equal to void")(C++14)  
[greater<>](greater_void.html "cpp/utility/functional/greater void")(C++14)  
**less <>**(C++14)  
[greater_equal<>](greater_equal_void.html "cpp/utility/functional/greater equal void")(C++14)  
[less_equal<>](less_equal_void.html "cpp/utility/functional/less equal void")(C++14)  
[logical_and<>](logical_and_void.html "cpp/utility/functional/logical and void")(C++14)  
[logical_or<>](logical_or_void.html "cpp/utility/functional/logical or void")(C++14)  
[logical_not<>](logical_not_void.html "cpp/utility/functional/logical not void")(C++14)  
  
  
  
  


Defined in header `[<functional>](../../header/functional.html "cpp/header/functional")` |  |   
---|---|---  
template<>  
class less<void>; |  |  (since C++14)  
| |   
  
[std::less](less.html)<void> is a specialization of [std::less](less.html "cpp/utility/functional/less") with parameter and return type deduced. 

## Contents

  * [1 Nested types](less_void.html#Nested_types)
  * [2 Member functions](less_void.html#Member_functions)
  * [3 std::less<void>::operator()](less_void.html#std::less.3Cvoid.3E::operator.28.29)
    * [3.1 Parameters](less_void.html#Parameters)
    * [3.2 Return value](less_void.html#Return_value)
    * [3.3 Exceptions](less_void.html#Exceptions)
    * [3.4 Example](less_void.html#Example)
    * [3.5 Defect reports](less_void.html#Defect_reports)

  
---  
  
### Nested types

Nested type  |  Definition   
---|---  
`is_transparent` |  [unspecified](../../functional.html#Transparent_function_objects "cpp/utility/functional")  
  
### Member functions

** operator()** |  tests if lhs compares less than rhs   
(public member function)  
---|---  
  
##  std::less<void>::operator()

template< class T, class U >  
constexpr auto operator()( T&& lhs, U&& rhs ) const  
-> decltype([std::forward](../forward.html)<T>(lhs) < [std::forward](../forward.html)<U>(rhs)); |  |   
---|---|---  
| |   
  
Returns the result of [std::forward](../forward.html)<T>(lhs) < [std::forward](../forward.html)<U>(rhs). 

###  Parameters

lhs, rhs  |  \-  |  values to compare   
---|---|---  
  
###  Return value

[std::forward](../forward.html)<T>(lhs) < [std::forward](../forward.html)<U>(rhs). 

If a built-in operator comparing pointers is called, the result is consistent with the [implementation-defined strict total order over pointers](../../language/operator_comparison.html#Pointer_total_order "cpp/language/operator comparison"). 

### Exceptions

May throw implementation-defined exceptions. 

### Example

Run this code
    
    
    #include <algorithm>
    #include <functional>
     
    constexpr bool strictly_negative(int lhs)
    {
        return [std::less](less.html)<>()(lhs, 0);
    }
     
    int main()
    {
        constexpr signed low = 010;
        constexpr unsigned high = 10;
        [std::less](less.html)<> less{};
        static_assert(less(low, high));
     
        constexpr static auto arr = {0, -1, -2, -3, -4, -5};
        static_assert(![std::all_of](../../algorithm/none_of.html)(arr.begin(), arr.end(), strictly_negative));
        static_assert([std::all_of](../../algorithm/none_of.html)(arr.begin() + 1, arr.end(), strictly_negative));
    }

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 2562](https://cplusplus.github.io/LWG/issue2562) | C++98  | the pointer total order might be inconsistent  | guaranteed to be consistent 
