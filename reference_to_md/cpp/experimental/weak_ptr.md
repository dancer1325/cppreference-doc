  
  


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
[experimental::any](any.html "cpp/experimental/any")  
[experimental::basic_string_view](basic_string_view.html "cpp/experimental/basic string view")  
[experimental::sample](sample.html "cpp/experimental/sample")  
[experimental::shared_ptr](shared_ptr.html "cpp/experimental/shared ptr")  
**experimental::weak_ptr**  
[experimental::apply](apply.html "cpp/experimental/apply")  
[experimental::invocation_typeexperimental::raw_invocation_type](invocation_type.html "cpp/experimental/invocation type")  
[experimental::search](search.html "cpp/experimental/search")  
[experimental::default_searcherexperimental::make_default_searcher](default_searcher.html "cpp/experimental/default searcher")  
[experimental::boyer_moore_searcherexperimental::make_boyer_moore_searcher](boyer_moore_searcher.html "cpp/experimental/boyer moore searcher")  
[experimental::boyer_moore_horspool_searcherexperimental::make_boyer_moore_horspool_searcher](boyer_moore_horspool_searcher.html "cpp/experimental/boyer moore horspool searcher")  
[Type-erased and polymorphic allocators](memory.html "cpp/experimental/memory")  
[Variable templates for type traits](type_trait_variable_templates.html "cpp/experimental/type trait variable templates")  
  


**`std::experimental::weak_ptr`**

[weak_ptr::weak_ptr](weak_ptr/weak_ptr.html "cpp/experimental/weak ptr/weak ptr")  
---  
[Members and non-members identical to those of `std::weak_ptr`](weak_ptr.html#identical-weak_ptr "cpp/experimental/weak ptr")  
  


Defined in header `[<experimental/memory>](https://en.cppreference.com/mwiki/index.php?title=cpp/header/experimental/memory&action=edit&redlink=1 "cpp/header/experimental/memory \(page does not exist\)")` |  |   
---|---|---  
template< class T > class weak_ptr; |  |  (library fundamentals TS)  
| |   
  
`std::experimental::weak_ptr` is a modified version of [std::weak_ptr](../memory/weak_ptr.html "cpp/memory/weak ptr") that interoperates with std::experimental::shared_ptr and has support for arrays. 

## Contents

  * [1 Member types](weak_ptr.html#Member_types)
  * [2 Member functions](weak_ptr.html#Member_functions)
  * [3 Members and non-members identical to std::weak_ptr](weak_ptr.html#Members_and_non-members_identical_to_std::weak_ptr)
    * [3.1 Member functions](weak_ptr.html#Member_functions_2)
      * [3.1.1 Modifiers](weak_ptr.html#Modifiers)
      * [3.1.2 Observers](weak_ptr.html#Observers)
    * [3.2 Non-member functions](weak_ptr.html#Non-member_functions)
    * [3.3 Example](weak_ptr.html#Example)

  
---  
  
### Member types

Member type  |  Definition   
---|---  
element_type |  [std::remove_extent_t](../types/remove_extent.html)<T>  
  
### Member functions

[ (constructor)](weak_ptr/weak_ptr.html "cpp/experimental/weak ptr/weak ptr") |  constructs new `weak_ptr`   
(public member function)   
---|---  
  
##  Members and non-members identical to std::weak_ptr 

###  Member functions

The following member functions work with std::experimental::shared_ptr instead of [std::shared_ptr](../memory/shared_ptr.html "cpp/memory/shared ptr") and std::experimental::weak_ptr instead of [std::weak_ptr](../memory/weak_ptr.html "cpp/memory/weak ptr"). The behavior is otherwise identical. 

[ (destructor)](../memory/weak_ptr/~weak_ptr.html "cpp/memory/weak ptr/~weak ptr") |  destroys a `weak_ptr`   
(public member function of `std::weak_ptr<T>`)   
---|---  
[ operator=](../memory/weak_ptr/operator=.html "cpp/memory/weak ptr/operator=") |  assigns the `weak_ptr`   
(public member function of `std::weak_ptr<T>`)   
  
#####  Modifiers   
  
[ reset](../memory/weak_ptr/reset.html "cpp/memory/weak ptr/reset") |  releases the ownership of the managed object   
(public member function of `std::weak_ptr<T>`)   
[ swap](../memory/weak_ptr/swap.html "cpp/memory/weak ptr/swap") |  swaps the managed objects   
(public member function of `std::weak_ptr<T>`)   
  
#####  Observers   
  
[ use_count](../memory/weak_ptr/use_count.html "cpp/memory/weak ptr/use count") |  returns the number of `shared_ptr` objects that manage the object   
(public member function of `std::weak_ptr<T>`)   
[ expired](../memory/weak_ptr/expired.html "cpp/memory/weak ptr/expired") |  checks whether the referenced object was already deleted   
(public member function of `std::weak_ptr<T>`)   
[ lock](../memory/weak_ptr/lock.html "cpp/memory/weak ptr/lock") |  creates a `shared_ptr` that manages the referenced object   
(public member function of `std::weak_ptr<T>`)   
[ owner_before](../memory/weak_ptr/owner_before.html "cpp/memory/weak ptr/owner before") |  provides owner-based ordering of weak pointers   
(public member function of `std::weak_ptr<T>`)   
  
###  Non-member functions

This non-member function is declared in the `std::experimental` namespace, and work with `std::experimental::weak_ptr` rather than [std::weak_ptr](../memory/weak_ptr.html "cpp/memory/weak ptr"), but otherwise behaves identically to the corresponding C++14 function. 

[ std::swap(std::weak_ptr)](../memory/weak_ptr/swap2.html "cpp/memory/weak ptr/swap2")(C++11) |  specializes the [std::swap](../utility/swap.html "cpp/algorithm/swap") algorithm   
(function template)   
---|---  
  
### Example

| This section is incomplete  
Reason: no example   
---|---
