 
  


  
  
  
  
  
  
  
  
  
  
  
  


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
**modulus**  
[bit_and](bit_and.html "cpp/utility/functional/bit and")  
[bit_or](bit_or.html "cpp/utility/functional/bit or")  
[bit_not](bit_not.html "cpp/utility/functional/bit not")(C++14)  
[bit_xor](bit_xor.html "cpp/utility/functional/bit xor")  
  
| [equal_to](equal_to.html "cpp/utility/functional/equal to")  
---  
  
  
  
  
  
  
  


Defined in header `[<functional>](../../header/functional.html "cpp/header/functional")` |  |   
---|---|---  
template< class T >  
struct modulus; |  |  (until C++14)  
template< class T = void >  
struct modulus; |  |  (since C++14)  
| |   
  
Function object for computing remainders of divisions. Implements operator% for type `T`. 

## Contents

  * [1 Specializations](modulus.html#Specializations)
  * [2 Member types](modulus.html#Member_types)
  * [3 Member functions](modulus.html#Member_functions)
  * [4 std::modulus::operator()](modulus.html#std::modulus::operator.28.29)
    * [4.1 Parameters](modulus.html#Parameters)
    * [4.2 Return value](modulus.html#Return_value)
    * [4.3 Exceptions](modulus.html#Exceptions)
    * [4.4 Possible implementation](modulus.html#Possible_implementation)
    * [4.5 See also](modulus.html#See_also)

  
---  
  
### Specializations

The standard library provides a specialization of `std::modulus` when `T` is not specified, which leaves the parameter types and return type to be deduced.  |  [ modulus<void>](modulus_void.html "cpp/utility/functional/modulus void")(C++14) |  function object implementing x % y deducing parameter and return types   
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

operator() |  returns the remainder from the division of the first argument by the second argument   
(public member function)  
---|---  
  
##  std::modulus::operator()

T operator()( const T& lhs, const T& rhs ) const; |  | (constexpr since C++14)  
---|---|---  
| |   
  
Returns the remainder of the division of lhs by rhs. 

###  Parameters

lhs, rhs  |  \-  |  values to divide one by another   
---|---|---  
  
###  Return value

The result of lhs % rhs. 

### Exceptions

May throw implementation-defined exceptions. 

###  Possible implementation
    
    
    constexpr T operator()(const T& lhs, const T& rhs) const 
    {
        return lhs % rhs;
    }  
  
---  
  
### See also

[ fmodfmodffmodl](../../numeric/math/fmod.html "cpp/numeric/math/fmod")(C++11)(C++11) |  remainder of the floating point division operation   
(function)   
---|---  
[ remainderremainderfremainderl](../../numeric/math/remainder.html "cpp/numeric/math/remainder")(C++11)(C++11)(C++11) |  signed remainder of the division operation   
(function) 
