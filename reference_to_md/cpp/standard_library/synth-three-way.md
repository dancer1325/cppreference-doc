
  


[Standard library](../standard_library.html "cpp/standard library")

[Customization point object](../ranges/cpo.html "cpp/standard library/cpo") (C++20)  
---  
Exposition-only entities  
[_decay-copy_](decay-copy.html "cpp/standard library/decay-copy")(C++11)  
**_synth-three-way_ _synth-three-way-result_**(C++20)(C++20)  
  


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

### Parameters

t, u  |  \-  |  the values to be compared   
---|---|---  
  
### Return value

The compare result. 

### See also

[ operator==operator!=operator<operator<=operator>operator>=operator<=>](../utility/pair/operator_cmp.html "cpp/utility/pair/operator cmp")(removed in C++20)(removed in C++20)(removed in C++20)(removed in C++20)(removed in C++20)(C++20) |  lexicographically compares the values in the `pair`   
(function template)   
---|---  
[ operator==operator!=operator<operator<=operator>operator>=operator<=>](../utility/tuple/operator_cmp.html "cpp/utility/tuple/operator cmp")(removed in C++20)(removed in C++20)(removed in C++20)(removed in C++20)(removed in C++20)(C++20) |  lexicographically compares the values in the tuple   
(function template)   
[ operator==operator!=operator<operator<=operator>operator>=operator<=>](../container/array/operator_cmp.html "cpp/container/array/operator cmp")(C++11)(C++11)(removed in C++20)(C++11)(removed in C++20)(C++11)(removed in C++20)(C++11)(removed in C++20)(C++11)(removed in C++20)(C++20) |  lexicographically compares the values of two `array`s   
(function template)   
[ operator==operator!=operator<operator<=operator>operator>=operator<=>](../container/deque/operator_cmp.html "cpp/container/deque/operator cmp")(removed in C++20)(removed in C++20)(removed in C++20)(removed in C++20)(removed in C++20)(C++20) |  lexicographically compares the values of two `deque`s   
(function template)   
[ operator==operator!=operator<operator<=operator>operator>=operator<=>](../container/forward_list/operator_cmp.html "cpp/container/forward list/operator cmp")(C++11)(C++11)(removed in C++20)(C++11)(removed in C++20)(C++11)(removed in C++20)(C++11)(removed in C++20)(C++11)(removed in C++20)(C++20) |  lexicographically compares the values of two `forward_list`s   
(function template)   
[ operator==operator!=operator<operator<=operator>operator>=operator<=>](../container/list/operator_cmp.html "cpp/container/list/operator cmp")(removed in C++20)(removed in C++20)(removed in C++20)(removed in C++20)(removed in C++20)(C++20) |  lexicographically compares the values of two `list`s   
(function template)   
[ operator==operator!=operator<operator<=operator>operator>=operator<=>](../container/vector/operator_cmp.html "cpp/container/vector/operator cmp")(removed in C++20)(removed in C++20)(removed in C++20)(removed in C++20)(removed in C++20)(C++20) |  lexicographically compares the values of two `vector`s   
(function template)   
[ operator==operator!=operator<operator<=operator>operator>=operator<=>](../container/map/operator_cmp.html "cpp/container/map/operator cmp")(removed in C++20)(removed in C++20)(removed in C++20)(removed in C++20)(removed in C++20)(C++20) |  lexicographically compares the values of two `map`s   
(function template)   
[ operator==operator!=operator<operator<=operator>operator>=operator<=>](../container/multimap/operator_cmp.html "cpp/container/multimap/operator cmp")(removed in C++20)(removed in C++20)(removed in C++20)(removed in C++20)(removed in C++20)(C++20) |  lexicographically compares the values of two `multimap`s   
(function template)   
[ operator==operator!=operator<operator<=operator>operator>=operator<=>](../container/set/operator_cmp.html "cpp/container/set/operator cmp")(removed in C++20)(removed in C++20)(removed in C++20)(removed in C++20)(removed in C++20)(C++20) |  lexicographically compares the values of two `set`s   
(function template)   
[ operator==operator!=operator<operator<=operator>operator>=operator<=>](../container/multiset/operator_cmp.html "cpp/container/multiset/operator cmp")(removed in C++20)(removed in C++20)(removed in C++20)(removed in C++20)(removed in C++20)(C++20) |  lexicographically compares the values of two `multiset`s   
(function template) 
