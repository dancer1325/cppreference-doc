  
  


[Experimental](../experimental.html "cpp/experimental")

[Technical Specification](../experimental.html#Technical_Specification "cpp/experimental")  
---  
[Filesystem library](fs.html "cpp/experimental/fs") (filesystem TS)  
[Library fundamentals](memory.html "cpp/experimental/lib extensions") (library fundamentals TS)  
[Library fundamentals 2](lib_extensions_2.html "cpp/experimental/lib extensions 2") (library fundamentals TS v2)  
[Library fundamentals 3](lib_extensions_3.html "cpp/experimental/lib extensions 3") (library fundamentals TS v3)  
**Extensions for parallelism** (parallelism TS)  
[Extensions for parallelism 2](parallelism_2.html "cpp/experimental/parallelism 2") (parallelism TS v2)  
[Extensions for concurrency](concurrency.html "cpp/experimental/concurrency") (concurrency TS)  
[Extensions for concurrency 2](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/concurrency_2&action=edit&redlink=1 "cpp/experimental/concurrency 2 \(page does not exist\)") (concurrency TS v2)  
[Concepts](constraints.html "cpp/experimental/constraints") (concepts TS)  
[Ranges](ranges.html "cpp/experimental/ranges") (ranges TS)  
[Reflection](reflect.html "cpp/experimental/reflect") (reflection TS)  
[Mathematical special functions](special_math.html "cpp/experimental/special functions") (special functions TR)  
[Experimental Non-TS](../experimental.html#Experimental_Non-TS "cpp/experimental")  
[Pattern Matching](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/pm&action=edit&redlink=1 "cpp/experimental/pm \(page does not exist\)")  
[Linear Algebra](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/la&action=edit&redlink=1 "cpp/experimental/la \(page does not exist\)")  
[std::execution](execution.html "cpp/experimental/execution")  
[Contracts](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/contracts&action=edit&redlink=1 "cpp/experimental/contracts \(page does not exist\)")  
[2D Graphics](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/2dgraphics&action=edit&redlink=1 "cpp/experimental/2dgraphics \(page does not exist\)")  
  


**Extensions for parallelism**

[Execution policies](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/parallelism/execution_policy&action=edit&redlink=1 "cpp/experimental/parallelism/execution policy \(page does not exist\)")  
---  
[parallel::execution_policy](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/execution_policy&action=edit&redlink=1 "cpp/experimental/execution policy \(page does not exist\)")  
[parallel::sequential_execution_policyparallel::parallel_execution_policyparallel::parallel_vector_execution_policy](execution_policy_tag_t.html "cpp/experimental/execution policy tag t")  
[parallel::seqparallel::parparallel::par_vec](execution_policy_tag.html "cpp/experimental/execution policy tag")  
[Parallel algorithms](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/parallelism/parallel_algorithms&action=edit&redlink=1 "cpp/experimental/parallelism/parallel algorithms \(page does not exist\)")  
Parallel exceptions  
[parallel::exception_list](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/exception_list&action=edit&redlink=1 "cpp/experimental/exception list \(page does not exist\)")  
[Parallelized version of existing algorithms](parallelism/existing.html "cpp/experimental/parallelism/existing")  
New algorithms  
[parallel::for_eachparallel::for_each_n](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/for_each&action=edit&redlink=1 "cpp/experimental/for each \(page does not exist\)")  
[parallel::reduce](reduce.html "cpp/experimental/reduce")  
[parallel::exclusive_scan](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/exclusive_scan&action=edit&redlink=1 "cpp/experimental/exclusive scan \(page does not exist\)")  
[parallel::inclusive_scan](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/inclusive_scan&action=edit&redlink=1 "cpp/experimental/inclusive scan \(page does not exist\)")  
[parallel::transform_reduce](transform_reduce.html "cpp/experimental/transform reduce")  
[parallel::transform_exclusive_scan](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/transform_exclusive_scan&action=edit&redlink=1 "cpp/experimental/transform exclusive scan \(page does not exist\)")  
[parallel::transform_inclusive_scan](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/transform_inclusive_scan&action=edit&redlink=1 "cpp/experimental/transform inclusive scan \(page does not exist\)")  
  


![](https://upload.cppreference.com/mwiki/images/3/31/Imbox_notice.png) |  **Merged into ISO C++** The functionality described on this page was merged into the mainline ISO C++ standard (except for dynamic execution policy and `exception_list`) as of 3/2016; see [the algorithm library](../algorithm.html "cpp/algorithm") (since C++17)  
---|---  
  
The C++ Extensions for Parallelism, ISO/IEC TS 19570:2015 defines the following new components for the C++ standard library: 

## Contents

  * [1 Execution policies](parallelism.html#Execution_policies)
  * [2 Exception lists](parallelism.html#Exception_lists)
  * [3 Parallelized versions of existing algorithms](parallelism.html#Parallelized_versions_of_existing_algorithms)
  * [4 New algorithms](parallelism.html#New_algorithms)

  
---  
  
### Execution policies

The parallelism TS describes three execution policies: [sequential](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/parallelism/execution_policy&action=edit&redlink=1 "cpp/experimental/parallelism/execution policy \(page does not exist\)"), [parallel](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/parallelism/execution_policy&action=edit&redlink=1 "cpp/experimental/parallelism/execution policy \(page does not exist\)"), and [parallel+vector](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/parallelism/execution_policy&action=edit&redlink=1 "cpp/experimental/parallelism/execution policy \(page does not exist\)"), and provides corresponding execution policy types and objects. Users may select an execution policy statically by invoking a parallel algorithm with the an execution policy object of the corresponding type, or dynamically by using the type-erasing `execution_policy` class. 

Implementations may define additional execution policies as an extension. The semantics of parallel algorithms invoked with an execution policy object of implementation-defined type is implementation-defined. 

Defined in header `[<experimental/execution_policy>](https://en.cppreference.com/mwiki/index.php?title=cpp/header/experimental/execution_policy&action=edit&redlink=1 "cpp/header/experimental/execution policy \(page does not exist\)")`  
---  
[ sequential_execution_policyparallel_execution_policyparallel_vector_execution_policy](execution_policy_tag_t.html "cpp/experimental/execution policy tag t") |  execution policy types   
(class)  
[ seqparpar_vec](execution_policy_tag.html "cpp/experimental/execution policy tag") |  global execution policy objects   
(constant)  
[ execution_policy](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/execution_policy&action=edit&redlink=1 "cpp/experimental/execution policy \(page does not exist\)") |  dynamic execution policy   
(class)  
[ is_execution_policy](is_execution_policy.html "cpp/experimental/is execution policy") |  test whether a class represents an execution policy   
(class template)  
  
### Exception lists

Defined in header `[<experimental/exception_list>](https://en.cppreference.com/mwiki/index.php?title=cpp/header/experimental/exception_list&action=edit&redlink=1 "cpp/header/experimental/exception list \(page does not exist\)")`  
---  
[ exception_list](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/exception_list&action=edit&redlink=1 "cpp/experimental/exception list \(page does not exist\)") |  exceptions raised during parallel executions   
(class)  
  
### Parallelized versions of existing algorithms

The TS provides [parallelized versions](parallelism/existing.html "cpp/experimental/parallelism/existing") of the following 69 algorithms from <algorithm>, <numeric> and <memory>: 

Standard library algorithms for which parallelized versions are provided  
---  
  
  * [std::adjacent_difference](../algorithm/adjacent_difference.html "cpp/algorithm/adjacent difference")
  * [std::adjacent_find](../algorithm/adjacent_find.html "cpp/algorithm/adjacent find")
  * [std::all_of](../algorithm/none_of.html "cpp/algorithm/all any none of")
  * [std::any_of](../algorithm/none_of.html "cpp/algorithm/all any none of")
  * [std::copy](../algorithm/copy.html "cpp/algorithm/copy")
  * [std::copy_if](../algorithm/copy.html "cpp/algorithm/copy")
  * [std::copy_n](../algorithm/copy_n.html "cpp/algorithm/copy n")
  * [std::count](../algorithm/count.html "cpp/algorithm/count")
  * [std::count_if](../algorithm/count.html "cpp/algorithm/count")
  * [std::equal](../algorithm/equal.html "cpp/algorithm/equal")
  * [std::fill](../algorithm/fill.html "cpp/algorithm/fill")
  * [std::fill_n](../algorithm/fill_n.html "cpp/algorithm/fill n")
  * [std::find](../algorithm/find.html "cpp/algorithm/find")
  * [std::find_end](../algorithm/find_end.html "cpp/algorithm/find end")
  * [std::find_first_of](../algorithm/find_first_of.html "cpp/algorithm/find first of")
  * [std::find_if](../algorithm/find.html "cpp/algorithm/find")
  * [std::find_if_not](../algorithm/find.html "cpp/algorithm/find")
  * [std::generate](../algorithm/generate.html "cpp/algorithm/generate")
  * [std::generate_n](../algorithm/generate_n.html "cpp/algorithm/generate n")
  * [std::includes](../algorithm/includes.html "cpp/algorithm/includes")
  * [std::inner_product](../algorithm/inner_product.html "cpp/algorithm/inner product")
  * [std::inplace_merge](../algorithm/inplace_merge.html "cpp/algorithm/inplace merge")
  * [std::is_heap](../algorithm/is_heap.html "cpp/algorithm/is heap")
  * [std::is_heap_until](../algorithm/is_heap_until.html "cpp/algorithm/is heap until")
  * [std::is_partitioned](../algorithm/is_partitioned.html "cpp/algorithm/is partitioned")
  * [std::is_sorted](../algorithm/is_sorted.html "cpp/algorithm/is sorted")
  * [std::is_sorted_until](../algorithm/is_sorted_until.html "cpp/algorithm/is sorted until")
  * [std::lexicographical_compare](../algorithm/lexicographical_compare.html "cpp/algorithm/lexicographical compare")
  * [std::max_element](../algorithm/max_element.html "cpp/algorithm/max element")
  * [std::merge](../algorithm/merge.html "cpp/algorithm/merge")
  * [std::min_element](../algorithm/min_element.html "cpp/algorithm/min element")
  * [std::minmax_element](../algorithm/minmax_element.html "cpp/algorithm/minmax element")
  * [std::mismatch](../algorithm/mismatch.html "cpp/algorithm/mismatch")
  * [`std::move`](../algorithm/move.html "cpp/algorithm/move")
  * [std::none_of](../algorithm/none_of.html "cpp/algorithm/all any none of")
  * [std::nth_element](../algorithm/nth_element.html "cpp/algorithm/nth element")
  * [std::partial_sort](../algorithm/partial_sort.html "cpp/algorithm/partial sort")
  * [std::partial_sort_copy](../algorithm/partial_sort_copy.html "cpp/algorithm/partial sort copy")
  * [std::partition](../algorithm/partition.html "cpp/algorithm/partition")
  * [std::partition_copy](../algorithm/partition_copy.html "cpp/algorithm/partition copy")
  * [`std::remove`](../algorithm/remove.html "cpp/algorithm/remove")
  * [std::remove_copy](../algorithm/remove_copy.html "cpp/algorithm/remove copy")
  * [std::remove_copy_if](../algorithm/remove_copy.html "cpp/algorithm/remove copy")
  * [std::remove_if](../algorithm/remove.html "cpp/algorithm/remove")
  * [std::replace](../algorithm/replace.html "cpp/algorithm/replace")
  * [std::replace_copy](../algorithm/replace_copy.html "cpp/algorithm/replace copy")
  * [std::replace_copy_if](../algorithm/replace_copy.html "cpp/algorithm/replace copy")
  * [std::replace_if](../algorithm/replace.html "cpp/algorithm/replace")
  * [std::reverse](../algorithm/reverse.html "cpp/algorithm/reverse")
  * [std::reverse_copy](../algorithm/reverse_copy.html "cpp/algorithm/reverse copy")
  * [std::rotate](../algorithm/rotate.html "cpp/algorithm/rotate")
  * [std::rotate_copy](../algorithm/rotate_copy.html "cpp/algorithm/rotate copy")
  * [std::search](../algorithm/search.html "cpp/algorithm/search")
  * [std::search_n](../algorithm/search_n.html "cpp/algorithm/search n")
  * [std::set_difference](../algorithm/set_difference.html "cpp/algorithm/set difference")
  * [std::set_intersection](../algorithm/set_intersection.html "cpp/algorithm/set intersection")
  * [std::set_symmetric_difference](../algorithm/set_symmetric_difference.html "cpp/algorithm/set symmetric difference")
  * [std::set_union](../algorithm/set_union.html "cpp/algorithm/set union")
  * [std::sort](../algorithm/sort.html "cpp/algorithm/sort")
  * [std::stable_partition](../algorithm/stable_partition.html "cpp/algorithm/stable partition")
  * [std::stable_sort](../algorithm/stable_sort.html "cpp/algorithm/stable sort")
  * [std::swap_ranges](../algorithm/swap_ranges.html "cpp/algorithm/swap ranges")
  * [std::transform](../algorithm/transform.html "cpp/algorithm/transform")
  * [std::uninitialized_copy](../memory/uninitialized_copy.html "cpp/memory/uninitialized copy")
  * [std::uninitialized_copy_n](../memory/uninitialized_copy_n.html "cpp/memory/uninitialized copy n")
  * [std::uninitialized_fill](../memory/uninitialized_fill.html "cpp/memory/uninitialized fill")
  * [std::uninitialized_fill_n](../memory/uninitialized_fill_n.html "cpp/memory/uninitialized fill n")
  * [std::unique](../algorithm/unique.html "cpp/algorithm/unique")
  * [std::unique_copy](../algorithm/unique_copy.html "cpp/algorithm/unique copy")

  
  
### New algorithms

Defined in header `[<experimental/algorithm>](https://en.cppreference.com/mwiki/index.php?title=cpp/header/experimental/algorithm&action=edit&redlink=1 "cpp/header/experimental/algorithm \(page does not exist\)")`  
---  
[ for_each](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/for_each&action=edit&redlink=1 "cpp/experimental/for each \(page does not exist\)") |  similar to [std::for_each](../algorithm/for_each.html "cpp/algorithm/for each") except returns void   
(function template)  
[ for_each_n](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/for_each_n&action=edit&redlink=1 "cpp/experimental/for each n \(page does not exist\)") |  applies a function object to the first n elements of a sequence   
(function template)  
Defined in header `[<experimental/numeric>](https://en.cppreference.com/mwiki/index.php?title=cpp/header/experimental/numeric&action=edit&redlink=1 "cpp/header/experimental/numeric \(page does not exist\)")`  
[ reduce](reduce.html "cpp/experimental/reduce")(parallelism TS) |  similar to [std::accumulate](../algorithm/accumulate.html "cpp/algorithm/accumulate"), except out of order   
(function template)   
[ exclusive_scan](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/exclusive_scan&action=edit&redlink=1 "cpp/experimental/exclusive scan \(page does not exist\)") |  similar to [std::partial_sum](../algorithm/partial_sum.html "cpp/algorithm/partial sum"), excludes the ith input element from the ith sum   
(function template)  
[ inclusive_scan](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/inclusive_scan&action=edit&redlink=1 "cpp/experimental/inclusive scan \(page does not exist\)") |  similar to [std::partial_sum](../algorithm/partial_sum.html "cpp/algorithm/partial sum"), includes the ith input element in the ith sum   
(function template)  
[ transform_reduce](transform_reduce.html "cpp/experimental/transform reduce")(parallelism TS) |  applies a functor, then reduces out of order   
(function template)   
[ transform_exclusive_scan](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/transform_exclusive_scan&action=edit&redlink=1 "cpp/experimental/transform exclusive scan \(page does not exist\)") |  applies a functor, then calculates exclusive scan   
(function template)  
[ transform_inclusive_scan](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/transform_inclusive_scan&action=edit&redlink=1 "cpp/experimental/transform inclusive scan \(page does not exist\)") |  applies a functor, then calculates inclusive scan   
(function template)
