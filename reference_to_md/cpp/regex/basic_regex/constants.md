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
  


[`std::basic_regex`](../basic_regex.html "cpp/regex/basic regex")

Member Functions  
---  
[basic_regex::basic_regex](basic_regex.html "cpp/regex/basic regex/basic regex")  
[basic_regex::~basic_regex](~basic_regex.html "cpp/regex/basic regex/~basic regex")  
[basic_regex::operator=](operator=.html "cpp/regex/basic regex/operator=")  
[basic_regex::assign](assign.html "cpp/regex/basic regex/assign")  
Observers  
[basic_regex::mark_count](mark_count.html "cpp/regex/basic regex/mark count")  
[basic_regex::flags](flags.html "cpp/regex/basic regex/flags")  
Locale  
[basic_regex::getloc](getloc.html "cpp/regex/basic regex/getloc")  
[basic_regex::imbue](imbue.html "cpp/regex/basic regex/imbue")  
Modifiers  
[basic_regex::swap](swap.html "cpp/regex/basic regex/swap")  
**Constants**  
Non-member Functions  
[swap(std::basic_regex)](swap2.html "cpp/regex/basic regex/swap2")  
[Deduction guides](deduction_guides.html "cpp/regex/basic regex/deduction guides")(C++17)  
  


Defined in header `[<regex>](../../header/regex.html "cpp/header/regex")` |  |   
---|---|---  
static constexpr [std::regex_constants::syntax_option_type](../syntax_option_type.html) icase =  
[std::regex_constants::icase](../syntax_option_type.html);  
static constexpr [std::regex_constants::syntax_option_type](../syntax_option_type.html) nosubs =  
[std::regex_constants::nosubs](../syntax_option_type.html);  
static constexpr [std::regex_constants::syntax_option_type](../syntax_option_type.html) optimize =  
[std::regex_constants::optimize](../syntax_option_type.html);  
static constexpr [std::regex_constants::syntax_option_type](../syntax_option_type.html) collate =  
[std::regex_constants::collate](../syntax_option_type.html);  
static constexpr [std::regex_constants::syntax_option_type](../syntax_option_type.html) ECMAScript =  
[std::regex_constants::ECMAScript](../syntax_option_type.html);  
static constexpr [std::regex_constants::syntax_option_type](../syntax_option_type.html) basic =  
[std::regex_constants::basic](../syntax_option_type.html);  
static constexpr [std::regex_constants::syntax_option_type](../syntax_option_type.html) extended =  
[std::regex_constants::extended](../syntax_option_type.html);  
static constexpr [std::regex_constants::syntax_option_type](../syntax_option_type.html) awk =  
[std::regex_constants::awk](../syntax_option_type.html);  
static constexpr [std::regex_constants::syntax_option_type](../syntax_option_type.html) grep =  
[std::regex_constants::grep](../syntax_option_type.html);  
static constexpr [std::regex_constants::syntax_option_type](../syntax_option_type.html) egrep =  
[std::regex_constants::egrep](../syntax_option_type.html); |  |   
static constexpr [std::regex_constants::syntax_option_type](../syntax_option_type.html) multiline =  
[std::regex_constants::multiline](../syntax_option_type.html); |  |  (since C++17)  
| |   
  
[std::basic_regex](../basic_regex.html "cpp/regex/basic regex") defines several constants that govern general regex matching syntax. 

These constants are duplicated from std::regex_constants: 

Grammar option  |  Effect(s)   
---|---  
`ECMAScript` |  Use the [Modified ECMAScript regular expression grammar](../ecmascript.html "cpp/regex/ecmascript").   
`basic` |  Use the basic POSIX regular expression grammar ([grammar documentation](https://pubs.opengroup.org/onlinepubs/9699919799/basedefs/V1_chap09.html#tag_09_03)).   
`extended` |  Use the extended POSIX regular expression grammar ([grammar documentation](https://pubs.opengroup.org/onlinepubs/9699919799/basedefs/V1_chap09.html#tag_09_04)).   
`awk` |  Use the regular expression grammar used by the _awk_ utility in POSIX ([grammar documentation](https://pubs.opengroup.org/onlinepubs/9699919799/utilities/awk.html#tag_20_06_13_04)).   
`grep` |  Use the regular expression grammar used by the _grep_ utility in POSIX. This is effectively the same as the `basic` option with the addition of newline '\n' as an alternation separator.   
`egrep` |  Use the regular expression grammar used by the _grep_ utility, with the _-E_ option, in POSIX. This is effectively the same as the `extended` option with the addition of newline '\n' as an alternation separator in addition to '|'.   
Grammar variation  |  Effect(s)   
`icase` |  Character matching should be performed without regard to case.   
`nosubs` |  When performing matches, all marked sub-expressions `**( expr)**` are treated as non-marking sub-expressions `**(?: expr)**`. No matches are stored in the supplied [std::regex_match](../regex_match.html "cpp/regex/regex match") structure and mark_count() is zero.   
`optimize` |  Instructs the regular expression engine to make matching faster, with the potential cost of making construction slower. For example, this might mean converting a non-deterministic FSA to a deterministic FSA.   
`collate` |  Character ranges of the form _"[a-b]"_ will be locale sensitive.   
`multiline` (C++17) |  Specifies that `^` shall match the beginning of a line and `$` shall match the end of a line, if the ECMAScript engine is selected.   
  
At most one grammar option can be chosen out of `ECMAScript`, `basic`, `extended`, `awk`, `grep`, `egrep`. If no grammar is chosen, `ECMAScript` is assumed to be selected. The other options serve as variations, such that [std::regex](../basic_regex.html)("meow", std::regex::icase) is equivalent to [std::regex](../basic_regex.html)("meow", std::regex::ECMAScript|std::regex::icase). 

### See also

[ syntax_option_type](../syntax_option_type.html "cpp/regex/syntax option type")(C++11) |  general options controlling regex behavior   
(typedef)   
---|---
