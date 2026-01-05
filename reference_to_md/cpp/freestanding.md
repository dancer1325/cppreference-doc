[C++](../cpp.html "cpp")

[Compiler support](compiler_support.html "cpp/compiler support")  
---  
**Freestanding and hosted**  
[Language](language.html "cpp/language")  
[Standard library](standard_library.html "cpp/standard library")  
[Standard library headers](headers.html "cpp/header")  
[Named requirements](iterator/concepts.html "cpp/named req")  
[Feature test macros](experimental/feature_test.html "cpp/feature test") (C++20)  
[Language support library](utility.html#Language_support "cpp/utility")  
[Concepts library](concepts.html "cpp/concepts") (C++20)  
[Diagnostics library](error.html "cpp/error")  
[Memory management library](memory.html "cpp/memory")  
[Metaprogramming library](meta.html "cpp/meta") (C++11)  
[General utilities library](utility.html "cpp/utility")  
[Containers library](container.html "cpp/container")  
[Iterators library](iterator.html "cpp/iterator")  
[Ranges library](ranges.html "cpp/ranges") (C++20)  
[Algorithms library](algorithm.html "cpp/algorithm")  
[Strings library](string.html "cpp/string")  
[Text processing library](text.html "cpp/text")  
[Numerics library](numeric.html "cpp/numeric")  
[Date and time library](chrono.html "cpp/chrono")  
[Input/output library](io.html "cpp/io")  
[Filesystem library](filesystem.html "cpp/filesystem") (C++17)  
[Concurrency support library](atomic.html "cpp/thread") (C++11)  
[Execution control library](experimental/execution.html "cpp/execution") (C++26)  
[Technical specifications](experimental.html "cpp/experimental")  
[Symbols index](symbol_index.html "cpp/symbol index")  
[External libraries](links/libs.html "cpp/links/libs")  
  


There are two kinds of implementations defined by the C++ standard: _**hosted**_ and _**freestanding**_ implementations. For _hosted_ implementations, the set of standard library headers required by the C++ standard is much larger than for _freestanding_ ones. In a _freestanding_ implementation, execution may happen without an operating system. 

The kind of the implementation is implementation-defined. The predefined macro `__STDC_HOSTED__` is expanded to 1 for hosted implementations and ​0​ for freestanding implementations.(since C++11)

| 

## Contents

  * [1 Requirements on multi-threaded executions and data races](freestanding.html#Requirements_on_multi-threaded_executions_and_data_races)
  * [2 Requirements on the main function](freestanding.html#Requirements_on_the_main_function)
  * [3 Requirements on standard library headers](freestanding.html#Requirements_on_standard_library_headers)
    * [3.1 Headers required for a freestanding implementation](freestanding.html#Headers_required_for_a_freestanding_implementation)
  * [4 Notes](freestanding.html#Notes)
  * [5 References](freestanding.html#References)
  * [6 Defect reports](freestanding.html#Defect_reports)
  * [7 See also](freestanding.html#See_also)

  
---  
  
###  Requirements on [multi-threaded executions and data races](language/memory_model.html "cpp/language/memory model")

_freestanding_ |  _hosted_  
---|---  
Under a _freestanding_ implementation, it is implementation-defined whether a program can have more than one [thread of execution](atomic.html "cpp/thread").  |  Under a _hosted_ implementation, a C++ program can have more than one [thread](atomic.html "cpp/thread") running concurrently.   
(since C++11)  
  
### Requirements on the [`main`](language/main_function.html "cpp/language/main function") function

_freestanding_ |  _hosted_  
---|---  
In a _freestanding_ implementation, it is implementation-defined whether a program is required to define a [`main`](language/main_function.html "cpp/language/main function") function. Start-up and termination is implementation-defined; start-up contains the execution of [constructors](language/initializer_list.html "cpp/language/constructor") for objects of [namespace scope](language/scope.html#Namespace_scope "cpp/language/scope") with static storage duration; termination contains the execution of [destructors](language/destructor.html "cpp/language/destructor") for objects with static [storage duration](language/storage_duration.html "cpp/language/storage duration").  |  In a _hosted_ implementation, a program must contain a global function called [`main`](language/main_function.html "cpp/language/main function"). Executing a program starts a main [thread of execution](atomic.html "cpp/thread") in which the `main` function is invoked, and in which variables of static [storage duration](language/storage_duration.html "cpp/language/storage duration") might be initialized and destroyed.   
  
### Requirements on [standard library headers](headers.html "cpp/header")

A _freestanding_ implementation has an implementation-defined set of headers. This set includes at least the headers in the following table. 

For partially freestanding headers, freestanding implementations only needs to provide part of the entities in the corresponding synopsis: 

  * If an entity is commented // freestanding, it is guaranteed to be provided. 



  * If an entity (function or function template) is commented // freestanding-deleted, it is guaranteed to be either provided or deleted. 

| (since C++26)  
---|---  
  
  * If an entity is declared in a header whose synopsis begins with all freestanding or // mostly freestanding, it is guaranteed to be provided if the entity itself is not commented. 



#### Headers required for a freestanding implementation

Library  | Component  | Headers  |  Freestanding   
---|---|---|---  
[Language support](utility.html#Language_support "cpp/utility") | Common definitions  | [`<cstddef>`](header/cstddef.html "cpp/header/cstddef") | All   
C standard library  | [`<cstdlib>`](header/cstdlib.html "cpp/header/cstdlib") | Partial   
Implementation properties  | [`<cfloat>`](header/cfloat.html "cpp/header/cfloat")  
[`<climits>`](header/climits.html "cpp/header/climits") (since C++11)  
[`<limits>`](header/limits.html "cpp/header/limits")  
[`<version>`](header/version.html "cpp/header/version") (since C++20) | All   
Integer types  | [`<cstdint>`](header/cstdint.html "cpp/header/cstdint") (since C++11) | All   
Dynamic memory management  | [`<new>`](header/new.html "cpp/header/new") | All   
Type identification  | [`<typeinfo>`](header/typeinfo.html "cpp/header/typeinfo") | All   
Source location  | [`<source_location>`](header/source_location.html "cpp/header/source location") (since C++20) | All   
Exception handling  | [`<exception>`](header/exception.html "cpp/header/exception") | All   
Initializer lists  | [`<initializer_list>`](header/initializer_list.html "cpp/header/initializer list") (since C++11) | All   
Comparisons  | [`<compare>`](header/compare.html "cpp/header/compare") (since C++20) | All   
Coroutines support  | [`<coroutine>`](header/coroutine.html "cpp/header/coroutine") (since C++20) | All   
Other runtime support  | [`<cstdarg>`](header/cstdarg.html "cpp/header/cstdarg") | All   
Debugging support  | [`<debugging>`](header/debugging.html "cpp/header/debugging") (since C++26) | All   
[Concepts](concepts.html "cpp/concepts") | [`<concepts>`](header/concepts.html "cpp/header/concepts") (since C++20) | All   
[Diagnostics](error.html "cpp/error") | Error numbers  | [`<cerrno>`](header/cerrno.html "cpp/header/cerrno") (since C++26) | Partial   
System error support  | [`<system_error>`](header/system_error.html "cpp/header/system error") (since C++26) | Partial   
[Memory management](memory.html "cpp/memory") | Memory  | [`<memory>`](header/memory.html "cpp/header/memory") (since C++23) | Partial   
[Metaprogramming](meta.html "cpp/meta") | Type traits  | [`<type_traits>`](header/type_traits.html "cpp/header/type traits") (since C++11) | All   
Compile-time rational arithmetic  | [`<ratio>`](header/ratio.html "cpp/header/ratio") (since C++23) | All   
[General utilities](utility.html#General-purpose_utilities "cpp/utility") | Utility components  | [`<utility>`](header/utility.html "cpp/header/utility") (since C++23) | All   
Tuples  | [`<tuple>`](header/tuple.html "cpp/header/tuple") (since C++23) | All   
Function objects  | [`<functional>`](header/functional.html "cpp/header/functional") (since C++20) | Partial   
Primitive numeric conversions  | [`<charconv>`](header/charconv.html "cpp/header/charconv") (since C++26) | Partial   
Bit manipulation  | [`<bit>`](header/bit.html "cpp/header/bit") (since C++20) | All   
[Strings](string.html "cpp/string") | String classes  | [`<string>`](header/string.html "cpp/header/string") (since C++26) | Partial   
Null-terminated  
sequence utilities  | [`<cstring>`](header/cstring.html "cpp/header/cstring") (since C++26) | Partial   
[Text processing](text.html "cpp/text") | Null-terminated  
sequence utilities  | [`<cwchar>`](header/cwchar.html "cpp/header/cwchar") (since C++26) | Partial   
[Iterators](iterator.html "cpp/iterator") | [`<iterator>`](header/iterator.html "cpp/header/iterator") (since C++23) | Partial   
[Ranges](ranges.html "cpp/ranges") | [`<ranges>`](header/ranges.html "cpp/header/ranges") (since C++23) | Partial   
[Numerics](numeric.html "cpp/numeric") | Mathematical functions  
for floating-point types  | [`<cmath>`](header/cmath.html "cpp/header/cmath") (since C++26) | Partial   
Random number generation  | [`<random>`](header/random.html "cpp/header/random") (since C++26) | Partial   
[Concurrency support](atomic.html "cpp/thread") | Atomics  | [`<atomic>`](header/atomic.html "cpp/header/atomic") (since C++11) |  All[[1]](freestanding.html#cite_note-1)  
[Execution control](experimental/execution.html "cpp/execution") | [`<execution>`](header/execution.html "cpp/header/execution") (since C++26) | Partial   
**Deprecated** headers  | [`<ciso646>`](header/ciso646.html "cpp/header/ciso646") (until C++20)  
[`<cstdalign>`](header/cstdalign.html "cpp/header/cstdalign") (since C++11)(until C++20)   
[`<cstdbool>`](header/cstdbool.html "cpp/header/cstdbool") (since C++11)(until C++20) | All   
  
  1. [↑](freestanding.html#cite_ref-1) Support for always lock-free integral atomic types and presence of type aliases [std::atomic_signed_lock_free](atomic/atomic.html "cpp/atomic/atomic") and [std::atomic_unsigned_lock_free](atomic/atomic.html "cpp/atomic/atomic") are implementation-defined in a freestanding implementation.(since C++20)



### Notes

Some compiler vendors may not fully support freestanding implementation. For example, GCC libstdc++ has had implementation and build issues before version 13, while LLVM libcxx and MSVC STL do not support freestanding. 

In C++23, many features are made freestanding with partial headers. However, it is still up for discussion in WG21 whether some headers will be made freestanding in the future standards. Regardless, containers like [vector](container/vector.html "cpp/container/vector"), [list](container/list.html "cpp/container/list"), [deque](container/deque.html "cpp/container/deque"), and [map](container/map.html "cpp/container/map") will never be freestanding due to their dependencies on exceptions and heap. 

GCC 13 provides more headers, such as [`<optional>`](header/optional.html "cpp/header/optional"), [`<span>`](header/span.html "cpp/header/span"), [`<array>`](header/array.html "cpp/header/array"), and [`<bitset>`](header/bitset.html "cpp/header/bitset"), for freestanding, although these headers may not be portable or provide the same capabilities as a hosted implementation. It is better to avoid using them in a freestanding environment, even if the toolchain provides them. 

[Feature-test](utility/feature_test.html "cpp/utility/feature test") macro  | Value | Std | Feature   
---|---|---|---  
[`__cpp_lib_freestanding_feature_test_macros`](experimental/feature_test.html#cpp_lib_freestanding_feature_test_macros "cpp/feature test") | [`202306L`](compiler_support/26.html#cpp_lib_freestanding_feature_test_macros_202306L "cpp/compiler support/26") | (C++26) | freestanding feature test macros   
[`__cpp_lib_freestanding_algorithm`](experimental/feature_test.html#cpp_lib_freestanding_algorithm "cpp/feature test") | [`202311L`](compiler_support/26.html#cpp_lib_freestanding_algorithm_202311L "cpp/compiler support/26") | (C++26) | freestanding [`<algorithm>`](header/algorithm.html "cpp/header/algorithm")  
[`202502L`](compiler_support/26.html#cpp_lib_freestanding_algorithm_202502L "cpp/compiler support/26") | (C++26) | more freestanding facilities in [`<algorithm>`](header/algorithm.html "cpp/header/algorithm")  
[`__cpp_lib_freestanding_array`](experimental/feature_test.html#cpp_lib_freestanding_array "cpp/feature test") | [`202311L`](compiler_support/26.html#cpp_lib_freestanding_array_202311L "cpp/compiler support/26") | (C++26) | freestanding [`<array>`](header/array.html "cpp/header/array")  
[`__cpp_lib_freestanding_char_traits`](experimental/feature_test.html#cpp_lib_freestanding_char_traits "cpp/feature test") | [`202306L`](compiler_support/26.html#cpp_lib_freestanding_char_traits_202306L "cpp/compiler support/26") | (C++26) | freestanding [std::char_traits](string/char_traits.html "cpp/string/char traits")  
[`__cpp_lib_freestanding_charconv`](experimental/feature_test.html#cpp_lib_freestanding_charconv "cpp/feature test") | [`202306L`](compiler_support/26.html#cpp_lib_freestanding_charconv_202306L "cpp/compiler support/26") | (C++26) | freestanding [`<charconv>`](header/charconv.html "cpp/header/charconv")  
[`__cpp_lib_freestanding_cstdlib`](experimental/feature_test.html#cpp_lib_freestanding_cstdlib "cpp/feature test") | [`202306L`](compiler_support/26.html#cpp_lib_freestanding_cstdlib_202306L "cpp/compiler support/26") | (C++26) | freestanding [`<cstdlib>`](header/cstdlib.html "cpp/header/cstdlib")  
[`__cpp_lib_freestanding_cstring`](experimental/feature_test.html#cpp_lib_freestanding_cstring "cpp/feature test") | [`202311L`](compiler_support/26.html#cpp_lib_freestanding_cstring_202311L "cpp/compiler support/26") | (C++26) | freestanding [`<cstring>`](header/cstring.html "cpp/header/cstring")  
[`__cpp_lib_freestanding_cwchar`](experimental/feature_test.html#cpp_lib_freestanding_cwchar "cpp/feature test") | [`202306L`](compiler_support/26.html#cpp_lib_freestanding_cwchar_202306L "cpp/compiler support/26") | (C++26) | freestanding [`<cwchar>`](header/cwchar.html "cpp/header/cwchar")  
[`__cpp_lib_freestanding_errc`](experimental/feature_test.html#cpp_lib_freestanding_errc "cpp/feature test") | [`202306L`](compiler_support/26.html#cpp_lib_freestanding_errc_202306L "cpp/compiler support/26") | (C++26) | freestanding [std::errc](error/errc.html "cpp/error/errc")  
[`__cpp_lib_freestanding_execution`](experimental/feature_test.html#cpp_lib_freestanding_execution "cpp/feature test") | [`202502L`](compiler_support/26.html#cpp_lib_freestanding_execution_202502L "cpp/compiler support/26") | (C++26) | freestanding [`<execution>`](header/execution.html "cpp/header/execution")  
[`__cpp_lib_freestanding_expected`](experimental/feature_test.html#cpp_lib_freestanding_expected "cpp/feature test") | [`202311L`](compiler_support/26.html#cpp_lib_freestanding_expected_202311L "cpp/compiler support/26") | (C++26) | freestanding [`<expected>`](header/expected.html "cpp/header/expected")  
[`__cpp_lib_freestanding_functional`](experimental/feature_test.html#cpp_lib_freestanding_functional "cpp/feature test") | [`202306L`](compiler_support/26.html#cpp_lib_freestanding_functional_202306L "cpp/compiler support/26") | (C++26) | freestanding [`<functional>`](header/functional.html "cpp/header/functional")  
[`__cpp_lib_freestanding_iterator`](experimental/feature_test.html#cpp_lib_freestanding_iterator "cpp/feature test") | [`202306L`](compiler_support/26.html#cpp_lib_freestanding_iterator_202306L "cpp/compiler support/26") | (C++26) | freestanding [`<iterator>`](header/iterator.html "cpp/header/iterator")  
[`__cpp_lib_freestanding_mdspan`](experimental/feature_test.html#cpp_lib_freestanding_mdspan "cpp/feature test") | [`202311L`](compiler_support/26.html#cpp_lib_freestanding_mdspan_202311L "cpp/compiler support/26") | (C++26) | freestanding [`<mdspan>`](header/mdspan.html "cpp/header/mdspan")  
[`__cpp_lib_freestanding_memory`](experimental/feature_test.html#cpp_lib_freestanding_memory "cpp/feature test") | [`202306L`](compiler_support/26.html#cpp_lib_freestanding_memory_202306L "cpp/compiler support/26") | (C++26) | freestanding [`<memory>`](header/memory.html "cpp/header/memory")  
[`202502L`](compiler_support/26.html#cpp_lib_freestanding_memory_202502L "cpp/compiler support/26") | (C++26) | more freestanding facilities in [`<memory>`](header/memory.html "cpp/header/memory")  
[`__cpp_lib_freestanding_numeric`](experimental/feature_test.html#cpp_lib_freestanding_numeric "cpp/feature test") | [`202311L`](compiler_support/26.html#cpp_lib_freestanding_numeric_202311L "cpp/compiler support/26") | (C++26) | freestanding [`<numeric>`](header/numeric.html "cpp/header/numeric")  
[`202502L`](compiler_support/26.html#cpp_lib_freestanding_numeric_202502L "cpp/compiler support/26") | (C++26) | more freestanding facilities in [`<numeric>`](header/numeric.html "cpp/header/numeric")  
[`__cpp_lib_freestanding_optional`](experimental/feature_test.html#cpp_lib_freestanding_optional "cpp/feature test") | [`202311L`](compiler_support/26.html#cpp_lib_freestanding_optional_202311L "cpp/compiler support/26") | (C++26) | freestanding [`<optional>`](header/optional.html "cpp/header/optional")  
[`__cpp_lib_freestanding_random`](experimental/feature_test.html#cpp_lib_freestanding_random "cpp/feature test") | [`202502L`](compiler_support/26.html#cpp_lib_freestanding_random_202502L "cpp/compiler support/26") | (C++26) | freestanding [`<random>`](header/random.html "cpp/header/random")  
[`__cpp_lib_freestanding_ranges`](experimental/feature_test.html#cpp_lib_freestanding_ranges "cpp/feature test") | [`202306L`](compiler_support/26.html#cpp_lib_freestanding_ranges_202306L "cpp/compiler support/26") | (C++26) | freestanding [`<ranges>`](header/ranges.html "cpp/header/ranges")  
[`__cpp_lib_freestanding_ratio`](experimental/feature_test.html#cpp_lib_freestanding_ratio "cpp/feature test") | [`202306L`](compiler_support/26.html#cpp_lib_freestanding_ratio_202306L "cpp/compiler support/26") | (C++26) | freestanding [`<ratio>`](header/ratio.html "cpp/header/ratio")  
[`__cpp_lib_freestanding_string_view`](experimental/feature_test.html#cpp_lib_freestanding_string_view "cpp/feature test") | [`202311L`](compiler_support/26.html#cpp_lib_freestanding_string_view_202311L "cpp/compiler support/26") | (C++26) | freestanding [`<string_view>`](header/string_view.html "cpp/header/string view")  
[`__cpp_lib_freestanding_tuple`](experimental/feature_test.html#cpp_lib_freestanding_tuple "cpp/feature test") | [`202306L`](compiler_support/26.html#cpp_lib_freestanding_tuple_202306L "cpp/compiler support/26") | (C++26) | freestanding [`<tuple>`](header/tuple.html "cpp/header/tuple")  
[`__cpp_lib_freestanding_utility`](experimental/feature_test.html#cpp_lib_freestanding_utility "cpp/feature test") | [`202306L`](compiler_support/26.html#cpp_lib_freestanding_utility_202306L "cpp/compiler support/26") | (C++26) | freestanding [`<utility>`](header/utility.html "cpp/header/utility")  
[`__cpp_lib_freestanding_variant`](experimental/feature_test.html#cpp_lib_freestanding_variant "cpp/feature test") | [`202311L`](compiler_support/26.html#cpp_lib_freestanding_variant_202311L "cpp/compiler support/26") | (C++26) | freestanding [`<variant>`](header/variant.html "cpp/header/variant")  
  
### References

  * C++23 standard (ISO/IEC 14882:2024): 



    

  * 4.1 Implementation compliance [intro.compliance] (p: 10) 



    

  * 6.9.2 Multi-threaded executions and data races [intro.multithread] (p: 84) 



    

  * 6.9.3.1 main function [basic.start.main] (p: 89) 



    

  * 16.4.2.5 Freestanding implementations [compliance] (p: 483) 



  * C++20 standard (ISO/IEC 14882:2020): 



    

  * 4.1 Implementation compliance [intro.compliance] (p: 7) 



    

  * 6.9.2 Multi-threaded executions and data races [intro.multithread] (p: 77) 



    

  * 6.9.3.1 main function [basic.start.main] (p: 82) 



    

  * 16.5.1.3 Freestanding implementations [compliance] (p: 470) 



  * C++17 standard (ISO/IEC 14882:2017): 



    

  * 4.1 Implementation compliance [intro.compliance] (p: 5) 



    

  * 4.7 Multi-threaded executions and data races [intro.multithread] (p: 15) 



    

  * 6.6.1 main function [basic.start.main] (p: 66) 



    

  * 20.5.1.3 Freestanding implementations [compliance] (p: 458) 



  * C++14 standard (ISO/IEC 14882:2014): 



    

  * 1.4 Implementation compliance [intro.compliance] (p: 5) 



    

  * 1.10 Multi-threaded executions and data races [intro.multithread] (p: 11) 



    

  * 3.6.1 Main function [basic.start.main] (p: 62) 



    

  * 17.6.1.3 Freestanding implementations [compliance] (p: 441) 



  * C++11 standard (ISO/IEC 14882:2011): 



    

  * 1.4 Implementation compliance [intro.compliance] (p: 5) 



    

  * 1.10 Multi-threaded executions and data races [intro.multithread] (p: 11) 



    

  * 3.6.1 Main function [basic.start.main] (p: 58) 



    

  * 17.6.1.3 Freestanding implementations [compliance] (p: 408) 



  * C++03 standard (ISO/IEC 14882:2003): 



    

  * 1.4 Implementation compliance [intro.compliance] (p: 3) 



    

  * 3.6.1 Main function [basic.start.main] (p: 43) 



    

  * 17.4.1.3 Freestanding implementations [lib.compliance] (p: 326) 



### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[CWG 1938](https://cplusplus.github.io/CWG/issues/1938.html) | C++98  | an implementation did not need  
to document whether it is hosted  | made the implementation kind implementation-  
defined (thus requires a documentation)   
[LWG 3653](https://cplusplus.github.io/LWG/issue3653)  
([P1642R11](https://wg21.link/P1642R11))  | C++20  | [`<coroutine>`](header/coroutine.html "cpp/header/coroutine") is freestanding, but  
uses [std::hash](utility/hash.html "cpp/utility/hash") which was not  | made [`<functional>`](header/functional.html "cpp/header/functional") being  
partially freestanding   
  
### See also

[C documentation](../c/language/conformance.html "c/language/conformance") for Conformance  
---
  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
