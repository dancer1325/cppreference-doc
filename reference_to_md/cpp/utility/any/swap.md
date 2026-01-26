 
  


  
  
  
  
  
  
  
  
  
  
  
  


[`std::any`](../any.html "cpp/utility/any")

[Member functions](../any.html#Member_functions "cpp/utility/any")  
---  
[any::any](any.html "cpp/utility/any/any")  
[any::~any](~any.html "cpp/utility/any/~any")  
[any::operator=](operator=.html "cpp/utility/any/operator=")  
[Modifiers](../any.html#Modifiers "cpp/utility/any")  
[any::emplace](emplace.html "cpp/utility/any/emplace")  
[any::reset](reset.html "cpp/utility/any/reset")  
**any::swap**  
[Observers](../any.html#Observers "cpp/utility/any")  
[any::has_value](has_value.html "cpp/utility/any/has value")  
[any::type](type.html "cpp/utility/any/type")  
[Non-member functions](../any.html#Non-member_functions "cpp/utility/any")  
[swap(std::any)](swap2.html "cpp/utility/any/swap2")  
[any_cast](any_cast.html "cpp/utility/any/any cast")  
[make_any](make_any.html "cpp/utility/any/make any")  
[Helper classes](../any.html#Helper_classes "cpp/utility/any")  
[bad_any_cast](bad_any_cast.html "cpp/utility/any/bad any cast")  
  


void swap( any& other ) noexcept; |  |  (since C++17)  
---|---|---  
| |   
  
Swaps the content of two `any` objects. 

### Parameters

other  |  \-  |  object to swap with   
---|---|---  
  
### Example

Run this code
    
    
    #include <any>
    #include <print>
    #include <string>
    #include <string_view>
     
    int main()
    {
        [std::any](../any.html) a = [std::string](../../string/basic_string.html){"King"};
        [std::any](../any.html) b = [std::string_view](../../string/basic_string_view.html){"Queen"};
        [std::println](../../io/println.html)("a = {}", [std::any_cast](any_cast.html)<[std::string](../../string/basic_string.html)&>(a));
        [std::println](../../io/println.html)("b = {}", [std::any_cast](any_cast.html)<[std::string_view](../../string/basic_string_view.html)&>(b));
        [std::println](../../io/println.html)("swap(a, b)");
        a.swap(b);
        [std::println](../../io/println.html)("a = {}", [std::any_cast](any_cast.html)<[std::string_view](../../string/basic_string_view.html)&>(a));
        [std::println](../../io/println.html)("b = {}", [std::any_cast](any_cast.html)<[std::string](../../string/basic_string.html)&>(b));
    }

Output: 
    
    
    a = King
    b = Queen
    swap(a, b)
    a = Queen
    b = King
