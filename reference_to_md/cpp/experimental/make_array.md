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
**experimental::make_array**  
[experimental::to_array](to_array.html "cpp/experimental/to array")  
[experimental::ostream_joiner](ostream_joiner.html "cpp/experimental/ostream joiner")  
[experimental::gcd](gcd.html "cpp/experimental/gcd")  
[experimental::lcm](lcm.html "cpp/experimental/lcm")  
[experimental::source_location](source_location.html "cpp/experimental/source location")  
[experimental::randint](randint.html "cpp/experimental/randint")  
[detection idiom](is_detected.html "cpp/experimental/is detected")  
[uniform container erasure](lib_extensions_2.html#Uniform_container_erasure "cpp/experimental/lib extensions 2")  
[logical operator type traits](lib_extensions_2.html#Logical_operator_type_traits "cpp/experimental/lib extensions 2")  
  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/lib_extensions_2/navbar_content&action=edit)

Defined in header `[<experimental/array>](https://en.cppreference.com/mwiki/index.php?title=cpp/header/experimental/array&action=edit&redlink=1 "cpp/header/experimental/array \(page does not exist\)")` |  |   
---|---|---  
template< class D = void, class... Types >  
constexpr [std::array](../container/array.html)<VT /* see below */, sizeof...(Types)> make_array( Types&&... t ); |  |  (library fundamentals TS v2)  
| |   
  
Creates a [std::array](../container/array.html "cpp/container/array") whose size is equal to the number of arguments and whose elements are initialized from the corresponding arguments. Returns [std::array](../container/array.html)<VT, sizeof...(Types)>{[std::forward](../utility/forward.html)<Types>(t)...}. 

If `D` is void, then the deduced type `VT` is [std::common_type_t](../types/common_type.html)<Types...>. Otherwise, it is `D`. 

If `D` is void and any of [std::decay_t](../types/decay.html)<Types>... is a specialization of [std::reference_wrapper](../utility/functional/reference_wrapper.html "cpp/utility/functional/reference wrapper"), the program is ill-formed. 

## Contents

  * [1 Notes](make_array.html#Notes)
  * [2 Possible implementation](make_array.html#Possible_implementation)
  * [3 Example](make_array.html#Example)
  * [4 See also](make_array.html#See_also)

  
---  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/make_array&action=edit&section=1 "Edit section: Notes")] Notes

`make_array` is removed in Library Fundamentals TS v3 because the [deduction guide](../container/array/deduction_guides.html "cpp/container/array/deduction guides") for `std::array` and [`std::to_array`](../container/array/to_array.html "cpp/container/array/to array") have been already in C++20. 

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/make_array&action=edit&section=2 "Edit section: Possible implementation")] Possible implementation
    
    
    namespace details
    {
        template<class> struct is_ref_wrapper : [std::false_type](../types/integral_constant.html){};
        template<class T> struct is_ref_wrapper<[std::reference_wrapper](../utility/functional/reference_wrapper.html)<T>> : [std::true_type](../types/integral_constant.html){};
     
        template<class T>
        using not_ref_wrapper = [std::negation](../types/negation.html)<is_ref_wrapper<[std::decay_t](../types/decay.html)<T>>>;
     
        template<class D, class...> struct return_type_helper { using type = D; };
        template<class... Types>
        struct return_type_helper<void, Types...> : [std::common_type](../types/common_type.html)<Types...>
        {
            static_assert([std::conjunction_v](../types/conjunction.html)<not_ref_wrapper<Types>...>,
                          "Types cannot contain reference_wrappers when D is void");
        };
     
        template<class D, class... Types>
        using return_type = [std::array](../container/array.html)<typename return_type_helper<D, Types...>::type,
                                       sizeof...(Types)>;
    }
     
    template<class D = void, class... Types>
    constexpr details::return_type<D, Types...> make_array(Types&&... t)
    {
        return {[std::forward](../utility/forward.html)<Types>(t)...};
    }  
  
---  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/make_array&action=edit&section=3 "Edit section: Example")] Example

Run this code
    
    
    #include <experimental/array>
    #include <iostream>
    #include <type_traits>
     
    int main()
    {
        auto arr = std::experimental::make_array(1, 2, 3, 4, 5);
        bool is_array_of_5_ints = [std::is_same](../types/is_same.html)<decltype(arr), [std::array](../container/array.html)<int, 5>>::value;
        [std::cout](../io/cout.html) << "Returns an array of five ints? ";
        [std::cout](../io/cout.html) << [std::boolalpha](../io/manip/boolalpha.html) << is_array_of_5_ints << '\n';
    }

Output: 
    
    
    Returns an array of five ints? true

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/make_array&action=edit&section=4 "Edit section: See also")] See also

[C++ documentation](../container/array/deduction_guides.html "cpp/container/array/deduction guides") for `std::array` deduction guides  
---  
[ to_array](to_array.html "cpp/experimental/to array") |  creates a [std::array](../container/array.html "cpp/container/array") object from a built-in array   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/dsc_to_array&action=edit)
