 
  


  
  
  
  
  
  
  
  
  
  
  
  


[`std::tuple`](../tuple.html "cpp/utility/tuple")

[Member functions](../tuple.html#Member_functions "cpp/utility/tuple")  
---  
[tuple::tuple](tuple.html "cpp/utility/tuple/tuple")  
[tuple::operator=](operator=.html "cpp/utility/tuple/operator=")  
**tuple::swap**  
[Non-member functions](../tuple.html#Non-member_functions "cpp/utility/tuple")  
[make_tuple](make_tuple.html "cpp/utility/tuple/make tuple")  
[tie](tie.html "cpp/utility/tuple/tie")  
[forward_as_tuple](forward_as_tuple.html "cpp/utility/tuple/forward as tuple")  
[tuple_cat](tuple_cat.html "cpp/utility/tuple/tuple cat")  
[operator==operator!=operator<operator<=operator>operator>=operator<=>](operator_cmp.html "cpp/utility/tuple/operator cmp")(until C++20)(until C++20)(until C++20)(until C++20)(until C++20)(C++20)  
[swap(std::tuple)](swap2.html "cpp/utility/tuple/swap2")  
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
void swap( tuple& other ) noexcept(/* see below */); |  (1)  |  (since C++11)   
(constexpr since C++20)  
constexpr void swap( const tuple& other ) noexcept(/* see below */) const; |  (2)  |  (since C++23)  
| |   
  
Calls `swap` (which might be [std::swap](../swap.html "cpp/algorithm/swap"), or might be found via [ADL](../../language/adl.html "cpp/language/adl")) for each element in *this and its corresponding element in other. 

If any selected `swap` function call is ill-formed, or does not swap the corresponding elements of both tuples, the behavior is undefined.  | (until C++23)  
---|---  
If any selected `swap` function call does not swap the corresponding elements of both tuples, the behavior is undefined.  1) The program is ill-formed if ([std::is_swappable_v](../../types/is_swappable.html)<Types> && ...) is not true. 2) The program is ill-formed if ([std::is_swappable_v](../../types/is_swappable.html)<const Types> && ...) is not true.  | (since C++23)  
  
## Contents

  * [1 Parameters](swap.html#Parameters)
  * [2 Return value](swap.html#Return_value)
  * [3 Exceptions](swap.html#Exceptions)
  * [4 Example](swap.html#Example)
  * [5 Defect reports](swap.html#Defect_reports)
  * [6 See also](swap.html#See_also)

  
---  
  
### Parameters

other  |  \-  |  tuple of values to swap   
---|---|---  
  
### Return value

(none) 

### Exceptions

[`noexcept`](../../language/noexcept_spec.html "cpp/language/noexcept spec") specification: noexcept(  
noexcept(swap([std::declval](../declval.html)<T0&>>(), [std::declval](../declval.html)<T0&>())) &&  
noexcept(swap([std::declval](../declval.html)<T1&>>(), [std::declval](../declval.html)<T1&>())) &&  
noexcept(swap([std::declval](../declval.html)<T2&>>(), [std::declval](../declval.html)<T2&>())) &&  
...  
) In the expression above, the identifier `swap` is looked up in the same manner as the one used by the C++17 [std::is_nothrow_swappable](../../types/is_swappable.html "cpp/types/is swappable") trait.  | (until C++17)  
---|---  
1) [`noexcept`](../../language/noexcept_spec.html "cpp/language/noexcept spec") specification: noexcept(([std::is_nothrow_swappable_v](../../types/is_swappable.html)<Types> && ...)) 2) [`noexcept`](../../language/noexcept_spec.html "cpp/language/noexcept spec") specification: noexcept(([std::is_nothrow_swappable_v](../../types/is_swappable.html)<const Types> && ...)) | (since C++17)  
  
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

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 2456](https://cplusplus.github.io/LWG/issue2456) | C++11  | the `noexcept` specification is ill-formed  | made to work   
  
### See also

[ std::swap(std::tuple)](swap2.html "cpp/utility/tuple/swap2")(C++11) |  specializes the [std::swap](../swap.html "cpp/algorithm/swap") algorithm   
(function template)   
---|---  
[ swap](../pair/swap.html "cpp/utility/pair/swap")(C++11) |  swaps the contents   
(public member function of `std::pair<T1,T2>`) 
