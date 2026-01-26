 
  


  
  
  
  
  
  
  
  
  
  
  
  


[`std::initializer_list`](../initializer_list.html "cpp/utility/initializer list")

Member functions  
---  
[initializer_list::initializer_list](initializer_list.html "cpp/utility/initializer list/initializer list")  
Capacity  
[initializer_list::size](size.html "cpp/utility/initializer list/size")  
Iterators  
[initializer_list::begin](begin.html "cpp/utility/initializer list/begin")  
**initializer_list::end**  
Non-member functions  
[begin(std::initializer_list)](begin2.html "cpp/utility/initializer list/begin2")  
[end(std::initializer_list)](end2.html "cpp/utility/initializer list/end2")  
  


const T* end() const noexcept; |  | (since C++11)   
(constexpr since C++14)  
---|---|---  
| |   
  
Obtains a pointer to one past the last element in the initializer list, i.e. [`begin()`](begin.html "cpp/utility/initializer list/begin")` `+ size(). 

If the initializer list is empty, the values of [`begin()`](begin.html "cpp/utility/initializer list/begin") and `end()` are unspecified, but will be identical. 

## Contents

  * [1 Parameters](end.html#Parameters)
  * [2 Return value](end.html#Return_value)
  * [3 Complexity](end.html#Complexity)
  * [4 Example](end.html#Example)
  * [5 See also](end.html#See_also)

  
---  
  
### Parameters

(none) 

### Return value

A pointer to one past the last element in the initializer list 

### Complexity

Constant 

### Example

Run this code
    
    
    #include <initializer_list>
    #include <numeric>
     
    int main()
    {
        static constexpr auto l = {3, 13, 13};
        static_assert([std::accumulate](../../algorithm/accumulate.html)(l.begin(), l.end(), 13) == 42);
    }

### See also

[ begin](begin.html "cpp/utility/initializer list/begin") |  returns a pointer to the first element   
(public member function)   
---|---
