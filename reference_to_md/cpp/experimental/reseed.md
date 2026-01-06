  
  


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
  


Defined in header `[<experimental/random>](https://en.cppreference.com/mwiki/index.php?title=cpp/header/experimental/random&action=edit&redlink=1 "cpp/header/experimental/random \(page does not exist\)")` |  |   
---|---|---  
void reseed(); |  (1)  |  (library fundamentals TS v2)  
void reseed( std::default_random_engine::result_type value ); |  (2)  |  (library fundamentals TS v2)  
| |   
  
Reseeds the [per-thread random number engine](lib_extensions_2.html#per-thread_engine "cpp/experimental/lib extensions 2") and any [std::uniform_int_distribution](../numeric/random/uniform_int_distribution.html "cpp/numeric/random/uniform int distribution") instances used by [`randint`](randint.html "cpp/experimental/randint"). 

1) Sets the per-thread engine to an unpredictable state.

2) Seeds the per-thread engine `g` as if by g.seed(value). 

## Contents

  * [1 Parameters](reseed.html#Parameters)
  * [2 Remarks](reseed.html#Remarks)
  * [3 Example](reseed.html#Example)
  * [4 See also](reseed.html#See_also)

  
---  
  
### Parameters

value  |  \-  |  value of the new seed   
---|---|---  
  
### Remarks

Subsequent calls to `randint` do not depend on values produced by the per-thread engine prior to calling `reseed`. 

### Example

Run this code
    
    
    #include <experimental/random>
    #include <iostream>
     
    int main()
    {
        std::experimental::reseed();
     
        [std::cout](../io/cout.html) << "Random 2-digit decimal numbers: ";
     
        for (auto i = 0; i != 3; ++i)
            [std::cout](../io/cout.html) << [std::experimental::randint](randint.html)(10, 99) << ' ';
        [std::cout](../io/cout.html) << '\n';
    }

Possible output: 
    
    
    Random 2-digit decimal numbers: 41 60 56

### See also

[ randint](randint.html "cpp/experimental/randint") |  generates a random integer in the specified range   
(function template)   
---|---
