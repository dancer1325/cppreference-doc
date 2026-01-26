 
  


  
  
  
  
  
  
  
  
  
  
  
  


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
**any::has_value**  
[any::type](type.html "cpp/utility/any/type")  
[Non-member functions](../any.html#Non-member_functions "cpp/utility/any")  
[swap(std::any)](swap2.html "cpp/utility/any/swap2")  
[any_cast](any_cast.html "cpp/utility/any/any cast")  
[make_any](make_any.html "cpp/utility/any/make any")  
[Helper classes](../any.html#Helper_classes "cpp/utility/any")  
[bad_any_cast](bad_any_cast.html "cpp/utility/any/bad any cast")  
  


bool has_value() const noexcept; |  |  (since C++17)  
---|---|---  
| |   
  
Checks whether the object contains a value. 

## Contents

  * [1 Parameters](has_value.html#Parameters)
  * [2 Return value](has_value.html#Return_value)
  * [3 Example](has_value.html#Example)
  * [4 See also](has_value.html#See_also)

  
---  
  
### Parameters

(none) 

### Return value

true if and only if the instance contains a value. 

### Example

Run this code
    
    
    #include <any>
    #include <cassert>
    #include <string>
     
    int main()
    {
        [std::any](../any.html) a0;
        [assert](../../error/assert.html)(a0.has_value() == false);
     
        [std::any](../any.html) a1 = 42;
        [assert](../../error/assert.html)(a1.has_value() == true);
        [assert](../../error/assert.html)([std::any_cast](any_cast.html)<int>(a1) == 42);
        a1.reset();
        [assert](../../error/assert.html)(a1.has_value() == false);
     
        auto a2 = [std::make_any](make_any.html)<[std::string](../../string/basic_string.html)>("Andromeda");
        [assert](../../error/assert.html)(a2.has_value() == true);
        [assert](../../error/assert.html)([std::any_cast](any_cast.html)<[std::string](../../string/basic_string.html)&>(a2) == "Andromeda");
        a2.reset();
        [assert](../../error/assert.html)(a2.has_value() == false);
    }

### See also

[ reset](reset.html "cpp/utility/any/reset") |  destroys contained object   
(public member function)   
---|---
