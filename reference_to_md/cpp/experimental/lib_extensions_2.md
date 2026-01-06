  
  


[Experimental](../experimental.html "cpp/experimental")

[Technical Specification](../experimental.html#Technical_Specification "cpp/experimental")  
---  
[Filesystem library](fs.html "cpp/experimental/fs") (filesystem TS)  
[Library fundamentals](memory.html "cpp/experimental/lib extensions") (library fundamentals TS)  
**Library fundamentals 2** (library fundamentals TS v2)  
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
  


**Library fundamentals v2**

[experimental::propagate_const](propagate_const.html "cpp/experimental/propagate const")  
---  
[experimental::not_fn](not_fn.html "cpp/experimental/not fn")  
[experimental::observer_ptr](observer_ptr.html "cpp/experimental/observer ptr")  
[experimental::make_array](make_array.html "cpp/experimental/make array")  
[experimental::to_array](to_array.html "cpp/experimental/to array")  
[experimental::ostream_joiner](ostream_joiner.html "cpp/experimental/ostream joiner")  
[experimental::gcd](gcd.html "cpp/experimental/gcd")  
[experimental::lcm](lcm.html "cpp/experimental/lcm")  
[experimental::source_location](source_location.html "cpp/experimental/source location")  
[experimental::randint](randint.html "cpp/experimental/randint")  
[detection idiom](is_detected.html "cpp/experimental/is detected")  
[uniform container erasure](lib_extensions_2.html#Uniform_container_erasure "cpp/experimental/lib extensions 2")  
[logical operator type traits](lib_extensions_2.html#Logical_operator_type_traits "cpp/experimental/lib extensions 2")  
  


Version 2 of the C++ Extensions for Library Fundamentals, ISO/IEC TS 19568:2017, defines the following new components for the C++ standard library, in addition to those defined in [version 1](memory.html "cpp/experimental/lib extensions"): 

## Contents

  * [1 The C++ detection idiom](lib_extensions_2.html#The_C.2B.2B_detection_idiom)
  * [2 A const-propagating wrapper for pointer-like objects](lib_extensions_2.html#A_const-propagating_wrapper_for_pointer-like_objects)
  * [3 Non-owning pointers](lib_extensions_2.html#Non-owning_pointers)
  * [4 std::array creation](lib_extensions_2.html#std::array_creation)
  * [5 ostream_joiner](lib_extensions_2.html#ostream_joiner)
  * [6 Simple random number generation facilities](lib_extensions_2.html#Simple_random_number_generation_facilities)
  * [7 Feature test macros](lib_extensions_2.html#Feature_test_macros)
  * [8 Merged into C++17](lib_extensions_2.html#Merged_into_C.2B.2B17)
  * [9 Merged into C++20](lib_extensions_2.html#Merged_into_C.2B.2B20)
    * [9.1 Uniform container erasure](lib_extensions_2.html#Uniform_container_erasure)
    * [9.2 Source code information capture](lib_extensions_2.html#Source_code_information_capture)
    * [9.3 std::array conversion](lib_extensions_2.html#std::array_conversion)

  
---  
  
### The C++ detection idiom

Defined in header `[<experimental/type_traits>](https://en.cppreference.com/mwiki/index.php?title=cpp/header/experimental/type_traits&action=edit&redlink=1 "cpp/header/experimental/type traits \(page does not exist\)")`  
---  
[ is_detected  detected_t  detected_or](is_detected.html "cpp/experimental/is detected") |  alias templates that detect whether a _template-id_ is well-formed  
(alias template)  
[ nonesuch](nonesuch.html "cpp/experimental/nonesuch") |  class type returned by detected_t on failure   
(class)  
  
### A const-propagating wrapper for pointer-like objects

Defined in header `[<experimental/propagate_const>](https://en.cppreference.com/mwiki/index.php?title=cpp/header/experimental/propagate_const&action=edit&redlink=1 "cpp/header/experimental/propagate const \(page does not exist\)")`  
---  
[ propagate_const](propagate_const.html "cpp/experimental/propagate const") |  a const-propagating wrapper for pointer-like objects   
(class template)  
  
### Non-owning pointers

Defined in header `[<experimental/memory>](https://en.cppreference.com/mwiki/index.php?title=cpp/header/experimental/memory&action=edit&redlink=1 "cpp/header/experimental/memory \(page does not exist\)")`  
---  
[ observer_ptr](observer_ptr.html "cpp/experimental/observer ptr") |  a class representing a non-owning pointer   
(class template)  
  
### `std::array` creation

Defined in header `[<experimental/array>](https://en.cppreference.com/mwiki/index.php?title=cpp/header/experimental/array&action=edit&redlink=1 "cpp/header/experimental/array \(page does not exist\)")`  
---  
[ make_array](make_array.html "cpp/experimental/make array")(library fundamentals TS v2) |  creates a [std::array](../container/array.html "cpp/container/array") object whose size and optionally element type are deduced from the arguments   
(function template)   
  
### `ostream_joiner`

Defined in header `[<experimental/iterator>](https://en.cppreference.com/mwiki/index.php?title=cpp/header/experimental/iterator&action=edit&redlink=1 "cpp/header/experimental/iterator \(page does not exist\)")`  
---  
[ ostream_joiner](ostream_joiner.html "cpp/experimental/ostream joiner") |  an output iterator that writes successive elements into an output stream, separating adjacent elements with a delimiter   
(class template)  
  
### Simple random number generation facilities

A _per-thread engine_ of type [std::default_random_engine](../numeric/random.html "cpp/numeric/random"), initialized to an unpredictable state, is maintained for each thread and used by the functions below. 

Defined in header `[<experimental/random>](https://en.cppreference.com/mwiki/index.php?title=cpp/header/experimental/random&action=edit&redlink=1 "cpp/header/experimental/random \(page does not exist\)")`  
---  
[ randint](randint.html "cpp/experimental/randint") |  generates a random integer in the specified range   
(function template)   
[ reseed](reseed.html "cpp/experimental/reseed") |  reseeds the per-thread random engine   
(function)   
Defined in header `[<experimental/algorithm>](https://en.cppreference.com/mwiki/index.php?title=cpp/header/experimental/algorithm&action=edit&redlink=1 "cpp/header/experimental/algorithm \(page does not exist\)")`  
[ sample](sample.html "cpp/experimental/sample") |  selects n random elements from a sequence   
(function template)  
[ shuffle](shuffle.html "cpp/experimental/shuffle") |  randomly re-orders elements in a range   
(function template)  
  
### Feature test macros

Defined in header `[<experimental/type_traits>](https://en.cppreference.com/mwiki/index.php?title=cpp/header/experimental/type_traits&action=edit&redlink=1 "cpp/header/experimental/type traits \(page does not exist\)")`  
---  
__cpp_lib_experimental_logical_traits |  a value of at least 201511 indicates that the logical operator type traits are supported   
(macro constant)  
__cpp_lib_experimental_detect |  a value of at least 201505 indicates that the detection idiom is supported   
(macro constant)  
Defined in header `[<experimental/propagate_const>](https://en.cppreference.com/mwiki/index.php?title=cpp/header/experimental/propagate_const&action=edit&redlink=1 "cpp/header/experimental/propagate const \(page does not exist\)")`  
__cpp_lib_experimental_propagate_const |  a value of at least 201505 indicates that propagate_const is supported   
(macro constant)  
Defined in header `[<experimental/functional>](../header/experimental/functional.html "cpp/header/experimental/functional")`  
__cpp_lib_experimental_not_fn |  a value of at least 201406 indicates that not_fn is supported   
(macro constant)  
Defined in header `[<experimental/memory>](https://en.cppreference.com/mwiki/index.php?title=cpp/header/experimental/memory&action=edit&redlink=1 "cpp/header/experimental/memory \(page does not exist\)")`  
__cpp_lib_experimental_observer_ptr |  a value of at least 201411 indicates that observer_ptr is supported   
(macro constant)  
Defined in header `[<experimental/array>](https://en.cppreference.com/mwiki/index.php?title=cpp/header/experimental/array&action=edit&redlink=1 "cpp/header/experimental/array \(page does not exist\)")`  
__cpp_lib_experimental_make_array |  a value of at least 201505 indicates that make_array is supported   
(macro constant)  
Defined in header `[<experimental/iterator>](https://en.cppreference.com/mwiki/index.php?title=cpp/header/experimental/iterator&action=edit&redlink=1 "cpp/header/experimental/iterator \(page does not exist\)")`  
__cpp_lib_experimental_ostream_joiner |  a value of at least 201411 indicates that ostream_joiner is supported   
(macro constant)  
Defined in header `[<experimental/vector>](https://en.cppreference.com/mwiki/index.php?title=cpp/header/experimental/vector&action=edit&redlink=1 "cpp/header/experimental/vector \(page does not exist\)")`  
__cpp_lib_experimental_erase_if |  a value of at least 201411 indicates that uniform container erasure is supported   
(macro constant)  
Defined in header `[<experimental/numeric>](https://en.cppreference.com/mwiki/index.php?title=cpp/header/experimental/numeric&action=edit&redlink=1 "cpp/header/experimental/numeric \(page does not exist\)")`  
__cpp_lib_experimental_gcd_lcm |  a value of at least 201411 indicates that gcd and lcm are supported   
(macro constant)  
Defined in header `[<experimental/random>](https://en.cppreference.com/mwiki/index.php?title=cpp/header/experimental/random&action=edit&redlink=1 "cpp/header/experimental/random \(page does not exist\)")`  
__cpp_lib_experimental_randint |  a value of at least 201511 indicates that randint and related functions are supported   
(macro constant)  
Defined in header `[<experimental/source_location>](https://en.cppreference.com/mwiki/index.php?title=cpp/header/experimental/source_location&action=edit&redlink=1 "cpp/header/experimental/source location \(page does not exist\)")`  
__cpp_lib_experimental_source_location |  a value of at least 201505 indicates that source_location is supported   
(macro constant)  
  
## Merged into C++17

The following components of the library fundamentals v2 have been adopted into the C++17 standard. 

Defined in header `[<experimental/type_traits>](https://en.cppreference.com/mwiki/index.php?title=cpp/header/experimental/type_traits&action=edit&redlink=1 "cpp/header/experimental/type traits \(page does not exist\)")`  
---  
[ void_t](void_t.html "cpp/experimental/void t") |  variadic alias template for `void`  
(alias template)  
Defined in header `[<experimental/type_traits>](https://en.cppreference.com/mwiki/index.php?title=cpp/header/experimental/type_traits&action=edit&redlink=1 "cpp/header/experimental/type traits \(page does not exist\)")`  
[ conjunction](conjunction.html "cpp/experimental/conjunction") |  variadic logical AND metafunction   
(class template)  
[ disjunction](disjunction.html "cpp/experimental/disjunction") |  variadic logical OR metafunction   
(class template)  
[ negation](negation.html "cpp/experimental/negation") |  logical NOT metafunction   
(class template)  
Defined in header `[<experimental/functional>](../header/experimental/functional.html "cpp/header/experimental/functional")`  
[ not_fn](not_fn.html "cpp/experimental/not fn") |  creates a function object that returns the complement of the result of the function object it holds   
(function template)   
Defined in header `[<experimental/numeric>](https://en.cppreference.com/mwiki/index.php?title=cpp/header/experimental/numeric&action=edit&redlink=1 "cpp/header/experimental/numeric \(page does not exist\)")`  
[ gcd](gcd.html "cpp/experimental/gcd") |  `constexpr` function template returning the greatest common divisor of two integers   
(function template)   
[ lcm](lcm.html "cpp/experimental/lcm") |  `constexpr` function template returning the least common multiple of two integers   
(function template)   
  
## Merged into C++20

The following components of the library fundamentals v2 have been adopted into the C++20 standard. 

### Uniform container erasure

Defined in header `[<experimental/string>](https://en.cppreference.com/mwiki/index.php?title=cpp/header/experimental/string&action=edit&redlink=1 "cpp/header/experimental/string \(page does not exist\)")`  
---  
[ erase (std::basic_string)](basic_string/erase.html "cpp/experimental/basic string/erase") |  erases all elements equal to a specific value from a [std::basic_string](../string/basic_string.html "cpp/string/basic string")   
(function template)  
[ erase_if (std::basic_string)](basic_string/erase_if.html "cpp/experimental/basic string/erase if") |  erases all elements satisfying a predicate from a [std::basic_string](../string/basic_string.html "cpp/string/basic string")   
(function template)  
Defined in header `[<experimental/deque>](https://en.cppreference.com/mwiki/index.php?title=cpp/header/experimental/deque&action=edit&redlink=1 "cpp/header/experimental/deque \(page does not exist\)")`  
[ erase (std::deque)](deque/erase.html "cpp/experimental/deque/erase") |  erases all elements equal to a specific value from a [std::deque](../container/deque.html "cpp/container/deque")   
(function template)  
[ erase_if (std::deque)](deque/erase_if.html "cpp/experimental/deque/erase if") |  erases all elements satisfying a predicate from a [std::deque](../container/deque.html "cpp/container/deque")   
(function template)  
Defined in header `[<experimental/vector>](https://en.cppreference.com/mwiki/index.php?title=cpp/header/experimental/vector&action=edit&redlink=1 "cpp/header/experimental/vector \(page does not exist\)")`  
[ erase (std::vector)](vector/erase.html "cpp/experimental/vector/erase") |  erases all elements equal to a specific value from a [std::vector](../container/vector.html "cpp/container/vector")   
(function template)  
[ erase_if (std::vector)](vector/erase_if.html "cpp/experimental/vector/erase if") |  erases all elements satisfying a predicate from a [std::vector](../container/vector.html "cpp/container/vector")   
(function template)  
Defined in header `[<experimental/forward_list>](https://en.cppreference.com/mwiki/index.php?title=cpp/header/experimental/forward_list&action=edit&redlink=1 "cpp/header/experimental/forward list \(page does not exist\)")`  
[ erase (std::forward_list)](forward_list/erase.html "cpp/experimental/forward list/erase") |  erases all elements equal to a specific value from a [std::forward_list](../container/forward_list.html "cpp/container/forward list")   
(function template)  
[ erase_if (std::forward_list)](forward_list/erase_if.html "cpp/experimental/forward list/erase if") |  erases all elements satisfying a predicate from a [std::forward_list](../container/forward_list.html "cpp/container/forward list")   
(function template)  
Defined in header `[<experimental/list>](https://en.cppreference.com/mwiki/index.php?title=cpp/header/experimental/list&action=edit&redlink=1 "cpp/header/experimental/list \(page does not exist\)")`  
[ erase (std::list)](list/erase.html "cpp/experimental/list/erase") |  erases all elements equal to a specific value from a [std::list](../container/list.html "cpp/container/list")   
(function template)  
[ erase_if (std::list)](list/erase_if.html "cpp/experimental/list/erase if") |  erases all elements satisfying a predicate from a [std::list](../container/list.html "cpp/container/list")   
(function template)  
Defined in header `[<experimental/map>](https://en.cppreference.com/mwiki/index.php?title=cpp/header/experimental/map&action=edit&redlink=1 "cpp/header/experimental/map \(page does not exist\)")`  
[ erase_if (std::map)](map/erase_if.html "cpp/experimental/map/erase if") |  erases all elements satisfying a predicate from a [std::map](../container/map.html "cpp/container/map")   
(function template)  
[ erase_if (std::multimap)](multimap/erase_if.html "cpp/experimental/multimap/erase if") |  erases all elements satisfying a predicate from a [std::multimap](../container/multimap.html "cpp/container/multimap")   
(function template)  
Defined in header `[<experimental/set>](https://en.cppreference.com/mwiki/index.php?title=cpp/header/experimental/set&action=edit&redlink=1 "cpp/header/experimental/set \(page does not exist\)")`  
[ erase_if (std::set)](set/erase_if.html "cpp/experimental/set/erase if") |  erases all elements satisfying a predicate from a [std::set](../container/set.html "cpp/container/set")   
(function template)  
[ erase_if (std::multiset)](multiset/erase_if.html "cpp/experimental/multiset/erase if") |  erases all elements satisfying a predicate from a [std::multiset](../container/multiset.html "cpp/container/multiset")   
(function template)  
Defined in header `[<experimental/unordered_map>](https://en.cppreference.com/mwiki/index.php?title=cpp/header/experimental/unordered_map&action=edit&redlink=1 "cpp/header/experimental/unordered map \(page does not exist\)")`  
[ erase_if (std::unordered_map)](unordered_map/erase_if.html "cpp/experimental/unordered map/erase if") |  erases all elements satisfying a predicate from a [std::unordered_map](../container/unordered_map.html "cpp/container/unordered map")   
(function template)  
[ erase_if (std::unordered_multimap)](unordered_multimap/erase_if.html "cpp/experimental/unordered multimap/erase if") |  erases all elements satisfying a predicate from a [std::unordered_multimap](../container/unordered_multimap.html "cpp/container/unordered multimap")   
(function template)  
Defined in header `[<experimental/unordered_set>](https://en.cppreference.com/mwiki/index.php?title=cpp/header/experimental/unordered_set&action=edit&redlink=1 "cpp/header/experimental/unordered set \(page does not exist\)")`  
[ erase_if (std::unordered_set)](unordered_set/erase_if.html "cpp/experimental/unordered set/erase if") |  erases all elements satisfying a predicate from a [std::unordered_set](../container/unordered_set.html "cpp/container/unordered set")   
(function template)  
[ erase_if (std::unordered_multiset)](unordered_multiset/erase_if.html "cpp/experimental/unordered multiset/erase if") |  erases all elements satisfying a predicate from a [std::unordered_multiset](../container/unordered_multiset.html "cpp/container/unordered multiset")   
(function template)  
  
### Source code information capture

Defined in header `[<experimental/source_location>](https://en.cppreference.com/mwiki/index.php?title=cpp/header/experimental/source_location&action=edit&redlink=1 "cpp/header/experimental/source location \(page does not exist\)")`  
---  
[ source_location](source_location.html "cpp/experimental/source location") |  a class representing information about the source code, such as file names, line numbers, and function names   
(class)  
  
### `std::array` conversion

Defined in header `[<experimental/array>](https://en.cppreference.com/mwiki/index.php?title=cpp/header/experimental/array&action=edit&redlink=1 "cpp/header/experimental/array \(page does not exist\)")`  
---  
[ to_array](to_array.html "cpp/experimental/to array") |  creates a [std::array](../container/array.html "cpp/container/array") object from a built-in array   
(function template) 
