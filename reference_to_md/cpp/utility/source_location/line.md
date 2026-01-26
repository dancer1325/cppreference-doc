 
  


  
  
  
  
  
  
  
  
  
  
  
  


[`std::source_location`](../source_location.html "cpp/utility/source location")

Member functions  
---  
Creation  
[source_location::source_location](source_location.html "cpp/utility/source location/source location")  
[source_location::current](current.html "cpp/utility/source location/current")  
Field access  
**source_location::line**  
[source_location::column](column.html "cpp/utility/source location/column")  
[source_location::file_name](file_name.html "cpp/utility/source location/file name")  
[source_location::function_name](function_name.html "cpp/utility/source location/function name")  
  


constexpr [std::uint_least32_t](../../types/integer.html) line() const noexcept; |  |  (since C++20)  
---|---|---  
| |   
  
Returns the line number represented by this object. 

## Contents

  * [1 Parameters](line.html#Parameters)
  * [2 Return value](line.html#Return_value)
  * [3 Example](line.html#Example)
  * [4 See also](line.html#See_also)

  
---  
  
### Parameters

(none) 

### Return value

The line number represented by this object. 

An implementation is encouraged to return `0` when the line number is unknown. 

### Example

Run this code
    
    
    #include <iostream>
    #include <string_view>
    #include <source_location>
     
    inline void cur_line(
        const [std::string_view](../../string/basic_string_view.html) message = "",
        const [std::source_location](../source_location.html)& location = std::source_location::current())
    {
        [std::cout](../../io/cout.html)
            << location.line() // <- the line # of a call site
            << ") "
            << message; 
    }
     
    int main()
    {
        cur_line("++\n");
        cur_line(); [std::cout](../../io/cout.html) << "Hello,\n";
        cur_line(); [std::cout](../../io/cout.html) << "C++20!\n";
        cur_line("--\n");
    }

Output: 
    
    
    17) ++
    18) Hello, 
    19) C++20! 
    20) --

### See also

[ column](column.html "cpp/utility/source location/column") |  return the column number represented by this object   
(public member function)   
---|---  
[ file_name](file_name.html "cpp/utility/source location/file name") |  return the file name represented by this object   
(public member function)   
[ function_name](function_name.html "cpp/utility/source location/function name") |  return the name of the function represented by this object, if any   
(public member function)   
[ source_line](../stacktrace_entry/source_line.html "cpp/utility/stacktrace entry/source line") |  gets the line number that lexically relates the evaluation represented by the `stacktrace_entry`   
(public member function of `std::stacktrace_entry`)   
[ Filename and line information](../../preprocessor/line.html "cpp/preprocessor/line")
