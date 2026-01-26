 
  


  
  
  
  
  
  
  
  
  
  
  
  


[`std::pair`](../pair.html "cpp/utility/pair")

[Member functions](../pair.html#Member_functions "cpp/utility/pair")  
---  
[pair::pair](pair.html "cpp/utility/pair/pair")  
[pair::operator=](operator=.html "cpp/utility/pair/operator=")  
[pair::swap](swap.html "cpp/utility/pair/swap")(C++11)  
[Non-member functions](../pair.html#Non-member_functions "cpp/utility/pair")  
[make_pair](make_pair.html "cpp/utility/pair/make pair")  
**operator== operator!=operator<operator<=operator>operator>=operator<=>**(until C++20)(until C++20)(until C++20)(until C++20)(until C++20)(C++20)  
[swap(std::pair)](swap2.html "cpp/utility/pair/swap2")(C++11)  
[get(std::pair)](get.html "cpp/utility/pair/get")(C++11)  
[Helper classes](../pair.html#Helper_classes "cpp/utility/pair")  
[tuple_size<std::pair>](tuple_size.html "cpp/utility/pair/tuple size")(C++11)  
[tuple_element<std::pair>](tuple_element.html "cpp/utility/pair/tuple element")(C++11)  
[basic_common_reference<std::pair>](basic_common_reference.html "cpp/utility/pair/basic common reference")(C++23)  
[common_type<std::pair>](common_type.html "cpp/utility/pair/common type")(C++23)  
[formatter<std::pair>](../format/tuple_formatter.html "cpp/utility/format/tuple formatter")(C++23)  
[piecewise_construct_t](../piecewise_construct.html "cpp/utility/piecewise construct")(C++11)  
[Deduction guides](deduction_guides.html "cpp/utility/pair/deduction guides")(C++17)  
  


Defined in header `[<utility>](../../header/utility.html "cpp/header/utility")` |  |   
---|---|---  
| (1) |   
template< class T1, class T2, class U1, class U2 >  
bool operator==( const [std::pair](../pair.html)<T1, T2>& lhs, const [std::pair](../pair.html)<U1, U2>& rhs ); |  | (until C++14)  
template< class T1, class T2, class U1, class U2 >  
constexpr bool operator==( const [std::pair](../pair.html)<T1, T2>& lhs,  
const [std::pair](../pair.html)<U1, U2>& rhs ); |  |  (since C++14)  
| (2) |   
template< class T1, class T2, class U1, class U2 >  
bool operator!=( const [std::pair](../pair.html)<T1, T2>& lhs, const [std::pair](../pair.html)<U1, U2>& rhs ); |  | (until C++14)  
template< class T1, class T2, class U1, class U2 >  
constexpr bool operator!=( const [std::pair](../pair.html)<T1, T2>& lhs,  
const [std::pair](../pair.html)<U1, U2>& rhs ); |  |  (since C++14)   
(until C++20)  
| (3) |   
template< class T1, class T2, class U1, class U2 >  
bool operator<( const [std::pair](../pair.html)<T1, T2>& lhs, const [std::pair](../pair.html)<U1, U2>& rhs ); |  | (until C++14)  
template< class T1, class T2, class U1, class U2 >  
constexpr bool operator<( const [std::pair](../pair.html)<T1, T2>& lhs,  
const [std::pair](../pair.html)<U1, U2>& rhs ); |  |  (since C++14)   
(until C++20)  
| (4) |   
template< class T1, class T2, class U1, class U2 >  
bool operator<=( const [std::pair](../pair.html)<T1, T2>& lhs, const [std::pair](../pair.html)<U1, U2>& rhs ); |  | (until C++14)  
template< class T1, class T2, class U1, class U2 >  
constexpr bool operator<=( const [std::pair](../pair.html)<T1, T2>& lhs,  
const [std::pair](../pair.html)<U1, U2>& rhs ); |  |  (since C++14)   
(until C++20)  
| (5) |   
template< class T1, class T2, class U1, class U2 >  
bool operator>( const [std::pair](../pair.html)<T1, T2>& lhs, const [std::pair](../pair.html)<U1, U2>& rhs ); |  | (until C++14)  
template< class T1, class T2, class U1, class U2 >  
constexpr bool operator>( const [std::pair](../pair.html)<T1, T2>& lhs,  
const [std::pair](../pair.html)<U1, U2>& rhs ); |  |  (since C++14)   
(until C++20)  
| (6) |   
template< class T1, class T2, class U1, class U2 >  
bool operator>=( const [std::pair](../pair.html)<T1, T2>& lhs, const [std::pair](../pair.html)<U1, U2>& rhs ); |  | (until C++14)  
template< class T1, class T2, class U1, class U2 >  
constexpr bool operator>=( const [std::pair](../pair.html)<T1, T2>& lhs,  
const [std::pair](../pair.html)<U1, U2>& rhs ); |  |  (since C++14)   
(until C++20)  
template< class T1, class T2, class U1, class U2 >  
constexpr [std::common_comparison_category_t](../compare/common_comparison_category.html)<synth-three-way-result<T1, U1>,  
synth-three-way-result<T2, U2>>  
operator<=>( const [std::pair](../pair.html)<T1, T2>& lhs, const [std::pair](../pair.html)<U1, U2>& rhs ); |  (7)  |  (since C++20)  
| |   
  
1,2) Tests if both elements of lhs and rhs are equal, that is, compares lhs.first with rhs.first and lhs.second with rhs.second.  
The behavior is undefined if the type and value category of either lhs.first == rhs.first or lhs.second == rhs.second do not meet the [BooleanTestable](../../named_req/BooleanTestable.html "cpp/named req/BooleanTestable") requirements.  | (until C++26)  
---|---  
This overload participates in overload resolution only if both decltype(lhs.first == rhs.first) and decltype(lhs.second == rhs.second) model [`_boolean-testable_`](../../concepts/boolean-testable.html "cpp/concepts/boolean-testable").  | (since C++26)  
  
3-6) Compares lhs and rhs lexicographically by operator<, that is, compares the first elements and only if they are equivalent, compares the second elements. The behavior is undefined if the type and value category of any of lhs.first < rhs.first, rhs.first < lhs.first, or lhs.second < rhs.second do not meet the [BooleanTestable](../../named_req/BooleanTestable.html "cpp/named req/BooleanTestable") requirements.

7) Compares lhs and rhs lexicographically by [`_synth-three-way_`](../../standard_library/synth-three-way.html "cpp/standard library/synth-three-way"), that is, compares the first elements and only if they are equivalent, compares the second elements. [`_synth-three-way-result_`](../../standard_library/synth-three-way.html "cpp/standard library/synth-three-way") is the return type of `_synth-three-way_`.

