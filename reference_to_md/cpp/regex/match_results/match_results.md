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

[Text processing library](../../text.html "cpp/text")

[Localization library](../../locale.html "cpp/locale")  
---  
[Regular expressions library](../../regex.html "cpp/regex") (C++11)  
[Formatting library](../../utility/format.html "cpp/utility/format") (C++20)  
[Null-terminated sequence utilities](../../text.html#Null-terminated_sequence_utilities "cpp/text")  
[Byte strings](../../string/byte.html "cpp/string/byte")  
[Multibyte strings](../../string/multibyte.html "cpp/string/multibyte")  
[Wide strings](../../string/wide.html "cpp/string/wide")  
[Primitive numeric conversions](../../text.html#Primitive_numeric_conversions "cpp/text")  
| [to_chars](../../utility/to_chars.html "cpp/utility/to chars")(C++17)  
---  
[to_chars_result](../../utility/to_chars_result.html "cpp/utility/to chars result")(C++17)  
[from_chars](../../utility/from_chars.html "cpp/utility/from chars")(C++17)  
[from_chars_result](../../utility/from_chars_result.html "cpp/utility/from chars result")(C++17)  
[chars_format](../../utility/chars_format.html "cpp/utility/chars format")(C++17)  
  
[Text encoding identifications](../../text.html#Text_encoding_identifications "cpp/text")  
| [text_encoding](../../locale/text_encoding.html "cpp/text/text encoding")(C++26)  
---  
  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/text/navbar_content&action=edit)

[Regular expressions library](../../regex.html "cpp/regex")

Classes  
---  
[basic_regex](../basic_regex.html "cpp/regex/basic regex")(C++11)  
[sub_match](../sub_match.html "cpp/regex/sub match")(C++11)  
[match_results](../match_results.html "cpp/regex/match results")(C++11)  
Algorithms  
[regex_match](../regex_match.html "cpp/regex/regex match")(C++11)  
[regex_search](../regex_search.html "cpp/regex/regex search")(C++11)  
[regex_replace](../regex_replace.html "cpp/regex/regex replace")(C++11)  
Iterators  
[regex_iterator](../regex_iterator.html "cpp/regex/regex iterator")(C++11)  
[regex_token_iterator](../regex_token_iterator.html "cpp/regex/regex token iterator")(C++11)  
Exceptions  
[regex_error](../regex_error.html "cpp/regex/regex error")(C++11)  
Traits  
[regex_traits](../regex_traits.html "cpp/regex/regex traits")(C++11)  
Constants  
[syntax_option_type](../syntax_option_type.html "cpp/regex/syntax option type")(C++11)  
[match_flag_type](../match_flag_type.html "cpp/regex/match flag type")(C++11)  
[error_type](../error_type.html "cpp/regex/error type")(C++11)  
Regex Grammar  
[Modified ECMAScript-262](../ecmascript.html "cpp/regex/ecmascript")(C++11)  
  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/regex/navbar_content&action=edit)

[`std::match_results`](../match_results.html "cpp/regex/match results")

Member functions  
---  
**match_results::match_results**  
[match_results::~match_results](~match_results.html "cpp/regex/match results/~match results")  
[match_results::operator=](operator=.html "cpp/regex/match results/operator=")  
[match_results::get_allocator](get_allocator.html "cpp/regex/match results/get allocator")  
State  
[match_results::ready](ready.html "cpp/regex/match results/ready")  
Element access  
[match_results::size](size.html "cpp/regex/match results/size")  
[match_results::max_size](max_size.html "cpp/regex/match results/max size")  
[match_results::empty](empty.html "cpp/regex/match results/empty")  
[match_results::length](length.html "cpp/regex/match results/length")  
[match_results::position](position.html "cpp/regex/match results/position")  
[match_results::str](str.html "cpp/regex/match results/str")  
[match_results::operator[]](operator_at.html "cpp/regex/match results/operator at")  
[match_results::prefix](prefix.html "cpp/regex/match results/prefix")  
[match_results::suffix](suffix.html "cpp/regex/match results/suffix")  
Iterators  
[match_results::beginmatch_results::cbegin](begin.html "cpp/regex/match results/begin")  
[match_results::endmatch_results::cend](end.html "cpp/regex/match results/end")  
Format  
[match_results::format](format.html "cpp/regex/match results/format")  
Modifiers  
[match_results::swap](swap.html "cpp/regex/match results/swap")  
Non-member functions  
[operator==operator!=](operator_cmp.html "cpp/regex/match results/operator cmp")(until C++20)  
[swap(std::match_results)](swap2.html "cpp/regex/match results/swap2")  
  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/regex/match_results/navbar_content&action=edit)

