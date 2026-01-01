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
  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/navbar_content&action=edit)

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
  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/algorithm/navbar_content&action=edit)

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
  
| **fold_left_with_iter**(C++23)  
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
  
  
  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/algorithm/ranges/navbar_content&action=edit)

Defined in header `[<algorithm>](../../header/algorithm.html "cpp/header/algorithm")` |  |   
---|---|---  
Call signature |  |   
| (1) |   
template< [std::input_iterator](../../iterator/input_iterator.html) I, [std::sentinel_for](../../iterator/sentinel_for.html)<I> S, class T,  
/* indirectly-binary-left-foldable */<T, I> F >  
constexpr /* see description */  
fold_left_with_iter( I first, S last, T init, F f ); |  | (since C++23)   
(until C++26)  
template< [std::input_iterator](../../iterator/input_iterator.html) I, [std::sentinel_for](../../iterator/sentinel_for.html)<I> S,  
class T = [std::iter_value_t](../../iterator/iter_t.html)<I>,  
/* indirectly-binary-left-foldable */<T, I> F >  
constexpr /* see description */  
fold_left_with_iter( I first, S last, T init, F f ); |  |  (since C++26)  
| (2) |   
template< [ranges::input_range](../../ranges/input_range.html) R, class T,  
/* indirectly-binary-left-foldable */  
<T, [ranges::iterator_t](../../ranges/iterator_t.html)<R>> F >  
constexpr /* see description */  
fold_left_with_iter( R&& r, T init, F f ); |  |  (since C++23)   
(until C++26)  
template< [ranges::input_range](../../ranges/input_range.html) R, class T = [ranges::range_value_t](../../ranges/range_size_t.html)<R>,  
/* indirectly-binary-left-foldable */  
<T, [ranges::iterator_t](../../ranges/iterator_t.html)<R>> F >  
constexpr /* see description */  
fold_left_with_iter( R&& r, T init, F f ); |  |  (since C++26)  
Helper concepts |  |   
template< class F, class T, class I >  
concept /* indirectly-binary-left-foldable */ = /* see description */; |  (3)  |  (exposition only*)  
Helper class template |  |   
template< class I, class T >  
using fold_left_with_iter_result = [ranges::in_value_result](return_types/in_value_result.html)<I, T>; |  (4)  |  (since C++23)  
| |   
  
Left-[folds](https://en.wikipedia.org/wiki/Fold_\(higher-order_function\) "enwiki:Fold \(higher-order function\)") the elements of given range, that is, returns the result of evaluation of the chain expression:  
`f(f(f(f(init, x1), x2), ...), xn)`, where `x1`, `x2`, ..., `xn` are elements of the range. 

Informally, `ranges::fold_left_with_iter` behaves like [std::accumulate](../accumulate.html "cpp/algorithm/accumulate")'s overload that accepts a binary predicate. 

The behavior is undefined if `[`first`, `last`)` is not a valid range. 

1) The range is `[`first`, `last`)`.

2) Same as (1), except that uses r as the range, as if by using [ranges::begin](../../ranges/begin.html)(r) as first and [ranges::end](../../ranges/end.html)(r) as last.

3) Equivalent to:  Helper concepts |  |   
---|---|---  
template< class F, class T, class I, class U >  
concept /*indirectly-binary-left-foldable-impl*/ =  
[std::movable](../../concepts/movable.html)<T> &&  
[std::movable](../../concepts/movable.html)<U> &&  
[std::convertible_to](../../concepts/convertible_to.html)<T, U> &&  
[std::invocable](../../concepts/invocable.html)<F&, U, [std::iter_reference_t](../../iterator/iter_t.html)<I>> &&  
[std::assignable_from](../../concepts/assignable_from.html)<U&,  
[std::invoke_result_t](../../types/result_of.html)<F&, U, [std::iter_reference_t](../../iterator/iter_t.html)<I>>>; |  (3A)  |  (exposition only*)  
template< class F, class T, class I >  
concept /*indirectly-binary-left-foldable*/ =  
[std::copy_constructible](../../concepts/copy_constructible.html)<F> &&  
[std::indirectly_readable](../../iterator/indirectly_readable.html)<I> &&  
[std::invocable](../../concepts/invocable.html)<F&, T, [std::iter_reference_t](../../iterator/iter_t.html)<I>> &&  
[std::convertible_to](../../concepts/convertible_to.html)<[std::invoke_result_t](../../types/result_of.html)<F&, T, [std::iter_reference_t](../../iterator/iter_t.html)<I>>,  
[std::decay_t](../../types/decay.html)<[std::invoke_result_t](../../types/result_of.html)<F&, T, [std::iter_reference_t](../../iterator/iter_t.html)<I>>>> &&  
/*indirectly-binary-left-foldable-impl*/<F, T, I,  
[std::decay_t](../../types/decay.html)<[std::invoke_result_t](../../types/result_of.html)<F&, T, [std::iter_reference_t](../../iterator/iter_t.html)<I>>>>; |  (3B)  |  (exposition only*)  
| |   
  
