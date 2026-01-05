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
**equal**  
  
  
  
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
  


Defined in header `[<algorithm>](../header/algorithm.html "cpp/header/algorithm")` |  |   
---|---|---  
template< class InputIt1, class InputIt2 >  
bool equal( InputIt1 first1, InputIt1 last1,  
InputIt2 first2 ); |  (1) | (constexpr since C++20)  
template< class ExecutionPolicy, class ForwardIt1, class ForwardIt2 >  
bool equal( ExecutionPolicy&& policy,  
ForwardIt1 first1, ForwardIt1 last1,  
ForwardIt2 first2 ); |  (2)  |  (since C++17)  
template< class InputIt1, class InputIt2, class BinaryPred >  
bool equal( InputIt1 first1, InputIt1 last1,  
InputIt2 first2, BinaryPred p ); |  (3) | (constexpr since C++20)  
template< class ExecutionPolicy,  
class ForwardIt1, class ForwardIt2, class BinaryPred >  
bool equal( ExecutionPolicy&& policy,  
ForwardIt1 first1, ForwardIt1 last1,  
ForwardIt2 first2, BinaryPred p ); |  (4)  |  (since C++17)  
template< class InputIt1, class InputIt2 >  
bool equal( InputIt1 first1, InputIt1 last1,  
InputIt2 first2, InputIt2 last2 ); |  (5) | (since C++14)   
(constexpr since C++20)  
template< class ExecutionPolicy, class ForwardIt1, class ForwardIt2 >  
bool equal( ExecutionPolicy&& policy,  
ForwardIt1 first1, ForwardIt1 last1,  
ForwardIt2 first2, ForwardIt2 last2 ); |  (6)  |  (since C++17)  
template< class InputIt1, class InputIt2, class BinaryPred >  
bool equal( InputIt1 first1, InputIt1 last1,  
InputIt2 first2, InputIt2 last2, BinaryPred p ); |  (7) | (since C++14)   
(constexpr since C++20)  
template< class ExecutionPolicy,  
class ForwardIt1, class ForwardIt2, class BinaryPred >  
bool equal( ExecutionPolicy&& policy,  
ForwardIt1 first1, ForwardIt1 last1,  
ForwardIt2 first2, ForwardIt2 last2, BinaryPred p ); |  (8)  |  (since C++17)  
| |   
  
Checks whether `[`first1`, `last1`)` and a range starting from first2 are equal: 

  * For overloads (1-4), the second range has [std::distance](../iterator/distance.html)(first1, last1) elements. 
  * For overloads (5-8), the second range is `[`first2`, `last2`)`. 



1,5) Elements are compared using operator==.

3,7) Elements are compared using the given binary predicate p.

2,4,6,8) Same as (1,3,5,7), but executed according to policy.

These overloads participate in overload resolution only if all following conditions are satisfied:  [std::is_execution_policy_v](is_execution_policy.html)<[std::decay_t](../types/decay.html)<ExecutionPolicy>> is true.  | (until C++20)  
---|---  
[std::is_execution_policy_v](is_execution_policy.html)<[std::remove_cvref_t](../types/remove_cvref.html)<ExecutionPolicy>> is true.  | (since C++20)  
  
