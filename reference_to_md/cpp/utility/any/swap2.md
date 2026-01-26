 
  


  
  
  
  
  
  
  
  
  
  
  
  


[`std::any`](../any.html "cpp/utility/any")

[Member functions](../any.html#Member_functions "cpp/utility/any")  
---  
[any::any](any.html "cpp/utility/any/any")  
[any::~any](~any.html "cpp/utility/any/~any")  
[any::operator=](operator=.html "cpp/utility/any/operator=")  
[Modifiers](../any.html#Modifiers "cpp/utility/any")  
[any::emplace](emplace.html "cpp/utility/any/emplace")  
[any::reset](reset.html "cpp/utility/any/reset")  
[any::swap](swap.html "cpp/utility/any/swap")  
[Observers](../any.html#Observers "cpp/utility/any")  
[any::has_value](has_value.html "cpp/utility/any/has value")  
[any::type](type.html "cpp/utility/any/type")  
[Non-member functions](../any.html#Non-member_functions "cpp/utility/any")  
**swap(std::any)**  
[any_cast](any_cast.html "cpp/utility/any/any cast")  
[make_any](make_any.html "cpp/utility/any/make any")  
[Helper classes](../any.html#Helper_classes "cpp/utility/any")  
[bad_any_cast](bad_any_cast.html "cpp/utility/any/bad any cast")  
  


Defined in header `[<any>](../../header/any.html "cpp/header/any")` |  |   
---|---|---  
void swap( any& lhs, any& rhs ) noexcept; |  |  (since C++17)  
| |   
  
Overloads the [std::swap](../swap.html "cpp/algorithm/swap") algorithm for [std::any](../any.html "cpp/utility/any"). Swaps the content of two `any` objects by calling lhs.swap(rhs). 

### Parameters

lhs, rhs  |  \-  |  objects to swap   
---|---|---  
  
### Example

Run this code
    
    
    #include <any>
    #include <print>
    #include <string>
     
    int main()
    {
        [std::any](../any.html) p = 42, q = [std::string](../../string/basic_string.html){"Bishop"};
        [std::println](../../io/println.html)("p: {}, q: {}", [std::any_cast](any_cast.html)<int>(p), [std::any_cast](any_cast.html)<[std::string](../../string/basic_string.html)&>(q));
        [std::println](../../io/println.html)("swap(p, q)");
        [std::swap](../../algorithm/swap.html)(p, q);
        [std::println](../../io/println.html)("p: {}, q: {}", [std::any_cast](any_cast.html)<[std::string](../../string/basic_string.html)&>(p), [std::any_cast](any_cast.html)<int>(q));
    }

Output: 
    
    
    p: 42, q: Bishop
    swap(p, q)
    p: Bishop, q: 42

### See also

[ swap](swap.html "cpp/utility/any/swap") |  swaps two `any` objects   
(public member function)   
---|---
