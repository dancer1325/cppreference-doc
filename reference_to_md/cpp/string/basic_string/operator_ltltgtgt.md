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
  


[Strings library](../../string.html "cpp/string")

Classes  
---  
[basic_string](../basic_string.html "cpp/string/basic string")  
[basic_string_view](../basic_string_view.html "cpp/string/basic string view")(C++17)  
[char_traits](../char_traits.html "cpp/string/char traits")  
  


[`std::basic_string`](../basic_string.html "cpp/string/basic string")

| [Member functions](../basic_string.html#Member_functions "cpp/string/basic string")  
---  
[basic_string::basic_string](basic_string.html "cpp/string/basic string/basic string")  
[basic_string::~basic_string](~basic_string.html "cpp/string/basic string/~basic string")  
[basic_string::operator=](operator=.html "cpp/string/basic string/operator=")  
[basic_string::assign](assign.html "cpp/string/basic string/assign")  
[basic_string::assign_range](assign_range.html "cpp/string/basic string/assign range")(C++23)` `  
[basic_string::get_allocator](get_allocator.html "cpp/string/basic string/get allocator")  
[Element access](../basic_string.html#Element_access "cpp/string/basic string")  
[basic_string::at](at.html "cpp/string/basic string/at")  
[basic_string::operator[]](operator_at.html "cpp/string/basic string/operator at")  
[basic_string::front](front.html "cpp/string/basic string/front")(DR*)  
[basic_string::back](back.html "cpp/string/basic string/back")(DR*)  
[basic_string::data](data.html "cpp/string/basic string/data")  
[basic_string::c_str](c_str.html "cpp/string/basic string/c str")  
[basic_string::operator  
basic_string_view](operator_basic_string_view.html "cpp/string/basic string/operator basic string view")(C++17)  
[Iterators](../basic_string.html#Iterators "cpp/string/basic string")  
[basic_string::beginbasic_string::cbegin](begin.html "cpp/string/basic string/begin")(C++11)  
[basic_string::endbasic_string::cend](end.html "cpp/string/basic string/end")(C++11)  
[basic_string::rbeginbasic_string::crbegin](rbegin.html "cpp/string/basic string/rbegin")(C++11)  
[basic_string::rendbasic_string::crend](rend.html "cpp/string/basic string/rend")(C++11)  
[Search](../basic_string.html#Search "cpp/string/basic string")  
[basic_string::find](find.html "cpp/string/basic string/find")  
[basic_string::rfind](rfind.html "cpp/string/basic string/rfind")  
[basic_string::find_first_of](find_first_of.html "cpp/string/basic string/find first of")  
[basic_string::find_first_not_of](find_first_not_of.html "cpp/string/basic string/find first not of")  
[basic_string::find_last_of](find_last_of.html "cpp/string/basic string/find last of")  
[basic_string::find_last_not_of](find_last_not_of.html "cpp/string/basic string/find last not of")  
  
| [Modifiers](../basic_string.html#Modifiers "cpp/string/basic string")  
---  
[basic_string::clear](clear.html "cpp/string/basic string/clear")  
[basic_string::insert](insert.html "cpp/string/basic string/insert")  
[basic_string::insert_range](insert_range.html "cpp/string/basic string/insert range")(C++23)  
[basic_string::erase](erase.html "cpp/string/basic string/erase")  
[basic_string::push_back](push_back.html "cpp/string/basic string/push back")  
[basic_string::pop_back](pop_back.html "cpp/string/basic string/pop back")(DR*)  
[basic_string::append](append.html "cpp/string/basic string/append")  
[basic_string::append_range](append_range.html "cpp/string/basic string/append range")(C++23)  
[basic_string::operator+=](operator+=.html "cpp/string/basic string/operator+=")  
[basic_string::replace](replace.html "cpp/string/basic string/replace")  
[basic_string::replace_with_range](replace_with_range.html "cpp/string/basic string/replace with range")(C++23)  
[basic_string::copy](copy.html "cpp/string/basic string/copy")  
[basic_string::resize](resize.html "cpp/string/basic string/resize")  
[basic_string::resize_and_overwrite](resize_and_overwrite.html "cpp/string/basic string/resize and overwrite")(C++23)` `  
[basic_string::swap](swap.html "cpp/string/basic string/swap")  
[Capacity](../basic_string.html#Capacity "cpp/string/basic string")  
[basic_string::empty](empty.html "cpp/string/basic string/empty")  
[basic_string::sizebasic_string::length](size.html "cpp/string/basic string/size")  
[basic_string::max_size](max_size.html "cpp/string/basic string/max size")  
[basic_string::reserve](reserve.html "cpp/string/basic string/reserve")  
[basic_string::capacity](capacity.html "cpp/string/basic string/capacity")  
[basic_string::shrink_to_fit](shrink_to_fit.html "cpp/string/basic string/shrink to fit")(DR*)  
[Operations](../basic_string.html#Operations "cpp/string/basic string")  
[basic_string::compare](compare.html "cpp/string/basic string/compare")  
[basic_string::starts_with](starts_with.html "cpp/string/basic string/starts with")(C++20)  
[basic_string::ends_with](ends_with.html "cpp/string/basic string/ends with")(C++20)  
[basic_string::contains](contains.html "cpp/string/basic string/contains")(C++23)  
[basic_string::substr](substr.html "cpp/string/basic string/substr")  
  
| [Constants](../basic_string.html#Constants "cpp/string/basic string")  
---  
[basic_string::npos](npos.html "cpp/string/basic string/npos")  
[Non-member functions](../basic_string.html#Non-member_functions "cpp/string/basic string")  
[operator+](https://en.cppreference.com/w/cpp/string/basic_string/operator%2B "cpp/string/basic string/operator+")  
[swap(std::basic_string)](swap2.html "cpp/string/basic string/swap2")  
[erase(std::basic_string)erase_if(std::basic_string)](erase2.html "cpp/string/basic string/erase2")(C++20)(C++20)  
[I/O](../basic_string.html#Input.2Foutput "cpp/string/basic string")  
**operator <<operator>>**  
[getline](getline.html "cpp/string/basic string/getline")  
[Comparison](../basic_string.html#Non-member_functions "cpp/string/basic string")  
[operator==operator!=operator<operator>operator<=operator>=operator<=>](operator_cmp.html "cpp/string/basic string/operator cmp")(until C++20)(until C++20)(until C++20)(until C++20)(until C++20)(C++20)  
[Numeric conversions](../basic_string.html#Numeric_conversions "cpp/string/basic string")  
| [stoistolstoll](stol.html "cpp/string/basic string/stol")(C++11)(C++11)(C++11)  
---  
[stoulstoull](stoul.html "cpp/string/basic string/stoul")(C++11)(C++11)` `  
  
| [stofstodstold](stof.html "cpp/string/basic string/stof")(C++11)(C++11)(C++11)  
---  
[to_string](to_string.html "cpp/string/basic string/to string")(C++11)  
[to_wstring](to_wstring.html "cpp/string/basic string/to wstring")(C++11)  
  
[Literals](../basic_string.html#Literals "cpp/string/basic string")  
[operator""s](operator""s.html "cpp/string/basic string/operator""s")(C++14)  
[Helper classes](../basic_string.html#Helper_classes "cpp/string/basic string")  
[hash<std::basic_string>](hash.html "cpp/string/basic string/hash")(C++11)  
[Deduction guides](deduction_guides.html "cpp/string/basic string/deduction guides") (C++17)  
  


Defined in header `[<string>](../../header/string.html "cpp/header/string")` |  |   
---|---|---  
template< class CharT, class Traits, class Allocator >  
[std::basic_ostream](../../io/basic_ostream.html)<CharT, Traits>&   
operator<<( [std::basic_ostream](../../io/basic_ostream.html)<CharT, Traits>& os,   
const [std::basic_string](../basic_string.html)<CharT, Traits, Allocator>& str ); |  (1)  |   
template< class CharT, class Traits, class Allocator >  
[std::basic_istream](../../io/basic_istream.html)<CharT, Traits>&   
operator>>( [std::basic_istream](../../io/basic_istream.html)<CharT, Traits>& is,   
[std::basic_string](../basic_string.html)<CharT, Traits, Allocator>& str ); |  (2)  |   
| |   
  
1) Behaves as a [FormattedOutputFunction](../../named_req/FormattedOutputFunction.html "cpp/named req/FormattedOutputFunction"). After constructing and checking the sentry object, [determines the output format padding](../../named_req/FormattedOutputFunction.html#Padding "cpp/named req/FormattedOutputFunction"). 

Then inserts each character from the resulting sequence seq (the contents of str plus padding) to the output stream os as if by calling os.rdbuf()->sputn(seq, n), where n is [std::max](../../algorithm/max.html)(os.width(), str.size()) Finally, calls os.width(0) to cancel the effects of [std::setw](../../io/manip/setw.html "cpp/io/manip/setw"), if any. 

Equivalent to return os << [std::basic_string_view](../basic_string_view.html)<CharT, Traits>(str);.  | (since C++17)  
---|---  
  
2) Behaves as a [FormattedInputFunction](../../named_req/FormattedInputFunction.html "cpp/named req/FormattedInputFunction"). After constructing and checking the sentry object, which may skip leading whitespace, first clears str with str.erase(), then reads characters from is and appends them to str as if by str.append(1, c), until one of the following conditions becomes true: 

  * `N` characters are read, where `N` is is.width() if is.width() > 0, otherwise `N` is str.max_size(), 
  * the end-of-file condition occurs in the stream is, or 
  * [std::isspace](../byte/isspace.html)(c, is.getloc()) is true for the next character c in is (this whitespace character remains in the input stream). 



If no characters are extracted then std::ios::failbit is set on is, which may throw [std::ios_base::failure](../../io/ios_base/failure.html "cpp/io/ios base/failure"). 

Finally, calls is.width(0) to cancel the effects of [std::setw](../../io/manip/setw.html "cpp/io/manip/setw"), if any. 

## Contents

  * [1 Exceptions](operator_ltltgtgt.html#Exceptions)
  * [2 Parameters](operator_ltltgtgt.html#Parameters)
  * [3 Return value](operator_ltltgtgt.html#Return_value)
  * [4 Example](operator_ltltgtgt.html#Example)
  * [5 Defect reports](operator_ltltgtgt.html#Defect_reports)
  * [6 See also](operator_ltltgtgt.html#See_also)

  
---  
  
### Exceptions

1) May throw [std::ios_base::failure](../../io/ios_base/failure.html "cpp/io/ios base/failure") if an exception is thrown during output.

2) May throw [std::ios_base::failure](../../io/ios_base/failure.html "cpp/io/ios base/failure") if no characters are extracted from is (e.g. the stream is at end of file, or consists of whitespace only), or if an exception is thrown during input.

### Parameters

os  |  \-  |  a character output stream   
---|---|---  
is  |  \-  |  a character input stream   
str  |  \-  |  the string to be inserted or extracted   
  
### Return value

1) os

2) is

### Example

Run this code
    
    
    #include <iostream>
    #include <sstream>
    #include <string>
     
    int main()
    {
        [std::string](../basic_string.html) greeting = "Hello, whirled!";
        [std::istringstream](../../io/basic_istringstream.html) iss(greeting);
     
        [std::string](../basic_string.html) hello_comma, whirled, word;
     
        iss >> hello_comma;
        iss >> whirled;
     
        [std::cout](../../io/cout.html) << greeting << '\n'
                  << hello_comma << '\n' << whirled << '\n';
     
        // Reset the stream
        iss.clear();
        iss.seekg(0);
     
        while (iss >> word)
            [std::cout](../../io/cout.html) << '+' << word << '\n';
    }

Output: 
    
    
    Hello, whirled!
    Hello,
    whirled!
    +Hello,
    +whirled!

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 25](https://cplusplus.github.io/LWG/issue25) | C++98  | n was the smaller of os.width() and str.size() | n is the larger of them   
[LWG 90](https://cplusplus.github.io/LWG/issue90) | C++98  | [std::isspace](../byte/isspace.html)(c, getloc()) was used to check  
for spaces, but `getloc` is not declared in [`<string>`](../../header/string.html "cpp/header/string") | replaced getloc()  
with is.getloc()  
[LWG 91](https://cplusplus.github.io/LWG/issue91) | C++98  | `operator>>` did not behave  
as a [FormattedInputFunction](../../named_req/FormattedInputFunction.html "cpp/named req/FormattedInputFunction") | behaves as a  
[FormattedInputFunction](../../named_req/FormattedInputFunction.html "cpp/named req/FormattedInputFunction")  
[LWG 211](https://cplusplus.github.io/LWG/issue211) | C++98  | `operator>>` did not set `failbit` if no character is extracted  | sets `failbit`  
[LWG 435](https://cplusplus.github.io/LWG/issue435) | C++98  | characters were inserted by os.rdbuf()->sputn(str.data(), n),  
and the resolution of [LWG issue 25](https://cplusplus.github.io/LWG/issue25) made the behavior  
undefined if os.width() is larger than str.size() | determines the padding  
first and inserts the padded  
character sequence instead   
[LWG 586](https://cplusplus.github.io/LWG/issue586) | C++98  | `operator<<` did not behave  
as a [FormattedOutputFunction](../../named_req/FormattedOutputFunction.html "cpp/named req/FormattedOutputFunction") | behaves as a  
[FormattedOutputFunction](../../named_req/FormattedOutputFunction.html "cpp/named req/FormattedOutputFunction")  
  
### See also

[ operator<<](../basic_string_view/operator_ltlt.html "cpp/string/basic string view/operator ltlt")(C++17) |  performs stream output on string views   
(function template)   
---|---
