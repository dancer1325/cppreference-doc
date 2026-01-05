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
**lexicographical_compare_three_way**(C++20)  
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
template< class InputIt1, class InputIt2, class Cmp >  
constexpr auto lexicographical_compare_three_way  
( InputIt1 first1, InputIt1 last1, InputIt2 first2, InputIt2 last2,  
Cmp comp ) -> decltype(comp(*first1, *first2)); |  (1)  |  (since C++20)  
template< class InputIt1, class InputIt2 >  
constexpr auto lexicographical_compare_three_way  
( InputIt1 first1, InputIt1 last1, InputIt2 first2, InputIt2 last2 ); |  (2)  |  (since C++20)  
| |   
  
Lexicographically compares two ranges `[`first1`, `last1`)` and `[`first2`, `last2`)` using three-way comparison and produces a result of the strongest applicable comparison category type. 

1) Returns the order between the first non-equivalent pair of elements according to comp in both ranges if any, otherwise (if one ranges is equivalent to the prefix of another according to comp), returns the order between the length of both ranges.

2) Equivalent to return std::lexicographical_compare_three_way(  
first1, last1, first2, last2, [std::compare_three_way](../utility/compare/compare_three_way.html)());

If the return type is not one of the three comparison category types, the program is ill-formed: 

  * [`std::strong_ordering`](../utility/compare/strong_ordering.html "cpp/utility/compare/strong ordering")
  * [`std::weak_ordering`](../utility/compare/weak_ordering.html "cpp/utility/compare/weak ordering")
  * [`std::partial_ordering`](../utility/compare/partial_ordering.html "cpp/utility/compare/partial ordering")



## Contents

  * [1 Parameters](lexicographical_compare_three_way.html#Parameters)
  * [2 Return value](lexicographical_compare_three_way.html#Return_value)
  * [3 Complexity](lexicographical_compare_three_way.html#Complexity)
  * [4 Possible implementation](lexicographical_compare_three_way.html#Possible_implementation)
  * [5 Example](lexicographical_compare_three_way.html#Example)
  * [6 Defect reports](lexicographical_compare_three_way.html#Defect_reports)
  * [7 See also](lexicographical_compare_three_way.html#See_also)

  
---  
  
### Parameters

first1, last1  |  \-  |  the pair of iterators defining the first [range](../iterator.html#Ranges "cpp/iterator") of elements to examine   
---|---|---  
first2, last2  |  \-  |  the pair of iterators defining the second [range](../iterator.html#Ranges "cpp/iterator") of elements to examine   
comp  |  \-  |  a function object   
Type requirements   
-`InputIt1, InputIt2` must meet the requirements of [LegacyInputIterator](../named_req/InputIterator.html "cpp/named req/InputIterator").   
  
### Return value

The value of a comparison category type specified above. 

### Complexity

Given \\(\scriptsize N_1\\)N1 as [std::distance](../iterator/distance.html)(first1, last1) and \\(\scriptsize N_2\\)N2 as [std::distance](../iterator/distance.html)(first2, last2): 

1) At most \\(\scriptsize \min(N_1,N_2)\\)min(1,N2) applications of comp.

2) At most \\(\scriptsize \min(N_1,N_2)\\)min(N1,N2) applications of [std::compare_three_way](../utility/compare/compare_three_way.html)().

### Possible implementation
    
    
    template<class I1, class I2, class Cmp>
    constexpr auto lexicographical_compare_three_way(I1 f1, I1 l1, I2 f2, I2 l2, Cmp comp)
        -> decltype(comp(*f1, *f2))
    {
        using ret_t = decltype(comp(*f1, *f2));
        static_assert([std::disjunction_v](../types/disjunction.html)<
                          [std::is_same](../types/is_same.html)<ret_t, [std::strong_ordering](../utility/compare/strong_ordering.html)>,
                          [std::is_same](../types/is_same.html)<ret_t, [std::weak_ordering](../utility/compare/weak_ordering.html)>,
                          [std::is_same](../types/is_same.html)<ret_t, [std::partial_ordering](../utility/compare/partial_ordering.html)>>,
                      "The return type must be a comparison category type.");
     
        bool exhaust1 = (f1 == l1);
        bool exhaust2 = (f2 == l2);
        for (; !exhaust1 && !exhaust2; exhaust1 = (++f1 == l1), exhaust2 = (++f2 == l2))
            if (auto c = comp(*f1, *f2); c != 0)
                return c;
     
        return !exhaust1 ? std::strong_ordering::greater:
               !exhaust2 ? std::strong_ordering::less:
                           std::strong_ordering::equal;
    }  
  
---  
  
### Example

Run this code
    
    
    #include <algorithm>
    #include <cctype>
    #include <compare>
    #include <iomanip>
    #include <iostream>
    #include <string_view>
    #include <utility>
     
    using namespace std::literals;
     
    void show_result([std::string_view](../string/basic_string_view.html) s1, [std::string_view](../string/basic_string_view.html) s2, [std::strong_ordering](../utility/compare/strong_ordering.html) o)
    {
        [std::cout](../io/cout.html) << [std::quoted](../io/manip/quoted.html)(s1) << " is ";
        [std::is_lt](../utility/compare/named_comparison_functions.html)(o) ? [std::cout](../io/cout.html) << "less than ":
        [std::is_gt](../utility/compare/named_comparison_functions.html)(o) ? [std::cout](../io/cout.html) << "greater than ":
                        [std::cout](../io/cout.html) << "equal to ";
        [std::cout](../io/cout.html) << [std::quoted](../io/manip/quoted.html)(s2) << '\n';
    }
     
    [std::strong_ordering](../utility/compare/strong_ordering.html) cmp_icase(unsigned char x, unsigned char y)
    {
        return [std::toupper](../string/byte/toupper.html)(x) <=> [std::toupper](../string/byte/toupper.html)(y);
    };
     
    int main()
    {
        for (const auto& [s1, s2] :
        {
            [std::pair](../utility/pair.html){"one"sv, "ONE"sv}, {"two"sv, "four"sv}, {"three"sv, "two"sv}
        })
        {
            const auto res = std::lexicographical_compare_three_way(
                s1.cbegin(), s1.cend(), s2.cbegin(), s2.cend(), cmp_icase);
            show_result(s1, s2, res);
        }
    }

Output: 
    
    
    "one" is equal to "ONE"
    "two" is greater than "four"
    "three" is less than "two"

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 3410](https://cplusplus.github.io/LWG/issue3410) | C++20  | extraneous comparisons between iterators were required  | such requirement removed   
  
### See also

[ lexicographical_compare](lexicographical_compare.html "cpp/algorithm/lexicographical compare") |  returns true if one range is lexicographically less than another   
(function template)   
---|---  
[ compare_three_way](../utility/compare/compare_three_way.html "cpp/utility/compare/compare three way")(C++20) |  constrained function object implementing x <=> y   
(class)   
[ ranges::lexicographical_compare](ranges/lexicographical_compare.html "cpp/algorithm/ranges/lexicographical compare")(C++20) |  returns true if one range is lexicographically less than another  
(algorithm function object)
