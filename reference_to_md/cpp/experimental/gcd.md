  
  


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
**experimental::gcd**  
[experimental::lcm](lcm.html "cpp/experimental/lcm")  
[experimental::source_location](source_location.html "cpp/experimental/source location")  
[experimental::randint](randint.html "cpp/experimental/randint")  
[detection idiom](is_detected.html "cpp/experimental/is detected")  
[uniform container erasure](lib_extensions_2.html#Uniform_container_erasure "cpp/experimental/lib extensions 2")  
[logical operator type traits](lib_extensions_2.html#Logical_operator_type_traits "cpp/experimental/lib extensions 2")  
  


![](https://upload.cppreference.com/mwiki/images/3/31/Imbox_notice.png) |  **Merged into ISO C++** The functionality described on this page was merged into the mainline ISO C++ standard as of 6/2016, see [`std::gcd`](../numeric/gcd.html "cpp/numeric/gcd") (since C++17)  
---|---  
Defined in header `[<experimental/numeric>](https://en.cppreference.com/mwiki/index.php?title=cpp/header/experimental/numeric&action=edit&redlink=1 "cpp/header/experimental/numeric \(page does not exist\)")` |  |   
---|---|---  
template< class M, class N>  
constexpr [std::common_type_t](../types/common_type.html)<M, N> gcd( M m, N n ); |  |  (library fundamentals TS v2)  
| |   
  
Computes the greatest common divisor of the integers m and n. 

## Contents

  * [1 Parameters](gcd.html#Parameters)
  * [2 Return value](gcd.html#Return_value)
  * [3 Remarks](gcd.html#Remarks)
  * [4 Exceptions](gcd.html#Exceptions)
  * [5 See also](gcd.html#See_also)

  
---  
  
### Parameters

m, n  |  \-  |  integer values   
---|---|---  
  
### Return value

If both m and n are zero, returns zero. Otherwise, returns the greatest common divisor of |m| and |n|. 

### Remarks

If either `M` or `N` is not an integer type, or if either is (possibly cv-qualified) bool, the program is ill-formed. 

If either |m| or |n| is not representable as a value of type [std::common_type_t](../types/common_type.html)<M, N>, the behavior is undefined. 

### Exceptions

Throws no exceptions. 

### See also

[ lcm](lcm.html "cpp/experimental/lcm") |  `constexpr` function template returning the least common multiple of two integers   
(function template)   
---|---
