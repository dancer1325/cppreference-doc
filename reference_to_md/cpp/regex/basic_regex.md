[C++](../../cpp.html "cpp")

[Compiler support](../compiler_support.html "cpp/compiler support")  
---  
[Freestanding and hosted](../freestanding.html "cpp/freestanding")  
[Language](../language.html "cpp/language")  
[Standard library](../standard_library.html "cpp/standard library")  
[Standard library headers](../headers.html "cpp/header")  
[Named requirements](../iterator/concepts.html "cpp/named req")  
[Feature test macros](../experimental/feature_test.html "cpp/feature test") (C++20)  
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
[Execution control library](../experimental/execution.html "cpp/execution") (C++26)  
[Technical specifications](../experimental.html "cpp/experimental")  
[Symbols index](../symbol_index.html "cpp/symbol index")  
[External libraries](../links/libs.html "cpp/links/libs")  
  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/navbar_content&action=edit)

[Text processing library](../text.html "cpp/text")

[Localization library](../locale.html "cpp/locale")  
---  
[Regular expressions library](../regex.html "cpp/regex") (C++11)  
[Formatting library](../utility/format.html "cpp/utility/format") (C++20)  
[Null-terminated sequence utilities](../text.html#Null-terminated_sequence_utilities "cpp/text")  
[Byte strings](../string/byte.html "cpp/string/byte")  
[Multibyte strings](../string/multibyte.html "cpp/string/multibyte")  
[Wide strings](../string/wide.html "cpp/string/wide")  
[Primitive numeric conversions](../text.html#Primitive_numeric_conversions "cpp/text")  
| [to_chars](../utility/to_chars.html "cpp/utility/to chars")(C++17)  
---  
[to_chars_result](../utility/to_chars_result.html "cpp/utility/to chars result")(C++17)  
[from_chars](../utility/from_chars.html "cpp/utility/from chars")(C++17)  
[from_chars_result](../utility/from_chars_result.html "cpp/utility/from chars result")(C++17)  
[chars_format](../utility/chars_format.html "cpp/utility/chars format")(C++17)  
  
[Text encoding identifications](../text.html#Text_encoding_identifications "cpp/text")  
| [text_encoding](../locale/text_encoding.html "cpp/text/text encoding")(C++26)  
---  
  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/text/navbar_content&action=edit)

[Regular expressions library](../regex.html "cpp/regex")

Classes  
---  
**basic_regex**(C++11)  
[sub_match](sub_match.html "cpp/regex/sub match")(C++11)  
[match_results](match_results.html "cpp/regex/match results")(C++11)  
Algorithms  
[regex_match](regex_match.html "cpp/regex/regex match")(C++11)  
[regex_search](regex_search.html "cpp/regex/regex search")(C++11)  
[regex_replace](regex_replace.html "cpp/regex/regex replace")(C++11)  
Iterators  
[regex_iterator](regex_iterator.html "cpp/regex/regex iterator")(C++11)  
[regex_token_iterator](regex_token_iterator.html "cpp/regex/regex token iterator")(C++11)  
Exceptions  
[regex_error](regex_error.html "cpp/regex/regex error")(C++11)  
Traits  
[regex_traits](regex_traits.html "cpp/regex/regex traits")(C++11)  
Constants  
[syntax_option_type](syntax_option_type.html "cpp/regex/syntax option type")(C++11)  
[match_flag_type](match_flag_type.html "cpp/regex/match flag type")(C++11)  
[error_type](error_type.html "cpp/regex/error type")(C++11)  
Regex Grammar  
[Modified ECMAScript-262](ecmascript.html "cpp/regex/ecmascript")(C++11)  
  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/regex/navbar_content&action=edit)

**`std::basic_regex`**

Member Functions  
---  
[basic_regex::basic_regex](basic_regex/basic_regex.html "cpp/regex/basic regex/basic regex")  
[basic_regex::~basic_regex](basic_regex/~basic_regex.html "cpp/regex/basic regex/~basic regex")  
[basic_regex::operator=](basic_regex/operator=.html "cpp/regex/basic regex/operator=")  
[basic_regex::assign](basic_regex/assign.html "cpp/regex/basic regex/assign")  
Observers  
[basic_regex::mark_count](basic_regex/mark_count.html "cpp/regex/basic regex/mark count")  
[basic_regex::flags](basic_regex/flags.html "cpp/regex/basic regex/flags")  
Locale  
[basic_regex::getloc](basic_regex/getloc.html "cpp/regex/basic regex/getloc")  
[basic_regex::imbue](basic_regex/imbue.html "cpp/regex/basic regex/imbue")  
Modifiers  
[basic_regex::swap](basic_regex/swap.html "cpp/regex/basic regex/swap")  
[Constants](basic_regex/constants.html "cpp/regex/basic regex/constants")  
Non-member Functions  
[swap(std::basic_regex)](basic_regex/swap2.html "cpp/regex/basic regex/swap2")  
[Deduction guides](basic_regex/deduction_guides.html "cpp/regex/basic regex/deduction guides")(C++17)  
  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/regex/basic_regex/navbar_content&action=edit)

