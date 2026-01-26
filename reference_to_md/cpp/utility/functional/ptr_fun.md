 
  


  
  
  
  
  
  
  
  
  
  
  
  


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
**ptr_fun**(until C++17*)  
[pointer_to_unary_function](pointer_to_unary_function.html "cpp/utility/functional/pointer to unary function")(until C++17*)  
[pointer_to_binary_function](pointer_to_binary_function.html "cpp/utility/functional/pointer to binary function")(until C++17*)  
[mem_fun](mem_fun.html "cpp/utility/functional/mem fun")(until C++17*)  
[mem_fun_tmem_fun1_tconst_mem_fun_tconst_mem_fun1_t](mem_fun_t.html "cpp/utility/functional/mem fun t")(until C++17*)(until C++17*)(until C++17*)(until C++17*)  
[not1](not1.html "cpp/utility/functional/not1")(until C++20*)  
[not2](not2.html "cpp/utility/functional/not2")(until C++20*)  
  


Defined in header `[<functional>](../../header/functional.html "cpp/header/functional")` |  |   
---|---|---  
template< class Arg, class Result >  
[std::pointer_to_unary_function](pointer_to_unary_function.html)<Arg,Result>  
ptr_fun( Result (*f)(Arg) ); |  (1)  |  (deprecated in C++11)   
(removed in C++17)  
template< class Arg1, class Arg2, class Result >  
[std::pointer_to_binary_function](pointer_to_binary_function.html)<Arg1,Arg2,Result>  
ptr_fun( Result (*f)(Arg1, Arg2) ); |  (2)  |  (deprecated in C++11)   
(removed in C++17)  
| |   
  
Creates a function wrapper object (either [std::pointer_to_unary_function](pointer_to_unary_function.html) or [std::pointer_to_binary_function](pointer_to_binary_function.html)), deducing the target type from the template arguments. 

1) Effectively calls [std::pointer_to_unary_function](pointer_to_unary_function.html)<Arg,Result>(f).

2) Effectively calls [std::pointer_to_binary_function](pointer_to_binary_function.html)<Arg1,Arg2,Result>(f).

This function and the related types are deprecated as of C++11 in favor of the more general [std::function](function.html "cpp/utility/functional/function") and [std::ref](ref.html "cpp/utility/functional/ref"), both of which create callable adaptor-compatible function objects from plain functions. 

## Contents

  * [1 Parameters](ptr_fun.html#Parameters)
  * [2 Return value](ptr_fun.html#Return_value)
  * [3 Exceptions](ptr_fun.html#Exceptions)
  * [4 Example](ptr_fun.html#Example)
  * [5 See also](ptr_fun.html#See_also)

  
---  
  
### Parameters

f  |  \-  |  pointer to a function to create a wrapper for   
---|---|---  
  
### Return value

A function object wrapping f. 

### Exceptions

May throw implementation-defined exceptions. 

### Example

Run this code
    
    
    #include <algorithm>
    #include <functional>
    #include <iostream>
    #include <string_view>
     
    constexpr bool is_vowel(char c)
    {
        return [std::string_view](../../string/basic_string_view.html){"aeoiuAEIOU"}.find(c) != [std::string_view::npos](../../string/basic_string_view/npos.html);
    }
     
    int main()
    {
        [std::string_view](../../string/basic_string_view.html) s = "Hello, world!";
        std::[ranges::copy_if](http://en.cppreference.com/w/cpp/ranges-algorithm-placeholder/copy)(s, [std::ostreambuf_iterator](../../iterator/ostreambuf_iterator.html)<char>([std::cout](../../io/cout.html)),
            [std::not1](not1.html)(std::ptr_fun(is_vowel)));
    #if 0
    // C++11 alternatives:
            [std::not1](not1.html)([std::cref](ref.html)(is_vowel)));
            [std::not1](not1.html)([std::function](function.html)<bool(char)>(is_vowel)));
            [](char c) { return !is_vowel(c); });
    // C++17 alternatives:
            [std::not_fn](not_fn.html)(is_vowel));
    #endif
    }

Output: 
    
    
    Hll, wrld!

### See also

[ function](function.html "cpp/utility/functional/function")(C++11) |  copyable wrapper of any copy constructible callable object   
(class template)   
---|---  
[ move_only_function](move_only_function.html "cpp/utility/functional/move only function")(C++23) |  move-only wrapper of any callable object that supports qualifiers in a given call signature   
(class template)   
[ invokeinvoke_r](invoke.html "cpp/utility/functional/invoke")(C++17)(C++23) |  invokes any [Callable](../../named_req/Callable.html "cpp/named req/Callable") object with given arguments and possibility to specify return type(since C++23)   
(function template)   
[ not_fn](not_fn.html "cpp/utility/functional/not fn")(C++17) |  creates a function object that returns the complement of the result of the function object it holds   
(function template) 