match_results() : match_results(Allocator()) {} |  (1)  |   
---|---|---  
explicit match_results( const Allocator& a ); |  (2)  |   
match_results( const match_results& rhs ); |  (3)  |   
match_results( const match_results& rhs, const Allocator& a ); |  (4)  |   
match_results( match_results&& rhs ) noexcept; |  (5)  |   
match_results( match_results&& rhs, const Allocator& a ); |  (6)  |   
| |   
  
1,2) Constructs a match result with no established result state.

1) The default constructor.

2) Constructs the match result using a copy of a as the allocator.

When the construction finishes, [`ready()`](ready.html "cpp/regex/match results/ready") returns false and [`size()`](size.html "cpp/regex/match results/size") returns ​0​.

3-6) Constructs a match result from rhs.

3) The copy constructor.

4) Constructs the match result using a copy of a as the allocator.

5) The move constructor. When the construction finishes, rhs is in a valid but unspecified state.

6) Constructs the match result using a copy of a as the allocator. When the construction finishes, rhs is in a valid but unspecified state.

Given the value of rhs before the construction as m and any integer in `[`​0​`, `m.size()`)` as n, when the construction finishes, the following member functions should return the specified values:  Member function  | Value   
---|---  
[`ready()`](ready.html "cpp/regex/match results/ready") | m.ready()  
[`size()`](size.html "cpp/regex/match results/size") | m.size()  
[`str(n)`](str.html "cpp/regex/match results/str") | m.str(n)  
[`prefix()`](prefix.html "cpp/regex/match results/prefix") | m.prefix()  
[`suffix()`](suffix.html "cpp/regex/match results/suffix") | m.suffix()  
[`operator[](n)`](operator_at.html "cpp/regex/match results/operator at") | m[n]  
[`length(n)`](length.html "cpp/regex/match results/length") | m.length(n)  
[`position(n)`](position.html "cpp/regex/match results/position") |  m.position(n)  
  
## Contents

  * [1 Parameters](match_results.html#Parameters)
  * [2 Exceptions](match_results.html#Exceptions)
  * [3 Example](match_results.html#Example)
  * [4 Defect reports](match_results.html#Defect_reports)

  
---  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/regex/match_results/match_results&action=edit&section=1 "Edit section: Parameters")] Parameters

a  |  \-  |  allocator to use for all memory allocations of this container   
---|---|---  
rhs  |  \-  |  another `match_results` to use as source to initialize the `match_results` with   
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/regex/match_results/match_results&action=edit&section=2 "Edit section: Exceptions")] Exceptions

1-4) May throw implementation-defined exceptions.

6) Throws nothing if a == rhs.get_allocator() is true.

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/regex/match_results/match_results&action=edit&section=3 "Edit section: Example")] Example

| This section is incomplete  
Reason: no example   
---|---  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/regex/match_results/match_results&action=edit&section=4 "Edit section: Defect reports")] Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 2191](https://cplusplus.github.io/LWG/issue2191) | C++11  | n could be negative in the postconditions of overloads (3-6) | can only be non-negative   
[LWG 2195](https://cplusplus.github.io/LWG/issue2195) | C++11  | the constructors required by [AllocatorAwareContainer](../../named_req/AllocatorAwareContainer.html "cpp/named req/AllocatorAwareContainer") were missing  | added   
[P0935R0](https://wg21.link/P0935R0) | C++11  | default constructor was explicit  | made implicit 
