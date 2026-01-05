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
[operator<<operator>>](operator_ltltgtgt.html "cpp/string/basic string/operator ltltgtgt")  
**getline**  
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
[std::basic_istream](../../io/basic_istream.html)<CharT, Traits>&  
getline( [std::basic_istream](../../io/basic_istream.html)<CharT, Traits>& input,  
[std::basic_string](../basic_string.html)<CharT, Traits, Allocator>& str, CharT delim ); |  (1)  |   
template< class CharT, class Traits, class Allocator >  
[std::basic_istream](../../io/basic_istream.html)<CharT, Traits>&  
getline( [std::basic_istream](../../io/basic_istream.html)<CharT, Traits>&& input,  
[std::basic_string](../basic_string.html)<CharT, Traits, Allocator>& str, CharT delim ); |  (2)  |  (since C++11)  
template< class CharT, class Traits, class Allocator >  
[std::basic_istream](../../io/basic_istream.html)<CharT, Traits>&  
getline( [std::basic_istream](../../io/basic_istream.html)<CharT, Traits>& input,  
[std::basic_string](../basic_string.html)<CharT, Traits, Allocator>& str ); |  (3)  |   
template< class CharT, class Traits, class Allocator >  
[std::basic_istream](../../io/basic_istream.html)<CharT, Traits>&  
getline( [std::basic_istream](../../io/basic_istream.html)<CharT, Traits>&& input,  
[std::basic_string](../basic_string.html)<CharT, Traits, Allocator>& str ); |  (4)  |  (since C++11)  
| |   
  
`getline` reads characters from an input stream and places them into a string: 

1,2) Behaves as [UnformattedInputFunction](../../named_req/UnformattedInputFunction.html "cpp/named req/UnformattedInputFunction"), except that input.gcount() is not affected. After constructing and checking the sentry object, performs the following:

1) Calls str.erase().

2) Extracts characters from input and appends them to str until one of the following occurs (checked in the order listed)

a) end-of-file condition on input, in which case, `getline` sets [`eofbit`](../../io/ios_base/iostate.html "cpp/io/ios base/iostate").

b) the next available input character is delim, as tested by Traits::eq(c, delim), in which case the delimiter character is extracted from input, but is not appended to str.

c) str.max_size() characters have been stored, in which case `getline` sets [`failbit`](../../io/ios_base/iostate.html "cpp/io/ios base/iostate") and returns.

3) If no characters were extracted for whatever reason (not even the discarded delimiter), `getline` sets [`failbit`](../../io/ios_base/iostate.html "cpp/io/ios base/iostate") and returns.

3,4) Same as getline(input, str, input.widen('\n')), that is, the default delimiter is the endline character.

## Contents

  * [1 Parameters](getline.html#Parameters)
  * [2 Return value](getline.html#Return_value)
  * [3 Notes](getline.html#Notes)
  * [4 Example](getline.html#Example)
  * [5 Defect reports](getline.html#Defect_reports)
  * [6 See also](getline.html#See_also)

  
---  
  
### Parameters

input  |  \-  |  the stream to get data from   
---|---|---  
str  |  \-  |  the string to put the data into   
delim  |  \-  |  the delimiter character   
  
### Return value

input

### Notes

When consuming whitespace-delimited input (e.g. int n; [std::cin](../../io/cin.html) >> n;) any whitespace that follows, including a newline character, will be left on the input stream. Then when switching to line-oriented input, the first line retrieved with `getline` will be just that whitespace. In the likely case that this is unwanted behaviour, possible solutions include: 

  * An explicit extraneous initial call to `getline`. 
  * Removing consecutive whitespace with [std::cin](../../io/cin.html) >> [std::ws](../../io/manip/ws.html). 
  * Ignoring all leftover characters on the line of input with cin.ignore([std::numeric_limits](../../types/numeric_limits.html)<[std::streamsize](../../io/streamsize.html)>::max(), '\n');. 



### Example

The following example demonstrates how to use the `getline` function to read user input, and to process a stream line by line, or by parts of a line using the delim parameter.

Run this code
    
    
    #include <iostream>
    #include <sstream>
    #include <string>
     
    int main()
    {
        // greet the user
        [std::string](../basic_string.html) name;
        [std::cout](../../io/cout.html) << "What is your name? ";
        std::getline([std::cin](../../io/cin.html), name);
        [std::cout](../../io/cout.html) << "Hello " << name << ", nice to meet you.\n";
     
        // read file line by line
        [std::istringstream](../../io/basic_istringstream.html) input;
        input.str("1\n2\n3\n4\n5\n6\n7\n");
        int sum = 0;
        for ([std::string](../basic_string.html) line; std::getline(input, line);)
            sum += [std::stoi](stol.html)(line);
        [std::cout](../../io/cout.html) << "\nThe sum is " << sum << ".\n\n";
     
        // use separator to read parts of the line
        [std::istringstream](../../io/basic_istringstream.html) input2;
        input2.str("a;b;c;d");
        for ([std::string](../basic_string.html) line; std::getline(input2, line, ';');)
            [std::cout](../../io/cout.html) << line << '\n';
    }

Possible output: 
    
    
    What is your name? John Q. Public
    Hello John Q. Public, nice to meet you.
     
    The sum is 28.
     
    a
    b
    c
    d

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 91](https://cplusplus.github.io/LWG/issue91) | C++98  | `getline` did not behave as an unformatted input function  | behaves as an unformatted input function   
  
### See also

[ getline](../../io/basic_istream/getline.html "cpp/io/basic istream/getline") |  extracts characters until the given character is found   
(public member function of `std::basic_istream<CharT,Traits>`)   
---|---
