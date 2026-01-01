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

[Ranges library](../ranges.html "cpp/ranges")

| [Range access](../ranges.html#Range_access "cpp/ranges")  
---  
| [begin](begin.html "cpp/ranges/begin")  
---  
[cbegin](cbegin.html "cpp/ranges/cbegin")` `  
[end](end.html "cpp/ranges/end")  
[cend](cend.html "cpp/ranges/cend")  
  
| [rbegin](rbegin.html "cpp/ranges/rbegin")  
---  
[crbegin](crbegin.html "cpp/ranges/crbegin")` `  
[rend](rend.html "cpp/ranges/rend")  
[crend](crend.html "cpp/ranges/crend")  
  
| [size](size.html "cpp/ranges/size")  
---  
[ssize](ssize.html "cpp/ranges/ssize")` `  
[data](data.html "cpp/ranges/data")  
[cdata](cdata.html "cpp/ranges/cdata")  
  
| [reserve_hint](reserve_hint.html "cpp/ranges/reserve hint")(C++26)` `  
---  
[empty](empty.html "cpp/ranges/empty")  
  
  
  
  
  
| [Range conversions](../ranges.html#Range_conversions "cpp/ranges")  
---  
[std::from_range_t  
std::from_range](from_range.html "cpp/ranges/from range")(C++23)(C++23)` `  
**to**(C++23)  
  
  
  
| [Dangling iterator handling](../ranges.html#Dangling_iterator_handling "cpp/ranges")  
---  
[dangling](dangling.html "cpp/ranges/dangling")  
[borrowed_iterator_t](borrowed_iterator_t.html "cpp/ranges/borrowed iterator t")  
[borrowed_subrange_t](borrowed_iterator_t.html "cpp/ranges/borrowed iterator t")  
  
  
  
[Range primitives](../ranges.html#Range_primitives "cpp/ranges")  
---  
| [range_size_trange_difference_trange_value_t](range_size_t.html "cpp/ranges/range size t")  
---  
[elements_of](elements_of.html "cpp/ranges/elements of")(C++23)` `  
  
| [iterator_tconst_iterator_tsentinel_tconst_sentinel_t](iterator_t.html "cpp/ranges/iterator t")(C++23)(C++23)` `  
---  
  
| [range_reference_trange_const_reference_trange_rvalue_reference_trange_common_reference_t](range_reference_t.html "cpp/ranges/range reference t")(C++23)  
---  
  
[Range concepts](../ranges.html#Range_concepts "cpp/ranges")  
---  
| [range](range.html "cpp/ranges/range")  
---  
[borrowed_range](borrowed_range.html "cpp/ranges/borrowed range")` `  
[common_range](common_range.html "cpp/ranges/common range")  
  
| [sized_range](sized_range.html "cpp/ranges/sized range")  
---  
[viewable_range](viewable_range.html "cpp/ranges/viewable range")` `  
[view](view.html "cpp/ranges/view")  
  
| [input_range](input_range.html "cpp/ranges/input range")  
---  
[output_range](output_range.html "cpp/ranges/output range")  
[forward_range](forward_range.html "cpp/ranges/forward range")` `  
  
| [bidirectional_range](bidirectional_range.html "cpp/ranges/bidirectional range")` `  
---  
[random_access_range](random_access_range.html "cpp/ranges/random access range")  
[contiguous_range](contiguous_range.html "cpp/ranges/contiguous range")  
  
| [approximately_sized_range](approximately_sized_range.html "cpp/ranges/approximately sized range")(C++26)  
---  
[constant_range](constant_range.html "cpp/ranges/constant range")(C++23)  
  
  
  
[Views](../ranges.html#Views "cpp/ranges")  
---  
| [view_interface](view_interface.html "cpp/ranges/view interface")` `  
---  
  
| [subrange](subrange.html "cpp/ranges/subrange")  
---  
  
|  |   
  
---  
  
[Range factories](../ranges.html#Range_factories "cpp/ranges")  
---  
| [empty_viewviews::empty](empty_view.html "cpp/ranges/empty view")` `  
---  
  
| [single_viewviews::single](single_view.html "cpp/ranges/single view")` `  
---  
  
| [basic_istream_viewviews::istream](basic_istream_view.html "cpp/ranges/basic istream view")` `  
---  
  
| [iota_viewviews::iota](iota_view.html "cpp/ranges/iota view")` `  
---  
  
| [repeat_viewviews::repeat](repeat_view.html "cpp/ranges/repeat view")(C++23)(C++23)  
---  
  
[Range adaptors](../ranges.html#Range_adaptors "cpp/ranges")  
---  
| [views::all_tviews::all](all_view.html "cpp/ranges/all view")  
---  
[as_rvalue_viewviews::as_rvalue](as_rvalue_view.html "cpp/ranges/as rvalue view")(C++23)(C++23)` `  
[filter_viewviews::filter](filter_view.html "cpp/ranges/filter view")  
[transform_viewviews::transform](transform_view.html "cpp/ranges/transform view")  
[take_viewviews::take](take_view.html "cpp/ranges/take view")  
[take_while_viewviews::take_while](take_while_view.html "cpp/ranges/take while view")  
[common_viewviews::common](common_view.html "cpp/ranges/common view")  
[views::counted](counted_view.html "cpp/ranges/view counted")  
[to_input_viewviews::to_input](to_input_view.html "cpp/ranges/to input view")(C++26)(C++26)  
  
| [ref_view](ref_view.html "cpp/ranges/ref view")  
---  
[drop_viewviews::drop](drop_view.html "cpp/ranges/drop view")  
[drop_while_viewviews::drop_while](drop_while_view.html "cpp/ranges/drop while view")  
[lazy_split_viewviews::lazy_split](lazy_split_view.html "cpp/ranges/lazy split view")  
[split_viewviews::split](split_view.html "cpp/ranges/split view")  
[join_viewviews::join](join_view.html "cpp/ranges/join view")  
[join_with_viewviews::join_with](join_with_view.html "cpp/ranges/join with view")(C++23)(C++23)` `  
[concat_viewviews::concat](concat_view.html "cpp/ranges/concat view")(C++26)(C++26)  
[cache_latest_viewviews::cache_latest](cache_latest_view.html "cpp/ranges/cache latest view")(C++26)(C++26)` `  
  
| [owning_view](owning_view.html "cpp/ranges/owning view")  
---  
[reverse_viewviews::reverse](reverse_view.html "cpp/ranges/reverse view")  
[as_const_viewviews::as_const](as_const_view.html "cpp/ranges/as const view")(C++23)(C++23)  
[elements_viewviews::elements](elements_view.html "cpp/ranges/elements view")  
[keys_viewviews::keys](keys_view.html "cpp/ranges/keys view")  
[values_viewviews::values](values_view.html "cpp/ranges/values view")  
[enumerate_viewviews::enumerate](enumerate_view.html "cpp/ranges/enumerate view")(C++23)(C++23)  
[zip_viewviews::zip](zip_view.html "cpp/ranges/zip view")(C++23)(C++23)  
[zip_transform_viewviews::zip_transform](zip_transform_view.html "cpp/ranges/zip transform view")(C++23)(C++23)` `  
  
| [adjacent_viewviews::adjacent](adjacent_view.html "cpp/ranges/adjacent view")(C++23)(C++23)  
---  
[views::pairwise](adjacent_view.html "cpp/ranges/adjacent view")(C++23)  
[adjacent_transform_viewviews::adjacent_transform](adjacent_transform_view.html "cpp/ranges/adjacent transform view")(C++23)(C++23)  
[views::pairwise_transform](adjacent_transform_view.html "cpp/ranges/adjacent transform view")(C++23)  
[chunk_viewviews::chunk](chunk_view.html "cpp/ranges/chunk view")(C++23)(C++23)  
[slide_viewviews::slide](slide_view.html "cpp/ranges/slide view")(C++23)(C++23)  
[chunk_by_viewviews::chunk_by](chunk_by_view.html "cpp/ranges/chunk by view")(C++23)(C++23)  
[stride_viewviews::stride](stride_view.html "cpp/ranges/stride view")(C++23)(C++23)  
[cartesian_product_viewviews::cartesian_product](cartesian_product_view.html "cpp/ranges/cartesian product view")(C++23)(C++23)  
  
  
  
| [Range generators](../ranges.html#Range_generators "cpp/ranges")  
---  
[std::generator](../coroutine/generator.html "cpp/coroutine/generator")(C++23)` `  
  
| [Range adaptor closure objects](../ranges.html#Range_adaptor_closure_objects "cpp/ranges")  
---  
[range_adaptor_closure](range_adaptor_closure.html "cpp/ranges/range adaptor closure")(C++23)` `  
  
| [Range adaptor objects](../ranges.html#Range_adaptor_objects "cpp/ranges")  
---  
  
  
  
[Helper items](../ranges.html#Helper_items "cpp/ranges")  
---  
| [_copyable-box_  
 _movable-box_](copyable_wrapper.html "cpp/ranges/copyable wrapper")(until C++23)` `(C++23)  
---  
  
| [_simple-view_](../ranges.html#Helper_concepts "cpp/ranges")  
---  
[_non-propagating-cache_](non-propagating-cache.html "cpp/ranges/non-propagating-cache")  
  
|   
  
---  
  
  
  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/ranges/navbar_content&action=edit)

Defined in header `[<ranges>](../header/ranges.html "cpp/header/ranges")` |  |   
---|---|---  
template< class C, [ranges::input_range](input_range.html) R, class... Args >  
requires (![ranges::view](view.html)<C>)  
constexpr C to( R&& r, Args&&... args ); |  (1) | (since C++23)  
template< template< class... > class C,  
[ranges::input_range](input_range.html) R, class... Args >  
constexpr auto to( R&& r, Args&&... args ); |  (2)  |  (since C++23)  
template< class C, class... Args >  
requires (![ranges::view](view.html)<C>)  
constexpr /*range adaptor closure*/ to( Args&&... args ); |  (3) | (since C++23)  
template< template< class... > class C, class... Args >  
constexpr /*range adaptor closure*/ to( Args&&... args ); |  (4)  |  (since C++23)  
Helper templates |  |   
template< class Container >  
constexpr bool /*reservable-container*/ =  
[ranges::sized_range](sized_range.html)<Container> &&  
requires (Container& c, [ranges::range_size_t](range_size_t.html)<Container> n)  
{  
c.reserve(n);  
{ c.capacity() } -> [std::same_as](../concepts/same_as.html)<decltype(n)>;  
{ c.max_size() } -> [std::same_as](../concepts/same_as.html)<decltype(n)>;  
}; |  (5) | (exposition only*)  
template< class Container, class Reference >  
constexpr bool /*container-appendable*/ =  
requires (Container& c, Reference&& ref)  
{  
requires  
(  
requires { c.emplace_back([std::forward](../utility/forward.html)<Reference>(ref)); } ||  
requires { c.push_back([std::forward](../utility/forward.html)<Reference>(ref)); } ||  
requires { c.emplace(c.end(), [std::forward](../utility/forward.html)<Reference>(ref)); } ||  
requires { c.insert(c.end(), [std::forward](../utility/forward.html)<Reference>(ref)); }  
);  
}; |  (6) | (exposition only*)  
template< class Reference, class C >  
constexpr auto /*container-appender*/( C& c ); |  (7) | (exposition only*)  
template< class R, class T >  
concept /*container-compatible-range*/ =  
[ranges::input_range](input_range.html)<R> &&  
[std::convertible_to](../concepts/convertible_to.html)<[ranges::range_reference_t](range_reference_t.html)<R>, T>; |  (8) | (exposition only*)  
| |   
  
The overloads of the range conversion function construct a new non-view object from a source range as its first argument by calling a constructor taking a range, a `std::from_range_t` tagged ranged constructor, a constructor taking an iterator-sentinel pair, or by back inserting each element of the source range into the arguments-constructed object. 

1) Constructs an object of type `C` from the elements of r in the following:

a) If `C` does not satisfy [`input_range`](input_range.html "cpp/ranges/input range") or [std::convertible_to](../concepts/convertible_to.html)<[ranges::range_reference_t](range_reference_t.html)<R>, [ranges::range_value_t](range_size_t.html)<C>> is true:

1) Constructing a non-view object as if [direct-initializing](../language/direct_initialization.html "cpp/language/direct initialization") (but not direct-list-initializing) an object of type `C` from the source range [std::forward](../utility/forward.html)<R>(r) and the rest of the functional arguments [std::forward](../utility/forward.html)<Args>(args)... if [std::constructible_from](../concepts/constructible_from.html)<C, R, Args...> is true.

2) Otherwise, constructing a non-view object as if [direct-initializing](../language/direct_initialization.html "cpp/language/direct initialization") (but not direct-list-initializing) an object of type `C` from additional disambiguation tag [std::from_range](from_range.html), the source range [std::forward](../utility/forward.html)<R>(r) and the rest of the functional arguments [std::forward](../utility/forward.html)<Args>(args)... if [std::constructible_from](../concepts/constructible_from.html)<C, [std::from_range_t](from_range.html), R, Args...> is true.

3) Otherwise, constructing a non-view object as if [direct-initializing](../language/direct_initialization.html "cpp/language/direct initialization") (but not direct-list-initializing) an object of type `C` from the iterator-sentinel pair ([ranges::begin](begin.html)(r) as an iterator and [ranges::end](end.html)(r) as sentinel, where iterator and sentinel have the same type. In other words, the source range must be a common range), and the rest of function arguments [std::forward](../utility/forward.html)<Args>(args)... if all of the conditions below are true: 

  * [ranges::common_range](common_range.html)<R>
  * If [std::iterator_traits](../iterator/iterator_traits.html)<[ranges::iterator_t](iterator_t.html)<R>>::iterator_category is valid and denotes a type that satisfies [std::derived_from](../concepts/derived_from.html)<[std::input_iterator_tag](../iterator/iterator_tags.html)>
  * [std::constructible_from](../concepts/constructible_from.html)<C, [ranges::iterator_t](iterator_t.html)<R>, [ranges::sentinel_t](iterator_t.html)<R>, Args...>



4) Otherwise, constructing a non-view range object as if [direct-initializing](../language/direct_initialization.html "cpp/language/direct initialization") (but not direct-list-initializing) an object of type `C` from the rest of the function arguments [std::forward](../utility/forward.html)<Args>(args)... with the following equivalent call below after the construction: 

if constexpr ([ranges::sized_range](sized_range.html)<R> && /*reservable-container*/<C>)  
c.reserve(static_cast<[ranges::range_size_t](range_size_t.html)<C>>([ranges::size](size.html)(r)));  
[ranges::for_each](../algorithm/ranges/for_each.html)(r, /*container-appender*/(c)); | (until C++26)  
---|---  
if constexpr (ranges::approximately_sized_range<R>   
&& /*reservable-container*/<C>)  
c.reserve(static_cast<[ranges::range_size_t](range_size_t.html)<C>>(ranges::reserve_hint(r)));  
[ranges::for_each](../algorithm/ranges/for_each.html)(r, /*container-appender*/(c)); | (since C++26)  
  
If the `R` satisfies [`sized_range`](sized_range.html "cpp/ranges/sized range")(until C++26)[`approximately_sized_range`](approximately_sized_range.html "cpp/ranges/approximately sized range")(since C++26) and `C` satisfies `_[reservable-container](to.html#reservable-container)_`, the constructed object c of type `C` is able to reserve storage with the initial storage size [ranges::size](size.html)(r)(until C++26)ranges::reserve_hint(r)(since C++26) to prevent additional allocations during inserting new elements. Each element of r is appended to c. 

The operations above are valid if both of the conditions below are true: 

  * [std::constructible_from](../concepts/constructible_from.html)<C, Args...>
  * `_[container-appendable](to.html#container-appendable)_` <C, [ranges::range_reference_t](range_reference_t.html)<R>>



b) Otherwise, the return expression is equivalent to: 

to<C>([ranges::ref_view](ref_view.html)(r) | [views::transform](transform_view.html)([](auto&& elem)  
{  
return to<[ranges::range_value_t](range_size_t.html)<C>>([std::forward](../utility/forward.html)<decltype(elem)>(elem));  
}), [std::forward](../utility/forward.html)<Args>(args)...)  
Which allows nested range constructions within the range if [ranges::input_range](input_range.html)<[ranges::range_reference_t](range_reference_t.html)<C>> is true. 

Otherwise, the program is ill-formed.

2) Constructs an object of deduced type from the elements of r. 

Let /*input-iterator*/ be an exposition only type that satisfies [LegacyInputIterator](../named_req/InputIterator.html "cpp/named req/InputIterator"): 

struct /*input-iterator*/  
{  
using iterator_category = [std::input_iterator_tag](../iterator/iterator_tags.html);  
using value_type = [ranges::range_value_t](range_size_t.html)<R>;  
using difference_type = [std::ptrdiff_t](../types/ptrdiff_t.html);  
using pointer = [std::add_pointer_t](../types/add_pointer.html)<[ranges::range_reference_t](range_reference_t.html)<R>>;  
using reference = [ranges::range_reference_t](range_reference_t.html)<R>;  
reference operator*() const; // not defined  
pointer operator->() const; // not defined  
/*input-iterator*/& operator++(); // not defined  
/*input-iterator*/ operator++(int); // not defined  
bool operator==(const /*input-iterator*/&) const; // not defined  
}; |  | (exposition only*)  
---|---|---  
| |   
  
Let /*DEDUCE-EXPR*/ be defined as follows: 

  * C([std::declval](../utility/declval.html)<R>(), [std::declval](../utility/declval.html)<Args>()...), if that expression is valid. 
  * Otherwise, C([std::from_range](from_range.html), [std::declval](../utility/declval.html)<R>(),  
[std::declval](../utility/declval.html)<Args>()...), if that expression is valid. 
  * Otherwise, C([std::declval](../utility/declval.html)</*input-iterator*/>(),  
[std::declval](../utility/declval.html)</*input-iterator*/>(),  
[std::declval](../utility/declval.html)<Args>()...), if that expression is valid. 
  * Otherwise, the program is ill-formed. 

The call is equivalent to to<decltype(/*DEDUCE-EXPR*/)>  
([std::forward](../utility/forward.html)<R>(r), [std::forward](../utility/forward.html)<Args>(args)...).

3,4) Returns a perfect forwarding call wrapper that is also a [RangeAdaptorClosureObject](../named_req/RangeAdaptorClosureObject.html "cpp/named req/RangeAdaptorClosureObject").

5) Is true if it satisfies [ranges::sized_range](sized_range.html) and is eligible to be reservable.

6) Is true if one element of type `Reference` can be appended to `Container` through a member function call `emplace_back`, `push_back`, `emplace` or `insert`.

7) Returns a function object where a call to the returned function object is expression-equivalent to appending one element to a container. The return expression is equivalent to: 

