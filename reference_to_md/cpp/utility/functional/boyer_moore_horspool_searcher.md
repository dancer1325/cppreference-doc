 
  


  
  
  
  
  
  
  
  
  
  
  
  


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
**boyer_moore_horspool_searcher**(C++17)  
  
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
[not2](not2.html "cpp/utility/functional/not2")(until C++20*)  
  


Defined in header `[<functional>](../../header/functional.html "cpp/header/functional")` |  |   
---|---|---  
template< class RandomIt1,  
class Hash = [std::hash](../hash.html)<typename [std::iterator_traits](../../iterator/iterator_traits.html)<RandomIt1>::value_type>,  
class BinaryPredicate = [std::equal_to](equal_to.html)<> >  
class boyer_moore_horspool_searcher; |  |  (since C++17)  
| |   
  
A searcher suitable for use with the [Searcher](https://en.cppreference.com/mwiki/index.php?title=cpp/named_req/Searcher&action=edit&redlink=1 "cpp/named req/Searcher \(page does not exist\)") overload of [std::search](../../algorithm/search.html "cpp/algorithm/search") that implements the [Boyer-Moore-Horspool string searching algorithm](https://en.wikipedia.org/wiki/Boyer%E2%80%93Moore%E2%80%93Horspool_algorithm "enwiki:Boyer–Moore–Horspool algorithm"). 

`std::boyer_moore_horspool_searcher` is [CopyConstructible](../../named_req/CopyConstructible.html "cpp/named req/CopyConstructible") and [CopyAssignable](../../named_req/CopyAssignable.html "cpp/named req/CopyAssignable"). 

`RandomIt1` must meet the requirements of [LegacyRandomAccessIterator](../../named_req/RandomAccessIterator.html "cpp/named req/RandomAccessIterator"). 

## Contents

  * [1 Member functions](boyer_moore_horspool_searcher.html#Member_functions)
  * [2 std::boyer_moore_horspool_searcher::boyer_moore_horspool_searcher](boyer_moore_horspool_searcher.html#std::boyer_moore_horspool_searcher::boyer_moore_horspool_searcher)
    * [2.1 Parameters](boyer_moore_horspool_searcher.html#Parameters)
    * [2.2 Exceptions](boyer_moore_horspool_searcher.html#Exceptions)
  * [3 std::boyer_moore_horspool_searcher::operator()](boyer_moore_horspool_searcher.html#std::boyer_moore_horspool_searcher::operator.28.29)
    * [3.1 Parameters](boyer_moore_horspool_searcher.html#Parameters_2)
    * [3.2 Return value](boyer_moore_horspool_searcher.html#Return_value)
    * [3.3 Notes](boyer_moore_horspool_searcher.html#Notes)
    * [3.4 Example](boyer_moore_horspool_searcher.html#Example)
    * [3.5 See also](boyer_moore_horspool_searcher.html#See_also)

  
---  
  
### Member functions

##  std::boyer_moore_horspool_searcher::boyer_moore_horspool_searcher

boyer_moore_horspool_searcher( RandomIt1 pat_first,  
RandomIt1 pat_last,  
Hash hf = Hash(),  
BinaryPredicate pred = BinaryPredicate() ); |  |   
---|---|---  
| |   
  
Constructs a `std::boyer_moore_horspool_searcher` by storing copies of pat_first, pat_last, hf, and pred, setting up any necessary internal data structures. 

The value type of `RandomIt1` must be [DefaultConstructible](../../named_req/DefaultConstructible.html "cpp/named req/DefaultConstructible"), [CopyConstructible](../../named_req/CopyConstructible.html "cpp/named req/CopyConstructible") and [CopyAssignable](../../named_req/CopyAssignable.html "cpp/named req/CopyAssignable"). 

For any two values `A` and `B` of the type [std::iterator_traits](../../iterator/iterator_traits.html)<RandomIt1>::value_type, if pred(A, B) == true, then hf(A) == hf(B) shall be true. 

###  Parameters

pat_first, pat_last  |  \-  |  a pair of iterators designating the string to be searched for   
---|---|---  
hf  |  \-  |  a callable object used to hash the elements of the string   
pred  |  \-  |  a callable object used to determine equality   
  
###  Exceptions

Any exceptions thrown by 

  * the copy constructor of `RandomIt1`; 
  * the default constructor, copy constructor, or copy assignment operator of the value type of `RandomIt1`; or 
  * the copy constructor or function call operator of `BinaryPredicate` or `Hash`. 



May also throw [std::bad_alloc](../../memory/new/bad_alloc.html "cpp/memory/new/bad alloc") if additional memory required for internal data structures cannot be allocated. 

##  std::boyer_moore_horspool_searcher::operator()

template< class RandomIt2 >  
[std::pair](../pair.html)<RandomIt2, RandomIt2> operator()( RandomIt2 first, RandomIt2 last ) const; |  |   
---|---|---  
| |   
  
The member function called by the Searcher overload of [std::search](../../algorithm/search.html "cpp/algorithm/search") to perform a search with this searcher. `RandomIt2` must meet the requirements of [LegacyRandomAccessIterator](../../named_req/RandomAccessIterator.html "cpp/named req/RandomAccessIterator"). 

`RandomIt1` and `RandomIt2` must have the same value type. 

###  Parameters

first, last  |  \-  |  a pair of iterators designating the string to be examined   
---|---|---  
  
###  Return value

If the pattern `[`pat_first`, `pat_last`)` is empty, returns [std::make_pair](../pair/make_pair.html)(first, first). 

Otherwise, returns a pair of iterators to the first and one past last positions in `[`first`, `last`)` where a subsequence that compares equal to `[`pat_first`, `pat_last`)` as defined by pred is located, or [std::make_pair](../pair/make_pair.html)(last, last) otherwise. 

### Notes

[Feature-test](../feature_test.html "cpp/utility/feature test") macro | Value | Std | Feature   
---|---|---|---  
[`__cpp_lib_boyer_moore_searcher`](../../experimental/feature_test.html#cpp_lib_boyer_moore_searcher "cpp/feature test") | [`201603L`](../../compiler_support/17.html#cpp_lib_boyer_moore_searcher_201603L "cpp/compiler support/17") | (C++17) | [searchers](../../functional.html#Searchers "cpp/utility/functional")  
  
### Example

Run this code
    
    
    #include <algorithm>
    #include <functional>
    #include <iomanip>
    #include <iostream>
    #include <string_view>
     
    int main()
    {
        constexpr [std::string_view](../../string/basic_string_view.html) in =
            "Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed "
            "do eiusmod tempor incididunt ut labore et dolore magna aliqua";
     
        const [std::string_view](../../string/basic_string_view.html) needle{"pisci"};
     
        auto it = [std::search](../../algorithm/search.html)(in.begin(), in.end(),
                      std::boyer_moore_horspool_searcher(
                          needle.begin(), needle.end()));
        if (it != in.end())
            [std::cout](../../io/cout.html) << "The string " << [std::quoted](../../io/manip/quoted.html)(needle) << " found at offset "
                      << it - in.begin() << '\n';
        else
            [std::cout](../../io/cout.html) << "The string " << [std::quoted](../../io/manip/quoted.html)(needle) << " not found\n";
    }

Output: 
    
    
    The string "pisci" found at offset 43

### See also

[ search](../../algorithm/search.html "cpp/algorithm/search") |  searches for the first occurrence of a range of elements   
(function template)   
---|---  
[ default_searcher](default_searcher.html "cpp/utility/functional/default searcher")(C++17) |  standard C++ library search algorithm implementation   
(class template)   
[ boyer_moore_searcher](boyer_moore_searcher.html "cpp/utility/functional/boyer moore searcher")(C++17) |  Boyer-Moore search algorithm implementation   
(class template) 
  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
