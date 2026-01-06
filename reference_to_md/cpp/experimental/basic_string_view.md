  
  


[Experimental](../experimental.html "cpp/experimental")

[Technical Specification](../experimental.html#Technical_Specification "cpp/experimental")  
---  
[Filesystem library](fs.html "cpp/experimental/fs") (filesystem TS)  
[Library fundamentals](memory.html "cpp/experimental/lib extensions") (library fundamentals TS)  
[Library fundamentals 2](lib_extensions_2.html "cpp/experimental/lib extensions 2") (library fundamentals TS v2)  
[Library fundamentals 3](lib_extensions_3.html "cpp/experimental/lib extensions 3") (library fundamentals TS v3)  
[Extensions for parallelism](parallelism.html "cpp/experimental/parallelism") (parallelism TS)  
[Extensions for parallelism 2](parallelism_2.html "cpp/experimental/parallelism 2") (parallelism TS v2)  
[Extensions for concurrency](concurrency.html "cpp/experimental/concurrency") (concurrency TS)  
[Extensions for concurrency 2](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/concurrency_2&action=edit&redlink=1 "cpp/experimental/concurrency 2 \(page does not exist\)") (concurrency TS v2)  
[Concepts](constraints.html "cpp/experimental/constraints") (concepts TS)  
[Ranges](ranges.html "cpp/experimental/ranges") (ranges TS)  
[Reflection](reflect.html "cpp/experimental/reflect") (reflection TS)  
[Mathematical special functions](special_math.html "cpp/experimental/special functions") (special functions TR)  
[Experimental Non-TS](../experimental.html#Experimental_Non-TS "cpp/experimental")  
[Pattern Matching](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/pm&action=edit&redlink=1 "cpp/experimental/pm \(page does not exist\)")  
[Linear Algebra](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/la&action=edit&redlink=1 "cpp/experimental/la \(page does not exist\)")  
[std::execution](execution.html "cpp/experimental/execution")  
[Contracts](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/contracts&action=edit&redlink=1 "cpp/experimental/contracts \(page does not exist\)")  
[2D Graphics](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/2dgraphics&action=edit&redlink=1 "cpp/experimental/2dgraphics \(page does not exist\)")  
  


[Library fundamentals](memory.html "cpp/experimental/lib extensions")

[experimental::optional](optional.html "cpp/experimental/optional")  
---  
[experimental::any](any.html "cpp/experimental/any")  
**experimental::basic_string_view**  
[experimental::sample](sample.html "cpp/experimental/sample")  
[experimental::shared_ptr](shared_ptr.html "cpp/experimental/shared ptr")  
[experimental::weak_ptr](weak_ptr.html "cpp/experimental/weak ptr")  
[experimental::apply](apply.html "cpp/experimental/apply")  
[experimental::invocation_typeexperimental::raw_invocation_type](invocation_type.html "cpp/experimental/invocation type")  
[experimental::search](search.html "cpp/experimental/search")  
[experimental::default_searcherexperimental::make_default_searcher](default_searcher.html "cpp/experimental/default searcher")  
[experimental::boyer_moore_searcherexperimental::make_boyer_moore_searcher](boyer_moore_searcher.html "cpp/experimental/boyer moore searcher")  
[experimental::boyer_moore_horspool_searcherexperimental::make_boyer_moore_horspool_searcher](boyer_moore_horspool_searcher.html "cpp/experimental/boyer moore horspool searcher")  
[Type-erased and polymorphic allocators](memory.html "cpp/experimental/memory")  
[Variable templates for type traits](type_trait_variable_templates.html "cpp/experimental/type trait variable templates")  
  


**`std::experimental::basic_string_view`**

| Member functions  
---  
[basic_string_view::basic_string_view](basic_string_view/basic_string_view.html "cpp/experimental/basic string view/basic string view")  
[basic_string_view::operator=](basic_string_view/operator=.html "cpp/experimental/basic string view/operator=")  
Iterators  
[basic_string_view::beginbasic_string_view::cbegin](basic_string_view/begin.html "cpp/experimental/basic string view/begin")  
[basic_string_view::endbasic_string_view::cend](basic_string_view/end.html "cpp/experimental/basic string view/end")  
[basic_string_view::rbeginbasic_string_view::crbegin](basic_string_view/rbegin.html "cpp/experimental/basic string view/rbegin")  
[basic_string_view::rendbasic_string_view::crend](basic_string_view/rend.html "cpp/experimental/basic string view/rend")  
Element access  
[basic_string_view::at](basic_string_view/at.html "cpp/experimental/basic string view/at")  
[basic_string_view::operator[]](basic_string_view/operator_at.html "cpp/experimental/basic string view/operator at")  
[basic_string_view::front](basic_string_view/front.html "cpp/experimental/basic string view/front")  
[basic_string_view::back](basic_string_view/back.html "cpp/experimental/basic string view/back")  
[basic_string_view::data](basic_string_view/data.html "cpp/experimental/basic string view/data")  
Capacity  
[basic_string_view::sizebasic_string_view::length](basic_string_view/size.html "cpp/experimental/basic string view/size")  
[basic_string_view::max_size](basic_string_view/max_size.html "cpp/experimental/basic string view/max size")  
[basic_string_view::empty](basic_string_view/empty.html "cpp/experimental/basic string view/empty")  
Modifiers  
[basic_string_view::remove_prefix](basic_string_view/remove_prefix.html "cpp/experimental/basic string view/remove prefix")  
[basic_string_view::remove_suffix](basic_string_view/remove_suffix.html "cpp/experimental/basic string view/remove suffix")  
[basic_string_view::swap](basic_string_view/swap.html "cpp/experimental/basic string view/swap")  
  
| Operations  
---  
[basic_string_view::to_stringbasic_string_view::operator basic_string](basic_string_view/to_string.html "cpp/experimental/basic string view/to string")  
[basic_string_view::copy](basic_string_view/copy.html "cpp/experimental/basic string view/copy")  
[basic_string_view::substr](basic_string_view/substr.html "cpp/experimental/basic string view/substr")  
[basic_string_view::compare](basic_string_view/compare.html "cpp/experimental/basic string view/compare")  
[basic_string_view::find](basic_string_view/find.html "cpp/experimental/basic string view/find")  
[basic_string_view::rfind](basic_string_view/rfind.html "cpp/experimental/basic string view/rfind")  
[basic_string_view::find_first_of](basic_string_view/find_first_of.html "cpp/experimental/basic string view/find first of")  
[basic_string_view::find_last_of](basic_string_view/find_last_of.html "cpp/experimental/basic string view/find last of")  
[basic_string_view::find_first_not_of](basic_string_view/find_first_not_of.html "cpp/experimental/basic string view/find first not of")  
[basic_string_view::find_last_not_of](basic_string_view/find_last_not_of.html "cpp/experimental/basic string view/find last not of")  
Constants  
[basic_string_view::npos](basic_string_view/npos.html "cpp/experimental/basic string view/npos")  
Non-member functions  
[operator==operator!=operator<operator>operator<=operator>=](basic_string_view/operator_cmp.html "cpp/experimental/basic string view/operator cmp")  
[operator<<](basic_string_view/operator_ltlt.html "cpp/experimental/basic string view/operator ltlt")  
Helper classes  
[hash<std::string_view>hash<std::wstring_view>hash<std::u16string_view>hash<std::u32string_view>](basic_string_view/hash.html "cpp/experimental/basic string view/hash")  
  


![](https://upload.cppreference.com/mwiki/images/3/31/Imbox_notice.png) |  **Merged into ISO C++** The functionality described on this page was merged into the mainline ISO C++ standard as of 3/2016, see [`std::basic_string_view`](../string/basic_string_view.html "cpp/string/basic string view") (since C++17)  
---|---  
Defined in header `[<experimental/string_view>](../header/experimental/string_view.html "cpp/header/experimental/string view")` |  |   
---|---|---  
template<   
class CharT,   
class Traits = [std::char_traits](../string/char_traits.html)<CharT>   
> class basic_string_view; |  |  (library fundamentals TS)  
| |   
  
The class template `basic_string_view` describes an object that can refer to a constant contiguous sequence of char-like objects with the first element of the sequence at position zero. 

A typical implementation holds only two members: a pointer to constant `CharT` and a size. 

Several typedefs for common character types are provided: 

Defined in header `[<experimental/string_view>](../header/experimental/string_view.html "cpp/header/experimental/string view")`  
---  
Type  |  Definition   
**std::experimental::string_view** |  std::experimental::basic_string_view<char>  
**std::experimental::wstring_view** |  std::experimental::basic_string_view<wchar_t>  
**std::experimental::u16string_view** |  std::experimental::basic_string_view<char16_t>  
**std::experimental::u32string_view** |  std::experimental::basic_string_view<char32_t>  
  
## Contents

  * [1 Template parameters](basic_string_view.html#Template_parameters)
  * [2 Member types](basic_string_view.html#Member_types)
  * [3 Member functions](basic_string_view.html#Member_functions)
    * [3.1 Iterators](basic_string_view.html#Iterators)
    * [3.2 Element access](basic_string_view.html#Element_access)
    * [3.3 Capacity](basic_string_view.html#Capacity)
    * [3.4 Modifiers](basic_string_view.html#Modifiers)
    * [3.5 Operations](basic_string_view.html#Operations)
  * [4 Constants](basic_string_view.html#Constants)
  * [5 Non-member functions](basic_string_view.html#Non-member_functions)
    * [5.1 Input/output](basic_string_view.html#Input.2Foutput)
  * [6 Helper classes](basic_string_view.html#Helper_classes)
  * [7 Feature test macros](basic_string_view.html#Feature_test_macros)

  
---  
  
### Template parameters

CharT  |  \-  |  character type   
---|---|---  
Traits  |  \-  |  traits class specifying the operations on the character type   
  
### Member types

Member type  |  Definition   
---|---  
`traits_type` |  `Traits`  
`value_type` |  `CharT`  
`pointer` |  `CharT*`  
`const_pointer` |  `const CharT*`  
`reference` |  `CharT&`  
`const_reference` |  `const CharT&`  
`const_iterator` |  implementation-defined [LegacyRandomAccessIterator](../named_req/RandomAccessIterator.html "cpp/named req/RandomAccessIterator")  
`iterator` |  `const_iterator`  
`reverse_iterator` |  `const_reverse_iterator`  
`const_reverse_iterator` |  [std::reverse_iterator](../iterator/reverse_iterator.html)<const_iterator>  
`size_type` |  [std::size_t](../types/size_t.html "cpp/types/size t")  
`difference_type` |  [std::ptrdiff_t](../types/ptrdiff_t.html "cpp/types/ptrdiff t")  
  
Note: `iterator` and `const_iterator` are the same type because string views are views into constant character sequences. 

### Member functions

[ (constructor)](basic_string_view/basic_string_view.html "cpp/experimental/basic string view/basic string view") |  constructs a `basic_string_view`   
(public member function)   
---|---  
[ operator=](basic_string_view/operator=.html "cpp/experimental/basic string view/operator=") |  assigns a view   
(public member function)   
  
#####  Iterators   
  
[ begincbegin](basic_string_view/begin.html "cpp/experimental/basic string view/begin") |  returns an iterator to the beginning   
(public member function)   
[ endcend](basic_string_view/end.html "cpp/experimental/basic string view/end") |  returns an iterator to the end   
(public member function)   
[ rbegincrbegin](basic_string_view/rbegin.html "cpp/experimental/basic string view/rbegin") |  returns a reverse iterator to the beginning   
(public member function)   
[ rendcrend](basic_string_view/rend.html "cpp/experimental/basic string view/rend") |  returns a reverse iterator to the end   
(public member function)   
  
#####  Element access   
  
[ operator[]](basic_string_view/operator_at.html "cpp/experimental/basic string view/operator at") |  access specified character   
(public member function)   
[ at](basic_string_view/at.html "cpp/experimental/basic string view/at") |  access specified character with bounds checking   
(public member function)   
[ front](basic_string_view/front.html "cpp/experimental/basic string view/front") |  accesses the first character   
(public member function)   
[ back](basic_string_view/back.html "cpp/experimental/basic string view/back") |  accesses the last character   
(public member function)   
[ data](basic_string_view/data.html "cpp/experimental/basic string view/data") |  returns a pointer to the first character of a view   
(public member function)   
  
#####  Capacity   
  
[ sizelength](basic_string_view/size.html "cpp/experimental/basic string view/size") |  returns the number of characters   
(public member function)   
[ max_size](basic_string_view/max_size.html "cpp/experimental/basic string view/max size") |  returns the maximum number of characters   
(public member function)   
[ empty](basic_string_view/empty.html "cpp/experimental/basic string view/empty") |  checks whether the view is empty   
(public member function)   
  
#####  Modifiers   
  
[ remove_prefix](basic_string_view/remove_prefix.html "cpp/experimental/basic string view/remove prefix") |  shrinks the view by moving its start forward   
(public member function)   
[ remove_suffix](basic_string_view/remove_suffix.html "cpp/experimental/basic string view/remove suffix") |  shrinks the view by moving its end backward   
(public member function)   
[ swap](basic_string_view/swap.html "cpp/experimental/basic string view/swap") |  swaps the contents   
(public member function)   
  
#####  Operations   
  
[ to_stringoperator basic_string](basic_string_view/to_string.html "cpp/experimental/basic string view/to string") |  creates a string from the view   
(public member function)   
[ copy](basic_string_view/copy.html "cpp/experimental/basic string view/copy") |  copies characters   
(public member function)   
[ substr](basic_string_view/substr.html "cpp/experimental/basic string view/substr") |  returns a substring   
(public member function)   
[ compare](basic_string_view/compare.html "cpp/experimental/basic string view/compare") |  compares two views   
(public member function)   
[ find](basic_string_view/find.html "cpp/experimental/basic string view/find") |  find characters in the view   
(public member function)   
[ rfind](basic_string_view/rfind.html "cpp/experimental/basic string view/rfind") |  find the last occurrence of a substring   
(public member function)   
[ find_first_of](basic_string_view/find_first_of.html "cpp/experimental/basic string view/find first of") |  find first occurrence of characters   
(public member function)   
[ find_last_of](basic_string_view/find_last_of.html "cpp/experimental/basic string view/find last of") |  find last occurrence of characters   
(public member function)   
[ find_first_not_of](basic_string_view/find_first_not_of.html "cpp/experimental/basic string view/find first not of") |  find first absence of characters   
(public member function)   
[ find_last_not_of](basic_string_view/find_last_not_of.html "cpp/experimental/basic string view/find last not of") |  find last absence of characters   
(public member function)   
  
###  Constants  
  
[ npos](basic_string_view/npos.html "cpp/experimental/basic string view/npos")[static] |  special value. The exact meaning depends on the context   
(public static member constant)   
  
### Non-member functions

[ operator==operator!=operator<operator>operator<=operator>=](basic_string_view/operator_cmp.html "cpp/experimental/basic string view/operator cmp") |  lexicographically compares two views   
(function template)   
---|---  
  
#####  Input/output   
  
[ operator<<](basic_string_view/operator_ltlt.html "cpp/experimental/basic string view/operator ltlt") |  performs stream output on views   
(function template)   
  
### Helper classes

[ std::hash<std::experimental::string_view>std::hash<std::experimental::wstring_view>std::hash<std::experimental::u16string_view>std::hash<std::experimental::u32string_view>](basic_string_view/hash.html "cpp/experimental/basic string view/hash") |  hash support for views   
(class template specialization)   
---|---  
  
### Feature test macros

__cpp_lib_experimental_string_view |  a value of at least 201411 indicates that basic_string_view template is supported   
(macro constant)  
---|---
