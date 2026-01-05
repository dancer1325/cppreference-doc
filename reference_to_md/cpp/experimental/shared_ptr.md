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
  


[Library fundamentals](memory.html "cpp/experimental/lib extensions")

[experimental::optional](optional.html "cpp/experimental/optional")  
---  
[experimental::any](any.html "cpp/experimental/any")  
[experimental::basic_string_view](basic_string_view.html "cpp/experimental/basic string view")  
[experimental::sample](sample.html "cpp/experimental/sample")  
**experimental::shared_ptr**  
[experimental::weak_ptr](weak_ptr.html "cpp/experimental/weak ptr")  
[experimental::apply](apply.html "cpp/experimental/apply")  
[experimental::invocation_typeexperimental::raw_invocation_type](invocation_type.html "cpp/experimental/invocation type")  
[experimental::search](search.html "cpp/experimental/search")  
[experimental::default_searcherexperimental::make_default_searcher](default_searcher.html "cpp/experimental/default searcher")  
[experimental::boyer_moore_searcherexperimental::make_boyer_moore_searcher](boyer_moore_searcher.html "cpp/experimental/boyer moore searcher")  
[experimental::boyer_moore_horspool_searcherexperimental::make_boyer_moore_horspool_searcher](boyer_moore_horspool_searcher.html "cpp/experimental/boyer moore horspool searcher")  
[Type-erased and polymorphic allocators](memory.html "cpp/experimental/memory")  
[Variable templates for type traits](type_trait_variable_templates.html "cpp/experimental/type trait variable templates")  
  


**`std::experimental::shared_ptr`**

