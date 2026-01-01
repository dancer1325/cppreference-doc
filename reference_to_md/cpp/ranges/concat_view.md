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
**concat_view views::concat**(C++26)(C++26)  
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

**`std::ranges::concat_view`**

[Member functions](concat_view.html#Member_functions "cpp/ranges/concat view")  
---  
[concat_view::concat_view](concat_view/concat_view.html "cpp/ranges/concat view/concat view")  
[concat_view::begin](concat_view/begin.html "cpp/ranges/concat view/begin")  
[concat_view::end](concat_view/end.html "cpp/ranges/concat view/end")  
[concat_view::size](concat_view/size.html "cpp/ranges/concat view/size")  
[Deduction guides](concat_view/deduction_guides.html "cpp/ranges/concat view/deduction guides")  
[Iterator](concat_view/iterator.html "cpp/ranges/concat view/iterator")  
[Member functions](concat_view/iterator.html#Member_functions "cpp/ranges/concat view/iterator")  
[concat_view::_iterator_ ::_iterator_](concat_view/iterator/iterator.html "cpp/ranges/concat view/iterator/iterator")  
[concat_view::_iterator_ ::operator*](concat_view/iterator/operator*.html "cpp/ranges/concat view/iterator/operator*")  
[concat_view::_iterator_ ::operator[]](concat_view/iterator/operator_at.html "cpp/ranges/concat view/iterator/operator at")  
[concat_view::_iterator_ ::operator++  
concat_view::_iterator_ ::operator++(int)  
concat_view::_iterator_ ::operator--  
concat_view::_iterator_ ::operator--(int)  
concat_view::_iterator_ ::operator+=  
concat_view::_iterator_ ::operator-=](concat_view/iterator/operator_arith.html "cpp/ranges/concat view/iterator/operator arith")  
[concat_view::_iterator_ ::_satisfy_  
concat_view::_iterator_ ::_prev_  
concat_view::_iterator_ ::_advance-fwd_  
concat_view::_iterator_ ::_advance-bwd_](concat_view/iterator/helpers.html "cpp/ranges/concat view/iterator/helpers")  
[Non-member functions](concat_view/iterator.html#Non-member_functions "cpp/ranges/concat view/iterator")  
[operator==(concat_view::_iterator_)  
operator<(concat_view::_iterator_)  
operator>(concat_view::_iterator_)  
operator<=(concat_view::_iterator_)  
operator>=(concat_view::_iterator_)  
operator<=>(concat_view::_iterator_)](concat_view/iterator/operator_cmp.html "cpp/ranges/concat view/iterator/operator cmp")  
[operator+(concat_view::_iterator_)  
operator-(concat_view::_iterator_)](concat_view/iterator/operator_arith2.html "cpp/ranges/concat view/iterator/operator arith2")  
[iter_move(concat_view::_iterator_)](concat_view/iterator/iter_move.html "cpp/ranges/concat view/iterator/iter move")  
[iter_swap(concat_view::_iterator_)](concat_view/iterator/iter_swap.html "cpp/ranges/concat view/iterator/iter swap")  
  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/ranges/concat_view/navbar_content&action=edit)

Defined in header `[<ranges>](../header/ranges.html "cpp/header/ranges")` |  |   
---|---|---  
template< [ranges::input_range](input_range.html)... Views >  
requires ([ranges::view](view.html)<Views> && ...) && (sizeof...(Views) > 0) &&  
/*concatable*/<Views...>  
class concat_view  
: public [ranges::view_interface](view_interface.html)<concat_view<Views...>> |  (1)  |  (since C++26)  
namespace views {  
inline constexpr /* unspecified */ concat = /* unspecified */;  
} |  (2)  |  (since C++26)  
Call signature |  |   
template< [ranges::viewable_range](viewable_range.html)... Rs >  
requires /* see below */  
constexpr [ranges::view](view.html) auto concat( Rs&&... rs ); |  |  (since C++26)  
Helper type aliases |  |   
template< class... Rs >  
using /*concat-reference-t*/ =  
[ranges::common_reference_t](../experimental/ranges/type_traits/common_reference.html)<[ranges::range_reference_t](range_reference_t.html)<Rs>...>; |  (3) | (exposition only*)  
template< class... Rs >  
using /*concat-value-t*/ = [std::common_type_t](../types/common_type.html)<[ranges::range_value_t](range_size_t.html)<Rs>...>; |  (4) | (exposition only*)  
template< class... Rs >  
using /*concat-rvalue-reference-t*/ =  
[ranges::common_reference_t](../experimental/ranges/type_traits/common_reference.html)<[ranges::range_rvalue_reference_t](range_reference_t.html)<Rs>...>; |  (5) | (exposition only*)  
Helper concepts |  |   
template< class Ref, class RRef, class It >  
concept /*concat-indirectly-readable-impl*/ = /* see description */; |  (6) | (exposition only*)  
template< class... Rs >  
concept /*concatable*/ = /* see description */; |  (7) | (exposition only*)  
| |   
  
`concat_view` presents a [`view`](view.html "cpp/ranges/view") factory that takes an arbitrary number of ranges as an argument list, and provides a view that starts at the first element of the first range, ends at the last element of the last range, with all range elements sequenced in between respectively in the order given in the arguments, effectively concatenating, or chaining together the argument ranges. 

1) The class template with a template parameter that is a non-empty pack of [`view`s](view.html "cpp/ranges/view") each of which models at least [`input_range`](input_range.html "cpp/ranges/input range") and is `_[concatable](concat_view.html#concatable)_` (7).

2) `views::concat` is a customization point object. 

