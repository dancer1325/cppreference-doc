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
**shift_left shift_right**(C++20)(C++20)  
  
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
template< class ForwardIt >  
constexpr ForwardIt shift_left( ForwardIt first, ForwardIt last,  
typename [std::iterator_traits](../iterator/iterator_traits.html)<ForwardIt>::  
difference_type n ); |  (1)  |  (since C++20)  
template< class ExecutionPolicy, class ForwardIt >  
ForwardIt shift_left( ExecutionPolicy&& policy,  
ForwardIt first, ForwardIt last,  
typename [std::iterator_traits](../iterator/iterator_traits.html)<ForwardIt>::  
difference_type n ); |  (2)  |  (since C++20)  
template< class ForwardIt >  
constexpr ForwardIt shift_right( ForwardIt first, ForwardIt last,  
typename [std::iterator_traits](../iterator/iterator_traits.html)<ForwardIt>::  
difference_type n ); |  (3)  |  (since C++20)  
template< class ExecutionPolicy, class ForwardIt >  
ForwardIt shift_right( ExecutionPolicy&& policy,  
ForwardIt first, ForwardIt last,  
typename [std::iterator_traits](../iterator/iterator_traits.html)<ForwardIt>::  
difference_type n ); |  (4)  |  (since C++20)  
| |   
  
Shifts the elements in the range `[`first`, `last`)` by n positions. 

1) Shifts the elements towards the beginning of the range. 

  * If n == 0 || n >= last - first, there are no effects. 
  * Otherwise, for every integer i in `[`​0​`, `last - first - n`)`, moves the element originally at position first + n + i to position first + i.



The moves are performed in increasing order of `i` starting from ​0​.

3) Shifts the elements towards the end of the range. 

  * If n == 0 || n >= last - first, there are no effects. 
  * Otherwise, for every integer i in `[`​0​`, `last - first - n`)`, moves the element originally at position first + i to position first + n + i.



If `ForwardIt` meets the [LegacyBidirectionalIterator](../named_req/BidirectionalIterator.html "cpp/named req/BidirectionalIterator") requirements, then the moves are performed in decreasing order of i starting from last - first - n - 1.

2,4) Same as (1) and (3), respectively, but executed according to policy and the moves may be performed in any order.

These overloads participate in overload resolution only if [std::is_execution_policy_v](is_execution_policy.html)<[std::remove_cvref_t](../types/remove_cvref.html)<ExecutionPolicy>> is true.

Elements that are in the original range but not the new range are left in a valid but unspecified state. 

If any of the following conditions is satisfied, the behavior is undefined: 

  * n >= 0 is not true. 
  * The type of *first is not [MoveAssignable](../named_req/MoveAssignable.html "cpp/named req/MoveAssignable"). 
  * For `shift_right`, `ForwardIt` is neither [LegacyBidirectionalIterator](../named_req/BidirectionalIterator.html "cpp/named req/BidirectionalIterator") nor [ValueSwappable](../named_req/ValueSwappable.html "cpp/named req/ValueSwappable"). 



