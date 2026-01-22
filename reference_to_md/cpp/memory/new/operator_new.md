* defined | header [`<new>`](../../header/new.md)   

# Replaceable allocation functions   
void* operator new ( [std::size_t](../../types/size_t.html) count ); |  (1) |   
void* operator new[]( [std::size_t](../../types/size_t.html) count ); |  (2) |   
void* operator new ( [std::size_t](../../types/size_t.html) count, [std::align_val_t](align_val_t.html) al ); |  (3) | (since C++17)  
void* operator new[]( [std::size_t](../../types/size_t.html) count, [std::align_val_t](align_val_t.html) al ); |  (4) | (since C++17)  

# Replaceable non-throwing allocation functions   
void* operator new ( [std::size_t](../../types/size_t.html) count, const [std::nothrow_t](nothrow_t.html)& tag ); |  (5) | (noexcept since C++11)  
void* operator new[]( [std::size_t](../../types/size_t.html) count, const [std::nothrow_t](nothrow_t.html)& tag ); |  (6) | (noexcept since C++11)  
void* operator new ( [std::size_t](../../types/size_t.html) count, [std::align_val_t](align_val_t.html) al,  
const [std::nothrow_t](nothrow_t.html)& tag ) noexcept; |  (7) | (since C++17)  
void* operator new[]( [std::size_t](../../types/size_t.html) count, [std::align_val_t](align_val_t.html) al,  
const [std::nothrow_t](nothrow_t.html)& tag ) noexcept; |  (8) | (since C++17)  

# Non-allocating placement allocation functions
void* operator new ( [std::size_t](../../types/size_t.html) count, void* ptr ); |  (9) | (noexcept since C++11)   
(constexpr since C++26)  
void* operator new[]( [std::size_t](../../types/size_t.html) count, void* ptr ); |  (10) | (noexcept since C++11)   
(constexpr since C++26)  

# User-defined placement allocation functions   
void* operator new ( [std::size_t](../../types/size_t.html) count, /* args... */ ); |  (11) |   
void* operator new[]( [std::size_t](../../types/size_t.html) count, /* args... */ ); |  (12) |   
void* operator new ( [std::size_t](../../types/size_t.html) count,  
[std::align_val_t](align_val_t.html) al, /* args... */ ); |  (13) | (since C++17)  
void* operator new[]( [std::size_t](../../types/size_t.html) count,  
[std::align_val_t](align_val_t.html) al, /* args... */ ); |  (14) | (since C++17)  

# Class-specific allocation functions   
void* T::operator new ( [std::size_t](../../types/size_t.html) count ); |  (15) |   
void* T::operator new[]( [std::size_t](../../types/size_t.html) count ); |  (16) |   
void* T::operator new ( [std::size_t](../../types/size_t.html) count, [std::align_val_t](align_val_t.html) al ); |  (17) | (since C++17)  
void* T::operator new[]( [std::size_t](../../types/size_t.html) count, [std::align_val_t](align_val_t.html) al ); |  (18) | (since C++17)  

# Class-specific placement allocation functions   
void* T::operator new ( [std::size_t](../../types/size_t.html) count, /* args... */ ); |  (19) |   
void* T::operator new[]( [std::size_t](../../types/size_t.html) count, /* args... */ ); |  (20) |   
void* T::operator new ( [std::size_t](../../types/size_t.html) count,  
[std::align_val_t](align_val_t.html) al, /* args... */ ); |  (21) | (since C++17)  
void* T::operator new[]( [std::size_t](../../types/size_t.html) count,  
[std::align_val_t](align_val_t.html) al, /* args... */ ); |  (22) | (since C++17)  
| |   
  
Attempts to allocate requested number of bytes, and the allocation request can fail (even if the requested number of bytes is zero). These allocation functions are called by [new expressions](../../language/new.html "cpp/language/new") to allocate memory in which new object would then be initialized. They may also be called using regular function call syntax. 

1-8) [Replaceable](../../language/replacement_function.html "cpp/language/replacement function") allocation functions. The standard library provides default implementations for these functions, for the effects of the default implementations, see [below](operator_new.html#Global_replacement).

9,10) Called by the standard [placement new expressions](../../language/new.html#Placement_new "cpp/language/new"). Performs no action and returns ptr unmodified.

If this function is called through placement new and ptr is a null pointer, the behavior is undefined.

11-22) User-defined allocation functions called by new expressions.

