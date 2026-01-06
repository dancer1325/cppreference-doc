  
  


[Experimental](../experimental.html "cpp/experimental")

[Technical Specification](../experimental.html#Technical_Specification "cpp/experimental")  
---  
[Filesystem library](fs.html "cpp/experimental/fs") (filesystem TS)  
[Library fundamentals](memory.html "cpp/experimental/lib extensions") (library fundamentals TS)  
[Library fundamentals 2](lib_extensions_2.html "cpp/experimental/lib extensions 2") (library fundamentals TS v2)  
[Library fundamentals 3](lib_extensions_3.html "cpp/experimental/lib extensions 3") (library fundamentals TS v3)  
[Extensions for parallelism](parallelism.html "cpp/experimental/parallelism") (parallelism TS)  
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
  


[Extensions for parallelism](parallelism.html "cpp/experimental/parallelism")

[Execution policies](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/parallelism/execution_policy&action=edit&redlink=1 "cpp/experimental/parallelism/execution policy \(page does not exist\)")  
---  
[parallel::execution_policy](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/execution_policy&action=edit&redlink=1 "cpp/experimental/execution policy \(page does not exist\)")  
**parallel::sequential_execution_policy parallel::parallel_execution_policyparallel::parallel_vector_execution_policy**  
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
  


Defined in header `[<experimental/execution_policy>](https://en.cppreference.com/mwiki/index.php?title=cpp/header/experimental/execution_policy&action=edit&redlink=1 "cpp/header/experimental/execution policy \(page does not exist\)")` |  |   
---|---|---  
class sequential_execution_policy { /* unspecified */ }; |  |  (parallelism TS)  
class parallel_execution_policy { /* unspecified */ }; |  |  (parallelism TS)  
class parallel_vector_execution_policy { /* unspecified */ }; |  |  (parallelism TS)  
| |   
  
`sequential_execution_policy`, `parallel_execution_policy` and `parallel_vector_execution_policy` are tag types used to indicate the kinds of parallelism allowed in the execution of a parallel algorithm. 
