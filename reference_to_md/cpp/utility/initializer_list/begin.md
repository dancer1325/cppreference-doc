 
  


  
  
  
  
  
  
  
  
  
  
  
  


[`std::initializer_list`](../initializer_list.html "cpp/utility/initializer list")

Member functions  
---  
[initializer_list::initializer_list](initializer_list.html "cpp/utility/initializer list/initializer list")  
Capacity  
[initializer_list::size](size.html "cpp/utility/initializer list/size")  
Iterators  
**initializer_list::begin**  
[initializer_list::end](end.html "cpp/utility/initializer list/end")  
Non-member functions  
[begin(std::initializer_list)](begin2.html "cpp/utility/initializer list/begin2")  
[end(std::initializer_list)](end2.html "cpp/utility/initializer list/end2")  
  


const T* begin() const noexcept; |  | (since C++11)   
(constexpr since C++14)  
---|---|---  
| |   
  
Obtains a pointer to the first element in the initializer list. 

If the initializer list is empty, the values of `begin()` and [end()](end.html "cpp/utility/initializer list/end") are unspecified, but will be identical. 

## Contents

  * [1 Parameters](begin.html#Parameters)
  * [2 Return value](begin.html#Return_value)
  * [3 Complexity](begin.html#Complexity)
  * [4 Example](begin.html#Example)
  * [5 See also](begin.html#See_also)

  
---  
  
### Parameters

(none) 

### Return value

A pointer to the first element in the initializer list 

### Complexity

Constant 

### Example

Run this code
    
    
    #include <initializer_list>
     
    int main()
    {
        static constexpr auto il = {42, 24};
        static_assert(*il.begin() == 0x2A);
        static_assert(il.begin()[1] == 030);
    }

### See also

[ end](end.html "cpp/utility/initializer list/end") |  returns a pointer to one past the last element   
(public member function)   
---|---
