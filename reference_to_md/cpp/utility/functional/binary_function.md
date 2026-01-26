 
  


  
  
  
  
  
  
  
  
  
  
  
  


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
**binary_function**(until C++17*)  
[ptr_fun](ptr_fun.html "cpp/utility/functional/ptr fun")(until C++17*)  
[pointer_to_unary_function](pointer_to_unary_function.html "cpp/utility/functional/pointer to unary function")(until C++17*)  
[pointer_to_binary_function](pointer_to_binary_function.html "cpp/utility/functional/pointer to binary function")(until C++17*)  
[mem_fun](mem_fun.html "cpp/utility/functional/mem fun")(until C++17*)  
[mem_fun_tmem_fun1_tconst_mem_fun_tconst_mem_fun1_t](mem_fun_t.html "cpp/utility/functional/mem fun t")(until C++17*)(until C++17*)(until C++17*)(until C++17*)  
[not1](not1.html "cpp/utility/functional/not1")(until C++20*)  
[not2](not2.html "cpp/utility/functional/not2")(until C++20*)  
  


Defined in header `[<functional>](../../header/functional.html "cpp/header/functional")` |  |   
---|---|---  
template<  
class Arg1,  
class Arg2,   
class Result  
> struct binary_function; |  |  (deprecated in C++11)   
(removed in C++17)  
| |   
  
`std::binary_function` is a base class for creating function objects with two arguments. 

`std::binary_function` does not define operator(); it is expected that derived classes will define this. `std::binary_function` provides only three types - `first_argument_type`, `second_argument_type` and `result_type` \- defined by the template parameters. 

Some standard library function object adaptors, such as [std::not2](not2.html "cpp/utility/functional/not2"), require the function objects they adapt to have certain types defined; [std::not2](not2.html "cpp/utility/functional/not2") requires the function object being adapted to have two types named `first_argument_type` and `second_argument_type`. Deriving function objects that take two arguments from `std::binary_function` is an easy way to make them compatible with those adaptors. 

`std::binary_function` is deprecated in C++11 and removed in C++17. 

### Member types

Type  |  Definition   
---|---  
`first_argument_type` |  `Arg1`  
`second_argument_type` |  `Arg2`  
`result_type` |  `Result`  
  
### Example

Run this code
    
    
    #include <algorithm>
    #include <functional>
    #include <iostream>
    #include <vector>
     
    struct same : std::binary_function<int, int, bool>
    {
        bool operator()(int a, int b) const { return a == b; }
    };
     
    int main()
    {
        [std::vector](../../container/vector.html)<char> v1{'A', 'B', 'C', 'D', 'E'};
        [std::vector](../../container/vector.html)<char> v2{'E', 'D', 'C', 'B', 'A'};
        [std::vector](../../container/vector.html)<bool> v3(v1.size());
     
        [std::transform](../../algorithm/transform.html)(v1.begin(), v1.end(), v2.begin(), v3.begin(), [std::not2](not2.html)(same()));
     
        [std::cout](../../io/cout.html) << [std::boolalpha](../../io/manip/boolalpha.html);
        for ([std::size_t](../../types/size_t.html) i = 0; i < v1.size(); ++i)
            [std::cout](../../io/cout.html) << v1[i] << " != " << v2[i] << " : " << v3[i] << '\n';
    }

Output: 
    
    
    A != E : true
    B != D : true
    C != C : false
    D != B : true
    E != A : true

### See also

[ function](function.html "cpp/utility/functional/function")(C++11) |  copyable wrapper of any copy constructible callable object   
(class template)   
---|---  
[ move_only_function](move_only_function.html "cpp/utility/functional/move only function")(C++23) |  move-only wrapper of any callable object that supports qualifiers in a given call signature   
(class template)   
[ ptr_fun](ptr_fun.html "cpp/utility/functional/ptr fun")(deprecated in C++11)(removed in C++17) |  creates an adaptor-compatible function object wrapper from a pointer to function   
(function template)   
[ pointer_to_binary_function](pointer_to_binary_function.html "cpp/utility/functional/pointer to binary function")(deprecated in C++11)(removed in C++17) |  adaptor-compatible wrapper for a pointer to binary function   
(class template)   
[ unary_function](unary_function.html "cpp/utility/functional/unary function")(deprecated in C++11)(removed in C++17) |  adaptor-compatible unary function base class   
(class template) 
