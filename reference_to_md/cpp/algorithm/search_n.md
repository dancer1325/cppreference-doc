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
**search_n**  
  
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
| (1) |   
template< class ForwardIt, class Size, class T >  
ForwardIt search_n( ForwardIt first, ForwardIt last,  
Size count, const T& value ); |  | (constexpr since C++20)   
(until C++26)  
template< class ForwardIt, class Size,  
class T = typename [std::iterator_traits](../iterator/iterator_traits.html)  
<ForwardIt>::value_type >  
constexpr ForwardIt search_n( ForwardIt first, ForwardIt last,  
Size count, const T& value ); |  |  (since C++26)  
| (2) |   
template< class ExecutionPolicy,  
class ForwardIt, class Size, class T >  
ForwardIt search_n( ExecutionPolicy&& policy,  
ForwardIt first, ForwardIt last,  
Size count, const T& value ); |  |  (since C++17)   
(until C++26)  
template< class ExecutionPolicy,  
class ForwardIt, class Size,  
class T = typename [std::iterator_traits](../iterator/iterator_traits.html)  
<ForwardIt>::value_type >  
ForwardIt search_n( ExecutionPolicy&& policy,  
ForwardIt first, ForwardIt last,  
Size count, const T& value ); |  |  (since C++26)  
| (3) |   
template< class ForwardIt, class Size, class T, class BinaryPred >  
ForwardIt search_n( ForwardIt first, ForwardIt last,  
Size count, const T& value, BinaryPred p ); |  | (constexpr since C++20)   
(until C++26)  
template< class ForwardIt, class Size,  
class T = typename [std::iterator_traits](../iterator/iterator_traits.html)  
<ForwardIt>::value_type,  
class BinaryPred >  
constexpr ForwardIt search_n( ForwardIt first, ForwardIt last,  
Size count, const T& value, BinaryPred p ); |  |  (since C++26)  
| (4) |   
template< class ExecutionPolicy, class ForwardIt, class Size,  
class T, class BinaryPred >  
ForwardIt search_n( ExecutionPolicy&& policy,  
ForwardIt first, ForwardIt last,  
Size count, const T& value, BinaryPred p ); |  |  (since C++17)   
(until C++26)  
template< class ExecutionPolicy, class ForwardIt, class Size,  
class T = typename [std::iterator_traits](../iterator/iterator_traits.html)  
<ForwardIt>::value_type,  
class BinaryPred >  
ForwardIt search_n( ExecutionPolicy&& policy,  
ForwardIt first, ForwardIt last,  
Size count, const T& value, BinaryPred p ); |  |  (since C++26)  
| |   
  
Searches the range `[`first`, `last`)` for the first sequence of count identical elements, each equal to the given value. 

1) Elements are compared using operator==.

3) Elements are compared using the given binary predicate p.

2,4) Same as (1,3), but executed according to policy.

These overloads participate in overload resolution only if all following conditions are satisfied:  [std::is_execution_policy_v](is_execution_policy.html)<[std::decay_t](../types/decay.html)<ExecutionPolicy>> is true.  | (until C++20)  
---|---  
[std::is_execution_policy_v](is_execution_policy.html)<[std::remove_cvref_t](../types/remove_cvref.html)<ExecutionPolicy>> is true.  | (since C++20)  
  
