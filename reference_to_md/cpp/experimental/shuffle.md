  
  


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
[experimental::source_location](source_location.html "cpp/experimental/source location")  
[experimental::randint](randint.html "cpp/experimental/randint")  
[detection idiom](is_detected.html "cpp/experimental/is detected")  
[uniform container erasure](lib_extensions_2.html#Uniform_container_erasure "cpp/experimental/lib extensions 2")  
[logical operator type traits](lib_extensions_2.html#Logical_operator_type_traits "cpp/experimental/lib extensions 2")  
  


Defined in header `[<experimental/algorithm>](https://en.cppreference.com/mwiki/index.php?title=cpp/header/experimental/algorithm&action=edit&redlink=1 "cpp/header/experimental/algorithm \(page does not exist\)")` |  |   
---|---|---  
template< class RandomIt >  
void shuffle( RandomIt first, RandomIt last ); |  |  (library fundamentals TS v2)  
| |   
  
Reorders the elements in the given range `[`first`, `last`)` such that each possible permutation of those elements has equal probability of appearance, using the [per-thread random number engine](lib_extensions_2.html#per-thread_engine "cpp/experimental/lib extensions 2") as the random number generator. 

## Contents

  * [1 Parameters](shuffle.html#Parameters)
  * [2 Return value](shuffle.html#Return_value)
  * [3 Complexity](shuffle.html#Complexity)
  * [4 Example](shuffle.html#Example)
  * [5 See also](shuffle.html#See_also)

  
---  
  
### Parameters

first, last  |  \-  |  the range of elements to shuffle randomly   
---|---|---  
-`RandomIt` must meet the requirements of [ValueSwappable](../named_req/ValueSwappable.html "cpp/named req/ValueSwappable") and [LegacyRandomAccessIterator](../named_req/RandomAccessIterator.html "cpp/named req/RandomAccessIterator").   
  
### Return value

(none) 

### Complexity

Linear in the distance between first and last. 

### Example

Run this code
    
    
    #include <experimental/algorithm>
    #include <iostream>
    #include <string>
     
    int main()
    {
        [std::string](../string/basic_string.html) sample{"ABCDEF"};
     
        for (int i = 0; i != 4; ++i)
        {
            std::experimental::shuffle(sample.begin(), sample.end());
            [std::cout](../io/cout.html) << sample << '\n';
        }
    }

Possible output: 
    
    
    DACBFE
    CDFBAE
    BDCAFE
    BAFCED

### See also

[ random_shuffleshuffle](../algorithm/random_shuffle.html "cpp/algorithm/random shuffle")(until C++17)(C++11) |  randomly re-orders elements in a range   
(function template)   
---|---