4) The return type alias. See "[Return value](fold_left_with_iter.html#Return_value)" section for details.

The function-like entities described on this page are [_algorithm function objects_](../ranges.html#Algorithm_function_objects "cpp/algorithm/ranges") (informally known as _niebloids_), that is: 

  * Explicit template argument lists cannot be specified when calling any of them. 
  * None of them are visible to [argument-dependent lookup](../../language/adl.html "cpp/language/adl"). 
  * When any of them are found by [normal unqualified lookup](../../language/unqualified_lookup.html "cpp/language/unqualified lookup") as the name to the left of the function-call operator, [argument-dependent lookup](../../language/adl.html "cpp/language/adl") is inhibited. 



## Contents

  * [1 Parameters](fold_left_with_iter.html#Parameters)
  * [2 Return value](fold_left_with_iter.html#Return_value)
  * [3 Possible implementations](fold_left_with_iter.html#Possible_implementations)
  * [4 Complexity](fold_left_with_iter.html#Complexity)
  * [5 Notes](fold_left_with_iter.html#Notes)
  * [6 Example](fold_left_with_iter.html#Example)
  * [7 References](fold_left_with_iter.html#References)
  * [8 See also](fold_left_with_iter.html#See_also)

  
---  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/algorithm/ranges/fold_left_with_iter&action=edit&section=1 "Edit section: Parameters")] Parameters

first, last  |  \-  |  the iterator-sentinel pair defining the [range](../../iterator.html#Ranges "cpp/iterator") of elements to fold   
---|---|---  
r  |  \-  |  the range of elements to fold   
init  |  \-  |  the initial value of the fold   
f  |  \-  |  the binary function object   
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/algorithm/ranges/fold_left_with_iter&action=edit&section=2 "Edit section: Return value")] Return value

Let U be [std::decay_t](../../types/decay.html)<[std::invoke_result_t](../../types/result_of.html)<F&, T, [std::iter_reference_t](../../iterator/iter_t.html)<I>>>. 

1) An object of type ranges::fold_left_with_iter_result<I, U>. 

  * The member ranges::in_value_result::in holds an iterator to the end of the range. 
  * The member ranges::in_value_result::value holds the result of the left-[fold](https://en.wikipedia.org/wiki/Fold_\(higher-order_function\) "enwiki:Fold \(higher-order function\)") of given range over f. 

If the range is empty, the return value is obtained via the expression equivalent to return {std::move(first), U(std::move(init))};.

2) Same as (1) except that the return type is ranges::fold_left_with_iter_result<[ranges::borrowed_iterator_t](../../ranges/borrowed_iterator_t.html)<R>, U>.

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/algorithm/ranges/fold_left_with_iter&action=edit&section=3 "Edit section: Possible implementations")] Possible implementations
    
    
    class fold_left_with_iter_fn
    {
        template<class O, class I, class S, class T, class F>
        constexpr auto impl(I&& first, S&& last, T&& init, F f) const
        {
            using U = [std::decay_t](../../types/decay.html)<[std::invoke_result_t](../../types/result_of.html)<F&, T, [std::iter_reference_t](../../iterator/iter_t.html)<I>>>;
            using Ret = ranges::fold_left_with_iter_result<O, U>;
            if (first == last)
                return Ret{std::move(first), U(std::move(init))};
            U accum = [std::invoke](../../utility/functional/invoke.html)(f, std::move(init), *first);
            for (++first; first != last; ++first)
                accum = [std::invoke](../../utility/functional/invoke.html)(f, std::move(accum), *first);
            return Ret{std::move(first), std::move(accum)};
        }
    public:
        template<[std::input_iterator](../../iterator/input_iterator.html) I, [std::sentinel_for](../../iterator/sentinel_for.html)<I> S, class T = [std::iter_value_t](../../iterator/iter_t.html)<I>,
                 /* indirectly-binary-left-foldable */<T, I> F>
        constexpr auto operator()(I first, S last, T init, F f) const
        {
            return impl<I>(std::move(first), std::move(last), std::move(init), [std::ref](../../utility/functional/ref.html)(f));
        }
     
        template<[ranges::input_range](../../ranges/input_range.html) R, class T = [ranges::range_value_t](../../ranges/range_size_t.html)<R>,
                 /* indirectly-binary-left-foldable */<T, [ranges::iterator_t](../../ranges/iterator_t.html)<R>> F>
        constexpr auto operator()(R&& r, T init, F f) const
        {
            return impl<[ranges::borrowed_iterator_t](../../ranges/borrowed_iterator_t.html)<R>>
            (
                [ranges::begin](../../ranges/begin.html)(r), [ranges::end](../../ranges/end.html)(r), std::move(init), [std::ref](../../utility/functional/ref.html)(f)
            );
        }
    };
     
    inline constexpr fold_left_with_iter_fn fold_left_with_iter;  
  
---  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/algorithm/ranges/fold_left_with_iter&action=edit&section=4 "Edit section: Complexity")] Complexity

Exactly [ranges::distance](../../iterator/ranges/distance.html)(first, last) applications of the function object f. 

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/algorithm/ranges/fold_left_with_iter&action=edit&section=5 "Edit section: Notes")] Notes