## Contents

  * [1 Parameters](search_n.html#Parameters)
  * [2 Return value](search_n.html#Return_value)
  * [3 Complexity](search_n.html#Complexity)
  * [4 Exceptions](search_n.html#Exceptions)
  * [5 Possible implementation](search_n.html#Possible_implementation)
  * [6 Notes](search_n.html#Notes)
  * [7 Example](search_n.html#Example)
  * [8 Defect reports](search_n.html#Defect_reports)
  * [9 See also](search_n.html#See_also)

  
---  
  
### Parameters

first, last  |  \-  |  the pair of iterators defining the [range](../iterator.html#Ranges "cpp/iterator") of elements to examine   
---|---|---  
count  |  \-  |  the length of the sequence to search for   
value  |  \-  |  the value of the elements to search for   
policy  |  \-  |  the [execution policy](execution_policy_tag_t.html "cpp/algorithm/execution policy tag t") to use   
p  |  \-  |  binary predicate which returns ​true if the elements should be treated as equal.   
The signature of the predicate function should be equivalent to the following:  bool pred(const Type1 &a, const Type2 &b); While the signature does not need to have const &, the function must not modify the objects passed to it and must be able to accept all values of type (possibly const) `Type1` and `Type2` regardless of [value category](../language/value_category.html "cpp/language/value category") (thus, Type1 & is not allowed, nor is Type1 unless for `Type1` a move is equivalent to a copy(since C++11)).  
The type Type1 must be such that an object of type ForwardIt can be dereferenced and then implicitly converted to Type1. The type Type2 must be such that an object of type T can be implicitly converted to Type2. ​   
Type requirements   
-`ForwardIt` must meet the requirements of [LegacyForwardIterator](../named_req/ForwardIterator.html "cpp/named req/ForwardIterator").   
-`BinaryPred` must meet the requirements of [BinaryPredicate](../named_req/BinaryPredicate.html "cpp/named req/BinaryPredicate").   
-`Size` must be [convertible](../language/implicit_cast.html "cpp/language/implicit cast") to an [integral type](../language/type-id.html "cpp/language/type").   
  
### Return value

If count is positive, returns an iterator to the beginning of the first sequence found in the range `[`first`, `last`)`. Each iterator it in the sequence should satisfy the following condition: 

1,2) *it == value is true.

3,4) p(*it, value) != false is true.

If no such sequence is found, last is returned. 

If count is zero or negative, first is returned. 

### Complexity

Given \\(\scriptsize N\\)N as [std::distance](../iterator/distance.html)(first, last): 

1,2) At most \\(\scriptsize N\\)N comparisons using operator==.

3,4) At most \\(\scriptsize N\\)N applications of the predicate p.

### Exceptions

The overloads with a template parameter named `ExecutionPolicy` report errors as follows: 

  * If execution of a function invoked as part of the algorithm throws an exception and `ExecutionPolicy` is one of the [standard policies](execution_policy_tag_t.html "cpp/algorithm/execution policy tag t"), [std::terminate](../error/terminate.html "cpp/error/terminate") is called. For any other `ExecutionPolicy`, the behavior is implementation-defined. 
  * If the algorithm fails to allocate memory, [std::bad_alloc](../memory/new/bad_alloc.html "cpp/memory/new/bad alloc") is thrown. 



### Possible implementation

[search_n (1)](search_n.html#Version_1)  
---  
      
    
    template<class ForwardIt, class Size,
             class T = typename [std::iterator_traits](../iterator/iterator_traits.html)<ForwardIt>::value_type>
    ForwardIt search_n(ForwardIt first, ForwardIt last, Size count, const T& value)
    {
        if (count <= 0)
            return first;
     
        for (; first != last; ++first)
        {
            if (!(*first == value))
                continue;
     
            ForwardIt candidate = first;
     
            for (Size cur_count = 1; true; ++cur_count)
            {
                if (cur_count >= count)
                    return candidate; // success
     
                ++first;
                if (first == last)
                    return last; // exhausted the list
     
                if (!(*first == value))
                    break; // too few in a row
            }
        }
        return last;
    }  
  
[search_n (3)](search_n.html#Version_3)  
      
    
    template<class ForwardIt, class Size,
             class T = typename [std::iterator_traits](../iterator/iterator_traits.html)<ForwardIt>::value_type,
             class BinaryPred>
    ForwardIt search_n(ForwardIt first, ForwardIt last, Size count, const T& value,
                       BinaryPred p)
    {
        if (count <= 0)
            return first;
     
        for (; first != last; ++first)
        {
            if (!p(*first, value))
                continue;
     
            ForwardIt candidate = first;
     
            for (Size cur_count = 1; true; ++cur_count)
            {
                if (cur_count >= count)
                    return candidate; // success
     
                ++first;
                if (first == last)
                    return last; // exhausted the list
     
                if (!p(*first, value))
                    break; // too few in a row
            }
        }
        return last;
    }  
  
### Notes

[Feature-test](../utility/feature_test.html "cpp/utility/feature test") macro | Value | Std | Feature   
---|---|---|---  
[`__cpp_lib_algorithm_default_value_type`](../experimental/feature_test.html#cpp_lib_algorithm_default_value_type "cpp/feature test") | [`202403`](../compiler_support/26.html#cpp_lib_algorithm_default_value_type_202403 "cpp/compiler support/26") | (C++26) | [List-initialization](../language/list_initialization.html "cpp/language/list initialization") for algorithms ([1-4](search_n.html#Version_1))  
  
### Example

Run this code
    
    
    #include <algorithm>
    #include <cassert>
    #include <complex>
    #include <iostream>
    #include <iterator>
    #include <vector>
     
    template<class Container, class Size, class T>
    constexpr bool consecutive_values(const Container& c, Size count, const T& v)
    {
        return std::search_n([std::begin](../iterator/begin.html)(c), [std::end](../iterator/end.html)(c), count, v) != [std::end](../iterator/end.html)(c);
    }
     
    int main()
    {
        constexpr char sequence[] = ".0_0.000.0_0.";
     
        static_assert(consecutive_values(sequence, 3, '0'));
     
        for (int n : {4, 3, 2})
            [std::cout](../io/cout.html) << [std::boolalpha](../io/manip/boolalpha.html)
                      << "Has " << n << " consecutive zeros: "
                      << consecutive_values(sequence, n, '0') << '\n';
     
        [std::vector](../container/vector.html)<[std::complex](../numeric/complex.html)<double>> nums{{4, 2}, {4, 2}, {1, 3}};
        #ifdef __cpp_lib_algorithm_default_value_type
            auto it = std::search_n(nums.cbegin(), nums.cend(), 2, {4, 2});
        #else
            auto it = std::search_n(nums.cbegin(), nums.cend(), 2, [std::complex](../numeric/complex.html)<double>{4, 2});
        #endif
        [assert](../error/assert.html)(it == nums.begin());
    }

Output: 
    
    
    Has 4 consecutive zeros: false
    Has 3 consecutive zeros: true
    Has 2 consecutive zeros: true

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 283](https://cplusplus.github.io/LWG/issue283) | C++98  | `T` was required to be [EqualityComparable](../named_req/EqualityComparable.html "cpp/named req/EqualityComparable"), but  
the value type of `InputIt` is not always `T` | removed the requirement   
[LWG 426](https://cplusplus.github.io/LWG/issue426) | C++98  | the complexity upper limit was `N·count`,  
it is negative if count is negative  | the upper limit is ​0​  
if count is non-positive   
[LWG 714](https://cplusplus.github.io/LWG/issue714) | C++98  | if count > 0, the complexity upper limit was `N·count`, but in  
the worst case the number of comparisons/operations is always `N` | changed the upper  
limit to `N` in this case   
[LWG 2150](https://cplusplus.github.io/LWG/issue2150) | C++98  | the condition of “sequence occurence” was incorrect  | corrected   
  
### See also

[ find_end](find_end.html "cpp/algorithm/find end") |  finds the last sequence of elements in a certain range   
(function template)   
---|---  
[ findfind_iffind_if_not](find.html "cpp/algorithm/find")(C++11) |  finds the first element satisfying specific criteria   
(function template)   
[ search](search.html "cpp/algorithm/search") |  searches for the first occurrence of a range of elements   
(function template)   
[ ranges::search_n](ranges/search_n.html "cpp/algorithm/ranges/search n")(C++20) |  searches for the first occurrence of a number consecutive copies of an element in a range  
(algorithm function object)
  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
