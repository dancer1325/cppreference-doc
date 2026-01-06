  
  


[Experimental](../experimental.html "cpp/experimental")

[Technical Specification](../experimental.html#Technical_Specification "cpp/experimental")  
---  
[Filesystem library](fs.html "cpp/experimental/fs") (filesystem TS)  
[Library fundamentals](memory.html "cpp/experimental/lib extensions") (library fundamentals TS)  
[Library fundamentals 2](lib_extensions_2.html "cpp/experimental/lib extensions 2") (library fundamentals TS v2)  
[Library fundamentals 3](lib_extensions_3.html "cpp/experimental/lib extensions 3") (library fundamentals TS v3)  
[Extensions for parallelism](parallelism.html "cpp/experimental/parallelism") (parallelism TS)  
**Extensions for parallelism 2** (parallelism TS v2)  
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
  


**Extensions for parallelism v2**

Parallel exceptions  
---  
[exception_list](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/exception_list&action=edit&redlink=1 "cpp/experimental/exception list \(page does not exist\)")  
Additional execution policies  
| [execution::vector_policy](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/vector_policy&action=edit&redlink=1 "cpp/experimental/vector policy \(page does not exist\)")  
---  
  
| [execution::unsequenced_policy](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/unsequenced_policy&action=edit&redlink=1 "cpp/experimental/unsequenced policy \(page does not exist\)")  
---  
  
Algorithms  
| [induction](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/induction&action=edit&redlink=1 "cpp/experimental/induction \(page does not exist\)")  
---  
[reductionreduction_plusreduction_minusreduction_multiplies](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/reduction&action=edit&redlink=1 "cpp/experimental/reduction \(page does not exist\)")  
  
| [reduction_bit_andreduction_bit_orreduction_bit_xorreduction_minreduction_max](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/reduction&action=edit&redlink=1 "cpp/experimental/reduction \(page does not exist\)")  
---  
  
| [for_loopfor_loop_stridedfor_loop_nfor_loop_n_strided](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/for_loop&action=edit&redlink=1 "cpp/experimental/for loop \(page does not exist\)")  
---  
  
  
  
  
  
[execution::no_vec](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/no_vec&action=edit&redlink=1 "cpp/experimental/no vec \(page does not exist\)")  
[execution::ordered_update_t](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/ordered_update_t&action=edit&redlink=1 "cpp/experimental/ordered update t \(page does not exist\)")  
Task blocks  
[task_block](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/task_block&action=edit&redlink=1 "cpp/experimental/task block \(page does not exist\)")  
[task_cancelled_exception](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/task_cancelled_exception&action=edit&redlink=1 "cpp/experimental/task cancelled exception \(page does not exist\)")  
[define_task_blockdefine_task_block_restore_thread](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/define_task_block&action=edit&redlink=1 "cpp/experimental/define task block \(page does not exist\)")  
[Data-parallel vectors](simd.html "cpp/experimental/simd")  
  


The C++ Extensions for Parallelism Version 2, ISO/IEC TS 19570:2018 defines the following new components for the C++ standard library: 

## Contents

  * [1 Parallel exceptions](parallelism_2.html#Parallel_exceptions)
  * [2 Execution policies](parallelism_2.html#Execution_policies)
  * [3 Parallel algorithms](parallelism_2.html#Parallel_algorithms)
  * [4 Task Block](parallelism_2.html#Task_Block)
  * [5 Data-Parallel Types](parallelism_2.html#Data-Parallel_Types)
  * [6 Feature test macros](parallelism_2.html#Feature_test_macros)

  
---  
  
### Parallel exceptions

Defined in header `[<experimental/exception_list>](https://en.cppreference.com/mwiki/index.php?title=cpp/header/experimental/exception_list&action=edit&redlink=1 "cpp/header/experimental/exception list \(page does not exist\)")`  
---  
[ exception_list](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/exception_list&action=edit&redlink=1 "cpp/experimental/exception list \(page does not exist\)") |  exceptions raised during parallel executions   
(class)  
  
### Execution policies

Defined in header `[<experimental/execution_policy>](https://en.cppreference.com/mwiki/index.php?title=cpp/header/experimental/execution_policy&action=edit&redlink=1 "cpp/header/experimental/execution policy \(page does not exist\)")`  
---  
[ unsequenced_policyvector_policy](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/execution_policy_tag_t_v2&action=edit&redlink=1 "cpp/experimental/execution policy tag t v2 \(page does not exist\)") |  execution policy types   
(class)  
[ unseqvec](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/execution_policy_tag_v2&action=edit&redlink=1 "cpp/experimental/execution policy tag v2 \(page does not exist\)") |  global execution policy objects   
(constant)  
  
### Parallel algorithms

| This section is incomplete   
---|---  
  
### Task Block

| This section is incomplete   
---|---  
  
### [Data-Parallel Types](simd.html "cpp/experimental/simd")

[ simd](simd/simd.html "cpp/experimental/simd/simd")(parallelism TS v2) |  data-parallel vector type   
(class template)   
---|---  
[ simd_mask](simd/simd_mask.html "cpp/experimental/simd/simd mask")(parallelism TS v2) |  data-parallel type with the element type bool   
(class template)   
  
### Feature test macros

Defined in header `[<experimental/task_block>](https://en.cppreference.com/mwiki/index.php?title=cpp/header/experimental/task_block&action=edit&redlink=1 "cpp/header/experimental/task block \(page does not exist\)")`  
---  
__cpp_lib_experimental_parallel_task_block |  a value of at least 201711 indicates that the task block functionality is supported   
(macro constant)  
Defined in header `[<experimental/execution>](../header/experimental/execution.html "cpp/header/experimental/execution")`  
__cpp_lib_experimental_execution_vector_policy |  a value of at least 201711 indicates that the vector and wavefront policies are supported   
(macro constant)  
Defined in header `[<experimental/algorithm>](https://en.cppreference.com/mwiki/index.php?title=cpp/header/experimental/algorithm&action=edit&redlink=1 "cpp/header/experimental/algorithm \(page does not exist\)")`  
__cpp_lib_experimental_parallel_for_loop |  a value of at least 201711 indicates that the `for_loop` class of algorithms is supported   
(macro constant)  
Defined in header `[<experimental/simd>](../header/experimental/simd.html "cpp/header/experimental/simd")`  
__cpp_lib_experimental_parallel_simd |  a value of at least 201803 indicates that the data-parallel types library is supported   
(macro constant)
