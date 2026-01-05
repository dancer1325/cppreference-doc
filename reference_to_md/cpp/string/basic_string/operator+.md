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
**operator+**  
[swap(std::basic_string)](swap2.html "cpp/string/basic string/swap2")  
[erase(std::basic_string)erase_if(std::basic_string)](erase2.html "cpp/string/basic string/erase2")(C++20)(C++20)  
[I/O](../basic_string.html#Input.2Foutput "cpp/string/basic string")  
[operator<<operator>>](operator_ltltgtgt.html "cpp/string/basic string/operator ltltgtgt")  
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
template< class CharT, class Traits, class Alloc >  
[std::basic_string](../basic_string.html)<CharT,Traits,Alloc>  
operator+( const [std::basic_string](../basic_string.html)<CharT,Traits,Alloc>& lhs,  
const [std::basic_string](../basic_string.html)<CharT,Traits,Alloc>& rhs ); |  (1) | (constexpr since C++20)  
template< class CharT, class Traits, class Alloc >  
[std::basic_string](../basic_string.html)<CharT,Traits,Alloc>  
operator+( const [std::basic_string](../basic_string.html)<CharT,Traits,Alloc>& lhs,  
const CharT* rhs ); |  (2)  |  (constexpr since C++20)  
template< class CharT, class Traits, class Alloc >  
[std::basic_string](../basic_string.html)<CharT,Traits,Alloc>  
operator+( const [std::basic_string](../basic_string.html)<CharT,Traits,Alloc>& lhs,  
CharT rhs ); |  (3)  |  (constexpr since C++20)  
template< class CharT, class Traits, class Alloc >  
constexpr [std::basic_string](../basic_string.html)<CharT,Traits,Alloc>  
operator+( const [std::basic_string](../basic_string.html)<CharT,Traits,Alloc>& lhs,  
[std::type_identity_t](../../types/type_identity.html)<[std::basic_string_view](../basic_string_view.html)<CharT,Traits>> rhs ); |  (4) | (since C++26)  
template< class CharT, class Traits, class Alloc >  
[std::basic_string](../basic_string.html)<CharT,Traits,Alloc>  
operator+( const CharT* lhs,  
const [std::basic_string](../basic_string.html)<CharT,Traits,Alloc>& rhs ); |  (5)  |  (constexpr since C++20)  
template< class CharT, class Traits, class Alloc >  
[std::basic_string](../basic_string.html)<CharT,Traits,Alloc>  
operator+( CharT lhs,  
const [std::basic_string](../basic_string.html)<CharT,Traits,Alloc>& rhs ); |  (6)  |  (constexpr since C++20)  
template< class CharT, class Traits, class Alloc >  
constexpr [std::basic_string](../basic_string.html)<CharT,Traits,Alloc>  
operator+( [std::type_identity_t](../../types/type_identity.html)<[std::basic_string_view](../basic_string_view.html)<CharT,Traits>> lhs,  
const [std::basic_string](../basic_string.html)<CharT,Traits,Alloc>& rhs ); |  (7) | (since C++26)  
template< class CharT, class Traits, class Alloc >  
[std::basic_string](../basic_string.html)<CharT,Traits,Alloc>  
operator+( [std::basic_string](../basic_string.html)<CharT,Traits,Alloc>&& lhs,  
[std::basic_string](../basic_string.html)<CharT,Traits,Alloc>&& rhs ); |  (8) | (since C++11)   
(constexpr since C++20)  
template< class CharT, class Traits, class Alloc >  
[std::basic_string](../basic_string.html)<CharT,Traits,Alloc>  
operator+( [std::basic_string](../basic_string.html)<CharT,Traits,Alloc>&& lhs,  
const [std::basic_string](../basic_string.html)<CharT,Traits,Alloc>& rhs ); |  (9)  |  (since C++11)   
(constexpr since C++20)  
template< class CharT, class Traits, class Alloc >  
[std::basic_string](../basic_string.html)<CharT,Traits,Alloc>  
operator+( [std::basic_string](../basic_string.html)<CharT,Traits,Alloc>&& lhs,  
const CharT* rhs ); |  (10)  |  (since C++11)   
(constexpr since C++20)  
template< class CharT, class Traits, class Alloc >  
[std::basic_string](../basic_string.html)<CharT,Traits,Alloc>  
operator+( [std::basic_string](../basic_string.html)<CharT,Traits,Alloc>&& lhs,  
CharT rhs ); |  (11)  |  (since C++11)   
(constexpr since C++20)  
template< class CharT, class Traits, class Alloc >  
constexpr [std::basic_string](../basic_string.html)<CharT,Traits,Alloc>  
operator+( [std::basic_string](../basic_string.html)<CharT,Traits,Alloc>&& lhs,  
[std::type_identity_t](../../types/type_identity.html)<[std::basic_string_view](../basic_string_view.html)<CharT,Traits>> rhs ); |  (12) | (since C++26)  
template< class CharT, class Traits, class Alloc >  
[std::basic_string](../basic_string.html)<CharT,Traits,Alloc>  
operator+( const [std::basic_string](../basic_string.html)<CharT,Traits,Alloc>& lhs,  
[std::basic_string](../basic_string.html)<CharT,Traits,Alloc>&& rhs ); |  (13)  |  (since C++11)   
(constexpr since C++20)  
template< class CharT, class Traits, class Alloc >  
[std::basic_string](../basic_string.html)<CharT,Traits,Alloc>  
operator+( const CharT* lhs,  
[std::basic_string](../basic_string.html)<CharT,Traits,Alloc>&& rhs ); |  (14)  |  (since C++11)   
(constexpr since C++20)  
template< class CharT, class Traits, class Alloc >  
[std::basic_string](../basic_string.html)<CharT,Traits,Alloc>  
operator+( CharT lhs,  
[std::basic_string](../basic_string.html)<CharT,Traits,Alloc>&& rhs ); |  (15)  |  (since C++11)   
(constexpr since C++20)  
template< class CharT, class Traits, class Alloc >  
constexpr [std::basic_string](../basic_string.html)<CharT,Traits,Alloc>  
operator+( [std::type_identity_t](../../types/type_identity.html)<[std::basic_string_view](../basic_string_view.html)<CharT,Traits>> lhs,  
[std::basic_string](../basic_string.html)<CharT,Traits,Alloc>&& rhs ); |  (16) | (since C++26)  
| |   
  
Returns a string containing characters from lhs followed by the characters from rhs. Equivalent to: 

1,2) [std::basic_string](../basic_string.html)<CharT, Traits, Allocator> r = lhs; r.append(rhs); return r;

