  
  


[Experimental](../experimental.html "cpp/experimental")

[Technical Specification](../experimental.html#Technical_Specification "cpp/experimental")  
---  
[Filesystem library](fs.html "cpp/experimental/fs") (filesystem TS)  
[Library fundamentals](memory.html "cpp/experimental/lib extensions") (library fundamentals TS)  
[Library fundamentals 2](lib_extensions_2.html "cpp/experimental/lib extensions 2") (library fundamentals TS v2)  
**Library fundamentals 3** (library fundamentals TS v3)  
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
  


**Library fundamentals v3**

[experimental::scope_exit](scope_exit.html "cpp/experimental/scope exit")  
---  
[experimental::scope_fail](scope_fail.html "cpp/experimental/scope fail")  
[experimental::scope_success](scope_success.html "cpp/experimental/scope success")  
[experimental::unique_resource](unique_resource.html "cpp/experimental/unique resource")  
  


Version 3 of the C++ Extensions for Library Fundamentals, ISO/IEC TS 19568:2024, defines the following new components for the C++ standard library, in addition to those defined in [version 1](memory.html "cpp/experimental/lib extensions") and [version 2](lib_extensions_2.html "cpp/experimental/lib extensions 2"). 

Components merged into C++17/20 and the following components are removed in LFTS v3: 

  * [std::experimental::make_array](make_array.html "cpp/experimental/make array"), 
  * [std::experimental::erased_type](erased_type.html "cpp/experimental/erased type"), 
  * [`std::experimental::packaged_task`](lib_extensions/packaged_task.html "cpp/experimental/lib extensions/packaged task"), and 
  * [`std::experimental::promise`](lib_extensions/promise.html "cpp/experimental/lib extensions/promise"). 



### Scope guard

Defined in header `[<experimental/scope>](https://en.cppreference.com/mwiki/index.php?title=cpp/header/experimental/scope&action=edit&redlink=1 "cpp/header/experimental/scope \(page does not exist\)")`  
---  
[ scope_exit](scope_exit.html "cpp/experimental/scope exit") |  wraps a function object and invokes it on exiting the scope   
(class template)   
[ scope_fail](scope_fail.html "cpp/experimental/scope fail") |  wraps a function object and invokes it on exiting the scope through an exception   
(class template)   
[ scope_success](scope_success.html "cpp/experimental/scope success") |  wraps a function object and invokes it on exiting the scope normally   
(class template)   
[ unique_resource](unique_resource.html "cpp/experimental/unique resource") |  universal RAII resource handle wrapper   
(class template)   
  
### Feature test macros

Defined in header `[<experimental/memory_resource>](../header/experimental/memory_resource.html "cpp/header/experimental/memory resource")`  
---  
__cpp_lib_experimental_memory_resources |  a value of at least 201803 indicates that [`resource_adaptor`](resource_adaptor.html "cpp/experimental/resource adaptor") is supported   
(macro constant)  
Defined in header `[<experimental/functional>](../header/experimental/functional.html "cpp/header/experimental/functional")`  
__cpp_lib_experimental_function_polymorphic_allocator |  a value of at least 202211 indicates that [std::pmr::polymorphic_allocator](../memory/polymorphic_allocator.html)<> is used for [`std::experimental::function`](function.html "cpp/experimental/function")   
(macro constant)  
Defined in header `[<experimental/scope>](https://en.cppreference.com/mwiki/index.php?title=cpp/header/experimental/scope&action=edit&redlink=1 "cpp/header/experimental/scope \(page does not exist\)")`  
__cpp_lib_experimental_scope |  a value of at least 201902 indicates that the scope guards are supported   
(macro constant)  
  
### Notes

The value of `__cpp_lib_experimental_memory_resources` has been increased in LFTS v3, because the design of [`resource_adaptor`](resource_adaptor.html "cpp/experimental/resource adaptor") is rebased onto [std::pmr::memory_resource](../memory/memory_resource.html "cpp/memory/memory resource"). 
