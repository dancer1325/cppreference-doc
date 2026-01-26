 
  


  
  
  
  
  
  
  
  
  
  
  
  


[`std::pair`](../pair.html "cpp/utility/pair")

[Member functions](../pair.html#Member_functions "cpp/utility/pair")  
---  
[pair::pair](pair.html "cpp/utility/pair/pair")  
[pair::operator=](operator=.html "cpp/utility/pair/operator=")  
[pair::swap](swap.html "cpp/utility/pair/swap")(C++11)  
[Non-member functions](../pair.html#Non-member_functions "cpp/utility/pair")  
[make_pair](make_pair.html "cpp/utility/pair/make pair")  
[operator==operator!=operator<operator<=operator>operator>=operator<=>](operator_cmp.html "cpp/utility/pair/operator cmp")(until C++20)(until C++20)(until C++20)(until C++20)(until C++20)(C++20)  
[swap(std::pair)](swap2.html "cpp/utility/pair/swap2")(C++11)  
[get(std::pair)](get.html "cpp/utility/pair/get")(C++11)  
[Helper classes](../pair.html#Helper_classes "cpp/utility/pair")  
[tuple_size<std::pair>](tuple_size.html "cpp/utility/pair/tuple size")(C++11)  
**tuple_element <std::pair>**(C++11)  
[basic_common_reference<std::pair>](basic_common_reference.html "cpp/utility/pair/basic common reference")(C++23)  
[common_type<std::pair>](common_type.html "cpp/utility/pair/common type")(C++23)  
[formatter<std::pair>](../format/tuple_formatter.html "cpp/utility/format/tuple formatter")(C++23)  
[piecewise_construct_t](../piecewise_construct.html "cpp/utility/piecewise construct")(C++11)  
[Deduction guides](deduction_guides.html "cpp/utility/pair/deduction guides")(C++17)  
  


Defined in header `[<utility>](../../header/utility.html "cpp/header/utility")` |  |   
---|---|---  
template< [std::size_t](../../types/size_t.html) I, class T1, class T2 >  
struct tuple_element<I, [std::pair](../pair.html)<T1, T2>>; |  |  (since C++11)  
| |   
  
The partial specializations of [std::tuple_element](../tuple_element.html) for pairs provide compile-time access to the types of the pair's elements, using tuple-like syntax. The program is ill-formed if `I >= 2`. 

## Contents

  * [1 Member types](tuple_element.html#Member_types)
  * [2 Possible implementation](tuple_element.html#Possible_implementation)
  * [3 Example](tuple_element.html#Example)
  * [4 Defect reports](tuple_element.html#Defect_reports)
  * [5 See also](tuple_element.html#See_also)

  
---  
  
### Member types

Member type  |  Definition   
---|---  
`type` |  `T1` if `I == 0`  
`T2` if `I == 1`  
  
### Possible implementation
    
    
    template<[std::size_t](../../types/size_t.html) I, typename T>
    struct tuple_element;
     
    template<[std::size_t](../../types/size_t.html) I, typename T1, typename T2>
    struct tuple_element<I, [std::pair](../pair.html)<T1, T2>>
    {
        static_assert(I < 2, "std::pair has only 2 elements!");
    };
     
    template<typename T1, typename T2>
    struct tuple_element<0, [std::pair](../pair.html)<T1, T2>>
    {
        using type = T1;
    };
     
    template<typename T1, typename T2>
    struct tuple_element<1, [std::pair](../pair.html)<T1, T2>>
    {
        using type = T2;
    };  
  
---  
  
### Example

Run this code
    
    
    #include <iostream>
    #include <string>
    #include <tuple>
     
    namespace detail
    {
        template<[std::size_t](../../types/size_t.html)>
        struct index_tag { constexpr explicit index_tag() = default; };
     
        template<class T, class U>
        constexpr T get_val_dispatch([std::pair](../pair.html)<T, U> const& pair, index_tag<0>)
        {
            return pair.first;
        }
     
        template<class T, class U>
        constexpr U get_val_dispatch([std::pair](../pair.html)<T, U> const& pair, index_tag<1>)
        {
            return pair.second;
        }
    } // namespace detail
     
    template<[std::size_t](../../types/size_t.html) N, class T, class U>
    auto constexpr get_val([std::pair](../pair.html)<T, U> const& pair)
        -> typename [std::tuple_element](../tuple_element.html)<N, [std::pair](../pair.html)<T, U>>::type
    {
        return detail::get_val_dispatch(pair, detail::index_tag<N>{});
    }
     
    int main()
    {
        auto var = [std::make_pair](make_pair.html)(1, [std::string](../../string/basic_string.html){"one"});
     
        [std::cout](../../io/cout.html) << get_val<0>(var) << " = " << get_val<1>(var);
    }

Output: 
    
    
    1 = one

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 2974](https://cplusplus.github.io/LWG/issue2974) | C++11  | out-of-bounds index referred the undefined primary template  | made ill-formed (hard error)   
  
### See also

[Structured binding](../../language/structured_binding.html "cpp/language/structured binding") (C++17) |  binds the specified names to sub-objects or tuple elements of the initializer  
---|---  
[ std::tuple_element<std::tuple>](../tuple/tuple_element.html "cpp/utility/tuple/tuple element")(C++11) |  obtains the type of the specified element   
(class template specialization)   
[ std::tuple_element<std::array>](../../container/array/tuple_element.html "cpp/container/array/tuple element")(C++11) |  obtains the type of the elements of `array`   
(class template specialization)   
[ std::tuple_element<std::ranges::subrange>](../../ranges/subrange/tuple_element.html "cpp/ranges/subrange/tuple element")(C++20) |  obtains the type of the iterator or the sentinel of a [std::ranges::subrange](../../ranges/subrange.html "cpp/ranges/subrange")   
(class template specialization)   
[ std::tuple_size<std::pair>](tuple_size.html "cpp/utility/pair/tuple size")(C++11) |  obtains the size of a `pair`   
(class template specialization) 
