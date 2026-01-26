 
  


  
  
  
  
  
  
  
  
  
  
  
  


[`std::source_location`](../source_location.html "cpp/utility/source location")

Member functions  
---  
Creation  
[source_location::source_location](source_location.html "cpp/utility/source location/source location")  
[source_location::current](current.html "cpp/utility/source location/current")  
Field access  
[source_location::line](line.html "cpp/utility/source location/line")  
[source_location::column](column.html "cpp/utility/source location/column")  
**source_location::file_name**  
[source_location::function_name](function_name.html "cpp/utility/source location/function name")  
  


constexpr const char* file_name() const noexcept; |  |  (since C++20)  
---|---|---  
| |   
  
Returns the name of the current source file represented by this object, represented as a null-terminated byte string. 

## Contents

  * [1 Parameters](file_name.html#Parameters)
  * [2 Return value](file_name.html#Return_value)
  * [3 Example](file_name.html#Example)
  * [4 See also](file_name.html#See_also)

  
---  
  
### Parameters

(none) 

### Return value

The name of the current source file represented by this object, represented as a null-terminated byte string. 

### Example

Run this code
    
    
    #include <iostream>
    #include <source_location>
     
    void print_this_file_name(
        [std::source_location](../source_location.html) location = std::source_location::current())
    {
        // Name of file that contains the call site of this function.
        [std::cout](../../io/cout.html) << "File: " << location.file_name() << '\n';
    }
     
    int main()
    {
    #line 1 "cppreference.cpp"
        print_this_file_name();
    }

Output: 
    
    
    File: cppreference.cpp

### See also

[ line](line.html "cpp/utility/source location/line") |  return the line number represented by this object   
(public member function)   
---|---  
[ column](column.html "cpp/utility/source location/column") |  return the column number represented by this object   
(public member function)   
[ function_name](function_name.html "cpp/utility/source location/function name") |  return the name of the function represented by this object, if any   
(public member function)   
[ source_file](../stacktrace_entry/source_file.html "cpp/utility/stacktrace entry/source file") |  gets the name of the source file that lexically contains the expression or statement whose evaluation is represented by the `stacktrace_entry`   
(public member function of `std::stacktrace_entry`)   
[ Filename and line information](../../preprocessor/line.html "cpp/preprocessor/line")
