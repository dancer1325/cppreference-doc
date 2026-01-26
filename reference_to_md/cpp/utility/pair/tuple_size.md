 
  


  
  
  
  
  
  
  
  
  
  
  
  


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
**tuple_size <std::pair>**(C++11)  
[tuple_element<std::pair>](tuple_element.html "cpp/utility/pair/tuple element")(C++11)  
[basic_common_reference<std::pair>](basic_common_reference.html "cpp/utility/pair/basic common reference")(C++23)  
[common_type<std::pair>](common_type.html "cpp/utility/pair/common type")(C++23)  
[formatter<std::pair>](../format/tuple_formatter.html "cpp/utility/format/tuple formatter")(C++23)  
[piecewise_construct_t](../piecewise_construct.html "cpp/utility/piecewise construct")(C++11)  
[Deduction guides](deduction_guides.html "cpp/utility/pair/deduction guides")(C++17)  
  


Defined in header `[<utility>](../../header/utility.html "cpp/header/utility")` |  |   
---|---|---  
template< class T1, class T2 >  
struct tuple_size<[std::pair](../pair.html)<T1, T2>>  
: [std::integral_constant](../../types/integral_constant.html)<[std::size_t](../../types/size_t.html), 2> { }; |  |  (since C++11)  
| |   
  
The partial specialization of [std::tuple_size](../tuple_size.html) for pairs provides a compile-time way to obtain the number of elements in a pair, which is always 2, using tuple-like syntax. 

## Contents

  * [1 Inherited from std::integral_constant](tuple_size.html#Inherited_from_std::integral_constant)
    * [1.1 Member constants](tuple_size.html#Member_constants)
    * [1.2 Member functions](tuple_size.html#Member_functions)
    * [1.3 Member types](tuple_size.html#Member_types)
    * [1.4 Example](tuple_size.html#Example)
    * [1.5 Defect reports](tuple_size.html#Defect_reports)
    * [1.6 See also](tuple_size.html#See_also)

  
---  
  
##  Inherited from [ std::integral_constant](../../types/integral_constant.html "cpp/types/integral constant")

###  Member constants

value[static] |  the constant value 2   
(public static member constant)  
---|---  
  
###  Member functions

operator std::size_t |  converts the object to [std::size_t](../../types/size_t.html), returns value   
(public member function)  
---|---  
operator()(C++14) |  returns value   
(public member function)  
  
###  Member types

Type  |  Definition   
---|---  
`value_type` |  [std::size_t](../../types/size_t.html)  
`type` |  [std::integral_constant](../../types/integral_constant.html)<[std::size_t](../../types/size_t.html), value>  
  
### Example

Run this code
    
    
    #include <iostream>
    #include <tuple>
    #include <utility>
     
    template<class T>
    void test([[maybe_unused]]T t)
    {
        [[maybe_unused]]
        int a[[std::tuple_size](../tuple_size.html)<T>::value]; // can be used at compile time
        [std::cout](../../io/cout.html) << [std::tuple_size](../tuple_size.html)<T>::value << '\n'; // or at run time
    }
     
    int main()
    {
        test([std::make_tuple](../tuple/make_tuple.html)(1, 2, 3.14));
        test([std::make_pair](make_pair.html)(1, 3.14));
    }

Output: 
    
    
    3
    2

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 2313](https://cplusplus.github.io/LWG/issue2313) | C++11  | specializations for `pair` were not required to be derived from `integral_constant` | required   
  
### See also

[Structured binding](../../language/structured_binding.html "cpp/language/structured binding") (C++17) |  binds the specified names to sub-objects or tuple elements of the initializer  
---|---  
[ tuple_size](../tuple_size.html "cpp/utility/tuple size")(C++11) |  obtains the number of elements of a tuple-like type   
(class template)   
[ std::tuple_size<std::array>](../../container/array/tuple_size.html "cpp/container/array/tuple size")(C++11) |  obtains the size of an `array`   
(class template specialization)   
[ std::tuple_size<std::tuple>](../tuple/tuple_size.html "cpp/utility/tuple/tuple size")(C++11) |  obtains the size of a `tuple`   
(class template specialization)   
[ std::tuple_size<std::ranges::subrange>](../../ranges/subrange/tuple_size.html "cpp/ranges/subrange/tuple size")(C++20) |  obtains the size of a [std::ranges::subrange](../../ranges/subrange.html "cpp/ranges/subrange")   
(class template specialization)   
[ std::tuple_element<std::pair>](tuple_element.html "cpp/utility/pair/tuple element")(C++11) |  obtains the type of the elements of `pair`   
(class template specialization) 
