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
  


[Algorithm library](../algorithm.html "cpp/algorithm")

[Constrained algorithms and algorithms on ranges](ranges.html "cpp/algorithm/ranges") (C++20)  
---  
Constrained algorithms, e.g. [`ranges::copy`](ranges/copy.html "cpp/algorithm/ranges/copy"), [`ranges::sort`](ranges/sort.html "cpp/algorithm/ranges/sort"), ...  
[Execution policies (C++17)](../algorithm.html#Execution_policies "cpp/algorithm")  
|  | [is_execution_policy](is_execution_policy.html "cpp/algorithm/is execution policy")(C++17)  
---  
  
| [execution::seqexecution::parexecution::par_unseqexecution::unseq](execution_policy_tag.html "cpp/algorithm/execution policy tag")(C++17) (C++17)(C++17)(C++20)  
---  
  
|  | [execution::sequenced_policyexecution::parallel_policyexecution::parallel_unsequenced_policyexecution::parallel_unsequenced](execution_policy_tag_t.html "cpp/algorithm/execution policy tag t")(C++17)(C++17)(C++17)(C++20)  
---  
  
| [Non-modifying sequence operations](../algorithm.html#Non-modifying_sequence_operations "cpp/algorithm")  
---  
[Batch operations](../algorithm.html#Batch_operations "cpp/algorithm")  
| [for_each](for_each.html "cpp/algorithm/for each")  
---  
  
| [for_each_n](for_each_n.html "cpp/algorithm/for each n")(C++17)  
---  
  
[Search operations](../algorithm.html#Search_operations "cpp/algorithm")  
| [all_ofany_ofnone_of](none_of.html "cpp/algorithm/all any none of")(C++11) (C++11)(C++11)  
---  
[countcount_if](count.html "cpp/algorithm/count")  
[mismatch](mismatch.html "cpp/algorithm/mismatch")  
[equal](equal.html "cpp/algorithm/equal")  
  
  
  
| [findfind_iffind_if_not](find.html "cpp/algorithm/find")(C++11)  
---  
[find_end](find_end.html "cpp/algorithm/find end")  
[find_first_of](find_first_of.html "cpp/algorithm/find first of")  
[adjacent_find](adjacent_find.html "cpp/algorithm/adjacent find")  
[search](search.html "cpp/algorithm/search")  
[search_n](search_n.html "cpp/algorithm/search n")  
  
[Modifying sequence operations](../algorithm.html#Modifying_sequence_operations "cpp/algorithm")  
[Copy operations](../algorithm.html#Copy_operations "cpp/algorithm")  
| [copycopy_if](copy.html "cpp/algorithm/copy")(C++11)  
---  
[copy_backward](copy_backward.html "cpp/algorithm/copy backward")  
  
| [copy_n](copy_n.html "cpp/algorithm/copy n")(C++11)  
---  
[move](move.html "cpp/algorithm/move")(C++11)  
[move_backward](move_backward.html "cpp/algorithm/move backward")(C++11)  
  
[Swap operations](../algorithm.html#Swap_operations "cpp/algorithm")  
| **swap**  
---  
[iter_swap](iter_swap.html "cpp/algorithm/iter swap")  
  
| [swap_ranges](swap_ranges.html "cpp/algorithm/swap ranges")  
---  
  
  
  
[Transformation operations](../algorithm.html#Transformation_operations "cpp/algorithm")  
| [replacereplace_if](replace.html "cpp/algorithm/replace")  
---  
[transform](transform.html "cpp/algorithm/transform")  
  
| [replace_copyreplace_copy_if](replace_copy.html "cpp/algorithm/replace copy")  
---  
  
  
  
[Generation operations](../algorithm.html#Generation_operations "cpp/algorithm")  
| [fill](fill.html "cpp/algorithm/fill")  
---  
[fill_n](fill_n.html "cpp/algorithm/fill n")  
  
| [generate](generate.html "cpp/algorithm/generate")  
---  
[generate_n](generate_n.html "cpp/algorithm/generate n")  
  
[Removing operations](../algorithm.html#Removing_operations "cpp/algorithm")  
| [removeremove_if](remove.html "cpp/algorithm/remove")  
---  
[unique](unique.html "cpp/algorithm/unique")  
  
| [remove_copyremove_copy_if](remove_copy.html "cpp/algorithm/remove copy")  
---  
[unique_copy](unique_copy.html "cpp/algorithm/unique copy")  
  
[Order-changing operations](../algorithm.html#Order-changing_operations "cpp/algorithm")  
| [reverse](reverse.html "cpp/algorithm/reverse")  
---  
[reverse_copy](reverse_copy.html "cpp/algorithm/reverse copy")  
[rotate](rotate.html "cpp/algorithm/rotate")  
[rotate_copy](rotate_copy.html "cpp/algorithm/rotate copy")  
  
| [random_shuffleshuffle](random_shuffle.html "cpp/algorithm/random shuffle")(until C++17)(C++11)  
---  
[shift_leftshift_right](shift.html "cpp/algorithm/shift")(C++20)(C++20)  
  
[Sampling operations](../algorithm.html#Sampling_operations "cpp/algorithm")  
| [sample](sample.html "cpp/algorithm/sample")(C++17)  
---  
  
|   
  
---  
  
| [Sorting and related operations](../algorithm.html#Sorting_and_related_operations "cpp/algorithm")  
---  
[Partitioning operations](../algorithm.html#Partitioning_operations "cpp/algorithm")  
| [partition](partition.html "cpp/algorithm/partition")  
---  
[partition_copy](partition_copy.html "cpp/algorithm/partition copy")(C++11)  
[stable_partition](stable_partition.html "cpp/algorithm/stable partition")  
  
| [is_partitioned](is_partitioned.html "cpp/algorithm/is partitioned")(C++11)  
---  
[partition_point](partition_point.html "cpp/algorithm/partition point")(C++11)  
  
  
  
[Sorting operations](../algorithm.html#Sorting_operations "cpp/algorithm")  
| [sort](sort.html "cpp/algorithm/sort")  
---  
[stable_sort](stable_sort.html "cpp/algorithm/stable sort")  
[partial_sort](partial_sort.html "cpp/algorithm/partial sort")  
[partial_sort_copy](partial_sort_copy.html "cpp/algorithm/partial sort copy")  
  
| [is_sorted](is_sorted.html "cpp/algorithm/is sorted")(C++11)  
---  
[is_sorted_until](is_sorted_until.html "cpp/algorithm/is sorted until")(C++11)  
[nth_element](nth_element.html "cpp/algorithm/nth element")  
  
  
  
[Binary search operations  
(on partitioned ranges)](../algorithm.html#Binary_search_operations_.28on_partitioned_ranges.29 "cpp/algorithm")  
| [lower_bound](lower_bound.html "cpp/algorithm/lower bound")  
---  
[upper_bound](upper_bound.html "cpp/algorithm/upper bound")  
  
| [equal_range](equal_range.html "cpp/algorithm/equal range")  
---  
[binary_search](binary_search.html "cpp/algorithm/binary search")  
  
[Set operations (on sorted ranges)](../algorithm.html#Set_operations_.28on_sorted_ranges.29 "cpp/algorithm")  
| [includes](includes.html "cpp/algorithm/includes")  
---  
[set_union](set_union.html "cpp/algorithm/set union")  
[set_intersection](set_intersection.html "cpp/algorithm/set intersection")  
  
| [set_difference](set_difference.html "cpp/algorithm/set difference")  
---  
[set_symmetric_difference](set_symmetric_difference.html "cpp/algorithm/set symmetric difference")  
  
  
  
[Merge operations (on sorted ranges)](../algorithm.html#Merge_operations_.28on_sorted_ranges.29 "cpp/algorithm")  
| [merge](merge.html "cpp/algorithm/merge")  
---  
  
| [inplace_merge](inplace_merge.html "cpp/algorithm/inplace merge")  
---  
  
[Heap operations](../algorithm.html#Heap_operations "cpp/algorithm")  
| [push_heap](push_heap.html "cpp/algorithm/push heap")  
---  
[pop_heap](pop_heap.html "cpp/algorithm/pop heap")  
[make_heap](make_heap.html "cpp/algorithm/make heap")  
  
| [sort_heap](sort_heap.html "cpp/algorithm/sort heap")  
---  
[is_heap](is_heap.html "cpp/algorithm/is heap")(C++11)  
[is_heap_until](is_heap_until.html "cpp/algorithm/is heap until")(C++11)  
  
[Minimum/maximum operations](../algorithm.html#Minimum.2Fmaximum_operations "cpp/algorithm")  
| [max](max.html "cpp/algorithm/max")  
---  
[min](min.html "cpp/algorithm/min")  
[minmax](minmax.html "cpp/algorithm/minmax")(C++11)  
[clamp](clamp.html "cpp/algorithm/clamp")(C++17)  
  
| [max_element](max_element.html "cpp/algorithm/max element")  
---  
[min_element](min_element.html "cpp/algorithm/min element")  
[minmax_element](minmax_element.html "cpp/algorithm/minmax element")(C++11)  
  
  
  
[Lexicographical comparison operations](../algorithm.html#Lexicographical_comparison_operations "cpp/algorithm")  
[lexicographical_compare](lexicographical_compare.html "cpp/algorithm/lexicographical compare")  
[lexicographical_compare_three_way](lexicographical_compare_three_way.html "cpp/algorithm/lexicographical compare three way")(C++20)  
[Permutation operations](../algorithm.html#Permutation_operations "cpp/algorithm")  
| [next_permutation](next_permutation.html "cpp/algorithm/next permutation")  
---  
[prev_permutation](prev_permutation.html "cpp/algorithm/prev permutation")  
  
  
  
| [is_permutation](is_permutation.html "cpp/algorithm/is permutation")(C++11)  
---  
  
  
  
  
  
[C library](../algorithm.html#C_library "cpp/algorithm")  
| [qsort](qsort.html "cpp/algorithm/qsort")  
---  
  
| [bsearch](bsearch.html "cpp/algorithm/bsearch")  
---  
  
[Numeric operations](../algorithm.html#Numeric_operations "cpp/algorithm")  
|  | [iota](iota.html "cpp/algorithm/iota")(C++11)  
---  
[inner_product](inner_product.html "cpp/algorithm/inner product")  
[adjacent_difference](adjacent_difference.html "cpp/algorithm/adjacent difference")  
  
| [accumulate](accumulate.html "cpp/algorithm/accumulate")  
---  
[reduce](reduce.html "cpp/algorithm/reduce")(C++17)  
[transform_reduce](transform_reduce.html "cpp/algorithm/transform reduce")(C++17)  
  
|  | [partial_sum](partial_sum.html "cpp/algorithm/partial sum")  
---  
[inclusive_scan](inclusive_scan.html "cpp/algorithm/inclusive scan")(C++17)  
[exclusive_scan](exclusive_scan.html "cpp/algorithm/exclusive scan")(C++17)  
  
| [transform_inclusive_scan](transform_inclusive_scan.html "cpp/algorithm/transform inclusive scan")(C++17)  
---  
[transform_exclusive_scan](transform_exclusive_scan.html "cpp/algorithm/transform exclusive scan")(C++17)  
  
  
  
[Operations on uninitialized memory](../algorithm.html#Operations_on_uninitialized_memory "cpp/algorithm")  
|  | [uninitialized_copy](../memory/uninitialized_copy.html "cpp/memory/uninitialized copy")  
---  
[uninitialized_move](../memory/uninitialized_move.html "cpp/memory/uninitialized move")(C++17)  
[uninitialized_fill](../memory/uninitialized_fill.html "cpp/memory/uninitialized fill")  
  
  
  
| [uninitialized_copy_n](../memory/uninitialized_copy_n.html "cpp/memory/uninitialized copy n")(C++11)  
---  
[uninitialized_move_n](../memory/uninitialized_move_n.html "cpp/memory/uninitialized move n")(C++17)  
[uninitialized_fill_n](../memory/uninitialized_fill_n.html "cpp/memory/uninitialized fill n")  
  
  
  
|  | [destroy](../memory/destroy.html "cpp/memory/destroy")(C++17)  
---  
[destroy_n](../memory/destroy_n.html "cpp/memory/destroy n")(C++17)  
[destroy_at](../memory/destroy_at.html "cpp/memory/destroy at")(C++17)  
[construct_at](../memory/construct_at.html "cpp/memory/construct at")(C++20)  
  
| [uninitialized_default_construct](../memory/uninitialized_default_construct.html "cpp/memory/uninitialized default construct")(C++17)  
---  
[uninitialized_value_construct](../memory/uninitialized_value_construct.html "cpp/memory/uninitialized value construct")(C++17)  
[uninitialized_default_construct_n](../memory/uninitialized_default_construct_n.html "cpp/memory/uninitialized default construct n")(C++17)  
[uninitialized_value_construct_n](../memory/uninitialized_value_construct_n.html "cpp/memory/uninitialized value construct n")(C++17)  
  


Defined in header `[<algorithm>](../header/algorithm.html "cpp/header/algorithm")` |  | (until C++11)  
---|---|---  
Defined in header `[<utility>](../header/utility.html "cpp/header/utility")` |  | (since C++11)  
Defined in header `[<string_view>](../header/string_view.html "cpp/header/string view")` |  |   
template< class T >  
void swap( T& a, T& b ); |  (1)  |  (conditionally noexcept since C++11)  
(constexpr since C++20)  
template< class T2, [std::size_t](../types/size_t.html) N >  
void swap( T2 (&a)[N], T2 (&b)[N] ); |  (2)  |  (conditionally noexcept since C++11)  
(constexpr since C++20)  
| |   
  
Exchanges the given values. 

1) Swaps the values a and b.  This overload participates in overload resolution only if [std::is_move_constructible_v](../types/is_move_constructible.html)<T> && [std::is_move_assignable_v](../types/is_move_assignable.html)<T> is true.  | (since C++17)  
---|---  
  
2) Swaps the arrays a and b. Equivalent to [std::swap_ranges](swap_ranges.html)(a, a + N, b).  This overload participates in overload resolution only if [std::is_swappable_v](../types/is_swappable.html)<T2> is true.  | (since C++17)  
---|---  
  
## Contents

  * [1 Parameters](../utility/swap.html#Parameters)
  * [2 Return value](../utility/swap.html#Return_value)
  * [3 Exceptions](../utility/swap.html#Exceptions)
  * [4 Complexity](../utility/swap.html#Complexity)
  * [5 Specializations](../utility/swap.html#Specializations)
  * [6 Example](../utility/swap.html#Example)
  * [7 Defect reports](../utility/swap.html#Defect_reports)
  * [8 See also](../utility/swap.html#See_also)

  
---  
  
### Parameters

a, b  |  \-  |  the values to be swapped   
---|---|---  
Type requirements   
-`T` must meet the requirements of [CopyConstructible](../named_req/CopyConstructible.html "cpp/named req/CopyConstructible") and [CopyAssignable](../named_req/CopyAssignable.html "cpp/named req/CopyAssignable")(until C++11)[MoveConstructible](../named_req/MoveConstructible.html "cpp/named req/MoveConstructible") and [MoveAssignable](../named_req/MoveAssignable.html "cpp/named req/MoveAssignable")(since C++11).   
-`T2` must meet the requirements of [Swappable](../named_req/Swappable.html "cpp/named req/Swappable").   
  
### Return value

(none) 

### Exceptions

1) (none)  | (until C++11)  
---|---  
[`noexcept`](../language/noexcept_spec.html "cpp/language/noexcept spec") specification: noexcept(  
[std::is_nothrow_move_constructible](../types/is_move_constructible.html)<T>::value &&  
[std::is_nothrow_move_assignable](../types/is_move_assignable.html)<T>::value  
) | (since C++11)  
  
2) [`noexcept`](../language/noexcept_spec.html "cpp/language/noexcept spec") specification: noexcept(noexcept(swap(*a, *b))) The lookup for the identifier `swap` in the exception specification finds this function template in addition to anything found by the usual lookup rules, making the exception specification equivalent to C++17 [std::is_nothrow_swappable](../types/is_swappable.html "cpp/types/is swappable").  | (since C++11)  
(until C++17)  
---|---  
[`noexcept`](../language/noexcept_spec.html "cpp/language/noexcept spec") specification: noexcept([std::is_nothrow_swappable_v](../types/is_swappable.html)<T2>) | (since C++17)  
  
### Complexity

1) Constant.

2) Linear in N.

### Specializations

`std::swap` may be [specialized in namespace std](../language/extending_std.html "cpp/language/extending std") for program-defined types, but such specializations are not found by [ADL](../language/adl.html "cpp/language/adl") (the namespace std is not the associated namespace for the program-defined type).  | (until C++20)  
---|---  
  
The expected way to make a [program-defined type](../language/type-id.html#Program-defined_type "cpp/language/type") swappable is to provide a non-member function swap in the same namespace as the type: see [Swappable](../named_req/Swappable.html "cpp/named req/Swappable") for details. 

The following overloads are already provided by the standard library: 

[ std::swap(std::pair)](../utility/pair/swap2.html "cpp/utility/pair/swap2")(C++11) |  specializes the **std::swap** algorithm   
(function template)   
---|---  
[ std::swap(std::tuple)](../utility/tuple/swap2.html "cpp/utility/tuple/swap2")(C++11) |  specializes the **std::swap** algorithm   
(function template)   
[ std::swap(std::shared_ptr)](../memory/shared_ptr/swap2.html "cpp/memory/shared ptr/swap2")(C++11) |  specializes the **std::swap** algorithm   
(function template)   
[ std::swap(std::weak_ptr)](../memory/weak_ptr/swap2.html "cpp/memory/weak ptr/swap2")(C++11) |  specializes the **std::swap** algorithm   
(function template)   
[ std::swap(std::unique_ptr)](../memory/unique_ptr/swap2.html "cpp/memory/unique ptr/swap2")(C++11) |  specializes the **std::swap** algorithm   
(function template)   
[ std::swap(std::function)](../utility/functional/function/swap2.html "cpp/utility/functional/function/swap2")(C++11) |  specializes the **std::swap** algorithm   
(function template)   
[ std::swap(std::basic_string)](../string/basic_string/swap2.html "cpp/string/basic string/swap2") |  specializes the **std::swap** algorithm   
(function template)   
[ std::swap(std::array)](../container/array/swap2.html "cpp/container/array/swap2")(C++11) |  specializes the **std::swap** algorithm   
(function template)   
[ std::swap(std::deque)](../container/deque/swap2.html "cpp/container/deque/swap2") |  specializes the **std::swap** algorithm   
(function template)   
[ std::swap(std::forward_list)](../container/forward_list/swap2.html "cpp/container/forward list/swap2")(C++11) |  specializes the **std::swap** algorithm   
(function template)   
[ std::swap(std::list)](../container/list/swap2.html "cpp/container/list/swap2") |  specializes the **std::swap** algorithm   
(function template)   
[ std::swap(std::vector)](../container/vector/std_swap.html "cpp/container/vector/swap2") |  specializes the **std::swap** algorithm   
(function template)   
[ std::swap(std::map)](../container/map/swap2.html "cpp/container/map/swap2") |  specializes the **std::swap** algorithm   
(function template)   
[ std::swap(std::multimap)](../container/multimap/swap2.html "cpp/container/multimap/swap2") |  specializes the **std::swap** algorithm   
(function template)   
[ std::swap(std::set)](../container/set/swap2.html "cpp/container/set/swap2") |  specializes the **std::swap** algorithm   
(function template)   
[ std::swap(std::multiset)](../container/multiset/swap2.html "cpp/container/multiset/swap2") |  specializes the **std::swap** algorithm   
(function template)   
[ std::swap(std::unordered_map)](../container/unordered_map/swap2.html "cpp/container/unordered map/swap2")(C++11) |  specializes the **std::swap** algorithm   
(function template)   
[ std::swap(std::unordered_multimap)](../container/unordered_multimap/swap2.html "cpp/container/unordered multimap/swap2")(C++11) |  specializes the **std::swap** algorithm   
(function template)   
[ std::swap(std::unordered_set)](../container/unordered_set/swap2.html "cpp/container/unordered set/swap2")(C++11) |  specializes the **std::swap** algorithm   
(function template)   
[ std::swap(std::unordered_multiset)](../container/unordered_multiset/swap2.html "cpp/container/unordered multiset/swap2")(C++11) |  specializes the **std::swap** algorithm   
(function template)   
[ std::swap(std::queue)](../container/queue/swap2.html "cpp/container/queue/swap2")(C++11) |  specializes the **std::swap** algorithm   
(function template)   
[ std::swap(std::priority_queue)](../container/priority_queue/swap2.html "cpp/container/priority queue/swap2")(C++11) |  specializes the **std::swap** algorithm   
(function template)   
[ std::swap(std::stack)](../container/stack/swap2.html "cpp/container/stack/swap2")(C++11) |  specializes the **std::swap** algorithm   
(function template)   
[ std::swap(std::valarray)](../numeric/valarray/swap2.html "cpp/numeric/valarray/swap2")(C++11) |  specializes the **std::swap** algorithm   
(function template)   
[ std::swap(std::basic_stringbuf)](../io/basic_stringbuf/swap2.html "cpp/io/basic stringbuf/swap2")(C++11) |  specializes the **std::swap** algorithm   
(function template)   
[ std::swap(std::basic_istringstream)](../io/basic_istringstream/swap2.html "cpp/io/basic istringstream/swap2")(C++11) |  specializes the **std::swap** algorithm   
(function template)   
[ std::swap(std::basic_ostringstream)](../io/basic_ostringstream/swap2.html "cpp/io/basic ostringstream/swap2")(C++11) |  specializes the **std::swap** algorithm   
(function template)   
[ std::swap(std::basic_stringstream)](../io/basic_stringstream/swap2.html "cpp/io/basic stringstream/swap2")(C++11) |  specializes the **std::swap** algorithm   
(function template)   
[ std::swap(std::basic_filebuf)](../io/basic_filebuf/swap2.html "cpp/io/basic filebuf/swap2")(C++11) |  specializes the **std::swap** algorithm   
(function template)   
[ std::swap(std::basic_ifstream)](../io/basic_ifstream/swap2.html "cpp/io/basic ifstream/swap2")(C++11) |  specializes the **std::swap** algorithm   
(function template)   
[ std::swap(std::basic_ofstream)](../io/basic_ofstream/swap2.html "cpp/io/basic ofstream/swap2")(C++11) |  specializes the **std::swap** algorithm   
(function template)   
[ std::swap(std::basic_fstream)](../io/basic_fstream/swap2.html "cpp/io/basic fstream/swap2")(C++11) |  specializes the **std::swap** algorithm   
(function template)   
[ std::swap(std::basic_syncbuf)](../io/basic_syncbuf/swap2.html "cpp/io/basic syncbuf/swap2")(C++20) |  specializes the **std::swap** algorithm   
(function template)   
[ std::swap(std::basic_spanbuf)](../io/basic_spanbuf/swap2.html "cpp/io/basic spanbuf/swap2")(C++23) |  specializes the **std::swap** algorithm   
(function template)   
[ std::swap(std::basic_ispanstream)](../io/basic_ispanstream/swap2.html "cpp/io/basic ispanstream/swap2")(C++23) |  specializes the **std::swap** algorithm   
(function template)   
[ std::swap(std::basic_ospanstream)](../io/basic_ospanstream/swap2.html "cpp/io/basic ospanstream/swap2")(C++23) |  specializes the **std::swap** algorithm   
(function template)   
[ std::swap(std::basic_spanstream)](../io/basic_spanstream/swap2.html "cpp/io/basic spanstream/swap2")(C++23) |  specializes the **std::swap** algorithm   
(function template)   
[ std::swap(std::basic_regex)](../regex/basic_regex/swap2.html "cpp/regex/basic regex/swap2")(C++11) |  specializes the **std::swap** algorithm   
(function template)   
[ std::swap(std::match_results)](../regex/match_results/swap2.html "cpp/regex/match results/swap2")(C++11) |  specializes the **`std::swap`** algorithm   
(function template)   
[ std::swap(std::thread)](../thread/thread/swap2.html "cpp/thread/thread/swap2")(C++11) |  specializes the **std::swap** algorithm   
(function)   
[ std::swap(std::unique_lock)](../thread/unique_lock/swap2.html "cpp/thread/unique lock/swap2")(C++11) |  specializes the **std::swap** algorithm   
(function template)   
[ std::swap(std::shared_lock)](../thread/shared_lock/swap2.html "cpp/thread/shared lock/swap2")(C++14) |  specializes the **std::swap** algorithm   
(function template)   
[ std::swap(std::promise)](../thread/promise/swap2.html "cpp/thread/promise/swap2")(C++11) |  specializes the **std::swap** algorithm   
(function template)   
[ std::swap(std::packaged_task)](../thread/packaged_task/swap2.html "cpp/thread/packaged task/swap2")(C++11) |  specializes the **std::swap** algorithm   
(function template)   
[ std::swap(std::optional)](../utility/optional/swap2.html "cpp/utility/optional/swap2")(C++17) |  specializes the **std::swap** algorithm   
(function template)   
[ std::swap(std::any)](../utility/any/swap2.html "cpp/utility/any/swap2")(C++17) |  specializes the **std::swap** algorithm   
(function)   
[ std::swap(std::variant)](../utility/variant/swap2.html "cpp/utility/variant/swap2")(C++17) |  specializes the **std::swap** algorithm   
(function template)   
[ std::swap(std::basic_stacktrace)](../utility/basic_stacktrace/swap2.html "cpp/utility/basic stacktrace/swap2")(C++23) |  specializes the **std::swap** algorithm   
(function template)   
[ swap(std::filesystem::path)](../filesystem/path/swap2.html "cpp/filesystem/path/swap2")(C++17) |  specializes the **std::swap** algorithm   
(function)   
[ swap(std::expected)](../utility/expected/swap2.html "cpp/utility/expected/swap2")(C++23) |  specializes the **std::swap** algorithm   
(function)   
[ swap(std::jthread)](../thread/jthread/swap2.html "cpp/thread/jthread/swap2")(C++20) |  specializes the **std::swap** algorithm   
(function)   
[ swap(std::move_only_function)](../utility/functional/move_only_function/swap2.html "cpp/utility/functional/move only function/swap2")(C++23) |  specializes the **std::swap** algorithm   
(function)   
[ swap(std::stop_source)](../thread/stop_source/swap2.html "cpp/thread/stop source/swap2")(C++20) |  specializes the **std::swap** algorithm   
(function)   
[ swap(std::stop_token)](../thread/stop_token/swap2.html "cpp/thread/stop token/swap2")(C++20) |  specializes the **std::swap** algorithm   
(function)   
  
### Example

Run this code
    
    
    #include <algorithm>
    #include <iostream>
     
    namespace Ns
    {
        class A
        {
            int id {};
     
            friend void swap(A& lhs, A& rhs)
            {
                [std::cout](../io/cout.html) << "swap(" << lhs << ", " << rhs << ")\n";
                std::swap(lhs.id, rhs.id);
            }
     
            friend [std::ostream](../io/basic_ostream.html)& operator<<([std::ostream](../io/basic_ostream.html)& os, A const& a)
            {
                return os << "A::id=" << a.id;
            }
     
        public:
            A(int i) : id {i} {}
            A(A const&) = delete;
            A& operator = (A const&) = delete;
        };
    }
     
    int main()
    {
        int a = 5, b = 3;
        [std::cout](../io/cout.html) << a << ' ' << b << '\n';
        std::swap(a, b);
        [std::cout](../io/cout.html) << a << ' ' << b << '\n';
     
        Ns::A p {6}, q {9};
        [std::cout](../io/cout.html) << p << ' ' << q << '\n';
    //  std::swap(p, q); // error, type requirements are not satisfied
        swap(p, q);      // OK, ADL finds the appropriate friend `swap`
        [std::cout](../io/cout.html) << p << ' ' << q << '\n';
    }

Output: 
    
    
    5 3
    3 5
    A::id=6 A::id=9
    swap(A::id=6, A::id=9)
    A::id=9 A::id=6

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 227](https://cplusplus.github.io/LWG/issue227) | C++98  | `T` was not required to be [CopyConstructible](../named_req/CopyConstructible.html "cpp/named req/CopyConstructible") or [DefaultConstructible](../named_req/DefaultConstructible.html "cpp/named req/DefaultConstructible")  
(a temporary object of type `T` might not be able to be constructed)  | `T` is also required to  
be [CopyConstructible](../named_req/CopyConstructible.html "cpp/named req/CopyConstructible")  
[LWG 809](https://cplusplus.github.io/LWG/issue809) | C++98  | arrays could not be swapped  | added overload (2)  
[LWG 2554](https://cplusplus.github.io/LWG/issue2554) | C++11  | swapping multi-dimensional arrays can never  
be noexcept due to name lookup problems  | made to work   
  
### See also

[ ranges::swap](../utility/ranges/swap.html "cpp/utility/ranges/swap")(C++20) |  swaps the values of two objects  
(customization point object)  
---|---  
[ iter_swap](iter_swap.html "cpp/algorithm/iter swap") |  swaps the elements pointed to by two iterators   
(function template)   
[ swap_ranges](swap_ranges.html "cpp/algorithm/swap ranges") |  swaps two ranges of elements   
(function template)   
[ exchange](../utility/exchange.html "cpp/utility/exchange")(C++14) |  replaces the argument with a new value and returns its previous value   
(function template) 
