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
**experimental::ostream_joiner**  
[experimental::gcd](gcd.html "cpp/experimental/gcd")  
[experimental::lcm](lcm.html "cpp/experimental/lcm")  
[experimental::source_location](source_location.html "cpp/experimental/source location")  
[experimental::randint](randint.html "cpp/experimental/randint")  
[detection idiom](is_detected.html "cpp/experimental/is detected")  
[uniform container erasure](lib_extensions_2.html#Uniform_container_erasure "cpp/experimental/lib extensions 2")  
[logical operator type traits](lib_extensions_2.html#Logical_operator_type_traits "cpp/experimental/lib extensions 2")  
  


**`std::experimental::ostream_joiner`**

Member functions  
---  
[ostream_joiner::ostream_joiner](ostream_joiner/ostream_joiner.html "cpp/experimental/ostream joiner/ostream joiner")  
[ostream_joiner::operator=](ostream_joiner/operator=.html "cpp/experimental/ostream joiner/operator=")  
[ostream_joiner::operator*](ostream_joiner/operator*.html "cpp/experimental/ostream joiner/operator*")  
[ostream_joiner::operator++ostream_joiner::operator++(int)](ostream_joiner/operator_arith.html "cpp/experimental/ostream joiner/operator arith")  
Non-member functions  
[make_ostream_joiner](ostream_joiner/make_ostream_joiner.html "cpp/experimental/ostream joiner/make ostream joiner")  
  


Defined in header `[<experimental/iterator>](https://en.cppreference.com/mwiki/index.php?title=cpp/header/experimental/iterator&action=edit&redlink=1 "cpp/header/experimental/iterator \(page does not exist\)")` |  |   
---|---|---  
template<  
class DelimT,  
class CharT = char,  
class Traits = [std::char_traits](../string/char_traits.html)<CharT>  
>  
class ostream_joiner; |  |  (library fundamentals TS v2)  
| |   
  
`std::experimental::ostream_joiner` is a single-pass [LegacyOutputIterator](../named_req/OutputIterator.html "cpp/named req/OutputIterator") that writes successive objects into the [std::basic_ostream](../io/basic_ostream.html "cpp/io/basic ostream") object for which it was constructed, using `operator<<`, separated by a delimiter. The delimiter is written to the output stream between every two objects that are written. The write operation is performed when the iterator (whether dereferenced or not) is assigned to. Incrementing the `ostream_joiner` is a no-op. 

In a typical implementation, the only data members of `ostream_joiner` are a pointer to the associated [std::basic_ostream](../io/basic_ostream.html "cpp/io/basic ostream"), the delimiter, and a bool member that indicates whether the next write is for the first element in the sequence. 

Compared to [std::ostream_iterator](../iterator/ostream_iterator.html "cpp/iterator/ostream iterator"), `ostream_joiner` prints the delimiter sequence one fewer time, and is not templated on the type of the object to be printed. 

## Contents

  * [1 Member types](ostream_joiner.html#Member_types)
  * [2 Member functions](ostream_joiner.html#Member_functions)
  * [3 Non-member functions](ostream_joiner.html#Non-member_functions)
  * [4 Example](ostream_joiner.html#Example)
  * [5 See also](ostream_joiner.html#See_also)

  
---  
  
### Member types

Member type  |  Definition   
---|---  
`char_type` |  `CharT`  
`traits_type` |  `Traits`  
`ostream_type` |  [std::basic_ostream](../io/basic_ostream.html)<CharT, Traits>  
`value_type` |  void  
`difference_type` |  void  
`pointer` |  void  
`reference` |  void  
`iterator_category` |  [std::output_iterator_tag](../iterator/iterator_tags.html)  
  
### Member functions

[ (constructor)](ostream_joiner/ostream_joiner.html "cpp/experimental/ostream joiner/ostream joiner") |  constructs a new `ostream_joiner`   
(public member function)   
---|---  
(destructor)(implicitly declared) |  destructs an `ostream_joiner`   
(public member function)   
[ operator=](ostream_joiner/operator=.html "cpp/experimental/ostream joiner/operator=") |  writes an object to the associated output sequence   
(public member function)   
[ operator*](ostream_joiner/operator*.html "cpp/experimental/ostream joiner/operator*") |  no-op   
(public member function)   
[ operator++operator++(int)](ostream_joiner/operator_arith.html "cpp/experimental/ostream joiner/operator arith") |  no-op   
(public member function)   
  
### Non-member functions

[ make_ostream_joiner](ostream_joiner/make_ostream_joiner.html "cpp/experimental/ostream joiner/make ostream joiner") |  creates an `ostream_joiner` object, deducing the template's type arguments from the function arguments   
(function template)   
---|---  
  
### Example

Run this code
    
    
    #include <algorithm>
    #include <experimental/iterator>
    #include <iostream>
    #include <iterator>
     
    int main()
    {
        int i[] = {1, 2, 3, 4, 5};
        [std::copy](../algorithm/copy.html)([std::begin](../iterator/begin.html)(i),
                  [std::end](../iterator/end.html)(i),
                  [std::experimental::make_ostream_joiner](ostream_joiner/make_ostream_joiner.html)([std::cout](../io/cout.html), ", "));
    }

Output: 
    
    
    1, 2, 3, 4, 5

### See also

[ ostreambuf_iterator](../iterator/ostreambuf_iterator.html "cpp/iterator/ostreambuf iterator") |  output iterator that writes to [std::basic_streambuf](../io/basic_streambuf.html "cpp/io/basic streambuf")   
(class template)   
---|---  
[ ostream_iterator](../iterator/ostream_iterator.html "cpp/iterator/ostream iterator") |  output iterator that writes to [std::basic_ostream](../io/basic_ostream.html "cpp/io/basic ostream")   
(class template)   
[ istream_iterator](../iterator/istream_iterator.html "cpp/iterator/istream iterator") |  input iterator that reads from [std::basic_istream](../io/basic_istream.html "cpp/io/basic istream")   
(class template) 
