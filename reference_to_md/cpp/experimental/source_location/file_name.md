[C++](../../../cpp.html "cpp")

[Compiler support](../../compiler_support.html "cpp/compiler support")  
---  
[Freestanding and hosted](../../freestanding.html "cpp/freestanding")  
[Language](../../language.html "cpp/language")  
[Standard library](../../standard_library.html "cpp/standard library")  
[Standard library headers](../../headers.html "cpp/header")  
[Named requirements](../../iterator/concepts.html "cpp/named req")  
[Feature test macros](../feature_test.html "cpp/feature test") (C++20)  
[Language support library](../../utility.html#Language_support "cpp/utility")  
[Concepts library](../../concepts.html "cpp/concepts") (C++20)  
[Diagnostics library](../../error.html "cpp/error")  
[Memory management library](../../memory.html "cpp/memory")  
[Metaprogramming library](../../meta.html "cpp/meta") (C++11)  
[General utilities library](../../utility.html "cpp/utility")  
[Containers library](../../container.html "cpp/container")  
[Iterators library](../../iterator.html "cpp/iterator")  
[Ranges library](../../ranges.html "cpp/ranges") (C++20)  
[Algorithms library](../../algorithm.html "cpp/algorithm")  
[Strings library](../../string.html "cpp/string")  
[Text processing library](../../text.html "cpp/text")  
[Numerics library](../../numeric.html "cpp/numeric")  
[Date and time library](../../chrono.html "cpp/chrono")  
[Input/output library](../../io.html "cpp/io")  
[Filesystem library](../../filesystem.html "cpp/filesystem") (C++17)  
[Concurrency support library](../../atomic.html "cpp/thread") (C++11)  
[Execution control library](../execution.html "cpp/execution") (C++26)  
[Technical specifications](../../experimental.html "cpp/experimental")  
[Symbols index](../../symbol_index.html "cpp/symbol index")  
[External libraries](../../links/libs.html "cpp/links/libs")  
  


[Experimental](../../experimental.html "cpp/experimental")

[Technical Specification](../../experimental.html#Technical_Specification "cpp/experimental")  
---  
[Filesystem library](../fs.html "cpp/experimental/fs") (filesystem TS)  
[Library fundamentals](../memory.html "cpp/experimental/lib extensions") (library fundamentals TS)  
[Library fundamentals 2](../lib_extensions_2.html "cpp/experimental/lib extensions 2") (library fundamentals TS v2)  
[Library fundamentals 3](../lib_extensions_3.html "cpp/experimental/lib extensions 3") (library fundamentals TS v3)  
[Extensions for parallelism](../parallelism.html "cpp/experimental/parallelism") (parallelism TS)  
[Extensions for parallelism 2](../parallelism_2.html "cpp/experimental/parallelism 2") (parallelism TS v2)  
[Extensions for concurrency](../concurrency.html "cpp/experimental/concurrency") (concurrency TS)  
[Extensions for concurrency 2](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/concurrency_2&action=edit&redlink=1 "cpp/experimental/concurrency 2 \(page does not exist\)") (concurrency TS v2)  
[Concepts](../constraints.html "cpp/experimental/constraints") (concepts TS)  
[Ranges](../ranges.html "cpp/experimental/ranges") (ranges TS)  
[Reflection](../reflect.html "cpp/experimental/reflect") (reflection TS)  
[Mathematical special functions](../special_math.html "cpp/experimental/special functions") (special functions TR)  
[Experimental Non-TS](../../experimental.html#Experimental_Non-TS "cpp/experimental")  
[Pattern Matching](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/pm&action=edit&redlink=1 "cpp/experimental/pm \(page does not exist\)")  
[Linear Algebra](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/la&action=edit&redlink=1 "cpp/experimental/la \(page does not exist\)")  
[std::execution](../execution.html "cpp/experimental/execution")  
[Contracts](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/contracts&action=edit&redlink=1 "cpp/experimental/contracts \(page does not exist\)")  
[2D Graphics](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/2dgraphics&action=edit&redlink=1 "cpp/experimental/2dgraphics \(page does not exist\)")  
  


[Library fundamentals v2](../lib_extensions_2.html "cpp/experimental/lib extensions 2")

[experimental::propagate_const](../propagate_const.html "cpp/experimental/propagate const")  
---  
[experimental::not_fn](../not_fn.html "cpp/experimental/not fn")  
[experimental::observer_ptr](../observer_ptr.html "cpp/experimental/observer ptr")  
[experimental::make_array](../make_array.html "cpp/experimental/make array")  
[experimental::to_array](../to_array.html "cpp/experimental/to array")  
[experimental::ostream_joiner](../ostream_joiner.html "cpp/experimental/ostream joiner")  
[experimental::gcd](../gcd.html "cpp/experimental/gcd")  
[experimental::lcm](../lcm.html "cpp/experimental/lcm")  
[experimental::source_location](../source_location.html "cpp/experimental/source location")  
[experimental::randint](../randint.html "cpp/experimental/randint")  
[detection idiom](../is_detected.html "cpp/experimental/is detected")  
[uniform container erasure](../lib_extensions_2.html#Uniform_container_erasure "cpp/experimental/lib extensions 2")  
[logical operator type traits](../lib_extensions_2.html#Logical_operator_type_traits "cpp/experimental/lib extensions 2")  
  


[`std::experimental::source_location`](../source_location.html "cpp/experimental/source location")

Creation  
---  
[source_location::source_location](source_location.html "cpp/experimental/source location/source location")  
[source_location::current](current.html "cpp/experimental/source location/current")  
Field Access  
[source_location::line](line.html "cpp/experimental/source location/line")  
[source_location::column](column.html "cpp/experimental/source location/column")  
**source_location::file_name**  
[source_location::function_name](function_name.html "cpp/experimental/source location/function name")  
  


constexpr const char* file_name() const noexcept; |  |  (library fundamentals TS v2)  
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
    
    
    #include <experimental/source_location>
    #include <iostream>
     
    inline void print_this_file_name(
        const [std::experimental::source_location](../source_location.html)& location
            = std::experimental::source_location::current())
    {
        // Name of file that contains the call-site of this function.
        [std::cout](../../io/cout.html) << "File: " << location.file_name() << '\n';
    }
     
    int main()
    {
        print_this_file_name();
    }

Possible output: 
    
    
    File: main.cpp

### See also

[ line](line.html "cpp/experimental/source location/line") |  return the line number represented by this object   
(public member function)   
---|---  
[ column](column.html "cpp/experimental/source location/column") |  return the column number represented by this object   
(public member function)   
[ function_name](function_name.html "cpp/experimental/source location/function name") |  return the name of the function represented by this object, if any   
(public member function)   
[C++ documentation](../../preprocessor/line.html "cpp/preprocessor/line") for Filename and line information
