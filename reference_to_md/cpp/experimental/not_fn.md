  
  


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
**experimental::not_fn**  
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
  


![](https://upload.cppreference.com/mwiki/images/3/31/Imbox_notice.png) |  **Merged into ISO C++** The functionality described on this page was merged into the mainline ISO C++ standard as of 3/2016, see [`std::not_fn`](../utility/functional/not_fn.html "cpp/utility/functional/not fn") (since C++17)  
---|---  
Defined in header `[<experimental/functional>](../header/experimental/functional.html "cpp/header/experimental/functional")` |  |   
---|---|---  
template< class F>  
/*unspecified*/ not_fn( F&& f ); |  |  (library fundamentals TS v2)  
| |   
  
Creates a forwarding call wrapper that returns the complement of the callable object it holds. 

## Contents

  * [1 Parameters](not_fn.html#Parameters)
  * [2 Return value](not_fn.html#Return_value)
  * [3 Remarks](not_fn.html#Remarks)
  * [4 Exceptions](not_fn.html#Exceptions)
  * [5 Possible implementation](not_fn.html#Possible_implementation)
  * [6 Notes](not_fn.html#Notes)
  * [7 See also](not_fn.html#See_also)

  
---  
  
### Parameters 

f  |  \-  |  the object from which the [Callable](../named_req/Callable.html "cpp/named req/Callable") object held by the wrapper is constructed   
---|---|---  
  
### Return value

Let `FD` be [std::decay_t](../types/decay.html)<F> and `fd` be an lvalue of type `FD` constructed from [std::forward](../utility/forward.html)<F>(f). 

`not_fn` returns a forwarding call wrapper `fn` of unspecified type such that fn(a1, a2, ..., aN) is equivalent to !INVOKE(fd, a1, ..., aN), where `INVOKE` is the operation described in [Callable](../named_req/Callable.html "cpp/named req/Callable"). 

The returned call wrapper is always [MoveConstructible](../named_req/MoveConstructible.html "cpp/named req/MoveConstructible"), and is [CopyConstructible](../named_req/CopyConstructible.html "cpp/named req/CopyConstructible") if FD is [CopyConstructible](../named_req/CopyConstructible.html "cpp/named req/CopyConstructible"). 

### Remarks 

If `fd` is not [Callable](../named_req/Callable.html "cpp/named req/Callable"), or [std::is_constructible](../types/is_constructible.html)<FD, F>::value is not `true`, the behavior is undefined. 

### Exceptions 

Throws no exceptions, unless the construction of `fd` throws. 

### Possible implementation 
    
    
    namespace detail {
        template<class F>
        struct not_fn_t {
            F f;
            template<class... Args>
            auto operator()(Args&&... args)
                noexcept(noexcept(![std::invoke](../utility/functional/invoke.html)(f, [std::forward](../utility/forward.html)<Args>(args)...)))
                -> decltype(![std::invoke](../utility/functional/invoke.html)(f, [std::forward](../utility/forward.html)<Args>(args)...)) {
                return ![std::invoke](../utility/functional/invoke.html)(f, [std::forward](../utility/forward.html)<Args>(args)...);
            }
     
            // cv-qualified overload for QoI
            template<class... Args>
            auto operator()(Args&&... args) const
                noexcept(noexcept(![std::invoke](../utility/functional/invoke.html)(f, [std::forward](../utility/forward.html)<Args>(args)...)))
                -> decltype(![std::invoke](../utility/functional/invoke.html)(f, [std::forward](../utility/forward.html)<Args>(args)...)) {
                return ![std::invoke](../utility/functional/invoke.html)(f, [std::forward](../utility/forward.html)<Args>(args)...);
            }
     
            template<class... Args>
            auto operator()(Args&&... args) volatile
                noexcept(noexcept(![std::invoke](../utility/functional/invoke.html)(f, [std::forward](../utility/forward.html)<Args>(args)...)))
                -> decltype(![std::invoke](../utility/functional/invoke.html)(f, [std::forward](../utility/forward.html)<Args>(args)...)) {
                return ![std::invoke](../utility/functional/invoke.html)(f, [std::forward](../utility/forward.html)<Args>(args)...);
            }
            template<class... Args>
            auto operator()(Args&&... args) const volatile
                noexcept(noexcept(![std::invoke](../utility/functional/invoke.html)(f, [std::forward](../utility/forward.html)<Args>(args)...)))
                -> decltype(![std::invoke](../utility/functional/invoke.html)(f, [std::forward](../utility/forward.html)<Args>(args)...)) {
                return ![std::invoke](../utility/functional/invoke.html)(f, [std::forward](../utility/forward.html)<Args>(args)...);
            }
        };
    }
     
    template<class F>
    detail::not_fn_t<[std::decay_t](../types/decay.html)<F>> not_fn(F&& f) { return { [std::forward](../utility/forward.html)<F>(f) }; }  
  
---  
  
### Notes 

`not_fn` is intended to replace the C++03-era negators [std::not1](../utility/functional/not1.html "cpp/utility/functional/not1") and [std::not2](../utility/functional/not2.html "cpp/utility/functional/not2"). 

### See also 

[ not_fn](../utility/functional/not_fn.html "cpp/utility/functional/not fn")(C++17) |  creates a function object that returns the complement of the result of the function object it holds   
(function template)   
---|---
