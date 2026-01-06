  
  


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
  


![](https://upload.cppreference.com/mwiki/images/3/31/Imbox_notice.png) |  **Merged into ISO C++** The functionality described on this page was merged into the mainline ISO C++ standard as of 2/2016, see [`std::negation`](../types/negation.html "cpp/types/negation") (since C++17)  
---|---  
Defined in header `[<experimental/type_traits>](https://en.cppreference.com/mwiki/index.php?title=cpp/header/experimental/type_traits&action=edit&redlink=1 "cpp/header/experimental/type traits \(page does not exist\)")` |  |   
---|---|---  
template< class B >  
struct negation; |  (1)  |  (library fundamentals TS v2)  
| |   
  
Forms the logical negation of the type trait `B`. 

The type negation<B> is a [UnaryTypeTrait](../named_req/UnaryTypeTrait.html "cpp/named req/UnaryTypeTrait") with a base characteristic of [std::integral_constant](../types/integral_constant.html)<bool, !bool(B::value)>. 

## Contents

  * [1 Template parameters](negation.html#Template_parameters)
  * [2 Helper variable template](negation.html#Helper_variable_template)
  * [3 Inherited from std::integral_constant](negation.html#Inherited_from_std::integral_constant)
    * [3.1 Member constants](negation.html#Member_constants)
    * [3.2 Member functions](negation.html#Member_functions)
    * [3.3 Member types](negation.html#Member_types)
    * [3.4 Possible implementation](negation.html#Possible_implementation)
    * [3.5 Example](negation.html#Example)
    * [3.6 See also](negation.html#See_also)

  
---  
  
### Template parameters

B  |  \-  |  any type such that the expression bool(B::value) is a valid constant expression   
---|---|---  
  
### Helper variable template

template< class B >  
constexpr bool negation_v = negation<B>::value; |  |  (library fundamentals TS v2)  
---|---|---  
| |   
  


##  Inherited from [ std::integral_constant](../types/integral_constant.html "cpp/types/integral constant")

###  Member constants

value[static] |  true if `B` has a member `::value` such that !bool(B::value) is true, false otherwise   
(public static member constant)  
---|---  
  
###  Member functions

operator bool |  converts the object to bool, returns value   
(public member function)  
---|---  
operator()(C++14) |  returns value   
(public member function)  
  
###  Member types

Type  |  Definition   
---|---  
`value_type` |  bool  
`type` |  [std::integral_constant](../types/integral_constant.html)<bool, value>  
  
### Possible implementation
    
    
    template<class B>
    struct negation : [std::integral_constant](../types/integral_constant.html)<bool, !bool(B::value)> {};  
  
---  
  
### Example

| This section is incomplete  
Reason: no example   
---|---  
  
### See also

[ negation](../types/negation.html "cpp/types/negation")(C++17) |  logical NOT metafunction   
(class template)   
---|---