3) [std::basic_string](../basic_string.html)<CharT, Traits, Allocator> r = lhs; r.push_back(rhs); return r;

4) [std::basic_string](../basic_string.html)<CharT, Traits, Allocator> r = lhs; r.append(rhs); return r;

5) [std::basic_string](../basic_string.html)<CharT, Traits, Allocator> r = rhs; r.insert(0, lhs); return r;

6) [std::basic_string](../basic_string.html)<CharT, Traits, Allocator> r = rhs; r.insert(r.begin(), lhs); return r;

7) [std::basic_string](../basic_string.html)<CharT, Traits, Allocator> r = rhs; r.insert(0, lhs); return r;

8) lhs.append(rhs); return std::move(lhs); except that both lhs and rhs are left in valid but unspecified states. If lhs and rhs have equal allocators, the implementation can move from either.

9,10) lhs.append(rhs); return std::move(lhs);

11) lhs.push_back(rhs); return std::move(lhs);

12) lhs.append(rhs); return std::move(lhs);

13,14) rhs.insert(0, lhs); return std::move(rhs);

15) rhs.insert(rhs.begin(), lhs); return std::move(rhs);

16) rhs.insert(0, lhs); return std::move(rhs);

The allocator used for the result is:  1-4) [std::allocator_traits](../../memory/allocator_traits.html)<Alloc>::select_on_container_copy_construction(lhs.get_allocator()) 5-7) [std::allocator_traits](../../memory/allocator_traits.html)<Alloc>::select_on_container_copy_construction(rhs.get_allocator()) 8-12) lhs.get_allocator() 13-16) rhs.get_allocator() In other words: 

  * If one operand is a `basic_string` rvalue, its allocator is used. 
  * Otherwise, `select_on_container_copy_construction` is used on the allocator of the lvalue `basic_string` operand. 

