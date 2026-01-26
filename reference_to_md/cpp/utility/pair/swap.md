 
  


  
  
  
  
  
  
  
  
  
  
  
  


[`std::pair`](../pair.html "cpp/utility/pair")

[Member functions](../pair.html#Member_functions "cpp/utility/pair")  
---  
[pair::pair](pair.html "cpp/utility/pair/pair")  
[pair::operator=](operator=.html "cpp/utility/pair/operator=")  
**pair::swap**(C++11)  
[Non-member functions](../pair.html#Non-member_functions "cpp/utility/pair")  
[make_pair](make_pair.html "cpp/utility/pair/make pair")  
[operator==operator!=operator<operator<=operator>operator>=operator<=>](operator_cmp.html "cpp/utility/pair/operator cmp")(until C++20)(until C++20)(until C++20)(until C++20)(until C++20)(C++20)  
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
  


| (1) |   
---|---|---  
void swap( pair& other ) noexcept(/* see below */); |  | (since C++11)   
(until C++20)  
constexpr void swap( pair& other ) noexcept(/* see below */); |  |  (since C++20)  
constexpr void swap( const pair& other ) const noexcept(/* see below */); |  (2)  |  (since C++23)  
| |   
  
Swaps `first` with `other.first` and `second` with `other.second`, as if by using [std::swap](../../algorithm/swap.html); swap(first, other.first); swap(second, other.second);. 

If either selected `swap` function call is ill-formed or does not swap the value of the member, the behavior is undefined.  | (until C++23)  
---|---  
1) The program is ill-formed if either [std::is_swappable_v](../../types/is_swappable.html)<T1> or [std::is_swappable_v](../../types/is_swappable.html)<T2> is not true. 2) The program is ill-formed if either [std::is_swappable_v](../../types/is_swappable.html)<const T1> or [std::is_swappable_v](../../types/is_swappable.html)<const T2> is not true. If either selected `swap` function call does not swap the value of the member, the behavior is undefined.  | (since C++23)  
  
## Contents

  * [1 Parameters](swap.html#Parameters)
  * [2 Return value](swap.html#Return_value)
  * [3 Exceptions](swap.html#Exceptions)
  * [4 Example](swap.html#Example)
  * [5 Defect reports](swap.html#Defect_reports)
  * [6 See also](swap.html#See_also)

  
---  
  
### Parameters

other  |  \-  |  pair of values to swap   
---|---|---  
  
### Return value

(none) 

### Exceptions

[`noexcept`](../../language/noexcept_spec.html "cpp/language/noexcept spec") specification: noexcept(  
noexcept(swap(first, other.first)) &&  
noexcept(swap(second, other.second))  
) In the expression above, the identifier `swap` is looked up in the same manner as the one used by the C++17 [std::is_nothrow_swappable](../../types/is_swappable.html "cpp/types/is swappable") trait.  | (until C++17)  
---|---  
1) [`noexcept`](../../language/noexcept_spec.html "cpp/language/noexcept spec") specification: noexcept(  
[std::is_nothrow_swappable_v](../../types/is_swappable.html)<first_type> &&  
[std::is_nothrow_swappable_v](../../types/is_swappable.html)<second_type>  
) 2) [`noexcept`](../../language/noexcept_spec.html "cpp/language/noexcept spec") specification: noexcept(  
[std::is_nothrow_swappable_v](../../types/is_swappable.html)<const first_type> &&  
[std::is_nothrow_swappable_v](../../types/is_swappable.html)<const second_type>  
) | (since C++17)  
  
### Example

Run this code
    
    
    #include <iostream>
    #include <utility>
    #include <string>
    int main()
    {
        [std::pair](../pair.html)<int, [std::string](../../string/basic_string.html)> p1(10, "test"), p2;
        p2.swap(p1);
        [std::cout](../../io/cout.html) << "(" << p2.first << ", " << p2.second << ")\n";
     
    #if __cpp_lib_ranges_zip >= 202110L
        // Using the C++23 const qualified swap overload
        // (swap is no longer propagating pair constness)
        int i1 = 10, i2{};
        [std::string](../../string/basic_string.html) s1("test"), s2;
        const [std::pair](../pair.html)<int&, [std::string](../../string/basic_string.html)&> r1(i1, s1), r2(i2, s2);
        r2.swap(r1);
        [std::cout](../../io/cout.html) << "(" << i2 << ", " << s2 << ")\n";
    #endif
    }

Possible output: 
    
    
    (10, test)
    (10, test)

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 2456](https://cplusplus.github.io/LWG/issue2456) | C++11  | the `noexcept` specification is ill-formed  | made to work   
  
### See also

[ swap](../swap.html "cpp/algorithm/swap") |  swaps the values of two objects   
(function template)   
---|---  
[ swap](../tuple/swap.html "cpp/utility/tuple/swap") |  swaps the contents of two `tuple`s   
(public member function of `std::tuple<Types...>`) 
