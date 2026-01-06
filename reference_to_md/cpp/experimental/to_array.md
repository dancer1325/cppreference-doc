  
  


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
**experimental::to_array**  
[experimental::ostream_joiner](ostream_joiner.html "cpp/experimental/ostream joiner")  
[experimental::gcd](gcd.html "cpp/experimental/gcd")  
[experimental::lcm](lcm.html "cpp/experimental/lcm")  
[experimental::source_location](source_location.html "cpp/experimental/source location")  
[experimental::randint](randint.html "cpp/experimental/randint")  
[detection idiom](is_detected.html "cpp/experimental/is detected")  
[uniform container erasure](lib_extensions_2.html#Uniform_container_erasure "cpp/experimental/lib extensions 2")  
[logical operator type traits](lib_extensions_2.html#Logical_operator_type_traits "cpp/experimental/lib extensions 2")  
  


![](https://upload.cppreference.com/mwiki/images/3/31/Imbox_notice.png) |  **Merged into ISO C++** The functionality described on this page was merged into the mainline ISO C++ standard as of 7/2019, see [`std::to_array`](../container/array/to_array.html "cpp/container/array/to array") (since C++20)  
---|---  
Defined in header `[<experimental/array>](https://en.cppreference.com/mwiki/index.php?title=cpp/header/experimental/array&action=edit&redlink=1 "cpp/header/experimental/array \(page does not exist\)")` |  |   
---|---|---  
template< class T, [std::size_t](../types/size_t.html) N >  
constexpr [std::array](../container/array.html)<[std::remove_cv_t](../types/remove_cv.html)<T>, N> to_array(T (&a)[N]); |  |  (library fundamentals TS v2)  
| |   
  
Creates a [std::array](../container/array.html "cpp/container/array") from the built-in array a. The elements of the [std::array](../container/array.html "cpp/container/array") are copy-initialized from the corresponding element of a. 

## Contents

  * [1 Parameters](to_array.html#Parameters)
  * [2 Return value](to_array.html#Return_value)
  * [3 Possible implementation](to_array.html#Possible_implementation)
  * [4 Example](to_array.html#Example)
  * [5 See also](to_array.html#See_also)

  
---  
  
### Parameters

a  |  \-  |  the built-in array to be used to initialize the [std::array](../container/array.html "cpp/container/array")  
---|---|---  
  
### Return value

An [std::array](../container/array.html "cpp/container/array") object whose elements are copy-initialized from the corresponding element of a. 

### Possible implementation
    
    
    namespace detail
    {
        template<class T, [std::size_t](../types/size_t.html) N, [std::size_t](../types/size_t.html)... I>
        constexpr [std::array](../container/array.html)<[std::remove_cv_t](../types/remove_cv.html)<T>, N>
            to_array_impl(T (&a)[N], [std::index_sequence](../utility/integer_sequence.html)<I...>)
        {
            return { {a[I]...} };
        }
    }
     
    template<class T, [std::size_t](../types/size_t.html) N>
    constexpr [std::array](../container/array.html)<[std::remove_cv_t](../types/remove_cv.html)<T>, N> to_array(T (&a)[N])
    {
        return detail::to_array_impl(a, [std::make_index_sequence](../utility/integer_sequence.html)<N>{});
    }  
  
---  
  
### Example

Run this code
    
    
    #include <cassert>
    #include <cstdlib>
    #include <experimental/array>
    #include <unistd.h>
     
    // mkstemp(3) that works
    template<[std::size_t](../types/size_t.html) N>
    int tempfd(char const (&tmpl)[N])
    {
        auto s = std::experimental::to_array(tmpl);
        int fd = mkstemp(s.data());
        if (fd != -1)
            unlink(s.data());
     
        return fd;
    }
     
    int main()
    {
        int fd = tempfd("/tmp/test.XXXXXX");
        int rt = close(fd);
        [assert](../error/assert.html)(rt == 0);
    }

### See also

[ make_array](make_array.html "cpp/experimental/make array")(library fundamentals TS v2) |  creates a [std::array](../container/array.html "cpp/container/array") object whose size and optionally element type are deduced from the arguments   
(function template)   
---|---