Defined in header `[<regex>](../header/regex.html "cpp/header/regex")` |  |   
---|---|---  
template<  
class CharT,  
class Traits = [std::regex_traits](regex_traits.html)<CharT>  
> class basic_regex; |  |  (since C++11)  
| |   
  
The class template `basic_regex` provides a general framework for holding regular expressions. 

Several typedefs for common character types are provided: 

Defined in header `[<regex>](../header/regex.html "cpp/header/regex")`  
---  
Type  |  Definition   
`std::regex` |  std::basic_regex<char>  
`std::wregex` |  std::basic_regex<wchar_t>  
  
## Contents

  * [1 Member types](basic_regex.html#Member_types)
  * [2 Member functions](basic_regex.html#Member_functions)
    * [2.1 Observers](basic_regex.html#Observers)
    * [2.2 Locale](basic_regex.html#Locale)
    * [2.3 Modifiers](basic_regex.html#Modifiers)
  * [3 Constants](basic_regex.html#Constants)
  * [4 Non-member functions](basic_regex.html#Non-member_functions)
  * [5 Deduction guides(since C++17)](basic_regex.html#Deduction_guides.28since_C.2B.2B17.29)

  
---  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/regex/basic_regex&action=edit&section=1 "Edit section: Member types")] Member types

Member type  |  Definition   
---|---  
`value_type` |  `CharT`  
`traits_type` |  `Traits`  
`string_type` |  `Traits::string_type`  
`locale_type` |  `Traits::locale_type`  
`flag_type` |  [std::regex_constants::syntax_option_type](syntax_option_type.html "cpp/regex/syntax option type")  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/regex/basic_regex&action=edit&section=2 "Edit section: Member functions")] Member functions

[ (constructor)](basic_regex/basic_regex.html "cpp/regex/basic regex/basic regex") |  constructs the regex object   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/regex/basic_regex/dsc_constructor&action=edit)  
---|---  
[ (destructor)](basic_regex/~basic_regex.html "cpp/regex/basic regex/~basic regex") |  destructs the regex object   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/regex/basic_regex/dsc_destructor&action=edit)  
[ operator=](basic_regex/operator=.html "cpp/regex/basic regex/operator=") |  assigns the contents   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/regex/basic_regex/dsc_operator%3D&action=edit)  
[ assign](basic_regex/assign.html "cpp/regex/basic regex/assign") |  assigns the contents   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/regex/basic_regex/dsc_assign&action=edit)  
  
#####  Observers   
  
[ mark_count](basic_regex/mark_count.html "cpp/regex/basic regex/mark count") |  returns the number of marked sub-expressions within the regular expression   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/regex/basic_regex/dsc_mark_count&action=edit)  
[ flags](basic_regex/flags.html "cpp/regex/basic regex/flags") |  returns the syntax flags   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/regex/basic_regex/dsc_flags&action=edit)  
  
