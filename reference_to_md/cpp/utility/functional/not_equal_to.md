 
  


  
  
  
  
  
  
  
  
  
  
  
  


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
**not_equal_to**  
[greater](greater.html "cpp/utility/functional/greater")  
[less](less.html "cpp/utility/functional/less")  
[greater_equal](greater_equal.html "cpp/utility/functional/greater equal")  
[less_equal](less_equal.html "cpp/utility/functional/less equal")  
[logical_and](logical_and.html "cpp/utility/functional/logical and")  
[logical_or](logical_or.html "cpp/utility/functional/logical or")  
[logical_not](logical_not.html "cpp/utility/functional/logical not")  
  
  
  
  
  
  
  


Defined in header `[<functional>](../../header/functional.html "cpp/header/functional")` |  |   
---|---|---  
template< class T >  
struct not_equal_to; |  |  (until C++14)  
template< class T = void >  
struct not_equal_to; |  |  (since C++14)  
| |   
  
Function object for performing comparisons. Unless specialised, invokes operator!= on type `T`. 

## Contents

  * [1 Specializations](not_equal_to.html#Specializations)
  * [2 Member types](not_equal_to.html#Member_types)
  * [3 Member functions](not_equal_to.html#Member_functions)
  * [4 std::not_equal_to::operator()](not_equal_to.html#std::not_equal_to::operator.28.29)
    * [4.1 Parameters](not_equal_to.html#Parameters)
    * [4.2 Return value](not_equal_to.html#Return_value)
    * [4.3 Exceptions](not_equal_to.html#Exceptions)
    * [4.4 Possible implementation](not_equal_to.html#Possible_implementation)
    * [4.5 See also](not_equal_to.html#See_also)

  
---  
  
### Specializations

The standard library provides a specialization of `std::not_equal_to` when `T` is not specified, which leaves the parameter types and return type to be deduced.  |  [ not_equal_to<void>](not_equal_to_void.html "cpp/utility/functional/not equal to void")(C++14) |  function object implementing x != y deducing parameter and return types   
(class template specialization)   
---|---  
(since C++14)  
  
### Member types

Type  |  Definition   
---|---  
`result_type` (deprecated in C++17)(removed in C++20) |  bool  
`first_argument_type` (deprecated in C++17)(removed in C++20) |  `T`  
`second_argument_type` (deprecated in C++17)(removed in C++20) |  `T`  
These member types are obtained via publicly inheriting [std::binary_function](binary_function.html)<T, T, bool>.  | (until C++11)  
---|---  
  
### Member functions

operator() |  checks if the arguments are _not equal_   
(public member function)  
---|---  
  
##  std::not_equal_to::operator()

bool operator()( const T& lhs, const T& rhs ) const; |  | (constexpr since C++14)  
---|---|---  
| |   
  
Checks whether lhs is _not equal_ to rhs. 

###  Parameters

lhs, rhs  |  \-  |  values to compare   
---|---|---  
  
###  Return value

true if lhs != rhs, false otherwise. 

### Exceptions

May throw implementation-defined exceptions. 

###  Possible implementation
    
    
    constexpr bool operator()(const T& lhs, const T& rhs) const 
    {
        return lhs != rhs;
    }  
  
---  
  
### See also

[ equal](../../algorithm/equal.html "cpp/algorithm/equal") |  determines if two sets of elements are the same   
(function template)   
---|---  
[ less](less.html "cpp/utility/functional/less") |  function object implementing x < y   
(class template)   
[ ranges::not_equal_to](ranges/not_equal_to.html "cpp/utility/functional/ranges/not equal to")(C++20) |  constrained function object implementing x != y   
(class) 
