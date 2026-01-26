 
  


  
  
  
  
  
  
  
  
  
  
  
  


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
| **unary_function**(until C++17*)  
---  
[binary_function](binary_function.html "cpp/utility/functional/binary function")(until C++17*)  
[ptr_fun](ptr_fun.html "cpp/utility/functional/ptr fun")(until C++17*)  
[pointer_to_unary_function](pointer_to_unary_function.html "cpp/utility/functional/pointer to unary function")(until C++17*)  
[pointer_to_binary_function](pointer_to_binary_function.html "cpp/utility/functional/pointer to binary function")(until C++17*)  
[mem_fun](mem_fun.html "cpp/utility/functional/mem fun")(until C++17*)  
[mem_fun_tmem_fun1_tconst_mem_fun_tconst_mem_fun1_t](mem_fun_t.html "cpp/utility/functional/mem fun t")(until C++17*)(until C++17*)(until C++17*)(until C++17*)  
[not1](not1.html "cpp/utility/functional/not1")(until C++20*)  
[not2](not2.html "cpp/utility/functional/not2")(until C++20*)  
  


Defined in header `[<functional>](../../header/functional.html "cpp/header/functional")` |  |   
---|---|---  
template< typename ArgumentType, typename ResultType >  
struct unary_function; |  |  (deprecated in C++11)   
(removed in C++17)  
| |   
  
`std::unary_function` is a base class for creating function objects with one argument. 

`std::unary_function` does not define operator(); it is expected that derived classes will define this. `std::unary_function` provides only two types - `argument_type` and `result_type` \- defined by the template parameters. 

Some standard library function object adaptors, such as [std::not1](not1.html "cpp/utility/functional/not1"), require the function objects they adapt to have certain types defined; [std::not1](not1.html "cpp/utility/functional/not1") requires the function object being adapted to have a type named `argument_type`. Deriving function objects that take one argument from `std::unary_function` is an easy way to make them compatible with those adaptors. 

`std::unary_function` is deprecated in C++11. 

### Member types

Type  |  Definition   
---|---  
`argument_type` |  `ArgumentType`  
`result_type` |  `ResultType`  
  
### Example

Run this code
    
    
    #include <algorithm>
    #include <functional>
    #include <iostream>
    #include <vector>
     
    struct less_than_7 : std::unary_function<int, bool>
    {
        bool operator()(int i) const { return i < 7; }
    };
     
    int main()
    {
        [std::vector](../../container/vector.html)<int> v(10, 7);
        v[0] = v[1] = v[2] = 6;
     
        [std::cout](../../io/cout.html) << [std::count_if](../../algorithm/count.html)(v.begin(), v.end(), [std::not1](not1.html)(less_than_7()));
     
        // C++11 solution:
        // Cast to std::function<bool (int)> somehow - even with a lambda
        // std::cout << std::count_if(v.begin(), v.end(),
        //     std::not1(std::function<bool (int)>([](int i) { return i < 7; })));
    }

Output: 
    
    
    7

### See also

[ function](function.html "cpp/utility/functional/function")(C++11) |  copyable wrapper of any copy constructible callable object   
(class template)   
---|---  
[ move_only_function](move_only_function.html "cpp/utility/functional/move only function")(C++23) |  move-only wrapper of any callable object that supports qualifiers in a given call signature   
(class template)   
[ ptr_fun](ptr_fun.html "cpp/utility/functional/ptr fun")(deprecated in C++11)(removed in C++17) |  creates an adaptor-compatible function object wrapper from a pointer to function   
(function template)   
[ pointer_to_unary_function](pointer_to_unary_function.html "cpp/utility/functional/pointer to unary function")(deprecated in C++11)(removed in C++17) |  adaptor-compatible wrapper for a pointer to unary function   
(class template)   
[ binary_function](binary_function.html "cpp/utility/functional/binary function")(deprecated in C++11)(removed in C++17) |  adaptor-compatible binary function base class   
(class template) 
