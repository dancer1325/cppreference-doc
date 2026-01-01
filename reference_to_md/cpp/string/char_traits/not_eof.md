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
[char_traits::length](length.html "cpp/string/char traits/length")  
[char_traits::find](find.html "cpp/string/char traits/find")  
[char_traits::to_char_type](to_char_type.html "cpp/string/char traits/to char type")  
[char_traits::to_int_type](to_int_type.html "cpp/string/char traits/to int type")  
[char_traits::eq_int_type](eq_int_type.html "cpp/string/char traits/eq int type")  
[char_traits::eof](eof.html "cpp/string/char traits/eof")  
**char_traits::not_eof**  
  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/string/char_traits/navbar_content&action=edit)

static int_type not_eof( int_type e ); |  |  (constexpr since C++11)  
(noexcept since C++11)  
---|---|---  
| |   
  
Given e, produces a suitable value that is not equivalent to `_eof_`. 

This function is typically used when a value other than `_eof_` needs to be returned, such as in implementations of [std::basic_streambuf::overflow()](../../io/basic_streambuf/overflow.html "cpp/io/basic streambuf/overflow"). 

See [CharTraits](../../named_req/CharTraits.html "cpp/named req/CharTraits") for the general requirements on character traits for `X::not_eof`. 

## Contents

  * [1 Parameters](not_eof.html#Parameters)
  * [2 Return value](not_eof.html#Return_value)
  * [3 Complexity](not_eof.html#Complexity)
  * [4 See also](not_eof.html#See_also)

  
---  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/string/char_traits/not_eof&action=edit&section=1 "Edit section: Parameters")] Parameters

e  |  \-  |  value to analyze   
---|---|---  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/string/char_traits/not_eof&action=edit&section=2 "Edit section: Return value")] Return value

e if e and `_eof_` value are not equivalent, or some other non-eof value otherwise. 

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/string/char_traits/not_eof&action=edit&section=3 "Edit section: Complexity")] Complexity

Constant. 

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/string/char_traits/not_eof&action=edit&section=4 "Edit section: See also")] See also

[ eof](eof.html "cpp/string/char traits/eof")[static] |  returns an _eof_ value   
(public static member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/string/char_traits/dsc_eof&action=edit)  
---|---
