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

[Strings library](../string.html "cpp/string")

Classes  
---  
[basic_string](basic_string.html "cpp/string/basic string")  
[basic_string_view](basic_string_view.html "cpp/string/basic string view")(C++17)  
**char_traits**  
  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/string/navbar_content&action=edit)

**`std::char_traits`**

Member functions  
---  
[char_traits::assign](char_traits/assign.html "cpp/string/char traits/assign")  
[char_traits::eqchar_traits::lt](char_traits/cmp.html "cpp/string/char traits/cmp")  
[char_traits::move](char_traits/move.html "cpp/string/char traits/move")  
[char_traits::copy](char_traits/copy.html "cpp/string/char traits/copy")  
[char_traits::compare](char_traits/compare.html "cpp/string/char traits/compare")  
[char_traits::length](char_traits/length.html "cpp/string/char traits/length")  
[char_traits::find](char_traits/find.html "cpp/string/char traits/find")  
[char_traits::to_char_type](char_traits/to_char_type.html "cpp/string/char traits/to char type")  
[char_traits::to_int_type](char_traits/to_int_type.html "cpp/string/char traits/to int type")  
[char_traits::eq_int_type](char_traits/eq_int_type.html "cpp/string/char traits/eq int type")  
[char_traits::eof](char_traits/eof.html "cpp/string/char traits/eof")  
[char_traits::not_eof](char_traits/not_eof.html "cpp/string/char traits/not eof")  
  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/string/char_traits/navbar_content&action=edit)

Defined in header `[<string>](../header/string.html "cpp/header/string")` |  |   
---|---|---  
template<  
class CharT   
> class char_traits; |  |   
| |   
  
The `char_traits` class is a traits class template that abstracts basic character and string operations for a given character type. The defined operation set is such that generic algorithms almost always can be implemented in terms of it. It is thus possible to use such algorithms with almost any possible character or string type, just by supplying a customized `char_traits` class. 

The `char_traits` class template serves as a basis for explicit instantiations. The user can [provide a specialization](../language/extending_std.html "cpp/language/extending std") for any custom character types. Several explicit specializations are provided for the standard character types (see below), other specializations are not required to satisfy the requirements of [CharTraits](../named_req/CharTraits.html "cpp/named req/CharTraits"). 

