[C++](../../cpp.html "cpp")

[Compiler support](../compiler_support.html "cpp/compiler support")  
---  
[Freestanding and hosted](../freestanding.html "cpp/freestanding")  
[Language](../language.html "cpp/language")  
[Standard library](../standard_library.html "cpp/standard library")  
[Standard library headers](../headers.html "cpp/header")  
[Named requirements](../iterator/concepts.html "cpp/named req")  
[Feature test macros](../experimental/feature_test.html "cpp/feature test") (C++20)  
[Language support library](../utility.html#Language_support "cpp/utility")  
[Concepts library](../concepts.html "cpp/concepts") (C++20)  
[Diagnostics library](../error.html "cpp/error")  
[Memory management library](../memory.html "cpp/memory")  
[Metaprogramming library](../meta.html "cpp/meta") (C++11)  
[General utilities library](../utility.html "cpp/utility")  
[Containers library](../container.html "cpp/container")  
[Iterators library](../iterator.html "cpp/iterator")  
[Ranges library](../ranges.html "cpp/ranges") (C++20)  
[Algorithms library](../algorithm.html "cpp/algorithm")  
[Strings library](../string.html "cpp/string")  
[Text processing library](../text.html "cpp/text")  
[Numerics library](../numeric.html "cpp/numeric")  
[Date and time library](../chrono.html "cpp/chrono")  
[Input/output library](../io.html "cpp/io")  
[Filesystem library](../filesystem.html "cpp/filesystem") (C++17)  
[Concurrency support library](../atomic.html "cpp/thread") (C++11)  
[Execution control library](../experimental/execution.html "cpp/execution") (C++26)  
[Technical specifications](../experimental.html "cpp/experimental")  
[Symbols index](../symbol_index.html "cpp/symbol index")  
[External libraries](../links/libs.html "cpp/links/libs")  
  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/navbar_content&action=edit)

[Standard library](../standard_library.html "cpp/standard library")

[Customization point object](../ranges/cpo.html "cpp/standard library/cpo") (C++20)  
---  
Exposition-only entities  
[_decay-copy_](decay-copy.html "cpp/standard library/decay-copy")(C++11)  
**_synth-three-way_ _synth-three-way-result_**(C++20)(C++20)  
  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/standard_library/navbar_content&action=edit)

constexpr auto synth-three-way = /* see below */; |  (1)  |  (since C++20)   
(exposition only*)  
---|---|---  
template< class T, class U = T >  
using synth-three-way-result =  
decltype(synth-three-way([std::declval](../utility/declval.html)<T&>(), [std::declval](../utility/declval.html)<U&>())); |  (2)  |  (since C++20)   
(exposition only*)  
| |   
  
1) A function object whose operator() behaves as the synthesized three-way comparison function. Equivalent to: 
    
    
    constexpr auto synth-three-way =
        []<class T, class U>(const T& t, const U& u)
            requires requires
            {
                { t < u } -> [boolean-testable](../concepts/boolean-testable.html);
                { u < t } -> [boolean-testable](../concepts/boolean-testable.html);
            }
        {
            if constexpr ([std::three_way_comparable_with](../utility/compare/three_way_comparable.html)<T, U>)
                return t <=> u;
            else
            {
                if (t < u)
                    return std::weak_ordering::less;
                if (u < t)
                    return std::weak_ordering::greater;
                return std::weak_ordering::equivalent;
            }
        };

2) The return type of the operator() of (1) (`_synth-three-way_`).

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/standard_library/synth-three-way&action=edit&section=1 "Edit section: Parameters")] Parameters

t, u  |  \-  |  the values to be compared   
---|---|---  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/standard_library/synth-three-way&action=edit&section=2 "Edit section: Return value")] Return value

The compare result. 

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/standard_library/synth-three-way&action=edit&section=3 "Edit section: See also")] See also

