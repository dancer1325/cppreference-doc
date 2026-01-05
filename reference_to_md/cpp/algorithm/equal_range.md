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
  
| **equal_range**  
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
template< class ForwardIt, class T >  
[std::pair](../utility/pair.html)<ForwardIt, ForwardIt>   
equal_range( ForwardIt first, ForwardIt last, const T& value ); |  | (constexpr since C++20)   
(until C++26)  
template< class ForwardIt, class T = typename [std::iterator_traits](../iterator/iterator_traits.html)  
<ForwardIt>::value_type >  
constexpr [std::pair](../utility/pair.html)<ForwardIt, ForwardIt>   
equal_range( ForwardIt first, ForwardIt last, const T& value ); |  |  (since C++26)  
| (2) |   
template< class ForwardIt, class T, class Compare >  
[std::pair](../utility/pair.html)<ForwardIt, ForwardIt>   
equal_range( ForwardIt first, ForwardIt last,  
const T& value, Compare comp ); |  | (constexpr since C++20)   
(until C++26)  
template< class ForwardIt, class T = typename [std::iterator_traits](../iterator/iterator_traits.html)  
<ForwardIt>::value_type,  
class Compare >  
constexpr [std::pair](../utility/pair.html)<ForwardIt, ForwardIt>   
equal_range( ForwardIt first, ForwardIt last,  
const T& value, Compare comp ); |  |  (since C++26)  
| |   
  
Returns a range containing all elements equivalent to value in the partitioned range `[`first`, `last`)`. 

1) The equivalence is checked using operator<:  Returns the results of [std::lower_bound](lower_bound.html)(first, last, value) and [std::upper_bound](upper_bound.html)(first, last, value). If any of the following conditions is satisfied, the behavior is undefined: 

  * For any element elem of `[`first`, `last`)`, bool(elem < value) does not imply !bool(value < elem). 
  * The elements elem of `[`first`, `last`)` are not [partitioned](../algorithm.html#Requirements "cpp/algorithm") with respect to expressions bool(elem < value) and !bool(value < elem). 

| (until C++20)  
---|---  
Equivalent to std::equal_range(first, last, value, [std::less](../utility/functional/less.html){}).  | (since C++20)  
  
2) The equivalence is checked using comp:

Returns the results of [std::lower_bound](lower_bound.html)(first, last, value, comp) and [std::upper_bound](upper_bound.html)(first, last, value, comp).

