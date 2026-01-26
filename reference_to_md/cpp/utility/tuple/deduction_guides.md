 
  


  
  
  
  
  
  
  
  
  
  
  
  


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
[tuple_size<std::tuple>](tuple_size.html "cpp/utility/tuple/tuple size")  
[tuple_element<std::tuple>](tuple_element.html "cpp/utility/tuple/tuple element")  
[uses_allocator<std::tuple>](uses_allocator.html "cpp/utility/tuple/uses allocator")  
[basic_common_reference<std::tuple>](basic_common_reference.html "cpp/utility/tuple/basic common reference")(C++23)  
[common_type<std::tuple>](common_type.html "cpp/utility/tuple/common type")(C++23)  
[formatter<std::tuple>](../format/tuple_formatter.html "cpp/utility/format/tuple formatter")(C++23)  
[ignore](ignore.html "cpp/utility/tuple/ignore")  
**Deduction guides**(C++17)  
  


Defined in header `[<tuple>](../../header/tuple.html "cpp/header/tuple")` |  |   
---|---|---  
template<class... UTypes>  
tuple(UTypes...) -> tuple<UTypes...>; |  (1)  |  (since C++17)  
template<class T1, class T2>  
tuple([std::pair](../pair.html)<T1, T2>) -> tuple<T1, T2>; |  (2)  |  (since C++17)  
template<class Alloc, class... UTypes>  
tuple([std::allocator_arg_t](../../memory/allocator_arg_t.html), Alloc, UTypes...) -> tuple<UTypes...>; |  (3)  |  (since C++17)  
template<class Alloc, class T1, class T2>  
tuple([std::allocator_arg_t](../../memory/allocator_arg_t.html), Alloc, [std::pair](../pair.html)<T1, T2>) -> tuple<T1, T2>; |  (4)  |  (since C++17)  
template<class Alloc, class... UTypes>  
tuple([std::allocator_arg_t](../../memory/allocator_arg_t.html), Alloc, tuple<UTypes...>) -> tuple<UTypes...>; |  (5)  |  (since C++17)  
| |   
  
These [deduction guides](../../language/ctad.html "cpp/language/class template argument deduction") are provided for [std::tuple](../tuple.html "cpp/utility/tuple") to account for the edge cases missed by the implicit deduction guides, in particular, non-copyable arguments and array to pointer conversion. 

### Example

Run this code
    
    
    #include <tuple>
    int main()
    {
        int a[2], b[3], c[4];
        [std::tuple](../tuple.html) t1{a, b, c}; // explicit deduction guide is used in this case
    }
