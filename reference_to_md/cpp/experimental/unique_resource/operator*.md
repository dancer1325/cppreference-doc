[C++](../../../cpp.html "cpp")

[Compiler support](../../compiler_support.html "cpp/compiler support")  
---  
[Freestanding and hosted](../../freestanding.html "cpp/freestanding")  
[Language](../../language.html "cpp/language")  
[Standard library](../../standard_library.html "cpp/standard library")  
[Standard library headers](../../headers.html "cpp/header")  
[Named requirements](../../iterator/concepts.html "cpp/named req")  
[Feature test macros](../feature_test.html "cpp/feature test") (C++20)  
[Language support library](../../utility.html#Language_support "cpp/utility")  
[Concepts library](../../concepts.html "cpp/concepts") (C++20)  
[Diagnostics library](../../error.html "cpp/error")  
[Memory management library](../../memory.html "cpp/memory")  
[Metaprogramming library](../../meta.html "cpp/meta") (C++11)  
[General utilities library](../../utility.html "cpp/utility")  
[Containers library](../../container.html "cpp/container")  
[Iterators library](../../iterator.html "cpp/iterator")  
[Ranges library](../../ranges.html "cpp/ranges") (C++20)  
[Algorithms library](../../algorithm.html "cpp/algorithm")  
[Strings library](../../string.html "cpp/string")  
[Text processing library](../../text.html "cpp/text")  
[Numerics library](../../numeric.html "cpp/numeric")  
[Date and time library](../../chrono.html "cpp/chrono")  
[Input/output library](../../io.html "cpp/io")  
[Filesystem library](../../filesystem.html "cpp/filesystem") (C++17)  
[Concurrency support library](../../atomic.html "cpp/thread") (C++11)  
[Execution control library](../execution.html "cpp/execution") (C++26)  
[Technical specifications](../../experimental.html "cpp/experimental")  
[Symbols index](../../symbol_index.html "cpp/symbol index")  
[External libraries](../../links/libs.html "cpp/links/libs")  
  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/navbar_content&action=edit)

[Experimental](../../experimental.html "cpp/experimental")

[Technical Specification](../../experimental.html#Technical_Specification "cpp/experimental")  
---  
[Filesystem library](../fs.html "cpp/experimental/fs") (filesystem TS)  
[Library fundamentals](../memory.html "cpp/experimental/lib extensions") (library fundamentals TS)  
[Library fundamentals 2](../lib_extensions_2.html "cpp/experimental/lib extensions 2") (library fundamentals TS v2)  
[Library fundamentals 3](../lib_extensions_3.html "cpp/experimental/lib extensions 3") (library fundamentals TS v3)  
[Extensions for parallelism](../parallelism.html "cpp/experimental/parallelism") (parallelism TS)  
[Extensions for parallelism 2](../parallelism_2.html "cpp/experimental/parallelism 2") (parallelism TS v2)  
[Extensions for concurrency](../concurrency.html "cpp/experimental/concurrency") (concurrency TS)  
[Extensions for concurrency 2](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/concurrency_2&action=edit&redlink=1 "cpp/experimental/concurrency 2 \(page does not exist\)") (concurrency TS v2)  
[Concepts](../constraints.html "cpp/experimental/constraints") (concepts TS)  
[Ranges](../ranges.html "cpp/experimental/ranges") (ranges TS)  
[Reflection](../reflect.html "cpp/experimental/reflect") (reflection TS)  
[Mathematical special functions](../special_math.html "cpp/experimental/special functions") (special functions TR)  
[Experimental Non-TS](../../experimental.html#Experimental_Non-TS "cpp/experimental")  
[Pattern Matching](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/pm&action=edit&redlink=1 "cpp/experimental/pm \(page does not exist\)")  
[Linear Algebra](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/la&action=edit&redlink=1 "cpp/experimental/la \(page does not exist\)")  
[std::execution](../execution.html "cpp/experimental/execution")  
[Contracts](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/contracts&action=edit&redlink=1 "cpp/experimental/contracts \(page does not exist\)")  
[2D Graphics](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/2dgraphics&action=edit&redlink=1 "cpp/experimental/2dgraphics \(page does not exist\)")  
  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/navbar_content&action=edit)

[Library fundamentals v3](../lib_extensions_3.html "cpp/experimental/lib extensions 3")

[experimental::scope_exit](../scope_exit.html "cpp/experimental/scope exit")  
---  
[experimental::scope_fail](../scope_fail.html "cpp/experimental/scope fail")  
[experimental::scope_success](../scope_success.html "cpp/experimental/scope success")  
[experimental::unique_resource](../unique_resource.html "cpp/experimental/unique resource")  
  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/lib_extensions_3/navbar_content&action=edit)

