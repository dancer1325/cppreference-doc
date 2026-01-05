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
  


[`std::text_encoding`](../../locale/text_encoding.html "cpp/text/text encoding")

[Member functions](../../locale/text_encoding.html#Member_functions "cpp/text/text encoding")  
---  
[Creation](../../locale/text_encoding.html#Creation "cpp/text/text encoding")  
**text_encoding::text_encoding**  
[text_encoding::literal](literal.html "cpp/text/text encoding/literal")  
[text_encoding::environment](environment.html "cpp/text/text encoding/environment")  
[Observers](../../locale/text_encoding.html#Observers "cpp/text/text encoding")  
[text_encoding::mib](mib.html "cpp/text/text encoding/mib")  
[text_encoding::name](name.html "cpp/text/text encoding/name")  
[text_encoding::aliases](aliases.html "cpp/text/text encoding/aliases")  
[text_encoding::environment_is](environment_is.html "cpp/text/text encoding/environment is")  
[Helpers](../../locale/text_encoding.html#Helpers "cpp/text/text encoding")  
[text_encoding::_comp-name_](comp-name.html "cpp/text/text encoding/comp-name")  
[Non-member functions](../../locale/text_encoding.html#Non-member_functions "cpp/text/text encoding")  
[operator==(std::text_encoding)](operator_eq.html "cpp/text/text encoding/operator eq")  
[Member types](../../locale/text_encoding.html#Member_types "cpp/text/text encoding")  
[text_encoding::id](id.html "cpp/text/text encoding/id")  
[text_encoding::aliases_view](aliases_view.html "cpp/text/text encoding/aliases view")  
[Helper classes](../../locale/text_encoding.html#Helper_classes "cpp/text/text encoding")  
[hash<std::text_encoding>](hash.html "cpp/text/text encoding/hash")  
  


constexpr text_encoding() = default; |  (1)  |  (since C++26)  
---|---|---  
constexpr explicit text_encoding( [std::string_view](../../string/basic_string_view.html) enc ) noexcept; |  (2)  |  (since C++26)  
constexpr text_encoding( std::text_encoding::id i ) noexcept; |  (3)  |  (since C++26)  
| |   
  
Constructs a new text encoding object. 

1) Default constructor. Constructs an object with [MIBenum](mib.html "cpp/text/text encoding/mib") value std::text_encoding::id::unknown and empty [character encoding name](name.html "cpp/text/text encoding/name").

2) Constructs an object with [character encoding name](name.html "cpp/text/text encoding/name") enc.

If enc names a [registered character encoding](text_encoding.html#External_links) other than `NATS-DANO` or `NATS-DANO-ADD`, then the constructed object will have the corresponding [MIBenum](mib.html "cpp/text/text encoding/mib") value, otherwise it will have MIBenum std::text_encoding::id::other.

Behavior is undefined if enc.size() > std::text_encoding::max_name_length || enc.contains('\0').

3) Constructs an object with [MIBenum](mib.html "cpp/text/text encoding/mib") value i.

If i is std::text_encoding::id::other or std::text_encoding::id::unknown, then the constructed object will have empty [character encoding name](name.html "cpp/text/text encoding/name"), otherwise it will have one of the [corresponding names](text_encoding.html#External_links).

Behavior is undefined if i is not a named enumerator of [`std::text_encoding::id`](id.html "cpp/text/text encoding/id").

### Parameters

enc  |  \-  |  character encoding name   
---|---|---  
i  |  \-  |  MIBenum value   
  
### Example

View on [Compiler Explorer](https://godbolt.org/z/b4T4hcd6o). 

Run this code
    
    
    #include <text_encoding>
     
    int main()
    {
        constexpr [std::text_encoding](../../locale/text_encoding.html) iso60 = std::text_encoding::ISO60DanishNorwegian;
        static_assert(iso60 == [std::text_encoding](../../locale/text_encoding.html)("csISO60DanishNorwegian"));
        static_assert(iso60 == [std::text_encoding](../../locale/text_encoding.html)("iso-ir-60"));
        static_assert(iso60 == [std::text_encoding](../../locale/text_encoding.html)("NS_4551-1"));
    }

### External links

[IANA registry of character set names and MIBenum values](https://www.iana.org/assignments/character-sets/character-sets.xhtml).   
---
