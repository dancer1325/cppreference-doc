 
  


  
  
  
  
  
  
  
  
  
  
  
  


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
**greater**  
[less](less.html "cpp/utility/functional/less")  
[greater_equal](greater_equal.html "cpp/utility/functional/greater equal")  
[less_equal](less_equal.html "cpp/utility/functional/less equal")  
[logical_and](logical_and.html "cpp/utility/functional/logical and")  
[logical_or](logical_or.html "cpp/utility/functional/logical or")  
[logical_not](logical_not.html "cpp/utility/functional/logical not")  
  
  
  
  
  
  
  


Defined in header `[<functional>](../../header/functional.html "cpp/header/functional")` |  |   
---|---|---  
template< class T >  
struct greater; |  | (until C++14)  
template< class T = void >  
struct greater; |  |  (since C++14)  
| |   
  
Function object for performing comparisons. The main template invokes operator> on type `T`. 

## Contents

  * [1 Specializations](greater.html#Specializations)
  * [2 Member types](greater.html#Member_types)
  * [3 Member functions](greater.html#Member_functions)
  * [4 std::greater::operator()](greater.html#std::greater::operator.28.29)
    * [4.1 Parameters](greater.html#Parameters)
    * [4.2 Return value](greater.html#Return_value)
    * [4.3 Exceptions](greater.html#Exceptions)
    * [4.4 Possible implementation](greater.html#Possible_implementation)
    * [4.5 Defect reports](greater.html#Defect_reports)
    * [4.6 See also](greater.html#See_also)

  
---  
  
### Specializations

[ greater<void>](greater_void.html "cpp/utility/functional/greater void")(C++14) |  function object implementing x > y deducing parameter and return types   
(class template specialization)   
---|---  
  
### Member types

Type  |  Definition   
---|---  
`result_type` (deprecated in C++17)(removed in C++20) |  bool  
`first_argument_type` (deprecated in C++17)(removed in C++20) |  `T`  
`second_argument_type` (deprecated in C++17)(removed in C++20) |  `T`  
These member types are obtained via publicly inheriting [std::binary_function](binary_function.html)<T, T, bool>.  | (until C++11)  
---|---  
  
### Member functions

operator() |  checks whether the first argument is _greater_ than the second   
(public member function)  
---|---  
  
##  std::greater::operator()

bool operator()( const T& lhs, const T& rhs ) const; |  | (constexpr since C++14)  
---|---|---  
| |   
  
Checks whether lhs is _greater_ than rhs. 

###  Parameters

lhs, rhs  |  \-  |  values to compare   
---|---|---  
  
###  Return value

lhs > rhs. 

If `T` is a pointer type, the result is consistent with the [implementation-defined strict total order over pointers](../../language/operator_comparison.html#Pointer_total_order "cpp/language/operator comparison"). 

### Exceptions

May throw implementation-defined exceptions. 

###  Possible implementation
    
    
    constexpr bool operator()(const T& lhs, const T& rhs) const 
    {
        return lhs > rhs; // assumes that the implementation handles pointer total order
    }  
  
---  
  
### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 2562](https://cplusplus.github.io/LWG/issue2562) | C++98  | the pointer total order might be inconsistent  | guaranteed to be consistent   
  
### See also

[ less](less.html "cpp/utility/functional/less") |  function object implementing x < y   
(class template)   
---|---  
[ ranges::greater](ranges/greater.html "cpp/utility/functional/ranges/greater")(C++20) |  constrained function object implementing x > y   
(class) 
