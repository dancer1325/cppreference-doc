[C++](../../cpp.html "cpp")

[Compiler support](../compiler_support.html "cpp/compiler support")  
---  
[Freestanding and hosted](../freestanding.html "cpp/freestanding")  
[Language](../language.html "cpp/language")  
[Standard library](../standard_library.html "cpp/standard library")  
[Standard library headers](../headers.html "cpp/header")  
[Named requirements](concepts.html "cpp/named req")  
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
  


[Iterator library](../iterator.html "cpp/iterator")

[Iterator concepts](../iterator.html#Iterator_concepts "cpp/iterator")  
---  
| [indirectly_readable](indirectly_readable.html "cpp/iterator/indirectly readable")(C++20)  
---  
[indirectly_writable](indirectly_writable.html "cpp/iterator/indirectly writable")(C++20)  
[weakly_incrementable](weakly_incrementable.html "cpp/iterator/weakly incrementable")(C++20)  
[incrementable](incrementable.html "cpp/iterator/incrementable")(C++20)  
[_is-integer-like_  
 _is-signed-integer-like_](is-integer-like.html "cpp/iterator/is-integer-like")(C++20)(C++20)  
  
| [sentinel_for](sentinel_for.html "cpp/iterator/sentinel for")(C++20)  
---  
[sized_sentinel_for](sized_sentinel_for.html "cpp/iterator/sized sentinel for")(C++20)  
[input_iterator](input_iterator.html "cpp/iterator/input iterator")(C++20)  
[output_iterator](output_iterator.html "cpp/iterator/output iterator")(C++20)  
[input_or_output_iterator](input_or_output_iterator.html "cpp/iterator/input or output iterator")(C++20)  
  
  
  
| [forward_iterator](forward_iterator.html "cpp/iterator/forward iterator")(C++20)  
---  
[bidirectional_iterator](bidirectional_iterator.html "cpp/iterator/bidirectional iterator")(C++20)  
[random_access_iterator](random_access_iterator.html "cpp/iterator/random access iterator")(C++20)  
[contiguous_iterator](contiguous_iterator.html "cpp/iterator/contiguous iterator")(C++20)  
  
  
  
  
  
[Iterator primitives](../iterator.html#Iterator_primitives "cpp/iterator")  
| [input_iterator_tagoutput_iterator_tagforward_iterator_tagbidirectional_iterator_tagrandom_access_iterator_tagcontiguous_iterator_tag](iterator_tags.html "cpp/iterator/iterator tags")(C++20)  
---  
  
| [iter_value_titer_difference_titer_reference_titer_const_reference_titer_rvalue_reference_titer_common_reference_t](iter_t.html "cpp/iterator/iter t")(C++20)(C++20)(C++20)(C++23)(C++20)(C++20)  
---  
  
| [iterator](iterator.html "cpp/iterator/iterator")(deprecated in C++17)  
---  
[iterator_traits](iterator_traits.html "cpp/iterator/iterator traits")  
[incrementable_traits](incrementable_traits.html "cpp/iterator/incrementable traits")(C++20)  
[indirectly_readable_traits](readable_traits.html "cpp/iterator/indirectly readable traits")(C++20)  
  
  
  
  
  
[Algorithm concepts and utilities](../iterator.html#Algorithm_concepts_and_utilities "cpp/iterator")  
[Indirect callable concepts](../iterator.html#Indirect_callable_concepts "cpp/iterator")  
| [indirectly_unary_invocableindirectly_regular_unary_invocable](indirectly_unary_invocable.html "cpp/iterator/indirectly unary invocable")(C++20)(C++20)` `  
---  
  
| [indirect_unary_predicate](indirect_unary_predicate.html "cpp/iterator/indirect unary predicate")(C++20)  
---  
[indirect_binary_predicate](indirect_binary_predicate.html "cpp/iterator/indirect binary predicate")(C++20)  
  
| [indirect_equivalence_relation](indirect_equivalence_relation.html "cpp/iterator/indirect equivalence relation")(C++20)  
---  
[indirect_strict_weak_order](indirect_strict_weak_order.html "cpp/iterator/indirect strict weak order")(C++20)  
  
[Common algorithm requirements](../iterator.html#Common_algorithm_requirements "cpp/iterator")  
| [indirectly_movable](indirectly_movable.html "cpp/iterator/indirectly movable")(C++20)  
---  
[indirectly_movable_storable](indirectly_movable_storable.html "cpp/iterator/indirectly movable storable")(C++20)  
[indirectly_copyable](indirectly_copyable.html "cpp/iterator/indirectly copyable")(C++20)  
  
| [indirectly_copyable_storable](indirectly_copyable_storable.html "cpp/iterator/indirectly copyable storable")(C++20)` `  
---  
[indirectly_swappable](indirectly_swappable.html "cpp/iterator/indirectly swappable")(C++20)  
[indirectly_comparable](indirectly_comparable.html "cpp/iterator/indirectly comparable")(C++20)  
  
| [permutable](permutable.html "cpp/iterator/permutable")(C++20)  
---  
[mergeable](mergeable.html "cpp/iterator/mergeable")(C++20)  
[sortable](sortable.html "cpp/iterator/sortable")(C++20)  
  
[Utilities](../iterator.html#Utilities "cpp/iterator")  
| [indirect_result_t](indirect_result_t.html "cpp/iterator/indirect result t")(C++20)  
---  
  
| **projected**(C++20)  
---  
  
| [projected_value_t](projected_value_t.html "cpp/iterator/projected value t")(C++26)  
---  
  
[Iterator adaptors](../iterator.html#Iterator_adaptors "cpp/iterator")  
| [reverse_iterator](reverse_iterator.html "cpp/iterator/reverse iterator")  
---  
[make_reverse_iterator](make_reverse_iterator.html "cpp/iterator/make reverse iterator")(C++14)  
[move_iterator](move_iterator.html "cpp/iterator/move iterator")(C++11)  
[make_move_iterator](make_move_iterator.html "cpp/iterator/make move iterator")(C++11)  
[default_sentinel_tdefault_sentinel](default_sentinel.html "cpp/iterator/default sentinel t")(C++20)(C++20)  
[unreachable_sentinel_tunreachable_sentinel](unreachable_sentinel_t.html "cpp/iterator/unreachable sentinel t")(C++20)(C++20)  
  
| [front_insert_iterator](front_insert_iterator.html "cpp/iterator/front insert iterator")  
---  
[back_insert_iterator](back_insert_iterator.html "cpp/iterator/back insert iterator")  
[inserter](inserter.html "cpp/iterator/inserter")  
[insert_iterator](insert_iterator.html "cpp/iterator/insert iterator")  
[front_inserter](front_inserter.html "cpp/iterator/front inserter")  
[back_inserter](back_inserter.html "cpp/iterator/back inserter")  
[move_sentinel](move_sentinel.html "cpp/iterator/move sentinel")(C++20)  
  
  
  
| [common_iterator](common_iterator.html "cpp/iterator/common iterator")(C++20)  
---  
[counted_iterator](counted_iterator.html "cpp/iterator/counted iterator")(C++20)  
[basic_const_iterator](basic_const_iterator.html "cpp/iterator/basic const iterator")(C++23)  
[const_iterator](basic_const_iterator.html "cpp/iterator/basic const iterator")(C++23)  
[const_sentinel](basic_const_iterator.html "cpp/iterator/basic const iterator")(C++23)  
[make_const_iterator](basic_const_iterator.html "cpp/iterator/basic const iterator")(C++23)  
[make_const_sentinel](basic_const_iterator.html "cpp/iterator/basic const iterator")(C++23)  
  
  
  
| [Stream iterators](../iterator.html#Stream_iterators "cpp/iterator")  
---  
| [istream_iterator](istream_iterator.html "cpp/iterator/istream iterator")` `  
---  
[ostream_iterator](ostream_iterator.html "cpp/iterator/ostream iterator")  
  
| [istreambuf_iterator](istreambuf_iterator.html "cpp/iterator/istreambuf iterator")  
---  
[ostreambuf_iterator](ostreambuf_iterator.html "cpp/iterator/ostreambuf iterator")  
  
| [Iterator customization points](../iterator.html#Iterator_customization_points "cpp/iterator")  
---  
[ranges::iter_move](ranges/iter_move.html "cpp/iterator/ranges/iter move")(C++20)  
[ranges::iter_swap](ranges/iter_swap.html "cpp/iterator/ranges/iter swap")(C++20)  
  
| [Iterator operations](../iterator.html#Iterator_operations "cpp/iterator")  
---  
|  | [advance](advance.html "cpp/iterator/advance")  
---  
[distance](distance.html "cpp/iterator/distance")  
[prev](prev.html "cpp/iterator/prev")(C++11)` `  
[next](next.html "cpp/iterator/next")(C++11)  
  
| [ranges::advance](ranges/advance.html "cpp/iterator/ranges/advance")(C++20)  
---  
[ranges::distance](ranges/distance.html "cpp/iterator/ranges/distance")(C++20)  
[ranges::prev](ranges/prev.html "cpp/iterator/ranges/prev")(C++20)  
[ranges::next](ranges/next.html "cpp/iterator/ranges/next")(C++20)  
  
| [Range access](../iterator.html#Range_access "cpp/iterator")  
---  
|  | [begincbegin](begin.html "cpp/iterator/begin")(C++11)(C++14)  
---  
[rbegincrbegin](rbegin.html "cpp/iterator/rbegin")(C++14)(C++14)` `  
  
| [endcend](end.html "cpp/iterator/end")(C++11)(C++14)  
---  
[rendcrend](rend.html "cpp/iterator/rend")(C++14)(C++14)` `  
  
| [sizessize](size.html "cpp/iterator/size")(C++17)(C++20)  
---  
[empty](empty.html "cpp/iterator/empty")(C++17)  
[data](data.html "cpp/iterator/data")(C++17)  
  


Defined in header `[<iterator>](../header/iterator.html "cpp/header/iterator")` |  |   
---|---|---  
| (1) |   
template< [std::indirectly_readable](indirectly_readable.html) I,  
[std::indirectly_regular_unary_invocable](indirectly_unary_invocable.html)<I> Proj >  
struct [projected](http://en.cppreference.com/w/cpp/ranges-placeholder/iterator/projected)  
{  
using value_type = [std::remove_cvref_t](../types/remove_cvref.html)  
<[std::indirect_result_t](indirect_result_t.html)<Proj&, I>>;  
[std::indirect_result_t](indirect_result_t.html)<Proj&, I> operator*() const; // not defined  
}; |  |  (since C++20)   
(until C++26)  
template< [std::indirectly_readable](indirectly_readable.html) I,  
[std::indirectly_regular_unary_invocable](indirectly_unary_invocable.html)<I> Proj >  
using [projected](http://en.cppreference.com/w/cpp/ranges-placeholder/iterator/projected) = /*projected-impl*/<I, Proj>::/*type*/; |  |  (since C++26)  
template< [std::weakly_incrementable](weakly_incrementable.html) I, class Proj >  
struct incrementable_traits<std::[projected](http://en.cppreference.com/w/cpp/ranges-placeholder/iterator/projected)<I, Proj>>  
{  
using difference_type = [std::iter_difference_t](iter_t.html)<I>;  
}; |  (2)  |  (since C++20)   
(until C++26)  
Helper templates |  |   
template< class I, class Proj >  
struct /*projected-impl*/  
{  
struct /*type*/  
{  
using value_type = [std::remove_cvref_t](../types/remove_cvref.html)  
<[std::indirect_result_t](indirect_result_t.html)<Proj&, I>>;  
using difference_type =  
[std::iter_difference_t](iter_t.html)<I>; // conditionally present  
[std::indirect_result_t](indirect_result_t.html)<Proj&, I> operator*() const; // not defined  
};  
}; |  (3) | (since C++26)   
(exposition only*)  
| |   
  
1) Class(until C++26)Alias(since C++26) template `projected` combines an [`indirectly_readable`](indirectly_readable.html "cpp/iterator/indirectly readable") type `I` and a callable object type `Proj` into a new `indirectly_readable` type whose reference type is the result of applying `Proj` to the [std::iter_reference_t](iter_t.html)<I>.

2) This specialization of [std::incrementable_traits](incrementable_traits.html "cpp/iterator/incrementable traits") makes std::[projected](http://en.cppreference.com/w/cpp/ranges-placeholder/iterator/projected)<I, Proj> a [`weakly_incrementable`](weakly_incrementable.html "cpp/iterator/weakly incrementable") type when `I` is also a `weakly_incrementable` type.

3) An indirect layer used for avoiding unexpected [argument-dependent lookup](../language/adl.html "cpp/language/adl").

For the exposition-only nested class /*type*/, the nested type `difference_type` exists only if `I` models [`weakly_incrementable`](weakly_incrementable.html "cpp/iterator/weakly incrementable").

`projected` is used only to constrain algorithms that accept callable objects and projections, and hence its operator*() is not defined. 

## Contents

  * [1 Template parameters](projected.html#Template_parameters)
  * [2 Notes](projected.html#Notes)
  * [3 Example](projected.html#Example)
  * [4 See also](projected.html#See_also)

  
---  
  
### Template parameters

I  |  \-  |  an indirectly readable type   
---|---|---  
Proj  |  \-  |  projection applied to a dereferenced `I`  
  
### Notes

The indirect layer prevents `I` and `Proj` to be associated classes of `projected`. When an associated class of `I` or `Proj` is an incomplete class type, the indirect layer avoids the unnecessary attempt to inspect the definition of that type that results in hard error. 

### Example

Run this code
    
    
    #include <algorithm>
    #include <cassert>
    #include <functional>
    #include <iterator>
     
    template<class T>
    struct Holder
    {
        T t;
    };
     
    struct Incomplete;
     
    using P = Holder<Incomplete>*;
     
    static_assert([std::equality_comparable](../concepts/equality_comparable.html)<P>); // OK
    static_assert([std::indirectly_comparable](indirectly_comparable.html)<P*, P*, [std::equal_to](../utility/functional/equal_to.html)<>>); // Error before C++26
    static_assert([std::sortable](sortable.html)<P*>); // Error before C++26
     
    int main()
    {
        P a[10] = {}; // ten null pointers
        [assert](../error/assert.html)([std::count](../algorithm/count.html)(a, a + 10, nullptr) == 10); // OK
        [assert](../error/assert.html)(std::[ranges::count](../algorithm/ranges/count.html)(a, a + 10, nullptr) == 10); // Error before C++26
    }

### See also

[ projected_value_t](projected_value_t.html "cpp/iterator/projected value t")(C++26) |  computes the value type of an [`indirectly_readable`](indirectly_readable.html "cpp/iterator/indirectly readable") type by projection  
(alias template)  
---|---
