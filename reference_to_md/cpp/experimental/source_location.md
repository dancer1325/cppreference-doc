  
  


[Experimental](../experimental.html "cpp/experimental")

[Technical Specification](../experimental.html#Technical_Specification "cpp/experimental")  
---  
[Filesystem library](fs.html "cpp/experimental/fs") (filesystem TS)  
[Library fundamentals](memory.html "cpp/experimental/lib extensions") (library fundamentals TS)  
[Library fundamentals 2](lib_extensions_2.html "cpp/experimental/lib extensions 2") (library fundamentals TS v2)  
[Library fundamentals 3](lib_extensions_3.html "cpp/experimental/lib extensions 3") (library fundamentals TS v3)  
[Extensions for parallelism](parallelism.html "cpp/experimental/parallelism") (parallelism TS)  
[Extensions for parallelism 2](parallelism_2.html "cpp/experimental/parallelism 2") (parallelism TS v2)  
[Extensions for concurrency](concurrency.html "cpp/experimental/concurrency") (concurrency TS)  
[Extensions for concurrency 2](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/concurrency_2&action=edit&redlink=1 "cpp/experimental/concurrency 2 \(page does not exist\)") (concurrency TS v2)  
[Concepts](constraints.html "cpp/experimental/constraints") (concepts TS)  
[Ranges](ranges.html "cpp/experimental/ranges") (ranges TS)  
[Reflection](reflect.html "cpp/experimental/reflect") (reflection TS)  
[Mathematical special functions](special_math.html "cpp/experimental/special functions") (special functions TR)  
[Experimental Non-TS](../experimental.html#Experimental_Non-TS "cpp/experimental")  
[Pattern Matching](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/pm&action=edit&redlink=1 "cpp/experimental/pm \(page does not exist\)")  
[Linear Algebra](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/la&action=edit&redlink=1 "cpp/experimental/la \(page does not exist\)")  
[std::execution](execution.html "cpp/experimental/execution")  
[Contracts](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/contracts&action=edit&redlink=1 "cpp/experimental/contracts \(page does not exist\)")  
[2D Graphics](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/2dgraphics&action=edit&redlink=1 "cpp/experimental/2dgraphics \(page does not exist\)")  
  


[Library fundamentals v2](lib_extensions_2.html "cpp/experimental/lib extensions 2")

[experimental::propagate_const](propagate_const.html "cpp/experimental/propagate const")  
---  
[experimental::not_fn](not_fn.html "cpp/experimental/not fn")  
[experimental::observer_ptr](observer_ptr.html "cpp/experimental/observer ptr")  
[experimental::make_array](make_array.html "cpp/experimental/make array")  
[experimental::to_array](to_array.html "cpp/experimental/to array")  
[experimental::ostream_joiner](ostream_joiner.html "cpp/experimental/ostream joiner")  
[experimental::gcd](gcd.html "cpp/experimental/gcd")  
[experimental::lcm](lcm.html "cpp/experimental/lcm")  
**experimental::source_location**  
[experimental::randint](randint.html "cpp/experimental/randint")  
[detection idiom](is_detected.html "cpp/experimental/is detected")  
[uniform container erasure](lib_extensions_2.html#Uniform_container_erasure "cpp/experimental/lib extensions 2")  
[logical operator type traits](lib_extensions_2.html#Logical_operator_type_traits "cpp/experimental/lib extensions 2")  
  


**`std::experimental::source_location`**

Creation  
---  
[source_location::source_location](source_location/source_location.html "cpp/experimental/source location/source location")  
[source_location::current](source_location/current.html "cpp/experimental/source location/current")  
Field Access  
[source_location::line](source_location/line.html "cpp/experimental/source location/line")  
[source_location::column](source_location/column.html "cpp/experimental/source location/column")  
[source_location::file_name](source_location/file_name.html "cpp/experimental/source location/file name")  
[source_location::function_name](source_location/function_name.html "cpp/experimental/source location/function name")  
  


![](https://upload.cppreference.com/mwiki/images/3/31/Imbox_notice.png) |  **Merged into ISO C++** The functionality described on this page was merged into the mainline ISO C++ standard as of 7/2019, see [`std::source_location`](../utility/source_location.html "cpp/utility/source location") (since C++20)  
---|---  
Defined in header `[<experimental/source_location>](https://en.cppreference.com/mwiki/index.php?title=cpp/header/experimental/source_location&action=edit&redlink=1 "cpp/header/experimental/source location \(page does not exist\)")` |  |   
---|---|---  
struct source_location; |  |  (library fundamentals TS v2)  
| |   
  
The `source_location` class represents certain information about the source code, such as file names, line numbers, and function names. Previously, functions that desire to obtain this information about the call site (for logging, testing, or debugging purposes) must use macros so that predefined macros like __LINE__ and __FILE__ are expanded in the context of the caller. The `source_location` class provides a better alternative. 

## Contents

  * [1 Member functions](source_location.html#Member_functions)
    * [1.1 Creation](source_location.html#Creation)
    * [1.2 Other special member functions](source_location.html#Other_special_member_functions)
    * [1.3 Field access](source_location.html#Field_access)
  * [2 Example](source_location.html#Example)

  
---  
  
### Member functions

#####  Creation   
  
---  
[ (constructor)](source_location/source_location.html "cpp/experimental/source location/source location") |  constructs a new `source_location` with implementation-defined values   
(public member function)   
[ current](source_location/current.html "cpp/experimental/source location/current")[static] |  constructs a new `source_location`   
(public static member function)   
  
#####  Other special member functions   
  
(destructor)(implicitly declared) |  destructs a `source_location`   
(public member function)   
operator=(implicitly declared) |  implicitly declared copy/move assignment operators   
(public member function)   
  
#####  Field access   
  
[ line](source_location/line.html "cpp/experimental/source location/line") |  return the line number represented by this object   
(public member function)   
[ column](source_location/column.html "cpp/experimental/source location/column") |  return the column number represented by this object   
(public member function)   
[ file_name](source_location/file_name.html "cpp/experimental/source location/file name") |  return the file name represented by this object   
(public member function)   
[ function_name](source_location/function_name.html "cpp/experimental/source location/function name") |  return the name of the function represented by this object, if any   
(public member function)   
  
### Example

Run this code
    
    
    #include <experimental/source_location>
    #include <iostream>
    #include <string_view>
     
    void log(const [std::string_view](../string/basic_string_view.html) message,
             const std::experimental::source_location location =
                   std::experimental::source_location::current())
    {
        [std::cout](../io/cout.html) << "info:"
                  << location.file_name() << ':'
                  << location.line() << ' '
                  << message << '\n';
    }
     
    int main()
    {
        log("Hello world!");
    }

Possible output: 
    
    
    info:main.cpp:15 Hello world!
