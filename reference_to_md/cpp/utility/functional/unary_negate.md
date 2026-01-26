 
  


  
  
  
  
  
  
  
  
  
  
  
  


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
  
  
  
  
  
  
  
| [binder1stbinder2nd](binder12.html "cpp/utility/functional/binder12")(until C++17*)(until C++17*)  
---  
[bind1stbind2nd](bind12.html "cpp/utility/functional/bind12")(until C++17*)(until C++17*)  
  
  
[mem_fun_ref](mem_fun_ref.html "cpp/utility/functional/mem fun ref")(until C++17*)  
[mem_fun_ref_tmem_fun1_ref_tconst_mem_fun_ref_tconst_mem_fun1_ref_t](mem_fun_ref_t.html "cpp/utility/functional/mem fun ref t")(until C++17*)(until C++17*)(until C++17*)(until C++17*)  
**unary_negate**(until C++20*)  
[binary_negate](binary_negate.html "cpp/utility/functional/binary negate")(until C++20*)  
  


Defined in header `[<functional>](../../header/functional.html "cpp/header/functional")` |  |   
---|---|---  
template< class Predicate >  
struct unary_negate : public [std::unary_function](unary_function.html)<Predicate::argument_type, bool>; |  |  (until C++11)  
template< class Predicate >  
struct unary_negate; |  |  (since C++11)   
(deprecated in C++17)   
(removed in C++20)  
| |   
  
`std::unary_negate` is a wrapper function object returning the complement of the unary predicate it holds. 

The unary predicate type must define a member type, `argument_type`, that is convertible to the predicate's parameter type. The unary function objects obtained from [std::ref](ref.html "cpp/utility/functional/ref"), [std::cref](ref.html "cpp/utility/functional/ref"), [std::negate](negate.html "cpp/utility/functional/negate"), [std::logical_not](logical_not.html "cpp/utility/functional/logical not"), [std::mem_fn](mem_fn.html "cpp/utility/functional/mem fn"), [std::function](function.html "cpp/utility/functional/function"), [std::hash](../hash.html "cpp/utility/hash"), or from another call to [std::not1](not1.html "cpp/utility/functional/not1") have this type defined, as are function objects derived from the deprecated [std::unary_function](unary_function.html "cpp/utility/functional/unary function"). 

`std::unary_negate` objects are easily constructed with helper function [std::not1](not1.html "cpp/utility/functional/not1"). 

## Contents

  * [1 Member types](unary_negate.html#Member_types)
  * [2 Member functions](unary_negate.html#Member_functions)
  * [3 std::unary_negate::unary_negate](unary_negate.html#std::unary_negate::unary_negate)
    * [3.1 Parameters](unary_negate.html#Parameters)
  * [4 std::unary_negate::operator()](unary_negate.html#std::unary_negate::operator.28.29)
    * [4.1 Parameters](unary_negate.html#Parameters_2)
    * [4.2 Return value](unary_negate.html#Return_value)
    * [4.3 Example](unary_negate.html#Example)
    * [4.4 See also](unary_negate.html#See_also)

  
---  
  
### Member types

Type  |  Definition   
---|---  
`argument_type` |  Predicate::argument_type  
`result_type` |  bool  
  
### Member functions

(constructor) |  constructs a new unary_negate object with the supplied predicate   
(public member function)  
---|---  
operator() |  returns the logical complement of the result of a call to the stored predicate   
(public member function)  
  
##  std::unary_negate::unary_negate

explicit unary_negate( Predicate const& pred ); |  |  (until C++14)  
---|---|---  
constexpr explicit unary_negate( Predicate const& pred ); |  |  (since C++14)  
| |   
  
Constructs a `std::unary_negate` function object with the stored predicate pred. 

###  Parameters

pred  |  \-  |  predicate function object   
---|---|---  
  
##  std::unary_negate::operator()

bool operator()( argument_type const& x ) const; |  |  (until C++14)  
---|---|---  
constexpr bool operator()( argument_type const& x ) const; |  |  (since C++14)  
| |   
  
Returns the logical complement of the result of calling pred(x). 

###  Parameters

x  |  \-  |  argument to pass through to predicate   
---|---|---  
  
###  Return value

The logical complement of the result of calling pred(x). 

### Example

Run this code
    
    
    #include <algorithm>
    #include <functional>
    #include <iostream>
    #include <vector>
     
    struct less_than_7 : [std::unary_function](unary_function.html)<int, bool>
    {
        bool operator()(int i) const { return i < 7; }
    };
     
    int main()
    {
        [std::vector](../../container/vector.html)<int> v(7, 7);
        v[0] = v[1] = v[2] = 6;
     
        std::unary_negate<less_than_7> not_less_than_7((less_than_7()));
        // C++11 solution:
        // Use std::function<bool (int)>
        // std::function<bool (int)> not_less_than_7 =
        //     [](int x)->bool { return !less_than_7()(x); };
     
        [std::cout](../../io/cout.html) << [std::count_if](../../algorithm/count.html)(v.begin(), v.end(), not_less_than_7);
    }

Output: 
    
    
    4

### See also

[ binary_negate](binary_negate.html "cpp/utility/functional/binary negate")(deprecated in C++17)(removed in C++20) |  wrapper function object returning the complement of the binary predicate it holds   
(class template)   
---|---  
[ function](function.html "cpp/utility/functional/function")(C++11) |  copyable wrapper of any copy constructible callable object   
(class template)   
[ move_only_function](move_only_function.html "cpp/utility/functional/move only function")(C++23) |  move-only wrapper of any callable object that supports qualifiers in a given call signature   
(class template)   
[ not1](not1.html "cpp/utility/functional/not1")(deprecated in C++17)(removed in C++20) |  constructs custom **std::unary_negate** object   
(function template)   
[ ptr_fun](ptr_fun.html "cpp/utility/functional/ptr fun")(deprecated in C++11)(removed in C++17) |  creates an adaptor-compatible function object wrapper from a pointer to function   
(function template)   
[ unary_function](unary_function.html "cpp/utility/functional/unary function")(deprecated in C++11)(removed in C++17) |  adaptor-compatible unary function base class   
(class template) 
