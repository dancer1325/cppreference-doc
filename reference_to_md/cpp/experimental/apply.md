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
**experimental::apply**  
[experimental::invocation_typeexperimental::raw_invocation_type](invocation_type.html "cpp/experimental/invocation type")  
[experimental::search](search.html "cpp/experimental/search")  
[experimental::default_searcherexperimental::make_default_searcher](default_searcher.html "cpp/experimental/default searcher")  
[experimental::boyer_moore_searcherexperimental::make_boyer_moore_searcher](boyer_moore_searcher.html "cpp/experimental/boyer moore searcher")  
[experimental::boyer_moore_horspool_searcherexperimental::make_boyer_moore_horspool_searcher](boyer_moore_horspool_searcher.html "cpp/experimental/boyer moore horspool searcher")  
[Type-erased and polymorphic allocators](memory.html "cpp/experimental/memory")  
[Variable templates for type traits](type_trait_variable_templates.html "cpp/experimental/type trait variable templates")  
  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/lib_extensions/navbar_content&action=edit)

![](https://upload.cppreference.com/mwiki/images/3/31/Imbox_notice.png) |  **Merged into ISO C++** The functionality described on this page was merged into the mainline ISO C++ standard as of 3/2016, see [`std::apply`](../utility/apply.html "cpp/utility/apply") (since C++17)  
---|---  
Defined in header `[<experimental/tuple>](https://en.cppreference.com/mwiki/index.php?title=cpp/header/experimental/tuple&action=edit&redlink=1 "cpp/header/experimental/tuple \(page does not exist\)")` |  |   
---|---|---  
template< class F, class Tuple >  
constexpr decltype(auto) apply(F&& f, Tuple&& t); |  |  (library fundamentals TS)  
| |   
  
Invoke the [Callable](../named_req/Callable.html "cpp/named req/Callable") object f with a tuple of arguments. 

## Contents

  * [1 Parameters](apply.html#Parameters)
  * [2 Return value](apply.html#Return_value)
  * [3 Possible implementation](apply.html#Possible_implementation)
  * [4 Example](apply.html#Example)
  * [5 See also](apply.html#See_also)

  
---  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/apply&action=edit&section=1 "Edit section: Parameters")] Parameters

f  |  \-  |  [Callable](../named_req/Callable.html "cpp/named req/Callable") object to be invoked   
---|---|---  
t  |  \-  |  tuple whose elements to be used as arguments to f  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/apply&action=edit&section=2 "Edit section: Return value")] Return value

What returned by f. 

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/apply&action=edit&section=3 "Edit section: Possible implementation")] Possible implementation
    
    
    namespace detail
    {
        template<class F, class Tuple, [std::size_t](../types/size_t.html)... I>
        constexpr decltype(auto) apply_impl(F&& f, Tuple&& t, [std::index_sequence](../utility/integer_sequence.html)<I...>)
        {
            return [std::invoke](../utility/functional/invoke.html)([std::forward](../utility/forward.html)<F>(f), std::get<I>([std::forward](../utility/forward.html)<Tuple>(t))...);
            // Note: std::invoke is a C++17 feature
        }
    } // namespace detail
     
    template<class F, class Tuple>
    constexpr decltype(auto) apply(F&& f, Tuple&& t)
    {
        return detail::apply_impl([std::forward](../utility/forward.html)<F>(f), [std::forward](../utility/forward.html)<Tuple>(t),
            [std::make_index_sequence](../utility/integer_sequence.html)<[std::tuple_size_v](../utility/tuple_size.html)<[std::decay_t](../types/decay.html)<Tuple>>>{});
    }  
  
---  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/apply&action=edit&section=4 "Edit section: Example")] Example

Run this code
    
    
    #include <iostream>
    #include <tuple>
     
    template<typename... Ts>
    void print_tuple(const [std::tuple](../utility/tuple.html)<Ts...> &tuple)
    {
        [std::apply](../utility/apply.html)([](const auto&... elem) 
        {
            (([std::cout](../io/cout.html) << elem << '\n'), ...); 
        }, tuple);
    }
     
    int main()
    {
        const [std::tuple](../utility/tuple.html)<int, char> t = [std::make_tuple](../utility/tuple/make_tuple.html)(5, 'a');
        print_tuple(t);
    }

Output: 
    
    
    5
    a

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/apply&action=edit&section=5 "Edit section: See also")] See also

[ make_tuple](../utility/tuple/make_tuple.html "cpp/utility/tuple/make tuple")(C++11) |  creates a `tuple` object of the type defined by the argument types   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/utility/tuple/dsc_make_tuple&action=edit)  
---|---  
[ forward_as_tuple](../utility/tuple/forward_as_tuple.html "cpp/utility/tuple/forward as tuple")(C++11) |  creates a `tuple` of [forwarding references](../language/reference.html#Forwarding_references "cpp/language/reference")   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/utility/tuple/dsc_forward_as_tuple&action=edit)
