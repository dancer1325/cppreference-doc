 
  


  
  
  
  
  
  
  
  
  
  
  
  


[`std::variant`](../variant.html "cpp/utility/variant")

[Member functions](../variant.html#Member_functions "cpp/utility/variant")  
---  
[variant::variant](variant.html "cpp/utility/variant/variant")  
[variant::~variant](~variant.html "cpp/utility/variant/~variant")  
[variant::operator=](operator=.html "cpp/utility/variant/operator=")  
[Observers](../variant.html#Observers "cpp/utility/variant")  
[variant::index](index.html "cpp/utility/variant/index")  
[variant::valueless_by_exception](valueless_by_exception.html "cpp/utility/variant/valueless by exception")  
[Modifiers](../variant.html#Modifiers "cpp/utility/variant")  
[variant::emplace](emplace.html "cpp/utility/variant/emplace")  
[variant::swap](swap.html "cpp/utility/variant/swap")  
[Visitation](../variant.html#Visitation "cpp/utility/variant")  
[variant::visit](visit.html "cpp/utility/variant/visit")(C++26)  
[Non-member functions](../variant.html#Non-member_functions "cpp/utility/variant")  
[visit(std::variant)](visit2.html "cpp/utility/variant/visit2")  
[holds_alternative](holds_alternative.html "cpp/utility/variant/holds alternative")  
[get(std::variant)](get.html "cpp/utility/variant/get")  
[get_if](get_if.html "cpp/utility/variant/get if")  
**operator== operator!=operator<operator<=operator>operator>=operator<=>**(C++20)  
[swap(std::variant)](swap2.html "cpp/utility/variant/swap2")  
[Helper classes](../variant.html#Helper_classes "cpp/utility/variant")  
[monostate](monostate.html "cpp/utility/variant/monostate")  
[bad_variant_access](bad_variant_access.html "cpp/utility/variant/bad variant access")  
[variant_size](variant_size.html "cpp/utility/variant/variant size")  
[variant_alternative](variant_alternative.html "cpp/utility/variant/variant alternative")  
[hash<std::variant>](hash.html "cpp/utility/variant/hash")  
[Helper objects](../variant.html#Helper_objects "cpp/utility/variant")  
[variant_npos](variant_npos.html "cpp/utility/variant/variant npos")  
  


Defined in header `[<variant>](../../header/variant.html "cpp/header/variant")` |  |   
---|---|---  
template< class... Types >  
constexpr bool operator==( const [std::variant](../variant.html)<Types...>& lhs,  
const [std::variant](../variant.html)<Types...>& rhs ); |  (1)  |  (since C++17)  
template< class... Types >  
constexpr bool operator!=( const [std::variant](../variant.html)<Types...>& lhs,  
const [std::variant](../variant.html)<Types...>& rhs ); |  (2)  |  (since C++17)  
template< class... Types >  
constexpr bool operator<( const [std::variant](../variant.html)<Types...>& lhs,  
const [std::variant](../variant.html)<Types...>& rhs ); |  (3)  |  (since C++17)  
template< class... Types >  
constexpr bool operator>( const [std::variant](../variant.html)<Types...>& lhs,  
const [std::variant](../variant.html)<Types...>& rhs ); |  (4)  |  (since C++17)  
template< class... Types >  
constexpr bool operator<=( const [std::variant](../variant.html)<Types...>& lhs,  
const [std::variant](../variant.html)<Types...>& rhs ); |  (5)  |  (since C++17)  
template< class... Types >  
constexpr bool operator>=( const [std::variant](../variant.html)<Types...>& lhs,  
const [std::variant](../variant.html)<Types...>& rhs ); |  (6)  |  (since C++17)  
template< class... Types >  
constexpr [std::common_comparison_category_t](../compare/common_comparison_category.html)  
<[std::compare_three_way_result_t](../compare/compare_three_way_result.html)<Types>...>  
operator<=>( const [std::variant](../variant.html)<Types...>& lhs,  
const [std::variant](../variant.html)<Types...>& rhs ); |  (7)  |  (since C++20)  
Helper function template |  |   
template< [std::size_t](../../types/size_t.html) I, class... Types >  
constexpr const [std::variant_alternative_t](variant_alternative.html)<I, [std::variant](../variant.html)<Types...>>&  
GET( const variant<Types...>& v ); |  (8) | (exposition only*)  
| |   
  
Performs comparison operations on [std::variant](../variant.html "cpp/utility/variant") objects. 

1-7) Compares two [std::variant](../variant.html "cpp/utility/variant") objects lhs and rhs. The contained values are compared (using the corresponding operator of `T`) only if both lhs and rhs contain values corresponding to the same index. Otherwise, 

  * lhs is considered _equal to_ rhs if, and only if, both lhs and rhs do not contain a value. 
  * lhs is considered _less than_ rhs if, and only if, either rhs contains a value and lhs does not, or lhs.index() is less than rhs.index().



1-6) Let @ denote the corresponding comparison operator, for each of these functions:  If, for some values of I, the corresponding expression `_GET_` ﻿<I>(lhs) @` `` _GET_` ﻿<I>(rhs) is ill-formed or its result is not convertible to bool, the program is ill-formed.  | (until C++26)  
---|---  
This overload participates in overload resolution only if for all values of I, the corresponding expression `_GET_` ﻿<I>(lhs) @` `` _GET_` ﻿<I>(rhs) is well-formed and its result is convertible to bool.  | (since C++26)  
  
8) The exposition-only function template `_GET_` behaves like [`std::get(std::variant)`](get.html "cpp/utility/variant/get"), except that [std::bad_variant_access](bad_variant_access.html "cpp/utility/variant/bad variant access") is never thrown.

If I < sizeof...(Types) is false, the program is ill-formed.

If I == v.index() is false, the behavior is undefined.

## Contents

  * [1 Parameters](operator_cmp.html#Parameters)
  * [2 Return value](operator_cmp.html#Return_value)
  * [3 Notes](operator_cmp.html#Notes)
  * [4 Example](operator_cmp.html#Example)
  * [5 See also](operator_cmp.html#See_also)

  
---  
  
### Parameters

lhs,rhs  |  \-  |  variants to compare   
---|---|---  
  
### Return value

Operator  | Both operands contains a value  
(let I be lhs.index() and J be rhs.index()) | lhs or rhs is valueless  
(let lhs_empty be lhs.valueless_by_exception() and rhs_empty be rhs.valueless_by_exception())  
---|---|---  
I and J are equal  | I and J are unequal   
== | `_GET_` ﻿<I>(lhs) ==` `` _GET_` ﻿<I>(rhs) | false | lhs_empty && rhs_empty  
!= | `_GET_` ﻿<I>(lhs) !=` `` _GET_` ﻿<I>(rhs) | true | lhs_empty != rhs_empty  
< | `_GET_` ﻿<I>(lhs) <` `` _GET_` ﻿<I>(rhs) | lhs.index() < rhs.index() | lhs_empty && !rhs_empty  
> | `_GET_` ﻿<I>(lhs) >` `` _GET_` ﻿<I>(rhs) | lhs.index() > rhs.index() | !lhs_empty && rhs_empty  
<= | `_GET_` ﻿<I>(lhs) <=` `` _GET_` ﻿<I>(rhs) | lhs.index() < rhs.index() | lhs_empty  
>= | `_GET_` ﻿<I>(lhs) >=` `` _GET_` ﻿<I>(rhs) | lhs.index() > rhs.index() | rhs_empty  
<=> | `_GET_` ﻿<I>(lhs) <=>` `` _GET_` ﻿<I>(rhs) | lhs.index() <=> rhs.index() | see below   
  
For operator<=>: 

  * If only lhs is valueless, returns [`std::strong_ordering::less`](../compare/strong_ordering.html "cpp/utility/compare/strong ordering"). 
  * If only rhs is valueless, returns [`std::strong_ordering::greater`](../compare/strong_ordering.html "cpp/utility/compare/strong ordering"). 
  * If both lhs and rhs are valueless, returns [`std::strong_ordering::equal`](../compare/strong_ordering.html "cpp/utility/compare/strong ordering"). 



### Notes

[Feature-test](../feature_test.html "cpp/utility/feature test") macro | Value | Std | Feature   
---|---|---|---  
[`__cpp_lib_constrained_equality`](../../experimental/feature_test.html#cpp_lib_constrained_equality "cpp/feature test") | [`202403L`](../../compiler_support/26.html#cpp_lib_constrained_equality_202403L "cpp/compiler support/26") | (C++26) | constrained comparison operators for [std::variant](../variant.html "cpp/utility/variant")  
  
### Example

Run this code
    
    
    #include <iostream>
    #include <string>
    #include <variant>
     
    int main()
    {
        [std::cout](../../io/cout.html) << [std::boolalpha](../../io/manip/boolalpha.html);
        [std::string](../../string/basic_string.html) cmp;
        bool result;
     
        auto print2 = [&cmp, &result](const auto& lhs, const auto& rhs)
        {
            [std::cout](../../io/cout.html) << lhs << ' ' << cmp << ' ' << rhs << " : " << result << '\n';
        };
     
        [std::variant](../variant.html)<int, [std::string](../../string/basic_string.html)> v1, v2;
     
        [std::cout](../../io/cout.html) << "operator==\n";
        {
            cmp = "==";
     
            // by default v1 = 0, v2 = 0;
            result = v1 == v2; // true
            [std::visit](visit.html)(print2, v1, v2);
     
            v1 = v2 = 1;
            result = v1 == v2; // true
            [std::visit](visit.html)(print2, v1, v2);
     
            v2 = 2;
            result = v1 == v2; // false
            [std::visit](visit.html)(print2, v1, v2);
     
            v1 = "A";
            result = v1 == v2; // false: v1.index == 1, v2.index == 0
            [std::visit](visit.html)(print2, v1, v2);
     
            v2 = "B";
            result = v1 == v2; // false
            [std::visit](visit.html)(print2, v1, v2);
     
            v2 = "A";
            result = v1 == v2; // true
            [std::visit](visit.html)(print2, v1, v2);
        }
     
        [std::cout](../../io/cout.html) << "operator<\n";
        {
            cmp = "<";
     
            v1 = v2 = 1;
            result = v1 < v2; // false
            [std::visit](visit.html)(print2, v1, v2);
     
            v2 = 2;
            result = v1 < v2; // true
            [std::visit](visit.html)(print2, v1, v2);
     
            v1 = 3;
            result = v1 < v2; // false
            [std::visit](visit.html)(print2, v1, v2);
     
            v1 = "A"; v2 = 1;
            result = v1 < v2; // false: v1.index == 1, v2.index == 0
            [std::visit](visit.html)(print2, v1, v2);
     
            v1 = 1; v2 = "A";
            result = v1 < v2; // true: v1.index == 0, v2.index == 1
            [std::visit](visit.html)(print2, v1, v2);
     
            v1 = v2 = "A";
            result = v1 < v2; // false
            [std::visit](visit.html)(print2, v1, v2);
     
            v2 = "B";
            result = v1 < v2; // true
            [std::visit](visit.html)(print2, v1, v2);
     
            v1 = "C";
            result = v1 < v2; // false
            [std::visit](visit.html)(print2, v1, v2);
        }
     
        {
            [std::variant](../variant.html)<int, [std::string](../../string/basic_string.html)> v1;
            [std::variant](../variant.html)<[std::string](../../string/basic_string.html), int> v2;
        //  v1 == v2; // Compilation error: no known conversion
        }
     
        // TODO: C++20 three-way comparison operator <=> for variants
    }

Output: 
    
    
    operator==
    0 == 0 : true
    1 == 1 : true
    1 == 2 : false
    A == 2 : false
    A == B : false
    A == A : true
    operator<
    1 < 1 : false
    1 < 2 : true
    3 < 2 : false
    A < 1 : false
    1 < A : true
    A < A : false
    A < B : true
    C < B : false

### See also

[ operator==operator!=operator<operator<=operator>operator>=operator<=>](../optional/operator_cmp.html "cpp/utility/optional/operator cmp")(C++17)(C++17)(C++17)(C++17)(C++17)(C++17)(C++20) |  compares `optional` objects   
(function template)   
---|---
  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
