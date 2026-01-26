 
  


  
  
  
  
  
  
  
  
  
  
  
  


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
**minus**  
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
  
  
  
  
  
  
  


Defined in header `[<functional>](../../header/functional.html "cpp/header/functional")` |  |   
---|---|---  
template< class T >  
struct minus; |  |  (until C++14)  
template< class T = void >  
struct minus; |  |  (since C++14)  
| |   
  
Function object for performing subtraction. Effectively calls operator- on two instances of type `T`. 

## Contents

  * [1 Specializations](minus.html#Specializations)
  * [2 Member types](minus.html#Member_types)
  * [3 Member functions](minus.html#Member_functions)
  * [4 std::minus::operator()](minus.html#std::minus::operator.28.29)
    * [4.1 Parameters](minus.html#Parameters)
    * [4.2 Return value](minus.html#Return_value)
    * [4.3 Exceptions](minus.html#Exceptions)
    * [4.4 Possible implementation](minus.html#Possible_implementation)

  
---  
  
### Specializations

The standard library provides a specialization of `std::minus` when `T` is not specified, which leaves the parameter types and return type to be deduced.  |  [ minus<void>](minus_void.html "cpp/utility/functional/minus void")(C++14) |  function object implementing x - y deducing parameter and return types   
(class template specialization)   
---|---  
(since C++14)  
  
### Member types

Type  |  Definition   
---|---  
`result_type` (deprecated in C++17)(removed in C++20) |  `T`  
`first_argument_type` (deprecated in C++17)(removed in C++20) |  `T`  
`second_argument_type` (deprecated in C++17)(removed in C++20) |  `T`  
These member types are obtained via publicly inheriting [std::binary_function](binary_function.html)<T, T, T>.  | (until C++11)  
---|---  
  
### Member functions

operator() |  returns the difference between two arguments   
(public member function)  
---|---  
  
##  std::minus::operator()

T operator()( const T& lhs, const T& rhs ) const; |  | (constexpr since C++14)  
---|---|---  
| |   
  
Returns the difference between lhs and rhs. 

###  Parameters

lhs, rhs  |  \-  |  values to subtract from one another   
---|---|---  
  
###  Return value

The result of lhs - rhs. 

### Exceptions

May throw implementation-defined exceptions. 

###  Possible implementation
    
    
    constexpr T operator()(const T& lhs, const T& rhs) const 
    {
        return lhs - rhs;
    }  
  
---
