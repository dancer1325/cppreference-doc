 
  


  
  
  
  
  
  
  
  
  
  
  
  


[`std::source_location`](../source_location.html "cpp/utility/source location")

Member functions  
---  
Creation  
[source_location::source_location](source_location.html "cpp/utility/source location/source location")  
[source_location::current](current.html "cpp/utility/source location/current")  
Field access  
[source_location::line](line.html "cpp/utility/source location/line")  
**source_location::column**  
[source_location::file_name](file_name.html "cpp/utility/source location/file name")  
[source_location::function_name](function_name.html "cpp/utility/source location/function name")  
  


constexpr [std::uint_least32_t](../../types/integer.html) column() const noexcept; |  |  (since C++20)  
---|---|---  
| |   
  
Returns an implementation-defined value representing some offset from the start of the line represented by this object (i.e., the column number). Column numbers are presumed to be 1-indexed. 

## Contents

  * [1 Parameters](column.html#Parameters)
  * [2 Return value](column.html#Return_value)
  * [3 Example](column.html#Example)
  * [4 See also](column.html#See_also)

  
---  
  
### Parameters

(none) 

### Return value

An implementation-defined value representing some offset from the start of the line represented by this object (i.e., the column number). 

An implementation is encouraged to use `0` when the column number is unknown. 

### Example

Run this code
    
    
    #include <iostream>
    #include <source_location>
     
    template<typename T = [std::source_location](../source_location.html)>
    inline void pos(const T& location = T::current())
    {
        [std::cout](../../io/cout.html)
            << "("
            << location.line()
            << ':' 
            << location.column()
            << ") ";
    }
     
    int main()
    {
    //      ↓: column #9
        pos(); [std::cout](../../io/cout.html) << "Proxima\n";    // row #18
          pos(); [std::cout](../../io/cout.html) << "Centauri\n"; // row #19
    //        ↑: column #11
    }

Possible output: 
    
    
    (18:9) Proxima
    (19:11) Centauri

### See also

[ line](line.html "cpp/utility/source location/line") |  return the line number represented by this object   
(public member function)   
---|---  
[ file_name](file_name.html "cpp/utility/source location/file name") |  return the file name represented by this object   
(public member function)   
[ function_name](function_name.html "cpp/utility/source location/function name") |  return the name of the function represented by this object, if any   
(public member function)   
[ Filename and line information](../../preprocessor/line.html "cpp/preprocessor/line")
