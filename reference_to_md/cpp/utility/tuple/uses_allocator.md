 
  


  
  
  
  
  
  
  
  
  
  
  
  


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
**uses_allocator <std::tuple>**  
[basic_common_reference<std::tuple>](basic_common_reference.html "cpp/utility/tuple/basic common reference")(C++23)  
[common_type<std::tuple>](common_type.html "cpp/utility/tuple/common type")(C++23)  
[formatter<std::tuple>](../format/tuple_formatter.html "cpp/utility/format/tuple formatter")(C++23)  
[ignore](ignore.html "cpp/utility/tuple/ignore")  
[Deduction guides](deduction_guides.html "cpp/utility/tuple/deduction guides")(C++17)  
  


Defined in header `[<tuple>](../../header/tuple.html "cpp/header/tuple")` |  |   
---|---|---  
template< class... Types, class Alloc >  
struct uses_allocator< [std::tuple](../tuple.html)<Types...>, Alloc > : [std::true_type](../../types/integral_constant.html) { }; |  |  (since C++11)  
| |   
  
This specialization of [std::uses_allocator](../../memory/uses_allocator.html "cpp/memory/uses allocator") informs other library components that tuples support _uses-allocator construction_ , even though they do not have a nested `allocator_type`. 

## Contents

  * [1 Inherited from std::integral_constant](uses_allocator.html#Inherited_from_std::integral_constant)
    * [1.1 Member constants](uses_allocator.html#Member_constants)
    * [1.2 Member functions](uses_allocator.html#Member_functions)
    * [1.3 Member types](uses_allocator.html#Member_types)
    * [1.4 Example](uses_allocator.html#Example)
    * [1.5 See also](uses_allocator.html#See_also)

  
---  
  
##  Inherited from [ std::integral_constant](../../types/integral_constant.html "cpp/types/integral constant")

###  Member constants

value[static] |  true   
(public static member constant)  
---|---  
  
###  Member functions

operator bool |  converts the object to bool, returns value   
(public member function)  
---|---  
operator()(C++14) |  returns value   
(public member function)  
  
###  Member types

Type  |  Definition   
---|---  
`value_type` |  bool  
`type` |  [std::integral_constant](../../types/integral_constant.html)<bool, value>  
  
### Example
    
    
    // myalloc is a stateful Allocator with a single-argument constructor
    // that takes an int. It has no default constructor.
     
        using innervector_t = [std::vector](../../container/vector.html)<int, myalloc<int>>;
        using elem_t = [std::tuple](../tuple.html)<int, innervector_t>;
        using Alloc = [std::scoped_allocator_adaptor](../../memory/scoped_allocator_adaptor.html)< myalloc<elem_t>, myalloc<int>>;
     
        Alloc a(1,2);
        [std::vector](../../container/vector.html)<elem_t, Alloc> v(a);
        v.resize(1);                  // uses allocator #1 for elements of v
        std::get<1>(v[0]).resize(10); // uses allocator #2 for innervector_t

### See also

[ uses_allocator](../../memory/uses_allocator.html "cpp/memory/uses allocator")(C++11) |  checks if the specified type supports uses-allocator construction   
(class template)   
---|---
