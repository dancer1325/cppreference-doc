 
  


  
  
  
  
  
  
  
  
  
  
  
  


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
**default_searcher**(C++17)  
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
[not2](not2.html "cpp/utility/functional/not2")(until C++20*)  
  


Defined in header `[<functional>](../../header/functional.html "cpp/header/functional")` |  |   
---|---|---  
template< class ForwardIt, class BinaryPredicate = [std::equal_to](equal_to.html)<> >  
class default_searcher; |  |  (since C++17)  
| |   
  
A class suitable for use with [Searcher](https://en.cppreference.com/mwiki/index.php?title=cpp/named_req/Searcher&action=edit&redlink=1 "cpp/named req/Searcher \(page does not exist\)") overload of [std::search](../../algorithm/search.html "cpp/algorithm/search") that delegates the search operation to the pre-C++17 standard library's [std::search](../../algorithm/search.html "cpp/algorithm/search"). 

`std::default_searcher` is [CopyConstructible](../../named_req/CopyConstructible.html "cpp/named req/CopyConstructible") and [CopyAssignable](../../named_req/CopyAssignable.html "cpp/named req/CopyAssignable"). 

## Contents

  * [1 Member functions](default_searcher.html#Member_functions)
  * [2 std::default_searcher::default_searcher](default_searcher.html#std::default_searcher::default_searcher)
    * [2.1 Parameters](default_searcher.html#Parameters)
    * [2.2 Exceptions](default_searcher.html#Exceptions)
  * [3 std::default_searcher::operator()](default_searcher.html#std::default_searcher::operator.28.29)
    * [3.1 Parameters](default_searcher.html#Parameters_2)
    * [3.2 Return value](default_searcher.html#Return_value)
    * [3.3 Example](default_searcher.html#Example)
    * [3.4 See also](default_searcher.html#See_also)

  
---  
  
### Member functions

##  std::default_searcher::default_searcher

default_searcher( ForwardIt pat_first,  
ForwardIt pat_last,  
BinaryPredicate pred = BinaryPredicate() ); |  | (since C++17)   
(constexpr since C++20)  
---|---|---  
| |   
  
Constructs a `std::default_searcher` by storing copies of pat_first, pat_last, and pred. 

###  Parameters

pat_first, pat_last  |  \-  |  a pair of iterators designating the string to be searched for   
---|---|---  
pred  |  \-  |  a callable object used to determine equality   
  
###  Exceptions

Any exceptions thrown by the copy constructors of `BinaryPredicate` or `ForwardIt`. 

##  std::default_searcher::operator()

template< class ForwardIt2 >  
[std::pair](../pair.html)<ForwardIt2, ForwardIt2>  
operator()( ForwardIt2 first, ForwardIt2 last ) const; |  | (since C++17)   
(constexpr since C++20)  
---|---|---  
| |   
  
The member function called by the Searcher overload of [std::search](../../algorithm/search.html "cpp/algorithm/search") to perform a search with this searcher. 

Returns a pair of iterators `i, j`, where `i` is [std::search](../../algorithm/search.html)(first, last, pat_first, pat_last, pred) and `j` is [std::next](../../iterator/next.html)(i, [std::distance](../../iterator/distance.html)(pat_first, pat_last)) unless `std::search` returned last (no match), in which case `j` equals last as well. 

###  Parameters

first, last  |  \-  |  a pair of iterators designating the string to be examined   
---|---|---  
  
###  Return value

A pair of iterators to the first and one past last positions in `[`first`, `last`)` where a subsequence that compares equal to `[`pat_first`, `pat_last`)` as defined by pred is located, or a pair of copies of last otherwise. 

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
                      std::default_searcher(
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
[ boyer_moore_searcher](boyer_moore_searcher.html "cpp/utility/functional/boyer moore searcher")(C++17) |  Boyer-Moore search algorithm implementation   
(class template)   
[ boyer_moore_horspool_searcher](boyer_moore_horspool_searcher.html "cpp/utility/functional/boyer moore horspool searcher")(C++17) |  Boyer-Moore-Horspool search algorithm implementation   
(class template) 
