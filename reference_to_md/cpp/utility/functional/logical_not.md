 
  


  
  
  
  
  
  
  
  
  
  
  
  


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
[not_equal_to](not_equal_to.html "cpp/utility/functional/not equal to")  
[greater](greater.html "cpp/utility/functional/greater")  
[less](less.html "cpp/utility/functional/less")  
[greater_equal](greater_equal.html "cpp/utility/functional/greater equal")  
[less_equal](less_equal.html "cpp/utility/functional/less equal")  
[logical_and](logical_and.html "cpp/utility/functional/logical and")  
[logical_or](logical_or.html "cpp/utility/functional/logical or")  
**logical_not**  
  
  
  
  
  
  
  


Defined in header `[<functional>](../../header/functional.html "cpp/header/functional")` |  |   
---|---|---  
template< class T >  
struct logical_not; |  |  (until C++14)  
template< class T = void >  
struct logical_not; |  |  (since C++14)  
| |   
  
Function object for performing logical NOT (logical negation). Effectively calls operator! for type `T`. 

## Contents

  * [1 Specializations](logical_not.html#Specializations)
  * [2 Member types](logical_not.html#Member_types)
  * [3 Member functions](logical_not.html#Member_functions)
  * [4 std::logical_not::operator()](logical_not.html#std::logical_not::operator.28.29)
    * [4.1 Parameters](logical_not.html#Parameters)
    * [4.2 Return value](logical_not.html#Return_value)
    * [4.3 Exceptions](logical_not.html#Exceptions)
    * [4.4 Possible implementation](logical_not.html#Possible_implementation)

  
---  
  
### Specializations

The standard library provides a specialization of `std::logical_not` when `T` is not specified, which leaves the parameter types and return type to be deduced.  |  [ logical_not<void>](logical_not_void.html "cpp/utility/functional/logical not void")(C++14) |  function object implementing !x deducing parameter and return types   
(class template specialization)   
---|---  
(since C++14)  
  
### Member types

Type  |  Definition   
---|---  
`result_type` (deprecated in C++17)(removed in C++20) |  bool  
`argument_type` (deprecated in C++17)(removed in C++20) |  `T`  
These member types are obtained via publicly inheriting [std::unary_function](unary_function.html)<T, bool>.  | (until C++11)  
---|---  
  
### Member functions

operator() |  returns the logical NOT of the argument   
(public member function)  
---|---  
  
##  std::logical_not::operator()

bool operator()( const T& arg ) const; |  | (constexpr since C++14)  
---|---|---  
| |   
  
Returns the logical NOT of arg. 

###  Parameters

arg  |  \-  |  value to compute logical NOT of   
---|---|---  
  
###  Return value

The result of !arg. 

### Exceptions

May throw implementation-defined exceptions. 

###  Possible implementation
    
    
    constexpr // since C++14
    bool operator()(const T& arg) const 
    {
        return !arg;
    }  
  
---
