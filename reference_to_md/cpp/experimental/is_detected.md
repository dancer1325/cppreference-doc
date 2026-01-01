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
**detection idiom**  
[uniform container erasure](lib_extensions_2.html#Uniform_container_erasure "cpp/experimental/lib extensions 2")  
[logical operator type traits](lib_extensions_2.html#Logical_operator_type_traits "cpp/experimental/lib extensions 2")  
  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/lib_extensions_2/navbar_content&action=edit)

Defined in header `[<experimental/type_traits>](https://en.cppreference.com/mwiki/index.php?title=cpp/header/experimental/type_traits&action=edit&redlink=1 "cpp/header/experimental/type traits \(page does not exist\)")` |  |   
---|---|---  
template< template<class...> class Op, class... Args >  
using is_detected = /* see below */; |  |  (library fundamentals TS v2)  
template< template<class...> class Op, class... Args >  
using detected_t = /* see below */; |  |  (library fundamentals TS v2)  
template< class Default, template<class...> class Op, class... Args >  
using detected_or = /* see below */; |  |  (library fundamentals TS v2)  
| |   
  
The alias template `detected_or` is an alias for an unspecified class type with two public member typedefs `value_t` and `type`, which are defined as follows: 

  * If the _template-id_ Op<Args...> denotes a valid type, then `value_t` is an alias for [std::true_type](../types/integral_constant.html "cpp/types/integral constant"), and `type` is an alias for Op<Args...>; 
  * Otherwise, `value_t` is an alias for [std::false_type](../types/integral_constant.html "cpp/types/integral constant") and `type` is an alias for `Default`. 



The alias template `is_detected` is equivalent to typename detected_or<[std::experimental::nonesuch](nonesuch.html), Op, Args...>::value_t. It is an alias for [std::true_type](../types/integral_constant.html "cpp/types/integral constant") if the _template-id_ Op<Args...> denotes a valid type; otherwise it is an alias for [std::false_type](../types/integral_constant.html "cpp/types/integral constant"). 

The alias template `detected_t` is equivalent to typename detected_or<[std::experimental::nonesuch](nonesuch.html), Op, Args...>::type. It is an alias for Op<Args...> if that _template-id_ denotes a valid type; otherwise it is an alias for the class [`std::experimental::nonesuch`](nonesuch.html "cpp/experimental/nonesuch"). 

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/is_detected&action=edit&section=1 "Edit section: Additional utilities")] Additional utilities

template< template<class...> class Op, class... Args >  
constexpr bool is_detected_v = is_detected<Op, Args...>::value; |  |  (library fundamentals TS v2)  
---|---|---  
template< template<class...> class Op, class... Args >  
constexpr inline bool is_detected_v = is_detected<Op, Args...>::value; |  |  (library fundamentals TS v3)  
template< class Default, template<class...> class Op, class... Args >  
using detected_or_t = typename detected_or<Default, Op, Args...>::type; |  |  (library fundamentals TS v2)  
template< class Expected, template<class...> class Op, class... Args >  
using is_detected_exact = [std::is_same](../types/is_same.html)<Expected, detected_t<Op, Args...>>; |  |  (library fundamentals TS v2)  
template< class Expected, template<class...> class Op, class... Args >  
constexpr bool is_detected_exact_v =  
is_detected_exact<Expected, Op, Args...>::value; |  |  (library fundamentals TS v2)  
template< class Expected, template<class...> class Op, class... Args >  
constexpr inline bool is_detected_exact_v =  
is_detected_exact<Expected, Op, Args...>::value; |  |  (library fundamentals TS v3)  
template< class To, template<class...> class Op, class... Args >  
using is_detected_convertible =  
[std::is_convertible](../types/is_convertible.html)<detected_t<Op, Args...>, To>; |  |  (library fundamentals TS v2)  
template< class To, template<class...> class Op, class... Args >  
constexpr bool is_detected_convertible_v =  
is_detected_convertible<To, Op, Args...>::value; |  |  (library fundamentals TS v2)  
template< class To, template<class...> class Op, class... Args >  
constexpr inline bool is_detected_convertible_v =  
is_detected_convertible<To, Op, Args...>::value; |  |  (library fundamentals TS v3)  
| |   
  
The alias template `is_detected_exact` checks whether detected_t<Op, Args...> is `Expected`. 

The alias template `is_detected_convertible` checks whether detected_t<Op, Args...> is convertible to `To`. 

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/is_detected&action=edit&section=2 "Edit section: Possible implementation")] Possible implementation
    
    
    namespace detail
    {
        template<class Default, class AlwaysVoid, template<class...> class Op, class... Args>
        struct detector
        {
            using value_t = [std::false_type](../types/integral_constant.html);
            using type = Default;
        };
     
        template<class Default, template<class...> class Op, class... Args>
        struct detector<Default, [std::void_t](../types/void_t.html)<Op<Args...>>, Op, Args...>
        {
            using value_t = [std::true_type](../types/integral_constant.html);
            using type = Op<Args...>;
        };
    } // namespace detail
     
    template<template<class...> class Op, class... Args>
    using is_detected = typename detail::detector<nonesuch, void, Op, Args...>::value_t;
     
    template<template<class...> class Op, class... Args>
    using detected_t = typename detail::detector<nonesuch, void, Op, Args...>::type;
     
    template<class Default, template<class...> class Op, class... Args>
    using detected_or = detail::detector<Default, void, Op, Args...>;

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/is_detected&action=edit&section=3 "Edit section: Example")] Example

Run this code
    
    
    #include <cstddef>
    #include <experimental/type_traits>
     
    template<class T>
    using copy_assign_t = decltype([std::declval](../utility/declval.html)<T&>() = [std::declval](../utility/declval.html)<const T&>());
     
    struct Meow {};
    struct Purr { void operator=(const Purr&) = delete; };
     
    static_assert(std::experimental::is_detected<copy_assign_t, Meow>::value,
                  "Meow should be copy assignable!");
    static_assert(!std::experimental::is_detected_v<copy_assign_t, Purr>,
                  "Purr should not be copy assignable!");
    static_assert(std::experimental::is_detected_exact_v<Meow&, copy_assign_t, Meow>,
                  "Copy assignment of Meow should return Meow&!");
     
    template<class T>
    using diff_t = typename T::difference_type;
     
    template<class Ptr>
    using difference_type = std::experimental::detected_or_t<[std::ptrdiff_t](../types/ptrdiff_t.html), diff_t, Ptr>;
     
    struct Woof { using difference_type = int; };
    struct Bark {};
     
    static_assert([std::is_same](../types/is_same.html)<difference_type<Woof>, int>::value,
                  "Woof's difference_type should be int!");
    static_assert([std::is_same](../types/is_same.html)<difference_type<Bark>, [std::ptrdiff_t](../types/ptrdiff_t.html)>::value,
                  "Bark's difference_type should be ptrdiff_t!");
     
    int main() {}
