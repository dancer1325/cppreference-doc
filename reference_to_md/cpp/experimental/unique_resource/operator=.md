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
**unique_resource::operator=**  
Modifiers  
[unique_resource::release](release.html "cpp/experimental/unique resource/release")  
[unique_resource::reset](reset.html "cpp/experimental/unique resource/reset")  
Observers  
[unique_resource::get](get.html "cpp/experimental/unique resource/get")  
[unique_resource::get_deleter](get_deleter.html "cpp/experimental/unique resource/get deleter")  
[unique_resource::operator*unique_resource::operator->](operator*.html "cpp/experimental/unique resource/operator*")  
Non-member functions  
[make_unique_resource_checked](make_unique_resource_checked.html "cpp/experimental/unique resource/make unique resource checked")  
[Deduction guides](deduction_guides.html "cpp/experimental/unique resource/deduction guides")  
  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/unique_resource/navbar_content&action=edit)

unique_resource& operator=( unique_resource&& other )  
noexcept(/*see below*/); |  |  (library fundamentals TS v3)  
---|---|---  
| |   
  
Move assignment operator. Replaces the managed resource and the deleter with other's. 

Formally, let `RS` be the type of stored resource handle: 

  * First, calls reset() to dispose the currently owned resource, if any. 
  * Then assigns the stored resource handle and the deleter with other's. `std::move` is applied to the stored resource handle or the deleter of other if [std::is_nothrow_move_assignable_v](../../types/is_move_assignable.html)<RS> or [std::is_nothrow_move_assignable_v](../../types/is_move_assignable.html)<D> is true respectively. Assignment of the stored resource handle is executed first, unless [std::is_nothrow_move_assignable_v](../../types/is_move_assignable.html)<D> is false and [std::is_nothrow_move_assignable_v](../../types/is_move_assignable.html)<RS> is true. 
  * Finally, sets *this to own the resource if and only if other owned it before assignment, and other not to own the resource. 



If [std::is_nothrow_move_assignable_v](../../types/is_move_assignable.html)<RS> is true, `RS` shall satisfy the [MoveAssignable](../../named_req/MoveAssignable.html "cpp/named req/MoveAssignable") requirements; otherwise `RS` shall satisfy the [CopyAssignable](../../named_req/CopyAssignable.html "cpp/named req/CopyAssignable") requirements. If [std::is_nothrow_move_assignable_v](../../types/is_move_assignable.html)<D> is true, `D` shall satisfy the [MoveAssignable](../../named_req/MoveAssignable.html "cpp/named req/MoveAssignable") requirements; otherwise `D` shall satisfy the [CopyAssignable](../../named_req/CopyAssignable.html "cpp/named req/CopyAssignable") requirements. Failing to satisfy above requirements results in undefined behavior. 

## Contents

  * [1 Parameters](operator=.html#Parameters)
  * [2 Return value](operator=.html#Return_value)
  * [3 Exceptions](operator=.html#Exceptions)
  * [4 Notes](operator=.html#Notes)
  * [5 Example](operator=.html#Example)
  * [6 See also](operator=.html#See_also)

  
---  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/unique_resource/operator%3D&action=edit&section=1 "Edit section: Parameters")] Parameters

other  |  \-  |  resource wrapper from which ownership will be transferred   
---|---|---  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/unique_resource/operator%3D&action=edit&section=2 "Edit section: Return value")] Return value

*this

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/unique_resource/operator%3D&action=edit&section=3 "Edit section: Exceptions")] Exceptions

Any exception thrown in copy-assignment. 

[`noexcept`](../../language/noexcept_spec.html "cpp/language/noexcept spec") specification: 

noexcept([std::is_nothrow_move_assignable_v](../../types/is_move_assignable.html)<RS> && [std::is_nothrow_move_assignable_v](../../types/is_move_assignable.html)<D>)

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/unique_resource/operator%3D&action=edit&section=4 "Edit section: Notes")] Notes

If a copy of a member throws an exception, this mechanism leaves other intact and *this in the released state. 

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/unique_resource/operator%3D&action=edit&section=5 "Edit section: Example")] Example

| This section is incomplete  
Reason: no example   
---|---  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/unique_resource/operator%3D&action=edit&section=6 "Edit section: See also")] See also

[ reset](reset.html "cpp/experimental/unique resource/reset") |  disposes or replaces the managed resource   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/unique_resource/dsc_reset&action=edit)  
---|---  
[ operator=](../../memory/unique_ptr/operator=.html "cpp/memory/unique ptr/operator=") |  assigns the `unique_ptr`   
(public member function of `std::unique_ptr<T,Deleter>`) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/memory/unique_ptr/dsc_operator%3D&action=edit)