Given a pack of subexpressions exprs, the expression views::concat(exprs...) is [expression-equivalent](../language/expressions.html#Expression-equivalence "cpp/language/expressions") to 

  * [views::all](all_view.html)(exprs...) if exprs is a pack with only one element whose type models [`input_range`](input_range.html "cpp/ranges/input range"), 
  * concat_view(exprs...) otherwise.



3) Represents the reference type. An extra constraint is needed to make sure that each underlying range’s [ranges::range_reference_t](range_reference_t.html) is convertible to [ranges::common_reference_t](../experimental/ranges/type_traits/common_reference.html).

4) The [`_iterator_ ::value_type`](concat_view/iterator.html#Nested_types "cpp/ranges/concat view/iterator") that additionally respects the underlying ranges’ `value_type` to support the cases when the underlying ranges have proxy iterators.

5) The rvalue reference that also correctly supports the cases where underlying iterators customize `iter_move`.

6) Defines the `_indirectly-readable_` concept for the [`_iterator_`](concat_view/iterator.html "cpp/ranges/concat view/iterator") so that `concat_view` can model [`input_range`](input_range.html "cpp/ranges/input range").

Equivalent to: 
    
    
    template< class... Rs >
    concept /*concat-indirectly-readable*/ = // exposition only
        [std::common_reference_with](../concepts/common_reference_with.html)</*concat-reference-t*/<Rs...>&&,
                                   /*concat-value-t*/<Rs...>&> &&
        [std::common_reference_with](../concepts/common_reference_with.html)</*concat-reference-t*/<Rs...>&&,
                                   /*concat-rvalue-reference-t*/<Rs...>&&> &&
        [std::common_reference_with](../concepts/common_reference_with.html)</*concat-rvalue-reference-t*/<Rs...>&&,
                                   /*concat-value-t*/<Rs...> const&> &&
        (/*concat-indirectly-readable-impl*/</*concat-reference-t*/<Rs...>,
                                             /*concat-rvalue-reference-t*/<Rs...>,
                                             [ranges::iterator_t](iterator_t.html)<Rs>> && ...);

where exposition-only concept /*concat-indirectly-readable-impl*/ is 
    
    
    template< class Ref, class RRef, class It >
    concept /*concat-indirectly-readable-impl*/ = // exposition only
        requires(const It it) {
            { *it } -> [std::convertible_to](../concepts/convertible_to.html)<Ref>;
            { [ranges::iter_move](../iterator/ranges/iter_move.html)(it)} -> [std::convertible_to](../concepts/convertible_to.html)<RRef>;
        };

7) Determines whether any two or more different ranges can be adapted into a sequence that itself models a range. Equivalent to: 
    
    
    template< class... Rs >
    concept /*concatable*/ = requires { // exposition only
            typename /*concat-reference-t*/<Rs...>;
            typename /*concat-value-t*/<Rs...>;
            typename /*concat-rvalue-reference-t*/<Rs...>;
        } && /*concat-indirectly-readable*/<Rs...>;

`concat_view` always models [`input_range`](input_range.html "cpp/ranges/input range"), and models [`forward_range`](forward_range.html "cpp/ranges/forward range"), [`bidirectional_range`](bidirectional_range.html "cpp/ranges/bidirectional range"), [`random_access_range`](random_access_range.html "cpp/ranges/random access range"), or [`sized_range`](sized_range.html "cpp/ranges/sized range") if each adapted [`view`](view.html "cpp/ranges/view") type models the corresponding concept. 

`concat_view` can be [`common_range`](common_range.html "cpp/ranges/common range") if the last underlying range models [`common_range`](common_range.html "cpp/ranges/common range"). 

