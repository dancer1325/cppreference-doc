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
[to](to.html "cpp/ranges/to")(C++23)  
  
  
  
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
**_non-propagating-cache_**  
  
|   
  
---  
  
  
  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/ranges/navbar_content&action=edit)

template< class T >  
requires [std::is_object_v](../types/is_object.html)<T>  
class /*non-propagating-cache*/; |  |  (since C++20)   
(exposition only*)  
---|---|---  
| |   
  
Some range adaptors such as [`ranges::join_view`](join_view.html "cpp/ranges/join view") and [`ranges::lazy_split_view`](lazy_split_view.html "cpp/ranges/lazy split view") conditionally store value (e.g. an iterator) which is specified in terms of an exposition-only class template `_non-propagating-cache_`. 

The wrapper behaves exactly like [std::optional](../utility/optional.html)<T>, except that: 

  * it does not copy the value of the source when it is copy constructed or assigned to, 
  * it resets the value of the source when it is moved-from, 
  * it resets its value when it is assigned from, and 
  * it additionally provides a member function template to enable an input view to temporarily cache values as it is iterated over. 



The wrapper encapsulates a cache containing a value. Clearing cache is an operation equivalent to resetting a contained value. Such operation is performed when copying or moving a wrapper. 

## Contents

  * [1 Template parameters](non-propagating-cache.html#Template_parameters)
  * [2 Member functions](non-propagating-cache.html#Member_functions)
  * [3 Copy and move constructors](non-propagating-cache.html#Copy_and_move_constructors)
  * [4 Copy and move assignment operators](non-propagating-cache.html#Copy_and_move_assignment_operators)
  * [5 _non-propagating-cache_ <T>::_emplace-deref_](non-propagating-cache.html#non-propagating-cache.3CT.3E::emplace-deref)
  * [6 Members identical to std::optional](non-propagating-cache.html#Members_identical_to_std::optional)
    * [6.1 Member functions](non-propagating-cache.html#Member_functions_2)
      * [6.1.1 Observers](non-propagating-cache.html#Observers)
      * [6.1.2 Modifiers](non-propagating-cache.html#Modifiers)
    * [6.2 Notes](non-propagating-cache.html#Notes)
    * [6.3 See also](non-propagating-cache.html#See_also)

  
---  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/ranges/non-propagating-cache&action=edit&section=1 "Edit section: Template parameters")] Template parameters

T  |  \-  |  the type of the contained value, must be an object type   
---|---|---  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/ranges/non-propagating-cache&action=edit&section=2 "Edit section: Member functions")] Member functions

##  Copy and move constructors

constexpr /*non-propagating-cache*/  
( const /*non-propagating-cache*/& ) noexcept {} |  (1)  |  (since C++20)  
---|---|---  
constexpr /*non-propagating-cache*/  
( /*non-propagating-cache*/&& other ) noexcept { other.reset(); } |  (2)  |  (since C++20)  
| |   
  
1) The copy constructor has no effect.

2) The move constructor clears the cache of other.

##  Copy and move assignment operators

constexpr /*non-propagating-cache*/&  
operator=( const /*non-propagating-cache*/& other ) noexcept  
{   
if ([std::addressof](../memory/addressof.html)(other) != this)  
reset();  
return *this;  
} |  (1)  |  (since C++20)  
---|---|---  
constexpr /*non-propagating-cache*/&  
operator=( /*non-propagating-cache*/&& other ) noexcept  
{  
reset();  
other.reset();  
return *this;  
} |  (2)  |  (since C++20)  
| |   
  
1) The copy assignment operator clears the cache of *this.

2) The move assignment operator clears caches of both *this and other.

##  `_non-propagating-cache_ <T>::_emplace-deref_`

template< class I >  
constexpr T& /*emplace-deref*/( const I& i ); |  |  (since C++20)   
(exposition only*)  
---|---|---  
| |   
  
Initializes the contained value by [direct-initializing](../language/direct_initialization.html "cpp/language/direct initialization") (but not direct-list-initializing) with *i. If *this already contains a value before the call, reset() is called. 

Returns a reference to the new contained value. 

The program is ill-formed unless the declaration T t(*i); is well-formed for some invented variable t. If *i is a prvalue of possibly cv-qualified `T`, then it is not required to be movable. 

##  Members identical to std::optional 

###  Member functions

[ (constructor)](../utility/optional/optional.html "cpp/utility/optional/optional") |  constructs the `optional` object   
(public member function of `std::optional<T>`) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/utility/optional/dsc_constructor&action=edit)  
---|---  
[ (destructor)](../utility/optional/~optional.html "cpp/utility/optional/~optional") |  destroys the contained value, if there is one   
(public member function of `std::optional<T>`) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/utility/optional/dsc_destructor&action=edit)  
[ operator=](../utility/optional/operator=.html "cpp/utility/optional/operator=") |  assigns contents   
(public member function of `std::optional<T>`) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/utility/optional/dsc_operator%3D&action=edit)  
  
