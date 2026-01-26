 
  


  
  
  
  
  
  
  
  
  
  
  
  


[`std::tuple`](../tuple.html "cpp/utility/tuple")

[Member functions](../tuple.html#Member_functions "cpp/utility/tuple")  
---  
[tuple::tuple](tuple.html "cpp/utility/tuple/tuple")  
[tuple::operator=](operator=.html "cpp/utility/tuple/operator=")  
[tuple::swap](swap.html "cpp/utility/tuple/swap")  
[Non-member functions](../tuple.html#Non-member_functions "cpp/utility/tuple")  
[make_tuple](make_tuple.html "cpp/utility/tuple/make tuple")  
**tie**  
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
template< class... Types >  
[std::tuple](../tuple.html)<Types&...> tie( Types&... args ) noexcept; |  | (since C++11)   
(constexpr since C++14)  
| |   
  
Creates a tuple of lvalue references to its arguments or instances of [std::ignore](ignore.html "cpp/utility/tuple/ignore"). 

## Contents

  * [1 Parameters](tie.html#Parameters)
  * [2 Return value](tie.html#Return_value)
  * [3 Possible implementation](tie.html#Possible_implementation)
  * [4 Notes](tie.html#Notes)
  * [5 Example](tie.html#Example)
  * [6 See also](tie.html#See_also)

  
---  
  
### Parameters

args  |  \-  |  zero or more lvalue arguments to construct the tuple from.   
---|---|---  
  
### Return value

A [std::tuple](../tuple.html "cpp/utility/tuple") object containing lvalue references. 

### Possible implementation
    
    
    template <typename... Args>
    constexpr // since C++14
    [std::tuple](../tuple.html)<Args&...> tie(Args&... args) noexcept
    {
        return {args...};
    }  
  
---  
  
### Notes

`std::tie` may be used to unpack a [std::pair](../pair.html "cpp/utility/pair") because [std::tuple](../tuple.html "cpp/utility/tuple") has a [converting assignment](operator=.html "cpp/utility/tuple/operator=") from pairs: 
    
    
    bool result;
    std::tie([std::ignore](ignore.html), result) = set.insert(value);

### Example

1) `std::tie` can be used to introduce lexicographical comparison to a struct or to unpack a tuple;  
2) `std::tie` can work with [structured bindings](../../language/structured_binding.html "cpp/language/structured binding"):

Run this code
    
    
    #include <cassert>
    #include <iostream>
    #include <set>
    #include <string>
    #include <tuple>
     
    struct S
    {
        int n;
        [std::string](../../string/basic_string.html) s;
        float d;
     
        friend bool operator<(const S& lhs, const S& rhs) noexcept
        {
            // compares lhs.n to rhs.n,
            // then lhs.s to rhs.s,
            // then lhs.d to rhs.d
            // in that order, first non-equal result is returned
            // or false if all elements are equal
            return std::tie(lhs.n, lhs.s, lhs.d) < std::tie(rhs.n, rhs.s, rhs.d);
        }
    };
     
    int main()
    {
        // Lexicographical comparison demo:
        [std::set](../../container/set.html)<S> set_of_s;
     
        S value{42, "Test", 3.14};
        [std::set](../../container/set.html)<S>::iterator iter;
        bool is_inserted;
     
        // Unpack a pair:
        std::tie(iter, is_inserted) = set_of_s.insert(value);
        [assert](../../error/assert.html)(is_inserted);
     
     
        // std::tie and structured bindings:
        auto position = [](int w) { return [std::tuple](../tuple.html)(1 * w, 2 * w); };
     
        auto [x, y] = position(1);
        [assert](../../error/assert.html)(x == 1 && y == 2);
        std::tie(x, y) = position(2); // reuse x, y with tie
        [assert](../../error/assert.html)(x == 2 && y == 4);
     
     
        // Implicit conversions are permitted:
        [std::tuple](../tuple.html)<char, short> coordinates(6, 9);
        std::tie(x, y) = coordinates;
        [assert](../../error/assert.html)(x == 6 && y == 9);
     
        // Skip an element:
        [std::string](../../string/basic_string.html) z;
        std::tie(x, [std::ignore](ignore.html), z) = [std::tuple](../tuple.html)(1, 2.0, "Test");
        [assert](../../error/assert.html)(x == 1 && z == "Test");
    }

### See also

[Structured binding](../../language/structured_binding.html "cpp/language/structured binding") (C++17) |  binds the specified names to sub-objects or tuple elements of the initializer  
---|---  
[ make_tuple](make_tuple.html "cpp/utility/tuple/make tuple")(C++11) |  creates a `tuple` object of the type defined by the argument types   
(function template)   
[ forward_as_tuple](forward_as_tuple.html "cpp/utility/tuple/forward as tuple")(C++11) |  creates a `tuple` of [forwarding references](../../language/reference.html#Forwarding_references "cpp/language/reference")   
(function template)   
[ tuple_cat](tuple_cat.html "cpp/utility/tuple/tuple cat")(C++11) |  creates a `tuple` by concatenating any number of tuples   
(function template)   
[ ignore](ignore.html "cpp/utility/tuple/ignore")(C++11) |  placeholder to skip an element when unpacking a `tuple` using **`tie`**   
(constant) 
