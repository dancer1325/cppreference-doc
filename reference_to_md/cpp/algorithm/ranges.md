
  


[Algorithm library](../algorithm.html "cpp/algorithm")

**Constrained algorithms and algorithms on ranges** (C++20)  
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
| [swap](../utility/swap.html "cpp/algorithm/swap")  
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
  


**Constrained algorithms**

All names in this menu belong to namespace `std::ranges`

[Non-modifying sequence operations](ranges.html#Non-modifying_sequence_operations "cpp/algorithm/ranges")  
---  
|  | [all_ofany_ofnone_of](ranges/all_any_none_of.html "cpp/algorithm/ranges/all any none of")  
---  
[for_each](ranges/for_each.html "cpp/algorithm/ranges/for each")  
[for_each_n](ranges/for_each_n.html "cpp/algorithm/ranges/for each n")` `  
[countcount_if](ranges/count.html "cpp/algorithm/ranges/count")  
  
| [adjacent_find](ranges/adjacent_find.html "cpp/algorithm/ranges/adjacent find")  
---  
[mismatch](ranges/mismatch.html "cpp/algorithm/ranges/mismatch")  
[equal](ranges/equal.html "cpp/algorithm/ranges/equal")  
[lexicographical_compare](ranges/lexicographical_compare.html "cpp/algorithm/ranges/lexicographical compare")` `  
[containscontains_subrange](ranges/contains.html "cpp/algorithm/ranges/contains")(C++23)(C++23)  
  
  
  
| [findfind_iffind_if_not](ranges/find.html "cpp/algorithm/ranges/find")  
---  
[find_lastfind_last_iffind_last_if_not](ranges/find_last.html "cpp/algorithm/ranges/find last")(C++23)(C++23)(C++23)` `  
  
  
  
| [find_end](ranges/find_end.html "cpp/algorithm/ranges/find end")  
---  
[find_first_of](ranges/find_first_of.html "cpp/algorithm/ranges/find first of")  
[search](ranges/search.html "cpp/algorithm/ranges/search")  
[search_n](ranges/search_n.html "cpp/algorithm/ranges/search n")  
[starts_with](ranges/starts_with.html "cpp/algorithm/ranges/starts with")(C++23)  
[ends_with](ranges/ends_with.html "cpp/algorithm/ranges/ends with")(C++23)  
  
  
  
[Modifying sequence operations](ranges.html#Modifying_sequence_operations "cpp/algorithm/ranges")  
|  | [copycopy_if](ranges/copy.html "cpp/algorithm/ranges/copy")  
---  
[copy_n](ranges/copy_n.html "cpp/algorithm/ranges/copy n")  
[copy_backward](ranges/copy_backward.html "cpp/algorithm/ranges/copy backward")` `  
[move](ranges/move.html "cpp/algorithm/ranges/move")  
[move_backward](ranges/move_backward.html "cpp/algorithm/ranges/move backward")  
  
| [shift_leftshift_right](ranges/shift.html "cpp/algorithm/ranges/shift")(C++23)(C++23)` `  
---  
[fill](ranges/fill.html "cpp/algorithm/ranges/fill")  
[fill_n](ranges/fill_n.html "cpp/algorithm/ranges/fill n")  
[generate](ranges/generate.html "cpp/algorithm/ranges/generate")  
[generate_n](ranges/generate_n.html "cpp/algorithm/ranges/generate n")` `  
  
| [transform](ranges/transform.html "cpp/algorithm/ranges/transform")  
---  
[swap_ranges](ranges/swap_ranges.html "cpp/algorithm/ranges/swap ranges")` `  
[shuffle](ranges/shuffle.html "cpp/algorithm/ranges/shuffle")  
[sample](ranges/sample.html "cpp/algorithm/ranges/sample")  
[removeremove_if](ranges/remove.html "cpp/algorithm/ranges/remove")  
  
| [replacereplace_if](ranges/replace.html "cpp/algorithm/ranges/replace")  
---  
[reverse](ranges/reverse.html "cpp/algorithm/ranges/reverse")  
[rotate](ranges/rotate.html "cpp/algorithm/ranges/rotate")  
[remove_copyremove_copy_if](ranges/remove_copy.html "cpp/algorithm/ranges/remove copy")` `  
  
| [unique](ranges/unique.html "cpp/algorithm/ranges/unique")  
---  
[replace_copyreplace_copy_if](ranges/replace_copy.html "cpp/algorithm/ranges/replace copy")  
[reverse_copy](ranges/reverse_copy.html "cpp/algorithm/ranges/reverse copy")  
[rotate_copy](ranges/rotate_copy.html "cpp/algorithm/ranges/rotate copy")  
[unique_copy](ranges/unique_copy.html "cpp/algorithm/ranges/unique copy")  
  
[Partitioning operations](ranges.html#Partitioning_operations "cpp/algorithm/ranges")  
|  | [is_partitioned](ranges/is_partitioned.html "cpp/algorithm/ranges/is partitioned")` `  
---  
  
| [partition_point](ranges/partition_point.html "cpp/algorithm/ranges/partition point")` `  
---  
  
| [partition](ranges/partition.html "cpp/algorithm/ranges/partition")` `  
---  
  
| [partition_copy](ranges/partition_copy.html "cpp/algorithm/ranges/partition copy")` `  
---  
  
| [stable_partition](ranges/stable_partition.html "cpp/algorithm/ranges/stable partition")  
---  
  
[Sorting operations](ranges.html#Sorting_operations "cpp/algorithm/ranges")  
|  | [is_sorted](ranges/is_sorted.html "cpp/algorithm/ranges/is sorted")  
---  
[is_sorted_until](ranges/is_sorted_until.html "cpp/algorithm/ranges/is sorted until")` `  
  
| [sort](ranges/sort.html "cpp/algorithm/ranges/sort")  
---  
[stable_sort](ranges/stable_sort.html "cpp/algorithm/ranges/stable sort")` `  
  
| [partial_sort](ranges/partial_sort.html "cpp/algorithm/ranges/partial sort")` `  
---  
[nth_element](ranges/nth_element.html "cpp/algorithm/ranges/nth element")  
  
| [partial_sort_copy](ranges/partial_sort_copy.html "cpp/algorithm/ranges/partial sort copy")  
---  
  
  
  
[Binary search operations (on sorted ranges)](ranges.html#Binary_search_operations_.28on_sorted_ranges.29 "cpp/algorithm/ranges")  
|  | [lower_bound](ranges/lower_bound.html "cpp/algorithm/ranges/lower bound")` `  
---  
  
| [upper_bound](ranges/upper_bound.html "cpp/algorithm/ranges/upper bound")` `  
---  
  
| [binary_search](ranges/binary_search.html "cpp/algorithm/ranges/binary search")` `  
---  
  
| [equal_range](ranges/equal_range.html "cpp/algorithm/ranges/equal range")  
---  
  
[Set operations (on sorted ranges)](ranges.html#Set_operations_.28on_sorted_ranges.29 "cpp/algorithm/ranges")  
|  | [merge](ranges/merge.html "cpp/algorithm/ranges/merge")  
---  
[inplace_merge](ranges/inplace_merge.html "cpp/algorithm/ranges/inplace merge")` `  
  
| [set_difference](ranges/set_difference.html "cpp/algorithm/ranges/set difference")  
---  
[set_intersection](ranges/set_intersection.html "cpp/algorithm/ranges/set intersection")` `  
  
| [set_union](ranges/set_union.html "cpp/algorithm/ranges/set union")` `  
---  
[includes](ranges/includes.html "cpp/algorithm/ranges/includes")  
  
| [set_symmetric_difference](ranges/set_symmetric_difference.html "cpp/algorithm/ranges/set symmetric difference")  
---  
  
  
  
[Heap operations](ranges.html#Heap_operations "cpp/algorithm/ranges")  
|  | [is_heap](ranges/is_heap.html "cpp/algorithm/ranges/is heap")  
---  
[is_heap_until](ranges/is_heap_until.html "cpp/algorithm/ranges/is heap until")` `  
  
| [make_heap](ranges/make_heap.html "cpp/algorithm/ranges/make heap")` `  
---  
[sort_heap](ranges/sort_heap.html "cpp/algorithm/ranges/sort heap")  
  
| [push_heap](ranges/push_heap.html "cpp/algorithm/ranges/push heap")  
---  
[pop_heap](ranges/pop_heap.html "cpp/algorithm/ranges/pop heap")  
  
[Minimum/maximum operations](ranges.html#Minimum.2Fmaximum_operations "cpp/algorithm/ranges")  
|  | [max](ranges/max.html "cpp/algorithm/ranges/max")  
---  
[max_element](ranges/max_element.html "cpp/algorithm/ranges/max element")` `  
  
| [min](ranges/min.html "cpp/algorithm/ranges/min")  
---  
[min_element](ranges/min_element.html "cpp/algorithm/ranges/min element")` `  
  
| [minmax](ranges/minmax.html "cpp/algorithm/ranges/minmax")  
---  
[minmax_element](ranges/minmax_element.html "cpp/algorithm/ranges/minmax element")` `  
  
| [clamp](ranges/clamp.html "cpp/algorithm/ranges/clamp")  
---  
  
  
  
[Permutation operations](ranges.html#Permutation_operations "cpp/algorithm/ranges")  
|  | [is_permutation](ranges/is_permutation.html "cpp/algorithm/ranges/is permutation")` `  
---  
  
| [next_permutation](ranges/next_permutation.html "cpp/algorithm/ranges/next permutation")` `  
---  
  
| [prev_permutation](ranges/prev_permutation.html "cpp/algorithm/ranges/prev permutation")  
---  
  
[Fold operations](ranges.html#Constrained_fold_operations "cpp/algorithm/ranges")  
|  | [fold_left](ranges/fold_left.html "cpp/algorithm/ranges/fold left")(C++23)  
---  
[fold_left_first](ranges/fold_left_first.html "cpp/algorithm/ranges/fold left first")(C++23)` `  
  
| [fold_right](ranges/fold_right.html "cpp/algorithm/ranges/fold right")(C++23)  
---  
[fold_right_last](ranges/fold_right_last.html "cpp/algorithm/ranges/fold right last")(C++23)` `  
  
| [fold_left_with_iter](ranges/fold_left_with_iter.html "cpp/algorithm/ranges/fold left with iter")(C++23)  
---  
[fold_left_first_with_iter](ranges/fold_left_first_with_iter.html "cpp/algorithm/ranges/fold left first with iter")(C++23)  
  
|  | [Numeric operations](ranges.html#Constrained_numeric_operations "cpp/algorithm/ranges")  
---  
| [iota](ranges/iota.html "cpp/algorithm/ranges/iota")(C++23)` `  
---  
  
| [Random number generation](ranges.html#Constrained_random_number_algorithms "cpp/algorithm/ranges")  
---  
| [generate_random](ranges/generate_random.html "cpp/algorithm/ranges/generate random")(C++26)  
---  
  
[Operations on uninitialized storage](ranges.html#Constrained_uninitialized_memory_algorithms "cpp/algorithm/ranges")  
|  | [construct_at](../memory/ranges/construct_at.html "cpp/memory/ranges/construct at")` `  
---  
[destroy](../memory/ranges/destroy.html "cpp/memory/ranges/destroy")  
[destroy_n](../memory/ranges/destroy_n.html "cpp/memory/ranges/destroy n")  
[destroy_at](../memory/ranges/destroy_at.html "cpp/memory/ranges/destroy at")  
  
| [uninitialized_copy](../memory/ranges/uninitialized_copy.html "cpp/memory/ranges/uninitialized copy")` `  
---  
[uninitialized_move](../memory/ranges/uninitialized_move.html "cpp/memory/ranges/uninitialized move")  
[uninitialized_fill](../memory/ranges/uninitialized_fill.html "cpp/memory/ranges/uninitialized fill")  
  
  
  
| [uninitialized_copy_n](../memory/ranges/uninitialized_copy_n.html "cpp/memory/ranges/uninitialized copy n")` `  
---  
[uninitialized_move_n](../memory/ranges/uninitialized_move_n.html "cpp/memory/ranges/uninitialized move n")  
[uninitialized_fill_n](../memory/ranges/uninitialized_fill_n.html "cpp/memory/ranges/uninitialized fill n")  
  
  
  
| [uninitialized_default_construct](../memory/ranges/uninitialized_default_construct.html "cpp/memory/ranges/uninitialized default construct")  
---  
[uninitialized_default_construct_n](../memory/ranges/uninitialized_default_construct_n.html "cpp/memory/ranges/uninitialized default construct n")  
[uninitialized_value_construct](../memory/ranges/uninitialized_value_construct.html "cpp/memory/ranges/uninitialized value construct")  
[uninitialized_value_construct_n](../memory/ranges/uninitialized_value_construct_n.html "cpp/memory/ranges/uninitialized value construct n")  
  
[Return types](ranges.html#Return_types "cpp/algorithm/ranges")  
|  | [in_fun_result](ranges/return_types/in_fun_result.html "cpp/algorithm/ranges/return types/in fun result")  
---  
[in_in_result](ranges/return_types/in_in_result.html "cpp/algorithm/ranges/return types/in in result")  
[in_found_result](ranges/return_types/in_found_result.html "cpp/algorithm/ranges/return types/in found result")` `  
  
| [in_out_result](ranges/return_types/in_out_result.html "cpp/algorithm/ranges/return types/in out result")  
---  
[in_in_out_result](ranges/return_types/in_in_out_result.html "cpp/algorithm/ranges/return types/in in out result")` `  
  
  
  
| [in_out_out_result](ranges/return_types/in_out_out_result.html "cpp/algorithm/ranges/return types/in out out result")` `  
---  
[min_max_result](ranges/return_types/min_max_result.html "cpp/algorithm/ranges/return types/min max result")  
  
  
  
| [out_value_result](ranges/return_types/out_value_result.html "cpp/algorithm/ranges/return types/out value result")(C++23)  
---  
[in_value_result](ranges/return_types/in_value_result.html "cpp/algorithm/ranges/return types/in value result")(C++23)  
  
  
  


C++20 provides [constrained](../language/constraints.html "cpp/language/constraints") versions of most algorithms in the namespace `std::ranges`. In these algorithms, a range can be specified as either an [iterator](../iterator/input_or_output_iterator.html "cpp/iterator/input or output iterator")-[sentinel](../iterator/sentinel_for.html "cpp/iterator/sentinel for") pair or as a single [`range`](../ranges/range.html "cpp/ranges/range") argument, and projections and pointer-to-member callables are supported. Additionally, the [return types](ranges.html#Return_types "cpp/algorithm/ranges") of most algorithms have been changed to return all potentially useful information computed during the execution of the algorithm. 

## Contents

  * [1 Algorithm function objects](ranges.html#Algorithm_function_objects)
  * [2 Constrained algorithms](ranges.html#Constrained_algorithms)
    * [2.1 Non-modifying sequence operations](ranges.html#Non-modifying_sequence_operations)
    * [2.2 Modifying sequence operations](ranges.html#Modifying_sequence_operations)
    * [2.3 Partitioning operations](ranges.html#Partitioning_operations)
    * [2.4 Sorting operations](ranges.html#Sorting_operations)
    * [2.5 Binary search operations (on sorted ranges)](ranges.html#Binary_search_operations_.28on_sorted_ranges.29)
    * [2.6 Set operations (on sorted ranges)](ranges.html#Set_operations_.28on_sorted_ranges.29)
    * [2.7 Heap operations](ranges.html#Heap_operations)
    * [2.8 Minimum/maximum operations](ranges.html#Minimum.2Fmaximum_operations)
    * [2.9 Permutation operations](ranges.html#Permutation_operations)
  * [3 Constrained numeric operations](ranges.html#Constrained_numeric_operations)
  * [4 Constrained fold operations](ranges.html#Constrained_fold_operations)
  * [5 Constrained uninitialized memory algorithms](ranges.html#Constrained_uninitialized_memory_algorithms)
  * [6 Constrained random number algorithms](ranges.html#Constrained_random_number_algorithms)
  * [7 Return types](ranges.html#Return_types)
  * [8 Notes](ranges.html#Notes)
  * [9 Defect reports](ranges.html#Defect_reports)

  
---  
  
### Algorithm function objects

An _algorithm function object_ (AFO), informally known as _niebloid_ , is a [customization point object](../ranges/cpo.html "cpp/standard library/cpo") (CPO) that is specified as one or more overloaded function templates. The name of these function templates designates the corresponding algorithm function object. 

For an algorithm function object o, let `S` be the corresponding set of function templates. Then for any sequence of arguments args..., o(args...) is [expression-equivalent](../language/expressions.html#Expression-equivalence "cpp/language/expressions") to s(args...), where the result of name lookup for s is the overload set `S`. 

The constrained algorithms in the namespace `std::ranges` are defined as algorithm function objects. As a result: 

  * Explicit template argument lists cannot be specified when calling any of them. 
  * None of them are visible to [argument-dependent lookup](../language/adl.html "cpp/language/adl"). 
  * When any of them are found by [normal unqualified lookup](../language/unqualified_lookup.html "cpp/language/unqualified lookup") as the name to the left of the function-call operator, [argument-dependent lookup](../language/adl.html "cpp/language/adl") is inhibited. 



### Constrained algorithms

Defined in header `[<algorithm>](../header/algorithm.html "cpp/header/algorithm")`  
---  
Defined in namespace `std::ranges`  
  
#####  Non-modifying sequence operations   
  
[ ranges::all_ofranges::any_ofranges::none_of](ranges/all_any_none_of.html "cpp/algorithm/ranges/all any none of")(C++20)(C++20)(C++20) |  checks if a predicate is true for all, any or none of the elements in a range  
(algorithm function object)  
[ ranges::for_each](ranges/for_each.html "cpp/algorithm/ranges/for each")(C++20) |  applies a unary [function object](../named_req/FunctionObject.html "cpp/named req/FunctionObject") to elements from a [range](../iterator.html#Ranges "cpp/iterator")  
(algorithm function object)  
[ ranges::for_each_n](ranges/for_each_n.html "cpp/algorithm/ranges/for each n")(C++20) |  applies a function object to the first N elements of a sequence  
(algorithm function object)  
[ ranges::countranges::count_if](ranges/count.html "cpp/algorithm/ranges/count")(C++20)(C++20) |  returns the number of elements satisfying specific criteria  
(algorithm function object)  
[ ranges::mismatch](ranges/mismatch.html "cpp/algorithm/ranges/mismatch")(C++20) |  finds the first position where two ranges differ  
(algorithm function object)  
[ ranges::equal](ranges/equal.html "cpp/algorithm/ranges/equal")(C++20) |  determines if two sets of elements are the same  
(algorithm function object)  
[ ranges::lexicographical_compare](ranges/lexicographical_compare.html "cpp/algorithm/ranges/lexicographical compare")(C++20) |  returns true if one range is lexicographically less than another  
(algorithm function object)  
[ ranges::findranges::find_ifranges::find_if_not](ranges/find.html "cpp/algorithm/ranges/find")(C++20)(C++20)(C++20) |  finds the first element satisfying specific criteria  
(algorithm function object)  
[ ranges::find_lastranges::find_last_ifranges::find_last_if_not](ranges/find_last.html "cpp/algorithm/ranges/find last")(C++23)(C++23)(C++23) |  finds the last element satisfying specific criteria  
(algorithm function object)  
[ ranges::find_end](ranges/find_end.html "cpp/algorithm/ranges/find end")(C++20) |  finds the last sequence of elements in a certain range  
(algorithm function object)  
[ ranges::find_first_of](ranges/find_first_of.html "cpp/algorithm/ranges/find first of")(C++20) |  searches for any one of a set of elements  
(algorithm function object)  
[ ranges::adjacent_find](ranges/adjacent_find.html "cpp/algorithm/ranges/adjacent find")(C++20) |  finds the first two adjacent items that are equal (or satisfy a given predicate)  
(algorithm function object)  
[ ranges::search](ranges/search.html "cpp/algorithm/ranges/search")(C++20) |  searches for the first occurrence of a range of elements  
(algorithm function object)  
[ ranges::search_n](ranges/search_n.html "cpp/algorithm/ranges/search n")(C++20) |  searches for the first occurrence of a number consecutive copies of an element in a range  
(algorithm function object)  
[ ranges::containsranges::contains_subrange](ranges/contains.html "cpp/algorithm/ranges/contains")(C++23)(C++23) |  checks if the range contains the given element or subrange  
(algorithm function object)  
[ ranges::starts_with](ranges/starts_with.html "cpp/algorithm/ranges/starts with")(C++23) |  checks whether a range starts with another range  
(algorithm function object)  
[ ranges::ends_with](ranges/ends_with.html "cpp/algorithm/ranges/ends with")(C++23) |  checks whether a range ends with another range  
(algorithm function object)  
  
#####  Modifying sequence operations   
  
[ ranges::copyranges::copy_if](ranges/copy.html "cpp/algorithm/ranges/copy")(C++20)(C++20) |  copies a range of elements to a new location  
(algorithm function object)  
[ ranges::copy_n](ranges/copy_n.html "cpp/algorithm/ranges/copy n")(C++20) |  copies a number of elements to a new location  
(algorithm function object)  
[ ranges::copy_backward](ranges/copy_backward.html "cpp/algorithm/ranges/copy backward")(C++20) |  copies a range of elements in backwards order  
(algorithm function object)  
[ ranges::move](ranges/move.html "cpp/algorithm/ranges/move")(C++20) |  moves a range of elements to a new location  
(algorithm function object)  
[ ranges::move_backward](ranges/move_backward.html "cpp/algorithm/ranges/move backward")(C++20) |  moves a range of elements to a new location in backwards order  
(algorithm function object)  
[ ranges::fill](ranges/fill.html "cpp/algorithm/ranges/fill")(C++20) |  assigns a range of elements a certain value  
(algorithm function object)  
[ ranges::fill_n](ranges/fill_n.html "cpp/algorithm/ranges/fill n")(C++20) |  assigns a value to a number of elements  
(algorithm function object)  
[ ranges::transform](ranges/transform.html "cpp/algorithm/ranges/transform")(C++20) |  applies a function to a range of elements  
(algorithm function object)  
[ ranges::generate](ranges/generate.html "cpp/algorithm/ranges/generate")(C++20) |  saves the result of a function in a range  
(algorithm function object)  
[ ranges::generate_n](ranges/generate_n.html "cpp/algorithm/ranges/generate n")(C++20) |  saves the result of N applications of a function  
(algorithm function object)  
[ ranges::removeranges::remove_if](ranges/remove.html "cpp/algorithm/ranges/remove")(C++20)(C++20) |  removes elements satisfying specific criteria  
(algorithm function object)  
[ ranges::remove_copyranges::remove_copy_if](ranges/remove_copy.html "cpp/algorithm/ranges/remove copy")(C++20)(C++20) |  copies a range of elements omitting those that satisfy specific criteria  
(algorithm function object)  
[ ranges::replaceranges::replace_if](ranges/replace.html "cpp/algorithm/ranges/replace")(C++20)(C++20) |  replaces all values satisfying specific criteria with another value  
(algorithm function object)  
[ ranges::replace_copyranges::replace_copy_if](ranges/replace_copy.html "cpp/algorithm/ranges/replace copy")(C++20)(C++20) |  copies a range, replacing elements satisfying specific criteria with another value  
(algorithm function object)  
[ ranges::swap_ranges](ranges/swap_ranges.html "cpp/algorithm/ranges/swap ranges")(C++20) |  swaps two ranges of elements  
(algorithm function object)  
[ ranges::reverse](ranges/reverse.html "cpp/algorithm/ranges/reverse")(C++20) |  reverses the order of elements in a range  
(algorithm function object)  
[ ranges::reverse_copy](ranges/reverse_copy.html "cpp/algorithm/ranges/reverse copy")(C++20) |  creates a copy of a range that is reversed  
(algorithm function object)  
[ ranges::rotate](ranges/rotate.html "cpp/algorithm/ranges/rotate")(C++20) |  rotates the order of elements in a range  
(algorithm function object)  
[ ranges::rotate_copy](ranges/rotate_copy.html "cpp/algorithm/ranges/rotate copy")(C++20) |  copies and rotate a range of elements  
(algorithm function object)  
[ ranges::shuffle](ranges/shuffle.html "cpp/algorithm/ranges/shuffle")(C++20) |  randomly re-orders elements in a range  
(algorithm function object)  
[ ranges::shift_leftranges::shift_right](ranges/shift.html "cpp/algorithm/ranges/shift")(C++23) |  shifts elements in a range  
(algorithm function object)  
[ ranges::sample](ranges/sample.html "cpp/algorithm/ranges/sample")(C++20) |  selects N random elements from a sequence  
(algorithm function object)  
[ ranges::unique](ranges/unique.html "cpp/algorithm/ranges/unique")(C++20) |  removes consecutive duplicate elements in a range  
(algorithm function object)  
[ ranges::unique_copy](ranges/unique_copy.html "cpp/algorithm/ranges/unique copy")(C++20) |  creates a copy of some range of elements that contains no consecutive duplicates  
(algorithm function object)  
  
#####  Partitioning operations   
  
[ ranges::is_partitioned](ranges/is_partitioned.html "cpp/algorithm/ranges/is partitioned")(C++20) |  determines if the range is partitioned by the given predicate  
(algorithm function object)  
[ ranges::partition](ranges/partition.html "cpp/algorithm/ranges/partition")(C++20) |  divides a range of elements into two groups  
(algorithm function object)  
[ ranges::partition_copy](ranges/partition_copy.html "cpp/algorithm/ranges/partition copy")(C++20) |  copies a range dividing the elements into two groups  
(algorithm function object)  
[ ranges::stable_partition](ranges/stable_partition.html "cpp/algorithm/ranges/stable partition")(C++20) |  divides elements into two groups while preserving their relative order  
(algorithm function object)  
[ ranges::partition_point](ranges/partition_point.html "cpp/algorithm/ranges/partition point")(C++20) |  locates the partition point of a partitioned range  
(algorithm function object)  
  
#####  Sorting operations   
  
[ ranges::is_sorted](ranges/is_sorted.html "cpp/algorithm/ranges/is sorted")(C++20) |  checks whether a range is sorted into ascending order  
(algorithm function object)  
[ ranges::is_sorted_until](ranges/is_sorted_until.html "cpp/algorithm/ranges/is sorted until")(C++20) |  finds the largest sorted subrange  
(algorithm function object)  
[ ranges::sort](ranges/sort.html "cpp/algorithm/ranges/sort")(C++20) |  sorts a range into ascending order  
(algorithm function object)  
[ ranges::partial_sort](ranges/partial_sort.html "cpp/algorithm/ranges/partial sort")(C++20) |  sorts the first N elements of a range  
(algorithm function object)  
[ ranges::partial_sort_copy](ranges/partial_sort_copy.html "cpp/algorithm/ranges/partial sort copy")(C++20) |  copies and partially sorts a range of elements  
(algorithm function object)  
[ ranges::stable_sort](ranges/stable_sort.html "cpp/algorithm/ranges/stable sort")(C++20) |  sorts a range of elements while preserving order between equal elements  
(algorithm function object)  
[ ranges::nth_element](ranges/nth_element.html "cpp/algorithm/ranges/nth element")(C++20) |  partially sorts the given range making sure that it is partitioned by the given element  
(algorithm function object)  
  
#####  Binary search operations (on sorted ranges)   
  
[ ranges::lower_bound](ranges/lower_bound.html "cpp/algorithm/ranges/lower bound")(C++20) |  returns an iterator to the first element _not less_ than the given value  
(algorithm function object)  
[ ranges::upper_bound](ranges/upper_bound.html "cpp/algorithm/ranges/upper bound")(C++20) |  returns an iterator to the first element _greater_ than a certain value  
(algorithm function object)  
[ ranges::binary_search](ranges/binary_search.html "cpp/algorithm/ranges/binary search")(C++20) |  determines if an element exists in a partially-ordered range  
(algorithm function object)  
[ ranges::equal_range](ranges/equal_range.html "cpp/algorithm/ranges/equal range")(C++20) |  returns range of elements matching a specific key  
(algorithm function object)  
  
#####  Set operations (on sorted ranges)   
  
[ ranges::merge](ranges/merge.html "cpp/algorithm/ranges/merge")(C++20) |  merges two sorted ranges  
(algorithm function object)  
[ ranges::inplace_merge](ranges/inplace_merge.html "cpp/algorithm/ranges/inplace merge")(C++20) |  merges two ordered ranges in-place  
(algorithm function object)  
[ ranges::includes](ranges/includes.html "cpp/algorithm/ranges/includes")(C++20) |  returns true if one sequence is a subsequence of another  
(algorithm function object)  
[ ranges::set_difference](ranges/set_difference.html "cpp/algorithm/ranges/set difference")(C++20) |  computes the difference between two sets  
(algorithm function object)  
[ ranges::set_intersection](ranges/set_intersection.html "cpp/algorithm/ranges/set intersection")(C++20) |  computes the intersection of two sets  
(algorithm function object)  
[ ranges::set_symmetric_difference](ranges/set_symmetric_difference.html "cpp/algorithm/ranges/set symmetric difference")(C++20) |  computes the symmetric difference between two sets  
(algorithm function object)  
[ ranges::set_union](ranges/set_union.html "cpp/algorithm/ranges/set union")(C++20) |  computes the union of two sets  
(algorithm function object)  
  
#####  Heap operations   
  
[ ranges::is_heap](ranges/is_heap.html "cpp/algorithm/ranges/is heap")(C++20) |  checks if the given range is a max heap  
(algorithm function object)  
[ ranges::is_heap_until](ranges/is_heap_until.html "cpp/algorithm/ranges/is heap until")(C++20) |  finds the largest subrange that is a max heap  
(algorithm function object)  
[ ranges::make_heap](ranges/make_heap.html "cpp/algorithm/ranges/make heap")(C++20) |  creates a max heap out of a range of elements  
(algorithm function object)  
[ ranges::push_heap](ranges/push_heap.html "cpp/algorithm/ranges/push heap")(C++20) |  adds an element to a max heap  
(algorithm function object)  
[ ranges::pop_heap](ranges/pop_heap.html "cpp/algorithm/ranges/pop heap")(C++20) |  removes the largest element from a max heap  
(algorithm function object)  
[ ranges::sort_heap](ranges/sort_heap.html "cpp/algorithm/ranges/sort heap")(C++20) |  turns a max heap into a range of elements sorted in ascending order  
(algorithm function object)  
  
#####  Minimum/maximum operations   
  
[ ranges::max](ranges/max.html "cpp/algorithm/ranges/max")(C++20) |  returns the greater of the given values  
(algorithm function object)  
[ ranges::max_element](ranges/max_element.html "cpp/algorithm/ranges/max element")(C++20) |  returns the largest element in a range  
(algorithm function object)  
[ ranges::min](ranges/min.html "cpp/algorithm/ranges/min")(C++20) |  returns the smaller of the given values  
(algorithm function object)  
[ ranges::min_element](ranges/min_element.html "cpp/algorithm/ranges/min element")(C++20) |  returns the smallest element in a range  
(algorithm function object)  
[ ranges::minmax](ranges/minmax.html "cpp/algorithm/ranges/minmax")(C++20) |  returns the smaller and larger of two elements  
(algorithm function object)  
[ ranges::minmax_element](ranges/minmax_element.html "cpp/algorithm/ranges/minmax element")(C++20) |  returns the smallest and the largest elements in a range  
(algorithm function object)  
[ ranges::clamp](ranges/clamp.html "cpp/algorithm/ranges/clamp")(C++20) |  clamps a value between a pair of boundary values  
(algorithm function object)  
  
#####  Permutation operations   
  
[ ranges::is_permutation](ranges/is_permutation.html "cpp/algorithm/ranges/is permutation")(C++20) |  determines if a sequence is a permutation of another sequence  
(algorithm function object)  
[ ranges::next_permutation](ranges/next_permutation.html "cpp/algorithm/ranges/next permutation")(C++20) |  generates the next greater lexicographic permutation of a range of elements  
(algorithm function object)  
[ ranges::prev_permutation](ranges/prev_permutation.html "cpp/algorithm/ranges/prev permutation")(C++20) |  generates the next smaller lexicographic permutation of a range of elements  
(algorithm function object)  
  
### Constrained numeric operations

Defined in header `[<numeric>](../header/numeric.html "cpp/header/numeric")`  
---  
Defined in namespace `std::ranges`  
[ ranges::iota](ranges/iota.html "cpp/algorithm/ranges/iota")(C++23) |  fills a range with successive increments of the starting value  
(algorithm function object)  
  
### Constrained fold operations

Defined in header `[<algorithm>](../header/algorithm.html "cpp/header/algorithm")`  
---  
Defined in namespace `std::ranges`  
[ ranges::fold_left](ranges/fold_left.html "cpp/algorithm/ranges/fold left")(C++23) |  left-folds a range of elements  
(algorithm function object)  
[ ranges::fold_left_first](ranges/fold_left_first.html "cpp/algorithm/ranges/fold left first")(C++23) |  left-folds a range of elements using the first element as an initial value  
(algorithm function object)  
[ ranges::fold_right](ranges/fold_right.html "cpp/algorithm/ranges/fold right")(C++23) |  right-folds a range of elements  
(algorithm function object)  
[ ranges::fold_right_last](ranges/fold_right_last.html "cpp/algorithm/ranges/fold right last")(C++23) |  right-folds a range of elements using the last element as an initial value  
(algorithm function object)  
[ ranges::fold_left_with_iter](ranges/fold_left_with_iter.html "cpp/algorithm/ranges/fold left with iter")(C++23) |  left-folds a range of elements, and returns a [pair](ranges/return_types/in_value_result.html "cpp/algorithm/ranges/return types/in value result") (iterator, value)  
(algorithm function object)  
[ ranges::fold_left_first_with_iter](ranges/fold_left_first_with_iter.html "cpp/algorithm/ranges/fold left first with iter")(C++23) |  left-folds a range of elements using the first element as an initial value, and returns a [pair](ranges/return_types/in_value_result.html "cpp/algorithm/ranges/return types/in value result") (iterator, [optional](../utility/optional.html "cpp/utility/optional"))  
(algorithm function object)  
  
### Constrained uninitialized memory algorithms

Defined in header `[<memory>](../header/memory.html "cpp/header/memory")`  
---  
Defined in namespace `std::ranges`  
[ ranges::uninitialized_copy](../memory/ranges/uninitialized_copy.html "cpp/memory/ranges/uninitialized copy")(C++20) |  copies a range of objects to an uninitialized area of memory  
(algorithm function object)  
[ ranges::uninitialized_copy_n](../memory/ranges/uninitialized_copy_n.html "cpp/memory/ranges/uninitialized copy n")(C++20) |  copies a number of objects to an uninitialized area of memory  
(algorithm function object)  
[ ranges::uninitialized_fill](../memory/ranges/uninitialized_fill.html "cpp/memory/ranges/uninitialized fill")(C++20) |  copies an object to an uninitialized area of memory, defined by a range  
(algorithm function object)  
[ ranges::uninitialized_fill_n](../memory/ranges/uninitialized_fill_n.html "cpp/memory/ranges/uninitialized fill n")(C++20) |  copies an object to an uninitialized area of memory, defined by a start and a count  
(algorithm function object)  
[ ranges::uninitialized_move](../memory/ranges/uninitialized_move.html "cpp/memory/ranges/uninitialized move")(C++20) |  moves a range of objects to an uninitialized area of memory  
(algorithm function object)  
[ ranges::uninitialized_move_n](../memory/ranges/uninitialized_move_n.html "cpp/memory/ranges/uninitialized move n")(C++20) |  moves a number of objects to an uninitialized area of memory  
(algorithm function object)  
[ ranges::uninitialized_default_construct](../memory/ranges/uninitialized_default_construct.html "cpp/memory/ranges/uninitialized default construct")(C++20) |  constructs objects by [default-initialization](../language/default_initialization.html "cpp/language/default initialization") in an uninitialized area of memory, defined by a range  
(algorithm function object)  
[ ranges::uninitialized_default_construct_n](../memory/ranges/uninitialized_default_construct_n.html "cpp/memory/ranges/uninitialized default construct n")(C++20) |  constructs objects by [default-initialization](../language/default_initialization.html "cpp/language/default initialization") in an uninitialized area of memory, defined by a start and count  
(algorithm function object)  
[ ranges::uninitialized_value_construct](../memory/ranges/uninitialized_value_construct.html "cpp/memory/ranges/uninitialized value construct")(C++20) |  constructs objects by [value-initialization](../language/value_initialization.html "cpp/language/value initialization") in an uninitialized area of memory, defined by a range  
(algorithm function object)  
[ ranges::uninitialized_value_construct_n](../memory/ranges/uninitialized_value_construct_n.html "cpp/memory/ranges/uninitialized value construct n")(C++20) |  constructs objects by [value-initialization](../language/value_initialization.html "cpp/language/value initialization") in an uninitialized area of memory, defined by a start and a count  
(algorithm function object)  
[ ranges::destroy](../memory/ranges/destroy.html "cpp/memory/ranges/destroy")(C++20) |  destroys a range of objects  
(algorithm function object)  
[ ranges::destroy_n](../memory/ranges/destroy_n.html "cpp/memory/ranges/destroy n")(C++20) |  destroys a number of objects in a range  
(algorithm function object)  
[ ranges::destroy_at](../memory/ranges/destroy_at.html "cpp/memory/ranges/destroy at")(C++20) |  destroys an object at a given address  
(algorithm function object)  
[ ranges::construct_at](../memory/ranges/construct_at.html "cpp/memory/ranges/construct at")(C++20) |  creates an object at a given address  
(algorithm function object)  
  
### Constrained random number algorithms

Defined in header `[<random>](../header/random.html "cpp/header/random")`  
---  
Defined in namespace `std::ranges`  
[ ranges::generate_random](ranges/generate_random.html "cpp/algorithm/ranges/generate random")(C++26) |  fills a range with random numbers from a uniform random bit generator  
(algorithm function object)  
  
### Return types

Defined in header `[<algorithm>](../header/algorithm.html "cpp/header/algorithm")`  
---  
Defined in namespace `std::ranges`  
[ ranges::in_fun_result](ranges/return_types/in_fun_result.html "cpp/algorithm/ranges/return types/in fun result")(C++20) |  provides a way to store an iterator and a function object as a single unit   
(class template)   
[ ranges::in_in_result](ranges/return_types/in_in_result.html "cpp/algorithm/ranges/return types/in in result")(C++20) |  provides a way to store two iterators as a single unit   
(class template)   
[ ranges::in_out_result](ranges/return_types/in_out_result.html "cpp/algorithm/ranges/return types/in out result")(C++20) |  provides a way to store two iterators as a single unit   
(class template)   
[ ranges::in_in_out_result](ranges/return_types/in_in_out_result.html "cpp/algorithm/ranges/return types/in in out result")(C++20) |  provides a way to store three iterators as a single unit   
(class template)   
[ ranges::in_out_out_result](ranges/return_types/in_out_out_result.html "cpp/algorithm/ranges/return types/in out out result")(C++20) |  provides a way to store three iterators as a single unit   
(class template)   
[ ranges::min_max_result](ranges/return_types/min_max_result.html "cpp/algorithm/ranges/return types/min max result")(C++20) |  provides a way to store two objects or references of the same type as a single unit   
(class template)   
[ ranges::in_found_result](ranges/return_types/in_found_result.html "cpp/algorithm/ranges/return types/in found result")(C++20) |  provides a way to store an iterator and a boolean flag as a single unit   
(class template)   
[ ranges::in_value_result](ranges/return_types/in_value_result.html "cpp/algorithm/ranges/return types/in value result")(C++23) |  provides a way to store an iterator and a value as a single unit   
(class template)   
[ ranges::out_value_result](ranges/return_types/out_value_result.html "cpp/algorithm/ranges/return types/out value result")(C++23) |  provides a way to store an iterator and a value as a single unit   
(class template)   
  
### Notes

[Feature-test](../utility/feature_test.html "cpp/utility/feature test") macro  | Value | Std | Feature   
---|---|---|---  
[`__cpp_lib_algorithm_default_value_type`](../experimental/feature_test.html#cpp_lib_algorithm_default_value_type "cpp/feature test") | [`202403L`](../compiler_support/26.html#cpp_lib_algorithm_default_value_type_202403L "cpp/compiler support/26") | (C++26) | [List-initialization](../language/list_initialization.html "cpp/language/list initialization") for algorithms   
[`__cpp_lib_ranges`](../experimental/feature_test.html#cpp_lib_ranges "cpp/feature test") | [`201911L`](../compiler_support/20.html#cpp_lib_ranges_201911L "cpp/compiler support/20") | (C++20) | [Ranges library](../ranges.html "cpp/ranges") and [constrained algorithms](ranges.html#Top)  
[`__cpp_lib_ranges_contains`](../experimental/feature_test.html#cpp_lib_ranges_contains "cpp/feature test") | [`202207L`](../compiler_support/23.html#cpp_lib_ranges_contains_202207L "cpp/compiler support/23") | (C++23) | std::ranges::contains  
[`__cpp_lib_ranges_find_last`](../experimental/feature_test.html#cpp_lib_ranges_find_last "cpp/feature test") | [`202207L`](../compiler_support/23.html#cpp_lib_ranges_find_last_202207L "cpp/compiler support/23") | (C++23) | std::ranges::find_last  
[`__cpp_lib_ranges_fold`](../experimental/feature_test.html#cpp_lib_ranges_fold "cpp/feature test") | [`202207L`](../compiler_support/23.html#cpp_lib_ranges_fold_202207L "cpp/compiler support/23") | (C++23) | `std::ranges` [fold algorithms](ranges.html#Constrained_fold_operations)  
[`__cpp_lib_ranges_iota`](../experimental/feature_test.html#cpp_lib_ranges_iota "cpp/feature test") | [`202202L`](../compiler_support/23.html#cpp_lib_ranges_iota_202202L "cpp/compiler support/23") | (C++23) | std::ranges::iota  
[`__cpp_lib_ranges_starts_ends_with`](../experimental/feature_test.html#cpp_lib_ranges_starts_ends_with "cpp/feature test") | [`202106L`](../compiler_support/23.html#cpp_lib_ranges_starts_ends_with_202106L "cpp/compiler support/23") | (C++23) | std::ranges::starts_with, std::ranges::ends_with  
[`__cpp_lib_shift`](../experimental/feature_test.html#cpp_lib_shift "cpp/feature test") | [`201806L`](../compiler_support/20.html#cpp_lib_shift_201806L "cpp/compiler support/20") | (C++20) | std::shift_left, std::shift_right  
[`202202L`](../compiler_support/23.html#cpp_lib_shift_202202L "cpp/compiler support/23") | (C++23) | std::ranges::shift_left, std::ranges::shift_right  
[`__cpp_lib_ranges_generate_random`](../experimental/feature_test.html#cpp_lib_ranges_generate_random "cpp/feature test") | [`202403L`](../compiler_support/26.html#cpp_lib_ranges_generate_random_202403L "cpp/compiler support/26") | (C++26) | std::ranges::generate_random  
  
### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[P3136R1](https://wg21.link/P3136R1) | C++20  | niebloids were allowed to be specified as special entities  
other than function objects  | required to be specified as function objects 
  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