#####  Locale   
  
[ getloc](basic_regex/getloc.html "cpp/regex/basic regex/getloc") |  get locale information   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/regex/basic_regex/dsc_getloc&action=edit)  
[ imbue](basic_regex/imbue.html "cpp/regex/basic regex/imbue") |  set locale information   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/regex/basic_regex/dsc_imbue&action=edit)  
  
#####  Modifiers   
  
[ swap](basic_regex/swap.html "cpp/regex/basic regex/swap") |  swaps the contents   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/regex/basic_regex/dsc_swap&action=edit)  
  
###  Constants  
  
Grammar option  |  Effect(s)   
---|---  
`ECMAScript` |  Use the [Modified ECMAScript regular expression grammar](ecmascript.html "cpp/regex/ecmascript").   
`basic` |  Use the basic POSIX regular expression grammar ([grammar documentation](https://pubs.opengroup.org/onlinepubs/9699919799/basedefs/V1_chap09.html#tag_09_03)).   
`extended` |  Use the extended POSIX regular expression grammar ([grammar documentation](https://pubs.opengroup.org/onlinepubs/9699919799/basedefs/V1_chap09.html#tag_09_04)).   
`awk` |  Use the regular expression grammar used by the _awk_ utility in POSIX ([grammar documentation](https://pubs.opengroup.org/onlinepubs/9699919799/utilities/awk.html#tag_20_06_13_04)).   
`grep` |  Use the regular expression grammar used by the _grep_ utility in POSIX. This is effectively the same as the `basic` option with the addition of newline '\n' as an alternation separator.   
`egrep` |  Use the regular expression grammar used by the _grep_ utility, with the _-E_ option, in POSIX. This is effectively the same as the `extended` option with the addition of newline '\n' as an alternation separator in addition to '|'.   
Grammar variation  |  Effect(s)   
`icase` |  Character matching should be performed without regard to case.   
`nosubs` |  When performing matches, all marked sub-expressions `**( expr)**` are treated as non-marking sub-expressions `**(?: expr)**`. No matches are stored in the supplied [std::regex_match](regex_match.html "cpp/regex/regex match") structure and [mark_count()](basic_regex/mark_count.html "cpp/regex/basic regex/mark count") is zero.   
`optimize` |  Instructs the regular expression engine to make matching faster, with the potential cost of making construction slower. For example, this might mean converting a non-deterministic FSA to a deterministic FSA.   
`collate` |  Character ranges of the form _"[a-b]"_ will be locale sensitive.   
`multiline` (C++17) |  Specifies that `^` shall match the beginning of a line and `$` shall match the end of a line, if the ECMAScript engine is selected.   
  
At most one grammar option can be chosen out of `ECMAScript`, `basic`, `extended`, `awk`, `grep`, `egrep`. If no grammar is chosen, `ECMAScript` is assumed to be selected. The other options serve as variations, such that std::regex("meow", std::regex::icase) is equivalent to std::regex("meow", std::regex::ECMAScript|std::regex::icase). 

The member constants in `basic_regex` are duplicates of the [`syntax_option_type`](syntax_option_type.html "cpp/regex/syntax option type") constants defined in the namespace `std::regex_constants`. 

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/regex/basic_regex&action=edit&section=3 "Edit section: Non-member functions")] Non-member functions

[ std::swap(std::basic_regex)](basic_regex/swap2.html "cpp/regex/basic regex/swap2")(C++11) |  specializes the [std::swap](../utility/swap.html "cpp/algorithm/swap") algorithm   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/regex/basic_regex/dsc_swap2&action=edit)  
---|---  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/regex/basic_regex&action=edit&section=4 "Edit section: Deduction guides\(since C++17\)")] [Deduction guides](basic_regex/deduction_guides.html "cpp/regex/basic regex/deduction guides")(since C++17)
