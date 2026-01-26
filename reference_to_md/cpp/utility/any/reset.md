 
  


  
  
  
  
  
  
  
  
  
  
  
  


[`std::any`](../any.html "cpp/utility/any")

[Member functions](../any.html#Member_functions "cpp/utility/any")  
---  
[any::any](any.html "cpp/utility/any/any")  
[any::~any](~any.html "cpp/utility/any/~any")  
[any::operator=](operator=.html "cpp/utility/any/operator=")  
[Modifiers](../any.html#Modifiers "cpp/utility/any")  
[any::emplace](emplace.html "cpp/utility/any/emplace")  
**any::reset**  
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
  


void reset() noexcept; |  |  (since C++17)  
---|---|---  
| |   
  
If *this contains a value, destroys the contained value. 

*this does not contain a value after this call. 

## Contents

  * [1 Parameters](reset.html#Parameters)
  * [2 Return value](reset.html#Return_value)
  * [3 Example](reset.html#Example)
  * [4 See also](reset.html#See_also)

  
---  
  
### Parameters

(none) 

### Return value

(none) 

### Example

Run this code
    
    
    #include <any>
    #include <cassert>
     
    int main()
    {
        [std::any](../any.html) a{42};
        [assert](../../error/assert.html)(a.has_value());
        a.reset();
        [assert](../../error/assert.html)(not a.has_value());
    }

### See also

[ has_value](has_value.html "cpp/utility/any/has value") |  checks if object holds a value   
(public member function)   
---|---