## Contents

  * [1 Specializations](char_traits.html#Specializations)
    * [1.1 Member types](char_traits.html#Member_types)
    * [1.2 Member functions](char_traits.html#Member_functions)
  * [2 Notes](char_traits.html#Notes)
  * [3 Example](char_traits.html#Example)
  * [4 See also](char_traits.html#See_also)

  
---  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/string/char_traits&action=edit&section=1 "Edit section: Specializations")] Specializations

The standard library provides the following standard specializations: 

Defined in header `[<string>](../header/string.html "cpp/header/string")`  
---  
std::char_traits<char> |  the standard character traits of char  
std::char_traits<wchar_t> |  the standard character traits of wchar_t  
std::char_traits<char8_t> (C++20) |  the standard character traits of char8_t  
std::char_traits<char16_t> (C++11) |  the standard character traits of char16_t  
std::char_traits<char32_t> (C++11) |  the standard character traits of char32_t  
  
All these specializations satisfy the requirements of [CharTraits](../named_req/CharTraits.html "cpp/named req/CharTraits"). 

#### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/string/char_traits&action=edit&section=2 "Edit section: Member types")] Member types

The standard specializations define the following member types required by [CharTraits](../named_req/CharTraits.html "cpp/named req/CharTraits"): 

`CharT` | Member type   
---|---  
`char_type` | `int_type` | `off_type` | `pos_type` | `state_type`  
char | char | int |  [std::streamoff](../io/streamoff.html "cpp/io/streamoff") | [std::streampos](../io/fpos.html "cpp/io/fpos") |  [std::mbstate_t](multibyte/mbstate_t.html "cpp/string/multibyte/mbstate t")  
wchar_t | wchar_t | [`std::wint_t`](wide.html#Types "cpp/string/wide") | [std::wstreampos](../io/fpos.html "cpp/io/fpos")  
char8_t | char8_t | unsigned int | [std::u8streampos](../io/fpos.html "cpp/io/fpos")  
char16_t | char16_t |  [std::uint_least16_t](../types/integer.html "cpp/types/integer") |  [std::u16streampos](../io/fpos.html "cpp/io/fpos")  
char32_t | char32_t | [std::uint_least32_t](../types/integer.html "cpp/types/integer") | [std::u32streampos](../io/fpos.html "cpp/io/fpos")  
On top of that, the standard specializations also define the member type `comparison_category` as [`std::strong_ordering`](../utility/compare/strong_ordering.html "cpp/utility/compare/strong ordering").  | (since C++20)  
---|---  
  
#### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/string/char_traits&action=edit&section=3 "Edit section: Member functions")] Member functions

The standard specializations define the following static member functions required by [CharTraits](../named_req/CharTraits.html "cpp/named req/CharTraits"): 

[ assign](char_traits/assign.html "cpp/string/char traits/assign")[static] |  assigns a character   
(public static member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/string/char_traits/dsc_assign&action=edit)  
---|---  
[ eqlt](char_traits/cmp.html "cpp/string/char traits/cmp")[static] |  compares two characters   
(public static member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/string/char_traits/dsc_cmp&action=edit)  
[ move](char_traits/move.html "cpp/string/char traits/move")[static] |  moves one character sequence onto another   
(public static member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/string/char_traits/dsc_move&action=edit)  
[ copy](char_traits/copy.html "cpp/string/char traits/copy")[static] |  copies a character sequence   
(public static member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/string/char_traits/dsc_copy&action=edit)  
[ compare](char_traits/compare.html "cpp/string/char traits/compare")[static] |  lexicographically compares two character sequences   
(public static member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/string/char_traits/dsc_compare&action=edit)  
[ length](char_traits/length.html "cpp/string/char traits/length")[static] |  returns the length of a character sequence   
(public static member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/string/char_traits/dsc_length&action=edit)  
[ find](char_traits/find.html "cpp/string/char traits/find")[static] |  finds a character in a character sequence   
(public static member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/string/char_traits/dsc_find&action=edit)  
[ to_char_type](char_traits/to_char_type.html "cpp/string/char traits/to char type")[static] |  converts `int_type` to equivalent `char_type`   
(public static member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/string/char_traits/dsc_to_char_type&action=edit)  
[ to_int_type](char_traits/to_int_type.html "cpp/string/char traits/to int type")[static] |  converts `char_type` to equivalent `int_type`   
(public static member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/string/char_traits/dsc_to_int_type&action=edit)  
[ eq_int_type](char_traits/eq_int_type.html "cpp/string/char traits/eq int type")[static] |  compares two `int_type` values   
(public static member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/string/char_traits/dsc_eq_int_type&action=edit)  
[ eof](char_traits/eof.html "cpp/string/char traits/eof")[static] |  returns an _eof_ value   
(public static member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/string/char_traits/dsc_eof&action=edit)  
[ not_eof](char_traits/not_eof.html "cpp/string/char traits/not eof")[static] |  checks whether a character is _eof_ value   
(public static member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/string/char_traits/dsc_not_eof&action=edit)  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/string/char_traits&action=edit&section=4 "Edit section: Notes")] Notes

[CharTraits](../named_req/CharTraits.html "cpp/named req/CharTraits") does not require defining the types and functions listed above as direct members, it only requires types like `X::type` and expressions like X::func(args) are valid and have the required semantics. Users-defined character traits can be derived from other character traits classes and only override some of their members, see the example below. 

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/string/char_traits&action=edit&section=5 "Edit section: Example")] Example

User-defined character traits may be used to provide [case-insensitive comparison](http://www.gotw.ca/gotw/029.htm):

Run this code
    
    
    #include <cctype>
    #include <iostream>
    #include <string>
    #include <string_view>
     
    struct ci_char_traits : public std::char_traits<char>
    {
        static char to_upper(char ch)
        {
            return [std::toupper](byte/toupper.html)((unsigned char) ch);
        }
     
        static bool eq(char c1, char c2)
        {
            return to_upper(c1) == to_upper(c2);
        }
     
        static bool lt(char c1, char c2)
        {
             return to_upper(c1) < to_upper(c2);
        }
     
        static int compare(const char* s1, const char* s2, [std::size_t](../types/size_t.html) n)
        {
            while (n-- != 0)
            {
                if (to_upper(*s1) < to_upper(*s2))
                    return -1;
                if (to_upper(*s1) > to_upper(*s2))
                    return 1;
                ++s1;
                ++s2;
            }
            return 0;
        }
     
        static const char* find(const char* s, [std::size_t](../types/size_t.html) n, char a)
        {
            const auto ua{to_upper(a)};
            while (n-- != 0) 
            {
                if (to_upper(*s) == ua)
                    return s;
                s++;
            }
            return nullptr;
        }
    };
     
    template<class DstTraits, class CharT, class SrcTraits>
    constexpr [std::basic_string_view](basic_string_view.html)<CharT, DstTraits>
        traits_cast(const [std::basic_string_view](basic_string_view.html)<CharT, SrcTraits> src) noexcept
    {
        return {src.data(), src.size()};
    }
     
    int main()
    {
        using namespace std::literals;
     
        constexpr auto s1 = "Hello"sv;
        constexpr auto s2 = "heLLo"sv;
     
        if (traits_cast<ci_char_traits>(s1) == traits_cast<ci_char_traits>(s2))
            [std::cout](../io/cout.html) << s1 << " and " << s2 << " are equal\n";
    }

Output: 
    
    
    Hello and heLLo are equal

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/string/char_traits&action=edit&section=6 "Edit section: See also")] See also

[ basic_string](basic_string.html "cpp/string/basic string") |  stores and manipulates sequences of characters   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/string/dsc_basic_string&action=edit)  
---|---  
[ basic_string_view](basic_string_view.html "cpp/string/basic string view")(C++17) |  read-only string view   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/string/dsc_basic_string_view&action=edit)  
[ basic_istream](../io/basic_istream.html "cpp/io/basic istream") |  wraps a given abstract device ([std::basic_streambuf](../io/basic_streambuf.html "cpp/io/basic streambuf"))  
and provides high-level input interface   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/dsc_basic_istream&action=edit)  
[ basic_ostream](../io/basic_ostream.html "cpp/io/basic ostream") |  wraps a given abstract device ([std::basic_streambuf](../io/basic_streambuf.html "cpp/io/basic streambuf"))  
and provides high-level output interface   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/dsc_basic_ostream&action=edit)  
[ basic_streambuf](../io/basic_streambuf.html "cpp/io/basic streambuf") |  abstracts a raw device   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/dsc_basic_streambuf&action=edit)
