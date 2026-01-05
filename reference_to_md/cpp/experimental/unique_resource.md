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
  


[Library fundamentals v3](lib_extensions_3.html "cpp/experimental/lib extensions 3")

[experimental::scope_exit](scope_exit.html "cpp/experimental/scope exit")  
---  
[experimental::scope_fail](scope_fail.html "cpp/experimental/scope fail")  
[experimental::scope_success](scope_success.html "cpp/experimental/scope success")  
**experimental::unique_resource**  
  


**`std::experimental::unique_resource`**

Member functions  
---  
[unique_resource::unique_resource](unique_resource/unique_resource.html "cpp/experimental/unique resource/unique resource")  
[unique_resource::~unique_resource](unique_resource/~unique_resource.html "cpp/experimental/unique resource/~unique resource")  
[unique_resource::operator=](unique_resource/operator=.html "cpp/experimental/unique resource/operator=")  
Modifiers  
[unique_resource::release](unique_resource/release.html "cpp/experimental/unique resource/release")  
[unique_resource::reset](unique_resource/reset.html "cpp/experimental/unique resource/reset")  
Observers  
[unique_resource::get](unique_resource/get.html "cpp/experimental/unique resource/get")  
[unique_resource::get_deleter](unique_resource/get_deleter.html "cpp/experimental/unique resource/get deleter")  
[unique_resource::operator*unique_resource::operator->](unique_resource/operator*.html "cpp/experimental/unique resource/operator*")  
Non-member functions  
[make_unique_resource_checked](unique_resource/make_unique_resource_checked.html "cpp/experimental/unique resource/make unique resource checked")  
[Deduction guides](unique_resource/deduction_guides.html "cpp/experimental/unique resource/deduction guides")  
  


Defined in header `[<experimental/scope>](https://en.cppreference.com/mwiki/index.php?title=cpp/header/experimental/scope&action=edit&redlink=1 "cpp/header/experimental/scope \(page does not exist\)")` |  |   
---|---|---  
template< class R, class D >  
class unique_resource; |  |  (library fundamentals TS v3)  
| |   
  
`unique_resource` is universal RAII wrapper for resource handles that owns and manages a resource through a handle and disposes of that resource when the `unique_resource` is destroyed. 

The resource is disposed of using the deleter of type `D` when either of the following happens: 

  * the managing `unique_resource` object is destroyed, 
  * the managing `unique_resource` object is assigned from another resource via operator= or reset(). 



Let type `RS` be `R` if `R` is an object type, or [std::reference_wrapper](../utility/functional/reference_wrapper.html)<[std::remove_reference_t](../types/remove_reference.html)<R>> otherwise: 

  * `unique_resource` effectively holds a subobject of type `RS` which is or wraps the resource handle, a deleter of type `D` and a bool flag indicating whether the wrapper is owning the resource. 
  * For explanatory purpose, the subobject of type `RS` is called _stored resource handle_ , and the stored (if `R` is an object type) or wrapped (if `R` is a reference type) `R` is called _underlying resource handle_. These two terms are not used by the LFTS. 



## Contents

  * [1 Template parameters](unique_resource.html#Template_parameters)
  * [2 Member functions](unique_resource.html#Member_functions)
    * [2.1 Modifiers](unique_resource.html#Modifiers)
    * [2.2 Observers](unique_resource.html#Observers)
  * [3 Non-member functions](unique_resource.html#Non-member_functions)
  * [4 Deduction guides](unique_resource.html#Deduction_guides)
  * [5 Notes](unique_resource.html#Notes)
  * [6 Example](unique_resource.html#Example)
  * [7 See also](unique_resource.html#See_also)

  
---  
  
### Template parameters

R  |  \-  |  resource handle type   
---|---|---  
D  |  \-  |  deleter type   
Type requirements   
-`R` shall be an object type or an lvalue reference to an object type. Let `UnrefR` be [std::remove_reference_t](../types/remove_reference.html)<R>, `UnrefR` shall be [MoveConstructible](../named_req/MoveConstructible.html "cpp/named req/MoveConstructible"), and if `UnrefR` is not [CopyConstructible](../named_req/CopyConstructible.html "cpp/named req/CopyConstructible"), [std::is_nothrow_move_constructible_v](../types/is_move_constructible.html)<UnrefR> shall be true.   
-`D` shall be a [Destructible](../named_req/Destructible.html "cpp/named req/Destructible") and [MoveConstructible](../named_req/MoveConstructible.html "cpp/named req/MoveConstructible") [FunctionObject](../named_req/FunctionObject.html "cpp/named req/FunctionObject") type, and if `D` is not [CopyConstructible](../named_req/CopyConstructible.html "cpp/named req/CopyConstructible"), [std::is_nothrow_move_constructible_v](../types/is_move_constructible.html)<D> shall be true. Given an lvalue `d` of type `D` and an lvalue `r` of type `UnrefR`, the expression d(r) shall be well-formed.   
  
### Member functions

[ (constructor)](unique_resource/unique_resource.html "cpp/experimental/unique resource/unique resource") |  constructs a new `unique_resource`   
(public member function)   
---|---  
[ (destructor)](unique_resource/~unique_resource.html "cpp/experimental/unique resource/~unique resource") |  disposes the managed resource if such is present   
(public member function)   
[ operator=](unique_resource/operator=.html "cpp/experimental/unique resource/operator=") |  assigns a `unique_resource`   
(public member function)   
  
#####  Modifiers   
  
[ release](unique_resource/release.html "cpp/experimental/unique resource/release") |  releases the ownership   
(public member function)   
[ reset](unique_resource/reset.html "cpp/experimental/unique resource/reset") |  disposes or replaces the managed resource   
(public member function)   
  
#####  Observers   
  
[ get](unique_resource/get.html "cpp/experimental/unique resource/get") |  accesses the underlying resource handle   
(public member function)   
[ get_deleter](unique_resource/get_deleter.html "cpp/experimental/unique resource/get deleter") |  accesses the deleter used for disposing of the managed resource   
(public member function)   
[ operator*operator->](unique_resource/operator*.html "cpp/experimental/unique resource/operator*") |  accesses the pointee if the resource handle is a pointer   
(public member function)   
  
### Non-member functions

[ make_unique_resource_checked](unique_resource/make_unique_resource_checked.html "cpp/experimental/unique resource/make unique resource checked") |  creates a `unique_resource`, checking invalid value   
(function template)   
---|---  
  
### [Deduction guides](unique_resource/deduction_guides.html "cpp/experimental/unique resource/deduction guides")

### Notes

Resource handle types satisfying [NullablePointer](../named_req/NullablePointer.html "cpp/named req/NullablePointer") can also be managed by [std::unique_ptr](../memory/unique_ptr.html "cpp/memory/unique ptr"). Unlike `unique_ptr`, `unique_resource` does not require [NullablePointer](../named_req/NullablePointer.html "cpp/named req/NullablePointer"). 

### Example

| This section is incomplete  
Reason: no example   
---|---  
  
### See also

[ unique_ptr](../memory/unique_ptr.html "cpp/memory/unique ptr")(C++11) |  smart pointer with unique object ownership semantics   
(class template)   
---|---
