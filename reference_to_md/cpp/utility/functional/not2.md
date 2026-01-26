 
  


  
  
  
  
  
  
  
  
  
  
  
  


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
[not1](not1.html "cpp/utility/functional/not1")(until C++20*)  
**not2**(until C++20*)  
  


Defined in header `[<functional>](../../header/functional.html "cpp/header/functional")` |  |   
---|---|---  
template< class Predicate >  
[std::binary_negate](binary_negate.html)<Predicate> not2( const Predicate& pred ); |  |  (until C++14)  
template< class Predicate >  
constexpr [std::binary_negate](binary_negate.html)<Predicate> not2( const Predicate& pred ); |  |  (since C++14)   
(deprecated in C++17)   
(removed in C++20)  
| |   
  
`std::not2` is a helper function to create a function object that returns the complement of the binary predicate function passed. The function object created is of type [std::binary_negate](binary_negate.html)<Predicate>. 

The binary predicate type must define two member types, `first_argument_type` and `second_argument_type`, that are convertible to the predicate's parameter types. The function objects obtained from [std::owner_less](../../memory/owner_less.html "cpp/memory/owner less"), [std::ref](ref.html "cpp/utility/functional/ref"), [std::cref](ref.html "cpp/utility/functional/ref"), [std::plus](plus.html "cpp/utility/functional/plus"), [std::minus](minus.html "cpp/utility/functional/minus"), [std::multiplies](multiplies.html "cpp/utility/functional/multiplies"), [std::divides](divides.html "cpp/utility/functional/divides"), [std::modulus](modulus.html "cpp/utility/functional/modulus"), [std::equal_to](equal_to.html "cpp/utility/functional/equal to"), [std::not_equal_to](not_equal_to.html "cpp/utility/functional/not equal to"), [std::greater](greater.html "cpp/utility/functional/greater"), [std::less](less.html "cpp/utility/functional/less"), [std::greater_equal](greater_equal.html "cpp/utility/functional/greater equal"), [std::less_equal](less_equal.html "cpp/utility/functional/less equal"), [std::logical_not](logical_not.html "cpp/utility/functional/logical not"), [std::logical_or](logical_or.html "cpp/utility/functional/logical or"), [std::bit_and](bit_and.html "cpp/utility/functional/bit and"), [std::bit_or](bit_or.html "cpp/utility/functional/bit or"), std::bit_xor, [std::mem_fn](mem_fn.html "cpp/utility/functional/mem fn"), [std::map::value_comp](../../container/map/value_comp.html "cpp/container/map/value comp"), [std::multimap::value_comp](../../container/multimap/value_comp.html "cpp/container/multimap/value comp"), [std::function](function.html "cpp/utility/functional/function"), or from another call to `std::not2` have these types defined, as are function objects derived from the deprecated [std::binary_function](binary_function.html "cpp/utility/functional/binary function"). 

