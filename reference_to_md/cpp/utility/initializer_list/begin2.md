 
  


  
  
  
  
  
  
  
  
  
  
  
  


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
**begin(std::initializer_list)**  
[end(std::initializer_list)](end2.html "cpp/utility/initializer list/end2")  
  


Defined in header `[<initializer_list>](../../header/initializer_list.html "cpp/header/initializer list")` |  |   
---|---|---  
template< class E >  
const E* begin( [std::initializer_list](../initializer_list.html)<E> il ) noexcept; |  | (since C++11)   
(constexpr since C++14)  
| |   
  
The overload of [std::begin](../../iterator/begin.html "cpp/iterator/begin") for `initializer_list` returns a pointer to the first element of il. 

## Contents

  * [1 Parameters](begin2.html#Parameters)
  * [2 Return value](begin2.html#Return_value)
  * [3 Example](begin2.html#Example)
  * [4 See also](begin2.html#See_also)

  
---  
  
### Parameters

il  |  \-  |  an `initializer_list`  
---|---|---  
  
### Return value

il.begin()

### Example

Run this code
    
    
    #include <algorithm>
    #include <initializer_list>
    #include <iostream>
    #include <iterator>
     
    int main()
    {
        [std::initializer_list](../initializer_list.html) ϕ = {'1', '.', '6', '1', '8', '0'};
     
        [std::copy](../../algorithm/copy.html)([std::begin](../../iterator/begin.html)(ϕ),
                  [std::end](../../iterator/end.html)(ϕ),
                  [std::ostream_iterator](../../iterator/ostream_iterator.html)<char>([std::cout](../../io/cout.html), ""));
     
        [std::cout](../../io/cout.html) << '\n';
    }

Output: 
    
    
    1.6180

### See also

[ begin](begin.html "cpp/utility/initializer list/begin") |  returns a pointer to the first element   
(public member function)   
---|---
