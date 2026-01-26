 
  


  
  
  
  
  
  
  
  
  
  
  
  


[`std::source_location`](../source_location.html "cpp/utility/source location")

Member functions  
---  
Creation  
[source_location::source_location](source_location.html "cpp/utility/source location/source location")  
**source_location::current**  
Field access  
[source_location::line](line.html "cpp/utility/source location/line")  
[source_location::column](column.html "cpp/utility/source location/column")  
[source_location::file_name](file_name.html "cpp/utility/source location/file name")  
[source_location::function_name](function_name.html "cpp/utility/source location/function name")  
  


static consteval source_location current() noexcept; |  |  (since C++20)  
---|---|---  
| |   
  
Constructs a new `source_location` object corresponding to the location of the call site. 

## Contents

  * [1 Parameters](current.html#Parameters)
  * [2 Return value](current.html#Return_value)
  * [3 Notes](current.html#Notes)
  * [4 Example](current.html#Example)
  * [5 See also](current.html#See_also)

  
---  
  
### Parameters

(none) 

### Return value 

If `current()` is invoked directly (via a function call that names `current()`), it returns a `source_location` object with implementation-defined values representing the location of the call. The values should be affected by the [`#line` preprocessor directive](../../preprocessor/line.html "cpp/preprocessor/line") in the same manner as the predefined macros __LINE__ and __FILE__. 

If `current()` is used in a [default member initializer](../../language/data_members.html#Member_initialization "cpp/language/data members"), the return value corresponds to the location of the constructor definition or [aggregate initialization](../../language/aggregate_initialization.html "cpp/language/aggregate initialization") that initializes the data member. 

If `current()` is used in a default argument, the return value corresponds to the location of the call to `current()` at the call site. 

If `current()` is invoked in any other manner, the return value is unspecified. 

### Notes 

`std::source_location::current` typically requires compiler's built-in implementation. 

### Example

Run this code
    
    
    #include <source_location>
    #include <iostream>
     
    struct src_rec {
        [std::source_location](../source_location.html) srcl = std::source_location::current();
        int dummy = 0;
     
        src_rec([std::source_location](../source_location.html) loc = std::source_location::current()) :
            srcl(loc)    // values of member refer to the location of the calling function
        {}
        src_rec(int i) : // values of member refer to this location
            dummy(i)
        {}
        src_rec(double)  // values of member refer to this location
        {}
    };
     
    [std::source_location](../source_location.html) src_clone([std::source_location](../source_location.html) a = std::source_location::current())
    {
        return a;
    }
     
    [std::source_location](../source_location.html) src_make()
    {
        [std::source_location](../source_location.html) b = std::source_location::current();
        return b;
    }
     
    int main()
    {
        src_rec srec0;
        src_rec srec1(0);
        src_rec srec2(0.0);
        auto s0 = std::source_location::current();
        auto s1 = src_clone(s0);
        auto s2 = src_clone();
        auto s3 = src_make();
     
        [std::cout](../../io/cout.html)
            << srec0.srcl.line() << ' ' << srec0.srcl.function_name() << '\n'
            << srec1.srcl.line() << ' ' << srec1.srcl.function_name() << '\n'
            << srec2.srcl.line() << ' ' << srec2.srcl.function_name() << '\n'
            << s0.line() << ' ' << s0.function_name() << '\n'
            << s1.line() << ' ' << s1.function_name() << '\n'
            << s2.line() << ' ' << s2.function_name() << '\n'
            << s3.line() << ' ' << s3.function_name() << '\n';
    }

Possible output: 
    
    
    31 int main()
    12 src_rec::src_rec(int)
    15 src_rec::src_rec(double)
    34 int main()
    34 int main()
    36 int main()
    25 std::source_location src_make()

### See also

[ (constructor)](source_location.html "cpp/utility/source location/source location") |  constructs a new `source_location` with implementation-defined values   
(public member function)   
---|---  
[ current](../basic_stacktrace/current.html "cpp/utility/basic stacktrace/current")[static] |  obtains the current stacktrace or its given part   
(public static member function of `std::basic_stacktrace<Allocator>`) 
