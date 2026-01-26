 
  


  
  
  
  
  
  
  
  
  
  
  
  


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
**bit_or**  
[bit_not](bit_not.html "cpp/utility/functional/bit not")(C++14)  
[bit_xor](bit_xor.html "cpp/utility/functional/bit xor")  
  
| [equal_to](equal_to.html "cpp/utility/functional/equal to")  
---  
  
  
  
  
  
  
  


Defined in header `[<functional>](../../header/functional.html "cpp/header/functional")` |  |   
---|---|---  
template< class T >  
struct bit_or; |  |  (until C++14)  
template< class T = void >  
struct bit_or; |  |  (since C++14)  
| |   
  
Function object for performing bitwise OR. Effectively calls operator| on type `T`. 

## Contents

  * [1 Specializations](bit_or.html#Specializations)
  * [2 Member types](bit_or.html#Member_types)
  * [3 Member functions](bit_or.html#Member_functions)
  * [4 std::bit_or::operator()](bit_or.html#std::bit_or::operator.28.29)
    * [4.1 Parameters](bit_or.html#Parameters)
    * [4.2 Return value](bit_or.html#Return_value)
    * [4.3 Exceptions](bit_or.html#Exceptions)
    * [4.4 Possible implementation](bit_or.html#Possible_implementation)
    * [4.5 Defect reports](bit_or.html#Defect_reports)

  
---  
  
### Specializations

The standard library provides a specialization of `std::bit_or` when `T` is not specified, which leaves the parameter types and return type to be deduced.  |  [ bit_or<void>](bit_or_void.html "cpp/utility/functional/bit or void")(C++14) |  function object implementing x | y deducing parameter and return types   
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

operator() |  returns the result of bitwise OR of two arguments   
(public member function)  
---|---  
  
##  std::bit_or::operator()

T operator()( const T& lhs, const T& rhs ) const; |  | (constexpr since C++14)  
---|---|---  
| |   
  
Returns the result of bitwise OR of lhs and rhs. 

###  Parameters

lhs, rhs  |  \-  |  values to compute bitwise OR of   
---|---|---  
  
###  Return value

The result of lhs | rhs. 

### Exceptions

May throw implementation-defined exceptions. 

###  Possible implementation
    
    
    constexpr T operator()(const T& lhs, const T& rhs) const
    {
        return lhs | rhs;
    }  
  
---  
  
### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 660](https://cplusplus.github.io/LWG/issue660) | C++98  | function objects for bitwise operations are missing  | added 