Member functions  
---  
[shared_ptr::shared_ptr](shared_ptr/shared_ptr.html "cpp/experimental/shared ptr/shared ptr")  
[shared_ptr::get](shared_ptr/get.html "cpp/experimental/shared ptr/get")  
[shared_ptr::operator*shared_ptr::operator->](shared_ptr/operator*.html "cpp/experimental/shared ptr/operator*")  
[shared_ptr::operator[]](shared_ptr/operator_at.html "cpp/experimental/shared ptr/operator at")  
Non-member functions  
[experimental::static_pointer_castexperimental::dynamic_pointer_castexperimental::const_pointer_castexperimental::reinterpret_pointer_cast](shared_ptr/pointer_cast.html "cpp/experimental/shared ptr/pointer cast")  
[std::hash](shared_ptr/hash.html "cpp/experimental/shared ptr/hash")  
[Members and non-members identical to those of `std::shared_ptr`](shared_ptr.html#identical-shared_ptr "cpp/experimental/shared ptr")  
  


Defined in header `[<experimental/memory>](https://en.cppreference.com/mwiki/index.php?title=cpp/header/experimental/memory&action=edit&redlink=1 "cpp/header/experimental/memory \(page does not exist\)")` |  |   
---|---|---  
template< class T > class shared_ptr; |  |  (library fundamentals TS)  
| |   
  
`std::experimental::shared_ptr` is a modified version of [std::shared_ptr](../memory/shared_ptr.html "cpp/memory/shared ptr") that adds support for arrays. 

## Contents

  * [1 Member types](shared_ptr.html#Member_types)
  * [2 Member functions](shared_ptr.html#Member_functions)
    * [2.1 Observers](shared_ptr.html#Observers)
  * [3 Non-member functions](shared_ptr.html#Non-member_functions)
  * [4 Helper classes](shared_ptr.html#Helper_classes)
  * [5 Members and non-members identical to std::shared_ptr](shared_ptr.html#Members_and_non-members_identical_to_std::shared_ptr)
    * [5.1 Member functions](shared_ptr.html#Member_functions_2)
      * [5.1.1 Modifiers](shared_ptr.html#Modifiers)
      * [5.1.2 Observers](shared_ptr.html#Observers_2)
    * [5.2 Non-member functions](shared_ptr.html#Non-member_functions_2)
    * [5.3 Helper class templates](shared_ptr.html#Helper_class_templates)
    * [5.4 Example](shared_ptr.html#Example)

  
---  
  
### Member types

Member type  |  Definition   
---|---  
element_type |  [std::remove_extent_t](../types/remove_extent.html)<T>  
  
### Member functions

[ (constructor)](shared_ptr/shared_ptr.html "cpp/experimental/shared ptr/shared ptr") |  constructs new `shared_ptr`   
(public member function)   
---|---  
  
#####  Observers   
  
[ get](shared_ptr/get.html "cpp/experimental/shared ptr/get") |  returns the stored pointer   
(public member function)   
[ operator*operator->](shared_ptr/operator*.html "cpp/experimental/shared ptr/operator*") |  dereferences the stored pointer   
(public member function)   
[ operator[]](shared_ptr/operator_at.html "cpp/experimental/shared ptr/operator at") |  provides index access to the array   
(public member function)   
  
### Non-member functions

[ static_pointer_castdynamic_pointer_castconst_pointer_castreinterpret_pointer_cast](shared_ptr/pointer_cast.html "cpp/experimental/shared ptr/pointer cast") |  applies [`static_cast`](../language/static_cast.html "cpp/language/static cast"), [`dynamic_cast`](../language/dynamic_cast.html "cpp/language/dynamic cast"), [`const_cast`](../language/const_cast.html "cpp/language/const cast"), or [`reinterpret_cast`](../language/reinterpret_cast.html "cpp/language/reinterpret cast") to the stored pointer   
(function template)   
---|---  
  
### Helper classes

[ std::hash<std::experimental::shared_ptr>](shared_ptr/hash.html "cpp/experimental/shared ptr/hash") |  hash support for std::experimental::shared_ptr   
(class template specialization)   
---|---  
  
##  Members and non-members identical to std::shared_ptr 

###  Member functions

The following member functions work with std::experimental::shared_ptr instead of [std::shared_ptr](../memory/shared_ptr.html "cpp/memory/shared ptr") and std::experimental::weak_ptr instead of [std::weak_ptr](../memory/weak_ptr.html "cpp/memory/weak ptr"). The behavior is otherwise identical. 

[ (destructor)](../memory/shared_ptr/~shared_ptr.html "cpp/memory/shared ptr/~shared ptr") |  destructs the owned object if no more `shared_ptr`s link to it   
(public member function of `std::shared_ptr<T>`)   
---|---  
[ operator=](../memory/shared_ptr/operator=.html "cpp/memory/shared ptr/operator=") |  assigns the `shared_ptr`   
(public member function of `std::shared_ptr<T>`)   
  
#####  Modifiers   
  
[ reset](../memory/shared_ptr/reset.html "cpp/memory/shared ptr/reset") |  replaces the managed object   
(public member function of `std::shared_ptr<T>`)   
[ swap](../memory/shared_ptr/swap.html "cpp/memory/shared ptr/swap") |  swaps the managed objects   
(public member function of `std::shared_ptr<T>`)   
  
#####  Observers   
  
[ use_count](../memory/shared_ptr/use_count.html "cpp/memory/shared ptr/use count") |  returns the number of `shared_ptr` objects referring to the same managed object   
(public member function of `std::shared_ptr<T>`)   
[ unique](../memory/shared_ptr/unique.html "cpp/memory/shared ptr/unique")(until C++20) |  checks whether the managed object is managed only by the current `shared_ptr` object   
(public member function of `std::shared_ptr<T>`)   
[ operator bool](../memory/shared_ptr/operator_bool.html "cpp/memory/shared ptr/operator bool") |  checks if the stored pointer is not null   
(public member function of `std::shared_ptr<T>`)   
[ owner_before](../memory/shared_ptr/owner_before.html "cpp/memory/shared ptr/owner before") |  provides owner-based ordering of shared pointers   
(public member function of `std::shared_ptr<T>`)   
  
###  Non-member functions

These non-member functions are declared in the `std::experimental` namespace, and work with `std::experimental::shared_ptr` rather than [std::shared_ptr](../memory/shared_ptr.html "cpp/memory/shared ptr"), but otherwise behaves identically to the corresponding C++14 function. 

[ make_sharedmake_shared_for_overwrite](../memory/shared_ptr/make_shared.html "cpp/memory/shared ptr/make shared")(C++20) |  creates a shared pointer that manages a new object   
(function template)   
---|---  
[ allocate_sharedallocate_shared_for_overwrite](../memory/shared_ptr/allocate_shared.html "cpp/memory/shared ptr/allocate shared")(C++20) |  creates a shared pointer that manages a new object allocated using an allocator   
(function template)   
[ get_deleter](../memory/shared_ptr/get_deleter.html "cpp/memory/shared ptr/get deleter") |  returns the deleter of specified type, if owned   
(function template)   
[ operator==operator!=operator<operator<=operator>operator>=operator<=>](../memory/shared_ptr/operator_cmp.html "cpp/memory/shared ptr/operator cmp")(removed in C++20)(removed in C++20)(removed in C++20)(removed in C++20)(removed in C++20)(C++20) |  compares with another `shared_ptr` or with nullptr   
(function template)   
[ operator<<(std::shared_ptr)](../memory/shared_ptr/operator_ltlt.html "cpp/memory/shared ptr/operator ltlt") |  outputs the value of the stored pointer to an output stream   
(function template)   
[ std::swap(std::shared_ptr)](../memory/shared_ptr/swap2.html "cpp/memory/shared ptr/swap2")(C++11) |  specializes the [std::swap](../utility/swap.html "cpp/algorithm/swap") algorithm   
(function template)   
[ std::atomic_is_lock_free(std::shared_ptr)std::atomic_load(std::shared_ptr)std::atomic_load_explicit(std::shared_ptr)std::atomic_store(std::shared_ptr)std::atomic_store_explicit(std::shared_ptr)std::atomic_exchange(std::shared_ptr)std::atomic_exchange_explicit(std::shared_ptr)std::atomic_compare_exchange_weak(std::shared_ptr)std::atomic_compare_exchange_strong(std::shared_ptr)std::atomic_compare_exchange_weak_explicit(std::shared_ptr)std::atomic_compare_exchange_strong_explicit(std::shared_ptr)](../memory/shared_ptr/atomic.html "cpp/memory/shared ptr/atomic")(deprecated in C++20)(removed in C++26) |  specializes atomic operations for `std::shared_ptr`   
(function template)   
---|---  
  
###  Helper class templates 

These class templates are declared in the `std::experimental` namespace, and work with `std::experimental::shared_ptr` and std::experimental::weak_ptr rather than [std::shared_ptr](../memory/shared_ptr.html "cpp/memory/shared ptr") and [std::weak_ptr](../memory/weak_ptr.html "cpp/memory/weak ptr"), but otherwise behaves identically to the corresponding C++14 class template. 

[ owner_less](../memory/owner_less.html "cpp/memory/owner less")(C++11) |  provides mixed-type owner-based ordering of shared and weak pointers   
(class template)   
---|---  
[ enable_shared_from_this](../memory/enable_shared_from_this.html "cpp/memory/enable shared from this")(C++11) |  allows an object to create a `shared_ptr` referring to itself   
(class template)   
  
### Example

| This section is incomplete  
Reason: no example   
---|---
