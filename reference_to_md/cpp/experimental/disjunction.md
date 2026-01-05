[C++](../../cpp.html "cpp")

[Compiler support](../compiler_support.html "cpp/compiler support")  
---  
[Freestanding and hosted](../freestanding.html "cpp/freestanding")  
[Language](../language.html "cpp/language")  
[Standard library](../standard_library.html "cpp/standard library")  
[Standard library headers](../headers.html "cpp/header")  
[Named requirements](../iterator/concepts.html "cpp/named req")  
[Feature test macros](feature_test.html "cpp/feature test") (C++20)  
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
[Execution control library](execution.html "cpp/execution") (C++26)  
[Technical specifications](../experimental.html "cpp/experimental")  
[Symbols index](../symbol_index.html "cpp/symbol index")  
[External libraries](../links/libs.html "cpp/links/libs")  
  


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
  


[Library fundamentals v2](lib_extensions_2.html "cpp/experimental/lib extensions 2")

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
  


![](https://upload.cppreference.com/mwiki/images/3/31/Imbox_notice.png) |  **Merged into ISO C++** The functionality described on this page was merged into the mainline ISO C++ standard as of 2/2016, see [`std::disjunction`](../types/disjunction.html "cpp/types/disjunction") (since C++17)  
---|---  
Defined in header `[<experimental/type_traits>](https://en.cppreference.com/mwiki/index.php?title=cpp/header/experimental/type_traits&action=edit&redlink=1 "cpp/header/experimental/type traits \(page does not exist\)")` |  |   
---|---|---  
template< class... B >  
struct disjunction; |  |  (library fundamentals TS v2)  
| |   
  
Forms the [logical disjunction](https://en.wikipedia.org/wiki/Logical_disjunction) of the type traits `B...`, effectively performing a logical or on the sequence of traits. 

The specialization std::experimental::disjunction<B1, ..., BN> has a public and unambiguous base that is 

  * if sizeof...(B) == 0, [std::false_type](../types/integral_constant.html); otherwise 
  * the first type `Bi` in `B1, ..., BN` for which bool(Bi::value) == true, or `BN` if there is no such type. 



The member names of the base class, other than `disjunction` and `operator=`, are not hidden and are unambiguously available in `disjunction`. 

Disjunction is short-circuiting: if there is a template type argument `Bi` with bool(Bi::value) != false, then instantiating disjunction<B1, ..., BN>::value does not require the instantiation of Bj::value for `j > i`. 

## Contents

  * [1 Template parameters](disjunction.html#Template_parameters)
  * [2 Helper variable template](disjunction.html#Helper_variable_template)
  * [3 Possible implementation](disjunction.html#Possible_implementation)
  * [4 Notes](disjunction.html#Notes)
  * [5 Example](disjunction.html#Example)
  * [6 See also](disjunction.html#See_also)

  
---  
  
### Template parameters

B...  |  \-  |  every template argument `Bi` for which Bi::value is instantiated must be usable as a base class and define member `value` that is convertible to bool  
---|---|---  
  
### Helper variable template 

template< class... B >  
constexpr bool disjunction_v = disjunction<B...>::value; |  |  (library fundamentals TS v2)  
---|---|---  
| |   
  
### Possible implementation
    
    
    template<class...> struct disjunction : [std::false_type](../types/integral_constant.html) {};
    template<class B1> struct disjunction<B1> : B1 {};
    template<class B1, class... Bn>
    struct disjunction<B1, Bn...> 
        : [std::conditional_t](../types/conditional.html)<bool(B1::value), B1, disjunction<Bn...>>  {};  
  
---  
  
### Notes

A specialization of `disjunction` does not necessarily inherit from of either [std::true_type](../types/integral_constant.html) or [std::false_type](../types/integral_constant.html): it simply inherits from the first `B` whose `::value`, explicitly converted to `bool`, is true, or from the very last B when all of them convert to false. For example, disjunction<[std::integral_constant](../types/integral_constant.html)<int, 2>, [std::integral_constant](../types/integral_constant.html)<int, 4>>::value is 2. 

### Example

| This section is incomplete  
Reason: no example   
---|---  
  
### See also

[ disjunction](../types/disjunction.html "cpp/types/disjunction")(C++17) |  variadic logical OR metafunction   
(class template)   
---|---
