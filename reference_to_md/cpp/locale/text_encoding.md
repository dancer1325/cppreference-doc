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
| **text_encoding**(C++26)  
---  
  


**`std::text_encoding`**

[Member functions](text_encoding.html#Member_functions "cpp/text/text encoding")  
---  
[Creation](text_encoding.html#Creation "cpp/text/text encoding")  
[text_encoding::text_encoding](../text/text_encoding/text_encoding.html "cpp/text/text encoding/text encoding")  
[text_encoding::literal](../text/text_encoding/literal.html "cpp/text/text encoding/literal")  
[text_encoding::environment](../text/text_encoding/environment.html "cpp/text/text encoding/environment")  
[Observers](text_encoding.html#Observers "cpp/text/text encoding")  
[text_encoding::mib](../text/text_encoding/mib.html "cpp/text/text encoding/mib")  
[text_encoding::name](../text/text_encoding/name.html "cpp/text/text encoding/name")  
[text_encoding::aliases](../text/text_encoding/aliases.html "cpp/text/text encoding/aliases")  
[text_encoding::environment_is](../text/text_encoding/environment_is.html "cpp/text/text encoding/environment is")  
[Helpers](text_encoding.html#Helpers "cpp/text/text encoding")  
[text_encoding::_comp-name_](../text/text_encoding/comp-name.html "cpp/text/text encoding/comp-name")  
[Non-member functions](text_encoding.html#Non-member_functions "cpp/text/text encoding")  
[operator==(std::text_encoding)](../text/text_encoding/operator_eq.html "cpp/text/text encoding/operator eq")  
[Member types](text_encoding.html#Member_types "cpp/text/text encoding")  
[text_encoding::id](../text/text_encoding/id.html "cpp/text/text encoding/id")  
[text_encoding::aliases_view](../text/text_encoding/aliases_view.html "cpp/text/text encoding/aliases view")  
[Helper classes](text_encoding.html#Helper_classes "cpp/text/text encoding")  
[hash<std::text_encoding>](../text/text_encoding/hash.html "cpp/text/text encoding/hash")  
  


Defined in header `[<text_encoding>](../header/text_encoding.html "cpp/header/text encoding")` |  |   
---|---|---  
struct text_encoding; |  |  (since C++26)  
| |   
  
The class `text_encoding` provides a mechanism for identifying character encodings. It is used to determine the [ordinary character literal encoding](../language/charset.html#Code_unit_and_literal_encoding "cpp/language/charset") of the translation environment at compile-time and the character encoding of the execution environment at runtime. 

Each `text_encoding` object encapsulates a _character encoding scheme_ , uniquely identified by an enumerator in [`text_encoding::id`](text_encoding.html#Member_types) and a corresponding name represented by a null-terminated byte string. These can be accessed through the mib() and name() member functions, respectively. The determination of whether an object represents a character encoding scheme implemented in the translation or execution environment is implementation-defined. 

The class `text_encoding` is a [TriviallyCopyable](../named_req/TriviallyCopyable.html "cpp/named req/TriviallyCopyable") type. The array object representing the corresponding name of the character encoding scheme is [nested within](../language/objects.html#Address "cpp/language/object") the `text_encoding` object itself. The stored name is limited to a maximum of [max_name_length](text_encoding.html#Member_constant) characters excluding the null character '\0'. 

The class supports both registered and non-registered character encodings. Registered encodings are those found in the [IANA Character Sets Registry](https://www.iana.org/assignments/character-sets/character-sets.xhtml) excluding the following character encodings: 

  * NATS-DANO (33) 
  * NATS-DANO-ADD (34). 



In addition, the class provides access for registered character encodings to: 

  1. _Primary name_ : The official name specified in the registry. 
  2. _Aliases_ : An implementation-defined superset of aliases from the registry. 
  3. _MIBenum value_ : A unique identifier for use in identifying coded character encodings. 



Non-registered encodings can be represented with an enumerator id::other or id::unknown and a custom name. 

A `text_encoding` object e whose MIBenum value is neither id::other nor id::unknown maintains the following invariants: 

  * *e.name() != '\0' is true, and 
  * e.mib() == [std::text_encoding](text_encoding.html)(e.name()).mib() is true. 



## Contents

  * [1 Member types](text_encoding.html#Member_types)
  * [2 Member constant](text_encoding.html#Member_constant)
  * [3 Data members](text_encoding.html#Data_members)
  * [4 Member functions](text_encoding.html#Member_functions)
    * [4.1 Creation](text_encoding.html#Creation)
    * [4.2 Observers](text_encoding.html#Observers)
    * [4.3 Helpers](text_encoding.html#Helpers)
  * [5 Non-member functions](text_encoding.html#Non-member_functions)
  * [6 Helper classes](text_encoding.html#Helper_classes)
  * [7 Notes](text_encoding.html#Notes)
  * [8 Example](text_encoding.html#Example)
  * [9 See also](text_encoding.html#See_also)

  
---  
  
### Member types

[ id](../text/text_encoding/id.html "cpp/text/text encoding/id") |  represents the MIBenum value of the character encoding  
(public member enum)  
---|---  
[ aliases_view](../text/text_encoding/aliases_view.html "cpp/text/text encoding/aliases view") |  a [`view`](../ranges/view.html "cpp/ranges/view") over aliases of the character encoding   
(public member class)   
  
### Member constant

Name  |  Value   
---|---  
constexpr [std::size_t](../types/size_t.html) max_name_length[static] |  63   
(public static member constant)  
  
### Data members

Member  |  Description   
---|---  
std::text_encoding::id `_mib__` (private) |  a MIBenum value with id::unknown as the default value  
(exposition-only member object*)  
char[max_name_length + 1] `_name__` (private) |  a stored primary name  
(exposition-only member object*)  
  
### Member functions

#####  Creation   
  
---  
[ (constructor)](../text/text_encoding/text_encoding.html "cpp/text/text encoding/text encoding") |  constructs new `text_encoding` object   
(public member function)   
[ literal](../text/text_encoding/literal.html "cpp/text/text encoding/literal")[static] |  constructs a new `text_encoding` representing the [ordinary character literal encoding](../language/charset.html#Code_unit_and_literal_encoding "cpp/language/charset")   
(public static member function)   
[ environment](../text/text_encoding/environment.html "cpp/text/text encoding/environment")[static] |  constructs a new `text_encoding` representing the implementation-defined character encoding scheme of the execution environment   
(public static member function)   
  
#####  Observers   
  
[ mib](../text/text_encoding/mib.html "cpp/text/text encoding/mib") |  returns the MIBenum value of the current character encoding   
(public member function)   
[ name](../text/text_encoding/name.html "cpp/text/text encoding/name") |  returns the primary name of the current character encoding   
(public member function)   
[ aliases](../text/text_encoding/aliases.html "cpp/text/text encoding/aliases") |  returns a [`view`](../ranges/view.html "cpp/ranges/view") over aliases of the current character encoding   
(public member function)   
[ environment_is](../text/text_encoding/environment_is.html "cpp/text/text encoding/environment is")[static] |  checks the character encoding scheme of the execution environment with the specified MIB value   
(public static member function)   
  
#####  Helpers   
  
[_comp-name_](../text/text_encoding/comp-name.html "cpp/text/text encoding/comp-name")[static](private) |  compares two alias names using [Charset Alias Matching](https://www.unicode.org/reports/tr22/tr22-8.html#Charset_Alias_Matching)  
(exposition-only static member function*)  
  
### Non-member functions

[ operator==(std::text_encoding)](../text/text_encoding/operator_eq.html "cpp/text/text encoding/operator eq")(C++26) |  compares two `text_encoding` objects.   
(public member function)   
---|---  
  
### Helper classes

[ std::hash<std::text_encoding>](../text/text_encoding/hash.html "cpp/text/text encoding/hash")(C++26) |  hash support for **`std::text_encoding`**   
(class template specialization)   
---|---  
  
### Notes

When working with character encodings, it is important to note that the primary names or aliases of two distinct registered character encodings are not equivalent when compared using [Charset Alias Matching](https://www.unicode.org/reports/tr22/tr22-8.html#Charset_Alias_Matching) as described by the Unicode Technical Standard. 

For convenience, the enumerators of `text_encoding::id` are introduced as members of `text_encoding` and can be accessed directly. This means that text_encoding::ASCII and text_encoding::id::ASCII refer to the same entity. 

It is recommended that the implementation should treat registered encodings as not interchangeable. Additionally, the primary name of a registered encoding should not be used to describe a similar but different non-registered encoding, unless there is a clear precedent for doing so. 

[Feature-test](../utility/feature_test.html "cpp/utility/feature test") macro | Value | Std | Feature   
---|---|---|---  
[`__cpp_lib_text_encoding`](../experimental/feature_test.html#cpp_lib_text_encoding "cpp/feature test") | [`202306L`](../compiler_support/26.html#cpp_lib_text_encoding_202306L "cpp/compiler support/26") | (C++26) | `std::text_encoding`  
  
### Example

Run this code
    
    
    #include <locale>
    #include <print>
    #include <text_encoding>
     
    int main()
    {
        // literal encoding is known at compile-time
        constexpr [std::text_encoding](text_encoding.html) literal_encoding = std::text_encoding::literal();
     
        // check for literal encoding
        static_assert(literal_encoding.mib() != std::text_encoding::other &&
                      literal_encoding.mib() != std::text_encoding::unknown);
     
        // environment encoding is only known at runtime
        [std::text_encoding](text_encoding.html) env_encoding = std::text_encoding::environment();
     
        // associated encoding of the default locale
        [std::text_encoding](text_encoding.html) locale_encoding = [std::locale](locale.html)("").encoding();
     
        [std::println](../io/println.html)("The literal encoding is {}", literal_encoding.name());
        [std::println](../io/println.html)("The aliases of literal encoding:");
        for (const char* alias_name : literal_encoding.aliases())
            [std::println](../io/println.html)(" -> {}", alias_name);
     
        if (env_encoding == locale_encoding)
            [std::println](../io/println.html)("Both environment and locale encodings are the same");
     
        [std::println](../io/println.html)("The environment encoding is {}", env_encoding.name());
        [std::println](../io/println.html)("The aliases of environment encoding:");
        for (const char* alias_name : env_encoding.aliases())
            [std::println](../io/println.html)(" -> {}", alias_name);
    }

Possible output: 
    
    
    The literal encoding is UTF-8
    The aliases of literal encoding:
     -> UTF-8
     -> csUTF8
    Both environment and locale encodings are the same
    The environment encoding is ANSI_X3.4-1968
    The aliases of environment encoding:
     -> US-ASCII
     -> iso-ir-6
     -> ANSI_X3.4-1968
     -> ANSI_X3.4-1986
     -> ISO_646.irv:1991
     -> ISO646-US
     -> us
     -> IBM367
     -> cp367
     -> csASCII
     -> ASCII

### See also

[ locale](locale.html "cpp/locale/locale") |  set of polymorphic facets that encapsulate cultural differences   
(class)   
---|---
  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
