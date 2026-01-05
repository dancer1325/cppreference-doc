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
| **merge**  
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
  


Defined in header `[<algorithm>](../header/algorithm.html "cpp/header/algorithm")` |  |   
---|---|---  
template< class InputIt1, class InputIt2, class OutputIt >  
OutputIt merge( InputIt1 first1, InputIt1 last1,  
InputIt2 first2, InputIt2 last2,  
OutputIt d_first ); |  (1) | (constexpr since C++20)  
template< class ExecutionPolicy,  
class ForwardIt1, class ForwardIt2, class ForwardIt3 >  
ForwardIt3 merge( ExecutionPolicy&& policy,  
ForwardIt1 first1, ForwardIt1 last1,  
ForwardIt2 first2, ForwardIt2 last2,  
ForwardIt3 d_first ); |  (2)  |  (since C++17)  
template< class InputIt1, class InputIt2,  
class OutputIt, class Compare >  
OutputIt merge( InputIt1 first1, InputIt1 last1,  
InputIt2 first2, InputIt2 last2,  
OutputIt d_first, Compare comp ); |  (3) | (constexpr since C++20)  
template< class ExecutionPolicy,  
class ForwardIt1, class ForwardIt2,  
class ForwardIt3, class Compare >  
ForwardIt3 merge( ExecutionPolicy&& policy,  
ForwardIt1 first1, ForwardIt1 last1,  
ForwardIt2 first2, ForwardIt2 last2,  
ForwardIt3 d_first, Compare comp ); |  (4)  |  (since C++17)  
| |   
  
Merges two sorted ranges `[`first1`, `last1`)` and `[`first2`, `last2`)` into one sorted range beginning at d_first. 

1) If `[`first1`, `last1`)` or `[`first2`, `last2`)` is not [sorted](../algorithm.html#Requirements "cpp/algorithm") with respect to operator<(until C++20)[std::less](../utility/functional/less.html){}(since C++20), the behavior is undefined.

3) If `[`first1`, `last1`)` or `[`first2`, `last2`)` is not sorted with respect to comp, the behavior is undefined.

2,4) Same as (1,3), but executed according to policy.

These overloads participate in overload resolution only if all following conditions are satisfied:  [std::is_execution_policy_v](is_execution_policy.html)<[std::decay_t](../types/decay.html)<ExecutionPolicy>> is true.  | (until C++20)  
---|---  
[std::is_execution_policy_v](is_execution_policy.html)<[std::remove_cvref_t](../types/remove_cvref.html)<ExecutionPolicy>> is true.  | (since C++20)  
  
This merge function is stable, which means that for equivalent elements in the original two ranges, the elements from the first range (preserving their original order) precede the elements from the second range (preserving their original order). 

If the output range overlaps with `[`first1`, `last1`)` or `[`first2`, `last2`)`, the behavior is undefined. 

