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
  
|  | **partial_sum**  
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
  


[Numerics library](../numeric.html "cpp/numeric")

[Common mathematical functions](../numeric/math.html "cpp/numeric/math")  
---  
[Mathematical special functions](../numeric/special_math.html "cpp/numeric/special functions") (C++17)  
[Mathematical constants](../numeric/constants.html "cpp/numeric/constants") (C++20)  
[Basic linear algebra algorithms](../numeric/linalg.html "cpp/numeric/linalg") (C++26)  
[Data-parallel types (SIMD)](../numeric/simd.html "cpp/numeric/simd") (C++26)  
[Floating-point environment](../numeric/fenv.html "cpp/numeric/fenv") (C++11)  
[Complex numbers](../numeric/complex.html "cpp/numeric/complex")  
[Numeric array (`valarray`)](../numeric/valarray.html "cpp/numeric/valarray")  
[Pseudo-random number generation](../numeric/random.html "cpp/numeric/random")  
[Bit manipulation](../utility/bit.html "cpp/utility/bit") (C++20)  
[Saturation arithmetic](../numeric.html#Saturation_arithmetic "cpp/numeric") (C++26)  
[Factor operations](../numeric.html#Factor_operations "cpp/numeric")  
| [gcd](../numeric/gcd.html "cpp/numeric/gcd")(C++17)  
---  
  
| [lcm](../numeric/lcm.html "cpp/numeric/lcm")(C++17)  
---  
  
[Interpolations](../numeric.html#Interpolation_operations "cpp/numeric")  
| [midpoint](../numeric/midpoint.html "cpp/numeric/midpoint")(C++20)  
---  
  
| [lerp](../numeric/lerp.html "cpp/numeric/lerp")(C++20)  
---  
  
[Generic numeric operations](../numeric.html#Numeric_operations "cpp/numeric")  
| [iota](iota.html "cpp/algorithm/iota")(C++11)  
---  
[ranges::iota](ranges/iota.html "cpp/algorithm/ranges/iota")(C++23)  
[accumulate](accumulate.html "cpp/algorithm/accumulate")  
[inner_product](inner_product.html "cpp/algorithm/inner product")  
[adjacent_difference](adjacent_difference.html "cpp/algorithm/adjacent difference")` `  
**partial_sum**  
  
| [reduce](reduce.html "cpp/algorithm/reduce")(C++17)  
---  
[transform_reduce](transform_reduce.html "cpp/algorithm/transform reduce")(C++17)  
[inclusive_scan](inclusive_scan.html "cpp/algorithm/inclusive scan")(C++17)  
[exclusive_scan](exclusive_scan.html "cpp/algorithm/exclusive scan")(C++17)  
[transform_inclusive_scan](transform_inclusive_scan.html "cpp/algorithm/transform inclusive scan")(C++17)  
[transform_exclusive_scan](transform_exclusive_scan.html "cpp/algorithm/transform exclusive scan")(C++17)  
  
[C-style checked integer arithmetic](../numeric.html#Checked_integer_arithmetic "cpp/numeric")  
| [ckd_add](../numeric/ckd_add.html "cpp/numeric/ckd add")(C++26)  
---  
[ckd_sub](../numeric/ckd_sub.html "cpp/numeric/ckd sub")(C++26)  
  
| [ckd_mul](../numeric/ckd_mul.html "cpp/numeric/ckd mul")(C++26)  
---  
  
  
  


Defined in header `[<numeric>](../header/numeric.html "cpp/header/numeric")` |  |   
---|---|---  
template< class InputIt, class OutputIt >  
OutputIt partial_sum( InputIt first, InputIt last,  
OutputIt d_first ); |  (1) | (constexpr since C++20)  
template< class InputIt, class OutputIt, class BinaryOp >  
OutputIt partial_sum( InputIt first, InputIt last,  
OutputIt d_first, BinaryOp op ); |  (2) | (constexpr since C++20)  
| |   
  
1) If `[`first`, `last`)` is empty, does nothing.

Otherwise, performs the following operations in order: 

  1. Creates an accumulator acc, whose type is the [value type](../iterator.html#Types_and_writability "cpp/iterator") of `InputIt`, and initializes it with *first. 
  2. Assigns acc to *d_first. 
  3. For each integer i in `[`1`, `[std::distance](../iterator/distance.html)(first, last)`)`, performs the following operations in order:



a) Computes acc + *iter(until C++20)std::move(acc) + *iter(since C++20), where iter is the next ith iterator of first.

b) Assigns the result to acc.

c) Assigns acc[[1]](partial_sum.html#cite_note-1) to *dest, where dest is the next ith iterator of d_first.

2) Same as (1), but computes op(acc, *iter)(until C++20)op(std::move(acc), *iter)(since C++20) instead.

Given binary_op as the actual binary operation: 

  * If any of the following conditions is satisfied, the program is ill-formed: 



    

  * The value type of `InputIt` is not constructible from *first. 
  * acc is not [writable](../iterator.html#Types_and_writability "cpp/iterator") to d_first. 
  * The result of binary_op(acc, *iter)(until C++20)binary_op(std::move(acc), *iter)(since C++20) is not implicitly convertible to the value type of `InputIt`. 



  * Given d_last as the iterator to be [returned](partial_sum.html#Return_value), if any of the following conditions is satisfied, the behavior is undefined: 



    

  * binary_op modifies any element of `[`first`, `last`)` or `[`d_first`, `d_last`)`. 
  * binary_op invalidates any iterator or subrange in `[`first`, `last`]` or `[`d_first`, `d_last`]`. 



  


  1. [↑](partial_sum.html#cite_ref-1) The actual value to be assigned is the result of the assignment in the previous step. We assume the assignment result is acc here.



## Contents

  * [1 Parameters](partial_sum.html#Parameters)
  * [2 Return value](partial_sum.html#Return_value)
  * [3 Complexity](partial_sum.html#Complexity)
  * [4 Possible implementation](partial_sum.html#Possible_implementation)
  * [5 Notes](partial_sum.html#Notes)
  * [6 Example](partial_sum.html#Example)
  * [7 Defect reports](partial_sum.html#Defect_reports)
  * [8 See also](partial_sum.html#See_also)

  
---  
  
### Parameters

first, last  |  \-  |  the pair of iterators defining the [range](../iterator.html#Ranges "cpp/iterator") of elements to sum   
---|---|---  
d_first  |  \-  |  the beginning of the destination range; may be equal to first  
op  |  \-  |  binary operation function object that will be applied.   
The signature of the function should be equivalent to the following:  Ret fun(const Type1 &a, const Type2 &b); The signature does not need to have const &.   
The type  Type1 must be such that an object of type [std::iterator_traits](../iterator/iterator_traits.html)<InputIt>::value_type can be implicitly converted to  Type1. The type  Type2 must be such that an object of type InputIt can be dereferenced and then implicitly converted to  Type2. The type Ret must be such that an object of type InputIt can be dereferenced and assigned a value of type Ret. ​   
Type requirements   
-`InputIt` must meet the requirements of [LegacyInputIterator](../named_req/InputIterator.html "cpp/named req/InputIterator").   
-`OutputIt` must meet the requirements of [LegacyOutputIterator](../named_req/OutputIterator.html "cpp/named req/OutputIterator").   
  
### Return value

Iterator to the element past the last element written, or d_first if `[`first`, `last`)` is empty. 

### Complexity

Given \\(\scriptsize N\\)N as [std::distance](../iterator/distance.html)(first, last): 

1) Exactly \\(\scriptsize N-1\\)N-1 applications of operator+.

2) Exactly \\(\scriptsize N-1\\)N-1 applications of the binary function op.

### Possible implementation

[partial_sum (1)](partial_sum.html#Version_1)  
---  
      
    
    template<class InputIt, class OutputIt>
    constexpr // since C++20
    OutputIt partial_sum(InputIt first, InputIt last, OutputIt d_first)
    {
        if (first == last)
            return d_first;
     
        typename [std::iterator_traits](../iterator/iterator_traits.html)<InputIt>::value_type sum = *first;
        *d_first = sum;
     
        while (++first != last)
        {
            sum = std::move(sum) + *first; // std::move since C++20
            *++d_first = sum;
        }
     
        return ++d_first;
     
        // or, since C++14:
        // return std::partial_sum(first, last, d_first, std::plus<>());
    }  
  
[partial_sum (2)](partial_sum.html#Version_2)  
      
    
    template<class InputIt, class OutputIt, class BinaryOp>
    constexpr // since C++20
    OutputIt partial_sum(InputIt first, InputIt last, 
                         OutputIt d_first, BinaryOp op)
    {
        if (first == last)
            return d_first;
     
        typename [std::iterator_traits](../iterator/iterator_traits.html)<InputIt>::value_type acc = *first;
        *d_first = acc;
     
        while (++first != last)
        {
            acc = op(std::move(acc), *first); // std::move since C++20
            *++d_first = acc;
        }
     
        return ++d_first;
    }  
  
### Notes

acc was introduced because of the resolution of [LWG issue 539](https://cplusplus.github.io/LWG/issue539). The reason of using acc rather than directly summing up the results (i.e. *(d_first + 2) = (*first + *(first + 1)) + *(first + 2);) is because the semantic of the latter is confusing if the following types mismatch: 

  * the value type of `InputIt`
  * the writable type(s) of `OutputIt`
  * the types of the parameters of operator+ or op
  * the return type of operator+ or op



acc serves as the intermediate object to store and provide the values for each step of the computation: 

  * its type is the value type of `InputIt`
  * it is written to d_first
  * its value is passed to operator+ or op
  * it stores the return value of operator+ or op


    
    
    enum not_int { x = 1, y = 2 };
     
    char i_array[4] = {100, 100, 100, 100};
    not_int e_array[4] = {x, x, y, y};
    int  o_array[4];
     
    // OK: uses operator+(char, char) and assigns char values to int array
    std::partial_sum(i_array, i_array + 4, o_array);
     
    // Error: cannot assign not_int values to int array
    std::partial_sum(e_array, e_array + 4, o_array);
     
    // OK: performs conversions when needed
    // 1. creates “acc” of type char (the value type)
    // 2. the char arguments are used for long multiplication (char -> long)
    // 3. the long product is assigned to “acc” (long -> char)
    // 4. “acc” is assigned to an element of “o_array” (char -> int)
    // 5. go back to step 2 to process the remaining elements in the input range
    std::partial_sum(i_array, i_array + 4, o_array, [std::multiplies](../utility/functional/multiplies.html)<long>{});

### Example

Run this code
    
    
    #include <functional>
    #include <iostream>
    #include <iterator>
    #include <numeric>
    #include <vector>
     
    int main()
    {
        [std::vector](../container/vector.html)<int> v(10, 2); // v = {2, 2, 2, 2, 2, 2, 2, 2, 2, 2}
     
        [std::cout](../io/cout.html) << "The first " << v.size() << " even numbers are: ";
        // write the result to the cout stream
        std::partial_sum(v.cbegin(), v.cend(), 
                         [std::ostream_iterator](../iterator/ostream_iterator.html)<int>([std::cout](../io/cout.html), " "));
        [std::cout](../io/cout.html) << '\n';
     
        // write the result back to the vector v
        std::partial_sum(v.cbegin(), v.cend(),
                         v.begin(), [std::multiplies](../utility/functional/multiplies.html)<int>());
     
        [std::cout](../io/cout.html) << "The first " << v.size() << " powers of 2 are: ";
        for (int n : v)
            [std::cout](../io/cout.html) << n << ' ';
        [std::cout](../io/cout.html) << '\n';
    }

Output: 
    
    
    The first 10 even numbers are: 2 4 6 8 10 12 14 16 18 20 
    The first 10 powers of 2 are: 2 4 8 16 32 64 128 256 512 1024

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 242](https://cplusplus.github.io/LWG/issue242) | C++98  | op could not have side effects  | it cannot modify the ranges involved   
[LWG 539](https://cplusplus.github.io/LWG/issue539) | C++98  | the type requirements needed for the result  
evaluations and assignments to be valid were missing  | added   
  
### See also

[ adjacent_difference](adjacent_difference.html "cpp/algorithm/adjacent difference") |  computes the differences between adjacent elements in a range   
(function template)   
---|---  
[ accumulate](accumulate.html "cpp/algorithm/accumulate") |  sums up or folds a range of elements   
(function template)   
[ inclusive_scan](inclusive_scan.html "cpp/algorithm/inclusive scan")(C++17) |  similar to **std::partial_sum** , includes the ith input element in the ith sum   
(function template)   
[ exclusive_scan](exclusive_scan.html "cpp/algorithm/exclusive scan")(C++17) |  similar to **std::partial_sum** , excludes the ith input element from the ith sum   
(function template) 
