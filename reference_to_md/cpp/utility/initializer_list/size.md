 
  


  
  
  
  
  
  
  
  
  
  
  
  


[`std::initializer_list`](../initializer_list.html "cpp/utility/initializer list")

Member functions  
---  
[initializer_list::initializer_list](initializer_list.html "cpp/utility/initializer list/initializer list")  
Capacity  
**initializer_list::size**  
Iterators  
[initializer_list::begin](begin.html "cpp/utility/initializer list/begin")  
[initializer_list::end](end.html "cpp/utility/initializer list/end")  
Non-member functions  
[begin(std::initializer_list)](begin2.html "cpp/utility/initializer list/begin2")  
[end(std::initializer_list)](end2.html "cpp/utility/initializer list/end2")  
  


size_type size() const noexcept; |  | (since C++11)   
(constexpr since C++14)  
---|---|---  
| |   
  
Obtains the number of elements in the initializer list. 

## Contents

  * [1 Parameters](size.html#Parameters)
  * [2 Return value](size.html#Return_value)
  * [3 Complexity](size.html#Complexity)
  * [4 Example](size.html#Example)

  
---  
  
### Parameters

(none) 

### Return value

[std::distance](../../iterator/distance.html)(begin(), end())

### Complexity

Constant 

### Example

Run this code
    
    
    #include <initializer_list>
     
    static_assert([std::initializer_list](../initializer_list.html){1, 2, 3}.size() == 3);
     
    int main() {}
