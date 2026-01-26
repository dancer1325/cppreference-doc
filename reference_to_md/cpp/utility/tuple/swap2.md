 
  


  
  
  
  
  
  
  
  
  
  
  
  


[`std::tuple`](../tuple.html "cpp/utility/tuple")

[Member functions](../tuple.html#Member_functions "cpp/utility/tuple")  
---  
[tuple::tuple](tuple.html "cpp/utility/tuple/tuple")  
[tuple::operator=](operator=.html "cpp/utility/tuple/operator=")  
[tuple::swap](swap.html "cpp/utility/tuple/swap")  
[Non-member functions](../tuple.html#Non-member_functions "cpp/utility/tuple")  
[make_tuple](make_tuple.html "cpp/utility/tuple/make tuple")  
[tie](tie.html "cpp/utility/tuple/tie")  
[forward_as_tuple](forward_as_tuple.html "cpp/utility/tuple/forward as tuple")  
[tuple_cat](tuple_cat.html "cpp/utility/tuple/tuple cat")  
[operator==operator!=operator<operator<=operator>operator>=operator<=>](operator_cmp.html "cpp/utility/tuple/operator cmp")(until C++20)(until C++20)(until C++20)(until C++20)(until C++20)(C++20)  
**swap(std::tuple)**  
[get(std::tuple)](get.html "cpp/utility/tuple/get")  
[Helper concepts](../tuple.html#Helper_concepts "cpp/utility/tuple")  
[`_tuple-like_`](tuple-like.html "cpp/utility/tuple/tuple-like")(C++23)  
[Helper classes](../tuple.html#Helper_classes "cpp/utility/tuple")  
[tuple_size<std::tuple>](tuple_size.html "cpp/utility/tuple/tuple size")  
[tuple_element<std::tuple>](tuple_element.html "cpp/utility/tuple/tuple element")  
[uses_allocator<std::tuple>](uses_allocator.html "cpp/utility/tuple/uses allocator")  
[basic_common_reference<std::tuple>](basic_common_reference.html "cpp/utility/tuple/basic common reference")(C++23)  
[common_type<std::tuple>](common_type.html "cpp/utility/tuple/common type")(C++23)  
[formatter<std::tuple>](../format/tuple_formatter.html "cpp/utility/format/tuple formatter")(C++23)  
[ignore](ignore.html "cpp/utility/tuple/ignore")  
[Deduction guides](deduction_guides.html "cpp/utility/tuple/deduction guides")(C++17)  
  


Defined in header `[<tuple>](../../header/tuple.html "cpp/header/tuple")` |  |   
---|---|---  
| (1) |   
template< class... Types >  
void swap( [std::tuple](../tuple.html)<Types...>& lhs,  
[std::tuple](../tuple.html)<Types...>& rhs ) noexcept(/* see below */); |  | (since C++11)   
(until C++20)  
template< class... Types >  
constexpr void swap( [std::tuple](../tuple.html)<Types...>& lhs,  
[std::tuple](../tuple.html)<Types...>& rhs ) noexcept(/* see below */); |  |  (since C++20)  
template< class... Types >  
constexpr void swap( const [std::tuple](../tuple.html)<Types...>& lhs,  
const [std::tuple](../tuple.html)<Types...>& rhs ) noexcept(/* see below */); |  (2)  |  (since C++23)  
| |   
  
Swaps the contents of lhs and rhs. Equivalent to lhs.swap(rhs). 

1) This overload participates in overload resolution only if [std::is_swappable_v](../../types/is_swappable.html)<Ti> is true for all i from 0 to sizeof...(Types). 2) This overload participates in overload resolution only if [std::is_swappable_v](../../types/is_swappable.html)<const Ti> is true for all i from 0 to sizeof...(Types). | (since C++17)  
---|---  
  
## Contents

  * [1 Parameters](swap2.html#Parameters)
  * [2 Return value](swap2.html#Return_value)
  * [3 Exceptions](swap2.html#Exceptions)
  * [4 Example](swap2.html#Example)
  * [5 See also](swap2.html#See_also)

  
---  
  
### Parameters

lhs, rhs  |  \-  |  tuples whose contents to swap   
---|---|---  
  
### Return value

(none) 

### Exceptions

[`noexcept`](../../language/noexcept_spec.html "cpp/language/noexcept spec") specification: 

noexcept(noexcept(lhs.swap(rhs)))

### Example

Run this code
    
    
    #include <iostream>
    #include <string>
    #include <tuple>
     
    int main()
    {
        [std::tuple](../tuple.html)<int, [std::string](../../string/basic_string.html), float> p1{42, "ABCD", 2.71}, p2;
        p2 = [std::make_tuple](make_tuple.html)(10, "1234", 3.14);
     
        auto print_p1_p2 = [&](auto rem)
        {
            [std::cout](../../io/cout.html) << rem
                      << "p1 = {" << std::get<0>(p1)
                      << ", "     << std::get<1>(p1)
                      << ", "     << std::get<2>(p1) << "}, "
                      << "p2 = {" << std::get<0>(p2)
                      << ", "     << std::get<1>(p2)
                      << ", "     << std::get<2>(p2) << "}\n";
        };
     
        print_p1_p2("Before p1.swap(p2): ");
        p1.swap(p2);
        print_p1_p2("After  p1.swap(p2): ");
        swap(p1, p2);
        print_p1_p2("After swap(p1, p2): ");
    }

Output: 
    
    
    Before p1.swap(p2): p1 = {42, ABCD, 2.71}, p2 = {10, 1234, 3.14}
    After  p1.swap(p2): p1 = {10, 1234, 3.14}, p2 = {42, ABCD, 2.71}
    After swap(p1, p2): p1 = {42, ABCD, 2.71}, p2 = {10, 1234, 3.14}

### See also

[ swap](swap.html "cpp/utility/tuple/swap") |  swaps the contents of two `tuple`s   
(public member function)   
---|---  
[ std::swap(std::pair)](../pair/swap2.html "cpp/utility/pair/swap2")(C++11) |  specializes the [std::swap](../swap.html "cpp/algorithm/swap") algorithm   
(function template) 
