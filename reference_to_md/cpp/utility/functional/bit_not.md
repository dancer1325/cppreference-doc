 
  


  
  
  
  
  
  
  
  
  
  
  
  


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
**bit_not**(C++14)  
[bit_xor](bit_xor.html "cpp/utility/functional/bit xor")  
  
| [equal_to](equal_to.html "cpp/utility/functional/equal to")  
---  
  
  
  
  
  
  
  


Defined in header `[<functional>](../../header/functional.html "cpp/header/functional")` |  |   
---|---|---  
template< class T = void >  
struct bit_not; |  |  (since C++14)  
| |   
  
Function object for performing bitwise NOT. Effectively calls operator~ on type `T`. 

## Contents

  * [1 Specializations](bit_not.html#Specializations)
  * [2 Member types](bit_not.html#Member_types)
  * [3 Member functions](bit_not.html#Member_functions)
  * [4 std::bit_not::operator()](bit_not.html#std::bit_not::operator.28.29)
    * [4.1 Parameters](bit_not.html#Parameters)
    * [4.2 Return value](bit_not.html#Return_value)
    * [4.3 Exceptions](bit_not.html#Exceptions)
    * [4.4 Possible implementation](bit_not.html#Possible_implementation)
    * [4.5 Notes](bit_not.html#Notes)

  
---  
  
### Specializations

The standard library provides a specialization of `std::bit_not` when `T` is not specified, which leaves the parameter types and return type to be deduced. 

[ bit_not<void>](bit_not_void.html "cpp/utility/functional/bit not void")(C++14) |  function object implementing ~x deducing parameter and return types   
(class template specialization)   
---|---  
  
### Member types

Type  |  Definition   
---|---  
`result_type` (deprecated in C++17)(removed in C++20) |  `T`  
`argument_type` (deprecated in C++17)(removed in C++20) |  `T`  
  
### Member functions

operator()(C++14) |  returns the result of bitwise NOT of its argument   
(public member function)  
---|---  
  
##  std::bit_not::operator()

constexpr T operator()( const T& arg ) const; |  |  (since C++14)  
---|---|---  
| |   
  
Returns the result of bitwise NOT of arg. 

###  Parameters

arg  |  \-  |  value to compute bitwise NOT of   
---|---|---  
  
###  Return value

The result of ~arg. 

### Exceptions

May throw implementation-defined exceptions. 

###  Possible implementation
    
    
    constexpr T operator()(const T& arg) const
    {
        return ~arg;
    }  
  
---  
  
### Notes

Although `std::bit_not` is added via post-C++11 proposal [N3421](https://wg21.link/N3421), it is treated as a part of the resolution for [LWG issue 660](https://cplusplus.github.io/LWG/issue660) (except for its transparent specialization [`std::bit_not<>`](bit_not_void.html "cpp/utility/functional/bit not void")) by common implementations, and thus available in their C++98/03 mode. 
