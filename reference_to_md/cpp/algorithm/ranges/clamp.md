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
  


[Algorithm library](../../algorithm.html "cpp/algorithm")

[Constrained algorithms and algorithms on ranges](../ranges.html "cpp/algorithm/ranges") (C++20)  
---  
Constrained algorithms, e.g. [`ranges::copy`](copy.html "cpp/algorithm/ranges/copy"), [`ranges::sort`](sort.html "cpp/algorithm/ranges/sort"), ...  
[Execution policies (C++17)](../../algorithm.html#Execution_policies "cpp/algorithm")  
|  | [is_execution_policy](../is_execution_policy.html "cpp/algorithm/is execution policy")(C++17)  
---  
  
| [execution::seqexecution::parexecution::par_unseqexecution::unseq](../execution_policy_tag.html "cpp/algorithm/execution policy tag")(C++17) (C++17)(C++17)(C++20)  
---  
  
|  | [execution::sequenced_policyexecution::parallel_policyexecution::parallel_unsequenced_policyexecution::parallel_unsequenced](../execution_policy_tag_t.html "cpp/algorithm/execution policy tag t")(C++17)(C++17)(C++17)(C++20)  
---  
  
| [Non-modifying sequence operations](../../algorithm.html#Non-modifying_sequence_operations "cpp/algorithm")  
---  
[Batch operations](../../algorithm.html#Batch_operations "cpp/algorithm")  
| [for_each](../for_each.html "cpp/algorithm/for each")  
---  
  
| [for_each_n](../for_each_n.html "cpp/algorithm/for each n")(C++17)  
---  
  
[Search operations](../../algorithm.html#Search_operations "cpp/algorithm")  
| [all_ofany_ofnone_of](../none_of.html "cpp/algorithm/all any none of")(C++11) (C++11)(C++11)  
---  
[countcount_if](../count.html "cpp/algorithm/count")  
[mismatch](../mismatch.html "cpp/algorithm/mismatch")  
[equal](../equal.html "cpp/algorithm/equal")  
  
  
  
| [findfind_iffind_if_not](../find.html "cpp/algorithm/find")(C++11)  
---  
[find_end](../find_end.html "cpp/algorithm/find end")  
[find_first_of](../find_first_of.html "cpp/algorithm/find first of")  
[adjacent_find](../adjacent_find.html "cpp/algorithm/adjacent find")  
[search](../search.html "cpp/algorithm/search")  
[search_n](../search_n.html "cpp/algorithm/search n")  
  
[Modifying sequence operations](../../algorithm.html#Modifying_sequence_operations "cpp/algorithm")  
[Copy operations](../../algorithm.html#Copy_operations "cpp/algorithm")  
| [copycopy_if](../copy.html "cpp/algorithm/copy")(C++11)  
---  
[copy_backward](../copy_backward.html "cpp/algorithm/copy backward")  
  
| [copy_n](../copy_n.html "cpp/algorithm/copy n")(C++11)  
---  
[move](../move.html "cpp/algorithm/move")(C++11)  
[move_backward](../move_backward.html "cpp/algorithm/move backward")(C++11)  
  
[Swap operations](../../algorithm.html#Swap_operations "cpp/algorithm")  
| [swap](../../utility/swap.html "cpp/algorithm/swap")  
---  
[iter_swap](../iter_swap.html "cpp/algorithm/iter swap")  
  
| [swap_ranges](../swap_ranges.html "cpp/algorithm/swap ranges")  
---  
  
  
  
[Transformation operations](../../algorithm.html#Transformation_operations "cpp/algorithm")  
| [replacereplace_if](../replace.html "cpp/algorithm/replace")  
---  
[transform](../transform.html "cpp/algorithm/transform")  
  
| [replace_copyreplace_copy_if](../replace_copy.html "cpp/algorithm/replace copy")  
---  
  
  
  
[Generation operations](../../algorithm.html#Generation_operations "cpp/algorithm")  
| [fill](../fill.html "cpp/algorithm/fill")  
---  
[fill_n](../fill_n.html "cpp/algorithm/fill n")  
  
| [generate](../generate.html "cpp/algorithm/generate")  
---  
[generate_n](../generate_n.html "cpp/algorithm/generate n")  
  
[Removing operations](../../algorithm.html#Removing_operations "cpp/algorithm")  
| [removeremove_if](../remove.html "cpp/algorithm/remove")  
---  
[unique](../unique.html "cpp/algorithm/unique")  
  
| [remove_copyremove_copy_if](../remove_copy.html "cpp/algorithm/remove copy")  
---  
[unique_copy](../unique_copy.html "cpp/algorithm/unique copy")  
  
[Order-changing operations](../../algorithm.html#Order-changing_operations "cpp/algorithm")  
| [reverse](../reverse.html "cpp/algorithm/reverse")  
---  
[reverse_copy](../reverse_copy.html "cpp/algorithm/reverse copy")  
[rotate](../rotate.html "cpp/algorithm/rotate")  
[rotate_copy](../rotate_copy.html "cpp/algorithm/rotate copy")  
  
| [random_shuffleshuffle](../random_shuffle.html "cpp/algorithm/random shuffle")(until C++17)(C++11)  
---  
[shift_leftshift_right](../shift.html "cpp/algorithm/shift")(C++20)(C++20)  
  
[Sampling operations](../../algorithm.html#Sampling_operations "cpp/algorithm")  
| [sample](../sample.html "cpp/algorithm/sample")(C++17)  
---  
  
|   
  
---  
  
| [Sorting and related operations](../../algorithm.html#Sorting_and_related_operations "cpp/algorithm")  
---  
[Partitioning operations](../../algorithm.html#Partitioning_operations "cpp/algorithm")  
| [partition](../partition.html "cpp/algorithm/partition")  
---  
[partition_copy](../partition_copy.html "cpp/algorithm/partition copy")(C++11)  
[stable_partition](../stable_partition.html "cpp/algorithm/stable partition")  
  
| [is_partitioned](../is_partitioned.html "cpp/algorithm/is partitioned")(C++11)  
---  
[partition_point](../partition_point.html "cpp/algorithm/partition point")(C++11)  
  
  
  
[Sorting operations](../../algorithm.html#Sorting_operations "cpp/algorithm")  
| [sort](../sort.html "cpp/algorithm/sort")  
---  
[stable_sort](../stable_sort.html "cpp/algorithm/stable sort")  
[partial_sort](../partial_sort.html "cpp/algorithm/partial sort")  
[partial_sort_copy](../partial_sort_copy.html "cpp/algorithm/partial sort copy")  
  
| [is_sorted](../is_sorted.html "cpp/algorithm/is sorted")(C++11)  
---  
[is_sorted_until](../is_sorted_until.html "cpp/algorithm/is sorted until")(C++11)  
[nth_element](../nth_element.html "cpp/algorithm/nth element")  
  
  
  
[Binary search operations  
(on partitioned ranges)](../../algorithm.html#Binary_search_operations_.28on_partitioned_ranges.29 "cpp/algorithm")  
| [lower_bound](../lower_bound.html "cpp/algorithm/lower bound")  
---  
[upper_bound](../upper_bound.html "cpp/algorithm/upper bound")  
  
| [equal_range](../equal_range.html "cpp/algorithm/equal range")  
---  
[binary_search](../binary_search.html "cpp/algorithm/binary search")  
  
[Set operations (on sorted ranges)](../../algorithm.html#Set_operations_.28on_sorted_ranges.29 "cpp/algorithm")  
| [includes](../includes.html "cpp/algorithm/includes")  
---  
[set_union](../set_union.html "cpp/algorithm/set union")  
[set_intersection](../set_intersection.html "cpp/algorithm/set intersection")  
  
| [set_difference](../set_difference.html "cpp/algorithm/set difference")  
---  
[set_symmetric_difference](../set_symmetric_difference.html "cpp/algorithm/set symmetric difference")  
  
  
  
[Merge operations (on sorted ranges)](../../algorithm.html#Merge_operations_.28on_sorted_ranges.29 "cpp/algorithm")  
| [merge](../merge.html "cpp/algorithm/merge")  
---  
  
| [inplace_merge](../inplace_merge.html "cpp/algorithm/inplace merge")  
---  
  
[Heap operations](../../algorithm.html#Heap_operations "cpp/algorithm")  
| [push_heap](../push_heap.html "cpp/algorithm/push heap")  
---  
[pop_heap](../pop_heap.html "cpp/algorithm/pop heap")  
[make_heap](../make_heap.html "cpp/algorithm/make heap")  
  
| [sort_heap](../sort_heap.html "cpp/algorithm/sort heap")  
---  
[is_heap](../is_heap.html "cpp/algorithm/is heap")(C++11)  
[is_heap_until](../is_heap_until.html "cpp/algorithm/is heap until")(C++11)  
  
[Minimum/maximum operations](../../algorithm.html#Minimum.2Fmaximum_operations "cpp/algorithm")  
| [max](../max.html "cpp/algorithm/max")  
---  
[min](../min.html "cpp/algorithm/min")  
[minmax](../minmax.html "cpp/algorithm/minmax")(C++11)  
[clamp](../clamp.html "cpp/algorithm/clamp")(C++17)  
  
| [max_element](../max_element.html "cpp/algorithm/max element")  
---  
[min_element](../min_element.html "cpp/algorithm/min element")  
[minmax_element](../minmax_element.html "cpp/algorithm/minmax element")(C++11)  
  
  
  
[Lexicographical comparison operations](../../algorithm.html#Lexicographical_comparison_operations "cpp/algorithm")  
[lexicographical_compare](../lexicographical_compare.html "cpp/algorithm/lexicographical compare")  
[lexicographical_compare_three_way](../lexicographical_compare_three_way.html "cpp/algorithm/lexicographical compare three way")(C++20)  
[Permutation operations](../../algorithm.html#Permutation_operations "cpp/algorithm")  
| [next_permutation](../next_permutation.html "cpp/algorithm/next permutation")  
---  
[prev_permutation](../prev_permutation.html "cpp/algorithm/prev permutation")  
  
  
  
| [is_permutation](../is_permutation.html "cpp/algorithm/is permutation")(C++11)  
---  
  
  
  
  
  
[C library](../../algorithm.html#C_library "cpp/algorithm")  
| [qsort](../qsort.html "cpp/algorithm/qsort")  
---  
  
| [bsearch](../bsearch.html "cpp/algorithm/bsearch")  
---  
  
[Numeric operations](../../algorithm.html#Numeric_operations "cpp/algorithm")  
|  | [iota](../iota.html "cpp/algorithm/iota")(C++11)  
---  
[inner_product](../inner_product.html "cpp/algorithm/inner product")  
[adjacent_difference](../adjacent_difference.html "cpp/algorithm/adjacent difference")  
  
| [accumulate](../accumulate.html "cpp/algorithm/accumulate")  
---  
[reduce](../reduce.html "cpp/algorithm/reduce")(C++17)  
[transform_reduce](../transform_reduce.html "cpp/algorithm/transform reduce")(C++17)  
  
|  | [partial_sum](../partial_sum.html "cpp/algorithm/partial sum")  
---  
[inclusive_scan](../inclusive_scan.html "cpp/algorithm/inclusive scan")(C++17)  
[exclusive_scan](../exclusive_scan.html "cpp/algorithm/exclusive scan")(C++17)  
  
| [transform_inclusive_scan](../transform_inclusive_scan.html "cpp/algorithm/transform inclusive scan")(C++17)  
---  
[transform_exclusive_scan](../transform_exclusive_scan.html "cpp/algorithm/transform exclusive scan")(C++17)  
  
  
  
[Operations on uninitialized memory](../../algorithm.html#Operations_on_uninitialized_memory "cpp/algorithm")  
|  | [uninitialized_copy](../../memory/uninitialized_copy.html "cpp/memory/uninitialized copy")  
---  
[uninitialized_move](../../memory/uninitialized_move.html "cpp/memory/uninitialized move")(C++17)  
[uninitialized_fill](../../memory/uninitialized_fill.html "cpp/memory/uninitialized fill")  
  
  
  
| [uninitialized_copy_n](../../memory/uninitialized_copy_n.html "cpp/memory/uninitialized copy n")(C++11)  
---  
[uninitialized_move_n](../../memory/uninitialized_move_n.html "cpp/memory/uninitialized move n")(C++17)  
[uninitialized_fill_n](../../memory/uninitialized_fill_n.html "cpp/memory/uninitialized fill n")  
  
  
  
|  | [destroy](../../memory/destroy.html "cpp/memory/destroy")(C++17)  
---  
[destroy_n](../../memory/destroy_n.html "cpp/memory/destroy n")(C++17)  
[destroy_at](../../memory/destroy_at.html "cpp/memory/destroy at")(C++17)  
[construct_at](../../memory/construct_at.html "cpp/memory/construct at")(C++20)  
  
| [uninitialized_default_construct](../../memory/uninitialized_default_construct.html "cpp/memory/uninitialized default construct")(C++17)  
---  
[uninitialized_value_construct](../../memory/uninitialized_value_construct.html "cpp/memory/uninitialized value construct")(C++17)  
[uninitialized_default_construct_n](../../memory/uninitialized_default_construct_n.html "cpp/memory/uninitialized default construct n")(C++17)  
[uninitialized_value_construct_n](../../memory/uninitialized_value_construct_n.html "cpp/memory/uninitialized value construct n")(C++17)  
  


[Constrained algorithms](../ranges.html "cpp/algorithm/ranges")

All names in this menu belong to namespace `std::ranges`

[Non-modifying sequence operations](../ranges.html#Non-modifying_sequence_operations "cpp/algorithm/ranges")  
---  
|  | [all_ofany_ofnone_of](all_any_none_of.html "cpp/algorithm/ranges/all any none of")  
---  
[for_each](for_each.html "cpp/algorithm/ranges/for each")  
[for_each_n](for_each_n.html "cpp/algorithm/ranges/for each n")` `  
[countcount_if](count.html "cpp/algorithm/ranges/count")  
  
| [adjacent_find](adjacent_find.html "cpp/algorithm/ranges/adjacent find")  
---  
[mismatch](mismatch.html "cpp/algorithm/ranges/mismatch")  
[equal](equal.html "cpp/algorithm/ranges/equal")  
[lexicographical_compare](lexicographical_compare.html "cpp/algorithm/ranges/lexicographical compare")` `  
[containscontains_subrange](contains.html "cpp/algorithm/ranges/contains")(C++23)(C++23)  
  
  
  
| [findfind_iffind_if_not](find.html "cpp/algorithm/ranges/find")  
---  
[find_lastfind_last_iffind_last_if_not](find_last.html "cpp/algorithm/ranges/find last")(C++23)(C++23)(C++23)` `  
  
  
  
| [find_end](find_end.html "cpp/algorithm/ranges/find end")  
---  
[find_first_of](find_first_of.html "cpp/algorithm/ranges/find first of")  
[search](search.html "cpp/algorithm/ranges/search")  
[search_n](search_n.html "cpp/algorithm/ranges/search n")  
[starts_with](starts_with.html "cpp/algorithm/ranges/starts with")(C++23)  
[ends_with](ends_with.html "cpp/algorithm/ranges/ends with")(C++23)  
  
  
  
[Modifying sequence operations](../ranges.html#Modifying_sequence_operations "cpp/algorithm/ranges")  
|  | [copycopy_if](copy.html "cpp/algorithm/ranges/copy")  
---  
[copy_n](copy_n.html "cpp/algorithm/ranges/copy n")  
[copy_backward](copy_backward.html "cpp/algorithm/ranges/copy backward")` `  
[move](move.html "cpp/algorithm/ranges/move")  
[move_backward](move_backward.html "cpp/algorithm/ranges/move backward")  
  
| [shift_leftshift_right](shift.html "cpp/algorithm/ranges/shift")(C++23)(C++23)` `  
---  
[fill](fill.html "cpp/algorithm/ranges/fill")  
[fill_n](fill_n.html "cpp/algorithm/ranges/fill n")  
[generate](generate.html "cpp/algorithm/ranges/generate")  
[generate_n](generate_n.html "cpp/algorithm/ranges/generate n")` `  
  
| [transform](transform.html "cpp/algorithm/ranges/transform")  
---  
[swap_ranges](swap_ranges.html "cpp/algorithm/ranges/swap ranges")` `  
[shuffle](shuffle.html "cpp/algorithm/ranges/shuffle")  
[sample](sample.html "cpp/algorithm/ranges/sample")  
[removeremove_if](remove.html "cpp/algorithm/ranges/remove")  
  
| [replacereplace_if](replace.html "cpp/algorithm/ranges/replace")  
---  
[reverse](reverse.html "cpp/algorithm/ranges/reverse")  
[rotate](rotate.html "cpp/algorithm/ranges/rotate")  
[remove_copyremove_copy_if](remove_copy.html "cpp/algorithm/ranges/remove copy")` `  
  
| [unique](unique.html "cpp/algorithm/ranges/unique")  
---  
[replace_copyreplace_copy_if](replace_copy.html "cpp/algorithm/ranges/replace copy")  
[reverse_copy](reverse_copy.html "cpp/algorithm/ranges/reverse copy")  
[rotate_copy](rotate_copy.html "cpp/algorithm/ranges/rotate copy")  
[unique_copy](unique_copy.html "cpp/algorithm/ranges/unique copy")  
  
[Partitioning operations](../ranges.html#Partitioning_operations "cpp/algorithm/ranges")  
|  | [is_partitioned](is_partitioned.html "cpp/algorithm/ranges/is partitioned")` `  
---  
  
| [partition_point](partition_point.html "cpp/algorithm/ranges/partition point")` `  
---  
  
| [partition](partition.html "cpp/algorithm/ranges/partition")` `  
---  
  
| [partition_copy](partition_copy.html "cpp/algorithm/ranges/partition copy")` `  
---  
  
| [stable_partition](stable_partition.html "cpp/algorithm/ranges/stable partition")  
---  
  
[Sorting operations](../ranges.html#Sorting_operations "cpp/algorithm/ranges")  
|  | [is_sorted](is_sorted.html "cpp/algorithm/ranges/is sorted")  
---  
[is_sorted_until](is_sorted_until.html "cpp/algorithm/ranges/is sorted until")` `  
  
| [sort](sort.html "cpp/algorithm/ranges/sort")  
---  
[stable_sort](stable_sort.html "cpp/algorithm/ranges/stable sort")` `  
  
| [partial_sort](partial_sort.html "cpp/algorithm/ranges/partial sort")` `  
---  
[nth_element](nth_element.html "cpp/algorithm/ranges/nth element")  
  
| [partial_sort_copy](partial_sort_copy.html "cpp/algorithm/ranges/partial sort copy")  
---  
  
  
  
[Binary search operations (on sorted ranges)](../ranges.html#Binary_search_operations_.28on_sorted_ranges.29 "cpp/algorithm/ranges")  
|  | [lower_bound](lower_bound.html "cpp/algorithm/ranges/lower bound")` `  
---  
  
| [upper_bound](upper_bound.html "cpp/algorithm/ranges/upper bound")` `  
---  
  
| [binary_search](binary_search.html "cpp/algorithm/ranges/binary search")` `  
---  
  
| [equal_range](equal_range.html "cpp/algorithm/ranges/equal range")  
---  
  
[Set operations (on sorted ranges)](../ranges.html#Set_operations_.28on_sorted_ranges.29 "cpp/algorithm/ranges")  
|  | [merge](merge.html "cpp/algorithm/ranges/merge")  
---  
[inplace_merge](inplace_merge.html "cpp/algorithm/ranges/inplace merge")` `  
  
| [set_difference](set_difference.html "cpp/algorithm/ranges/set difference")  
---  
[set_intersection](set_intersection.html "cpp/algorithm/ranges/set intersection")` `  
  
| [set_union](set_union.html "cpp/algorithm/ranges/set union")` `  
---  
[includes](includes.html "cpp/algorithm/ranges/includes")  
  
| [set_symmetric_difference](set_symmetric_difference.html "cpp/algorithm/ranges/set symmetric difference")  
---  
  
  
  
[Heap operations](../ranges.html#Heap_operations "cpp/algorithm/ranges")  
|  | [is_heap](is_heap.html "cpp/algorithm/ranges/is heap")  
---  
[is_heap_until](is_heap_until.html "cpp/algorithm/ranges/is heap until")` `  
  
| [make_heap](make_heap.html "cpp/algorithm/ranges/make heap")` `  
---  
[sort_heap](sort_heap.html "cpp/algorithm/ranges/sort heap")  
  
| [push_heap](push_heap.html "cpp/algorithm/ranges/push heap")  
---  
[pop_heap](pop_heap.html "cpp/algorithm/ranges/pop heap")  
  
[Minimum/maximum operations](../ranges.html#Minimum.2Fmaximum_operations "cpp/algorithm/ranges")  
|  | [max](max.html "cpp/algorithm/ranges/max")  
---  
[max_element](max_element.html "cpp/algorithm/ranges/max element")` `  
  
| [min](min.html "cpp/algorithm/ranges/min")  
---  
[min_element](min_element.html "cpp/algorithm/ranges/min element")` `  
  
| [minmax](minmax.html "cpp/algorithm/ranges/minmax")  
---  
[minmax_element](minmax_element.html "cpp/algorithm/ranges/minmax element")` `  
  
| **clamp**  
---  
  
  
  
[Permutation operations](../ranges.html#Permutation_operations "cpp/algorithm/ranges")  
|  | [is_permutation](is_permutation.html "cpp/algorithm/ranges/is permutation")` `  
---  
  
| [next_permutation](next_permutation.html "cpp/algorithm/ranges/next permutation")` `  
---  
  
| [prev_permutation](prev_permutation.html "cpp/algorithm/ranges/prev permutation")  
---  
  
[Fold operations](../ranges.html#Constrained_fold_operations "cpp/algorithm/ranges")  
|  | [fold_left](fold_left.html "cpp/algorithm/ranges/fold left")(C++23)  
---  
[fold_left_first](fold_left_first.html "cpp/algorithm/ranges/fold left first")(C++23)` `  
  
| [fold_right](fold_right.html "cpp/algorithm/ranges/fold right")(C++23)  
---  
[fold_right_last](fold_right_last.html "cpp/algorithm/ranges/fold right last")(C++23)` `  
  
| [fold_left_with_iter](fold_left_with_iter.html "cpp/algorithm/ranges/fold left with iter")(C++23)  
---  
[fold_left_first_with_iter](fold_left_first_with_iter.html "cpp/algorithm/ranges/fold left first with iter")(C++23)  
  
|  | [Numeric operations](../ranges.html#Constrained_numeric_operations "cpp/algorithm/ranges")  
---  
| [iota](iota.html "cpp/algorithm/ranges/iota")(C++23)` `  
---  
  
| [Random number generation](../ranges.html#Constrained_random_number_algorithms "cpp/algorithm/ranges")  
---  
| [generate_random](generate_random.html "cpp/algorithm/ranges/generate random")(C++26)  
---  
  
[Operations on uninitialized storage](../ranges.html#Constrained_uninitialized_memory_algorithms "cpp/algorithm/ranges")  
|  | [construct_at](../../memory/ranges/construct_at.html "cpp/memory/ranges/construct at")` `  
---  
[destroy](../../memory/ranges/destroy.html "cpp/memory/ranges/destroy")  
[destroy_n](../../memory/ranges/destroy_n.html "cpp/memory/ranges/destroy n")  
[destroy_at](../../memory/ranges/destroy_at.html "cpp/memory/ranges/destroy at")  
  
| [uninitialized_copy](../../memory/ranges/uninitialized_copy.html "cpp/memory/ranges/uninitialized copy")` `  
---  
[uninitialized_move](../../memory/ranges/uninitialized_move.html "cpp/memory/ranges/uninitialized move")  
[uninitialized_fill](../../memory/ranges/uninitialized_fill.html "cpp/memory/ranges/uninitialized fill")  
  
  
  
| [uninitialized_copy_n](../../memory/ranges/uninitialized_copy_n.html "cpp/memory/ranges/uninitialized copy n")` `  
---  
[uninitialized_move_n](../../memory/ranges/uninitialized_move_n.html "cpp/memory/ranges/uninitialized move n")  
[uninitialized_fill_n](../../memory/ranges/uninitialized_fill_n.html "cpp/memory/ranges/uninitialized fill n")  
  
  
  
| [uninitialized_default_construct](../../memory/ranges/uninitialized_default_construct.html "cpp/memory/ranges/uninitialized default construct")  
---  
[uninitialized_default_construct_n](../../memory/ranges/uninitialized_default_construct_n.html "cpp/memory/ranges/uninitialized default construct n")  
[uninitialized_value_construct](../../memory/ranges/uninitialized_value_construct.html "cpp/memory/ranges/uninitialized value construct")  
[uninitialized_value_construct_n](../../memory/ranges/uninitialized_value_construct_n.html "cpp/memory/ranges/uninitialized value construct n")  
  
[Return types](../ranges.html#Return_types "cpp/algorithm/ranges")  
|  | [in_fun_result](return_types/in_fun_result.html "cpp/algorithm/ranges/return types/in fun result")  
---  
[in_in_result](return_types/in_in_result.html "cpp/algorithm/ranges/return types/in in result")  
[in_found_result](return_types/in_found_result.html "cpp/algorithm/ranges/return types/in found result")` `  
  
| [in_out_result](return_types/in_out_result.html "cpp/algorithm/ranges/return types/in out result")  
---  
[in_in_out_result](return_types/in_in_out_result.html "cpp/algorithm/ranges/return types/in in out result")` `  
  
  
  
| [in_out_out_result](return_types/in_out_out_result.html "cpp/algorithm/ranges/return types/in out out result")` `  
---  
[min_max_result](return_types/min_max_result.html "cpp/algorithm/ranges/return types/min max result")  
  
  
  
| [out_value_result](return_types/out_value_result.html "cpp/algorithm/ranges/return types/out value result")(C++23)  
---  
[in_value_result](return_types/in_value_result.html "cpp/algorithm/ranges/return types/in value result")(C++23)  
  
  
  


Defined in header `[<algorithm>](../../header/algorithm.html "cpp/header/algorithm")` |  |   
---|---|---  
Call signature |  |   
template< class T, class Proj = [std::identity](../../utility/functional/identity.html),  
[std::indirect_strict_weak_order](../../iterator/indirect_strict_weak_order.html)<std::[projected](http://en.cppreference.com/w/cpp/ranges-placeholder/iterator/projected)<const T*, Proj>> Comp =  
[ranges::less](http://en.cppreference.com/w/cpp/ranges-functional-placeholder/less) >  
constexpr const T&  
clamp( const T& v, const T& lo, const T& hi, Comp comp = {}, Proj proj = {} ); |  |  (since C++20)  
| |   
  
If the value of [std::invoke](../../utility/functional/invoke.html)(proj, v) is within `[`[std::invoke](../../utility/functional/invoke.html)(proj, lo)`, `[std::invoke](../../utility/functional/invoke.html)(proj, hi)`]`, returns v; otherwise returns the nearest boundary. 

The behavior is undefined if [std::invoke](../../utility/functional/invoke.html)(proj, lo) is greater than [std::invoke](../../utility/functional/invoke.html)(proj, hi). 

The function-like entities described on this page are [_algorithm function objects_](../ranges.html#Algorithm_function_objects "cpp/algorithm/ranges") (informally known as _niebloids_), that is: 

  * Explicit template argument lists cannot be specified when calling any of them. 
  * None of them are visible to [argument-dependent lookup](../../language/adl.html "cpp/language/adl"). 
  * When any of them are found by [normal unqualified lookup](../../language/unqualified_lookup.html "cpp/language/unqualified lookup") as the name to the left of the function-call operator, [argument-dependent lookup](../../language/adl.html "cpp/language/adl") is inhibited. 



## Contents

  * [1 Parameters](clamp.html#Parameters)
  * [2 Return value](clamp.html#Return_value)
  * [3 Complexity](clamp.html#Complexity)
  * [4 Possible implementation](clamp.html#Possible_implementation)
  * [5 Notes](clamp.html#Notes)
  * [6 Example](clamp.html#Example)
  * [7 See also](clamp.html#See_also)

  
---  
  
### Parameters

v  |  \-  |  the value to clamp   
---|---|---  
lo, hi  |  \-  |  the boundaries to clamp v to   
comp  |  \-  |  the comparison to apply to the projected elements   
proj  |  \-  |  the projection to apply to v, lo and hi  
  
### Return value

Reference to lo if the projected value of v is less than the projected value of lo, reference to hi if the projected value of hi is less than the projected value of v, otherwise reference to v. 

### Complexity

At most two comparisons and three applications of the projection. 

### Possible implementation
    
    
    struct clamp_fn
    {
        template<class T, class Proj = [std::identity](../../utility/functional/identity.html),
                 [std::indirect_strict_weak_order](../../iterator/indirect_strict_weak_order.html)<std::[projected](http://en.cppreference.com/w/cpp/ranges-placeholder/iterator/projected)<const T*, Proj>>
                     Comp = std::[ranges::less](http://en.cppreference.com/w/cpp/ranges-functional-placeholder/less)>
        constexpr const T& operator()(const T& v, const T& lo, const T& hi,
                                      Comp comp = {}, Proj proj = {}) const
        {
            auto&& pv = [std::invoke](../../utility/functional/invoke.html)(proj, v);
     
            if ([std::invoke](../../utility/functional/invoke.html)(comp, [std::forward](../../utility/forward.html)<decltype(pv)>(pv), [std::invoke](../../utility/functional/invoke.html)(proj, lo)))
                return lo;
     
            if ([std::invoke](../../utility/functional/invoke.html)(comp, [std::invoke](../../utility/functional/invoke.html)(proj, hi), [std::forward](../../utility/forward.html)<decltype(pv)>(pv)))
                return hi;
     
            return v;
        }
    };
     
    inline constexpr clamp_fn clamp;  
  
---  
  
### Notes



Capturing the result of `std::ranges::clamp` by reference produces a dangling reference if one of the parameters is a temporary and that parameter is returned: 
    
    
    int n = -1;
    const int& r = std::ranges::clamp(n, 0, 255); // r is dangling

If v compares equivalent to either bound, returns a reference to v, not the bound. 

This function should not be used with both a projection the returns by value and comparator that takes arguments by value unless a move from the projection result type to the comparator parameter type is equivalent to a copy. If the comparison via [std::invoke](../../utility/functional/invoke.html "cpp/utility/functional/invoke") would change the result of projection, the behavior is undefined due to [the semantic requirements of `std::regular_invocable`](../../concepts/invocable.html "cpp/concepts/invocable") (subsumed by [std::indirect_strict_weak_order](../../iterator/indirect_strict_weak_order.html "cpp/iterator/indirect strict weak order")). 

The standard requires that the value category of the result of the projection be preserved, and proj can only be called on v once, which means that a projection result that is a prvalue has to be cached and moved from twice for the two calls to the comparator. 

  * [libstdc++](https://github.com/gcc-mirror/gcc/blob/f3169941996c76ecbfae9c37709d2b57652be555/libstdc%2B%2B-v3/include/bits/ranges_algo.h#L3196-L3218) does not conform to this and always passes the projection result as an lvalue. 
  * [libc++](https://github.com/llvm/llvm-project/issues/64717) used to run the projection twice, which was corrected in Clang 18. 
  * [MSVC STL](https://github.com/microsoft/STL/issues/1893) used to run the projection twice, which was corrected in VS 2022 17.2. 



### Example

Run this code
    
    
    #include <algorithm>
    #include <cstdint>
    #include <iomanip>
    #include <iostream>
    #include <string>
     
    using namespace std::literals;
    namespace ranges = std::ranges;
     
    int main()
    {
        [std::cout](../../io/cout.html) << "[raw] [" << [INT8_MIN](../../types/integer.html) << ',' << [INT8_MAX](../../types/integer.html) << "] "
                     "[0" << ',' << [UINT8_MAX](../../types/integer.html) << "]\n";
        for (int const v : {-129, -128, -1, 0, 42, 127, 128, 255, 256})
            [std::cout](../../io/cout.html) << [std::setw](../../io/manip/setw.html)(4) << v
                      << [std::setw](../../io/manip/setw.html)(11) << ranges::clamp(v, [INT8_MIN](../../types/integer.html), [INT8_MAX](../../types/integer.html))
                      << [std::setw](../../io/manip/setw.html)(8) << ranges::clamp(v, 0, [UINT8_MAX](../../types/integer.html)) << '\n';
        [std::cout](../../io/cout.html) << [std::string](../../string/basic_string.html)(23, '-') << '\n';
     
        // Projection function
        const auto stoi = []([std::string](../../string/basic_string.html) s) { return [std::stoi](../../string/basic_string/stol.html)(s); };
     
        // Same as above, but with strings
        for ([std::string](../../string/basic_string.html) const v : {"-129", "-128", "-1", "0", "42",
                                    "127", "128", "255", "256"})
            [std::cout](../../io/cout.html) << [std::setw](../../io/manip/setw.html)(4) << v
                      << [std::setw](../../io/manip/setw.html)(11) << ranges::clamp(v, "-128"s, "127"s, {}, stoi)
                      << [std::setw](../../io/manip/setw.html)(8) << ranges::clamp(v, "0"s, "255"s, {}, stoi)
                      << '\n';
    }

Output: 
    
    
    [raw] [-128,127] [0,255]
    -129       -128       0
    -128       -128       0
      -1         -1       0
       0          0       0
      42         42      42
     127        127     127
     128        127     128
     255        127     255
     256        127     255
    -----------------------
    -129       -128       0
    -128       -128       0
      -1         -1       0
       0          0       0
      42         42      42
     127        127     127
     128        127     128
     255        127     255
     256        127     255

### See also

[ ranges::min](min.html "cpp/algorithm/ranges/min")(C++20) |  returns the smaller of the given values  
(algorithm function object)  
---|---  
[ ranges::max](max.html "cpp/algorithm/ranges/max")(C++20) |  returns the greater of the given values  
(algorithm function object)  
[ in_range](../../utility/in_range.html "cpp/utility/in range")(C++20) |  checks if an integer value is in the range of a given integer type   
(function template)   
[ clamp](../clamp.html "cpp/algorithm/clamp")(C++17) |  clamps a value between a pair of boundary values   
(function template) 
