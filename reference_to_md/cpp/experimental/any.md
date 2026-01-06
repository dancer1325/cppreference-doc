  
  


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
  


[Library fundamentals](memory.html "cpp/experimental/lib extensions")

[experimental::optional](optional.html "cpp/experimental/optional")  
---  
**experimental::any**  
[experimental::basic_string_view](basic_string_view.html "cpp/experimental/basic string view")  
[experimental::sample](sample.html "cpp/experimental/sample")  
[experimental::shared_ptr](shared_ptr.html "cpp/experimental/shared ptr")  
[experimental::weak_ptr](weak_ptr.html "cpp/experimental/weak ptr")  
[experimental::apply](apply.html "cpp/experimental/apply")  
[experimental::invocation_typeexperimental::raw_invocation_type](invocation_type.html "cpp/experimental/invocation type")  
[experimental::search](search.html "cpp/experimental/search")  
[experimental::default_searcherexperimental::make_default_searcher](default_searcher.html "cpp/experimental/default searcher")  
[experimental::boyer_moore_searcherexperimental::make_boyer_moore_searcher](boyer_moore_searcher.html "cpp/experimental/boyer moore searcher")  
[experimental::boyer_moore_horspool_searcherexperimental::make_boyer_moore_horspool_searcher](boyer_moore_horspool_searcher.html "cpp/experimental/boyer moore horspool searcher")  
[Type-erased and polymorphic allocators](memory.html "cpp/experimental/memory")  
[Variable templates for type traits](type_trait_variable_templates.html "cpp/experimental/type trait variable templates")  
  


**`std::experimental::any`**

Member functions  
---  
[any::any](any/any.html "cpp/experimental/any/any")  
[any::operator=](any/operator=.html "cpp/experimental/any/operator=")  
Modifiers  
[any::clear](any/clear.html "cpp/experimental/any/clear")  
[any::swap](any/swap.html "cpp/experimental/any/swap")  
Observers  
[any::empty](any/empty.html "cpp/experimental/any/empty")  
[any::type](any/type.html "cpp/experimental/any/type")  
Non-member functions  
[swap(std::experimental::any)](any/swap2.html "cpp/experimental/any/swap2")  
[any_cast](any/any_cast.html "cpp/experimental/any/any cast")  
  


![](https://upload.cppreference.com/mwiki/images/3/31/Imbox_notice.png) |  **Merged into ISO C++** The functionality described on this page was merged into the mainline ISO C++ standard as of 3/2016, see [`std::any`](../utility/any.html "cpp/utility/any") (since C++17)  
---|---  
Defined in header `[<experimental/any>](../header/experimental/any.html "cpp/header/experimental/any")` |  |   
---|---|---  
class any; |  |  (library fundamentals TS)  
| |   
  
The class `any` describes a type-safe container for single values of any type. 

1) An object of class `any` stores an instance of any type that satisfies the constructor requirements or is empty, and this is referred to as the _state_ of the class `any` object. The stored instance is called the contained object. Two states are equivalent if they are either both empty or if both are not empty and if the contained objects are equivalent.

2) The non-member `any_cast` functions provide type-safe access to the contained object.

Implementations are encouraged to avoid dynamic allocations for small objects, but such an optimization may only be applied to types that for which [std::is_nothrow_move_constructible](../types/is_move_constructible.html "cpp/types/is move constructible") returns true. 

## Contents

  * [1 Member functions](any.html#Member_functions)
    * [1.1 Modifiers](any.html#Modifiers)
    * [1.2 Observers](any.html#Observers)
  * [2 Non-member functions](any.html#Non-member_functions)
  * [3 Helper classes](any.html#Helper_classes)

  
---  
  
### Member functions

[ (constructor)](any/any.html "cpp/experimental/any/any") |  constructs an `any` object   
(public member function)   
---|---  
[ operator=](any/operator=.html "cpp/experimental/any/operator=") |  assigns an `any` object   
(public member function)   
[ (destructor)](any/~any.html "cpp/experimental/any/~any") |  destroys an `any` object   
(public member function)   
  
#####  Modifiers   
  
[ clear](any/clear.html "cpp/experimental/any/clear") |  destroys contained object   
(public member function)   
[ swap](any/swap.html "cpp/experimental/any/swap") |  swaps two `any` objects   
(public member function)   
  
#####  Observers   
  
[ empty](any/empty.html "cpp/experimental/any/empty") |  checks if object holds a value   
(public member function)   
[ type](any/type.html "cpp/experimental/any/type") |  returns the `typeid` of the contained value   
(public member function)   
  
### Non-member functions

[ swap](any/swap2.html "cpp/experimental/any/swap2") |  swaps two `any` instances   
(function)   
---|---  
[ any_cast](any/any_cast.html "cpp/experimental/any/any cast") |  type-safe access to the contained object   
(function template)   
  
### Helper classes

[ bad_any_cast](any/bad_any_cast.html "cpp/experimental/any/bad any cast")(library fundamentals TS) |  exception thrown by the value-returning forms of `any_cast` on a type mismatch   
(class)   
---|---
