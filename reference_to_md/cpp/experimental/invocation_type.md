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
  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/navbar_content&action=edit)

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
  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/navbar_content&action=edit)

[Library fundamentals](memory.html "cpp/experimental/lib extensions")

[experimental::optional](optional.html "cpp/experimental/optional")  
---  
[experimental::any](any.html "cpp/experimental/any")  
[experimental::basic_string_view](basic_string_view.html "cpp/experimental/basic string view")  
[experimental::sample](sample.html "cpp/experimental/sample")  
[experimental::shared_ptr](shared_ptr.html "cpp/experimental/shared ptr")  
[experimental::weak_ptr](weak_ptr.html "cpp/experimental/weak ptr")  
[experimental::apply](apply.html "cpp/experimental/apply")  
**experimental::invocation_type experimental::raw_invocation_type**  
[experimental::search](search.html "cpp/experimental/search")  
[experimental::default_searcherexperimental::make_default_searcher](default_searcher.html "cpp/experimental/default searcher")  
[experimental::boyer_moore_searcherexperimental::make_boyer_moore_searcher](boyer_moore_searcher.html "cpp/experimental/boyer moore searcher")  
[experimental::boyer_moore_horspool_searcherexperimental::make_boyer_moore_horspool_searcher](boyer_moore_horspool_searcher.html "cpp/experimental/boyer moore horspool searcher")  
[Type-erased and polymorphic allocators](memory.html "cpp/experimental/memory")  
[Variable templates for type traits](type_trait_variable_templates.html "cpp/experimental/type trait variable templates")  
  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/lib_extensions/navbar_content&action=edit)

Defined in header `[<experimental/type_traits>](https://en.cppreference.com/mwiki/index.php?title=cpp/header/experimental/type_traits&action=edit&redlink=1 "cpp/header/experimental/type traits \(page does not exist\)")` |  |   
---|---|---  
template< class >  
struct raw_invocation_type; //undefined  
  
template< class Fn, class... ArgTypes >  
struct raw_invocation_type<Fn(ArgTypes...)>; |  (1)  |  (library fundamentals TS)  
template< class >  
struct invocation_type; //undefined  
  
template< class Fn, class... ArgTypes >  
struct invocation_type<Fn(ArgTypes...)>; |  (2)  |  (library fundamentals TS)  
| |   
  
Computes the _invocation parameters_ when `Fn` is called with the arguments `ArgTypes...`, as in INVOKE([std::declval](../utility/declval.html)<Fn>(), [std::declval](../utility/declval.html)<ArgTypes>()...), where INVOKE is the operation defined in [Callable](../named_req/Callable.html "cpp/named req/Callable"). 

The _invocation parameters_ of the expression INVOKE(f, t1, t2, ..., tN) is defined as follows, where `T1` is the (possibly cv-qualified) type of `t1` and `U1` is `T1&` if `t1` is an lvalue and `T1&&` otherwise: 

  * If `f` is a pointer to a member function of a class `T`, then the invocation parameters are `U1` followed by the parameters of `f` matched by `t2, ..., tN`. 
  * If `N == 1` and `f` is a pointer to member data of a class `T`, then the invocation parameter is `U1`. 
  * If `f` is an object of class type, the invocation parameters are the parameters matching `t1, ..., tN` of the best viable function for the arguments `t1, ..., tN` among the function call operators and surrogate call functions of `f`. 
  * In all other cases, the invocations parameters are the parameters of `f` matching `t1, ..., tN`. 



If an argument `tI` matches an ellipsis in the function's parameter list, the corresponding invocation parameter is the result of applying the default argument promotions to `tI`. 

`Fn` and all types in `ArgTypes` can be any complete type, array of unknown bound, or (possibly cv-qualified) `void`. 

## Contents

  * [1 Member types](invocation_type.html#Member_types)
  * [2 Helper types](invocation_type.html#Helper_types)
  * [3 Example](invocation_type.html#Example)
  * [4 See also](invocation_type.html#See_also)

  
---  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/invocation_type&action=edit&section=1 "Edit section: Member types")] Member types

Member type  |  Definition   
---|---  
raw_invocation_type<Fn(ArgTypes...)>::type |  R(T1, T2, ...), where: 

  * `R` is [std::result_of_t](../types/result_of.html)<Fn(ArgTypes...)>. 
  * `T1, T2, ...` are the _invocation parameters_ of INVOKE([std::declval](../utility/declval.html)<Fn>(), [std::declval](../utility/declval.html)<ArgTypes>()...) as defined above. 

Only defined if `Fn` can be called with the arguments `ArgTypes...` in unevaluated context.   
invocation_type<Fn(ArgTypes...)>::type |  R(U1, U2, ...), where 

  * `R` is [std::result_of_t](../types/result_of.html)<Fn(ArgTypes...)>. 
  * `T1, T2, ...` are the _invocation parameters_ of INVOKE([std::declval](../utility/declval.html)<Fn>(), [std::declval](../utility/declval.html)<ArgTypes>()...) as defined above. 
  * `A1, A2, ...` denotes `ArgTypes...`
  * `Ui` is [std::decay_t](../types/decay.html)<Ai> if [std::declval](../utility/declval.html)<Ai>() is an rvalue and `Ti` otherwise. 

Only defined if `Fn` can be called with the arguments `ArgTypes...` in unevaluated context.   
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/invocation_type&action=edit&section=2 "Edit section: Helper types")] Helper types

template< class T >  
using raw_invocation_type_t = typename raw_invocation_type<T>::type; |  |  (library fundamentals TS)  
---|---|---  
template< class T >  
using invocation_type_t = typename invocation_type<T>::type; |  |  (library fundamentals TS)  
| |   
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/invocation_type&action=edit&section=3 "Edit section: Example")] Example

| This section is incomplete  
Reason: no example   
---|---  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/invocation_type&action=edit&section=4 "Edit section: See also")] See also

[C++ documentation](reflect.html "cpp/experimental/reflect") for Reflection TS  
---
