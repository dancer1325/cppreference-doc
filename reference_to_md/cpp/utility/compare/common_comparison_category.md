 
  


[Utilities library](../../utility.html "cpp/utility")

| [Language support](../../utility.html#Language_support "cpp/utility")  
---  
[Type support](../rtti.html "cpp/types") (basic types, RTTI)  
[Library feature-test macros](../feature_test.html "cpp/utility/feature test") (C++20)  
[Program utilities](../program.html "cpp/utility/program")  
[Variadic functions](../variadic.html "cpp/utility/variadic")  
[initializer_list](../initializer_list.html "cpp/utility/initializer list")(C++11)  
[is_constant_evaluated](../../types/is_constant_evaluated.html "cpp/types/is constant evaluated")(C++20)  
[is_within_lifetime](../../types/is_within_lifetime.html "cpp/types/is within lifetime")(C++26)  
[source_location](../source_location.html "cpp/utility/source location")(C++20)  
[Coroutine support](../../coroutine.html "cpp/coroutine") (C++20)  
[Contract support](../../contract.html "cpp/contract") (C++26)  
[Three-way comparison](../../utility.html#Three-way_comparison "cpp/utility")  
[three_way_comparablethree_way_comparable_with](three_way_comparable.html "cpp/utility/compare/three way comparable")(C++20)(C++20)  
[strong_ordering](strong_ordering.html "cpp/utility/compare/strong ordering")(C++20)  
[weak_ordering](weak_ordering.html "cpp/utility/compare/weak ordering")(C++20)  
[partial_ordering](partial_ordering.html "cpp/utility/compare/partial ordering")(C++20)  
**common_comparison_category**(C++20)  
[compare_three_way_result](compare_three_way_result.html "cpp/utility/compare/compare three way result")(C++20)  
[compare_three_way](compare_three_way.html "cpp/utility/compare/compare three way")(C++20)  
[strong_order](strong_order.html "cpp/utility/compare/strong order")(C++20)  
[weak_order](weak_order.html "cpp/utility/compare/weak order")(C++20)  
[partial_order](partial_order.html "cpp/utility/compare/partial order")(C++20)  
[compare_strong_order_fallback](compare_strong_order_fallback.html "cpp/utility/compare/compare strong order fallback")(C++20)  
[compare_weak_order_fallback](compare_weak_order_fallback.html "cpp/utility/compare/compare weak order fallback")(C++20)  
[compare_partial_order_fallback](compare_partial_order_fallback.html "cpp/utility/compare/compare partial order fallback")(C++20)` `  
|  | [is_eqis_ltis_lteq](named_comparison_functions.html "cpp/utility/compare/named comparison functions")(C++20)(C++20)(C++20)` `  
---  
  
| [is_neqis_gtis_gteq](named_comparison_functions.html "cpp/utility/compare/named comparison functions")(C++20)(C++20)(C++20)  
---  
  
  
  
  
  
  
  
  
  
  
  


Defined in header `[<compare>](../../header/compare.html "cpp/header/compare")` |  |   
---|---|---  
template< class... Ts >  
struct common_comparison_category  
{  
using type = /* see below */ ;  
}; |  |  (since C++20)  
| |   
  
The class template `std::common_comparison_category` provides an alias (as the member typedef `type`) for the strongest comparison category to which all of the template arguments `Ts...` can be converted. 

In detail, the common comparison type of a list of n types `T`0...`T`n-1 is defined as follows: 

  * If any `T`i is not a comparison category type ([`std::partial_ordering`](partial_ordering.html "cpp/utility/compare/partial ordering"), [`std::weak_ordering`](weak_ordering.html "cpp/utility/compare/weak ordering"), [`std::strong_ordering`](strong_ordering.html "cpp/utility/compare/strong ordering")), `U` is void. 
  * Otherwise, if at least one `T`i is [`std::partial_ordering`](partial_ordering.html "cpp/utility/compare/partial ordering"), `U` is [`std::partial_ordering`](partial_ordering.html "cpp/utility/compare/partial ordering"). 
  * Otherwise, if at least one `T`i is [`std::weak_ordering`](weak_ordering.html "cpp/utility/compare/weak ordering"), `U` is [`std::weak_ordering`](weak_ordering.html "cpp/utility/compare/weak ordering"). 
  * Otherwise (if every `T`i is [`std::strong_ordering`](strong_ordering.html "cpp/utility/compare/strong ordering"), or if the list is empty), `U` is [`std::strong_ordering`](strong_ordering.html "cpp/utility/compare/strong ordering"). 



## Contents

  * [1 Template parameters](common_comparison_category.html#Template_parameters)
  * [2 Helper template](common_comparison_category.html#Helper_template)
  * [3 Member types](common_comparison_category.html#Member_types)
  * [4 Possible implementation](common_comparison_category.html#Possible_implementation)
  * [5 Example](common_comparison_category.html#Example)
  * [6 See also](common_comparison_category.html#See_also)

  
---  
  
### Template parameters

...Ts  |  \-  |  a possibly empty list of types   
---|---|---  
  
### Helper template

template< class... Ts >  
using common_comparison_category_t = common_comparison_category<Ts...>::type; |  |  (since C++20)  
---|---|---  
| |   
  
### Member types

Member type  |  Definition   
---|---  
`type` |  the strongest common comparison category (as defined above)   
  
### Possible implementation
    
    
    namespace detail
    {
        template<unsigned int>
        struct common_cmpcat_base     { using type = void; };
        template<>
        struct common_cmpcat_base<0u> { using type = [std::strong_ordering](strong_ordering.html); };
        template<>
        struct common_cmpcat_base<2u> { using type = [std::partial_ordering](partial_ordering.html); };
        template<>
        struct common_cmpcat_base<4u> { using type = [std::weak_ordering](weak_ordering.html); };
        template<>
        struct common_cmpcat_base<6u> { using type = [std::partial_ordering](partial_ordering.html); };
    } // namespace detail
     
    template<class...Ts>
    struct common_comparison_category :
        detail::common_cmpcat_base<(0u | ... |
            ([std::is_same_v](../../types/is_same.html)<Ts, [std::strong_ordering](strong_ordering.html)>  ? 0u :
             [std::is_same_v](../../types/is_same.html)<Ts, [std::weak_ordering](weak_ordering.html)>    ? 4u :
             [std::is_same_v](../../types/is_same.html)<Ts, [std::partial_ordering](partial_ordering.html)> ? 2u : 1u)
        )> {};  
  
---  
  
### Example

| This section is incomplete  
Reason: no example   
---|---  
  
### See also

[ strong_ordering](strong_ordering.html "cpp/utility/compare/strong ordering")(C++20) |  the result type of 3-way comparison that supports all 6 operators and is substitutable   
(class)   
---|---  
[ weak_ordering](weak_ordering.html "cpp/utility/compare/weak ordering")(C++20) |  the result type of 3-way comparison that supports all 6 operators and is not substitutable   
(class)   
[ partial_ordering](partial_ordering.html "cpp/utility/compare/partial ordering")(C++20) |  the result type of 3-way comparison that supports all 6 operators, is not substitutable, and allows incomparable values   
(class) 
