 
  


  
  
  
  
  
  
  
  
  
  
  
  


[`std::initializer_list`](../initializer_list.html "cpp/utility/initializer list")

Member functions  
---  
[initializer_list::initializer_list](initializer_list.html "cpp/utility/initializer list/initializer list")  
Capacity  
[initializer_list::size](size.html "cpp/utility/initializer list/size")  
Iterators  
[initializer_list::begin](begin.html "cpp/utility/initializer list/begin")  
[initializer_list::end](end.html "cpp/utility/initializer list/end")  
Non-member functions  
[begin(std::initializer_list)](begin2.html "cpp/utility/initializer list/begin2")  
**end(std::initializer_list)**  
  


Defined in header `[<initializer_list>](../../header/initializer_list.html "cpp/header/initializer list")` |  |   
---|---|---  
template< class E >  
const E* end( [std::initializer_list](../initializer_list.html)<E> il ) noexcept; |  | (since C++11)   
(constexpr since C++14)  
| |   
  
The overload of [std::end](../../iterator/end.html "cpp/iterator/end") for `initializer_list` returns a pointer to one past the last element of il. 

## Contents

  * [1 Parameters](end2.html#Parameters)
  * [2 Return value](end2.html#Return_value)
  * [3 Example](end2.html#Example)
  * [4 See also](end2.html#See_also)

  
---  
  
### Parameters

il  |  \-  |  an `initializer_list`  
---|---|---  
  
### Return value

il.end()

### Example

Run this code
    
    
    #include <cassert>
    #include <initializer_list>
    #include <iterator>
    #include <numeric>
     
    int main()
    {
        [std::initializer_list](../initializer_list.html) e = {2, 7, 1, 8, 2, 8, 1};
        [assert](../../error/assert.html)([std::accumulate](../../algorithm/accumulate.html)([std::begin](../../iterator/begin.html)(e), [std::end](../../iterator/end.html)(e), 13) == 42);
    }

### See also

[ end](end.html "cpp/utility/initializer list/end") |  returns a pointer to one past the last element   
(public member function)   
---|---
