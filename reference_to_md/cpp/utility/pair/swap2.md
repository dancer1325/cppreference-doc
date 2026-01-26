 
  


  
  
  
  
  
  
  
  
  
  
  
  


[`std::pair`](../pair.html "cpp/utility/pair")

[Member functions](../pair.html#Member_functions "cpp/utility/pair")  
---  
[pair::pair](pair.html "cpp/utility/pair/pair")  
[pair::operator=](operator=.html "cpp/utility/pair/operator=")  
[pair::swap](swap.html "cpp/utility/pair/swap")(C++11)  
[Non-member functions](../pair.html#Non-member_functions "cpp/utility/pair")  
[make_pair](make_pair.html "cpp/utility/pair/make pair")  
[operator==operator!=operator<operator<=operator>operator>=operator<=>](operator_cmp.html "cpp/utility/pair/operator cmp")(until C++20)(until C++20)(until C++20)(until C++20)(until C++20)(C++20)  
**swap(std::pair)**(C++11)  
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
template< class T1, class T2 >  
void swap( [std::pair](../pair.html)<T1,T2>& x, [std::pair](../pair.html)<T1,T2>& y )  
noexcept(/* see below */); |  | (since C++11)   
(until C++20)  
template< class T1, class T2 >  
constexpr void swap( [std::pair](../pair.html)<T1,T2>& x, [std::pair](../pair.html)<T1,T2>& y )  
noexcept(/* see below */); |  |  (since C++20)  
template< class T1, class T2 >  
constexpr void swap( const [std::pair](../pair.html)<T1,T2>& x, const [std::pair](../pair.html)<T1,T2>& y )  
noexcept(/* see below */); |  (2)  |  (since C++23)  
| |   
  
Swaps the contents of `x` and `y`. Equivalent to x.swap(y). 

1) This overload participates in overload resolution only if [std::is_swappable_v](../../types/is_swappable.html)<first_type> && [std::is_swappable_v](../../types/is_swappable.html)<second_type> is true. 2) This overload participates in overload resolution only if [std::is_swappable_v](../../types/is_swappable.html)<const first_type> && [std::is_swappable_v](../../types/is_swappable.html)<const second_type> is true. | (since C++17)  
---|---  
  
## Contents

  * [1 Parameters](swap2.html#Parameters)
  * [2 Return value](swap2.html#Return_value)
  * [3 Exceptions](swap2.html#Exceptions)
  * [4 Example](swap2.html#Example)
  * [5 See also](swap2.html#See_also)

  
---  
  
### Parameters

x, y  |  \-  |  pairs whose contents to swap   
---|---|---  
  
### Return value

(none) 

### Exceptions

[`noexcept`](../../language/noexcept_spec.html "cpp/language/noexcept spec") specification: 

noexcept(noexcept(x.swap(y)))

### Example

Run this code
    
    
    #include <iostream>
    #include <utility>
     
    int main()
    {
        auto p1 = [std::make_pair](make_pair.html)(10, 3.14);
        auto p2 = [std::pair](../pair.html)(12, 1.23); // CTAD, since C++17
     
        auto print_p1_p2 = [&](auto msg) {
            [std::cout](../../io/cout.html) << msg
                      << "p1 = {" << std::get<0>(p1)
                      << ", "     << std::get<1>(p1) << "}, "
                      << "p2 = {" << std::get<0>(p2)
                      << ", "     << std::get<1>(p2) << "}\n";
        };
     
        print_p1_p2("Before p1.swap(p2): ");
        p1.swap(p2);
        print_p1_p2("After  p1.swap(p2): ");
        [std::swap](../../algorithm/swap.html)(p1, p2);
        print_p1_p2("After swap(p1, p2): ");
    }

Output: 
    
    
    Before p1.swap(p2): p1 = {10, 3.14}, p2 = {12, 1.23}
    After  p1.swap(p2): p1 = {12, 1.23}, p2 = {10, 3.14}
    After swap(p1, p2): p1 = {10, 3.14}, p2 = {12, 1.23}

### See also

[ swap](../swap.html "cpp/algorithm/swap") |  swaps the values of two objects   
(function template)   
---|---  
[ std::swap(std::tuple)](../tuple/swap2.html "cpp/utility/tuple/swap2")(C++11) |  specializes the [std::swap](../swap.html "cpp/algorithm/swap") algorithm   
(function template) 
