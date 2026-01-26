 
  


  
  
  
  
  
  
  
  
  
  
  
  


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
  
  
  
  
  
  
| [Negators](../../functional.html#Negators "cpp/utility/functional")  
---  
[not_fn](not_fn.html "cpp/utility/functional/not fn")(C++17)  
[Searchers](../../functional.html#Searchers "cpp/utility/functional")  
[default_searcher](default_searcher.html "cpp/utility/functional/default searcher")(C++17)  
[boyer_moore_searcher](boyer_moore_searcher.html "cpp/utility/functional/boyer moore searcher")(C++17)  
[boyer_moore_horspool_searcher](boyer_moore_horspool_searcher.html "cpp/utility/functional/boyer moore horspool searcher")(C++17)  
  
| [Constrained comparators](../../functional.html#Constrained_comparison_function_objects "cpp/utility/functional")  
---  
[ranges::equal_to](ranges/equal_to.html "cpp/utility/functional/ranges/equal to")(C++20)  
[ranges::not_equal_to](ranges/not_equal_to.html "cpp/utility/functional/ranges/not equal to")(C++20)  
[ranges::greater](ranges/greater.html "cpp/utility/functional/ranges/greater")(C++20)  
[ranges::less](ranges/less.html "cpp/utility/functional/ranges/less")(C++20)  
[ranges::greater_equal](ranges/greater_equal.html "cpp/utility/functional/ranges/greater equal")(C++20)  
[ranges::less_equal](ranges/less_equal.html "cpp/utility/functional/ranges/less equal")(C++20)  
[compare_three_way](../compare/compare_three_way.html "cpp/utility/compare/compare three way")(C++20)  
  
[Old binders and adaptors](../../functional.html#Old_binders_and_adaptors "cpp/utility/functional")  
| [unary_function](unary_function.html "cpp/utility/functional/unary function")(until C++17*)  
---  
[binary_function](binary_function.html "cpp/utility/functional/binary function")(until C++17*)  
[ptr_fun](ptr_fun.html "cpp/utility/functional/ptr fun")(until C++17*)  
[pointer_to_unary_function](pointer_to_unary_function.html "cpp/utility/functional/pointer to unary function")(until C++17*)  
[pointer_to_binary_function](pointer_to_binary_function.html "cpp/utility/functional/pointer to binary function")(until C++17*)  
[mem_fun](mem_fun.html "cpp/utility/functional/mem fun")(until C++17*)  
[mem_fun_tmem_fun1_tconst_mem_fun_tconst_mem_fun1_t](mem_fun_t.html "cpp/utility/functional/mem fun t")(until C++17*)(until C++17*)(until C++17*)(until C++17*)  
**not1**(until C++20*)  
[not2](not2.html "cpp/utility/functional/not2")(until C++20*)  
  


Defined in header `[<functional>](../../header/functional.html "cpp/header/functional")` |  |   
---|---|---  
template< class Predicate >  
[std::unary_negate](unary_negate.html)<Predicate> not1( const Predicate& pred ); |  |  (until C++14)  
template< class Predicate >  
constexpr [std::unary_negate](unary_negate.html)<Predicate> not1( const Predicate& pred ); |  |  (since C++14)   
(deprecated in C++17)   
(removed in C++20)  
| |   
  
`std::not1` is a helper function to create a function object that returns the complement of the unary predicate function passed. The function object created is of type [std::unary_negate](unary_negate.html)<Predicate>. 

The unary predicate type must define a member type, `argument_type`, that is convertible to the predicate's parameter type. The unary function objects obtained from [std::ref](ref.html "cpp/utility/functional/ref"), [std::cref](ref.html "cpp/utility/functional/ref"), [std::negate](negate.html "cpp/utility/functional/negate"), [std::logical_not](logical_not.html "cpp/utility/functional/logical not"), [std::mem_fn](mem_fn.html "cpp/utility/functional/mem fn"), [std::function](function.html "cpp/utility/functional/function"), [std::hash](../hash.html "cpp/utility/hash"), or from another call to `std::not1` have this type defined, as are function objects derived from the deprecated [std::unary_function](unary_function.html "cpp/utility/functional/unary function"). 

## Contents

  * [1 Parameters](not1.html#Parameters)
  * [2 Return value](not1.html#Return_value)
  * [3 Exceptions](not1.html#Exceptions)
  * [4 Example](not1.html#Example)
  * [5 See also](not1.html#See_also)

  
---  
  
### Parameters

pred  |  \-  |  unary predicate   
---|---|---  
  
### Return value

`std::not1` returns an object of type [std::unary_negate](unary_negate.html)<Predicate>, constructed with pred. 

### Exceptions

(none) 

### Example

Run this code
    
    
    #include <algorithm>
    #include <functional>
    #include <iostream>
    #include <iterator>
    #include <numeric>
    #include <vector>
     
    struct LessThan7 : [std::unary_function](unary_function.html)<int, bool>
    {
        bool operator()(int i) const { return i < 7; }
    };
     
    int main()
    {
        [std::vector](../../container/vector.html)<int> v(10);
        [std::iota](../../algorithm/iota.html)([std::begin](../../iterator/begin.html)(v), [std::end](../../iterator/end.html)(v), 0);
     
        [std::cout](../../io/cout.html) << [std::count_if](../../algorithm/count.html)(begin(v), end(v), std::not1(LessThan7())) << '\n';
     
        // the same as above using std::function
        [std::function](function.html)<bool(int)> less_than_9 = [](int x) { return x < 9; };
        [std::cout](../../io/cout.html) << [std::count_if](../../algorithm/count.html)(begin(v), end(v), std::not1(less_than_9)) << '\n';
    }

Output: 
    
    
    3
    1

### See also

[ not_fn](not_fn.html "cpp/utility/functional/not fn")(C++17) |  creates a function object that returns the complement of the result of the function object it holds   
(function template)   
---|---  
[ unary_negate](unary_negate.html "cpp/utility/functional/unary negate")(deprecated in C++17)(removed in C++20) |  wrapper function object returning the complement of the unary predicate it holds   
(class template)   
[ function](function.html "cpp/utility/functional/function")(C++11) |  copyable wrapper of any copy constructible callable object   
(class template)   
[ move_only_function](move_only_function.html "cpp/utility/functional/move only function")(C++23) |  move-only wrapper of any callable object that supports qualifiers in a given call signature   
(class template)   
[ not2](not2.html "cpp/utility/functional/not2")(deprecated in C++17)(removed in C++20) |  constructs custom [std::binary_negate](binary_negate.html "cpp/utility/functional/binary negate") object   
(function template)   
[ ptr_fun](ptr_fun.html "cpp/utility/functional/ptr fun")(deprecated in C++11)(removed in C++17) |  creates an adaptor-compatible function object wrapper from a pointer to function   
(function template)   
[ unary_function](unary_function.html "cpp/utility/functional/unary function")(deprecated in C++11)(removed in C++17) |  adaptor-compatible unary function base class   
(class template) 
