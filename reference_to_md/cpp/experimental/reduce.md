  
  


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
[parallel::sequential_execution_policyparallel::parallel_execution_policyparallel::parallel_vector_execution_policy](execution_policy_tag_t.html "cpp/experimental/execution policy tag t")  
[parallel::seqparallel::parparallel::par_vec](execution_policy_tag.html "cpp/experimental/execution policy tag")  
[Parallel algorithms](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/parallelism/parallel_algorithms&action=edit&redlink=1 "cpp/experimental/parallelism/parallel algorithms \(page does not exist\)")  
Parallel exceptions  
[parallel::exception_list](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/exception_list&action=edit&redlink=1 "cpp/experimental/exception list \(page does not exist\)")  
[Parallelized version of existing algorithms](parallelism/existing.html "cpp/experimental/parallelism/existing")  
New algorithms  
[parallel::for_eachparallel::for_each_n](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/for_each&action=edit&redlink=1 "cpp/experimental/for each \(page does not exist\)")  
**parallel::reduce**  
[parallel::exclusive_scan](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/exclusive_scan&action=edit&redlink=1 "cpp/experimental/exclusive scan \(page does not exist\)")  
[parallel::inclusive_scan](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/inclusive_scan&action=edit&redlink=1 "cpp/experimental/inclusive scan \(page does not exist\)")  
[parallel::transform_reduce](transform_reduce.html "cpp/experimental/transform reduce")  
[parallel::transform_exclusive_scan](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/transform_exclusive_scan&action=edit&redlink=1 "cpp/experimental/transform exclusive scan \(page does not exist\)")  
[parallel::transform_inclusive_scan](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/transform_inclusive_scan&action=edit&redlink=1 "cpp/experimental/transform inclusive scan \(page does not exist\)")  
  


Defined in header `[<experimental/numeric>](https://en.cppreference.com/mwiki/index.php?title=cpp/header/experimental/numeric&action=edit&redlink=1 "cpp/header/experimental/numeric \(page does not exist\)")` |  |   
---|---|---  
template< class InputIt >  
typename [std::iterator_traits](../iterator/iterator_traits.html)<InputIt>::value_type reduce(  
InputIt first, InputIt last ); |  (1)  |  (parallelism TS)  
template< class ExecutionPolicy, class InputIterator >  
typename [std::iterator_traits](../iterator/iterator_traits.html)<InputIt>::value_type reduce(  
ExecutionPolicy&& policy, InputIt first, InputIt last ); |  (2)  |  (parallelism TS)  
template< class InputIt, class T >  
T reduce( InputIt first, InputIt last, T init ); |  (3)  |  (parallelism TS)  
template< class ExecutionPolicy, class InputIt, class T >  
T reduce( ExecutionPolicy&& policy, InputIt first, InputIt last, T init ); |  (4)  |  (parallelism TS)  
template< class InputIt, class T, class BinaryOp >  
T reduce( InputIt first, InputIt last, T init, BinaryOp binary_op ); |  (5)  |  (parallelism TS)  
template< class ExecutionPolicy, class InputIt, class T, class BinaryOp >  
T reduce( ExecutionPolicy&& policy,  
InputIt first, InputIt last, T init, BinaryOp binary_op ); |  (6)  |  (parallelism TS)  
| |   
  
1) Same as reduce(first, last, typename [std::iterator_traits](../iterator/iterator_traits.html)<InputIt>::value_type{}).

3) Same as reduce(first, last, init, [std::plus](../utility/functional/plus.html)<>()).

5) Reduces the range `[`first`, `last`)`, possibly permuted and aggregated in unspecified manner, along with the initial value init over binary_op.

2,4,6) Same as (1,3,5), but executed according to policy.

The behavior is non-deterministic if binary_op is not associative or not commutative. 

The behavior is undefined if binary_op modifies any element or invalidates any iterator in `[`first`, `last`)`. 

