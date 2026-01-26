 
  


  
  
  
  
  
  
  
  
  
  
  
  


[`std::expected`](../expected.html "cpp/utility/expected")

[Member functions](../expected.html#Member_functions "cpp/utility/expected")  
---  
[expected::expected](expected.html "cpp/utility/expected/expected")  
[expected::~expected](~expected.html "cpp/utility/expected/~expected")  
[expected::operator=](operator=.html "cpp/utility/expected/operator=")  
[Observers](../expected.html#Observers "cpp/utility/expected")  
[expected::operator->expected::operator*](operator*.html "cpp/utility/expected/operator*")  
[expected::operator boolexpected::has_value](operator_bool.html "cpp/utility/expected/operator bool")  
[expected::value](value.html "cpp/utility/expected/value")  
[expected::error](error.html "cpp/utility/expected/error")  
[expected::value_or](value_or.html "cpp/utility/expected/value or")  
[expected::error_or](error_or.html "cpp/utility/expected/error or")  
[Monadic operations](../expected.html#Monadic_operations "cpp/utility/expected")  
[expected::and_then](and_then.html "cpp/utility/expected/and then")  
[expected::or_else](or_else.html "cpp/utility/expected/or else")  
[expected::transform](transform.html "cpp/utility/expected/transform")  
[expected::transform_error](transform_error.html "cpp/utility/expected/transform error")  
[Modifiers](../expected.html#Modifiers "cpp/utility/expected")  
[expected::emplace](emplace.html "cpp/utility/expected/emplace")  
[expected::swap](swap.html "cpp/utility/expected/swap")  
[Non-member functions](../expected.html#Non-member_functions "cpp/utility/expected")  
[operator==(std::expected)](operator_cmp.html "cpp/utility/expected/operator cmp")  
[swap(std::expected)](swap2.html "cpp/utility/expected/swap2")  
[Helper classes](../expected.html#Helper_classes "cpp/utility/expected")  
[unexpected](unexpected.html "cpp/utility/expected/unexpected")  
[bad_expected_access](bad_expected_access.html "cpp/utility/expected/bad expected access")  
**unexpect_t unexpect**  
  


Defined in header `[<expected>](../../header/expected.html "cpp/header/expected")` |  |   
---|---|---  
struct unexpect_t { explicit unexpect_t() = default; }; |  (1)  |  (since C++23)  
inline constexpr std::unexpect_t unexpect{}; |  (2)  |  (since C++23)  
| |   
  
1) A tag type for in-place construction of an unexpected value in an `std::expected` object.

2) A constant of type const std::unexpect_t which is usually directly passed to a constructor of `std::expected` to construct an unexpected value.

### Notes

Like other construction tag types, `unexpect_t` is a trivial, empty class with an explicit default constructor. 

### See also

[ (constructor)](expected.html "cpp/utility/expected/expected") |  constructs the `expected` object   
(public member function)   
---|---  
[ in_placein_place_typein_place_indexin_place_tin_place_type_tin_place_index_t](../in_place.html "cpp/utility/in place")(C++17) |  in-place construction tag  
(tag)