## Contents

  * [1 Parameters](equal.html#Parameters)
  * [2 Return value](equal.html#Return_value)
  * [3 Complexity](equal.html#Complexity)
  * [4 Exceptions](equal.html#Exceptions)
  * [5 Possible implementation](equal.html#Possible_implementation)
  * [6 Notes](equal.html#Notes)
  * [7 Example](equal.html#Example)
  * [8 See also](equal.html#See_also)

  
---  
  
### Parameters

first1, last1  |  \-  |  the pair of iterators defining the first [range](../iterator.html#Ranges "cpp/iterator") of elements to compare   
---|---|---  
first2, last2  |  \-  |  the pair of iterators defining the second [range](../iterator.html#Ranges "cpp/iterator") of elements to compare   
policy  |  \-  |  the [execution policy](execution_policy_tag_t.html "cpp/algorithm/execution policy tag t") to use   
p  |  \-  |  binary predicate which returns ​true if the elements should be treated as equal.   
The signature of the predicate function should be equivalent to the following:  bool pred(const Type1 &a, const Type2 &b); While the signature does not need to have const &, the function must not modify the objects passed to it and must be able to accept all values of type (possibly const) `Type1` and `Type2` regardless of [value category](../language/value_category.html "cpp/language/value category") (thus, Type1 & is not allowed, nor is Type1 unless for `Type1` a move is equivalent to a copy(since C++11)).  
The types Type1 and Type2 must be such that objects of types InputIt1 and InputIt2 can be dereferenced and then implicitly converted to Type1 and Type2 respectively. ​   
Type requirements   
-`InputIt1, InputIt2` must meet the requirements of [LegacyInputIterator](../named_req/InputIterator.html "cpp/named req/InputIterator").   
-`ForwardIt1, ForwardIt2` must meet the requirements of [LegacyForwardIterator](../named_req/ForwardIterator.html "cpp/named req/ForwardIterator").   
-`BinaryPred` must meet the requirements of [BinaryPredicate](../named_req/BinaryPredicate.html "cpp/named req/BinaryPredicate").   
  
### Return value

1-4) If each corresponding elements in the two ranges are equal, returns true. Otherwise returns false.

5-8) If [std::distance](../iterator/distance.html)(first1, last1) and [std::distance](../iterator/distance.html)(first2, last2) are equal, and each corresponding elements in the two ranges are equal, returns true. Otherwise returns false.

### Complexity

Given \\(\scriptsize N_1\\)N1 as [std::distance](../iterator/distance.html)(first1, last1) and \\(\scriptsize N_2\\)N2 as [std::distance](../iterator/distance.html)(first2, last2): 

1) At most \\(\scriptsize N_1\\)N1 comparisons using operator==.

2) \\(\scriptsize O(N_1)\\)O(N1) comparisons using operator==.

3) At most \\(\scriptsize N_1\\)N1 applications of the predicate p.

4) \\(\scriptsize O(N_1)\\)O(N1) applications of the predicate p.

5-8) If `InputIt1` and `InputIt2` are both [LegacyRandomAccessIterator](../named_req/RandomAccessIterator.html "cpp/named req/RandomAccessIterator"), and last1 - first1 != last2 - first2 is true, no comparison will be made.

Otherwise, given \\(\scriptsize N\\)N as \\(\scriptsize \min(N_1,N_2)\\)min(N1,N2):

5) At most \\(\scriptsize N\\)N comparisons using operator==.

6) \\(\scriptsize O(N)\\)O(N) comparisons using operator==.

7) At most \\(\scriptsize N\\)N applications of the predicate p.

8) \\(\scriptsize O(N)\\)O(N) applications of the predicate p.

### Exceptions

The overloads with a template parameter named `ExecutionPolicy` report errors as follows: 

  * If execution of a function invoked as part of the algorithm throws an exception and `ExecutionPolicy` is one of the [standard policies](execution_policy_tag_t.html "cpp/algorithm/execution policy tag t"), [std::terminate](../error/terminate.html "cpp/error/terminate") is called. For any other `ExecutionPolicy`, the behavior is implementation-defined. 
  * If the algorithm fails to allocate memory, [std::bad_alloc](../memory/new/bad_alloc.html "cpp/memory/new/bad alloc") is thrown. 



### Possible implementation

