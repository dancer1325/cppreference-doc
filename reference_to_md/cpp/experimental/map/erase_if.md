[[edit template]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/erase_if&action=edit)

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
  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/navbar_content&action=edit)

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
  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/navbar_content&action=edit)

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
  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/lib_extensions_2/navbar_content&action=edit)

![](https://upload.cppreference.com/mwiki/images/3/31/Imbox_notice.png) |  **Merged into ISO C++** The functionality described on this page was merged into the mainline ISO C++ standardas of 11/2018, see [`std::erase_if`](../../container/map/erase_if.html "cpp/container/map/erase if") (since C++20)  
---|---  
Defined in header `[<experimental/map>](https://en.cppreference.com/mwiki/index.php?title=cpp/header/experimental/map&action=edit&redlink=1 "cpp/header/experimental/map \(page does not exist\)")` |  |   
---|---|---  
template< class Key, class T, class Compare, class Alloc, class Pred >  
void erase_if( [std::map](../../container/map.html)<Key, T, Compare, Alloc>& c, Pred pred ); |  |  (library fundamentals TS v2)  
| |   
  
Erases all elements that satisfy the predicate pred from the container. Equivalent to 
    
    
    for (auto i = c.begin(), last = c.end(); i != last;)
    {
        if (pred(*i))
            i = c.erase(i);
        else
            ++i;
    }

## Contents

  * [1 Parameters](erase_if.html#Parameters)
  * [2 Complexity](erase_if.html#Complexity)
  * [3 Example](erase_if.html#Example)
  * [4 See also](erase_if.html#See_also)

  
---  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/erase_if&action=edit&section=T-1 "Template:cpp/experimental/erase if")] Parameters

c  |  \-  |  container from which to erase   
---|---|---  
pred  |  \-  |  predicate that determines which elements should be erased   
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/erase_if&action=edit&section=T-2 "Template:cpp/experimental/erase if")] Complexity

Linear. 

### [[edit](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/erase_if&action=edit&section=T-3 "Template:cpp/experimental/erase if")] Example

Run this code
    
    
    #include <experimental/map>
    #include <iostream>
     
    template<typename Os, typename Container>
    inline Os& operator<<(Os& os, Container const& cont)
    {
        os << '{';
        for (const auto& item : cont)
            os << '{' << item.first << ", " << item.second << '}';
        return os << '}';
    }
     
    int main()
    {
        [std::map](../../container/map.html)<int, char> data{{1, 'a'},{2, 'b'},{3, 'c'},{4, 'd'},
                                 {5, 'e'},{4, 'f'},{5, 'g'},{5, 'g'}};
        [std::cout](../../io/cout.html) << "Original:\n" << data << '\n';
        std::experimental::erase_if(data, [](const auto& item)
        {
            return (item.first & 1) == 1;
        });
        [std::cout](../../io/cout.html) << "Erase items with odd keys:\n" << data << '\n';
    }

Output: 
    
    
    Original:
    {{1, a}{2, b}{3, c}{4, d}{5, e}}
    Erase items with odd keys:
    {{2, b}{4, d}}

### [[edit](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/erase_if&action=edit&section=T-4 "Template:cpp/experimental/erase if")] See also

[ removeremove_if](../../algorithm/remove.html "cpp/algorithm/remove") |  removes elements satisfying specific criteria   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/algorithm/dsc_remove&action=edit)  
---|---
