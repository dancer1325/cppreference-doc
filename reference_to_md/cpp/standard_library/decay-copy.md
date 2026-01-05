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
  


[Standard library](../standard_library.html "cpp/standard library")

[Customization point object](../ranges/cpo.html "cpp/standard library/cpo") (C++20)  
---  
Exposition-only entities  
**_decay-copy_**(C++11)  
[_synth-three-way_ _synth-three-way-result_](synth-three-way.html "cpp/standard library/synth-three-way")(C++20)(C++20)  
  


template< class T >  
typename [std::decay](../types/decay.html)<T>::type decay-copy( T&& value ); |  | (since C++11)   
(until C++20)   
(exposition only*)  
---|---|---  
template< class T >  
requires [std::convertible_to](../concepts/convertible_to.html)<T, [std::decay_t](../types/decay.html)<T>>  
constexpr [std::decay_t](../types/decay.html)<T> decay-copy( T&& value )  
noexcept([std::is_nothrow_convertible_v](../types/is_convertible.html)<T, [std::decay_t](../types/decay.html)<T>>); |  |  (since C++20)   
(exposition only*)  
| |   
  
Returns [std::forward](../utility/forward.html)<T>(value) (implicitly converted to the decayed type), a decayed prvalue copy of value. 

## Contents

  * [1 Parameters](decay-copy.html#Parameters)
  * [2 Return value](decay-copy.html#Return_value)
  * [3 Notes](decay-copy.html#Notes)
  * [4 Defect reports](decay-copy.html#Defect_reports)
  * [5 See also](decay-copy.html#See_also)

  
---  
  
### Parameters

value  |  \-  |  the value to be copied   
---|---|---  
  
### Return value

A decayed copy of value as a prvalue. 

### Notes

`_decay-copy_` was introduced by the resolution of [LWG issue 929](https://cplusplus.github.io/LWG/issue929). It is initially used in the [concurrency support library](../atomic.html "cpp/thread") to ensure that arguments are decayed when passing-by-value, and is later used in the [ranges library](../ranges.html "cpp/ranges"). 

The language feature [`auto`](../language/explicit_cast.html "cpp/language/explicit cast")(x) introduced in C++23 also allows decayed copies to be created as prvalues. The only difference is that `_decay-copy_` always [materializes](../language/implicit_cast.html#Temporary_materialization "cpp/language/implicit conversion") value and produces a copy, while auto(expr) is a no-op if expr is a prvalue. 

All usages of `_decay-copy_` in the standard library (see below) except [`views::all`](../ranges/all_view.html "cpp/ranges/all view"), [`ranges::take_view`](../ranges/take_view.html "cpp/ranges/take view") and [`ranges::drop_view`](../ranges/drop_view.html "cpp/ranges/drop view") are replaced with auto(x) since C++23. 

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 3724](https://cplusplus.github.io/LWG/issue3724) | C++20  | `_decay-copy_` was not constrained  | constrained   
  
### See also

[ (constructor)](../thread/thread/thread.html "cpp/thread/thread/thread") |  constructs new `thread` object   
(public member function of `std::thread`)   
---|---  
[ (constructor)](../thread/jthread/jthread.html "cpp/thread/jthread/jthread") |  constructs new `jthread` object   
(public member function of `std::jthread`)   
[ async](../thread/async.html "cpp/thread/async")(C++11) |  runs a function asynchronously (potentially in a new thread) and returns a [std::future](../thread/future.html "cpp/thread/future") that will hold the result   
(function template)   
[ ranges::begin](../ranges/begin.html "cpp/ranges/begin")(C++20) |  returns an iterator to the beginning of a range  
(customization point object)  
[ ranges::end](../ranges/end.html "cpp/ranges/end")(C++20) |  returns a sentinel indicating the end of a range  
(customization point object)  
[ ranges::rbegin](../ranges/rbegin.html "cpp/ranges/rbegin")(C++20) |  returns a reverse iterator to a range  
(customization point object)  
[ ranges::rend](../ranges/rend.html "cpp/ranges/rend")(C++20) |  returns a reverse end iterator to a range  
(customization point object)  
[ ranges::size](../ranges/size.html "cpp/ranges/size")(C++20) |  returns an integer equal to the size of a range  
(customization point object)  
[ ranges::data](../ranges/data.html "cpp/ranges/data")(C++20) |  obtains a pointer to the beginning of a contiguous range  
(customization point object)  
[ views::all_tviews::all](../ranges/all_view.html "cpp/ranges/all view")(C++20) |  a [`view`](../ranges/view.html "cpp/ranges/view") that includes all elements of a [`range`](../ranges/range.html "cpp/ranges/range")  
(alias template) (range adaptor object)  
[ ranges::take_viewviews::take](../ranges/take_view.html "cpp/ranges/take view")(C++20) |  a [`view`](../ranges/view.html "cpp/ranges/view") consisting of the first N elements of another [`view`](../ranges/view.html "cpp/ranges/view")  
(class template) (range adaptor object)  
[ ranges::drop_viewviews::drop](../ranges/drop_view.html "cpp/ranges/drop view")(C++20) |  a [`view`](../ranges/view.html "cpp/ranges/view") consisting of elements of another [`view`](../ranges/view.html "cpp/ranges/view"), skipping the first N elements  
(class template) (range adaptor object)
