 
  


  
  
  
  
  
  
  
  
  
  
  
  


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
[unary_negate](unary_negate.html "cpp/utility/functional/unary negate")(until C++20*)  
**binary_negate**(until C++20*)  
  


Defined in header `[<functional>](../../header/functional.html "cpp/header/functional")` |  |   
---|---|---  
template< class Predicate >  
struct binary_negate  
: public [std::binary_function](binary_function.html)<  
Predicate::first_argument_type,  
Predicate::second_argument_type,  
bool  
>; |  |  (until C++11)  
template< class Predicate >  
struct binary_negate; |  |  (since C++11)   
(deprecated in C++17)   
(removed in C++20)  
| |   
  
`std::binary_negate` is a wrapper function object returning the complement of the binary predicate it holds. 

The binary predicate type must define two member types, `first_argument_type` and `second_argument_type`, that are convertible to the predicate's parameter types. The function objects obtained from [std::owner_less](../../memory/owner_less.html "cpp/memory/owner less"), [std::ref](ref.html "cpp/utility/functional/ref"), [std::cref](ref.html "cpp/utility/functional/ref"), [std::plus](plus.html "cpp/utility/functional/plus"), [std::minus](minus.html "cpp/utility/functional/minus"), [std::multiplies](multiplies.html "cpp/utility/functional/multiplies"), [std::divides](divides.html "cpp/utility/functional/divides"), [std::modulus](modulus.html "cpp/utility/functional/modulus"), [std::equal_to](equal_to.html "cpp/utility/functional/equal to"), [std::not_equal_to](not_equal_to.html "cpp/utility/functional/not equal to"), [std::greater](greater.html "cpp/utility/functional/greater"), [std::less](less.html "cpp/utility/functional/less"), [std::greater_equal](greater_equal.html "cpp/utility/functional/greater equal"), [std::less_equal](less_equal.html "cpp/utility/functional/less equal"), [std::logical_not](logical_not.html "cpp/utility/functional/logical not"), [std::logical_or](logical_or.html "cpp/utility/functional/logical or"), [std::bit_and](bit_and.html "cpp/utility/functional/bit and"), [std::bit_or](bit_or.html "cpp/utility/functional/bit or"), std::bit_xor, [std::mem_fn](mem_fn.html "cpp/utility/functional/mem fn"), [std::map::value_comp](../../container/map/value_comp.html "cpp/container/map/value comp"), [std::multimap::value_comp](../../container/multimap/value_comp.html "cpp/container/multimap/value comp"), [std::function](function.html "cpp/utility/functional/function"), or from a call to [std::not2](not2.html "cpp/utility/functional/not2") have these types defined, as are function objects derived from the deprecated [std::binary_function](binary_function.html "cpp/utility/functional/binary function"). 

`std::binary_negate` objects are easily constructed with helper function [std::not2](not2.html "cpp/utility/functional/not2"). 

## Contents

  * [1 Member types](binary_negate.html#Member_types)
  * [2 Member functions](binary_negate.html#Member_functions)
  * [3 std::binary_negate::binary_negate](binary_negate.html#std::binary_negate::binary_negate)
    * [3.1 Parameters](binary_negate.html#Parameters)
  * [4 std::binary_negate::operator()](binary_negate.html#std::binary_negate::operator.28.29)
    * [4.1 Parameters](binary_negate.html#Parameters_2)
    * [4.2 Return value](binary_negate.html#Return_value)
    * [4.3 Example](binary_negate.html#Example)
    * [4.4 See also](binary_negate.html#See_also)

  
---  
  
### Member types

Type  |  Definition   
---|---  
`first_argument_type` |  Predicate::first_argument_type  
`second_argument_type` |  Predicate::second_argument_type  
`result_type` |  bool  
  
### Member functions

(constructor) |  constructs a new binary_negate object with the supplied predicate   
(public member function)  
---|---  
operator() |  returns the logical complement of the result of a call to the stored predicate   
(public member function)  
  
##  std::binary_negate::binary_negate

explicit binary_negate( Predicate const& pred ); |  |  (until C++14)  
---|---|---  
constexpr explicit binary_negate( Predicate const& pred ); |  |  (since C++14)  
| |   
  
Constructs a `std::binary_negate` function object with the stored predicate pred. 

###  Parameters

pred  |  \-  |  predicate function object   
---|---|---  
  
##  std::binary_negate::operator()

bool operator()( first_argument_type const& x,  
second_argument_type const& y ) const; |  |  (until C++14)  
---|---|---  
constexpr bool operator()( first_argument_type const& x,  
second_argument_type const& y ) const; |  |  (since C++14)  
| |   
  
Returns the logical complement of the result of calling pred(x, y). 

###  Parameters

x  |  \-  |  first argument to pass through to predicate   
---|---|---  
y  |  \-  |  second argument to pass through to predicate   
  
###  Return value

The logical complement of the result of calling pred(x, y). 

### Example

Run this code
    
    
    #include <algorithm>
    #include <cstddef>
    #include <functional>
    #include <iostream>
    #include <vector>
     
    struct same : [std::binary_function](binary_function.html)<int, int, bool>
    {
        bool operator()(int a, int b) const { return a == b; }
    };
     
    int main()
    {
        [std::vector](../../container/vector.html)<int> v1;
        for (int i = 0; i < 7; ++i)
            v1.push_back(i);
     
        [std::vector](../../container/vector.html)<int> v2(v1.size());
        [std::reverse_copy](../../algorithm/reverse_copy.html)(v1.begin(), v1.end(), v2.begin());
     
        [std::vector](../../container/vector.html)<bool> v3(v1.size());
     
        std::binary_negate<same> not_same((same()));
     
        // C++11 solution:
        // std::function<bool (int, int)> not_same =
        //     [](int x, int y) -> bool { return !same()(x, y); };
     
        [std::transform](../../algorithm/transform.html)(v1.begin(), v1.end(), v2.begin(), v3.begin(), not_same);
     
        [std::cout](../../io/cout.html).setf([std::ios_base::boolalpha](../../io/ios_base/fmtflags.html));
        for ([std::size_t](../../types/size_t.html) i = 0; i != v1.size(); ++i)
            [std::cout](../../io/cout.html) << v1[i] << " != " << v2[i] << " : " << v3[i] << '\n';
    }

Output: 
    
    
    0 != 6 : true
    1 != 5 : true
    2 != 4 : true
    3 != 3 : false
    4 != 2 : true
    5 != 1 : true
    6 != 0 : true

### See also

[ binary_function](binary_function.html "cpp/utility/functional/binary function")(deprecated in C++11)(removed in C++17) |  adaptor-compatible binary function base class   
(class template)   
---|---  
[ function](function.html "cpp/utility/functional/function")(C++11) |  copyable wrapper of any copy constructible callable object   
(class template)   
[ move_only_function](move_only_function.html "cpp/utility/functional/move only function")(C++23) |  move-only wrapper of any callable object that supports qualifiers in a given call signature   
(class template)   
[ not2](not2.html "cpp/utility/functional/not2")(deprecated in C++17)(removed in C++20) |  constructs custom **std::binary_negate** object   
(function template)   
[ ptr_fun](ptr_fun.html "cpp/utility/functional/ptr fun")(deprecated in C++11)(removed in C++17) |  creates an adaptor-compatible function object wrapper from a pointer to function   
(function template)   
[ unary_negate](unary_negate.html "cpp/utility/functional/unary negate")(deprecated in C++17)(removed in C++20) |  wrapper function object returning the complement of the unary predicate it holds   
(class template) 