return [&c]<class Reference>(Reference&& ref)  
{  
if constexpr (requires { c.emplace_back([std::declval](../utility/declval.html)<Reference>()); })  
c.emplace_back([std::forward](../utility/forward.html)<Reference>(ref));  
else if constexpr (requires { c.push_back([std::declval](../utility/declval.html)<Reference>()); })  
c.push_back([std::forward](../utility/forward.html)<Reference>(ref));  
else if constexpr (requires { c.emplace(c.end(),  
[std::declval](../utility/declval.html)<Reference>()); })  
c.emplace(c.end(), [std::forward](../utility/forward.html)<Reference>(ref));  
else  
c.insert(c.end(), [std::forward](../utility/forward.html)<Reference>(ref));  
};

8) Is used in the definition of containers in constructing an input range `R` whose range reference type must be convertible to `T`.

## Contents

  * [1 Parameters](to.html#Parameters)
  * [2 Return value](to.html#Return_value)
  * [3 ranges::to return type](to.html#ranges::to_return_type)
    * [3.1 Member objects](to.html#Member_objects)
    * [3.2 Constructors](to.html#Constructors)
    * [3.3 Member function operator()](to.html#Member_function_operator.28.29)
    * [3.4 Exceptions](to.html#Exceptions)
    * [3.5 Notes](to.html#Notes)
    * [3.6 Example](to.html#Example)
    * [3.7 Defect reports](to.html#Defect_reports)
    * [3.8 References](to.html#References)

  
---  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/ranges/to&action=edit&section=1 "Edit section: Parameters")] Parameters

r  |  \-  |  a source range object   
---|---|---  
args  |  \-  |  list of the arguments to ([1,2](to.html#Version_1)) construct a range or ([3,4](to.html#Version_3)) bind to the last parameters of range adaptor closure object   
Type requirements   
-`C` must be cv-unqualified class type ([1,3](to.html#Version_1))  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/ranges/to&action=edit&section=2 "Edit section: Return value")] Return value

1,2) A constructed non-view object.

3,4) A range adaptor closure object of unspecified type, with the following properties: 

##  ranges::to return type

####  Member objects

The returned object behaves as if it has no target object, and an [std::tuple](../utility/tuple.html "cpp/utility/tuple") object tup constructed with [std::tuple](../utility/tuple.html)<[std::decay_t](../types/decay.html)<Args>...>([std::forward](../utility/forward.html)<Args>(args)...), except that the returned object's assignment behavior is unspecified and the names are for exposition only. 

####  Constructors

The return type of `ranges::to` ([3,4](to.html#Version_3)) behaves as if its copy/move constructors perform a memberwise copy/move. It is [CopyConstructible](../named_req/CopyConstructible.html "cpp/named req/CopyConstructible") if all of its member objects (specified above) are CopyConstructible, and is [MoveConstructible](../named_req/MoveConstructible.html "cpp/named req/MoveConstructible") otherwise. 

####  Member function `operator()`

Given an object `G` obtained from an earlier call to range::to</* see below */>(args...), when a glvalue g designating `G` is invoked in a function call expression g(r), an invocation of the stored object takes place, as if by 

  * ranges::to</* see below */>(r, std::get<Ns>(g.tup)...), where 



    

  * r is a source range object that must satisfy [`input_range`](input_range.html "cpp/ranges/input range"). 
  * Ns is an integer pack 0, 1, ..., (sizeof...(Args) - 1). 
  * g is an lvalue in the call expression if it is an lvalue in the call expression, and is an rvalue otherwise. Thus std::move(g)(r) can move the bound arguments into the call, where g(r) would copy. 
  * The specified template argument is ([3](to.html#Version_3)) `C` or ([4](to.html#Version_4)) the deduced type from a class template `C` that must not satisfy [`view`](view.html "cpp/ranges/view"). 



The program is ill-formed if g has volatile-qualified type. 

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/ranges/to&action=edit&section=6 "Edit section: Exceptions")] Exceptions

Only throws if construction of a non-view object throws. 

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/ranges/to&action=edit&section=7 "Edit section: Notes")] Notes

The insertion of elements into the container may involve copy which can be less efficient than move because lvalue references are produced during the indirection call. Users can opt-in to use [views::as_rvalue](as_rvalue_view.html) to adapt the range in order for their elements to always produce an rvalue reference during the indirection call which implies move. 

The parentheses are mandatory when using the pipe syntax. 
    
    
    auto vec = r | std::ranges::to<[std::vector](../container/vector.html)>;   // Error
    auto vec = r | std::ranges::to<[std::vector](../container/vector.html)>(); // OK

[Feature-test](../utility/feature_test.html "cpp/utility/feature test") macro  | Value | Std | Feature   
---|---|---|---  
[`__cpp_lib_ranges_to_container`](../experimental/feature_test.html#cpp_lib_ranges_to_container "cpp/feature test") | [`202202L`](../compiler_support/23.html#cpp_lib_ranges_to_container_202202L "cpp/compiler support/23") | (C++23) | `std::ranges::to`  
[`__cpp_lib_ranges_reserve_hint`](../experimental/feature_test.html#cpp_lib_ranges_reserve_hint "cpp/feature test") | [`202502L`](../compiler_support/26.html#cpp_lib_ranges_reserve_hint_202502L "cpp/compiler support/26") | (C++26) | ranges::approximately_sized_range, ranges::reserve_hint, and [changes](to.html#reserve_hint) to `std::ranges::to`  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/ranges/to&action=edit&section=8 "Edit section: Example")] Example

A preview link: [Compiler Explorer](https://godbolt.org/z/s4E3n8ed5)

Run this code
    
    
    #include <boost/container/devector.hpp>
    #include <concepts>
    #include <initializer_list>
    #include <list>
    #include <print>
    #include <ranges>
    #include <regex>
    #include <string>
    #include <vector>
     
    #ifndef __cpp_lib_format_ranges
    #include <format>
    #include <sstream>
     
    auto print_aid(const auto& v)
    {
        [std::ostringstream](../io/basic_ostringstream.html) out;
        out << '[';
        for (int n{}; const auto& e : v)
            out << (n++ ? ", " : "") << e;
        out << ']';
        return out;
    }
     
    template<typename T>
    struct [std::formatter](../utility/format/formatter.html)<[std::vector](../container/vector.html)<T>, char>
    {
        template<class ParseContext>
        constexpr ParseContext::iterator parse(ParseContext& ctx)
        {
            return ctx.begin();
        }
     
        template<class FmtContext>
        FmtContext::iterator format(auto const& s, FmtContext& ctx) const
        {
            auto out{print_aid(s)};
            return std::[ranges::copy](http://en.cppreference.com/w/cpp/ranges-algorithm-placeholder/copy)(std::move(out).str(), ctx.out()).out;
        }
    };
     
    template<typename T>
    struct [std::formatter](../utility/format/formatter.html)<[std::list](../container/list.html)<T>, char>
    {
        template<class ParseContext>
        constexpr ParseContext::iterator parse(ParseContext& ctx)
        {
            return ctx.begin();
        }
     
        template<class FmtContext>
        FmtContext::iterator format(auto const& s, FmtContext& ctx) const
        {
            auto out{print_aid(s)};
            return std::[ranges::copy](http://en.cppreference.com/w/cpp/ranges-algorithm-placeholder/copy)(std::move(out).str(), ctx.out()).out;
        }
    };
    #endif
     
    int main()
    {
        auto vec = std::[views::iota](iota_view.html)(1, 5)
                 | std::[views::transform](transform_view.html)([](int v){ return v * 2; })
                 | std::ranges::to<[std::vector](../container/vector.html)>();
     
        static_assert([std::same_as](../concepts/same_as.html)<decltype(vec), [std::vector](../container/vector.html)<int>>);
        [std::println](../io/println.html)("{}", vec);
     
        auto list = vec | std::[views::take](take_view.html)(3) | std::ranges::to<[std::list](../container/list.html)<double>>();
        [std::println](../io/println.html)("{}", list);
    }
     
    void ctor_demos()
    {
        // 1.a.1) Direct init
        {
            char array[]{'a', 'b', '\0', 'c'};
     
            // Argument type is convertible to result value type:
            auto str_to = std::ranges::to<[std::string](../string/basic_string.html)>(array);
            // Equivalent to
            [std::string](../string/basic_string.html) str(array);
     
            // Result type is not an input range:
            auto re_to = std::ranges::to<[std::regex](../regex/basic_regex.html)>(array);
            // Equivalent to
            [std::regex](../regex/basic_regex.html) re(array);
        }
     
        // 1.a.2) from_range ctor
        {
            auto list = {'a', 'b', '\0', 'c'};
     
            // Argument type is convertible to result value type:
            auto str_to = std::ranges::to<[std::string](../string/basic_string.html)>(list);
            // Equivalent to
            // std::string str(std::from_range, list);
     
            // Result type is not an input range:
            [[maybe_unused]]
            auto pair_to = std::ranges::to<[std::pair](../utility/pair.html)<[std::from_range_t](from_range.html), bool>>(true);
            // Equivalent to
            [std::pair](../utility/pair.html)<[std::from_range_t](from_range.html), bool> pair([std::from_range](from_range.html), true);
        }
     
        // 1.a.3) iterator pair ctor
        {
            auto list = {'a', 'b', '\0', 'c'};
     
            // Argument type is convertible to result value type:
            auto devector_to = std::ranges::to<boost::container::devector<char>>(list);
            // Equivalent to
            boost::container::devector<char> devector(std::[ranges::begin](begin.html)(list),
                                                      std::[ranges::end](end.html)(list));
     
            // Result type is not an input range:
            [std::regex](../regex/basic_regex.html) re;
            auto it_to = std::ranges::to<[std::cregex_iterator](../regex/regex_iterator.html)>(list, re);
            // Equivalent to
            [std::cregex_iterator](../regex/regex_iterator.html) it(std::[ranges::begin](begin.html)(list), std::[ranges::end](end.html)(list), re);
        }
    }

Output: 
    
    
    [2, 4, 6, 8]
    [2, 4, 6]

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/ranges/to&action=edit&section=9 "Edit section: Defect reports")] Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 3984](https://cplusplus.github.io/LWG/issue3984) | C++23  | the nested construction branch of `ranges::to` resulted to  
program ill-formed if `R&` does not model [`viewable_range`](viewable_range.html "cpp/ranges/viewable range") | made well-formed   
[LWG 4016](https://cplusplus.github.io/LWG/issue4016) | C++23  | the container insertion branch of  
`ranges::to` involved use of insert iterators  | replaced with direct appending  
of elements to container   
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/ranges/to&action=edit&section=10 "Edit section: References")] References

  * C++23 standard (ISO/IEC 14882:2024): 



    

  * 26.5.7 Range conversions [range.utility.conv] 


  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