## Contents

  * [1 Parameters](not2.html#Parameters)
  * [2 Return value](not2.html#Return_value)
  * [3 Exceptions](not2.html#Exceptions)
  * [4 Example](not2.html#Example)
  * [5 See also](not2.html#See_also)

  
---  
  
### Parameters

pred  |  \-  |  binary predicate   
---|---|---  
  
### Return value

`std::not2` returns an object of type [std::binary_negate](binary_negate.html)<Predicate>, constructed with pred. 

### Exceptions

(none) 

### Example

Run this code
    
    
    #include <algorithm>
    #include <cstddef>
    #include <functional>
    #include <iostream>
    #include <vector>
     
    struct old_same : [std::binary_function](binary_function.html)<int, int, bool>
    {
        bool operator()(int a, int b) const { return a == b; }
    };
     
    struct new_same
    {
        bool operator()(int a, int b) const { return a == b; }
    };
     
    bool same_fn(int a, int b)
    {
        return a == b;
    }
     
    int main()
    {
        [std::vector](../../container/vector.html)<int> v1{0, 1, 2};
        [std::vector](../../container/vector.html)<int> v2{2, 1, 0};
        [std::vector](../../container/vector.html)<bool> v3(v1.size());
     
        [std::cout](../../io/cout.html) << "negating a binary_function:\n";
        [std::transform](../../algorithm/transform.html)(v1.begin(), v1.end(), v2.begin(), v3.begin(),
                       std::not2(old_same()));
     
        [std::cout](../../io/cout.html) << [std::boolalpha](../../io/manip/boolalpha.html);
        for ([std::size_t](../../types/size_t.html) i = 0; i < v1.size(); ++i)
            [std::cout](../../io/cout.html) << v1[i] << ' ' << v2[i] << ' ' << v3[i] << '\n';
     
        [std::cout](../../io/cout.html) << "negating a standard functor:\n";
        [std::transform](../../algorithm/transform.html)(v1.begin(), v1.end(), v2.begin(), v3.begin(),
                       std::not2([std::equal_to](equal_to.html)<int>()));
     
        for ([std::size_t](../../types/size_t.html) i = 0; i < v1.size(); ++i)
            [std::cout](../../io/cout.html) << v1[i] << ' ' << v2[i] << ' ' << v3[i] << '\n';
     
        [std::cout](../../io/cout.html) << "negating a std::function:\n";
        [std::transform](../../algorithm/transform.html)(v1.begin(), v1.end(), v2.begin(), v3.begin(),
                       std::not2([std::function](function.html)<bool(int, int)>(new_same())));
     
        for ([std::size_t](../../types/size_t.html) i = 0; i < v1.size(); ++i)
            [std::cout](../../io/cout.html) << v1[i] << ' ' << v2[i] << ' ' << v3[i] << '\n';
     
        [std::cout](../../io/cout.html) << "negating a std::reference_wrapper:\n";
        [std::transform](../../algorithm/transform.html)(v1.begin(), v1.end(), v2.begin(), v3.begin(),
                       std::not2([std::ref](ref.html)(same_fn)));
     
        for ([std::size_t](../../types/size_t.html) i = 0; i < v1.size(); ++i)
            [std::cout](../../io/cout.html) << v1[i] << ' ' << v2[i] << ' ' << v3[i] << '\n';
    }

Output: 
    
    
    negating a binary_function:
    0 2 true
    1 1 false
    2 0 true
    negating a standard functor:
    0 2 true
    1 1 false
    2 0 true
    negating a std::function:
    0 2 true
    1 1 false
    2 0 true
    negating a std::reference_wrapper:
    0 2 true
    1 1 false
    2 0 true

### See also

[ not_fn](not_fn.html "cpp/utility/functional/not fn")(C++17) |  creates a function object that returns the complement of the result of the function object it holds   
(function template)   
---|---  
[ binary_negate](binary_negate.html "cpp/utility/functional/binary negate")(deprecated in C++17)(removed in C++20) |  wrapper function object returning the complement of the binary predicate it holds   
(class template)   
[ function](function.html "cpp/utility/functional/function")(C++11) |  copyable wrapper of any copy constructible callable object   
(class template)   
[ move_only_function](move_only_function.html "cpp/utility/functional/move only function")(C++23) |  move-only wrapper of any callable object that supports qualifiers in a given call signature   
(class template)   
[ not1](not1.html "cpp/utility/functional/not1")(deprecated in C++17)(removed in C++20) |  constructs custom [std::unary_negate](unary_negate.html "cpp/utility/functional/unary negate") object   
(function template)   
[ ptr_fun](ptr_fun.html "cpp/utility/functional/ptr fun")(deprecated in C++11)(removed in C++17) |  creates an adaptor-compatible function object wrapper from a pointer to function   
(function template)   
[ binary_function](binary_function.html "cpp/utility/functional/binary function")(deprecated in C++11)(removed in C++17) |  adaptor-compatible binary function base class   
(class template) 
