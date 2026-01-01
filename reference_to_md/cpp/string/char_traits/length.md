[C++](../../../cpp.html "cpp")

[Compiler support](../../compiler_support.html "cpp/compiler support")  
---  
[Freestanding and hosted](../../freestanding.html "cpp/freestanding")  
[Language](../../language.html "cpp/language")  
[Standard library](../../standard_library.html "cpp/standard library")  
[Standard library headers](../../headers.html "cpp/header")  
[Named requirements](../../iterator/concepts.html "cpp/named req")  
[Feature test macros](../../experimental/feature_test.html "cpp/feature test") (C++20)  
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
[Execution control library](../../experimental/execution.html "cpp/execution") (C++26)  
[Technical specifications](../../experimental.html "cpp/experimental")  
[Symbols index](../../symbol_index.html "cpp/symbol index")  
[External libraries](../../links/libs.html "cpp/links/libs")  
  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/navbar_content&action=edit)

[Strings library](../../string.html "cpp/string")

Classes  
---  
[basic_string](../basic_string.html "cpp/string/basic string")  
[basic_string_view](../basic_string_view.html "cpp/string/basic string view")(C++17)  
[char_traits](../char_traits.html "cpp/string/char traits")  
  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/string/navbar_content&action=edit)

[`std::char_traits`](../char_traits.html "cpp/string/char traits")

Member functions  
---  
[char_traits::assign](assign.html "cpp/string/char traits/assign")  
[char_traits::eqchar_traits::lt](cmp.html "cpp/string/char traits/cmp")  
[char_traits::move](move.html "cpp/string/char traits/move")  
[char_traits::copy](copy.html "cpp/string/char traits/copy")  
[char_traits::compare](compare.html "cpp/string/char traits/compare")  
**char_traits::length**  
[char_traits::find](find.html "cpp/string/char traits/find")  
[char_traits::to_char_type](to_char_type.html "cpp/string/char traits/to char type")  
[char_traits::to_int_type](to_int_type.html "cpp/string/char traits/to int type")  
[char_traits::eq_int_type](eq_int_type.html "cpp/string/char traits/eq int type")  
[char_traits::eof](eof.html "cpp/string/char traits/eof")  
[char_traits::not_eof](not_eof.html "cpp/string/char traits/not eof")  
  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/string/char_traits/navbar_content&action=edit)

static [std::size_t](../../types/size_t.html) length( const char_type* s ); |  |  (constexpr since C++17)  
---|---|---  
| |   
  
Returns the length of the character sequence pointed to by s, that is, the position of the terminating null character (char_type()). 

See [CharTraits](../../named_req/CharTraits.html "cpp/named req/CharTraits") for the general requirements on character traits for `X::length`. 

## Contents

  * [1 Parameters](length.html#Parameters)
  * [2 Return value](length.html#Return_value)
  * [3 Complexity](length.html#Complexity)
  * [4 Example](length.html#Example)

  
---  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/string/char_traits/length&action=edit&section=1 "Edit section: Parameters")] Parameters

s  |  \-  |  pointer to a character sequence to return length of   
---|---|---  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/string/char_traits/length&action=edit&section=2 "Edit section: Return value")] Return value

The length of character sequence pointed to by s. 

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/string/char_traits/length&action=edit&section=3 "Edit section: Complexity")] Complexity

Linear. 

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/string/char_traits/length&action=edit&section=4 "Edit section: Example")] Example

Run this code
    
    
    #include <iomanip>
    #include <iostream>
    #include <string>
     
    void print(const char* str)
    {
        [std::cout](../../io/cout.html) << [std::quoted](../../io/manip/quoted.html)(str) << " has length = "
                  << [std::char_traits](../char_traits.html)<char>::length(str) << '\n';
    }
     
    int main()
    {
        print("foo");
     
        [std::string](../basic_string.html) s{"booo"};
        print(s.c_str());
    }

Output: 
    
    
    "foo" has length = 3
    "booo" has length = 4
