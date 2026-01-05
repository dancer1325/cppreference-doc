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
  
| [clamp](clamp.html "cpp/algorithm/ranges/clamp")  
---  
  
  
  
[Permutation operations](../ranges.html#Permutation_operations "cpp/algorithm/ranges")  
|  | **is_permutation**` `  
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
template< [std::forward_iterator](../../iterator/forward_iterator.html) I1, [std::sentinel_for](../../iterator/sentinel_for.html)<I1> S1,  
[std::forward_iterator](../../iterator/forward_iterator.html) I2, [std::sentinel_for](../../iterator/sentinel_for.html)<I2> S2,  
class Proj1 = [std::identity](../../utility/functional/identity.html), class Proj2 = [std::identity](../../utility/functional/identity.html),  
[std::indirect_equivalence_relation](../../iterator/indirect_equivalence_relation.html)<std::[projected](http://en.cppreference.com/w/cpp/ranges-placeholder/iterator/projected)<I1, Proj1>,  
std::[projected](http://en.cppreference.com/w/cpp/ranges-placeholder/iterator/projected)<I2, Proj2>>  
Pred = [ranges::equal_to](http://en.cppreference.com/w/cpp/ranges-functional-placeholder/equal_to) >  
constexpr bool  
is_permutation( I1 first1, S1 last1, I2 first2, S2 last2, Pred pred = {},  
Proj1 proj1 = {}, Proj2 proj2 = {} ); |  (1)  |  (since C++20)  
template< [ranges::forward_range](../../ranges/forward_range.html) R1, [ranges::forward_range](../../ranges/forward_range.html) R2,  
class Proj1 = [std::identity](../../utility/functional/identity.html), class Proj2 = [std::identity](../../utility/functional/identity.html),  
[std::indirect_equivalence_relation](../../iterator/indirect_equivalence_relation.html)<  
std::[projected](http://en.cppreference.com/w/cpp/ranges-placeholder/iterator/projected)<[ranges::iterator_t](../../ranges/iterator_t.html)<R1>, Proj1>,  
std::[projected](http://en.cppreference.com/w/cpp/ranges-placeholder/iterator/projected)<[ranges::iterator_t](../../ranges/iterator_t.html)<R2>, Proj2>>  
Pred = [ranges::equal_to](http://en.cppreference.com/w/cpp/ranges-functional-placeholder/equal_to) >  
constexpr bool  
is_permutation( R1&& r1, R2&& r2, Pred pred = {},  
Proj1 proj1 = {}, Proj2 proj2 = {} ); |  (2)  |  (since C++20)  
| |   
  
1) Returns true if there exists a [permutation](https://en.wikipedia.org/wiki/permutation "enwiki:permutation") of the elements in range `[`first1`, `last1`)` that makes the range _equal_ to `[`first2`, `last2`)` (after application of corresponding projections Proj1, Proj2, and using the binary predicate Pred as a comparator). Otherwise returns false.

2) Same as (1), but uses r1 as the first source range and r2 as the second source range, as if using [ranges::begin](../../ranges/begin.html)(r1) as first1, [ranges::end](../../ranges/end.html)(r1) as last1, [ranges::begin](../../ranges/begin.html)(r2) as first2, and [ranges::end](../../ranges/end.html)(r2) as last2.

The function-like entities described on this page are [_algorithm function objects_](../ranges.html#Algorithm_function_objects "cpp/algorithm/ranges") (informally known as _niebloids_), that is: 

  * Explicit template argument lists cannot be specified when calling any of them. 
  * None of them are visible to [argument-dependent lookup](../../language/adl.html "cpp/language/adl"). 
  * When any of them are found by [normal unqualified lookup](../../language/unqualified_lookup.html "cpp/language/unqualified lookup") as the name to the left of the function-call operator, [argument-dependent lookup](../../language/adl.html "cpp/language/adl") is inhibited. 



## Contents

  * [1 Parameters](is_permutation.html#Parameters)
  * [2 Return value](is_permutation.html#Return_value)
  * [3 Complexity](is_permutation.html#Complexity)
  * [4 Notes](is_permutation.html#Notes)
  * [5 Possible implementation](is_permutation.html#Possible_implementation)
  * [6 Example](is_permutation.html#Example)
  * [7 See also](is_permutation.html#See_also)

  
---  
  
### Parameters

first1, last1  |  \-  |  the iterator-sentinel pair defining the first [range](../../iterator.html#Ranges "cpp/iterator") of elements   
---|---|---  
first2, last2  |  \-  |  the iterator-sentinel pair defining the second [range](../../iterator.html#Ranges "cpp/iterator") of elements   
r1  |  \-  |  the first [`range`](../../ranges/range.html "cpp/ranges/range") of the elements   
r2  |  \-  |  the second [`range`](../../ranges/range.html "cpp/ranges/range") of the elements   
pred  |  \-  |  predicate to apply to the projected elements   
proj1  |  \-  |  projection to apply to the elements in the first range   
proj2  |  \-  |  projection to apply to the elements in the second range   
  
### Return value

true if the range `[`first1`, `last1`)` is a permutation of the range `[`first2`, `last2`)`. 

### Complexity

At most \\(\scriptsize \mathcal{O}(N^2)\\)O(N2) applications of the predicate and each projection, or exactly \\(\scriptsize N\\)N if the sequences are already equal, where \\(\scriptsize N\\)N is [ranges::distance](../../iterator/ranges/distance.html)(first1, last1). However if [ranges::distance](../../iterator/ranges/distance.html)(first1, last1) != [ranges::distance](../../iterator/ranges/distance.html)(first2, last2), no applications of the predicate and projections are made. 

### Notes

The _permutation_ relation is an [equivalence relation](https://en.wikipedia.org/wiki/equivalence_relation "enwiki:equivalence relation"). 

The `ranges::is_permutation` can be used in testing, e.g. to check the correctness of rearranging algorithms such as sorting, shuffling, partitioning. If `p` is an original sequence and `q` is a "mutated" sequence, then ranges::is_permutation(p, q) == true means that `q` consist of "the same" elements (maybe permuted) as `p`. 

### Possible implementation
    
    
    struct is_permutation_fn
    {
        template<[std::forward_iterator](../../iterator/forward_iterator.html) I1, [std::sentinel_for](../../iterator/sentinel_for.html)<I1> S1,
                 [std::forward_iterator](../../iterator/forward_iterator.html) I2, [std::sentinel_for](../../iterator/sentinel_for.html)<I2> S2,
                 class Proj1 = [std::identity](../../utility/functional/identity.html), class Proj2 = [std::identity](../../utility/functional/identity.html),
                 [std::indirect_equivalence_relation](../../iterator/indirect_equivalence_relation.html)<std::[projected](http://en.cppreference.com/w/cpp/ranges-placeholder/iterator/projected)<I1, Proj1>,
                                                    std::[projected](http://en.cppreference.com/w/cpp/ranges-placeholder/iterator/projected)<I2, Proj2>>
                                                        Pred = [ranges::equal_to](http://en.cppreference.com/w/cpp/ranges-functional-placeholder/equal_to)>
        constexpr bool operator()(I1 first1, S1 last1, I2 first2, S2 last2,
                                  Pred pred = {}, Proj1 proj1 = {}, Proj2 proj2 = {}) const
        {
            // skip common prefix
            auto ret = std::[ranges::mismatch](mismatch.html)(first1, last1, first2, last2,
                                             [std::ref](../../utility/functional/ref.html)(pred), [std::ref](../../utility/functional/ref.html)(proj1), [std::ref](../../utility/functional/ref.html)(proj2));
            first1 = ret.in1, first2 = ret.in2;
     
            // iterate over the rest, counting how many times each element
            // from [first1, last1) appears in [first2, last2)
            for (auto i {first1}; i != last1; ++i)
            {
                const auto i_proj {[std::invoke](../../utility/functional/invoke.html)(proj1, *i)};
                auto i_cmp = [&]<typename T>(T&& t)
                { 
                    return [std::invoke](../../utility/functional/invoke.html)(pred, i_proj, [std::forward](../../utility/forward.html)<T>(t));
                };
     
                if (i != [ranges::find_if](find.html)(first1, i, i_cmp, proj1))
                    continue; // this *i has been checked
     
                if (const auto m {[ranges::count_if](count.html)(first2, last2, i_cmp, proj2)};
                    m == 0 or m != [ranges::count_if](count.html)(i, last1, i_cmp, proj1))
                    return false;
            }
            return true;
        }
     
        template<[ranges::forward_range](../../ranges/forward_range.html) R1, [ranges::forward_range](../../ranges/forward_range.html) R2,
                 class Proj1 = [std::identity](../../utility/functional/identity.html), class Proj2 = [std::identity](../../utility/functional/identity.html),
                 [std::indirect_equivalence_relation](../../iterator/indirect_equivalence_relation.html)<
                     std::[projected](http://en.cppreference.com/w/cpp/ranges-placeholder/iterator/projected)<[ranges::iterator_t](../../ranges/iterator_t.html)<R1>, Proj1>,
                     std::[projected](http://en.cppreference.com/w/cpp/ranges-placeholder/iterator/projected)<[ranges::iterator_t](../../ranges/iterator_t.html)<R2>, Proj2>>
                         Pred = [ranges::equal_to](http://en.cppreference.com/w/cpp/ranges-functional-placeholder/equal_to)>
        constexpr bool operator()(R1&& r1, R2&& r2, Pred pred = {},
                                  Proj1 proj1 = {}, Proj2 proj2 = {}) const
        {
            return (*this)([ranges::begin](../../ranges/begin.html)(r1), [ranges::end](../../ranges/end.html)(r1),
                           [ranges::begin](../../ranges/begin.html)(r2), [ranges::end](../../ranges/end.html)(r2),
                           std::move(pred), std::move(proj1), std::move(proj2));
        }
    };
     
    inline constexpr is_permutation_fn is_permutation {};  
  
---  
  
### Example

Run this code
    
    
    #include <algorithm>
    #include <array>
    #include <cmath>
    #include <iostream>
    #include <ranges>
     
    auto& operator<<(auto& os, std::[ranges::forward_range](../../ranges/forward_range.html) auto const& v)
    {
        os << "{ ";
        for (const auto& e : v)
            os << e << ' ';
        return os << "}";
    }
     
    int main()
    {
        static constexpr auto r1 = {1, 2, 3, 4, 5};
        static constexpr auto r2 = {3, 5, 4, 1, 2};
        static constexpr auto r3 = {3, 5, 4, 1, 1};
     
        static_assert(
            std::ranges::is_permutation(r1, r1) &&
            std::ranges::is_permutation(r1, r2) &&
            std::ranges::is_permutation(r2, r1) &&
            std::ranges::is_permutation(r1.begin(), r1.end(), r2.begin(), r2.end()));
     
        [std::cout](../../io/cout.html)
            << [std::boolalpha](../../io/manip/boolalpha.html)
            << "is_permutation(" << r1 << ", " << r2 << "): "
            << std::ranges::is_permutation(r1, r2) << '\n'
            << "is_permutation(" << r1 << ", " << r3 << "): "
            << std::ranges::is_permutation(r1, r3) << '\n'
     
            << "is_permutation with custom predicate and projections: "
            << std::ranges::is_permutation(
                [std::array](../../container/array.html) {-14, -11, -13, -15, -12},  // 1st range
                [std::array](../../container/array.html) {'F', 'E', 'C', 'B', 'D'},  // 2nd range
                [](int x, int y) { return abs(x) == abs(y); }, // predicate
                [](int x) { return x + 10; },          // projection for 1st range
                [](char y) { return int(y - 'A'); })   // projection for 2nd range
            << '\n';
    }

Output: 
    
    
    is_permutation({ 1 2 3 4 5 }, { 3 5 4 1 2 }): true
    is_permutation({ 1 2 3 4 5 }, { 3 5 4 1 1 }): false
    is_permutation with custom predicate and projections: true

### See also

[ ranges::next_permutation](next_permutation.html "cpp/algorithm/ranges/next permutation")(C++20) |  generates the next greater lexicographic permutation of a range of elements  
(algorithm function object)  
---|---  
[ ranges::prev_permutation](prev_permutation.html "cpp/algorithm/ranges/prev permutation")(C++20) |  generates the next smaller lexicographic permutation of a range of elements  
(algorithm function object)  
[ is_permutation](../is_permutation.html "cpp/algorithm/is permutation")(C++11) |  determines if a sequence is a permutation of another sequence   
(function template)   
[ next_permutation](../next_permutation.html "cpp/algorithm/next permutation") |  generates the next greater lexicographic permutation of a range of elements   
(function template)   
[ prev_permutation](../prev_permutation.html "cpp/algorithm/prev permutation") |  generates the next smaller lexicographic permutation of a range of elements   
(function template)   
[ equivalence_relation](../../concepts/equivalence_relation.html "cpp/concepts/equivalence relation")(C++20) |  specifies that a [`relation`](../../concepts/relation.html "cpp/concepts/relation") imposes an equivalence relation   
(concept) 