## Contents

  * [1 Parameters](reduce.html#Parameters)
  * [2 Return value](reduce.html#Return_value)
  * [3 Complexity](reduce.html#Complexity)
  * [4 Exceptions](reduce.html#Exceptions)
  * [5 Notes](reduce.html#Notes)
  * [6 Example](reduce.html#Example)
  * [7 See also](reduce.html#See_also)

  
---  
  
### Parameters

first, last  |  \-  |  the range of elements to apply the algorithm to   
---|---|---  
init  |  \-  |  the initial value of the generalized sum   
policy  |  \-  |  the [execution policy](parallelism.html#Execution_policies "cpp/experimental/parallelism")  
binary_op  |  \-  |  binary [FunctionObject](../named_req/FunctionObject.html "cpp/named req/FunctionObject") that will be applied in unspecified order to the result of dereferencing the input iterators, the results of other binary_op and init  
Type requirements   
-`InputIt` must meet the requirements of [LegacyInputIterator](../named_req/InputIterator.html "cpp/named req/InputIterator").   
  
### Return value

Generalized sum of init and *first, *(first + 1), ... *(last - 1) over binary_op, 

where generalized sum GSUM(op, a1, ..., aN) is defined as follows: 

  * if N=1, a1
  * if N > 1, op(GSUM(op, b1, ..., bK), GSUM(op, bM, ..., bN)) where 



    

  * b1, ..., bN may be any permutation of a1, ..., aN and 
  * 1 < K+1 = M ≤ N



in other words, the elements of the range may be grouped and rearranged in arbitrary order. 

### Complexity

O(last - first) applications of binary_op. 

### Exceptions

  * If execution of a function invoked as part of the algorithm throws an exception, 



    

  * if `policy` is `parallel_vector_execution_policy`, [std::terminate](../error/terminate.html "cpp/error/terminate") is called. 
  * if `policy` is `sequential_execution_policy` or `parallel_execution_policy`, the algorithm exits with an [`exception_list`](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/exception_list&action=edit&redlink=1 "cpp/experimental/exception list \(page does not exist\)") containing all uncaught exceptions. If there was only one uncaught exception, the algorithm may rethrow it without wrapping in `exception_list`. It is unspecified how much work the algorithm will perform before returning after the first exception was encountered. 
  * if `policy` is some other type, the behavior is implementation-defined. 



  * If the algorithm fails to allocate memory (either for itself or to construct an `exception_list` when handling a user exception), [std::bad_alloc](../memory/new/bad_alloc.html "cpp/memory/new/bad alloc") is thrown. 



### Notes

If the range is empty, init is returned, unmodified. 

  * If `policy` is an instance of `sequential_execution_policy`, all operations are performed in the calling thread. 
  * If `policy` is an instance of `parallel_execution_policy`, operations may be performed in unspecified number of threads, indeterminately sequenced with each other. 
  * If `policy` is an instance of `parallel_vector_execution_policy`, execution may be both parallelized and vectorized: function body boundaries are not respected and user code may be overlapped and combined in arbitrary manner (in particular, this implies that a user-provided Callable must not acquire a mutex to access a shared resource). 



### Example

reduce is the out-of-order version of [std::accumulate](../algorithm/accumulate.html "cpp/algorithm/accumulate"):

Run this code
    
    
    #include <chrono>
    #include <experimental/execution_policy>
    #include <experimental/numeric>
    #include <iostream>
    #include <numeric>
    #include <vector>
     
    int main()
    {
        [std::vector](../container/vector.html)<double> v(10'000'007, 0.5);
     
        {
            auto t1 = [std::chrono::high_resolution_clock::now](../chrono/high_resolution_clock/now.html)();
            double result = [std::accumulate](../algorithm/accumulate.html)(v.begin(), v.end(), 0.0);
            auto t2 = [std::chrono::high_resolution_clock::now](../chrono/high_resolution_clock/now.html)();
            [std::chrono::duration](../chrono/duration.html)<double, [std::milli](../numeric/ratio/ratio.html)> ms = t2 - t1;
            [std::cout](../io/cout.html) << [std::fixed](../io/manip/fixed.html) << "std::accumulate result " << result
                      << " took " << ms.count() << " ms\n";
        }
     
        {
            auto t1 = [std::chrono::high_resolution_clock::now](../chrono/high_resolution_clock/now.html)();
            double result = std::experimental::parallel::reduce(
                                [std::experimental::parallel::par](execution_policy_tag.html),
                                v.begin(), v.end());
            auto t2 = [std::chrono::high_resolution_clock::now](../chrono/high_resolution_clock/now.html)();
            [std::chrono::duration](../chrono/duration.html)<double, [std::milli](../numeric/ratio/ratio.html)> ms = t2 - t1;
            [std::cout](../io/cout.html) << "parallel::reduce result "
                      << result << " took " << ms.count() << " ms\n";
        }
    }

Possible output: 
    
    
    std::accumulate result 5000003.50000 took 12.7365 ms
    parallel::reduce result 5000003.50000 took 5.06423 ms

### See also

[ accumulate](../algorithm/accumulate.html "cpp/algorithm/accumulate") |  sums up or folds a range of elements   
(function template)   
---|---  
[ transform](../algorithm/transform.html "cpp/algorithm/transform") |  applies a function to a range of elements, storing results in a destination range   
(function template)   
[ transform_reduce](transform_reduce.html "cpp/experimental/transform reduce")(parallelism TS) |  applies a functor, then reduces out of order   
(function template) 