[ operator==operator!=operator<operator<=operator>operator>=operator<=>](../utility/pair/operator_cmp.html "cpp/utility/pair/operator cmp")(removed in C++20)(removed in C++20)(removed in C++20)(removed in C++20)(removed in C++20)(C++20) |  lexicographically compares the values in the `pair`   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/utility/pair/dsc_operator_cmp&action=edit)  
---|---  
[ operator==operator!=operator<operator<=operator>operator>=operator<=>](../utility/tuple/operator_cmp.html "cpp/utility/tuple/operator cmp")(removed in C++20)(removed in C++20)(removed in C++20)(removed in C++20)(removed in C++20)(C++20) |  lexicographically compares the values in the tuple   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/utility/tuple/dsc_operator_cmp&action=edit)  
[ operator==operator!=operator<operator<=operator>operator>=operator<=>](../container/array/operator_cmp.html "cpp/container/array/operator cmp")(C++11)(C++11)(removed in C++20)(C++11)(removed in C++20)(C++11)(removed in C++20)(C++11)(removed in C++20)(C++11)(removed in C++20)(C++20) |  lexicographically compares the values of two `array`s   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/container/dsc_operator_cmp&action=edit)  
[ operator==operator!=operator<operator<=operator>operator>=operator<=>](../container/deque/operator_cmp.html "cpp/container/deque/operator cmp")(removed in C++20)(removed in C++20)(removed in C++20)(removed in C++20)(removed in C++20)(C++20) |  lexicographically compares the values of two `deque`s   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/container/dsc_operator_cmp&action=edit)  
[ operator==operator!=operator<operator<=operator>operator>=operator<=>](../container/forward_list/operator_cmp.html "cpp/container/forward list/operator cmp")(C++11)(C++11)(removed in C++20)(C++11)(removed in C++20)(C++11)(removed in C++20)(C++11)(removed in C++20)(C++11)(removed in C++20)(C++20) |  lexicographically compares the values of two `forward_list`s   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/container/dsc_operator_cmp&action=edit)  
[ operator==operator!=operator<operator<=operator>operator>=operator<=>](../container/list/operator_cmp.html "cpp/container/list/operator cmp")(removed in C++20)(removed in C++20)(removed in C++20)(removed in C++20)(removed in C++20)(C++20) |  lexicographically compares the values of two `list`s   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/container/dsc_operator_cmp&action=edit)  
[ operator==operator!=operator<operator<=operator>operator>=operator<=>](../container/vector/operator_cmp.html "cpp/container/vector/operator cmp")(removed in C++20)(removed in C++20)(removed in C++20)(removed in C++20)(removed in C++20)(C++20) |  lexicographically compares the values of two `vector`s   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/container/dsc_operator_cmp&action=edit)  
[ operator==operator!=operator<operator<=operator>operator>=operator<=>](../container/map/operator_cmp.html "cpp/container/map/operator cmp")(removed in C++20)(removed in C++20)(removed in C++20)(removed in C++20)(removed in C++20)(C++20) |  lexicographically compares the values of two `map`s   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/container/dsc_operator_cmp&action=edit)  
[ operator==operator!=operator<operator<=operator>operator>=operator<=>](../container/multimap/operator_cmp.html "cpp/container/multimap/operator cmp")(removed in C++20)(removed in C++20)(removed in C++20)(removed in C++20)(removed in C++20)(C++20) |  lexicographically compares the values of two `multimap`s   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/container/dsc_operator_cmp&action=edit)  
[ operator==operator!=operator<operator<=operator>operator>=operator<=>](../container/set/operator_cmp.html "cpp/container/set/operator cmp")(removed in C++20)(removed in C++20)(removed in C++20)(removed in C++20)(removed in C++20)(C++20) |  lexicographically compares the values of two `set`s   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/container/dsc_operator_cmp&action=edit)  
[ operator==operator!=operator<operator<=operator>operator>=operator<=>](../container/multiset/operator_cmp.html "cpp/container/multiset/operator cmp")(removed in C++20)(removed in C++20)(removed in C++20)(removed in C++20)(removed in C++20)(C++20) |  lexicographically compares the values of two `multiset`s   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/container/dsc_operator_cmp&action=edit)
