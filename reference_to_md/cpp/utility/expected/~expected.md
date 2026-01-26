 
  


  
  
  
  
  
  
  
  
  
  
  
  


[`std::expected`](../expected.html "cpp/utility/expected")

[Member functions](../expected.html#Member_functions "cpp/utility/expected")  
---  
[expected::expected](expected.html "cpp/utility/expected/expected")  
**expected::~expected**  
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
[unexpect_tunexpect](unexpect_t.html "cpp/utility/expected/unexpect t")  
  


constexpr ~expected(); |  |  (since C++23)  
---|---|---  
| |   
  
### Main template destructor

Destroys the contained value: 

  * If [`has_value()`](operator_bool.html "cpp/utility/expected/operator bool") is true, destroys the expected value. 
  * Otherwise, destroys the unexpected value. 



This destructor is trivial if [std::is_trivially_destructible_v](../../types/is_destructible.html)<T> and [std::is_trivially_destructible_v](../../types/is_destructible.html)<E> are both true. 

### void partial specialization destructor

If [`has_value()`](operator_bool.html "cpp/utility/expected/operator bool") is false, destroys the unexpected value. 

This destructor is trivial if [std::is_trivially_destructible_v](../../types/is_destructible.html)<E> is true. 

### Example

Run this code
    
    
    #include <expected>
    #include <print>
     
    void info(auto name, int x)
    {
        [std::println](../../io/println.html)("{} : {}", name, x);
    }
     
    struct Value
    {
        int o{};
        ~Value() { info(__func__, o); }
    };
     
    struct Error
    {
        int e{};
        ~Error() { info(__func__, e); }
    };
     
    int main()
    {
        [std::expected](../expected.html)<Value, Error> e1{42};
        [std::expected](../expected.html)<Value, Error> e2{[std::unexpect](unexpect_t.html), 13};
        [std::expected](../expected.html)<void, Error> e3{[std::unexpect](unexpect_t.html), 37};
    }

Output: 
    
    
    ~Error : 37
    ~Error : 13
    ~Value : 42