Overloads ([1-4](operator_new.html#Version_1)) are implicitly declared in each translation unit even if the [`<new>`](../../header/new.html "cpp/header/new") header is not included. 

See [new expression](../../language/new.html "cpp/language/new") for the criteria of selecting overload. 

## Contents

  * [1 Parameters](operator_new.html#Parameters)
  * [2 Return value](operator_new.html#Return_value)
  * [3 Exceptions](operator_new.html#Exceptions)
  * [4 Global replacements](operator_new.html#Global_replacements)
  * [5 Class-specific overloads](operator_new.html#Class-specific_overloads)
  * [6 Notes](operator_new.html#Notes)
  * [7 Defect reports](operator_new.html#Defect_reports)
  * [8 References](operator_new.html#References)
  * [9 See also](operator_new.html#See_also)

### Parameters

count  |  \-  |  number of bytes to allocate   
---|---|---  
ptr  |  \-  |  pointer to a memory area to initialize the object at   
tag  |  \-  |  disambiguation tag used to select non-throwing overloads   
al  |  \-  |  alignment to use, invalid value leads to undefined behavior   
  
### Return value

1-4) If the allocation succeeds, a non-null pointer p0 which points to suitably aligned memory of size at least size and is different from any previously returned value p1, unless that value p1 was subsequently passed to a replaceable [deallocation function](operator_delete.html "cpp/memory/new/operator delete"); if the allocation fails, does not return (an exception is thrown, see below).

5-8) Same as ([1-4](operator_new.html#Version_1)), but returns a null pointer if the allocation fails.

9,10) ptr

11-22) Same as ([1-4](operator_new.html#Version_1)) if the function does not return on allocation failure, otherwise same as ([5-8](operator_new.html#Version_5)).

### Exceptions

1-4) Throws an exception of a type that would match a handler of type [std::bad_alloc](bad_alloc.html "cpp/memory/new/bad alloc") on failure to allocate memory.

11-22) Same as ([1-4](operator_new.html#Version_1)) if the function does not return on allocation failure, otherwise same as ([5-8](operator_new.html#Version_5)).

### Global replacements

Overloads ([1-8](operator_new.html#Version_1)) are [replaceable](../../language/replacement_function.html "cpp/language/replacement function"). The effects of the default versions are: 

1) Attempts to allocate the requested storage. Whether the attempt involves a call to [std::malloc](../c/malloc.html "cpp/memory/c/malloc") or [std::aligned_alloc](../c/aligned_alloc.html "cpp/memory/c/aligned alloc") is unspecified. 

  * If the attempt is successful, returns a pointer to the allocated storage. 
  * Otherwise, if currently no [new-handler](set_new_handler.html "cpp/memory/new/set new handler") is installed, throws [std::bad_alloc](bad_alloc.html "cpp/memory/new/bad alloc"). 
  * Otherwise, calls the currently installed new-handler. 
    * If the new-handler returns, starts another allocation attempt. 
    * Otherwise, exits the current invocation.



2) Returns operator new(count).

3) Same as (1).

4) Returns operator new(count, al).

5-8) Calls (1-4) respectively with the same arguments except for tag. 

  * If the call returns normally, returns the result of that call. 
  * Otherwise, returns a null pointer.



On [freestanding implementations](../../freestanding.html "cpp/freestanding"), it is implementation-defined whether the default versions of ([1-8](operator_new.html#Version_1)) satisfy the behaviors required above. Freestanding implementations are recommended that if any of these default versions meet the requirements of a hosted implementation, they all should.  | (since C++26)  
---|---  
  
Global `operator`s new/delete replacement:

Run this code
    
    
    #include <cstdio>
    #include <cstdlib>
    #include <new>
     
    // no inline, required by [replacement.functions]/3
    void* operator new([std::size_t](../../types/size_t.html) sz)
    {
        [std::printf](../../io/c/fprintf.html)("1) new(size_t), size = %zu\n", sz);
        if (sz == 0)
            ++sz; // avoid std::malloc(0) which may return nullptr on success
     
        if (void *ptr = [std::malloc](../c/malloc.html)(sz))
            return ptr;
     
        throw [std::bad_alloc](bad_alloc.html){}; // required by [new.delete.single]/3
    }
     
    // no inline, required by [replacement.functions]/3
    void* operator new[]([std::size_t](../../types/size_t.html) sz)
    {
        [std::printf](../../io/c/fprintf.html)("2) new[](size_t), size = %zu\n", sz);
        if (sz == 0)
            ++sz; // avoid std::malloc(0) which may return nullptr on success
     
        if (void *ptr = [std::malloc](../c/malloc.html)(sz))
            return ptr;
     
        throw [std::bad_alloc](bad_alloc.html){}; // required by [new.delete.single]/3
    }
     
    void [operator delete](operator_delete.html)(void* ptr) noexcept
    {
        [std::puts](../../io/c/puts.html)("3) delete(void*)");
        [std::free](../c/free.html)(ptr);
    }
     
    void [operator delete](operator_delete.html)(void* ptr, [std::size_t](../../types/size_t.html) size) noexcept
    {
        [std::printf](../../io/c/fprintf.html)("4) delete(void*, size_t), size = %zu\n", size);
        [std::free](../c/free.html)(ptr);
    }
     
    void [operator delete](operator_delete.html)[](void* ptr) noexcept
    {
        [std::puts](../../io/c/puts.html)("5) delete[](void* ptr)");
        [std::free](../c/free.html)(ptr);
    }
     
    void [operator delete](operator_delete.html)[](void* ptr, [std::size_t](../../types/size_t.html) size) noexcept
    {
        [std::printf](../../io/c/fprintf.html)("6) delete[](void*, size_t), size = %zu\n", size);
        [std::free](../c/free.html)(ptr);
    }
     
    int main()
    {
        int* p1 = new int;
        delete p1;
     
        int* p2 = new int[10]; // guaranteed to call the replacement in C++11
        delete[] p2;
    }

Possible output: 
    
    
    // Compiled with GCC-5 in C++17 mode to obtain the following:
    1) op new(size_t), size = 4
    4) op delete(void*, size_t), size = 4
    2) op new[](size_t), size = 40
    5) op delete[](void* ptr)

Overloads of `operator new` and `operator new[]` with additional user-defined parameters ("placement forms", versions ([11-14](operator_new.html#Version_11))) may be declared at global scope as usual, and are called by the matching [placement forms](../../language/new.html#Placement_new "cpp/language/new") of new expressions. 

The standard library's non-allocating placement forms of `operator new` ([9,10](operator_new.html#Version_9)) cannot be replaced and can only be customized if the placement new expression did not use the ::new syntax, by providing a class-specific placement new ([19,20](operator_new.html#Version_19)) with matching signature: void* T::operator new([std::size_t](../../types/size_t.html), void*) or void* T::operator new[]([std::size_t](../../types/size_t.html), void*). 

The placement form void* operator new([std::size_t](../../types/size_t.html), [std::size_t](../../types/size_t.html)) is not allowed because the matching signature of the deallocation function, void [operator delete](operator_delete.html)(void*, [std::size_t](../../types/size_t.html)), is a usual (not placement) deallocation function.  | (since C++14)  
---|---  
  
### Class-specific overloads

Both single-object and array allocation functions may be defined as public static member functions of a class (versions ([15-18](operator_new.html#Version_15))). If defined, these allocation functions are called by new expressions to allocate memory for single objects and arrays of this class, unless the new expression used the form ::new which bypasses class-scope lookup. The keyword [`static`](../../keywords/static.html "cpp/keyword/static") is optional for these functions: whether used or not, the allocation function is a static member function. 

The new expression looks for appropriate allocation function's name firstly in the class scope, and after that in the global scope. Note, that as per [name lookup rules](../../language/lookup.html "cpp/language/lookup"), any allocation functions declared in class scope hides all global allocation functions for the new expressions that attempt to allocate objects of this class. 

When allocating objects and arrays of objects whose alignment exceeds __STDCPP_DEFAULT_NEW_ALIGNMENT__, overload resolution is performed twice: first, for alignment-aware function signatures, then for alignment-unaware function signatures. This means that if a class with extended alignment has an alignment-unaware class-specific allocation function, it is the function that will be called, not the global alignment-aware allocation function. This is intentional: the class member is expected to know best how to handle that class.  | (since C++17)  
---|---  
When allocating objects and arrays of objects whose alignment does not exceed __STDCPP_DEFAULT_NEW_ALIGNMENT__, overload resolution is performed twice: first, for alignment-unaware function signatures, then for alignment-aware function signatures.  | (since C++20)  
---|---  
  
Run this code
    
    
    #include <cstddef>
    #include <iostream>
     
    // class-specific allocation functions
    struct X
    {
        static void* operator new([std::size_t](../../types/size_t.html) count)
        {
            [std::cout](../../io/cout.html) << "custom new for size " << count << '\n';
            return ::operator new(count);
        }
     
        static void* operator new[]([std::size_t](../../types/size_t.html) count)
        {
            [std::cout](../../io/cout.html) << "custom new[] for size " << count << '\n';
            return ::operator new[](count);
        }
    };
     
    int main()
    {
        X* p1 = new X;
        delete p1;
        X* p2 = new X[10];
        delete[] p2;
    }

Possible output: 
    
    
    custom new for size 1
    custom new[] for size 10

Overloads of `operator new` and `operator new[]` with additional user-defined parameters ("placement forms"), may also be defined as class members ([19-22](operator_new.html#Version_19))). When the placement new expression with the matching signature looks for the corresponding allocation function to call, it begins at class scope before examining the global scope, and if the class-specific placement new is provided, it is called. 

When allocating objects and arrays of objects whose alignment exceeds __STDCPP_DEFAULT_NEW_ALIGNMENT__, overload resolution for placement forms is performed twice just as for regular forms: first, for alignment-aware function signatures, then for alignment-unaware function signatures.  | (since C++17)  
---|---  
When allocating objects and arrays of objects whose alignment does not exceed __STDCPP_DEFAULT_NEW_ALIGNMENT__, overload resolution for placement forms is performed twice just as for regular forms: first, for alignment-unaware function signatures, then for alignment-aware function signatures.  | (since C++20)  
---|---  
  
Run this code
    
    
    #include <cstddef>
    #include <iostream>
    #include <stdexcept>
     
    struct X
    {
        X() { throw [std::runtime_error](../../error/runtime_error.html)(""); }
     
        // custom placement new
        static void* operator new([std::size_t](../../types/size_t.html) count, bool b)
        {
            [std::cout](../../io/cout.html) << "custom placement new called, b = " << b << '\n';
            return ::operator new(count);
        }
     
        // custom placement delete
        static void [operator delete](operator_delete.html)(void* ptr, bool b)
        {
            [std::cout](../../io/cout.html) << "custom placement delete called, b = " << b << '\n';
            ::[operator delete](operator_delete.html)(ptr);
        }
    };
     
    int main()
    {
        try
        {
            [[maybe_unused]] X* p1 = new (true) X;
        }
        catch (const [std::exception](../../error/exception.html)&)
        {}
    }

Output: 
    
    
    custom placement new called, b = 1
    custom placement delete called, b = 1

If class-level `operator new` is a template function, it must have the return type of void*, the first argument [std::size_t](../../types/size_t.html "cpp/types/size t"), and it must have two or more parameters. In other words, only placement forms can be templates. 

### Notes

Even though the non-allocating placement new ([9,10](operator_new.html#Version_9)) cannot be replaced, a function with the same signature may be defined at class scope as described above. In addition, global overloads that look like placement new but take a non-void pointer type as the second argument are allowed, so the code that wants to ensure that the true placement new is called (e.g. [std::allocator::construct](../allocator/construct.html "cpp/memory/allocator/construct")), must use ::new and also cast the pointer to void*. 

If the behavior of a deallocation function does not satisfy the default constraints, the behavior is undefined. 

The following functions are required to be thread-safe: 

  * The library versions of **`operator new`** and [`operator delete`](operator_delete.html "cpp/memory/new/operator delete")
  * User replacement versions of global **`operator new`** and [`operator delete`](operator_delete.html "cpp/memory/new/operator delete")
  * [std::calloc](../c/calloc.html "cpp/memory/c/calloc"), [std::malloc](../c/malloc.html "cpp/memory/c/malloc"), [std::realloc](../c/realloc.html "cpp/memory/c/realloc"), [std::aligned_alloc](../c/aligned_alloc.html "cpp/memory/c/aligned alloc")(since C++17), [std::free](../c/free.html "cpp/memory/c/free")

Calls to these functions that allocate or deallocate a particular unit of storage occur in a single total order, and each such deallocation call [happens-before](../../atomic/memory_order.html "cpp/atomic/memory order") the next allocation (if any) in this order.  | (since C++11)  
---|---  
  
It is unspecified whether library versions of `operator new` make any calls to [std::malloc](../c/malloc.html "cpp/memory/c/malloc") or [std::aligned_alloc](../c/aligned_alloc.html "cpp/memory/c/aligned alloc")(since C++17). 

For loading a large file, file mapping via OS-specific functions, e.g., [`mmap`](https://pubs.opengroup.org/onlinepubs/9799919799/functions/mmap.html) on POSIX or `CreateFileMapping`([`A`](https://learn.microsoft.com/en-us/windows/win32/api/winbase/nf-winbase-createfilemappinga)/[`W`](https://learn.microsoft.com/en-us/windows/win32/api/memoryapi/nf-memoryapi-createfilemappingw)) along with [`MapViewOfFile`](https://learn.microsoft.com/en-us/windows/win32/api/memoryapi/nf-memoryapi-mapviewoffile) on Windows, is preferable to allocating a buffer for file reading. 

[Feature-test](../../utility/feature_test.html "cpp/utility/feature test") macro  | Value | Std | Feature   
---|---|---|---  
[`__cpp_lib_freestanding_operator_new`](../../experimental/feature_test.html#cpp_lib_freestanding_operator_new "cpp/feature test") | [`202306L`](../../compiler_support/26.html#cpp_lib_freestanding_operator_new_202306L "cpp/compiler support/26") | (C++26) | freestanding support for replaceable operator new[[1]](operator_new.html#cite_note-1)  
[`0`](../../compiler_support/26.html#cpp_lib_freestanding_operator_new_0 "cpp/compiler support/26") | (C++26) | no freestanding support   
[`__cpp_lib_constexpr_new`](../../experimental/feature_test.html#cpp_lib_constexpr_new "cpp/feature test") | [`202406L`](../../compiler_support/26.html#cpp_lib_constexpr_new_202406L "cpp/compiler support/26") | (C++26) | constexpr placement new and new[]  
  
  1. [↑](operator_new.html#cite_ref-1) Formally, this macro expands to 202306L if all the default versions of the replaceable global allocation functions meet the requirements of a hosted implementation.



### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[CWG 521](https://cplusplus.github.io/CWG/issues/521.html) | C++98  | any class derived from [std::bad_alloc](bad_alloc.html "cpp/memory/new/bad alloc") could be thrown,  
even if the [std::bad_alloc](bad_alloc.html "cpp/memory/new/bad alloc") base is ambiguous or inaccessible  | the exception thrown should match  
a handler of type [std::bad_alloc](bad_alloc.html "cpp/memory/new/bad alloc")  
[LWG 9](https://cplusplus.github.io/LWG/issue9) | C++98  | multiple calls for allocating zero  
bytes could yield the same pointer  | only allowed if all such previously  
yielded pointers have been  
passed to deallocation functions   
[LWG 206](https://cplusplus.github.io/LWG/issue206) | C++98  | replacing the replaceable allocation functions did  
not affect the default behaviors of the corresponding  
replaceable non-throwing allocation functions  | the default behaviors  
change accordingly   
[LWG 404](https://cplusplus.github.io/LWG/issue404) | C++98  | replacements of the replaceable allocation  
functions could be declared inline | prohibited, no diagnostic required   
  
### References

  * C++23 standard (ISO/IEC 14882:2024): 



    

  * 17.7 Dynamic memory management [support.dynamic] 



  * C++20 standard (ISO/IEC 14882:2020): 



    

  * 17.6 Dynamic memory management [support.dynamic] 



  * C++17 standard (ISO/IEC 14882:2017): 



    

  * 21.6 Dynamic memory management [support.dynamic] 



  * C++14 standard (ISO/IEC 14882:2014): 



    

  * 18.6 Dynamic memory management [support.dynamic] 



  * C++11 standard (ISO/IEC 14882:2011): 



    

  * 18.6 Dynamic memory management [support.dynamic] 



  * C++03 standard (ISO/IEC 14882:2003): 



    

  * 18.4 Dynamic memory management [lib.support.dynamic] 



  * C++98 standard (ISO/IEC 14882:1998): 



    

  * 18.4 Dynamic memory management [lib.support.dynamic] 



### See also

[ operator new](../../coroutine/generator/promise_type/operator_new.html "cpp/coroutine/generator/promise type/operator new")[static] (C++23) |  allocates memory using `Allocator`   
(public static member function of `std::generator<Ref,V,Allocator>::promise_type`)   
---|---  
[ operator deleteoperator delete[]](operator_delete.html "cpp/memory/new/operator delete") |  deallocation functions   
(function)   
[ get_new_handler](get_new_handler.html "cpp/memory/new/get new handler")(C++11) |  obtains the current new handler   
(function)   
[ set_new_handler](set_new_handler.html "cpp/memory/new/set new handler") |  registers a new handler   
(function)   
[ get_temporary_buffer](../get_temporary_buffer.html "cpp/memory/get temporary buffer")(deprecated in C++17)(removed in C++20) |  obtains uninitialized storage   
(function template)   
[ malloc](../c/malloc.html "cpp/memory/c/malloc") |  allocates memory   
(function)   
[ aligned_alloc](../c/aligned_alloc.html "cpp/memory/c/aligned alloc")(C++17) |  allocates aligned memory   
(function) 
  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