[`std::experimental::unique_resource`](../unique_resource.html "cpp/experimental/unique resource")

Member functions  
---  
[unique_resource::unique_resource](unique_resource.html "cpp/experimental/unique resource/unique resource")  
[unique_resource::~unique_resource](~unique_resource.html "cpp/experimental/unique resource/~unique resource")  
[unique_resource::operator=](operator=.html "cpp/experimental/unique resource/operator=")  
Modifiers  
[unique_resource::release](release.html "cpp/experimental/unique resource/release")  
[unique_resource::reset](reset.html "cpp/experimental/unique resource/reset")  
Observers  
[unique_resource::get](get.html "cpp/experimental/unique resource/get")  
[unique_resource::get_deleter](get_deleter.html "cpp/experimental/unique resource/get deleter")  
**unique_resource::operator* unique_resource::operator->**  
Non-member functions  
[make_unique_resource_checked](make_unique_resource_checked.html "cpp/experimental/unique resource/make unique resource checked")  
[Deduction guides](deduction_guides.html "cpp/experimental/unique resource/deduction guides")  
  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/unique_resource/navbar_content&action=edit)

[std::add_lvalue_reference_t](../../types/add_reference.html)<[std::remove_pointer_t](../../types/remove_pointer.html)<R>>  
operator*() const noexcept; |  (1)  |  (library fundamentals TS v3)  
---|---|---  
R operator->() const noexcept; |  (2)  |  (library fundamentals TS v3)  
| |   
  
1) Access the object or function pointed by the underlying resource handle which is a pointer. This function participates in overload resolution only if [std::is_pointer_v](../../types/is_pointer.html)<R> is true and [std::is_void_v](../../types/is_void.html)<[std::remove_pointer_t](../../types/remove_pointer.html)<R>> is false. If the resource handle is not pointing to an object or a function, the behavior is undefined.

2) Get a copy of the underlying resource handle which is a pointer. This function participates in overload resolution only if [std::is_pointer_v](../../types/is_pointer.html)<R> is true. The return value is typically used to access the pointed object.

## Contents

  * [1 Parameters](operator*.html#Parameters)
  * [2 Return value](operator*.html#Return_value)
  * [3 Example](operator*.html#Example)
  * [4 See also](operator*.html#See_also)

  
---  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/unique_resource/operator*&action=edit&section=1 "Edit section: Parameters")] Parameters

(none) 

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/unique_resource/operator*&action=edit&section=2 "Edit section: Return value")] Return value

1) The object or function pointed by the underlying resource handle.

2) Copy of the underlying resource handle.

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/unique_resource/operator*&action=edit&section=3 "Edit section: Example")] Example

| This section is incomplete  
Reason: no example   
---|---  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/unique_resource/operator*&action=edit&section=4 "Edit section: See also")] See also

[ get](get.html "cpp/experimental/unique resource/get") |  accesses the underlying resource handle   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/unique_resource/dsc_get&action=edit)  
---|---  
[ operator*operator->](../../memory/unique_ptr/operator*.html "cpp/memory/unique ptr/operator*") |  dereferences pointer to the managed object   
(public member function of `std::unique_ptr<T,Deleter>`) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/memory/unique_ptr/dsc_operator*&action=edit)