## Contents

  * [1 Customization point objects](concat_view.html#Customization_point_objects)
  * [2 Data members](concat_view.html#Data_members)
  * [3 Member functions](concat_view.html#Member_functions)
    * [3.1 Inherited from std::ranges::view_interface](concat_view.html#Inherited_from_std::ranges::view_interface)
  * [4 Deduction guides](concat_view.html#Deduction_guides)
  * [5 Nested classes](concat_view.html#Nested_classes)
  * [6 Helper templates](concat_view.html#Helper_templates)
  * [7 Notes](concat_view.html#Notes)
  * [8 Example](concat_view.html#Example)
  * [9 References](concat_view.html#References)
  * [10 See also](concat_view.html#See_also)

  
---  
  
###  Customization point objects

The name `views::concat` denotes a _customization point object_ , which is a const [function object](../named_req/FunctionObject.html "cpp/named req/FunctionObject") of a [literal](../named_req/LiteralType.html "cpp/named req/LiteralType") [`semiregular`](../concepts/semiregular.html "cpp/concepts/semiregular") class type. See [CustomizationPointObject](../named_req/CustomizationPointObject.html "cpp/named req/CustomizationPointObject") for details. 

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/ranges/concat_view&action=edit&section=1 "Edit section: Data members")] Data members

Member  |  Description   
---|---  
[std::tuple](../utility/tuple.html)<Views...> `_views__` |  all adapted view objects  
(exposition-only member object*)  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/ranges/concat_view&action=edit&section=2 "Edit section: Member functions")] Member functions

[ (constructor)](concat_view/concat_view.html "cpp/ranges/concat view/concat view") |  constructs a `concat_view`   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/ranges/adaptor/dsc_constructor&action=edit)  
---|---  
[ begin](concat_view/begin.html "cpp/ranges/concat view/begin") |  returns an iterator to the beginning   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/ranges/adaptor/dsc_begin&action=edit)  
[ end](concat_view/end.html "cpp/ranges/concat view/end") |  returns an iterator or a sentinel to the end   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/ranges/adaptor/dsc_end&action=edit)  
[ size](concat_view/size.html "cpp/ranges/concat view/size") |  returns the number of elements, provided only if the underlying (adapted) range satisfies [`sized_range`](sized_range.html "cpp/ranges/sized range")   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/ranges/adaptor/dsc_size&action=edit)  
  
#####  Inherited from [std::ranges::view_interface](view_interface.html "cpp/ranges/view interface")  
  
[ empty](view_interface/empty.html "cpp/ranges/view interface/empty") |  returns whether the derived view is empty, provided only if it satisfies [`sized_range`](sized_range.html "cpp/ranges/sized range") or [`forward_range`](forward_range.html "cpp/ranges/forward range")   
(public member function of `std::ranges::view_interface<D>`) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/ranges/view_interface/dsc_empty&action=edit)  
[ cbegin](view_interface/cbegin.html "cpp/ranges/view interface/cbegin")(C++23) |  returns a constant iterator to the beginning of the range   
(public member function of `std::ranges::view_interface<D>`) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/ranges/view_interface/dsc_cbegin&action=edit)  
[ cend](view_interface/cend.html "cpp/ranges/view interface/cend")(C++23) |  returns a sentinel for the constant iterator of the range   
(public member function of `std::ranges::view_interface<D>`) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/ranges/view_interface/dsc_cend&action=edit)  
[ operator bool](view_interface/operator_bool.html "cpp/ranges/view interface/operator bool") |  returns whether the derived view is not empty, provided only if [ranges::empty](empty.html "cpp/ranges/empty") is applicable to it   
(public member function of `std::ranges::view_interface<D>`) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/ranges/view_interface/dsc_operator_bool&action=edit)  
[ front](view_interface/front.html "cpp/ranges/view interface/front") |  returns the first element in the derived view, provided if it satisfies [`forward_range`](forward_range.html "cpp/ranges/forward range")   
(public member function of `std::ranges::view_interface<D>`) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/ranges/view_interface/dsc_front&action=edit)  
[ back](view_interface/back.html "cpp/ranges/view interface/back") |  returns the last element in the derived view, provided only if it satisfies [`bidirectional_range`](bidirectional_range.html "cpp/ranges/bidirectional range") and [`common_range`](common_range.html "cpp/ranges/common range")   
(public member function of `std::ranges::view_interface<D>`) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/ranges/view_interface/dsc_back&action=edit)  
[ operator[]](view_interface/operator_at.html "cpp/ranges/view interface/operator at") |  returns the `n`th element in the derived view, provided only if it satisfies [`random_access_range`](random_access_range.html "cpp/ranges/random access range")   
(public member function of `std::ranges::view_interface<D>`) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/ranges/view_interface/dsc_operator_at&action=edit)  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/ranges/concat_view&action=edit&section=3 "Edit section: Deduction guides")] [Deduction guides](concat_view/deduction_guides.html "cpp/ranges/concat view/deduction guides")

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/ranges/concat_view&action=edit&section=4 "Edit section: Nested classes")] Nested classes

