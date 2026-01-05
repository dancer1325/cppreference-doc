[C++](../cpp.html "cpp")

[Compiler support](compiler_support.html "cpp/compiler support")  
---  
[Freestanding and hosted](freestanding.html "cpp/freestanding")  
[Language](language.html "cpp/language")  
[Standard library](standard_library.html "cpp/standard library")  
[Standard library headers](headers.html "cpp/header")  
[Named requirements](iterator/concepts.html "cpp/named req")  
[Feature test macros](experimental/feature_test.html "cpp/feature test") (C++20)  
[Language support library](utility.html#Language_support "cpp/utility")  
[Concepts library](concepts.html "cpp/concepts") (C++20)  
[Diagnostics library](error.html "cpp/error")  
[Memory management library](memory.html "cpp/memory")  
[Metaprogramming library](meta.html "cpp/meta") (C++11)  
[General utilities library](utility.html "cpp/utility")  
[Containers library](container.html "cpp/container")  
[Iterators library](iterator.html "cpp/iterator")  
[Ranges library](ranges.html "cpp/ranges") (C++20)  
**Algorithms library**  
[Strings library](string.html "cpp/string")  
[Text processing library](text.html "cpp/text")  
[Numerics library](numeric.html "cpp/numeric")  
[Date and time library](chrono.html "cpp/chrono")  
[Input/output library](io.html "cpp/io")  
[Filesystem library](filesystem.html "cpp/filesystem") (C++17)  
[Concurrency support library](atomic.html "cpp/thread") (C++11)  
[Execution control library](experimental/execution.html "cpp/execution") (C++26)  
[Technical specifications](experimental.html "cpp/experimental")  
[Symbols index](symbol_index.html "cpp/symbol index")  
[External libraries](links/libs.html "cpp/links/libs")  
  


**Algorithm library**

[Constrained algorithms and algorithms on ranges](algorithm/ranges.html "cpp/algorithm/ranges") (C++20)  
---  
Constrained algorithms, e.g. [`ranges::copy`](algorithm/ranges/copy.html "cpp/algorithm/ranges/copy"), [`ranges::sort`](algorithm/ranges/sort.html "cpp/algorithm/ranges/sort"), ...  
[Execution policies (C++17)](algorithm.html#Execution_policies "cpp/algorithm")  
|  | [is_execution_policy](algorithm/is_execution_policy.html "cpp/algorithm/is execution policy")(C++17)  
---  
  
| [execution::seqexecution::parexecution::par_unseqexecution::unseq](algorithm/execution_policy_tag.html "cpp/algorithm/execution policy tag")(C++17) (C++17)(C++17)(C++20)  
---  
  
|  | [execution::sequenced_policyexecution::parallel_policyexecution::parallel_unsequenced_policyexecution::parallel_unsequenced](algorithm/execution_policy_tag_t.html "cpp/algorithm/execution policy tag t")(C++17)(C++17)(C++17)(C++20)  
---  
  
| [Non-modifying sequence operations](algorithm.html#Non-modifying_sequence_operations "cpp/algorithm")  
---  
[Batch operations](algorithm.html#Batch_operations "cpp/algorithm")  
| [for_each](algorithm/for_each.html "cpp/algorithm/for each")  
---  
  
| [for_each_n](algorithm/for_each_n.html "cpp/algorithm/for each n")(C++17)  
---  
  
[Search operations](algorithm.html#Search_operations "cpp/algorithm")  
| [all_ofany_ofnone_of](algorithm/none_of.html "cpp/algorithm/all any none of")(C++11) (C++11)(C++11)  
---  
[countcount_if](algorithm/count.html "cpp/algorithm/count")  
[mismatch](algorithm/mismatch.html "cpp/algorithm/mismatch")  
[equal](algorithm/equal.html "cpp/algorithm/equal")  
  
  
  
| [findfind_iffind_if_not](algorithm/find.html "cpp/algorithm/find")(C++11)  
---  
[find_end](algorithm/find_end.html "cpp/algorithm/find end")  
[find_first_of](algorithm/find_first_of.html "cpp/algorithm/find first of")  
[adjacent_find](algorithm/adjacent_find.html "cpp/algorithm/adjacent find")  
[search](algorithm/search.html "cpp/algorithm/search")  
[search_n](algorithm/search_n.html "cpp/algorithm/search n")  
  
[Modifying sequence operations](algorithm.html#Modifying_sequence_operations "cpp/algorithm")  
[Copy operations](algorithm.html#Copy_operations "cpp/algorithm")  
| [copycopy_if](algorithm/copy.html "cpp/algorithm/copy")(C++11)  
---  
[copy_backward](algorithm/copy_backward.html "cpp/algorithm/copy backward")  
  
| [copy_n](algorithm/copy_n.html "cpp/algorithm/copy n")(C++11)  
---  
[move](algorithm/move.html "cpp/algorithm/move")(C++11)  
[move_backward](algorithm/move_backward.html "cpp/algorithm/move backward")(C++11)  
  
[Swap operations](algorithm.html#Swap_operations "cpp/algorithm")  
| [swap](utility/swap.html "cpp/algorithm/swap")  
---  
[iter_swap](algorithm/iter_swap.html "cpp/algorithm/iter swap")  
  
| [swap_ranges](algorithm/swap_ranges.html "cpp/algorithm/swap ranges")  
---  
  
  
  
[Transformation operations](algorithm.html#Transformation_operations "cpp/algorithm")  
| [replacereplace_if](algorithm/replace.html "cpp/algorithm/replace")  
---  
[transform](algorithm/transform.html "cpp/algorithm/transform")  
  
| [replace_copyreplace_copy_if](algorithm/replace_copy.html "cpp/algorithm/replace copy")  
---  
  
  
  
[Generation operations](algorithm.html#Generation_operations "cpp/algorithm")  
| [fill](algorithm/fill.html "cpp/algorithm/fill")  
---  
[fill_n](algorithm/fill_n.html "cpp/algorithm/fill n")  
  
| [generate](algorithm/generate.html "cpp/algorithm/generate")  
---  
[generate_n](algorithm/generate_n.html "cpp/algorithm/generate n")  
  
[Removing operations](algorithm.html#Removing_operations "cpp/algorithm")  
| [removeremove_if](algorithm/remove.html "cpp/algorithm/remove")  
---  
[unique](algorithm/unique.html "cpp/algorithm/unique")  
  
| [remove_copyremove_copy_if](algorithm/remove_copy.html "cpp/algorithm/remove copy")  
---  
[unique_copy](algorithm/unique_copy.html "cpp/algorithm/unique copy")  
  
[Order-changing operations](algorithm.html#Order-changing_operations "cpp/algorithm")  
| [reverse](algorithm/reverse.html "cpp/algorithm/reverse")  
---  
[reverse_copy](algorithm/reverse_copy.html "cpp/algorithm/reverse copy")  
[rotate](algorithm/rotate.html "cpp/algorithm/rotate")  
[rotate_copy](algorithm/rotate_copy.html "cpp/algorithm/rotate copy")  
  
| [random_shuffleshuffle](algorithm/random_shuffle.html "cpp/algorithm/random shuffle")(until C++17)(C++11)  
---  
[shift_leftshift_right](algorithm/shift.html "cpp/algorithm/shift")(C++20)(C++20)  
  
[Sampling operations](algorithm.html#Sampling_operations "cpp/algorithm")  
| [sample](algorithm/sample.html "cpp/algorithm/sample")(C++17)  
---  
  
|   
  
---  
  
| [Sorting and related operations](algorithm.html#Sorting_and_related_operations "cpp/algorithm")  
---  
[Partitioning operations](algorithm.html#Partitioning_operations "cpp/algorithm")  
| [partition](algorithm/partition.html "cpp/algorithm/partition")  
---  
[partition_copy](algorithm/partition_copy.html "cpp/algorithm/partition copy")(C++11)  
[stable_partition](algorithm/stable_partition.html "cpp/algorithm/stable partition")  
  
| [is_partitioned](algorithm/is_partitioned.html "cpp/algorithm/is partitioned")(C++11)  
---  
[partition_point](algorithm/partition_point.html "cpp/algorithm/partition point")(C++11)  
  
  
  
[Sorting operations](algorithm.html#Sorting_operations "cpp/algorithm")  
| [sort](algorithm/sort.html "cpp/algorithm/sort")  
---  
[stable_sort](algorithm/stable_sort.html "cpp/algorithm/stable sort")  
[partial_sort](algorithm/partial_sort.html "cpp/algorithm/partial sort")  
[partial_sort_copy](algorithm/partial_sort_copy.html "cpp/algorithm/partial sort copy")  
  
| [is_sorted](algorithm/is_sorted.html "cpp/algorithm/is sorted")(C++11)  
---  
[is_sorted_until](algorithm/is_sorted_until.html "cpp/algorithm/is sorted until")(C++11)  
[nth_element](algorithm/nth_element.html "cpp/algorithm/nth element")  
  
  
  
[Binary search operations  
(on partitioned ranges)](algorithm.html#Binary_search_operations_.28on_partitioned_ranges.29 "cpp/algorithm")  
| [lower_bound](algorithm/lower_bound.html "cpp/algorithm/lower bound")  
---  
[upper_bound](algorithm/upper_bound.html "cpp/algorithm/upper bound")  
  
| [equal_range](algorithm/equal_range.html "cpp/algorithm/equal range")  
---  
[binary_search](algorithm/binary_search.html "cpp/algorithm/binary search")  
  
[Set operations (on sorted ranges)](algorithm.html#Set_operations_.28on_sorted_ranges.29 "cpp/algorithm")  
| [includes](algorithm/includes.html "cpp/algorithm/includes")  
---  
[set_union](algorithm/set_union.html "cpp/algorithm/set union")  
[set_intersection](algorithm/set_intersection.html "cpp/algorithm/set intersection")  
  
| [set_difference](algorithm/set_difference.html "cpp/algorithm/set difference")  
---  
[set_symmetric_difference](algorithm/set_symmetric_difference.html "cpp/algorithm/set symmetric difference")  
  
  
  
[Merge operations (on sorted ranges)](algorithm.html#Merge_operations_.28on_sorted_ranges.29 "cpp/algorithm")  
| [merge](algorithm/merge.html "cpp/algorithm/merge")  
---  
  
| [inplace_merge](algorithm/inplace_merge.html "cpp/algorithm/inplace merge")  
---  
  
[Heap operations](algorithm.html#Heap_operations "cpp/algorithm")  
| [push_heap](algorithm/push_heap.html "cpp/algorithm/push heap")  
---  
[pop_heap](algorithm/pop_heap.html "cpp/algorithm/pop heap")  
[make_heap](algorithm/make_heap.html "cpp/algorithm/make heap")  
  
| [sort_heap](algorithm/sort_heap.html "cpp/algorithm/sort heap")  
---  
[is_heap](algorithm/is_heap.html "cpp/algorithm/is heap")(C++11)  
[is_heap_until](algorithm/is_heap_until.html "cpp/algorithm/is heap until")(C++11)  
  
[Minimum/maximum operations](algorithm.html#Minimum.2Fmaximum_operations "cpp/algorithm")  
| [max](algorithm/max.html "cpp/algorithm/max")  
---  
[min](algorithm/min.html "cpp/algorithm/min")  
[minmax](algorithm/minmax.html "cpp/algorithm/minmax")(C++11)  
[clamp](algorithm/clamp.html "cpp/algorithm/clamp")(C++17)  
  
| [max_element](algorithm/max_element.html "cpp/algorithm/max element")  
---  
[min_element](algorithm/min_element.html "cpp/algorithm/min element")  
[minmax_element](algorithm/minmax_element.html "cpp/algorithm/minmax element")(C++11)  
  
  
  
[Lexicographical comparison operations](algorithm.html#Lexicographical_comparison_operations "cpp/algorithm")  
[lexicographical_compare](algorithm/lexicographical_compare.html "cpp/algorithm/lexicographical compare")  
[lexicographical_compare_three_way](algorithm/lexicographical_compare_three_way.html "cpp/algorithm/lexicographical compare three way")(C++20)  
[Permutation operations](algorithm.html#Permutation_operations "cpp/algorithm")  
| [next_permutation](algorithm/next_permutation.html "cpp/algorithm/next permutation")  
---  
[prev_permutation](algorithm/prev_permutation.html "cpp/algorithm/prev permutation")  
  
  
  
| [is_permutation](algorithm/is_permutation.html "cpp/algorithm/is permutation")(C++11)  
---  
  
  
  
  
  
[C library](algorithm.html#C_library "cpp/algorithm")  
| [qsort](algorithm/qsort.html "cpp/algorithm/qsort")  
---  
  
| [bsearch](algorithm/bsearch.html "cpp/algorithm/bsearch")  
---  
  
[Numeric operations](algorithm.html#Numeric_operations "cpp/algorithm")  
|  | [iota](algorithm/iota.html "cpp/algorithm/iota")(C++11)  
---  
[inner_product](algorithm/inner_product.html "cpp/algorithm/inner product")  
[adjacent_difference](algorithm/adjacent_difference.html "cpp/algorithm/adjacent difference")  
  
| [accumulate](algorithm/accumulate.html "cpp/algorithm/accumulate")  
---  
[reduce](algorithm/reduce.html "cpp/algorithm/reduce")(C++17)  
[transform_reduce](algorithm/transform_reduce.html "cpp/algorithm/transform reduce")(C++17)  
  
|  | [partial_sum](algorithm/partial_sum.html "cpp/algorithm/partial sum")  
---  
[inclusive_scan](algorithm/inclusive_scan.html "cpp/algorithm/inclusive scan")(C++17)  
[exclusive_scan](algorithm/exclusive_scan.html "cpp/algorithm/exclusive scan")(C++17)  
  
| [transform_inclusive_scan](algorithm/transform_inclusive_scan.html "cpp/algorithm/transform inclusive scan")(C++17)  
---  
[transform_exclusive_scan](algorithm/transform_exclusive_scan.html "cpp/algorithm/transform exclusive scan")(C++17)  
  
  
  
[Operations on uninitialized memory](algorithm.html#Operations_on_uninitialized_memory "cpp/algorithm")  
|  | [uninitialized_copy](memory/uninitialized_copy.html "cpp/memory/uninitialized copy")  
---  
[uninitialized_move](memory/uninitialized_move.html "cpp/memory/uninitialized move")(C++17)  
[uninitialized_fill](memory/uninitialized_fill.html "cpp/memory/uninitialized fill")  
  
  
  
| [uninitialized_copy_n](memory/uninitialized_copy_n.html "cpp/memory/uninitialized copy n")(C++11)  
---  
[uninitialized_move_n](memory/uninitialized_move_n.html "cpp/memory/uninitialized move n")(C++17)  
[uninitialized_fill_n](memory/uninitialized_fill_n.html "cpp/memory/uninitialized fill n")  
  
  
  
|  | [destroy](memory/destroy.html "cpp/memory/destroy")(C++17)  
---  
[destroy_n](memory/destroy_n.html "cpp/memory/destroy n")(C++17)  
[destroy_at](memory/destroy_at.html "cpp/memory/destroy at")(C++17)  
[construct_at](memory/construct_at.html "cpp/memory/construct at")(C++20)  
  
| [uninitialized_default_construct](memory/uninitialized_default_construct.html "cpp/memory/uninitialized default construct")(C++17)  
---  
[uninitialized_value_construct](memory/uninitialized_value_construct.html "cpp/memory/uninitialized value construct")(C++17)  
[uninitialized_default_construct_n](memory/uninitialized_default_construct_n.html "cpp/memory/uninitialized default construct n")(C++17)  
[uninitialized_value_construct_n](memory/uninitialized_value_construct_n.html "cpp/memory/uninitialized value construct n")(C++17)  
  


The algorithms library defines functions for a variety of purposes (e.g. searching, sorting, counting, manipulating) that operate on ranges of elements. Note that a [range](iterator.html#Ranges "cpp/iterator") is defined as `[`first`, `last`)` where last refers to the element _past_ the last element to inspect or modify. 

## Contents

  * [1 Constrained algorithms (since C++20)](algorithm.html#Constrained_algorithms_.28since_C.2B.2B20.29)
  * [2 Execution policies (since C++17)](algorithm.html#Execution_policies_.28since_C.2B.2B17.29)
  * [3 Non-modifying sequence operations](algorithm.html#Non-modifying_sequence_operations)
    * [3.1 Batch operations](algorithm.html#Batch_operations)
    * [3.2 Search operations](algorithm.html#Search_operations)
    * [3.3 Fold operations (since C++23)](algorithm.html#Fold_operations_.28since_C.2B.2B23.29)
  * [4 Modifying sequence operations](algorithm.html#Modifying_sequence_operations)
    * [4.1 Copy operations](algorithm.html#Copy_operations)
    * [4.2 Swap operations](algorithm.html#Swap_operations)
    * [4.3 Transformation operations](algorithm.html#Transformation_operations)
    * [4.4 Generation operations](algorithm.html#Generation_operations)
    * [4.5 Removing operations](algorithm.html#Removing_operations)
    * [4.6 Order-changing operations](algorithm.html#Order-changing_operations)
    * [4.7 Sampling operations](algorithm.html#Sampling_operations)
  * [5 Sorting and related operations](algorithm.html#Sorting_and_related_operations)
    * [5.1 Requirements](algorithm.html#Requirements)
    * [5.2 Partitioning operations](algorithm.html#Partitioning_operations)
    * [5.3 Sorting operations](algorithm.html#Sorting_operations)
    * [5.4 Binary search operations (on partitioned ranges)](algorithm.html#Binary_search_operations_.28on_partitioned_ranges.29)
    * [5.5 Set operations (on sorted ranges)](algorithm.html#Set_operations_.28on_sorted_ranges.29)
    * [5.6 Merge operations (on sorted ranges)](algorithm.html#Merge_operations_.28on_sorted_ranges.29)
    * [5.7 Heap operations](algorithm.html#Heap_operations)
    * [5.8 Minimum/maximum operations](algorithm.html#Minimum.2Fmaximum_operations)
    * [5.9 Lexicographical comparison operations](algorithm.html#Lexicographical_comparison_operations)
    * [5.10 Permutation operations](algorithm.html#Permutation_operations)
  * [6 Numeric operations](algorithm.html#Numeric_operations)
  * [7 Operations on uninitialized memory](algorithm.html#Operations_on_uninitialized_memory)
  * [8 Random number generation (since C++26)](algorithm.html#Random_number_generation_.28since_C.2B.2B26.29)
  * [9 Notes](algorithm.html#Notes)
  * [10 C library](algorithm.html#C_library)
  * [11 Defect reports](algorithm.html#Defect_reports)
  * [12 See also](algorithm.html#See_also)

  
---  
  
### [Constrained algorithms](algorithm/ranges.html "cpp/algorithm/ranges") (since C++20)

C++20 provides [constrained](language/constraints.html "cpp/language/constraints") versions of most algorithms in the namespace `std::ranges`. In these algorithms, a [range](iterator.html#Ranges "cpp/iterator") can be specified as either an [iterator](iterator/input_or_output_iterator.html "cpp/iterator/input or output iterator")-[sentinel](iterator/sentinel_for.html "cpp/iterator/sentinel for") pair or as a single [`range`](ranges/range.html "cpp/ranges/range") argument, and projections and pointer-to-member callables are supported. Additionally, the [return types](algorithm/ranges.html#Return_types "cpp/algorithm/ranges") of most algorithms have been changed to return all potentially useful information computed during the execution of the algorithm. 
    
    
    [std::vector](container/vector.html)<int> v{7, 1, 4, 0, -1};
    std::[ranges::sort](http://en.cppreference.com/w/cpp/ranges-algorithm-placeholder/sort)(v); // constrained algorithm

### Execution policies (since C++17)

Most algorithms have overloads that accept execution policies. The standard library algorithms support several [execution policies](algorithm/execution_policy_tag_t.html "cpp/algorithm/execution policy tag t"), and the library provides corresponding execution policy types and objects. Users may select an execution policy statically by invoking a parallel algorithm with an [execution policy object](algorithm/execution_policy_tag.html "cpp/algorithm/execution policy tag") of the corresponding type. 

Standard library implementations (but not the users) may define additional execution policies as an extension. The semantics of parallel algorithms invoked with an execution policy object of implementation-defined type is implementation-defined. 

Parallel version of algorithms (except for [std::for_each](algorithm/for_each.html "cpp/algorithm/for each") and [std::for_each_n](algorithm/for_each_n.html "cpp/algorithm/for each n")) are allowed to make arbitrary copies of elements from ranges, as long as both [std::is_trivially_copy_constructible_v](types/is_copy_constructible.html)<T> and [std::is_trivially_destructible_v](types/is_destructible.html)<T> are true, where `T` is the type of elements. 

Defined in header `[<execution>](header/execution.html "cpp/header/execution")`  
---  
Defined in namespace `std::execution`  
[ sequenced_policyparallel_policyparallel_unsequenced_policyunsequenced_policy](algorithm/execution_policy_tag_t.html "cpp/algorithm/execution policy tag t")(C++17)(C++17)(C++17)(C++20) |  execution policy types   
(class)   
[ seqparpar_unsequnseq](algorithm/execution_policy_tag.html "cpp/algorithm/execution policy tag")(C++17)(C++17)(C++17)(C++20) |  global execution policy objects   
(constant)   
Defined in namespace `std`  
[ is_execution_policy](algorithm/is_execution_policy.html "cpp/algorithm/is execution policy")(C++17) |  test whether a class represents an execution policy   
(class template)   
[Feature-test](utility/feature_test.html "cpp/utility/feature test") macro  | Value | Std | Feature   
---|---|---|---  
[`__cpp_lib_parallel_algorithm`](experimental/feature_test.html#cpp_lib_parallel_algorithm "cpp/feature test") | [`201603L`](compiler_support/17.html#cpp_lib_parallel_algorithm_201603L "cpp/compiler support/17") | (C++17) | Parallel algorithms   
[`__cpp_lib_execution`](experimental/feature_test.html#cpp_lib_execution "cpp/feature test") | [`201603L`](compiler_support/17.html#cpp_lib_execution_201603L "cpp/compiler support/17") | (C++17) | Execution policies   
[`201902L`](compiler_support/20.html#cpp_lib_execution_201902L "cpp/compiler support/20") | (C++20) | [std::execution::unsequenced_policy](algorithm/execution_policy_tag_t.html "cpp/algorithm/execution policy tag t")  
  
### Non-modifying sequence operations

#### Batch operations

Defined in header `[<algorithm>](header/algorithm.html "cpp/header/algorithm")`  
---  
[ for_each](algorithm/for_each.html "cpp/algorithm/for each") |  applies a unary [function object](named_req/FunctionObject.html "cpp/named req/FunctionObject") to elements from a [range](iterator.html#Ranges "cpp/iterator")   
(function template)   
[ ranges::for_each](algorithm/ranges/for_each.html "cpp/algorithm/ranges/for each")(C++20) |  applies a unary [function object](named_req/FunctionObject.html "cpp/named req/FunctionObject") to elements from a [range](iterator.html#Ranges "cpp/iterator")  
(algorithm function object)  
[ for_each_n](algorithm/for_each_n.html "cpp/algorithm/for each n")(C++17) |  applies a function object to the first N elements of a sequence   
(function template)   
[ ranges::for_each_n](algorithm/ranges/for_each_n.html "cpp/algorithm/ranges/for each n")(C++20) |  applies a function object to the first N elements of a sequence  
(algorithm function object)  
  
#### Search operations

Defined in header `[<algorithm>](header/algorithm.html "cpp/header/algorithm")`  
---  
[ all_ofany_ofnone_of](algorithm/none_of.html "cpp/algorithm/all any none of")(C++11)(C++11)(C++11) |  checks if a predicate is true for all, any or none of the elements in a range   
(function template)   
[ ranges::all_ofranges::any_ofranges::none_of](algorithm/ranges/all_any_none_of.html "cpp/algorithm/ranges/all any none of")(C++20)(C++20)(C++20) |  checks if a predicate is true for all, any or none of the elements in a range  
(algorithm function object)  
[ ranges::containsranges::contains_subrange](algorithm/ranges/contains.html "cpp/algorithm/ranges/contains")(C++23)(C++23) |  checks if the range contains the given element or subrange  
(algorithm function object)  
[ findfind_iffind_if_not](algorithm/find.html "cpp/algorithm/find")(C++11) |  finds the first element satisfying specific criteria   
(function template)   
[ ranges::findranges::find_ifranges::find_if_not](algorithm/ranges/find.html "cpp/algorithm/ranges/find")(C++20)(C++20)(C++20) |  finds the first element satisfying specific criteria  
(algorithm function object)  
[ ranges::find_lastranges::find_last_ifranges::find_last_if_not](algorithm/ranges/find_last.html "cpp/algorithm/ranges/find last")(C++23)(C++23)(C++23) |  finds the last element satisfying specific criteria  
(algorithm function object)  
[ find_end](algorithm/find_end.html "cpp/algorithm/find end") |  finds the last sequence of elements in a certain range   
(function template)   
[ ranges::find_end](algorithm/ranges/find_end.html "cpp/algorithm/ranges/find end")(C++20) |  finds the last sequence of elements in a certain range  
(algorithm function object)  
[ find_first_of](algorithm/find_first_of.html "cpp/algorithm/find first of") |  searches for any one of a set of elements   
(function template)   
[ ranges::find_first_of](algorithm/ranges/find_first_of.html "cpp/algorithm/ranges/find first of")(C++20) |  searches for any one of a set of elements  
(algorithm function object)  
[ adjacent_find](algorithm/adjacent_find.html "cpp/algorithm/adjacent find") |  finds the first two adjacent items that are equal (or satisfy a given predicate)   
(function template)   
[ ranges::adjacent_find](algorithm/ranges/adjacent_find.html "cpp/algorithm/ranges/adjacent find")(C++20) |  finds the first two adjacent items that are equal (or satisfy a given predicate)  
(algorithm function object)  
[ countcount_if](algorithm/count.html "cpp/algorithm/count") |  returns the number of elements satisfying specific criteria   
(function template)   
[ ranges::countranges::count_if](algorithm/ranges/count.html "cpp/algorithm/ranges/count")(C++20)(C++20) |  returns the number of elements satisfying specific criteria  
(algorithm function object)  
[ mismatch](algorithm/mismatch.html "cpp/algorithm/mismatch") |  finds the first position where two ranges differ   
(function template)   
[ ranges::mismatch](algorithm/ranges/mismatch.html "cpp/algorithm/ranges/mismatch")(C++20) |  finds the first position where two ranges differ  
(algorithm function object)  
[ equal](algorithm/equal.html "cpp/algorithm/equal") |  determines if two sets of elements are the same   
(function template)   
[ ranges::equal](algorithm/ranges/equal.html "cpp/algorithm/ranges/equal")(C++20) |  determines if two sets of elements are the same  
(algorithm function object)  
[ search](algorithm/search.html "cpp/algorithm/search") |  searches for the first occurrence of a range of elements   
(function template)   
[ ranges::search](algorithm/ranges/search.html "cpp/algorithm/ranges/search")(C++20) |  searches for the first occurrence of a range of elements  
(algorithm function object)  
[ search_n](algorithm/search_n.html "cpp/algorithm/search n") |  searches for the first occurrence of a number consecutive copies of an element in a range   
(function template)   
[ ranges::search_n](algorithm/ranges/search_n.html "cpp/algorithm/ranges/search n")(C++20) |  searches for the first occurrence of a number consecutive copies of an element in a range  
(algorithm function object)  
[ ranges::starts_with](algorithm/ranges/starts_with.html "cpp/algorithm/ranges/starts with")(C++23) |  checks whether a range starts with another range  
(algorithm function object)  
[ ranges::ends_with](algorithm/ranges/ends_with.html "cpp/algorithm/ranges/ends with")(C++23) |  checks whether a range ends with another range  
(algorithm function object)  
  
#### Fold operations (since C++23)

Defined in header `[<algorithm>](header/algorithm.html "cpp/header/algorithm")`  
---  
[ ranges::fold_left](algorithm/ranges/fold_left.html "cpp/algorithm/ranges/fold left")(C++23) |  left-folds a range of elements  
(algorithm function object)  
[ ranges::fold_left_first](algorithm/ranges/fold_left_first.html "cpp/algorithm/ranges/fold left first")(C++23) |  left-folds a range of elements using the first element as an initial value  
(algorithm function object)  
[ ranges::fold_right](algorithm/ranges/fold_right.html "cpp/algorithm/ranges/fold right")(C++23) |  right-folds a range of elements  
(algorithm function object)  
[ ranges::fold_right_last](algorithm/ranges/fold_right_last.html "cpp/algorithm/ranges/fold right last")(C++23) |  right-folds a range of elements using the last element as an initial value  
(algorithm function object)  
[ ranges::fold_left_with_iter](algorithm/ranges/fold_left_with_iter.html "cpp/algorithm/ranges/fold left with iter")(C++23) |  left-folds a range of elements, and returns a [pair](algorithm/ranges/return_types/in_value_result.html "cpp/algorithm/ranges/return types/in value result") (iterator, value)  
(algorithm function object)  
[ ranges::fold_left_first_with_iter](algorithm/ranges/fold_left_first_with_iter.html "cpp/algorithm/ranges/fold left first with iter")(C++23) |  left-folds a range of elements using the first element as an initial value, and returns a [pair](algorithm/ranges/return_types/in_value_result.html "cpp/algorithm/ranges/return types/in value result") (iterator, [optional](utility/optional.html "cpp/utility/optional"))  
(algorithm function object)  
  
### Modifying sequence operations

#### Copy operations

Defined in header `[<algorithm>](header/algorithm.html "cpp/header/algorithm")`  
---  
[ copycopy_if](algorithm/copy.html "cpp/algorithm/copy")(C++11) |  copies a range of elements to a new location   
(function template)   
[ ranges::copyranges::copy_if](algorithm/ranges/copy.html "cpp/algorithm/ranges/copy")(C++20)(C++20) |  copies a range of elements to a new location  
(algorithm function object)  
[ copy_n](algorithm/copy_n.html "cpp/algorithm/copy n")(C++11) |  copies a number of elements to a new location   
(function template)   
[ ranges::copy_n](algorithm/ranges/copy_n.html "cpp/algorithm/ranges/copy n")(C++20) |  copies a number of elements to a new location  
(algorithm function object)  
[ copy_backward](algorithm/copy_backward.html "cpp/algorithm/copy backward") |  copies a range of elements in backwards order   
(function template)   
[ ranges::copy_backward](algorithm/ranges/copy_backward.html "cpp/algorithm/ranges/copy backward")(C++20) |  copies a range of elements in backwards order  
(algorithm function object)  
[ move](algorithm/move.html "cpp/algorithm/move")(C++11) |  moves a range of elements to a new location   
(function template)   
[ ranges::move](algorithm/ranges/move.html "cpp/algorithm/ranges/move")(C++20) |  moves a range of elements to a new location  
(algorithm function object)  
[ move_backward](algorithm/move_backward.html "cpp/algorithm/move backward")(C++11) |  moves a range of elements to a new location in backwards order   
(function template)   
[ ranges::move_backward](algorithm/ranges/move_backward.html "cpp/algorithm/ranges/move backward")(C++20) |  moves a range of elements to a new location in backwards order  
(algorithm function object)  
  
#### Swap operations

Defined in header `[<algorithm>](header/algorithm.html "cpp/header/algorithm")`` `(until C++11)  
---  
Defined in header `[<utility>](header/utility.html "cpp/header/utility")`` `(since C++11)  
Defined in header `[<string_view>](header/string_view.html "cpp/header/string view")`  
[ swap](utility/swap.html "cpp/algorithm/swap") |  swaps the values of two objects   
(function template)   
Defined in header `[<algorithm>](header/algorithm.html "cpp/header/algorithm")`  
[ swap_ranges](algorithm/swap_ranges.html "cpp/algorithm/swap ranges") |  swaps two ranges of elements   
(function template)   
[ ranges::swap_ranges](algorithm/ranges/swap_ranges.html "cpp/algorithm/ranges/swap ranges")(C++20) |  swaps two ranges of elements  
(algorithm function object)  
[ iter_swap](algorithm/iter_swap.html "cpp/algorithm/iter swap") |  swaps the elements pointed to by two iterators   
(function template)   
  
#### Transformation operations

Defined in header `[<algorithm>](header/algorithm.html "cpp/header/algorithm")`  
---  
[ transform](algorithm/transform.html "cpp/algorithm/transform") |  applies a function to a range of elements, storing results in a destination range   
(function template)   
[ ranges::transform](algorithm/ranges/transform.html "cpp/algorithm/ranges/transform")(C++20) |  applies a function to a range of elements  
(algorithm function object)  
[ replacereplace_if](algorithm/replace.html "cpp/algorithm/replace") |  replaces all values satisfying specific criteria with another value   
(function template)   
[ ranges::replaceranges::replace_if](algorithm/ranges/replace.html "cpp/algorithm/ranges/replace")(C++20)(C++20) |  replaces all values satisfying specific criteria with another value  
(algorithm function object)  
[ replace_copyreplace_copy_if](algorithm/replace_copy.html "cpp/algorithm/replace copy") |  copies a range, replacing elements satisfying specific criteria with another value   
(function template)   
[ ranges::replace_copyranges::replace_copy_if](algorithm/ranges/replace_copy.html "cpp/algorithm/ranges/replace copy")(C++20)(C++20) |  copies a range, replacing elements satisfying specific criteria with another value  
(algorithm function object)  
  
#### Generation operations

Defined in header `[<algorithm>](header/algorithm.html "cpp/header/algorithm")`  
---  
[ fill](algorithm/fill.html "cpp/algorithm/fill") |  copy-assigns the given value to every element in a range   
(function template)   
[ ranges::fill](algorithm/ranges/fill.html "cpp/algorithm/ranges/fill")(C++20) |  assigns a range of elements a certain value  
(algorithm function object)  
[ fill_n](algorithm/fill_n.html "cpp/algorithm/fill n") |  copy-assigns the given value to N elements in a range   
(function template)   
[ ranges::fill_n](algorithm/ranges/fill_n.html "cpp/algorithm/ranges/fill n")(C++20) |  assigns a value to a number of elements  
(algorithm function object)  
[ generate](algorithm/generate.html "cpp/algorithm/generate") |  assigns the results of successive function calls to every element in a range   
(function template)   
[ ranges::generate](algorithm/ranges/generate.html "cpp/algorithm/ranges/generate")(C++20) |  saves the result of a function in a range  
(algorithm function object)  
[ generate_n](algorithm/generate_n.html "cpp/algorithm/generate n") |  assigns the results of successive function calls to N elements in a range   
(function template)   
[ ranges::generate_n](algorithm/ranges/generate_n.html "cpp/algorithm/ranges/generate n")(C++20) |  saves the result of N applications of a function  
(algorithm function object)  
  
#### Removing operations

Defined in header `[<algorithm>](header/algorithm.html "cpp/header/algorithm")`  
---  
[ removeremove_if](algorithm/remove.html "cpp/algorithm/remove") |  removes elements satisfying specific criteria   
(function template)   
[ ranges::removeranges::remove_if](algorithm/ranges/remove.html "cpp/algorithm/ranges/remove")(C++20)(C++20) |  removes elements satisfying specific criteria  
(algorithm function object)  
[ remove_copyremove_copy_if](algorithm/remove_copy.html "cpp/algorithm/remove copy") |  copies a range of elements omitting those that satisfy specific criteria   
(function template)   
[ ranges::remove_copyranges::remove_copy_if](algorithm/ranges/remove_copy.html "cpp/algorithm/ranges/remove copy")(C++20)(C++20) |  copies a range of elements omitting those that satisfy specific criteria  
(algorithm function object)  
[ unique](algorithm/unique.html "cpp/algorithm/unique") |  removes consecutive duplicate elements in a range   
(function template)   
[ ranges::unique](algorithm/ranges/unique.html "cpp/algorithm/ranges/unique")(C++20) |  removes consecutive duplicate elements in a range  
(algorithm function object)  
[ unique_copy](algorithm/unique_copy.html "cpp/algorithm/unique copy") |  creates a copy of some range of elements that contains no consecutive duplicates   
(function template)   
[ ranges::unique_copy](algorithm/ranges/unique_copy.html "cpp/algorithm/ranges/unique copy")(C++20) |  creates a copy of some range of elements that contains no consecutive duplicates  
(algorithm function object)  
  
#### Order-changing operations

Defined in header `[<algorithm>](header/algorithm.html "cpp/header/algorithm")`  
---  
[ reverse](algorithm/reverse.html "cpp/algorithm/reverse") |  reverses the order of elements in a range   
(function template)   
[ ranges::reverse](algorithm/ranges/reverse.html "cpp/algorithm/ranges/reverse")(C++20) |  reverses the order of elements in a range  
(algorithm function object)  
[ reverse_copy](algorithm/reverse_copy.html "cpp/algorithm/reverse copy") |  creates a copy of a range that is reversed   
(function template)   
[ ranges::reverse_copy](algorithm/ranges/reverse_copy.html "cpp/algorithm/ranges/reverse copy")(C++20) |  creates a copy of a range that is reversed  
(algorithm function object)  
[ rotate](algorithm/rotate.html "cpp/algorithm/rotate") |  rotates the order of elements in a range   
(function template)   
[ ranges::rotate](algorithm/ranges/rotate.html "cpp/algorithm/ranges/rotate")(C++20) |  rotates the order of elements in a range  
(algorithm function object)  
[ rotate_copy](algorithm/rotate_copy.html "cpp/algorithm/rotate copy") |  copies and rotate a range of elements   
(function template)   
[ ranges::rotate_copy](algorithm/ranges/rotate_copy.html "cpp/algorithm/ranges/rotate copy")(C++20) |  copies and rotate a range of elements  
(algorithm function object)  
[ shift_leftshift_right](algorithm/shift.html "cpp/algorithm/shift")(C++20) |  shifts elements in a range   
(function template)   
[ ranges::shift_leftranges::shift_right](algorithm/ranges/shift.html "cpp/algorithm/ranges/shift")(C++23) |  shifts elements in a range  
(algorithm function object)  
[ random_shuffleshuffle](algorithm/random_shuffle.html "cpp/algorithm/random shuffle")(until C++17)(C++11) |  randomly re-orders elements in a range   
(function template)   
[ ranges::shuffle](algorithm/ranges/shuffle.html "cpp/algorithm/ranges/shuffle")(C++20) |  randomly re-orders elements in a range  
(algorithm function object)  
  
#### Sampling operations

Defined in header `[<algorithm>](header/algorithm.html "cpp/header/algorithm")`  
---  
[ sample](algorithm/sample.html "cpp/algorithm/sample")(C++17) |  selects N random elements from a sequence   
(function template)   
[ ranges::sample](algorithm/ranges/sample.html "cpp/algorithm/ranges/sample")(C++20) |  selects N random elements from a sequence  
(algorithm function object)  
  
### Sorting and related operations

#### Requirements

Some algorithms require the sequence represented by the arguments to be “sorted” or “partitioned”. The behavior is undefined if the requirement is not met. 

A sequence is _sorted with respect to a comparator comp_ if for every iterator iter pointing to the sequence and every non-negative integer n such that iter + n[[1]](algorithm.html#cite_note-plus-1) is a [valid iterator](iterator.html#Dereferenceability_and_validity "cpp/iterator") pointing to an element of the sequence, comp(*(iter + n), *iter) == false[[1]](algorithm.html#cite_note-plus-1).  | (until C++20)  
---|---  
A sequence is _sorted with respect to comp and proj_ for a comparator comp and projection proj if for every iterator iter pointing to the sequence and every non-negative integer n such that iter + n[[1]](algorithm.html#cite_note-plus-1) is a valid iterator pointing to an element of the sequence, bool([std::invoke](utility/functional/invoke.html)(comp, [std::invoke](utility/functional/invoke.html)(proj, *(iter + n)),  
[std::invoke](utility/functional/invoke.html)(proj, *iter)))[[1]](algorithm.html#cite_note-plus-1) is false. A sequence is _sorted with respect to a comparator comp_ if the sequence is sorted with respect to comp and [std::identity](utility/functional/identity.html){} (the identity projection).  | (since C++20)  
  
A sequence `[`start`, `finish`)` is _partitioned with respect to an expression f(e)_ if there exists an integer n such that for all i in `[`​0​`, `[std::distance](iterator/distance.html)(start, finish)`)`, f(*(start + i))[[1]](algorithm.html#cite_note-plus-1) is true if and only if i < n. 

  1. ↑ [1.0](algorithm.html#cite_ref-plus_1-0) [1.1](algorithm.html#cite_ref-plus_1-1) [1.2](algorithm.html#cite_ref-plus_1-2) [1.3](algorithm.html#cite_ref-plus_1-3) [1.4](algorithm.html#cite_ref-plus_1-4) iter + n simply means “the result of iter being incremented n times”, regardless of whether iter is a random access iterator.



#### Partitioning operations

Defined in header `[<algorithm>](header/algorithm.html "cpp/header/algorithm")`  
---  
[ is_partitioned](algorithm/is_partitioned.html "cpp/algorithm/is partitioned")(C++11) |  determines if the range is partitioned by the given predicate   
(function template)   
[ ranges::is_partitioned](algorithm/ranges/is_partitioned.html "cpp/algorithm/ranges/is partitioned")(C++20) |  determines if the range is partitioned by the given predicate  
(algorithm function object)  
[ partition](algorithm/partition.html "cpp/algorithm/partition") |  divides a range of elements into two groups   
(function template)   
[ ranges::partition](algorithm/ranges/partition.html "cpp/algorithm/ranges/partition")(C++20) |  divides a range of elements into two groups  
(algorithm function object)  
[ partition_copy](algorithm/partition_copy.html "cpp/algorithm/partition copy")(C++11) |  copies a range dividing the elements into two groups   
(function template)   
[ ranges::partition_copy](algorithm/ranges/partition_copy.html "cpp/algorithm/ranges/partition copy")(C++20) |  copies a range dividing the elements into two groups  
(algorithm function object)  
[ stable_partition](algorithm/stable_partition.html "cpp/algorithm/stable partition") |  divides elements into two groups while preserving their relative order   
(function template)   
[ ranges::stable_partition](algorithm/ranges/stable_partition.html "cpp/algorithm/ranges/stable partition")(C++20) |  divides elements into two groups while preserving their relative order  
(algorithm function object)  
[ partition_point](algorithm/partition_point.html "cpp/algorithm/partition point")(C++11) |  locates the partition point of a partitioned range   
(function template)   
[ ranges::partition_point](algorithm/ranges/partition_point.html "cpp/algorithm/ranges/partition point")(C++20) |  locates the partition point of a partitioned range  
(algorithm function object)  
  
#### Sorting operations

Defined in header `[<algorithm>](header/algorithm.html "cpp/header/algorithm")`  
---  
[ sort](algorithm/sort.html "cpp/algorithm/sort") |  sorts a range into ascending order   
(function template)   
[ ranges::sort](algorithm/ranges/sort.html "cpp/algorithm/ranges/sort")(C++20) |  sorts a range into ascending order  
(algorithm function object)  
[ stable_sort](algorithm/stable_sort.html "cpp/algorithm/stable sort") |  sorts a range of elements while preserving order between equal elements   
(function template)   
[ ranges::stable_sort](algorithm/ranges/stable_sort.html "cpp/algorithm/ranges/stable sort")(C++20) |  sorts a range of elements while preserving order between equal elements  
(algorithm function object)  
[ partial_sort](algorithm/partial_sort.html "cpp/algorithm/partial sort") |  sorts the first N elements of a range   
(function template)   
[ ranges::partial_sort](algorithm/ranges/partial_sort.html "cpp/algorithm/ranges/partial sort")(C++20) |  sorts the first N elements of a range  
(algorithm function object)  
[ partial_sort_copy](algorithm/partial_sort_copy.html "cpp/algorithm/partial sort copy") |  copies and partially sorts a range of elements   
(function template)   
[ ranges::partial_sort_copy](algorithm/ranges/partial_sort_copy.html "cpp/algorithm/ranges/partial sort copy")(C++20) |  copies and partially sorts a range of elements  
(algorithm function object)  
[ is_sorted](algorithm/is_sorted.html "cpp/algorithm/is sorted")(C++11) |  checks whether a range is sorted into ascending order   
(function template)   
[ ranges::is_sorted](algorithm/ranges/is_sorted.html "cpp/algorithm/ranges/is sorted")(C++20) |  checks whether a range is sorted into ascending order  
(algorithm function object)  
[ is_sorted_until](algorithm/is_sorted_until.html "cpp/algorithm/is sorted until")(C++11) |  finds the largest sorted subrange   
(function template)   
[ ranges::is_sorted_until](algorithm/ranges/is_sorted_until.html "cpp/algorithm/ranges/is sorted until")(C++20) |  finds the largest sorted subrange  
(algorithm function object)  
[ nth_element](algorithm/nth_element.html "cpp/algorithm/nth element") |  partially sorts the given range making sure that it is partitioned by the given element   
(function template)   
[ ranges::nth_element](algorithm/ranges/nth_element.html "cpp/algorithm/ranges/nth element")(C++20) |  partially sorts the given range making sure that it is partitioned by the given element  
(algorithm function object)  
  
#### Binary search operations (on partitioned ranges)

Defined in header `[<algorithm>](header/algorithm.html "cpp/header/algorithm")`  
---  
[ lower_bound](algorithm/lower_bound.html "cpp/algorithm/lower bound") |  returns an iterator to the first element _not less_ than the given value   
(function template)   
[ ranges::lower_bound](algorithm/ranges/lower_bound.html "cpp/algorithm/ranges/lower bound")(C++20) |  returns an iterator to the first element _not less_ than the given value  
(algorithm function object)  
[ upper_bound](algorithm/upper_bound.html "cpp/algorithm/upper bound") |  returns an iterator to the first element _greater_ than a certain value   
(function template)   
[ ranges::upper_bound](algorithm/ranges/upper_bound.html "cpp/algorithm/ranges/upper bound")(C++20) |  returns an iterator to the first element _greater_ than a certain value  
(algorithm function object)  
[ equal_range](algorithm/equal_range.html "cpp/algorithm/equal range") |  returns range of elements matching a specific key   
(function template)   
[ ranges::equal_range](algorithm/ranges/equal_range.html "cpp/algorithm/ranges/equal range")(C++20) |  returns range of elements matching a specific key  
(algorithm function object)  
[ binary_search](algorithm/binary_search.html "cpp/algorithm/binary search") |  determines if an element exists in a partially-ordered range   
(function template)   
[ ranges::binary_search](algorithm/ranges/binary_search.html "cpp/algorithm/ranges/binary search")(C++20) |  determines if an element exists in a partially-ordered range  
(algorithm function object)  
  
#### Set operations (on sorted ranges)

Defined in header `[<algorithm>](header/algorithm.html "cpp/header/algorithm")`  
---  
[ includes](algorithm/includes.html "cpp/algorithm/includes") |  returns true if one sequence is a subsequence of another   
(function template)   
[ ranges::includes](algorithm/ranges/includes.html "cpp/algorithm/ranges/includes")(C++20) |  returns true if one sequence is a subsequence of another  
(algorithm function object)  
[ set_union](algorithm/set_union.html "cpp/algorithm/set union") |  computes the union of two sets   
(function template)   
[ ranges::set_union](algorithm/ranges/set_union.html "cpp/algorithm/ranges/set union")(C++20) |  computes the union of two sets  
(algorithm function object)  
[ set_intersection](algorithm/set_intersection.html "cpp/algorithm/set intersection") |  computes the intersection of two sets   
(function template)   
[ ranges::set_intersection](algorithm/ranges/set_intersection.html "cpp/algorithm/ranges/set intersection")(C++20) |  computes the intersection of two sets  
(algorithm function object)  
[ set_difference](algorithm/set_difference.html "cpp/algorithm/set difference") |  computes the difference between two sets   
(function template)   
[ ranges::set_difference](algorithm/ranges/set_difference.html "cpp/algorithm/ranges/set difference")(C++20) |  computes the difference between two sets  
(algorithm function object)  
[ set_symmetric_difference](algorithm/set_symmetric_difference.html "cpp/algorithm/set symmetric difference") |  computes the symmetric difference between two sets   
(function template)   
[ ranges::set_symmetric_difference](algorithm/ranges/set_symmetric_difference.html "cpp/algorithm/ranges/set symmetric difference")(C++20) |  computes the symmetric difference between two sets  
(algorithm function object)  
  
#### Merge operations (on sorted ranges)

Defined in header `[<algorithm>](header/algorithm.html "cpp/header/algorithm")`  
---  
[ merge](algorithm/merge.html "cpp/algorithm/merge") |  merges two sorted ranges   
(function template)   
[ ranges::merge](algorithm/ranges/merge.html "cpp/algorithm/ranges/merge")(C++20) |  merges two sorted ranges  
(algorithm function object)  
[ inplace_merge](algorithm/inplace_merge.html "cpp/algorithm/inplace merge") |  merges two ordered ranges in-place   
(function template)   
[ ranges::inplace_merge](algorithm/ranges/inplace_merge.html "cpp/algorithm/ranges/inplace merge")(C++20) |  merges two ordered ranges in-place  
(algorithm function object)  
  
#### Heap operations

A random access [range](iterator.html#Ranges "cpp/iterator") `[`first`, `last`)` is a _heap with respect to a comparator comp_ if bool(comp(first[(i - 1) / 2], first[i])) is false for all integer i in `(`​0​`, `last - first`)`.  | (until C++20)  
---|---  
A random access [range](iterator.html#Ranges "cpp/iterator") `[`first`, `last`)` is a _heap with respect to comp and proj_ for a comparator comp and projection proj if bool([std::invoke](utility/functional/invoke.html)(comp, [std::invoke](utility/functional/invoke.html)(proj, first[(i - 1) / 2]),  
[std::invoke](utility/functional/invoke.html)(proj, first[i])) is false for all integer i in `(`​0​`, `last - first`)`. A random access [range](iterator.html#Ranges "cpp/iterator") `[`first`, `last`)` is a _heap with respect to a comparator comp_ if the range is a heap with respect to comp and [std::identity](utility/functional/identity.html){} (the identity projection).  | (since C++20)  
  
A heap can be created by [std::make_heap](algorithm/make_heap.html "cpp/algorithm/make heap") and [ranges::make_heap](algorithm/ranges/make_heap.html "cpp/algorithm/ranges/make heap")(since C++20). 

For more properties of heap, see [max heap](https://en.wikipedia.org/wiki/Binary_heap "enwiki:Binary heap"). 

  


Defined in header `[<algorithm>](header/algorithm.html "cpp/header/algorithm")`  
---  
[ push_heap](algorithm/push_heap.html "cpp/algorithm/push heap") |  adds an element to a max heap   
(function template)   
[ ranges::push_heap](algorithm/ranges/push_heap.html "cpp/algorithm/ranges/push heap")(C++20) |  adds an element to a max heap  
(algorithm function object)  
[ pop_heap](algorithm/pop_heap.html "cpp/algorithm/pop heap") |  removes the largest element from a max heap   
(function template)   
[ ranges::pop_heap](algorithm/ranges/pop_heap.html "cpp/algorithm/ranges/pop heap")(C++20) |  removes the largest element from a max heap  
(algorithm function object)  
[ make_heap](algorithm/make_heap.html "cpp/algorithm/make heap") |  creates a max heap out of a range of elements   
(function template)   
[ ranges::make_heap](algorithm/ranges/make_heap.html "cpp/algorithm/ranges/make heap")(C++20) |  creates a max heap out of a range of elements  
(algorithm function object)  
[ sort_heap](algorithm/sort_heap.html "cpp/algorithm/sort heap") |  turns a max heap into a range of elements sorted in ascending order   
(function template)   
[ ranges::sort_heap](algorithm/ranges/sort_heap.html "cpp/algorithm/ranges/sort heap")(C++20) |  turns a max heap into a range of elements sorted in ascending order  
(algorithm function object)  
[ is_heap](algorithm/is_heap.html "cpp/algorithm/is heap")(C++11) |  checks if the given range is a max heap   
(function template)   
[ ranges::is_heap](algorithm/ranges/is_heap.html "cpp/algorithm/ranges/is heap")(C++20) |  checks if the given range is a max heap  
(algorithm function object)  
[ is_heap_until](algorithm/is_heap_until.html "cpp/algorithm/is heap until")(C++11) |  finds the largest subrange that is a max heap   
(function template)   
[ ranges::is_heap_until](algorithm/ranges/is_heap_until.html "cpp/algorithm/ranges/is heap until")(C++20) |  finds the largest subrange that is a max heap  
(algorithm function object)  
  
#### Minimum/maximum operations

Defined in header `[<algorithm>](header/algorithm.html "cpp/header/algorithm")`  
---  
[ max](algorithm/max.html "cpp/algorithm/max") |  returns the greater of the given values   
(function template)   
[ ranges::max](algorithm/ranges/max.html "cpp/algorithm/ranges/max")(C++20) |  returns the greater of the given values  
(algorithm function object)  
[ max_element](algorithm/max_element.html "cpp/algorithm/max element") |  returns the largest element in a range   
(function template)   
[ ranges::max_element](algorithm/ranges/max_element.html "cpp/algorithm/ranges/max element")(C++20) |  returns the largest element in a range  
(algorithm function object)  
[ min](algorithm/min.html "cpp/algorithm/min") |  returns the smaller of the given values   
(function template)   
[ ranges::min](algorithm/ranges/min.html "cpp/algorithm/ranges/min")(C++20) |  returns the smaller of the given values  
(algorithm function object)  
[ min_element](algorithm/min_element.html "cpp/algorithm/min element") |  returns the smallest element in a range   
(function template)   
[ ranges::min_element](algorithm/ranges/min_element.html "cpp/algorithm/ranges/min element")(C++20) |  returns the smallest element in a range  
(algorithm function object)  
[ minmax](algorithm/minmax.html "cpp/algorithm/minmax")(C++11) |  returns the smaller and larger of two elements   
(function template)   
[ ranges::minmax](algorithm/ranges/minmax.html "cpp/algorithm/ranges/minmax")(C++20) |  returns the smaller and larger of two elements  
(algorithm function object)  
[ minmax_element](algorithm/minmax_element.html "cpp/algorithm/minmax element")(C++11) |  returns the smallest and the largest elements in a range   
(function template)   
[ ranges::minmax_element](algorithm/ranges/minmax_element.html "cpp/algorithm/ranges/minmax element")(C++20) |  returns the smallest and the largest elements in a range  
(algorithm function object)  
[ clamp](algorithm/clamp.html "cpp/algorithm/clamp")(C++17) |  clamps a value between a pair of boundary values   
(function template)   
[ ranges::clamp](algorithm/ranges/clamp.html "cpp/algorithm/ranges/clamp")(C++20) |  clamps a value between a pair of boundary values  
(algorithm function object)  
  
#### Lexicographical comparison operations

Defined in header `[<algorithm>](header/algorithm.html "cpp/header/algorithm")`  
---  
[ lexicographical_compare](algorithm/lexicographical_compare.html "cpp/algorithm/lexicographical compare") |  returns true if one range is lexicographically less than another   
(function template)   
[ ranges::lexicographical_compare](algorithm/ranges/lexicographical_compare.html "cpp/algorithm/ranges/lexicographical compare")(C++20) |  returns true if one range is lexicographically less than another  
(algorithm function object)  
[ lexicographical_compare_three_way](algorithm/lexicographical_compare_three_way.html "cpp/algorithm/lexicographical compare three way")(C++20) |  compares two ranges using three-way comparison   
(function template)   
  
#### Permutation operations

Defined in header `[<algorithm>](header/algorithm.html "cpp/header/algorithm")`  
---  
[ next_permutation](algorithm/next_permutation.html "cpp/algorithm/next permutation") |  generates the next greater lexicographic permutation of a range of elements   
(function template)   
[ ranges::next_permutation](algorithm/ranges/next_permutation.html "cpp/algorithm/ranges/next permutation")(C++20) |  generates the next greater lexicographic permutation of a range of elements  
(algorithm function object)  
[ prev_permutation](algorithm/prev_permutation.html "cpp/algorithm/prev permutation") |  generates the next smaller lexicographic permutation of a range of elements   
(function template)   
[ ranges::prev_permutation](algorithm/ranges/prev_permutation.html "cpp/algorithm/ranges/prev permutation")(C++20) |  generates the next smaller lexicographic permutation of a range of elements  
(algorithm function object)  
[ is_permutation](algorithm/is_permutation.html "cpp/algorithm/is permutation")(C++11) |  determines if a sequence is a permutation of another sequence   
(function template)   
[ ranges::is_permutation](algorithm/ranges/is_permutation.html "cpp/algorithm/ranges/is permutation")(C++20) |  determines if a sequence is a permutation of another sequence  
(algorithm function object)  
  
### Numeric operations

Defined in header `[<numeric>](header/numeric.html "cpp/header/numeric")`  
---  
[ iota](algorithm/iota.html "cpp/algorithm/iota")(C++11) |  fills a range with successive increments of the starting value   
(function template)   
[ ranges::iota](algorithm/ranges/iota.html "cpp/algorithm/ranges/iota")(C++23) |  fills a range with successive increments of the starting value  
(algorithm function object)  
[ accumulate](algorithm/accumulate.html "cpp/algorithm/accumulate") |  sums up or folds a range of elements   
(function template)   
[ inner_product](algorithm/inner_product.html "cpp/algorithm/inner product") |  computes the inner product of two ranges of elements   
(function template)   
[ adjacent_difference](algorithm/adjacent_difference.html "cpp/algorithm/adjacent difference") |  computes the differences between adjacent elements in a range   
(function template)   
[ partial_sum](algorithm/partial_sum.html "cpp/algorithm/partial sum") |  computes the partial sum of a range of elements   
(function template)   
[ reduce](algorithm/reduce.html "cpp/algorithm/reduce")(C++17) |  similar to [std::accumulate](algorithm/accumulate.html "cpp/algorithm/accumulate"), except out of order   
(function template)   
[ exclusive_scan](algorithm/exclusive_scan.html "cpp/algorithm/exclusive scan")(C++17) |  similar to [std::partial_sum](algorithm/partial_sum.html "cpp/algorithm/partial sum"), excludes the ith input element from the ith sum   
(function template)   
[ inclusive_scan](algorithm/inclusive_scan.html "cpp/algorithm/inclusive scan")(C++17) |  similar to [std::partial_sum](algorithm/partial_sum.html "cpp/algorithm/partial sum"), includes the ith input element in the ith sum   
(function template)   
[ transform_reduce](algorithm/transform_reduce.html "cpp/algorithm/transform reduce")(C++17) |  applies an invocable, then reduces out of order   
(function template)   
[ transform_exclusive_scan](algorithm/transform_exclusive_scan.html "cpp/algorithm/transform exclusive scan")(C++17) |  applies an invocable, then calculates exclusive scan   
(function template)   
[ transform_inclusive_scan](algorithm/transform_inclusive_scan.html "cpp/algorithm/transform inclusive scan")(C++17) |  applies an invocable, then calculates inclusive scan   
(function template)   
  
### Operations on uninitialized memory

Defined in header `[<memory>](header/memory.html "cpp/header/memory")`  
---  
[ uninitialized_copy](memory/uninitialized_copy.html "cpp/memory/uninitialized copy") |  copies a range of objects to an uninitialized area of memory   
(function template)   
[ ranges::uninitialized_copy](memory/ranges/uninitialized_copy.html "cpp/memory/ranges/uninitialized copy")(C++20) |  copies a range of objects to an uninitialized area of memory  
(algorithm function object)  
[ uninitialized_copy_n](memory/uninitialized_copy_n.html "cpp/memory/uninitialized copy n")(C++11) |  copies a number of objects to an uninitialized area of memory   
(function template)   
[ ranges::uninitialized_copy_n](memory/ranges/uninitialized_copy_n.html "cpp/memory/ranges/uninitialized copy n")(C++20) |  copies a number of objects to an uninitialized area of memory  
(algorithm function object)  
[ uninitialized_fill](memory/uninitialized_fill.html "cpp/memory/uninitialized fill") |  copies an object to an uninitialized area of memory, defined by a range   
(function template)   
[ ranges::uninitialized_fill](memory/ranges/uninitialized_fill.html "cpp/memory/ranges/uninitialized fill")(C++20) |  copies an object to an uninitialized area of memory, defined by a range  
(algorithm function object)  
[ uninitialized_fill_n](memory/uninitialized_fill_n.html "cpp/memory/uninitialized fill n") |  copies an object to an uninitialized area of memory, defined by a start and a count   
(function template)   
[ ranges::uninitialized_fill_n](memory/ranges/uninitialized_fill_n.html "cpp/memory/ranges/uninitialized fill n")(C++20) |  copies an object to an uninitialized area of memory, defined by a start and a count  
(algorithm function object)  
[ uninitialized_move](memory/uninitialized_move.html "cpp/memory/uninitialized move")(C++17) |  moves a range of objects to an uninitialized area of memory   
(function template)   
[ ranges::uninitialized_move](memory/ranges/uninitialized_move.html "cpp/memory/ranges/uninitialized move")(C++20) |  moves a range of objects to an uninitialized area of memory  
(algorithm function object)  
[ uninitialized_move_n](memory/uninitialized_move_n.html "cpp/memory/uninitialized move n")(C++17) |  moves a number of objects to an uninitialized area of memory   
(function template)   
[ ranges::uninitialized_move_n](memory/ranges/uninitialized_move_n.html "cpp/memory/ranges/uninitialized move n")(C++20) |  moves a number of objects to an uninitialized area of memory  
(algorithm function object)  
[ uninitialized_default_construct](memory/uninitialized_default_construct.html "cpp/memory/uninitialized default construct")(C++17) |  constructs objects by [default-initialization](language/default_initialization.html "cpp/language/default initialization") in an uninitialized area of memory, defined by a range   
(function template)   
[ ranges::uninitialized_default_construct](memory/ranges/uninitialized_default_construct.html "cpp/memory/ranges/uninitialized default construct")(C++20) |  constructs objects by [default-initialization](language/default_initialization.html "cpp/language/default initialization") in an uninitialized area of memory, defined by a range  
(algorithm function object)  
[ uninitialized_default_construct_n](memory/uninitialized_default_construct_n.html "cpp/memory/uninitialized default construct n")(C++17) |  constructs objects by [default-initialization](language/default_initialization.html "cpp/language/default initialization") in an uninitialized area of memory, defined by a start and a count   
(function template)   
[ ranges::uninitialized_default_construct_n](memory/ranges/uninitialized_default_construct_n.html "cpp/memory/ranges/uninitialized default construct n")(C++20) |  constructs objects by [default-initialization](language/default_initialization.html "cpp/language/default initialization") in an uninitialized area of memory, defined by a start and count  
(algorithm function object)  
[ uninitialized_value_construct](memory/uninitialized_value_construct.html "cpp/memory/uninitialized value construct")(C++17) |  constructs objects by [value-initialization](language/value_initialization.html "cpp/language/value initialization") in an uninitialized area of memory, defined by a range   
(function template)   
[ ranges::uninitialized_value_construct](memory/ranges/uninitialized_value_construct.html "cpp/memory/ranges/uninitialized value construct")(C++20) |  constructs objects by [value-initialization](language/value_initialization.html "cpp/language/value initialization") in an uninitialized area of memory, defined by a range  
(algorithm function object)  
[ uninitialized_value_construct_n](memory/uninitialized_value_construct_n.html "cpp/memory/uninitialized value construct n")(C++17) |  constructs objects by [value-initialization](language/value_initialization.html "cpp/language/value initialization") in an uninitialized area of memory, defined by a start and a count   
(function template)   
[ ranges::uninitialized_value_construct_n](memory/ranges/uninitialized_value_construct_n.html "cpp/memory/ranges/uninitialized value construct n")(C++20) |  constructs objects by [value-initialization](language/value_initialization.html "cpp/language/value initialization") in an uninitialized area of memory, defined by a start and a count  
(algorithm function object)  
[ destroy](memory/destroy.html "cpp/memory/destroy")(C++17) |  destroys a range of objects   
(function template)   
[ ranges::destroy](memory/ranges/destroy.html "cpp/memory/ranges/destroy")(C++20) |  destroys a range of objects  
(algorithm function object)  
[ destroy_n](memory/destroy_n.html "cpp/memory/destroy n")(C++17) |  destroys a number of objects in a range   
(function template)   
[ ranges::destroy_n](memory/ranges/destroy_n.html "cpp/memory/ranges/destroy n")(C++20) |  destroys a number of objects in a range  
(algorithm function object)  
[ destroy_at](memory/destroy_at.html "cpp/memory/destroy at")(C++17) |  destroys an object at a given address   
(function template)   
[ ranges::destroy_at](memory/ranges/destroy_at.html "cpp/memory/ranges/destroy at")(C++20) |  destroys an object at a given address  
(algorithm function object)  
[ construct_at](memory/construct_at.html "cpp/memory/construct at")(C++20) |  creates an object at a given address   
(function template)   
[ ranges::construct_at](memory/ranges/construct_at.html "cpp/memory/ranges/construct at")(C++20) |  creates an object at a given address  
(algorithm function object)  
  
### Random number generation (since C++26)

Defined in header `[<random>](header/random.html "cpp/header/random")`  
---  
[ ranges::generate_random](algorithm/ranges/generate_random.html "cpp/algorithm/ranges/generate random")(C++26) |  fills a range with random numbers from a uniform random bit generator  
(algorithm function object)  
  
### Notes

[Feature-test](utility/feature_test.html "cpp/utility/feature test") macro  | Value | Std | Feature   
---|---|---|---  
[`__cpp_lib_algorithm_iterator_requirements`](experimental/feature_test.html#cpp_lib_algorithm_iterator_requirements "cpp/feature test") | [`202207L`](compiler_support/23.html#cpp_lib_algorithm_iterator_requirements_202207L "cpp/compiler support/23") | (C++23) | Ranges iterators as inputs to non-Ranges algorithms   
[`__cpp_lib_clamp`](experimental/feature_test.html#cpp_lib_clamp "cpp/feature test") | [`201603L`](compiler_support/17.html#cpp_lib_clamp_201603L "cpp/compiler support/17") | (C++17) | [std::clamp](algorithm/clamp.html "cpp/algorithm/clamp")  
[`__cpp_lib_constexpr_algorithms`](experimental/feature_test.html#cpp_lib_constexpr_algorithms "cpp/feature test") | [`201806L`](compiler_support/20.html#cpp_lib_constexpr_algorithms_201806L "cpp/compiler support/20") | (C++20) | Constexpr for algorithms   
[`202306L`](compiler_support/26.html#cpp_lib_constexpr_algorithms_202306L "cpp/compiler support/26") | (C++26) | Constexpr stable sorting   
[`__cpp_lib_algorithm_default_value_type`](experimental/feature_test.html#cpp_lib_algorithm_default_value_type "cpp/feature test") | [`202403L`](compiler_support/26.html#cpp_lib_algorithm_default_value_type_202403L "cpp/compiler support/26") | (C++26) | [List-initialization](language/list_initialization.html "cpp/language/list initialization") for algorithms   
[`__cpp_lib_freestanding_algorithm`](experimental/feature_test.html#cpp_lib_freestanding_algorithm "cpp/feature test") | [`202311L`](compiler_support/26.html#cpp_lib_freestanding_algorithm_202311L "cpp/compiler support/26") | (C++26) | Freestanding facilities in [`<algorithm>`](header/algorithm.html "cpp/header/algorithm")  
[`__cpp_lib_robust_nonmodifying_seq_ops`](experimental/feature_test.html#cpp_lib_robust_nonmodifying_seq_ops "cpp/feature test") | [`201304L`](compiler_support/14.html#cpp_lib_robust_nonmodifying_seq_ops_201304L "cpp/compiler support/14") | (C++14) | Making non-modifying sequence operations more robust (two-range overloads for [std::mismatch](algorithm/mismatch.html "cpp/algorithm/mismatch"), [std::equal](algorithm/equal.html "cpp/algorithm/equal") and std::is_permutation)  
[`__cpp_lib_sample`](experimental/feature_test.html#cpp_lib_sample "cpp/feature test") | [`201603L`](compiler_support/17.html#cpp_lib_sample_201603L "cpp/compiler support/17") | (C++17) | [std::sample](algorithm/sample.html "cpp/algorithm/sample")  
[`__cpp_lib_shift`](experimental/feature_test.html#cpp_lib_shift "cpp/feature test") | [`201806L`](compiler_support/20.html#cpp_lib_shift_201806L "cpp/compiler support/20") | (C++20) | std::shift_left and std::shift_right  
  
### C library

Defined in header `[<cstdlib>](header/cstdlib.html "cpp/header/cstdlib")`  
---  
[ qsort](algorithm/qsort.html "cpp/algorithm/qsort") |  sorts a range of elements with unspecified type   
(function)   
[ bsearch](algorithm/bsearch.html "cpp/algorithm/bsearch") |  searches an array for an element of unspecified type   
(function)   
  
### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 193](https://cplusplus.github.io/LWG/issue193) | C++98  | heap required *first to be the largest element  | there can be elements  
equal to *first  
[LWG 2150](https://cplusplus.github.io/LWG/issue2150) | C++98  | the definition of a sorted sequence was incorrect  | corrected   
[LWG 2166](https://cplusplus.github.io/LWG/issue2166) | C++98  | the heap requirement did not match the  
definition of [max heap](https://en.wikipedia.org/wiki/Binary_heap "enwiki:Binary heap") closely enough  | requirement improved   
  
### See also

[C documentation](../c/algorithm.html "c/algorithm") for Algorithms  
---
  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
