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
  


[`std::regex_traits`](../regex_traits.html "cpp/regex/regex traits")

Member functions  
---  
[regex_traits::regex_traits](regex_traits.html "cpp/regex/regex traits/regex traits")  
[regex_traits::length](length.html "cpp/regex/regex traits/length")  
[regex_traits::translate](translate.html "cpp/regex/regex traits/translate")  
[regex_traits::translate_nocase](translate_nocase.html "cpp/regex/regex traits/translate nocase")  
**regex_traits::transform**  
[regex_traits::transform_primary](transform_primary.html "cpp/regex/regex traits/transform primary")  
[regex_traits::lookup_collatename](lookup_collatename.html "cpp/regex/regex traits/lookup collatename")  
[regex_traits::lookup_classname](lookup_classname.html "cpp/regex/regex traits/lookup classname")  
[regex_traits::isctype](isctype.html "cpp/regex/regex traits/isctype")  
[regex_traits::value](value.html "cpp/regex/regex traits/value")  
[regex_traits::imbue](imbue.html "cpp/regex/regex traits/imbue")  
[regex_traits::getloc](getloc.html "cpp/regex/regex traits/getloc")  
  


template< class ForwardIt >  
string_type transform( ForwardIt first, ForwardIt last) const; |  |   
---|---|---  
| |   
  
Obtains the sort key for the character sequence `[`first`, `last`)`, such that if a sort key compares less than another sort key with operator<, then the character sequence that produced the first sort key comes before the character sequence that produced the second sort key, in the currently imbued locale's collation order. 

For example, when the regex flag [std::regex_constants::collate](../syntax_option_type.html "cpp/regex/syntax option type") is set, then the sequence `[a-b]` would match some character `c1` if traits.transform("a") <= traits.transform(c1) <= traits.transform("b"). Note that this function takes a character sequence as the argument to accommodate to the ranges defined like [[.ae.]-d]. 

Standard library specializations of [std::regex_traits](../regex_traits.html "cpp/regex/regex traits") return [std::use_facet](../../locale/use_facet.html)<[std::collate](../../locale/collate.html)<CharT>>(getloc()).transform(str.data(), str.data() + str.length()) for some temporary string `str` constructed as string_type str(first, last). 

### Parameters

first, last  |  \-  |  a pair of [LegacyForwardIterators](../../named_req/ForwardIterator.html "cpp/named req/ForwardIterator") which determines the sequence of characters to compare   
---|---|---  
Type requirements   
-`ForwardIt` must meet the requirements of [LegacyForwardIterator](../../named_req/ForwardIterator.html "cpp/named req/ForwardIterator").   
  
### Return value

The collation key for the character sequence `[`first`, `last`)` in the currently imbued locale. 

### Example

| This section is incomplete  
Reason: no example   
---|---
