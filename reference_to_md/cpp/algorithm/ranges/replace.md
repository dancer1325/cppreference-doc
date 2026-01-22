Defined in header `[<algorithm>](../../header/algorithm.html "cpp/header/algorithm")` |  |   
---|---|---  
Call signature |  |   
| (1) |   
template< [std::input_iterator](../../iterator/input_iterator.html) I, [std::sentinel_for](../../iterator/sentinel_for.html)<I> S,  
class T1, class T2, class Proj = [std::identity](../../utility/functional/identity.html) >  
requires [std::indirectly_writable](../../iterator/indirectly_writable.html)<I, const T2&> &&  
[std::indirect_binary_predicate](../../iterator/indirect_binary_predicate.html)  
<[ranges::equal_to](http://en.cppreference.com/w/cpp/ranges-functional-placeholder/equal_to), std::[projected](http://en.cppreference.com/w/cpp/ranges-placeholder/iterator/projected)<I, Proj>, const T1*>  
constexpr I replace( I first, S last, const T1& old_value,  
const T2& new_value, Proj proj = {} ); |  | (since C++20)   
(until C++26)  
template< [std::input_iterator](../../iterator/input_iterator.html) I, [std::sentinel_for](../../iterator/sentinel_for.html)<I> S,  
class Proj = [std::identity](../../utility/functional/identity.html),  
class T1 = std::projected_value_t<I, Proj>, class T2 = T1 >  
requires [std::indirectly_writable](../../iterator/indirectly_writable.html)<I, const T2&> &&  
[std::indirect_binary_predicate](../../iterator/indirect_binary_predicate.html)  
<[ranges::equal_to](http://en.cppreference.com/w/cpp/ranges-functional-placeholder/equal_to), std::[projected](http://en.cppreference.com/w/cpp/ranges-placeholder/iterator/projected)<I, Proj>, const T1*>  
constexpr I replace( I first, S last, const T1& old_value,  
const T2& new_value, Proj proj = {} ); |  |  (since C++26)  
| (2) |   
template< [ranges::input_range](../../ranges/input_range.html) R,  
class T1, class T2, class Proj = [std::identity](../../utility/functional/identity.html) >  
requires [std::indirectly_writable](../../iterator/indirectly_writable.html)<[ranges::iterator_t](../../ranges/iterator_t.html)<R>, const T2&> &&  
[std::indirect_binary_predicate](../../iterator/indirect_binary_predicate.html)  
<[ranges::equal_to](http://en.cppreference.com/w/cpp/ranges-functional-placeholder/equal_to),  
std::[projected](http://en.cppreference.com/w/cpp/ranges-placeholder/iterator/projected)<[ranges::iterator_t](../../ranges/iterator_t.html)<R>, Proj>, const T1*>  
constexpr [ranges::borrowed_iterator_t](../../ranges/borrowed_iterator_t.html)<R>  
replace( R&& r, const T1& old_value,  
const T2& new_value, Proj proj = {} ); |  |  (since C++20)   
(until C++26)  
template< [ranges::input_range](../../ranges/input_range.html) R,  
class Proj = [std::identity](../../utility/functional/identity.html),  
class T1 = std::projected_value_t<[ranges::iterator_t](../../ranges/iterator_t.html)<R>, Proj>,  
class T2 = T1 >  
requires [std::indirectly_writable](../../iterator/indirectly_writable.html)<[ranges::iterator_t](../../ranges/iterator_t.html)<R>, const T2&> &&  
[std::indirect_binary_predicate](../../iterator/indirect_binary_predicate.html)  
<[ranges::equal_to](http://en.cppreference.com/w/cpp/ranges-functional-placeholder/equal_to),  
std::[projected](http://en.cppreference.com/w/cpp/ranges-placeholder/iterator/projected)<[ranges::iterator_t](../../ranges/iterator_t.html)<R>, Proj>, const T1*>  
constexpr [ranges::borrowed_iterator_t](../../ranges/borrowed_iterator_t.html)<R>  
replace( R&& r, const T1& old_value,  
const T2& new_value, Proj proj = {} ); |  |  (since C++26)  
| (3) |   
template< [std::input_iterator](../../iterator/input_iterator.html) I, [std::sentinel_for](../../iterator/sentinel_for.html)<I> S,  
class T, class Proj = [std::identity](../../utility/functional/identity.html),  
[std::indirect_unary_predicate](../../iterator/indirect_unary_predicate.html)<std::[projected](http://en.cppreference.com/w/cpp/ranges-placeholder/iterator/projected)<I, Proj>> Pred >  
requires [std::indirectly_writable](../../iterator/indirectly_writable.html)<I, const T&>  
constexpr I replace_if( I first, S last, Pred pred,  
const T& new_value, Proj proj = {} ); |  | (since C++20)   
(until C++26)  
template< [std::input_iterator](../../iterator/input_iterator.html) I, [std::sentinel_for](../../iterator/sentinel_for.html)<I> S,  
class Proj = [std::identity](../../utility/functional/identity.html),  
class T = std::projected_value_t<I, Proj>,  
[std::indirect_unary_predicate](../../iterator/indirect_unary_predicate.html)<std::[projected](http://en.cppreference.com/w/cpp/ranges-placeholder/iterator/projected)<I, Proj>> Pred >  
requires [std::indirectly_writable](../../iterator/indirectly_writable.html)<I, const T&>  
constexpr I replace_if( I first, S last, Pred pred,  
const T& new_value, Proj proj = {} ); |  |  (since C++26)  
| (4) |   
template< [ranges::input_range](../../ranges/input_range.html) R, class T, class Proj = [std::identity](../../utility/functional/identity.html),  
[std::indirect_unary_predicate](../../iterator/indirect_unary_predicate.html)<  
std::[projected](http://en.cppreference.com/w/cpp/ranges-placeholder/iterator/projected)<[ranges::iterator_t](../../ranges/iterator_t.html)<R>, Proj>> Pred >  
requires [std::indirectly_writable](../../iterator/indirectly_writable.html)<[ranges::iterator_t](../../ranges/iterator_t.html)<R>, const T&>  
constexpr [ranges::borrowed_iterator_t](../../ranges/borrowed_iterator_t.html)<R>  
replace_if( R&& r, Pred pred, const T& new_value, Proj proj = {} ); |  |  (since C++20)   
(until C++26)  
template< [ranges::input_range](../../ranges/input_range.html) R, class Proj = [std::identity](../../utility/functional/identity.html),  
class T = std::projected_value_t<[ranges::iterator_t](../../ranges/iterator_t.html)<R>, Proj>,  
[std::indirect_unary_predicate](../../iterator/indirect_unary_predicate.html)<  
std::[projected](http://en.cppreference.com/w/cpp/ranges-placeholder/iterator/projected)<[ranges::iterator_t](../../ranges/iterator_t.html)<R>, Proj>> Pred >  
requires [std::indirectly_writable](../../iterator/indirectly_writable.html)<[ranges::iterator_t](../../ranges/iterator_t.html)<R>, const T&>  
constexpr [ranges::borrowed_iterator_t](../../ranges/borrowed_iterator_t.html)<R>  
replace_if( R&& r, Pred pred, const T& new_value, Proj proj = {} ); |  |  (since C++26)  
| |   
  
Replaces all elements satisfying specific criteria with new_value in the range `[`first`, `last`)`. 

1) Replaces all elements that are equal to old_value, using [std::invoke](../../utility/functional/invoke.html)(proj, *i) == old_value to compare.

3) Replaces all elements for which the predicate pred evaluates to true, where evaluating expression is [std::invoke](../../utility/functional/invoke.html)(pred, [std::invoke](../../utility/functional/invoke.html)(proj, *i)).

2,4) Same as (1,3), but uses r as the range, as if using [ranges::begin](../../ranges/begin.html)(r) as first and [ranges::end](../../ranges/end.html)(r) as last.

The function-like entities described on this page are [_algorithm function objects_](../ranges.html#Algorithm_function_objects "cpp/algorithm/ranges") (informally known as _niebloids_), that is: 

  * Explicit template argument lists cannot be specified when calling any of them. 
  * None of them are visible to [argument-dependent lookup](../../language/adl.html "cpp/language/adl"). 
  * When any of them are found by [normal unqualified lookup](../../language/unqualified_lookup.html "cpp/language/unqualified lookup") as the name to the left of the function-call operator, [argument-dependent lookup](../../language/adl.html "cpp/language/adl") is inhibited. 



## Contents

  * [1 Parameters](replace.html#Parameters)
  * [2 Return value](replace.html#Return_value)
  * [3 Complexity](replace.html#Complexity)
  * [4 Notes](replace.html#Notes)
  * [5 Possible implementation](replace.html#Possible_implementation)
  * [6 Example](replace.html#Example)
  * [7 See also](replace.html#See_also)

  
---  
  
### Parameters

first, last  |  \-  |  the iterator-sentinel pair defining the [range](../../iterator.html#Ranges "cpp/iterator") of elements to process   
---|---|---  
r  |  \-  |  the range of elements to process   
old_value  |  \-  |  the value of elements to replace   
new_value  |  \-  |  the value to use as a replacement   
pred  |  \-  |  predicate to apply to the projected elements   
proj  |  \-  |  projection to apply to the elements   
  
### Return value

An iterator equal to last. 

### Complexity

Exactly [ranges::distance](../../iterator/ranges/distance.html)(first, last) applications of the corresponding predicate comp and any projection proj. 

### Notes

Because the algorithm takes old_value and new_value by reference, it may have unexpected behavior if either is a reference to an element of the range `[`first`, `last`)`. 

[Feature-test](../../utility/feature_test.html "cpp/utility/feature test") macro | Value | Std | Feature   
---|---|---|---  
[`__cpp_lib_algorithm_default_value_type`](../../experimental/feature_test.html#cpp_lib_algorithm_default_value_type "cpp/feature test") | [`202403`](../../compiler_support/26.html#cpp_lib_algorithm_default_value_type_202403 "cpp/compiler support/26") | (C++26) | [List-initialization](../../language/list_initialization.html "cpp/language/list initialization") for algorithms ([1-4](replace.html#Version_1))  
  
### Possible implementation

[replace (1,2)](replace.html#Version_1)  
---  
      
    
    struct replace_fn
    {
        template<[std::input_iterator](../../iterator/input_iterator.html) I, [std::sentinel_for](../../iterator/sentinel_for.html)<I> S, class Proj = [std::identity](../../utility/functional/identity.html),
                 class T1 = std::projected_value_t<I, Proj>, class T2 = T1>
        requires [std::indirectly_writable](../../iterator/indirectly_writable.html)<I, const T2&> && 
                 [std::indirect_binary_predicate](../../iterator/indirect_binary_predicate.html)
                     <[ranges::equal_to](http://en.cppreference.com/w/cpp/ranges-functional-placeholder/equal_to), std::[projected](http://en.cppreference.com/w/cpp/ranges-placeholder/iterator/projected)<I, Proj>, const T1*>
        constexpr I operator()(I first, S last, const T1& old_value,
                               const T2& new_value, Proj proj = {}) const
        {
            for (; first != last; ++first)
                if (old_value == [std::invoke](../../utility/functional/invoke.html)(proj, *first))
                    *first = new_value;
            return first;
        }
     
        template<[ranges::input_range](../../ranges/input_range.html) R, class Proj = [std::identity](../../utility/functional/identity.html)
                 class T1 = std::projected_value_t<[ranges::iterator_t](../../ranges/iterator_t.html)<R>, Proj>,
                 class T2 = T1>
        requires [std::indirectly_writable](../../iterator/indirectly_writable.html)<[ranges::iterator_t](../../ranges/iterator_t.html)<R>, const T2&> &&
                 [std::indirect_binary_predicate](../../iterator/indirect_binary_predicate.html)<[ranges::equal_to](http://en.cppreference.com/w/cpp/ranges-functional-placeholder/equal_to),
                 std::[projected](http://en.cppreference.com/w/cpp/ranges-placeholder/iterator/projected)<[ranges::iterator_t](../../ranges/iterator_t.html)<R>, Proj>, const T1*>
        constexpr [ranges::borrowed_iterator_t](../../ranges/borrowed_iterator_t.html)<R>
            operator()(R&& r, const T1& old_value,
                       const T2& new_value, Proj proj = {}) const
        {
            return (*this)([ranges::begin](../../ranges/begin.html)(r), [ranges::end](../../ranges/end.html)(r), old_value,
                           new_value, std::move(proj));
        }
    };
     
    inline constexpr replace_fn replace{};  
  
[replace_if (3,4)](replace.html#Version_3)  
      
    
    struct replace_if_fn
    {
        template<[std::input_iterator](../../iterator/input_iterator.html) I, [std::sentinel_for](../../iterator/sentinel_for.html)<I> S,
                 class Proj = [std::identity](../../utility/functional/identity.html), class T = std::projected_value_t<I, Proj>,
                 [std::indirect_unary_predicate](../../iterator/indirect_unary_predicate.html)<std::[projected](http://en.cppreference.com/w/cpp/ranges-placeholder/iterator/projected)<I, Proj>> Pred>
        requires [std::indirectly_writable](../../iterator/indirectly_writable.html)<I, const T&>
        constexpr I operator()(I first, S last, Pred pred,
                               const T& new_value, Proj proj = {}) const
        {
            for (; first != last; ++first)
                if (!![std::invoke](../../utility/functional/invoke.html)(pred, [std::invoke](../../utility/functional/invoke.html)(proj, *first)))
                    *first = new_value;
            return std::move(first);
        }
     
        template<[ranges::input_range](../../ranges/input_range.html) R, class Proj = [std::identity](../../utility/functional/identity.html),
                 class T = std::projected_value_t<[ranges::iterator_t](../../ranges/iterator_t.html)<R>, Proj>
                 [std::indirect_unary_predicate](../../iterator/indirect_unary_predicate.html)
                     <std::[projected](http://en.cppreference.com/w/cpp/ranges-placeholder/iterator/projected)<[ranges::iterator_t](../../ranges/iterator_t.html)<R>, Proj>> Pred>
        requires [std::indirectly_writable](../../iterator/indirectly_writable.html)<[ranges::iterator_t](../../ranges/iterator_t.html)<R>, const T&>
        constexpr [ranges::borrowed_iterator_t](../../ranges/borrowed_iterator_t.html)<R>
            operator()(R&& r, Pred pred, const T& new_value, Proj proj = {}) const
        {
            return (*this)([ranges::begin](../../ranges/begin.html)(r), [ranges::end](../../ranges/end.html)(r), std::move(pred),
                           new_value, std::move(proj));
        }
    };
     
    inline constexpr replace_if_fn replace_if{};  
  
### Example

Run this code
    
    
    #include <algorithm>
    #include <array>
    #include <complex>
    #include <iostream>
     
    void println(const auto& v)
    {
        for (const auto& e : v)
            [std::cout](../../io/cout.html) << e << ' ';
        [std::cout](../../io/cout.html) << '\n';
    }
     
    int main()
    {
        namespace ranges = std::ranges;
     
        [std::array](../../container/array.html) p{1, 6, 1, 6, 1, 6};
        println(p);
        ranges::replace(p, 6, 9);
        println(p);
     
        [std::array](../../container/array.html) q{1, 2, 3, 6, 7, 8, 4, 5};
        println(q);
        ranges::replace_if(q, [](int x) { return 5 < x; }, 5);
        println(q);
     
        [std::array](../../container/array.html)<[std::complex](../../numeric/complex.html)<double>, 2> nums{{{1, 3}, {1, 3}}};
        println(nums);
        #ifdef __cpp_lib_algorithm_default_value_type
            ranges::replace(nums, {1, 3}, {4, 2});
        #else
            ranges::replace(nums, [std::complex](../../numeric/complex.html)<double>{1, 3}, [std::complex](../../numeric/complex.html)<double>{4, 2});
        #endif
        println(nums);
    }

Output: 
    
    
    1 6 1 6 1 6
    1 9 1 9 1 9
    1 2 3 6 7 8 4 5
    1 2 3 5 5 5 4 5
    (1,3) (1,3)
    (4,2) (4,2)

### See also

[ ranges::replace_copyranges::replace_copy_if](replace_copy.html "cpp/algorithm/ranges/replace copy")(C++20)(C++20) |  copies a range, replacing elements satisfying specific criteria with another value  
(algorithm function object)  
---|---  
[ replacereplace_if](../replace.html "cpp/algorithm/replace") |  replaces all values satisfying specific criteria with another value   
(function template) 
  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