[equal (1)](equal.html#Version_1)  
---  
      
    
    template<class InputIt1, class InputIt2>
    constexpr //< since C++20
    bool equal(InputIt1 first1, InputIt1 last1, InputIt2 first2)
    {
        for (; first1 != last1; ++first1, ++first2)
            if (!(*first1 == *first2))
                return false;
     
        return true;
    }  
  
[equal (3)](equal.html#Version_3)  
      
    
    template<class InputIt1, class InputIt2, class BinaryPred>
    constexpr //< since C++20
    bool equal(InputIt1 first1, InputIt1 last1,
               InputIt2 first2, BinaryPred p)
    {
        for (; first1 != last1; ++first1, ++first2)
            if (!p(*first1, *first2))
                return false;
     
        return true;
    }  
  
[equal (5)](equal.html#Version_5)  
      
    
    namespace detail
    {
        // random-access iterator implementation (allows quick range size detection)
        template<class RandomIt1, class RandomIt2>
        constexpr //< since C++20
        bool equal(RandomIt1 first1, RandomIt1 last1, RandomIt2 first2, RandomIt2 last2,
                   [std::random_access_iterator_tag](../iterator/iterator_tags.html), [std::random_access_iterator_tag](../iterator/iterator_tags.html))
        {
            if (last1 - first1 != last2 - first2)
                return false;
     
            for (; first1 != last1; ++first1, ++first2)
                if (!(*first1 == *first2))
                    return false;
     
            return true;
        }
     
        // input iterator implementation (needs to manually compare with “last2”)
        template<class InputIt1, class InputIt2>
        constexpr //< since C++20
        bool equal(InputIt1 first1, InputIt1 last1, InputIt2 first2, InputIt2 last2,
                   [std::input_iterator_tag](../iterator/iterator_tags.html), [std::input_iterator_tag](../iterator/iterator_tags.html))
        {
            for (; first1 != last1 && first2 != last2; ++first1, ++first2)
                if (!(*first1 == *first2))
                    return false;
     
            return first1 == last1 && first2 == last2;
        }
    }
     
    template<class InputIt1, class InputIt2>
    constexpr //< since C++20
    bool equal(InputIt1 first1, InputIt1 last1, InputIt2 first2, InputIt2 last2)
    {
        details::equal(first1, last1, first2, last2,
                       typename [std::iterator_traits](../iterator/iterator_traits.html)<InputIt1>::iterator_category(),
                       typename [std::iterator_traits](../iterator/iterator_traits.html)<InputIt2>::iterator_category());
    }  
  
[equal (7)](equal.html#Version_7)  
      
    
    namespace detail
    {
        // random-access iterator implementation (allows quick range size detection)
        template<class RandomIt1, class RandomIt2, class BinaryPred>
        constexpr //< since C++20
        bool equal(RandomIt1 first1, RandomIt1 last1,
                   RandomIt2 first2, RandomIt2 last2, BinaryPred p,
                   [std::random_access_iterator_tag](../iterator/iterator_tags.html), [std::random_access_iterator_tag](../iterator/iterator_tags.html))
        {
            if (last1 - first1 != last2 - first2)
                return false;
     
            for (; first1 != last1; ++first1, ++first2)
                if (!p(*first1, *first2))
                    return false;
     
            return true;
        }
     
        // input iterator implementation (needs to manually compare with “last2”)
        template<class InputIt1, class InputIt2, class BinaryPred>
        constexpr //< since C++20
        bool equal(InputIt1 first1, InputIt1 last1,
                   InputIt2 first2, InputIt2 last2, BinaryPred p,
                   [std::input_iterator_tag](../iterator/iterator_tags.html), [std::input_iterator_tag](../iterator/iterator_tags.html))
        {
            for (; first1 != last1 && first2 != last2; ++first1, ++first2)
                if (!p(*first1, *first2))
                    return false;
     
            return first1 == last1 && first2 == last2;
        }
    }
     
    template<class InputIt1, class InputIt2, class BinaryPred>
    constexpr //< since C++20
    bool equal(InputIt1 first1, InputIt1 last1,
               InputIt2 first2, InputIt2 last2, BinaryPred p)
    {
        details::equal(first1, last1, first2, last2, p,
                       typename [std::iterator_traits](../iterator/iterator_traits.html)<InputIt1>::iterator_category(),
                       typename [std::iterator_traits](../iterator/iterator_traits.html)<InputIt2>::iterator_category());
    }  
  
### Notes

`std::equal` should not be used to compare the ranges formed by the iterators from [std::unordered_set](../container/unordered_set.html "cpp/container/unordered set"), [std::unordered_multiset](../container/unordered_multiset.html "cpp/container/unordered multiset"), [std::unordered_map](../container/unordered_map.html "cpp/container/unordered map"), or [std::unordered_multimap](../container/unordered_multimap.html "cpp/container/unordered multimap") because the order in which the elements are stored in those containers may be different even if the two containers store the same elements. 

When comparing entire containers or string views(since C++17) for equality, operator== for the corresponding type are usually preferred. 

Sequential `std::equal` is not guaranteed to be short-circuit. E.g. if the first pair elements of both ranges do not compare equal, the rest of elements may also be compared. Non-short-circuit comparison may happen when the ranges are compared with [std::memcmp](../string/byte/memcmp.html "cpp/string/byte/memcmp") or implementation-specific vectorized algorithms. 

### Example

The following code uses [`std::equal`](equal.html#top) to test if a string is a palindrome.

Run this code
    
    
    #include <algorithm>
    #include <iomanip>
    #include <iostream>
    #include <string_view>
     
    constexpr bool is_palindrome(const [std::string_view](../string/basic_string_view.html)& s)
    {
        return std::equal(s.cbegin(), s.cbegin() + s.size() / 2, s.crbegin());
    }
     
    void test(const [std::string_view](../string/basic_string_view.html)& s)
    {
        [std::cout](../io/cout.html) << [std::quoted](../io/manip/quoted.html)(s)
                  << (is_palindrome(s) ? " is" : " is not")
                  << " a palindrome\n";
    }
     
    int main()
    {
        test("radar");
        test("hello");
    }

Output: 
    
    
    "radar" is a palindrome
    "hello" is not a palindrome

### See also

[ findfind_iffind_if_not](find.html "cpp/algorithm/find")(C++11) |  finds the first element satisfying specific criteria   
(function template)   
---|---  
[ lexicographical_compare](lexicographical_compare.html "cpp/algorithm/lexicographical compare") |  returns true if one range is lexicographically less than another   
(function template)   
[ mismatch](mismatch.html "cpp/algorithm/mismatch") |  finds the first position where two ranges differ   
(function template)   
[ search](search.html "cpp/algorithm/search") |  searches for the first occurrence of a range of elements   
(function template)   
[ ranges::equal](ranges/equal.html "cpp/algorithm/ranges/equal")(C++20) |  determines if two sets of elements are the same  
(algorithm function object)  
[ equal_to](../utility/functional/equal_to.html "cpp/utility/functional/equal to") |  function object implementing x == y   
(class template)   
[ equal_range](equal_range.html "cpp/algorithm/equal range") |  returns range of elements matching a specific key   
(function template) 
