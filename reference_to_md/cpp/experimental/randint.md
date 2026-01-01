[C++](../../cpp.html "cpp")

[Compiler support](../compiler_support.html "cpp/compiler support")  
---  
[Freestanding and hosted](../freestanding.html "cpp/freestanding")  
[Language](../language.html "cpp/language")  
[Standard library](../standard_library.html "cpp/standard library")  
[Standard library headers](../headers.html "cpp/header")  
[Named requirements](../iterator/concepts.html "cpp/named req")  
[Feature test macros](feature_test.html "cpp/feature test") (C++20)  
[Language support library](../utility.html#Language_support "cpp/utility")  
[Concepts library](../concepts.html "cpp/concepts") (C++20)  
[Diagnostics library](../error.html "cpp/error")  
[Memory management library](../memory.html "cpp/memory")  
[Metaprogramming library](../meta.html "cpp/meta") (C++11)  
[General utilities library](../utility.html "cpp/utility")  
[Containers library](../container.html "cpp/container")  
[Iterators library](../iterator.html "cpp/iterator")  
[Ranges library](../ranges.html "cpp/ranges") (C++20)  
[Algorithms library](../algorithm.html "cpp/algorithm")  
[Strings library](../string.html "cpp/string")  
[Text processing library](../text.html "cpp/text")  
[Numerics library](../numeric.html "cpp/numeric")  
[Date and time library](../chrono.html "cpp/chrono")  
[Input/output library](../io.html "cpp/io")  
[Filesystem library](../filesystem.html "cpp/filesystem") (C++17)  
[Concurrency support library](../atomic.html "cpp/thread") (C++11)  
[Execution control library](execution.html "cpp/execution") (C++26)  
[Technical specifications](../experimental.html "cpp/experimental")  
[Symbols index](../symbol_index.html "cpp/symbol index")  
[External libraries](../links/libs.html "cpp/links/libs")  
  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/navbar_content&action=edit)

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
  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/navbar_content&action=edit)

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
[experimental::source_location](source_location.html "cpp/experimental/source location")  
**experimental::randint**  
[detection idiom](is_detected.html "cpp/experimental/is detected")  
[uniform container erasure](lib_extensions_2.html#Uniform_container_erasure "cpp/experimental/lib extensions 2")  
[logical operator type traits](lib_extensions_2.html#Logical_operator_type_traits "cpp/experimental/lib extensions 2")  
  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/lib_extensions_2/navbar_content&action=edit)

Defined in header `[<experimental/random>](https://en.cppreference.com/mwiki/index.php?title=cpp/header/experimental/random&action=edit&redlink=1 "cpp/header/experimental/random \(page does not exist\)")` |  |   
---|---|---  
template< class IntType >  
IntType randint( IntType a, IntType b ); |  |  (library fundamentals TS v2)  
| |   
  
Generates a random integer in the closed interval `[a, b]`. 

## Contents

  * [1 Parameters](randint.html#Parameters)
  * [2 Return value](randint.html#Return_value)
  * [3 Remarks](randint.html#Remarks)
  * [4 Example](randint.html#Example)
  * [5 See also](randint.html#See_also)

  
---  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/randint&action=edit&section=1 "Edit section: Parameters")] Parameters

a, b  |  \-  |  integer values specifying the range   
---|---|---  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/randint&action=edit&section=2 "Edit section: Return value")] Return value

A random integer i in the closed interval `[a, b]`, produced using a thread-local instance of [std::uniform_int_distribution](../numeric/random/uniform_int_distribution.html)<IntType> invoked with the [per-thread random number engine](lib_extensions_2.html#per-thread_engine "cpp/experimental/lib extensions 2"). 

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/randint&action=edit&section=3 "Edit section: Remarks")] Remarks

If `IntType` is not one of short, int, long, long long, unsigned short, unsigned int, unsigned long, or unsigned long long, the program is ill-formed. 

The behavior is undefined if a > b. 

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/randint&action=edit&section=4 "Edit section: Example")] Example

Run this code
    
    
    #include <experimental/random>
    #include <iostream>
     
    int main()
    {
        int random_number = std::experimental::randint(100, 999);
        [std::cout](../io/cout.html) << "random 3-digit number: " << random_number << '\n';
    }

Possible output: 
    
    
    random 3-digit number: 273

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/randint&action=edit&section=5 "Edit section: See also")] See also

[ reseed](reseed.html "cpp/experimental/reseed") |  reseeds the per-thread random engine   
(function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/dsc_reseed&action=edit)  
---|---