The `<`, `<=`, `>`, `>=`, and `!=` operators are [synthesized](../../language/operators.html#Comparison_operators "cpp/language/operators") from operator<=> and operator== respectively.  | (since C++20)  
---|---  
  
## Contents

  * [1 Parameters](operator_cmp.html#Parameters)
  * [2 Return value](operator_cmp.html#Return_value)
  * [3 Notes](operator_cmp.html#Notes)
  * [4 Example](operator_cmp.html#Example)
  * [5 Defect reports](operator_cmp.html#Defect_reports)
  * [6 See also](operator_cmp.html#See_also)

  
---  
  
### Parameters

lhs, rhs  |  \-  |  pairs to compare   
---|---|---  
  
### Return value

1) true if both lhs.first == rhs.first and lhs.second == rhs.second, otherwise false.

2) !(lhs == rhs)

3) If lhs.first < rhs.first, returns true. Otherwise, if rhs.first < lhs.first, returns false. Otherwise, if lhs.second < rhs.second, returns true. Otherwise, returns false.

4) !(rhs < lhs)

5) rhs < lhs

6) !(lhs < rhs)

7) [`_synth-three-way_`](../../standard_library/synth-three-way.html "cpp/standard library/synth-three-way")(lhs.first, rhs.first) if it is not equal to ​0​, otherwise [`_synth-three-way_`](../../standard_library/synth-three-way.html "cpp/standard library/synth-three-way")(lhs.second, rhs.second).

### Notes

The relational operators are defined in terms of each element's operator<.  | (until C++20)  
---|---  
The relational operators are defined in terms of [`_synth-three-way_`](../../standard_library/synth-three-way.html "cpp/standard library/synth-three-way"), which uses operator<=> if possible, or operator< otherwise. Notably, if an element type does not itself provide operator<=>, but is implicitly convertible to a three-way comparable type, that conversion will be used instead of operator<.  | (since C++20)  
[Feature-test](../feature_test.html "cpp/utility/feature test") macro | Value | Std | Feature   
---|---|---|---  
[`__cpp_lib_constrained_equality`](../../experimental/feature_test.html#cpp_lib_constrained_equality "cpp/feature test") | [`202403L`](../../compiler_support/26.html#cpp_lib_constrained_equality_202403L "cpp/compiler support/26") | (C++26) | Constrained operator== for [std::pair](../pair.html "cpp/utility/pair")  
  
### Example

Because operator< is defined for pairs, containers of pairs can be sorted.

Run this code
    
    
    #include <algorithm>
    #include <iomanip>
    #include <iostream>
    #include <string>
    #include <utility>
    #include <vector>
     
    int main()
    {
        [std::vector](../../container/vector.html)<[std::pair](../pair.html)<int, [std::string](../../string/basic_string.html)>> v = {{2, "baz"}, {2, "bar"}, {1, "foo"}};
        [std::sort](../../algorithm/sort.html)(v.begin(), v.end());
     
        for (auto p : v)
            [std::cout](../../io/cout.html) << '{' << p.first << ", " << [std::quoted](../../io/manip/quoted.html)(p.second) << "}\n";
    }

Output: 
    
    
    {1, "foo"}
    {2, "bar"}
    {2, "baz"}

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 296](https://cplusplus.github.io/LWG/issue296) | C++98  | the descriptions of operators other than `==` and `<` were missing  | added   
[LWG 2114](https://cplusplus.github.io/LWG/issue2114)  
([P2167R3](https://wg21.link/P2167R3))  | C++98  | type preconditions for boolean operations were missing  | added   
[LWG 3865](https://cplusplus.github.io/LWG/issue3865) | C++98  | comparison operators only accepted `pair`s of the same type  | accept `pair`s of different types   
  
### See also

[ operator==operator!=operator<operator<=operator>operator>=operator<=>](../tuple/operator_cmp.html "cpp/utility/tuple/operator cmp")(removed in C++20)(removed in C++20)(removed in C++20)(removed in C++20)(removed in C++20)(C++20) |  lexicographically compares the values in the tuple   
(function template)   
---|---
  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