## Contents

  * [1 Parameters](shift.html#Parameters)
  * [2 Return value](shift.html#Return_value)
  * [3 Complexity](shift.html#Complexity)
  * [4 Exceptions](shift.html#Exceptions)
  * [5 Notes](shift.html#Notes)
  * [6 Example](shift.html#Example)
  * [7 See also](shift.html#See_also)

  
---  
  
### Parameters

first, last  |  \-  |  the pair of iterators defining the [range](../iterator.html#Ranges "cpp/iterator") of elements to shift   
---|---|---  
n  |  \-  |  the number of positions to shift   
policy  |  \-  |  the [execution policy](execution_policy_tag_t.html "cpp/algorithm/execution policy tag t") to use   
Type requirements   
-`ForwardIt` must meet the requirements of [LegacyForwardIterator](../named_req/ForwardIterator.html "cpp/named req/ForwardIterator").   
  
### Return value

1,2) The end of the resulting range. 

  * If n is less than [std::distance](../iterator/distance.html)(first, last), returns an iterator equal to [std::next](../iterator/next.html)(first, ([std::distance](../iterator/distance.html)(first, last) - n)). 
  * Otherwise, returns first.



3,4) The beginning of the resulting range. 

  * If n is less than [std::distance](../iterator/distance.html)(first, last), returns an iterator equal to [std::next](../iterator/next.html)(first, n). 
  * Otherwise, returns last.



### Complexity

1,2) At most [std::distance](../iterator/distance.html)(first, last) - n assignments.

3,4) At most [std::distance](../iterator/distance.html)(first, last) - n assignment or swaps.

### Exceptions

The overloads with a template parameter named `ExecutionPolicy` report errors as follows: 

  * If execution of a function invoked as part of the algorithm throws an exception and `ExecutionPolicy` is one of the [standard policies](execution_policy_tag_t.html "cpp/algorithm/execution policy tag t"), [std::terminate](../error/terminate.html "cpp/error/terminate") is called. For any other `ExecutionPolicy`, the behavior is implementation-defined. 
  * If the algorithm fails to allocate memory, [std::bad_alloc](../memory/new/bad_alloc.html "cpp/memory/new/bad alloc") is thrown. 



### Notes

[Feature-test](../utility/feature_test.html "cpp/utility/feature test") macro | Value | Std | Feature   
---|---|---|---  
[`__cpp_lib_shift`](../experimental/feature_test.html#cpp_lib_shift "cpp/feature test") | [`201806L`](../compiler_support/20.html#cpp_lib_shift_201806L "cpp/compiler support/20") | (C++20) | [`std::shift_left`](shift.html#top) and [`std::shift_right`](shift.html#top)  
  
### Example

Run this code
    
    
    #include <algorithm>
    #include <iostream>
    #include <string>
    #include <type_traits>
    #include <vector>
     
    struct S
    {
        int value{0};
        bool specified_state{true};
     
        S(int v = 0) : value{v} {}
        S(S const& rhs) = default;
        S(S&& rhs) { *this = std::move(rhs); }
        S& operator=(S const& rhs) = default;
        S& operator=(S&& rhs)
        {
            if (this != &rhs)
            {
                value = rhs.value;
                specified_state = rhs.specified_state;
                rhs.specified_state = false;
            }
            return *this;
        }
    };
     
    template<typename T>
    [std::ostream](../io/basic_ostream.html)& operator<<([std::ostream](../io/basic_ostream.html)& os, [std::vector](../container/vector.html)<T> const& v)
    {
        for (const auto& s : v)
        {
            if constexpr ([std::is_same_v](../types/is_same.html)<T, S>)
                s.specified_state ? os << s.value << ' ' : os << ". ";
            else if constexpr ([std::is_same_v](../types/is_same.html)<T, [std::string](../string/basic_string.html)>)
                os << (s.empty() ? "." : s) << ' ';
            else
                os << s << ' ';
        }
        return os;
    }
     
    int main()
    {
        [std::cout](../io/cout.html) << [std::left](../io/manip/left.html);
     
        [std::vector](../container/vector.html)<S>           a{1, 2, 3, 4, 5, 6, 7};
        [std::vector](../container/vector.html)<int>         b{1, 2, 3, 4, 5, 6, 7};
        [std::vector](../container/vector.html)<[std::string](../string/basic_string.html)> c{"α", "β", "γ", "δ", "ε", "ζ", "η"};
     
        [std::cout](../io/cout.html) << "vector<S> \tvector<int> \tvector<string>\n";
        [std::cout](../io/cout.html) << a << "  " << b << "  " << c << '\n';
     
        std::shift_left(begin(a), end(a), 3);
        std::shift_left(begin(b), end(b), 3);
        std::shift_left(begin(c), end(c), 3);
        [std::cout](../io/cout.html) << a << "  " << b << "  " << c << '\n';
     
        std::shift_right(begin(a), end(a), 2);
        std::shift_right(begin(b), end(b), 2);
        std::shift_right(begin(c), end(c), 2);
        [std::cout](../io/cout.html) << a << "  " << b << "  " << c << '\n';
     
        std::shift_left(begin(a), end(a), 8); // has no effect: n >= last - first
        std::shift_left(begin(b), end(b), 8); // ditto
        std::shift_left(begin(c), end(c), 8); // ditto
        [std::cout](../io/cout.html) << a << "  " << b << "  " << c << '\n';
     
    //  std::shift_left(begin(a), end(a), -3); // UB, e.g. segfault
    }

Possible output: 
    
    
    vector<S>       vector<int>     vector<string>
    1 2 3 4 5 6 7   1 2 3 4 5 6 7   α β γ δ ε ζ η
    4 5 6 7 . . .   4 5 6 7 5 6 7   δ ε ζ η . . .
    . . 4 5 6 7 .   4 5 4 5 6 7 5   . . δ ε ζ η .
    . . 4 5 6 7 .   4 5 4 5 6 7 5   . . δ ε ζ η .

### See also

[ move](move.html "cpp/algorithm/move")(C++11) |  moves a range of elements to a new location   
(function template)   
---|---  
[ move_backward](move_backward.html "cpp/algorithm/move backward")(C++11) |  moves a range of elements to a new location in backwards order   
(function template)   
[ rotate](rotate.html "cpp/algorithm/rotate") |  rotates the order of elements in a range   
(function template)   
[ ranges::shift_leftranges::shift_right](ranges/shift.html "cpp/algorithm/ranges/shift")(C++23) |  shifts elements in a range  
(algorithm function object)
  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