Class name  |  Definition   
---|---  
[_iterator_](concat_view/iterator.html "cpp/ranges/concat view/iterator") |  the iterator type  
(exposition-only member class template*)  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/ranges/concat_view&action=edit&section=5 "Edit section: Helper templates")] Helper templates

There is no specialization of [ranges::enable_borrowed_range](borrowed_range.html) for `concat_view`, because this would require the iterator implementation to contain a copy of all iterators and sentinels of all underlying ranges at all times. 

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/ranges/concat_view&action=edit&section=6 "Edit section: Notes")] Notes

No argument views::concat() is ill-formed, because there is no reasonable way to determine an element type `T`. Single argument views::concat(r) is expression equivalent to [views::all](all_view.html)(r). 

[Feature-test](../utility/feature_test.html "cpp/utility/feature test") macro | Value | Std | Feature   
---|---|---|---  
[`__cpp_lib_ranges_concat`](../experimental/feature_test.html#cpp_lib_ranges_concat "cpp/feature test") | [`202403L`](../compiler_support/26.html#cpp_lib_ranges_concat_202403L "cpp/compiler support/26") | (C++26) | `std::ranges::concat_view`  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/ranges/concat_view&action=edit&section=7 "Edit section: Example")] Example

The preliminary version can be checked out on [Compiler Explorer](https://godbolt.org/z/o84hc69o9).

Run this code
    
    
    #include <cassert>
    #include <list>
    #include <print>
    #include <ranges>
    #include <vector>
     
    int main()
    {
        [std::vector](../container/vector.html)<int> v0{1, 2, 3}, v1{4, 5};
        int a[]{6, 7};
        int i{8};
        auto ie{std::[views::single](single_view.html)(i)};
     
        auto con = std::views::concat(v0, v1, a, ie);
        [assert](../error/assert.html)(con.size() == v0.size() + v1.size() + [std::size](../iterator/size.html)(a) + ie.size());
        [std::println](../io/println.html)("con.size(): {}", con.size());
        [std::println](../io/println.html)("con: {}", con);
        con[6] = 42; // con is random_access_range, operator[] returns a reference
        [assert](../error/assert.html)(a[1] == 42); // a[1] was modified via con[6]
        [std::println](../io/println.html)("con: {}", con);
     
        [std::list](../container/list.html)<int> l{7, 8}; // list is bidirectional range
        auto cat = std::views::concat(v0, l);
        [std::println](../io/println.html)("cat: {}", cat);
        // cat[0] = 13; // compile-time error: cat is bidirectional => no operator[]
    }

Output: 
    
    
    con.size(): 8
    con: [1, 2, 3, 4, 5, 6, 7, 8]
    con: [1, 2, 3, 4, 5, 6, 42, 8]
    cat: [1, 2, 3, 7, 8]

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/ranges/concat_view&action=edit&section=8 "Edit section: References")] References

  * C++26 standard (ISO/IEC 14882:2026): 



    

  * 26.7.18 Concat view [range.concat] 



### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/ranges/concat_view&action=edit&section=9 "Edit section: See also")] See also

[ ranges::join_viewviews::join](join_view.html "cpp/ranges/join view")(C++20) |  a [`view`](view.html "cpp/ranges/view") consisting of the sequence obtained from flattening a [`view`](view.html "cpp/ranges/view") of [`range`s](range.html "cpp/ranges/range")  
(class template) (range adaptor object)[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/ranges/dsc_join_view&action=edit)  
---|---  
[ ranges::join_with_viewviews::join_with](join_with_view.html "cpp/ranges/join with view")(C++23) |  a [`view`](view.html "cpp/ranges/view") consisting of the sequence obtained from flattening a view of ranges, with the delimiter in between elements  
(class template) (range adaptor object)[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/ranges/dsc_join_with_view&action=edit)  
[ ranges::zip_viewviews::zip](zip_view.html "cpp/ranges/zip view")(C++23) |  a [`view`](view.html "cpp/ranges/view") consisting of tuples of references to corresponding elements of the adapted views  
(class template) (customization point object)[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/ranges/dsc_zip_view&action=edit)  
[ ranges::cartesian_product_viewviews::cartesian_product](cartesian_product_view.html "cpp/ranges/cartesian product view")(C++23) |  a [`view`](view.html "cpp/ranges/view") consisting of tuples of results calculated by the n-ary cartesian product of the adapted views  
(class template) (customization point object)[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/ranges/dsc_cartesian_product_view&action=edit)
  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