#####  Observers   
  
[ operator->operator*](../utility/optional/operator*.html "cpp/utility/optional/operator*") |  accesses the contained value   
(public member function of `std::optional<T>`) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/utility/optional/dsc_operator*&action=edit)  
[ operator boolhas_value](../utility/optional/operator_bool.html "cpp/utility/optional/operator bool") |  checks whether the object contains a value   
(public member function of `std::optional<T>`) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/utility/optional/dsc_operator_bool&action=edit)  
  
#####  Modifiers   
  
[ reset](../utility/optional/reset.html "cpp/utility/optional/reset") |  destroys any contained value   
(public member function of `std::optional<T>`) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/utility/optional/dsc_reset&action=edit)  
[ emplace](../utility/optional/emplace.html "cpp/utility/optional/emplace") |  constructs the contained value in-place   
(public member function of `std::optional<T>`) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/utility/optional/dsc_emplace&action=edit)  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/ranges/non-propagating-cache&action=edit&section=4 "Edit section: Notes")] Notes

`_non-propagating-cache_` is used in implementations to cache the result of begin() to provide an amortized constant time complexity of the method. 

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/ranges/non-propagating-cache&action=edit&section=5 "Edit section: See also")] See also

[ ranges::join_viewviews::join](join_view.html "cpp/ranges/join view")(C++20) |  a [`view`](view.html "cpp/ranges/view") consisting of the sequence obtained from flattening a [`view`](view.html "cpp/ranges/view") of [`range`s](range.html "cpp/ranges/range")  
(class template) (range adaptor object)[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/ranges/dsc_join_view&action=edit)  
---|---  
[ ranges::join_with_viewviews::join_with](join_with_view.html "cpp/ranges/join with view")(C++23) |  a [`view`](view.html "cpp/ranges/view") consisting of the sequence obtained from flattening a view of ranges, with the delimiter in between elements  
(class template) (range adaptor object)[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/ranges/dsc_join_with_view&action=edit)  
[ ranges::split_viewviews::split](split_view.html "cpp/ranges/split view")(C++20) |  a [`view`](view.html "cpp/ranges/view") over the subranges obtained from splitting another [`view`](view.html "cpp/ranges/view") using a delimiter  
(class template) (range adaptor object)[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/ranges/dsc_split_view&action=edit)  
[ ranges::lazy_split_viewviews::lazy_split](lazy_split_view.html "cpp/ranges/lazy split view")(C++20) |  a [`view`](view.html "cpp/ranges/view") over the subranges obtained from splitting another [`view`](view.html "cpp/ranges/view") using a delimiter  
(class template) (range adaptor object)[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/ranges/dsc_lazy_split_view&action=edit)  
[ ranges::chunk_viewviews::chunk](chunk_view.html "cpp/ranges/chunk view")(C++23) |  a range of [`view`s](view.html "cpp/ranges/view") that are `N`-sized non-overlapping successive chunks of the elements of another [`view`](view.html "cpp/ranges/view")  
(class template) (range adaptor object)[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/ranges/dsc_chunk_view&action=edit)
