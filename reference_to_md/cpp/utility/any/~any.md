 
  


  
  
  
  
  
  
  
  
  
  
  
  


[`std::any`](../any.html "cpp/utility/any")

[Member functions](../any.html#Member_functions "cpp/utility/any")  
---  
[any::any](any.html "cpp/utility/any/any")  
**any::~any**  
[any::operator=](operator=.html "cpp/utility/any/operator=")  
[Modifiers](../any.html#Modifiers "cpp/utility/any")  
[any::emplace](emplace.html "cpp/utility/any/emplace")  
[any::reset](reset.html "cpp/utility/any/reset")  
[any::swap](swap.html "cpp/utility/any/swap")  
[Observers](../any.html#Observers "cpp/utility/any")  
[any::has_value](has_value.html "cpp/utility/any/has value")  
[any::type](type.html "cpp/utility/any/type")  
[Non-member functions](../any.html#Non-member_functions "cpp/utility/any")  
[swap(std::any)](swap2.html "cpp/utility/any/swap2")  
[any_cast](any_cast.html "cpp/utility/any/any cast")  
[make_any](make_any.html "cpp/utility/any/make any")  
[Helper classes](../any.html#Helper_classes "cpp/utility/any")  
[bad_any_cast](bad_any_cast.html "cpp/utility/any/bad any cast")  
  


~any(); |  |  (since C++17)  
---|---|---  
| |   
  
Destroys the contained object, if any, as if by a call to [`reset()`](reset.html "cpp/utility/any/reset"). 

### Example

Run this code
    
    
    #include <any>
    #include <cstdio>
     
    struct X
    {
        X() { [std::puts](../../io/c/puts.html)("X::X()"); }
        X(const X&) { [std::puts](../../io/c/puts.html)("X::X(const X&)"); }
        ~X() { [std::puts](../../io/c/puts.html)("X::~X()"); }
    };
     
    int main()
    {
        [std::any](../any.html) a{X{}};
        [std::puts](../../io/c/puts.html)("Leaving main()...");
    }

Output: 
    
    
    X::X()
    X::X(const X&)
    X::~X()
    Leaving main()...
    X::~X()

### See also

[ reset](reset.html "cpp/utility/any/reset") |  destroys contained object   
(public member function)   
---|---