In each case, the left operand is preferred when both are `basic_string`s of the same value category. For ([8-16](operator+.html#Version_8)), all rvalue `basic_string` operands are left in valid but unspecified states.  | (since C++11)  
---|---  
  
## Contents

  * [1 Parameters](operator+.html#Parameters)
  * [2 Return value](operator+.html#Return_value)
  * [3 Notes](operator+.html#Notes)
  * [4 Example](operator+.html#Example)
  * [5 Defect reports](operator+.html#Defect_reports)
  * [6 See also](operator+.html#See_also)

  
---  
  
### Parameters

lhs  |  \-  |  string, string view(since C++26), character, or pointer to the first character in a null-terminated array   
---|---|---  
rhs  |  \-  |  string, string view(since C++26), character, or pointer to the first character in a null-terminated array   
  
### Return value

A string containing characters from lhs followed by the characters from rhs, using the allocator determined as above(since C++11). 

###  Notes

`operator+` should be used with great caution when stateful allocators are involved (such as when [std::pmr::string](../basic_string.html "cpp/string/basic string") is used)(since C++17). Prior to [P1165R1](https://wg21.link/P1165R1), the allocator used for the result was determined by historical accident and can vary from overload to overload for no apparent reason. Moreover, for ([1-5](operator+.html#Version_1)), the allocator propagation behavior varies across major standard library implementations and differs from the behavior depicted in the standard. Because the allocator used by the result of `operator+` is sensitive to value category, `operator+` is not associative with respect to allocator propagation: 
    
    
    using my_string = [std::basic_string](../basic_string.html)<char, [std::char_traits](../char_traits.html)<char>, my_allocator<char>>;
    my_string cat();
    const my_string& dog();
     
    my_string meow = /* ... */, woof = /* ... */;
    meow + cat() + /* ... */; // uses select_on_container_copy_construction on meow's allocator
    woof + dog() + /* ... */; // uses allocator of dog()'s return value instead
     
    meow + woof + meow; // uses select_on_container_copy_construction on meow's allocator
    meow + (woof + meow); // uses SOCCC on woof's allocator instead

For a chain of `operator+` invocations, the allocator used for the ultimate result may be controlled by prepending an rvalue `basic_string` with the desired allocator: 
    
    
    // use my_favorite_allocator for the final result
    my_string(my_favorite_allocator) + meow + woof + cat() + dog();

For better and portable control over allocators, member functions like [`append`](append.html "cpp/string/basic string/append"), [`insert`](insert.html "cpp/string/basic string/insert"), and [`operator+=`](operator+=.html "cpp/string/basic string/operator+=") should be used on a result string constructed with the desired allocator.  | (since C++11)  
---|---  
The usage of [std::type_identity_t](../../types/type_identity.html) as parameter in overloads ([4](operator+.html#Version_4)), ([7](operator+.html#Version_7)), ([12](operator+.html#Version_12)), and ([16](operator+.html#Version_16)) ensures that an object of type [std::basic_string](../basic_string.html)<CharT, Traits, Allocator> can always be concatenated to an object of a type `T` with an implicit conversion to [std::basic_string_view](../basic_string_view.html)<CharT, Traits>, and vice versa, as per [overload resolution](../../language/overload_resolution.html#Call_to_an_overloaded_operator "cpp/language/overload resolution") rules.  | [Feature-test](../../utility/feature_test.html "cpp/utility/feature test") macro  | Value | Std | Feature   
---|---|---|---  
[`__cpp_lib_string_view`](../../experimental/feature_test.html#cpp_lib_string_view "cpp/feature test") | [`202403`](../../compiler_support/26.html#cpp_lib_string_view_202403 "cpp/compiler support/26") | (C++26) | Concatenation of strings and string views, overloads ([4](operator+.html#Version_4)), ([7](operator+.html#Version_7)), ([12](operator+.html#Version_12)), ([16](operator+.html#Version_16))  
(since C++26)  
  
### Example

Run this code
    
    
    #include <iostream>
    #include <string>
    #include <string_view>
     
    int main()
    {
        [std::string](../basic_string.html) s1 = "Hello";
        [std::string](../basic_string.html) s2 = "world";
        const char* end = "!\n";
        [std::cout](../../io/cout.html) << s1 + ' ' + s2 + end;
     
        [std::string_view](../basic_string_view.html) water{" Water"};
        #if __cpp_lib_string_view >= 202403
        [std::cout](../../io/cout.html) << s1 + water + s2 << end; // overload (4), then (1)
        #else
        [std::cout](../../io/cout.html) << s1 + [std::string](../basic_string.html)(water) + s2 << end; // OK, but less efficient
        #endif
    }

Output: 
    
    
    Hello world!
    Hello Waterworld!

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[P1165R1](https://wg21.link/P1165R1) | C++11  | allocator propagation is haphazard and inconsistent  | made more consistent   
  
### See also

[ operator+=](operator+=.html "cpp/string/basic string/operator+=") |  appends characters to the end   
(public member function)   
---|---  
[ append](append.html "cpp/string/basic string/append") |  appends characters to the end   
(public member function)   
[ insert](insert.html "cpp/string/basic string/insert") |  inserts characters   
(public member function) 
  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
