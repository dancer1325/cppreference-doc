  
  


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

**experimental::optional**  
---  
[experimental::any](any.html "cpp/experimental/any")  
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
  


**`std::experimental::optional`**

Member functions  
---  
[optional::optional](optional/optional.html "cpp/experimental/optional/optional")  
[optional::~optional](optional/~optional.html "cpp/experimental/optional/~optional")  
[optional::operator=](optional/operator=.html "cpp/experimental/optional/operator=")  
Observers  
[optional::operator->optional::operator*](optional/operator*.html "cpp/experimental/optional/operator*")  
[optional::operator bool](optional/operator_bool.html "cpp/experimental/optional/operator bool")  
[optional::value](optional/value.html "cpp/experimental/optional/value")  
[optional::value_or](optional/value_or.html "cpp/experimental/optional/value or")  
Modifiers  
[optional::emplace](optional/emplace.html "cpp/experimental/optional/emplace")  
[optional::swap](optional/swap.html "cpp/experimental/optional/swap")  
Non-member functions  
[operator==operator!=operator<operator<=operator>operator>=](optional/operator_cmp.html "cpp/experimental/optional/operator cmp")  
[make_optional](optional/make_optional.html "cpp/experimental/optional/make optional")  
[swap](optional/swap2.html "cpp/experimental/optional/swap2")  
Helper classes  
[hash](optional/hash.html "cpp/experimental/optional/hash")  
[nullopt_t](optional/nullopt_t.html "cpp/experimental/optional/nullopt t")  
[in_place_t](optional/in_place_t.html "cpp/experimental/optional/in place t")  
[bad_optional_access](optional/bad_optional_access.html "cpp/experimental/optional/bad optional access")  
Helper objects  
[nullopt](optional/nullopt.html "cpp/experimental/optional/nullopt")  
[in_place](optional/in_place.html "cpp/experimental/optional/in place")  
  


