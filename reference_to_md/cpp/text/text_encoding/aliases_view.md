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

[`std::text_encoding`](../../locale/text_encoding.html "cpp/text/text encoding")

[Member functions](../../locale/text_encoding.html#Member_functions "cpp/text/text encoding")  
---  
[Creation](../../locale/text_encoding.html#Creation "cpp/text/text encoding")  
[text_encoding::text_encoding](text_encoding.html "cpp/text/text encoding/text encoding")  
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
**text_encoding::aliases_view**  
[Helper classes](../../locale/text_encoding.html#Helper_classes "cpp/text/text encoding")  
[hash<std::text_encoding>](hash.html "cpp/text/text encoding/hash")  
  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/text/text_encoding/navbar_content&action=edit)

class text_encoding::aliases_view  
: public [ranges::view_interface](../../ranges/view_interface.html)<text_encoding::aliases_view> |  |  (since C++26)  
---|---|---  
| |   
  
The nested class `text_encoding::aliases_view` is a [`view`](../../ranges/view.html "cpp/ranges/view") over aliases of the character encoding. 

Let r denote an instance of `aliases_view`. For a non-empty range r: 

  * r.front() is the primary name of the registered character encoding, 
  * r contains the aliases of the registered character encoding such that the order of the aliases is unspecified, 
  * each element in r is a non-null and non-empty null-terminated byte string encoded in the [literal character encoding](../../language/charset.html#Code_unit_and_literal_encoding "cpp/language/charset") and comprising only characters from the [basic character set](../../language/charset.html#Basic_character_set "cpp/language/charset"), and 
  * r does not contain duplicate values when compared with [std::strcmp](../../string/byte/strcmp.html "cpp/string/byte/strcmp"). 



These are the following type properties of `text_encoding::aliases_view`: 

  * it models [`copyable`](../../concepts/copyable.html "cpp/concepts/copyable"), [`random_access_range`](../../ranges/random_access_range.html "cpp/ranges/random access range"), and [`borrowed_range`](../../ranges/borrowed_range.html "cpp/ranges/borrowed range"). 
  * it is not required to satisfy [`common_range`](../../ranges/common_range.html "cpp/ranges/common range") and [`default_initializable`](../../concepts/default_initializable.html "cpp/concepts/default initializable"). 
  * both [ranges::range_value_t](../../ranges/range_size_t.html)<text_encoding​::​aliases_view> and [ranges::range_reference_t](../../ranges/range_reference_t.html)<text_encoding::aliases_view> denote const char*. 
  * [ranges::iterator_t](../../ranges/iterator_t.html)<text_encoding::aliases_view> is a [ConstexprIterator](../../named_req/ConstexprIterator.html "cpp/named req/ConstexprIterator"). 



## Contents

  * [1 Member functions](aliases_view.html#Member_functions)
    * [1.1 Inherited from std::ranges::view_interface](aliases_view.html#Inherited_from_std::ranges::view_interface)
  * [2 std::text_encoding::aliases_view::begin](aliases_view.html#std::text_encoding::aliases_view::begin)
  * [3 std::text_encoding::aliases_view::end](aliases_view.html#std::text_encoding::aliases_view::end)
    * [3.1 Example](aliases_view.html#Example)
    * [3.2 See also](aliases_view.html#See_also)

  
---  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/text/text_encoding/aliases_view&action=edit&section=1 "Edit section: Member functions")] Member functions

begin |  returns an iterator of implementation-defined type to the beginning of the aliases view   
(public member function)  
---|---  
end |  returns a sentinel of implementation-defined type of the aliases view   
(public member function)  
  
#####  Inherited from [std::ranges::view_interface](../../ranges/view_interface.html "cpp/ranges/view interface")  
  
[ empty](../../ranges/view_interface/empty.html "cpp/ranges/view interface/empty") |  returns whether the derived view is empty, provided only if it satisfies [`sized_range`](../../ranges/sized_range.html "cpp/ranges/sized range") or [`forward_range`](../../ranges/forward_range.html "cpp/ranges/forward range")   
(public member function of `std::ranges::view_interface<D>`) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/ranges/view_interface/dsc_empty&action=edit)  
[ cbegin](../../ranges/view_interface/cbegin.html "cpp/ranges/view interface/cbegin")(C++23) |  returns a constant iterator to the beginning of the range   
(public member function of `std::ranges::view_interface<D>`) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/ranges/view_interface/dsc_cbegin&action=edit)  
[ cend](../../ranges/view_interface/cend.html "cpp/ranges/view interface/cend")(C++23) |  returns a sentinel for the constant iterator of the range   
(public member function of `std::ranges::view_interface<D>`) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/ranges/view_interface/dsc_cend&action=edit)  
[ operator bool](../../ranges/view_interface/operator_bool.html "cpp/ranges/view interface/operator bool") |  returns whether the derived view is not empty, provided only if [ranges::empty](../../ranges/empty.html "cpp/ranges/empty") is applicable to it   
(public member function of `std::ranges::view_interface<D>`) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/ranges/view_interface/dsc_operator_bool&action=edit)  
[ front](../../ranges/view_interface/front.html "cpp/ranges/view interface/front") |  returns the first element in the derived view, provided if it satisfies [`forward_range`](../../ranges/forward_range.html "cpp/ranges/forward range")   
(public member function of `std::ranges::view_interface<D>`) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/ranges/view_interface/dsc_front&action=edit)  
[ operator[]](../../ranges/view_interface/operator_at.html "cpp/ranges/view interface/operator at") |  returns the `n`th element in the derived view, provided only if it satisfies [`random_access_range`](../../ranges/random_access_range.html "cpp/ranges/random access range")   
(public member function of `std::ranges::view_interface<D>`) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/ranges/view_interface/dsc_operator_at&action=edit)  
  
##  std::text_encoding::aliases_view::begin

constexpr /*implementation-defined*/ begin() const; |  |  (since C++26)  
---|---|---  
| |   
  
Returns an iterator of implementation-defined type to the beginning of r. 

##  std::text_encoding::aliases_view::end

constexpr /*implementation-defined*/ end() const; |  |  (since C++26)  
---|---|---  
| |   
  
Returns a sentinel of implementation-defined type of r. 

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/text/text_encoding/aliases_view&action=edit&section=2 "Edit section: Example")] Example

| This section is incomplete  
Reason: no example   
---|---  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/text/text_encoding/aliases_view&action=edit&section=3 "Edit section: See also")] See also

[ aliases](aliases.html "cpp/text/text encoding/aliases") |  returns a [`view`](../../ranges/view.html "cpp/ranges/view") over aliases of the current character encoding   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/text/text_encoding/dsc_aliases&action=edit)  
---|---