If any of the following conditions is satisfied, the behavior is undefined: 

  * For any element elem of `[`first`, `last`)`, bool(comp(elem, value)) does not imply !bool(comp(value, elem)). 
  * The elements elem of `[`first`, `last`)` are not [partitioned](../algorithm.html#Requirements "cpp/algorithm") with respect to expressions bool(comp(elem, value)) and !bool(comp(value, elem)).



## Contents

  * [1 Parameters](equal_range.html#Parameters)
  * [2 Return value](equal_range.html#Return_value)
  * [3 Complexity](equal_range.html#Complexity)
  * [4 Notes](equal_range.html#Notes)
  * [5 Possible implementation](equal_range.html#Possible_implementation)
  * [6 Example](equal_range.html#Example)
  * [7 Defect reports](equal_range.html#Defect_reports)
  * [8 See also](equal_range.html#See_also)

  
---  
  
### Parameters

first, last  |  \-  |  the pair of iterators defining the partitioned [range](../iterator.html#Ranges "cpp/iterator") of elements to examine   
---|---|---  
value  |  \-  |  value to compare the elements to   
comp  |  \-  |  binary predicate which returns ​true if the first argument is ordered before the second.   
The signature of the predicate function should be equivalent to the following:  bool pred(const Type1 &a, const Type2 &b); While the signature does not need to have const &, the function must not modify the objects passed to it and must be able to accept all values of type (possibly const) `Type1` and `Type2` regardless of [value category](../language/value_category.html "cpp/language/value category") (thus, Type1 & is not allowed, nor is Type1 unless for `Type1` a move is equivalent to a copy(since C++11)).  
The types Type1 and Type2 must be such that an object of type T can be implicitly converted to both Type1 and Type2, and an object of type ForwardIt can be dereferenced and then implicitly converted to both Type1 and Type2. ​   
Type requirements   
-`ForwardIt` must meet the requirements of [LegacyForwardIterator](../named_req/ForwardIterator.html "cpp/named req/ForwardIterator").   
-`Compare` must meet the requirements of [BinaryPredicate](../named_req/BinaryPredicate.html "cpp/named req/BinaryPredicate"). It is not required to satisfy [Compare](../named_req/Compare.html "cpp/named req/Compare").   
  
### Return value

A [std::pair](../utility/pair.html "cpp/utility/pair") containing a pair of iterators, where 

  * `first` is an iterator to the first element of the range `[`first`, `last`)` not ordered before value (or last if no such element is found), and 
  * `second` is an iterator to the first element of the range `[`first`, `last`)` ordered after value (or last if no such element is found). 



### Complexity

Given \\(\scriptsize N\\)N as [std::distance](../iterator/distance.html)(first, last): 

1) At most \\(\scriptsize 2\log_{2}(N)+O(1)\\)2log2(N)+O(1) comparisons with value using operator<(until C++20)[std::less](../utility/functional/less.html){}(since C++20).

2) At most \\(\scriptsize 2\log_{2}(N)+O(1)\\)2log2(N)+O(1) applications of the comparator comp.

However, if `ForwardIt` is not a [LegacyRandomAccessIterator](../named_req/RandomAccessIterator.html "cpp/named req/RandomAccessIterator"), the number of iterator increments is linear in \\(\scriptsize N\\)N. Notably, [std::set](../container/set.html "cpp/container/set") and [std::multiset](../container/multiset.html "cpp/container/multiset") iterators are not random access, and so their member functions [std::set::equal_range](../container/set/equal_range.html "cpp/container/set/equal range") (resp. [std::multiset::equal_range](../container/multiset/equal_range.html "cpp/container/multiset/equal range")) should be preferred. 

### Notes

Although `std::equal_range` only requires `[`first`, `last`)` to be partitioned, this algorithm is usually used in the case where `[`first`, `last`)` is sorted, so that the binary search is valid for any value. 

On top of the requirements of [std::lower_bound](lower_bound.html "cpp/algorithm/lower bound") and [std::upper_bound](upper_bound.html "cpp/algorithm/upper bound"), `std::equal_range` also requires operator< or comp to be asymmetric (i.e., a < b and b < a always have different results). 

Therefore, the intermediate results of binary search can be shared by [std::lower_bound](lower_bound.html "cpp/algorithm/lower bound") and [std::upper_bound](upper_bound.html "cpp/algorithm/upper bound"). For example, the result of the [std::lower_bound](lower_bound.html "cpp/algorithm/lower bound") call can be used as the argument of `first` in the [std::upper_bound](upper_bound.html "cpp/algorithm/upper bound") call. 

[Feature-test](../utility/feature_test.html "cpp/utility/feature test") macro | Value | Std | Feature   
---|---|---|---  
[`__cpp_lib_algorithm_default_value_type`](../experimental/feature_test.html#cpp_lib_algorithm_default_value_type "cpp/feature test") | [`202403`](../compiler_support/26.html#cpp_lib_algorithm_default_value_type_202403 "cpp/compiler support/26") | (C++26) | [List-initialization](../language/list_initialization.html "cpp/language/list initialization") for algorithms ([1,2](equal_range.html#Version_1))  
  
### Possible implementation

[equal_range (1)](equal_range.html#Version_1)  
---  
      
    
    template<class ForwardIt,
             class T = typename [std::iterator_traits](../iterator/iterator_traits.html)<ForwardIt>::value_type>
    constexpr [std::pair](../utility/pair.html)<ForwardIt, ForwardIt> 
        equal_range(ForwardIt first, ForwardIt last, const T& value)
    {
        return std::equal_range(first, last, value, [std::less](../utility/functional/less.html){});
    }  
  
[equal_range (2)](equal_range.html#Version_2)  
      
    
    template<class ForwardIt,
             class T = typename [std::iterator_traits](../iterator/iterator_traits.html)<ForwardIt>::value_type,
             class Compare>
    constexpr [std::pair](../utility/pair.html)<ForwardIt, ForwardIt>
        equal_range(ForwardIt first, ForwardIt last, const T& value, Compare comp)
    {
        return [std::make_pair](../utility/pair/make_pair.html)([std::lower_bound](lower_bound.html)(first, last, value, comp),
                              [std::upper_bound](upper_bound.html)(first, last, value, comp));
    }  
  
### Example

Run this code
    
    
    #include <algorithm>
    #include <complex>
    #include <iostream>
    #include <vector>
     
    struct S
    {
        int number;
        char name;
        // note: name is ignored by this comparison operator
        bool operator<(const S& s) const { return number < s.number; }
    };
     
    struct Comp
    {
        bool operator()(const S& s, int i) const { return s.number < i; }
        bool operator()(int i, const S& s) const { return i < s.number; }
    };
     
    int main()
    {
        // note: not ordered, only partitioned w.r.t. S defined below
        const [std::vector](../container/vector.html)<S> vec{{1, 'A'}, {2, 'B'}, {2, 'C'},
                                 {2, 'D'}, {4, 'G'}, {3, 'F'}};
        const S value{2, '?'};
     
        [std::cout](../io/cout.html) << "Compare using S::operator<(): ";
        const auto p = std::equal_range(vec.begin(), vec.end(), value);
     
        for (auto it = p.first; it != p.second; ++it)
            [std::cout](../io/cout.html) << it->name << ' ';
        [std::cout](../io/cout.html) << '\n';
     
        [std::cout](../io/cout.html) << "Using heterogeneous comparison: ";
        const auto p2 = std::equal_range(vec.begin(), vec.end(), 2, Comp{});
     
        for (auto it = p2.first; it != p2.second; ++it)
            [std::cout](../io/cout.html) << it->name << ' ';
        [std::cout](../io/cout.html) << '\n';
     
        using CD = [std::complex](../numeric/complex.html)<double>;
        [std::vector](../container/vector.html)<CD> nums{{1, 0}, {2, 2}, {2, 1}, {3, 0}, {3, 1}};
        auto cmpz = [](CD x, CD y) { return x.real() < y.real(); };
        #ifdef __cpp_lib_algorithm_default_value_type
            auto p3 = std::equal_range(nums.cbegin(), nums.cend(), {2, 0}, cmpz);
        #else
            auto p3 = std::equal_range(nums.cbegin(), nums.cend(), CD{2, 0}, cmpz);
        #endif
     
        for (auto it = p3.first; it != p3.second; ++it)
            [std::cout](../io/cout.html) << *it << ' ';
        [std::cout](../io/cout.html) << '\n';
    }

Output: 
    
    
    Compare using S::operator<(): B C D 
    Using heterogeneous comparison: B C D
    (2,2) (2, 1)

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 270](https://cplusplus.github.io/LWG/issue270) | C++98  | `Compare` was required to satisfy [Compare](../named_req/Compare.html "cpp/named req/Compare") and `T` was required  
to be [LessThanComparable](../named_req/LessThanComparable.html "cpp/named req/LessThanComparable") (strict weak ordering required)  | only a partitioning is required;  
heterogeneous comparisons permitted   
[LWG 384](https://cplusplus.github.io/LWG/issue384) | C++98  | at most \\(\scriptsize 2\log_{2}(N)+1\\)2log2(N)+1 comparisons  
were allowed, which is not implementable[[1]](equal_range.html#cite_note-1) | corrected to \\(\scriptsize 2\log_{2}(N)+O(1)\\)2log2(N)+O(1)  
  
  1. [↑](equal_range.html#cite_ref-1) Applying `equal_range` to a single-element range requires 2 comparisons, but at most 1 comparison is allowed by the complexity requirement.



### See also

[ lower_bound](lower_bound.html "cpp/algorithm/lower bound") |  returns an iterator to the first element _not less_ than the given value   
(function template)   
---|---  
[ upper_bound](upper_bound.html "cpp/algorithm/upper bound") |  returns an iterator to the first element _greater_ than a certain value   
(function template)   
[ binary_search](binary_search.html "cpp/algorithm/binary search") |  determines if an element exists in a partially-ordered range   
(function template)   
[ partition](partition.html "cpp/algorithm/partition") |  divides a range of elements into two groups   
(function template)   
[ equal](equal.html "cpp/algorithm/equal") |  determines if two sets of elements are the same   
(function template)   
[ equal_range](../container/set/equal_range.html "cpp/container/set/equal range") |  returns range of elements matching a specific key   
(public member function of `std::set<Key,Compare,Allocator>`)   
[ equal_range](../container/multiset/equal_range.html "cpp/container/multiset/equal range") |  returns range of elements matching a specific key   
(public member function of `std::multiset<Key,Compare,Allocator>`)   
[ ranges::equal_range](ranges/equal_range.html "cpp/algorithm/ranges/equal range")(C++20) |  returns range of elements matching a specific key  
(algorithm function object)
  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