![](https://upload.cppreference.com/mwiki/images/3/31/Imbox_notice.png) |  **Merged into ISO C++** The functionality described on this page was merged into the mainline ISO C++ standard as of 3/2016, see [`std::optional`](../utility/optional.html "cpp/utility/optional") (since C++17)  
---|---  
Defined in header `[<experimental/optional>](../header/experimental/optional.html "cpp/header/experimental/optional")` |  |   
---|---|---  
template< class T >  
class optional; |  |  (library fundamentals TS)  
| |   
  
The class template `std::experimental::optional` manages an _optional_ contained value, i.e. a value that may or may not be present. 

A common use case for `optional` is the return value of a function that may fail. As opposed to other approaches, such as [std::pair](../utility/pair.html)<T,bool>, `optional` handles expensive to construct objects well and is more readable, as the intent is expressed explicitly. 

Any instance of `optional<T>` at any given point in time either _contains a value_ or _does not contain a value_. 

If an `optional<T>` _contains a value_ , the value is guaranteed to be allocated as part of the `optional` object footprint, i.e. no dynamic memory allocation ever takes place. Thus, an `optional` object models an object, not a pointer, even though the [operator*()](optional/operator*.html "cpp/experimental/optional/operator*") and [operator->()](optional/operator*.html "cpp/experimental/optional/operator*") are defined. 

When an object of type optional<T> is [contextually converted to bool](../language/implicit_cast.html "cpp/language/implicit cast"), the conversion returns true if the object _contains a value_ and false if it _does not contain a value_. 

The `optional` object _contains a value_ in the following conditions: 

  * The object is initialized with a value of type `T`. 
  * The object is assigned from another `optional` that _contains a value_. 



The object _does not contain a value_ in the following conditions: 

  * The object is default-initialized. 
  * The object is initialized with a value of std::experimental::nullopt_t or an `optional` object that _does not contain a value_. 
  * The object is assigned from a value of std::experimental::nullopt_t or from an `optional` that _does not contain a value_. 



## Contents

  * [1 Template parameters](optional.html#Template_parameters)
  * [2 Member types](optional.html#Member_types)
  * [3 Member functions](optional.html#Member_functions)
    * [3.1 Observers](optional.html#Observers)
    * [3.2 Modifiers](optional.html#Modifiers)
  * [4 Member objects](optional.html#Member_objects)
  * [5 Non-member functions](optional.html#Non-member_functions)
  * [6 Helper classes](optional.html#Helper_classes)
  * [7 Helper objects](optional.html#Helper_objects)

  
---  
  
### Template parameters

T  |  \-  |  the type of the value to manage initialization state for. The type must meet the requirements of [Destructible](../named_req/Destructible.html "cpp/named req/Destructible").   
---|---|---  
  
### Member types

Member type  |  Definition   
---|---  
`value_type` |  `T`  
  
### Member functions

[ (constructor)](optional/optional.html "cpp/experimental/optional/optional") |  constructs the optional object   
(public member function)   
---|---  
[ (destructor)](optional/~optional.html "cpp/experimental/optional/~optional") |  destroys the contained value, if there is one   
(public member function)   
[ operator=](optional/operator=.html "cpp/experimental/optional/operator=") |  assigns contents   
(public member function)   
  
#####  Observers   
  
[ operator->operator*](optional/operator*.html "cpp/experimental/optional/operator*") |  accesses the contained value   
(public member function)   
[ operator bool](optional/operator_bool.html "cpp/experimental/optional/operator bool") |  checks whether the object contains a value   
(public member function)   
[ value](optional/value.html "cpp/experimental/optional/value") |  returns the contained value   
(public member function)   
[ value_or](optional/value_or.html "cpp/experimental/optional/value or") |  returns the contained value if available, another value otherwise   
(public member function)   
  
#####  Modifiers   
  
[ swap](optional/swap.html "cpp/experimental/optional/swap") |  exchanges the contents   
(public member function)   
[ emplace](optional/emplace.html "cpp/experimental/optional/emplace") |  constructs the contained value in-place   
(public member function)   
  
### Member objects

Member name  |  Definition   
---|---  
`val` (private) |  pointer to the contained value (which points at a data member of the same object), the name is for exposition only   
  
### Non-member functions

[ operator==operator!=operator<operator<=operator>operator>=](optional/operator_cmp.html "cpp/experimental/optional/operator cmp") |  compares `optional` objects   
(function template)   
---|---  
[ make_optional](optional/make_optional.html "cpp/experimental/optional/make optional") |  creates an `optional` object   
(function template)   
[ std::swap(std::experimental::optional)](optional/swap2.html "cpp/experimental/optional/swap2") |  specializes the [std::swap](../utility/swap.html "cpp/algorithm/swap") algorithm   
(function)   
  
### Helper classes

[ std::hash<std::experimental::optional>](optional/hash.html "cpp/experimental/optional/hash") |  specializes the [std::hash](../utility/hash.html "cpp/utility/hash") algorithm   
(class template specialization)   
---|---  
[ nullopt_t](optional/nullopt_t.html "cpp/experimental/optional/nullopt t")(library fundamentals TS) |  indicator of optional type with uninitialized state   
(class)   
[ in_place_t](optional/in_place_t.html "cpp/experimental/optional/in place t")(library fundamentals TS) |  disambiguation tag type for in-place construction of optional types   
(class)   
[ bad_optional_access](optional/bad_optional_access.html "cpp/experimental/optional/bad optional access")(library fundamentals TS) |  exception indicating checked access to an optional that doesn't contain a value   
(class)   
  
### Helper objects

[ nullopt](optional/nullopt.html "cpp/experimental/optional/nullopt")(library fundamentals TS) |  an object of type `nullopt_t`   
(function)   
---|---  
[ in_place](optional/in_place.html "cpp/experimental/optional/in place")(library fundamentals TS) |  an object of type [std::experimental::in_place_t](optional/in_place_t.html)   
(function) 
