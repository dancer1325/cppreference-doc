 
  


  
  
  
  
  
  
  
  
  
  
  
  


[`std::tuple`](../tuple.html "cpp/utility/tuple")

[Member functions](../tuple.html#Member_functions "cpp/utility/tuple")  
---  
[tuple::tuple](tuple.html "cpp/utility/tuple/tuple")  
[tuple::operator=](operator=.html "cpp/utility/tuple/operator=")  
[tuple::swap](swap.html "cpp/utility/tuple/swap")  
[Non-member functions](../tuple.html#Non-member_functions "cpp/utility/tuple")  
[make_tuple](make_tuple.html "cpp/utility/tuple/make tuple")  
[tie](tie.html "cpp/utility/tuple/tie")  
**forward_as_tuple**  
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
template< class... Types >  
[std::tuple](../tuple.html)<Types&&...> forward_as_tuple( Types&&... args ) noexcept; |  | (since C++11)   
(constexpr since C++14)  
| |   
  
Constructs a tuple of references to the arguments in args suitable for forwarding as an argument to a function. The tuple has rvalue reference data members when rvalues are used as arguments, and otherwise has lvalue reference data members. 

## Contents

  * [1 Parameters](forward_as_tuple.html#Parameters)
  * [2 Return value](forward_as_tuple.html#Return_value)
  * [3 Notes](forward_as_tuple.html#Notes)
  * [4 Example](forward_as_tuple.html#Example)
  * [5 See also](forward_as_tuple.html#See_also)

  
---  
  
### Parameters

args  |  \-  |  zero or more arguments to construct the tuple from   
---|---|---  
  
### Return value

A [std::tuple](../tuple.html "cpp/utility/tuple") object created as if by [std::tuple](../tuple.html)<Types&&...>([std::forward](../forward.html)<Types>(args)...)

### Notes

If the arguments are temporaries, `forward_as_tuple` does not extend their lifetime; they have to be used before the end of the full expression. 

### Example

Run this code
    
    
    #include <iostream>
    #include <map>
    #include <string>
    #include <tuple>
     
    int main()
    {
        [std::map](../../container/map.html)<int, [std::string](../../string/basic_string.html)> m;
     
        m.emplace([std::piecewise_construct](../piecewise_construct.html),
                  std::forward_as_tuple(6),
                  std::forward_as_tuple(9, 'g'));
        [std::cout](../../io/cout.html) << "m[6] = " << m[6] << '\n';
     
        // The following is an error: it produces a
        // std::tuple<int&&, char&&> holding two dangling references.
        //
        // auto t = std::forward_as_tuple(20, 'a');
        // m.emplace(std::piecewise_construct, std::forward_as_tuple(10), t);
    }

Output: 
    
    
    m[6] = ggggggggg

### See also

[ make_tuple](make_tuple.html "cpp/utility/tuple/make tuple")(C++11) |  creates a `tuple` object of the type defined by the argument types   
(function template)   
---|---  
[ tie](tie.html "cpp/utility/tuple/tie")(C++11) |  creates a [tuple](../tuple.html "cpp/utility/tuple") of lvalue references or unpacks a tuple into individual objects   
(function template)   
[ tuple_cat](tuple_cat.html "cpp/utility/tuple/tuple cat")(C++11) |  creates a `tuple` by concatenating any number of tuples   
(function template)   
[ apply](../apply.html "cpp/utility/apply")(C++17) |  calls a function with a tuple of arguments   
(function template) 
