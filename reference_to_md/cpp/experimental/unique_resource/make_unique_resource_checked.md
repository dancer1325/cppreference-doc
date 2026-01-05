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
  


[Library fundamentals v3](../lib_extensions_3.html "cpp/experimental/lib extensions 3")

[experimental::scope_exit](../scope_exit.html "cpp/experimental/scope exit")  
---  
[experimental::scope_fail](../scope_fail.html "cpp/experimental/scope fail")  
[experimental::scope_success](../scope_success.html "cpp/experimental/scope success")  
[experimental::unique_resource](../unique_resource.html "cpp/experimental/unique resource")  
  


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
[unique_resource::operator*unique_resource::operator->](operator*.html "cpp/experimental/unique resource/operator*")  
Non-member functions  
**make_unique_resource_checked**  
[Deduction guides](deduction_guides.html "cpp/experimental/unique resource/deduction guides")  
  


Defined in header `[<experimental/scope>](https://en.cppreference.com/mwiki/index.php?title=cpp/header/experimental/scope&action=edit&redlink=1 "cpp/header/experimental/scope \(page does not exist\)")` |  |   
---|---|---  
template< class R, class D, class S = [std::decay_t](../../types/decay.html)<R> >  
std::experimental::unique_resource<[std::decay_t](../../types/decay.html)<R>, [std::decay_t](../../types/decay.html)<D>>  
make_unique_resource_checked( R&& r, const S& invalid, D&& d )  
noexcept(/*see below*/); |  |  (library fundamentals TS v3)  
| |   
  
Creates a `unique_resource`, initializes its stored resource handle with [std::forward](../../utility/forward.html)<R>(r) and its deleter with [std::forward](../../utility/forward.html)<D>(d). The created `unique_resource` owns the resource if and only if bool(r == invalid) is false. 

The program is ill-formed if the expression r == invalid cannot be [contextually converted to bool](../../language/implicit_cast.html#Contextual_conversions "cpp/language/implicit conversion"), and the behavior is undefined if the conversion results in undefined behavior or throws an exception. 

## Contents

  * [1 Paramaters](make_unique_resource_checked.html#Paramaters)
  * [2 Reture value](make_unique_resource_checked.html#Reture_value)
  * [3 Exceptions](make_unique_resource_checked.html#Exceptions)
  * [4 Notes](make_unique_resource_checked.html#Notes)
  * [5 Example](make_unique_resource_checked.html#Example)
  * [6 See also](make_unique_resource_checked.html#See_also)

  
---  
  
### Paramaters

r  |  \-  |  a resource handle   
---|---|---  
d  |  \-  |  a deleter to use to dispose the resource   
invalid  |  \-  |  a value indicating the resource handle is invalid   
  
### Reture value

A `unique_resource` described above. 

### Exceptions

Any exception thrown in initialization of the stored resource handle and the deleter. 

[`noexcept`](../../language/noexcept_spec.html "cpp/language/noexcept spec") specification: 

noexcept(  


[std::is_nothrow_constructible_v](../../types/is_constructible.html)<[std::decay_t](../../types/decay.html)<R>, R> &&  
[std::is_nothrow_constructible_v](../../types/is_constructible.html)<[std::decay_t](../../types/decay.html)<D>, D>  


)

### Notes

`make_unique_resource_checked` exists to avoid calling a deleter function with an invalid argument. 

Resource handle r is either copied or moved into the return value, and the created `unique_resource` always holds an underlying resource handle with object type. 

### Example

Run this code
    
    
    #include <cstdio>
    #include <experimental/scope>
     
    int main()
    {
        // avoid calling fclose when fopen fails
        auto file = std::experimental::make_unique_resource_checked(
            [std::fopen](../../io/c/fopen.html)("potentially_nonexistent_file.txt", "r"),
            nullptr,
            []([std::FILE](../../io/c/FILE.html) *fptr) { [std::fclose](../../io/c/fclose.html)(fptr); }
        );
        if (file.get())
            [std::puts](../../io/c/puts.html)("The file exists.");
        else
            [std::puts](../../io/c/puts.html)("The file does not exist.");
    }

Possible output: 
    
    
    The file does not exist.

### See also  
  
---
