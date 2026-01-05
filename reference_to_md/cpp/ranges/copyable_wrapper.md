
  


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
| **_copyable-box_  
 _movable-box_**(until C++23)` `(C++23)  
---  
  
| [_simple-view_](../ranges.html#Helper_concepts "cpp/ranges")  
---  
[_non-propagating-cache_](non-propagating-cache.html "cpp/ranges/non-propagating-cache")  
  
|   
  
---  
  
  
  


template< class T >  
requires [std::copy_constructible](../concepts/copy_constructible.html)<T> && [std::is_object_v](../types/is_object.html)<T>  
class /*copyable-box*/; |  | (since C++20)   
(until C++23)   
(exposition only*)  
---|---|---  
template< class T >  
requires [std::move_constructible](../concepts/move_constructible.html)<T> && [std::is_object_v](../types/is_object.html)<T>  
class /*movable-box*/; |  |  (since C++23)   
(exposition only*)  
| |   
  
[`ranges::single_view`](single_view.html "cpp/ranges/single view"), [`ranges::repeat_view`](repeat_view.html "cpp/ranges/repeat view"),(since C++23) and range adaptors that store an invocable object are specified in terms of an exposition-only class template `_copyable-box_`(until C++23)`_movable-box_`(since C++23). The name shown here is for exposition purposes only. 

The wrapper behaves exactly like [std::optional](../utility/optional.html)<T>, except that the default constructor, copy assignment operator, and move assignment operator are (conditionally) different from those of [std::optional](../utility/optional.html "cpp/utility/optional"), which augments `T` with assignability when needed and makes it always satisfy [`copyable`](../concepts/copyable.html "cpp/concepts/copyable")or [`movable`](../concepts/movable.html "cpp/concepts/movable")(since C++23). 

If `T` is already [`copyable`](../concepts/copyable.html "cpp/concepts/copyable"), or both [std::is_nothrow_move_constructible_v](../types/is_move_constructible.html)<T> and [std::is_nothrow_copy_constructible_v](../types/is_copy_constructible.html)<T> are true, /*copyable-box*/<T> may store only a `T` object, because it always contains a value.  | (until C++23)  
---|---  
If `T`

  * is already [`copyable`](../concepts/copyable.html "cpp/concepts/copyable"), or 
  * is [`copy_constructible`](../concepts/copy_constructible.html "cpp/concepts/copy constructible") and both [std::is_nothrow_move_constructible_v](../types/is_move_constructible.html)<T> and [std::is_nothrow_copy_constructible_v](../types/is_copy_constructible.html)<T> are true, or 
  * does not satisfy [`copy_constructible`](../concepts/copy_constructible.html "cpp/concepts/copy constructible") but satisfies [`movable`](../concepts/movable.html "cpp/concepts/movable"), or 
  * does not satisfy [`copy_constructible`](../concepts/copy_constructible.html "cpp/concepts/copy constructible") but [std::is_nothrow_move_constructible_v](../types/is_move_constructible.html)<T> is true, 

/*movable-box*/<T> may store only a `T` object, because it always contains a value.  | (since C++23)  
  
## Contents

  * [1 Template parameters](copyable_wrapper.html#Template_parameters)
  * [2 Member functions](copyable_wrapper.html#Member_functions)
  * [3 Default constructor](copyable_wrapper.html#Default_constructor)
  * [4 Assignment operators](copyable_wrapper.html#Assignment_operators)
  * [5 Members identical to std::optional](copyable_wrapper.html#Members_identical_to_std::optional)
    * [5.1 Member functions](copyable_wrapper.html#Member_functions_2)
      * [5.1.1 Observers](copyable_wrapper.html#Observers)
      * [5.1.2 Modifiers](copyable_wrapper.html#Modifiers)
    * [5.2 Notes](copyable_wrapper.html#Notes)
    * [5.3 Defect reports](copyable_wrapper.html#Defect_reports)
    * [5.4 See also](copyable_wrapper.html#See_also)

  
---  
  
### Template parameters

T  |  \-  |  the type of the contained value, must be an object type that models [`copy_constructible`](../concepts/copy_constructible.html "cpp/concepts/copy constructible")(until C++23)[`move_constructible`](../concepts/move_constructible.html "cpp/concepts/move constructible")(since C++23)  
---|---|---  
  
### Member functions

##  Default constructor

constexpr /*copyable-box*/() noexcept([std::is_nothrow_default_constructible_v](../types/is_default_constructible.html)<T>)  
requires [std::default_initializable](../concepts/default_initializable.html)<T>  
: /*copyable-box*/([std::in_place](../utility/in_place.html)) { } |  | (since C++20)   
(until C++23)  
---|---|---  
constexpr /*movable-box*/() noexcept([std::is_nothrow_default_constructible_v](../types/is_default_constructible.html)<T>)  
requires [std::default_initializable](../concepts/default_initializable.html)<T>  
: /*movable-box*/([std::in_place](../utility/in_place.html)) { } |  |  (since C++23)  
| |   
  
The default constructor is provided if and only if `T` models [`default_initializable`](../concepts/default_initializable.html "cpp/concepts/default initializable"). 

A default-constructed wrapper contains a value-initialized `T` object. 

##  Assignment operators

| (1) |   
---|---|---  
constexpr /*copyable-box*/& operator=(const /*copyable-box*/& other);  
noexcept(/* see below */); |  | (since C++20)   
(until C++23)  
constexpr /*movable-box*/& operator=(const /*movable-box*/& other);  
noexcept(/* see below */) requires [std::copy_constructible](../concepts/copy_constructible.html)<T>; |  |  (since C++23)  
| (2) |   
constexpr /*copyable-box*/& operator=(/*copyable-box*/&& other)  
noexcept([std::is_nothrow_move_constructible_v](../types/is_move_constructible.html)<T>); |  | (since C++20)   
(until C++23)  
constexpr /*movable-box*/& operator=(/*movable-box*/&& other)  
noexcept([std::is_nothrow_move_constructible_v](../types/is_move_constructible.html)<T>); |  |  (since C++23)  
| |   
  
1) If [std::copyable](../concepts/copyable.html)<T> is not modeled, the copy assignment operator is equivalently defined as:  constexpr /*copyable-box*/& operator=(const /*copyable-box*/& other)  
noexcept([std::is_nothrow_copy_constructible_v](../types/is_copy_constructible.html)<T>)  
{  
if (this != [std::addressof](../memory/addressof.html)(other))  
if (other)  
emplace(*other);  
else  
reset();  
  
return *this;  
} | (until C++23)  
---|---  
constexpr /*movable-box*/& operator=(const /*movable-box*/& other)  
noexcept([std::is_nothrow_copy_constructible_v](../types/is_copy_constructible.html)<T>)  
requires [std::copy_constructible](../concepts/copy_constructible.html)<T>  
{  
if (this != [std::addressof](../memory/addressof.html)(other))  
if (other)  
emplace(*other);  
else  
reset();  
  
return *this;  
} | (since C++23)  
Otherwise, it is identical to [the copy assignment operator of `std::optional`](../utility/optional/operator=.html "cpp/utility/optional/operator=").

2) If [std::movable](../concepts/movable.html)<T> is not modeled, the move assignment operator is equivalently defined as:  constexpr /*copyable-box*/& operator=(/*copyable-box*/&& other)  
noexcept([std::is_nothrow_move_constructible_v](../types/is_move_constructible.html)<T>)  
{  
if (this != [std::addressof](../memory/addressof.html)(other))  
if (other)  
emplace(std::move(*other));  
else  
reset();  
  
return *this;  
} | (until C++23)  
---|---  
constexpr /*movable-box*/& operator=(/*movable-box*/&& other)  
noexcept([std::is_nothrow_move_constructible_v](../types/is_move_constructible.html)<T>)  
{  
if (this != [std::addressof](../memory/addressof.html)(other))  
if (other)  
emplace(std::move(*other));  
else  
reset();  
  
return *this;  
} | (since C++23)  
Otherwise, it is identical to [the move assignment operator of `std::optional`](../utility/optional/operator=.html "cpp/utility/optional/operator=").

##  Members identical to std::optional 

###  Member functions

[ (constructor)](../utility/optional/optional.html "cpp/utility/optional/optional") |  constructs the `optional` object   
(public member function of `std::optional<T>`)   
---|---  
[ (destructor)](../utility/optional/~optional.html "cpp/utility/optional/~optional") |  destroys the contained value, if there is one   
(public member function of `std::optional<T>`)   
[ operator=](../utility/optional/operator=.html "cpp/utility/optional/operator=") |  assigns contents   
(public member function of `std::optional<T>`)   
  
#####  Observers   
  
[ operator->operator*](../utility/optional/operator*.html "cpp/utility/optional/operator*") |  accesses the contained value   
(public member function of `std::optional<T>`)   
[ operator boolhas_value](../utility/optional/operator_bool.html "cpp/utility/optional/operator bool") |  checks whether the object contains a value   
(public member function of `std::optional<T>`)   
  
#####  Modifiers   
  
[ reset](../utility/optional/reset.html "cpp/utility/optional/reset") |  destroys any contained value   
(public member function of `std::optional<T>`)   
[ emplace](../utility/optional/emplace.html "cpp/utility/optional/emplace") |  constructs the contained value in-place   
(public member function of `std::optional<T>`)   
  
### Notes

A `_copyable-box_`(until C++23)`_movable-box_`(since C++23) does not contain a value only if 

  * `T` does not model [`movable`](../concepts/movable.html "cpp/concepts/movable") or [`copyable`](../concepts/copyable.html "cpp/concepts/copyable"), and an exception is thrown on move assignment or copy assignment respectively, or 
  * it is initialized/assigned from another valueless wrapper. 



Before [P2325R3](https://wg21.link/P2325R3), the wrapper was called `_semiregular-box_` in the standard and always satisfied [`semiregular`](../concepts/semiregular.html "cpp/concepts/semiregular"), as the default constructor was always provided (which might construct a valueless wrapper). 

[Feature-test](../utility/feature_test.html "cpp/utility/feature test") macro  | Value | Std | Feature   
---|---|---|---  
[`__cpp_lib_ranges`](../experimental/feature_test.html#cpp_lib_ranges "cpp/feature test") | [`201911L`](../compiler_support/20.html#cpp_lib_ranges_201911L "cpp/compiler support/20") | (C++20) | [Ranges library](../ranges.html "cpp/ranges") and [constrained algorithms](../algorithm/ranges.html "cpp/algorithm/ranges")  
[`202106L`](../compiler_support/20.html#cpp_lib_ranges_202106L "cpp/compiler support/20") | (C++20)  
(DR) | Non-[default-initializable](../concepts/default_initializable.html "cpp/concepts/default initializable") [views](view.html "cpp/ranges/view")  
[`202207L`](../compiler_support/23.html#cpp_lib_ranges_202207L "cpp/compiler support/23") | (C++23) | Relaxing [range adaptors](../ranges.html#Range_adaptors "cpp/ranges") to allow for move-only types   
  
### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[P2325R3](https://wg21.link/P2325R3) | C++20  | if `T` is not [`default_initializable`](../concepts/default_initializable.html "cpp/concepts/default initializable"), the default constructor  
constructs a wrapper which does not contain a value  | the wrapper is also  
not [`default_initializable`](../concepts/default_initializable.html "cpp/concepts/default initializable")  
[LWG 3572](https://cplusplus.github.io/LWG/issue3572) | C++20  | conditionally different assignment operators were not constexpr  | made constexpr   
  
### See also

[ ranges::single_viewviews::single](single_view.html "cpp/ranges/single view")(C++20) |  a [`view`](view.html "cpp/ranges/view") that contains a single element of a specified value  
(class template) (customization point object)  
---|---  
[ ranges::repeat_viewviews::repeat](repeat_view.html "cpp/ranges/repeat view")(C++23) |  a [`view`](view.html "cpp/ranges/view") consisting of a generated sequence by repeatedly producing the same value  
(class template) (customization point object)  
[ ranges::filter_viewviews::filter](filter_view.html "cpp/ranges/filter view")(C++20) |  a [`view`](view.html "cpp/ranges/view") that consists of the elements of a [`range`](range.html "cpp/ranges/range") that satisfies a predicate  
(class template) (range adaptor object)  
[ ranges::transform_viewviews::transform](transform_view.html "cpp/ranges/transform view")(C++20) |  a [`view`](view.html "cpp/ranges/view") of a sequence that applies a transformation function to each element  
(class template) (range adaptor object)  
[ ranges::take_while_viewviews::take_while](take_while_view.html "cpp/ranges/take while view")(C++20) |  a [`view`](view.html "cpp/ranges/view") consisting of the initial elements of another [`view`](view.html "cpp/ranges/view"), until the first element on which a predicate returns false  
(class template) (range adaptor object)  
[ ranges::drop_while_viewviews::drop_while](drop_while_view.html "cpp/ranges/drop while view")(C++20) |  a [`view`](view.html "cpp/ranges/view") consisting of the elements of another [`view`](view.html "cpp/ranges/view"), skipping the initial subsequence of elements until the first element where the predicate returns false  
(class template) (range adaptor object)  
[ ranges::zip_transform_viewviews::zip_transform](zip_transform_view.html "cpp/ranges/zip transform view")(C++23) |  a [`view`](view.html "cpp/ranges/view") consisting of results of application of a transformation function to corresponding elements of the adapted views  
(class template) (customization point object)  
[ ranges::adjacent_transform_viewviews::adjacent_transform](adjacent_transform_view.html "cpp/ranges/adjacent transform view")(C++23) |  a [`view`](view.html "cpp/ranges/view") consisting of results of application of a transformation function to adjacent elements of the adapted view  
(class template) (range adaptor object)
  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