## Contents

  * [1 Parameters](merge.html#Parameters)
  * [2 Return value](merge.html#Return_value)
  * [3 Complexity](merge.html#Complexity)
  * [4 Exceptions](merge.html#Exceptions)
  * [5 Possible implementation](merge.html#Possible_implementation)
  * [6 Notes](merge.html#Notes)
  * [7 Example](merge.html#Example)
  * [8 Defect reports](merge.html#Defect_reports)
  * [9 See also](merge.html#See_also)

  
---  
  
### Parameters

first1, last1  |  \-  |  the pair of iterators defining the first [range](../iterator.html#Ranges "cpp/iterator") of elements to merge   
---|---|---  
first2, last2  |  \-  |  the pair of iterators defining the second [range](../iterator.html#Ranges "cpp/iterator") of elements to merge   
d_first  |  \-  |  the beginning of the destination range   
policy  |  \-  |  the [execution policy](execution_policy_tag_t.html "cpp/algorithm/execution policy tag t") to use   
comp  |  \-  |  comparison function object (i.e. an object that satisfies the requirements of [Compare](../named_req/Compare.html "cpp/named req/Compare")) which returns ​true if the first argument is _less_ than (i.e. is ordered _before_) the second.   
The signature of the comparison function should be equivalent to the following: bool cmp(const Type1& a, const Type2& b); While the signature does not need to have const&, the function must not modify the objects passed to it and must be able to accept all values of type (possibly const) `Type1` and `Type2` regardless of [value category](../language/value_category.html "cpp/language/value category") (thus, `Type1&` is not allowed, nor is `Type1` unless for `Type1` a move is equivalent to a copy(since C++11)).  
The types Type1 and Type2 must be such that objects of types InputIt1 and InputIt2 can be dereferenced and then implicitly converted to both Type1 and Type2. ​   
Type requirements   
-`InputIt1, InputIt2` must meet the requirements of [LegacyInputIterator](../named_req/InputIterator.html "cpp/named req/InputIterator").   
-`ForwardIt1, ForwardIt2, ForwardIt3` must meet the requirements of [LegacyForwardIterator](../named_req/ForwardIterator.html "cpp/named req/ForwardIterator").   
-`OutputIt` must meet the requirements of [LegacyOutputIterator](../named_req/OutputIterator.html "cpp/named req/OutputIterator").   
-`Compare` must meet the requirements of [Compare](../named_req/Compare.html "cpp/named req/Compare").   
  
### Return value

An output iterator to element past the last element copied. 

### Complexity

Given \\(\scriptsize N_1\\)N1 as [std::distance](../iterator/distance.html)(first1, last1) and \\(\scriptsize N_2\\)N2 as [std::distance](../iterator/distance.html)(first2, last2): 

1) At most \\(\scriptsize N_1+N_2-1\\)N1+N2-1 comparisons using operator<(until C++20)[std::less](../utility/functional/less.html){}(since C++20).

2) \\(\scriptsize O(N_1+N_2)\\)O(N1+N2) comparisons using operator<(until C++20)[std::less](../utility/functional/less.html){}(since C++20).

3) At most \\(\scriptsize N_1+N_2-1\\)N1+N2-1 applications of the comparison function comp.

4) \\(\scriptsize O(N_1+N_2)\\)O(N1+N2) applications of the comparison function comp.

### Exceptions

The overloads with a template parameter named `ExecutionPolicy` report errors as follows: 

  * If execution of a function invoked as part of the algorithm throws an exception and `ExecutionPolicy` is one of the [standard policies](execution_policy_tag_t.html "cpp/algorithm/execution policy tag t"), [std::terminate](../error/terminate.html "cpp/error/terminate") is called. For any other `ExecutionPolicy`, the behavior is implementation-defined. 
  * If the algorithm fails to allocate memory, [std::bad_alloc](../memory/new/bad_alloc.html "cpp/memory/new/bad alloc") is thrown. 



### Possible implementation

See also the implementations in [libstdc++](https://github.com/gcc-mirror/gcc/blob/d9375e490072d1aae73a93949aa158fcd2a27018/libstdc%2B%2B-v3/include/bits/stl_algo.h#L4856) and [libc++](https://github.com/llvm-mirror/libcxx/blob/a12cb9d211019d99b5875b6d8034617cbc24c2cc/include/algorithm#L4348). 

[merge (1)](merge.html#Version_1)  
---  
      
    
    template<class InputIt1, class InputIt2, class OutputIt>
    OutputIt merge(InputIt1 first1, InputIt1 last1,
                   InputIt2 first2, InputIt2 last2,
                   OutputIt d_first)
    {
        for (; first1 != last1; ++d_first)
        {
            if (first2 == last2)
                return [std::copy](copy.html)(first1, last1, d_first);
     
            if (*first2 < *first1)
            {
                *d_first = *first2;
                ++first2;
            }
            else
            {
                *d_first = *first1;
                ++first1;
            }
        }
        return [std::copy](copy.html)(first2, last2, d_first);
    }  
  
[merge (3)](merge.html#Version_3)  
      
    
    template<class InputIt1, class InputIt2,
             class OutputIt, class Compare>
    OutputIt merge(InputIt1 first1, InputIt1 last1,
                   InputIt2 first2, InputIt2 last2,
                   OutputIt d_first, Compare comp)
    {
        for (; first1 != last1; ++d_first)
        {
            if (first2 == last2)
                return [std::copy](copy.html)(first1, last1, d_first);
     
            if (comp(*first2, *first1))
            {
                *d_first = *first2;
                ++first2;
            }
            else
            {
                *d_first = *first1;
                ++first1;
            }
        }
        return [std::copy](copy.html)(first2, last2, d_first);
    }  
  
### Notes

This algorithm performs a similar task as [std::set_union](set_union.html) does. Both consume two sorted input ranges and produce a sorted output with elements from both inputs. The difference between these two algorithms is with handling values from both input ranges which compare equivalent (see notes on [LessThanComparable](../named_req/LessThanComparable.html "cpp/named req/LessThanComparable")). If any equivalent values appeared n times in the first range and m times in the second, `std::merge` would output all n + m occurrences whereas `std::set_union` would output [std::max](max.html)(n, m) ones only. So `std::merge` outputs exactly [std::distance](../iterator/distance.html)(first1, last1) + [std::distance](../iterator/distance.html)(first2, last2) values and `std::set_union` may produce fewer. 

### Example

Run this code
    
    
    #include <algorithm>
    #include <functional>
    #include <iostream>
    #include <iterator>
    #include <random>
    #include <vector>
     
    auto print = [](const auto rem, const auto& v)
    {
        [std::cout](../io/cout.html) << rem;
        [std::copy](copy.html)(v.begin(), v.end(), [std::ostream_iterator](../iterator/ostream_iterator.html)<int>([std::cout](../io/cout.html), " "));
        [std::cout](../io/cout.html) << '\n';
    };
     
    int main()
    {
        // fill the vectors with random numbers
        [std::random_device](../numeric/random/random_device.html) rd;
        [std::mt19937](../numeric/random/mersenne_twister_engine.html) mt(rd());
        [std::uniform_int_distribution](../numeric/random/uniform_int_distribution.html)<> dis(0, 9);
     
        [std::vector](../container/vector.html)<int> v1(10), v2(10);
        [std::generate](generate.html)(v1.begin(), v1.end(), [std::bind](../utility/functional/bind.html)(dis, [std::ref](../utility/functional/ref.html)(mt)));
        [std::generate](generate.html)(v2.begin(), v2.end(), [std::bind](../utility/functional/bind.html)(dis, [std::ref](../utility/functional/ref.html)(mt)));
     
        print("Originally:\nv1: ", v1);
        print("v2: ", v2);
     
        [std::sort](sort.html)(v1.begin(), v1.end());
        [std::sort](sort.html)(v2.begin(), v2.end());
     
        print("After sorting:\nv1: ", v1);
        print("v2: ", v2);
     
        // merge
        [std::vector](../container/vector.html)<int> dst;
        std::merge(v1.begin(), v1.end(), v2.begin(), v2.end(), [std::back_inserter](../iterator/back_inserter.html)(dst));
     
        print("After merging:\ndst: ", dst);
    }

Possible output: 
    
    
    Originally:
    v1: 2 6 5 7 4 2 2 6 7 0
    v2: 8 3 2 5 0 1 9 6 5 0
    After sorting:
    v1: 0 2 2 2 4 5 6 6 7 7
    v2: 0 0 1 2 3 5 5 6 8 9
    After merging:
    dst: 0 0 0 1 2 2 2 2 3 4 5 5 5 6 6 6 7 7 8 9

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 780](https://cplusplus.github.io/LWG/issue780) | C++98  | the merge operation was not defined  | defined   
  
### See also

[ inplace_merge](inplace_merge.html "cpp/algorithm/inplace merge") |  merges two ordered ranges in-place   
(function template)   
---|---  
[ is_sorted](is_sorted.html "cpp/algorithm/is sorted")(C++11) |  checks whether a range is sorted into ascending order   
(function template)   
[ set_union](set_union.html "cpp/algorithm/set union") |  computes the union of two sets   
(function template)   
[ sort](sort.html "cpp/algorithm/sort") |  sorts a range into ascending order   
(function template)   
[ stable_sort](stable_sort.html "cpp/algorithm/stable sort") |  sorts a range of elements while preserving order between equal elements   
(function template)   
[ ranges::merge](ranges/merge.html "cpp/algorithm/ranges/merge")(C++20) |  merges two sorted ranges  
(algorithm function object)
