 
  


  
  
  
  
  
  
  
  
  
  
  
  


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
**tuple_element <std::tuple>**  
[uses_allocator<std::tuple>](uses_allocator.html "cpp/utility/tuple/uses allocator")  
[basic_common_reference<std::tuple>](basic_common_reference.html "cpp/utility/tuple/basic common reference")(C++23)  
[common_type<std::tuple>](common_type.html "cpp/utility/tuple/common type")(C++23)  
[formatter<std::tuple>](../format/tuple_formatter.html "cpp/utility/format/tuple formatter")(C++23)  
[ignore](ignore.html "cpp/utility/tuple/ignore")  
[Deduction guides](deduction_guides.html "cpp/utility/tuple/deduction guides")(C++17)  
  


Defined in header `[<tuple>](../../header/tuple.html "cpp/header/tuple")` |  |   
---|---|---  
template< [std::size_t](../../types/size_t.html) I, class... Types >  
struct tuple_element< I, [std::tuple](../tuple.html)<Types...> >; |  |  (since C++11)  
| |   
  
Provides compile-time indexed access to the types of the elements of the tuple. 

## Contents

  * [1 Member types](tuple_element.html#Member_types)
  * [2 Possible implementation](tuple_element.html#Possible_implementation)
  * [3 Example](tuple_element.html#Example)
  * [4 See also](tuple_element.html#See_also)

  
---  
  
### Member types

Type  |  Definition   
---|---  
type  |  the type of `I`th element of the tuple, where `I` is in `[`​0​`, `sizeof...(Types)`)`  
  
### Possible implementation
    
    
    template<[std::size_t](../../types/size_t.html) I, class T>
    struct tuple_element;
     
    #ifndef __cpp_pack_indexing
    // recursive case
    template<[std::size_t](../../types/size_t.html) I, class Head, class... Tail>
    struct tuple_element<I, [std::tuple](../tuple.html)<Head, Tail...>>
        : [std::tuple_element](../tuple_element.html)<I - 1, [std::tuple](../tuple.html)<Tail...>>
    { };
     
    // base case
    template<class Head, class... Tail>
    struct tuple_element<0, [std::tuple](../tuple.html)<Head, Tail...>>
    {
        using type = Head;
    };
     
    #else
    // C++26 implementation using pack indexing
    template<[std::size_t](../../types/size_t.html) I, class... Ts>
    struct tuple_element<I, [std::tuple](../tuple.html)<Ts...>>
    {
        using type = Ts...[I];
    };
    #endif  
  
---  
  
### Example

Run this code
    
    
    #include <boost/type_index.hpp>
    #include <cstddef>
    #include <iostream>
    #include <string>
    #include <tuple>
    #include <utility>
     
    template<typename TupleLike, [std::size_t](../../types/size_t.html) I = 0>
    void printTypes()
    {
        if constexpr (I == 0)
            [std::cout](../../io/cout.html) << boost::typeindex::type_id_with_cvr<TupleLike>() << '\n';
     
        if constexpr (I < [std::tuple_size_v](../tuple_size.html)<TupleLike>)
        {
            using SelectedType = [std::tuple_element_t](../tuple_element.html)<I, TupleLike>;
     
            [std::cout](../../io/cout.html) << "  The type at index " << I << " is: "
                      << boost::typeindex::type_id_with_cvr<SelectedType>() << '\n';
            printTypes<TupleLike, I + 1>();
        }
    }
     
    struct MyStruct {};
     
    using MyTuple = [std::tuple](../tuple.html)<int, long&, const char&, bool&&,
                               [std::string](../../string/basic_string.html), volatile MyStruct>;
     
    using MyPair = [std::pair](../pair.html)<char, bool&&>;
     
    static_assert([std::is_same_v](../../types/is_same.html)<[std::tuple_element_t](../tuple_element.html)<0, MyPair>, char>);
    static_assert([std::is_same_v](../../types/is_same.html)<[std::tuple_element_t](../tuple_element.html)<1, MyPair>, bool&&>);
     
    int main()
    {
        printTypes<MyTuple>();
        printTypes<MyPair>();
    }

Possible output: 
    
    
    std::tuple<int, long&, char const&, bool&&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, MyStruct volatile>
      The type at index 0 is: int
      The type at index 1 is: long&
      The type at index 2 is: char const&
      The type at index 3 is: bool&&
      The type at index 4 is: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >
      The type at index 5 is: MyStruct volatile
    std::pair<char, bool&&>
      The type at index 0 is: char
      The type at index 1 is: bool&&

### See also

[Structured binding](../../language/structured_binding.html "cpp/language/structured binding") (C++17) |  binds the specified names to sub-objects or tuple elements of the initializer  
---|---  
[ tuple_element](../tuple_element.html "cpp/utility/tuple element")(C++11) |  obtains the element types of a tuple-like type   
(class template) 
