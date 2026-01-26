 
  


  
  
  
  
  
  
  
  
  
  
  
  


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
[swap(std::tuple)](swap2.html "cpp/utility/tuple/swap2")  
[get(std::tuple)](get.html "cpp/utility/tuple/get")  
[Helper concepts](../tuple.html#Helper_concepts "cpp/utility/tuple")  
[`_tuple-like_`](tuple-like.html "cpp/utility/tuple/tuple-like")(C++23)  
[Helper classes](../tuple.html#Helper_classes "cpp/utility/tuple")  
**tuple_size <std::tuple>**  
[tuple_element<std::tuple>](tuple_element.html "cpp/utility/tuple/tuple element")  
[uses_allocator<std::tuple>](uses_allocator.html "cpp/utility/tuple/uses allocator")  
[basic_common_reference<std::tuple>](basic_common_reference.html "cpp/utility/tuple/basic common reference")(C++23)  
[common_type<std::tuple>](common_type.html "cpp/utility/tuple/common type")(C++23)  
[formatter<std::tuple>](../format/tuple_formatter.html "cpp/utility/format/tuple formatter")(C++23)  
[ignore](ignore.html "cpp/utility/tuple/ignore")  
[Deduction guides](deduction_guides.html "cpp/utility/tuple/deduction guides")(C++17)  
  


Defined in header `[<tuple>](../../header/tuple.html "cpp/header/tuple")` |  |   
---|---|---  
template< class... Types >  
struct tuple_size< [std::tuple](../tuple.html)<Types...> >  
: [std::integral_constant](../../types/integral_constant.html)<[std::size_t](../../types/size_t.html), sizeof...(Types)> { }; |  |  (since C++11)  
| |   
  
Provides access to the number of elements in a tuple as a compile-time constant expression. 

## Contents

  * [1 Helper variable template](tuple_size.html#Helper_variable_template)
  * [2 Inherited from std::integral_constant](tuple_size.html#Inherited_from_std::integral_constant)
    * [2.1 Member constants](tuple_size.html#Member_constants)
    * [2.2 Member functions](tuple_size.html#Member_functions)
    * [2.3 Member types](tuple_size.html#Member_types)
    * [2.4 Example](tuple_size.html#Example)
    * [2.5 See also](tuple_size.html#See_also)

  
---  
  
### Helper variable template

template< class T >  
constexpr [std::size_t](../../types/size_t.html) tuple_size_v = tuple_size<T>::value; |  |  (since C++17)  
---|---|---  
| |   
  
##  Inherited from [ std::integral_constant](../../types/integral_constant.html "cpp/types/integral constant")

###  Member constants

value[static] |  `sizeof...(Types)`   
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
     
    template <class T>
    void test(T value)
    {
        int a[[std::tuple_size_v](../tuple_size.html)<T>]; // can be used at compile time
     
        [std::cout](../../io/cout.html) << [std::tuple_size](../tuple_size.html)<T>{} << ' ' // or at run time
                  << sizeof a << ' '
                  << sizeof value << '\n';
    }
     
    int main()
    {
        test([std::make_tuple](make_tuple.html)(1, 2, 3.14));
    }

Possible output: 
    
    
    3 12 16

### See also

[Structured binding](../../language/structured_binding.html "cpp/language/structured binding") (C++17) |  binds the specified names to sub-objects or tuple elements of the initializer  
---|---  
[ tuple_size](../tuple_size.html "cpp/utility/tuple size")(C++11) |  obtains the number of elements of a tuple-like type   
(class template)   
[ std::tuple_size<std::pair>](../pair/tuple_size.html "cpp/utility/pair/tuple size")(C++11) |  obtains the size of a `pair`   
(class template specialization)   
[ std::tuple_size<std::array>](../../container/array/tuple_size.html "cpp/container/array/tuple size")(C++11) |  obtains the size of an `array`   
(class template specialization)   
[ std::tuple_size<std::ranges::subrange>](../../ranges/subrange/tuple_size.html "cpp/ranges/subrange/tuple size")(C++20) |  obtains the size of a [std::ranges::subrange](../../ranges/subrange.html "cpp/ranges/subrange")   
(class template specialization)   
[ get(std::tuple)](get.html "cpp/utility/tuple/get")(C++11) |  tuple accesses specified element   
(function template) 