The following table compares all constrained folding algorithms: 

Fold function template  | Starts from  | Initial value  | Return type   
---|---|---|---  
[ranges::fold_left](fold_left.html) | left | init | U  
[ranges::fold_left_first](fold_left_first.html) | left | first element | [std::optional](../../utility/optional.html)<U>  
[ranges::fold_right](fold_right.html) | right | init | U  
[ranges::fold_right_last](fold_right_last.html) | right | last element | [std::optional](../../utility/optional.html)<U>  
ranges::fold_left_with_iter | left | init |  (1) [ranges::in_value_result](return_types/in_value_result.html)<I, U> (2) [ranges::in_value_result](return_types/in_value_result.html)<BR, U>, where BR is [ranges::borrowed_iterator_t](../../ranges/borrowed_iterator_t.html)<R>  
[ranges::fold_left_first_with_iter](fold_left_first_with_iter.html) | left | first element |  (1) [ranges::in_value_result](return_types/in_value_result.html)<I, [std::optional](../../utility/optional.html)<U>> (2) [ranges::in_value_result](return_types/in_value_result.html)<BR, [std::optional](../../utility/optional.html)<U>> where BR is [ranges::borrowed_iterator_t](../../ranges/borrowed_iterator_t.html)<R>  
[Feature-test](../../utility/feature_test.html "cpp/utility/feature test") macro  | Value | Std | Feature   
---|---|---|---  
[`__cpp_lib_ranges_fold`](../../experimental/feature_test.html#cpp_lib_ranges_fold "cpp/feature test") | [`202207L`](../../compiler_support/23.html#cpp_lib_ranges_fold_202207L "cpp/compiler support/23") | (C++23) | `std::ranges` [fold algorithms](../ranges.html#Constrained_fold_operations "cpp/algorithm/ranges")  
[`__cpp_lib_algorithm_default_value_type`](../../experimental/feature_test.html#cpp_lib_algorithm_default_value_type "cpp/feature test") | [`202403L`](../../compiler_support/26.html#cpp_lib_algorithm_default_value_type_202403L "cpp/compiler support/26") | (C++26) | [List-initialization](../../language/list_initialization.html "cpp/language/list initialization") for algorithms ([1,2](fold_left_with_iter.html#Version_1))  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/algorithm/ranges/fold_left_with_iter&action=edit&section=6 "Edit section: Example")] Example

Run this code
    
    
    #include <algorithm>
    #include <cassert>
    #include <complex>
    #include <functional>
    #include <ranges>
    #include <utility>
    #include <vector>
     
    int main()
    {
        namespace ranges = std::ranges;
     
        [std::vector](../../container/vector.html) v{1, 2, 3, 4, 5, 6, 7, 8};
     
        auto sum = ranges::fold_left_with_iter(v.begin(), v.end(), 6, [std::plus](../../utility/functional/plus.html)<int>());
        [assert](../../error/assert.html)(sum.value == 42);
        [assert](../../error/assert.html)(sum.in == v.end());
     
        auto mul = ranges::fold_left_with_iter(v, 0X69, [std::multiplies](../../utility/functional/multiplies.html)<int>());
        [assert](../../error/assert.html)(mul.value == 4233600);
        [assert](../../error/assert.html)(mul.in == v.end());
     
        // Get the product of the std::pair::second of all pairs in the vector:
        [std::vector](../../container/vector.html)<[std::pair](../../utility/pair.html)<char, float>> data {{'A', 2.f}, {'B', 3.f}, {'C', 3.5f}};
        auto sec = ranges::fold_left_with_iter
        (
            data | ranges::[views::values](../../ranges/values_view.html), 2.0f, [std::multiplies](../../utility/functional/multiplies.html)<>()
        );
        [assert](../../error/assert.html)(sec.value == 42);
     
        // Use a program defined function object (lambda-expression):
        auto lambda = [](int x, int y){ return x + 0B110 + y; };
        auto val = ranges::fold_left_with_iter(v, -42, lambda);
        [assert](../../error/assert.html)(val.value == 42);
        [assert](../../error/assert.html)(val.in == v.end());
     
        using CD = [std::complex](../../numeric/complex.html)<double>;
        [std::vector](../../container/vector.html)<CD> nums{{1, 1}, {2, 0}, {3, 0}};
        #ifdef __cpp_lib_algorithm_default_value_type
            auto res = ranges::fold_left_with_iter(nums, {7, 0}, [std::multiplies](../../utility/functional/multiplies.html){});
        #else
            auto res = ranges::fold_left_with_iter(nums, CD{7, 0}, [std::multiplies](../../utility/functional/multiplies.html){});
        #endif
        [assert](../../error/assert.html)((res.value == CD{42, 42}));
    }

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/algorithm/ranges/fold_left_with_iter&action=edit&section=7 "Edit section: References")] References

  * C++23 standard (ISO/IEC 14882:2024): 



    

  * 27.6.18 Fold [alg.fold] 



### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/algorithm/ranges/fold_left_with_iter&action=edit&section=8 "Edit section: See also")] See also

[ ranges::fold_left](fold_left.html "cpp/algorithm/ranges/fold left")(C++23) |  left-folds a range of elements  
(algorithm function object)[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/algorithm/ranges/dsc_fold_left&action=edit)  
---|---  
[ ranges::fold_left_first](fold_left_first.html "cpp/algorithm/ranges/fold left first")(C++23) |  left-folds a range of elements using the first element as an initial value  
(algorithm function object)[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/algorithm/ranges/dsc_fold_left_first&action=edit)  
[ ranges::fold_right](fold_right.html "cpp/algorithm/ranges/fold right")(C++23) |  right-folds a range of elements  
(algorithm function object)[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/algorithm/ranges/dsc_fold_right&action=edit)  
[ ranges::fold_right_last](fold_right_last.html "cpp/algorithm/ranges/fold right last")(C++23) |  right-folds a range of elements using the last element as an initial value  
(algorithm function object)[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/algorithm/ranges/dsc_fold_right_last&action=edit)  
[ ranges::fold_left_first_with_iter](fold_left_first_with_iter.html "cpp/algorithm/ranges/fold left first with iter")(C++23) |  left-folds a range of elements using the first element as an initial value, and returns a [pair](return_types/in_value_result.html "cpp/algorithm/ranges/return types/in value result") (iterator, [optional](../../utility/optional.html "cpp/utility/optional"))  
(algorithm function object)[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/algorithm/ranges/dsc_fold_left_first_with_iter&action=edit)  
[ accumulate](../accumulate.html "cpp/algorithm/accumulate") |  sums up or folds a range of elements   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/algorithm/dsc_accumulate&action=edit)  
[ reduce](../reduce.html "cpp/algorithm/reduce")(C++17) |  similar to [std::accumulate](../accumulate.html "cpp/algorithm/accumulate"), except out of order   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/algorithm/dsc_reduce&action=edit)
  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
