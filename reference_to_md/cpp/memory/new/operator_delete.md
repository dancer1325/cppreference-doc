 
  


  
  
  
  
  
  
  
  
  
  
  


  
  
  
  
[operator newoperator new[]](operator_new.html "cpp/memory/new/operator new")  
**operator delete operator delete[]**  
[nothrow_t](nothrow_t.html "cpp/memory/new/nothrow t")  
[nothrow](nothrow.html "cpp/memory/new/nothrow")  
[new_handler](new_handler.html "cpp/memory/new/new handler")  
[set_new_handler](set_new_handler.html "cpp/memory/new/set new handler")  
[get_new_handler](get_new_handler.html "cpp/memory/new/get new handler")(C++11)  
[bad_alloc](bad_alloc.html "cpp/memory/new/bad alloc")  
[bad_array_new_length](bad_array_new_length.html "cpp/memory/new/bad array new length")(C++11)  
[align_val_t](align_val_t.html "cpp/memory/new/align val t")(C++17)  
[destroying_delete_t](destroying_delete_t.html "cpp/memory/new/destroying delete t")(C++20)  
[launder](../../utility/launder.html "cpp/utility/launder")(C++17)  
[Smart pointers](../../memory.html#Smart_pointers "cpp/memory")  
[unique_ptr](../unique_ptr.html "cpp/memory/unique ptr")(C++11)  
[shared_ptr](../shared_ptr.html "cpp/memory/shared ptr")(C++11)  
[weak_ptr](../weak_ptr.html "cpp/memory/weak ptr")(C++11)  
[auto_ptr](../auto_ptr.html "cpp/memory/auto ptr")(until C++17*)  
[owner_less](../owner_less.html "cpp/memory/owner less")(C++11)  
[owner_less<void>](../owner_less_void.html "cpp/memory/owner less void")(C++17)  
[owner_hash](../owner_hash.html "cpp/memory/owner hash")(C++26)  
[owner_equal](../owner_equal.html "cpp/memory/owner equal")(C++26)  
[enable_shared_from_this](../enable_shared_from_this.html "cpp/memory/enable shared from this")(C++11)  
[bad_weak_ptr](../bad_weak_ptr.html "cpp/memory/bad weak ptr")(C++11)  
[default_delete](../default_delete.html "cpp/memory/default delete")(C++11)  
[out_ptr_t](../out_ptr_t.html "cpp/memory/out ptr t")(C++23)  
[inout_ptr_t](../inout_ptr_t.html "cpp/memory/inout ptr t")(C++23)  
[Miscellaneous](../../memory.html#Miscellaneous "cpp/memory")  
[pointer_traits](../pointer_traits.html "cpp/memory/pointer traits")(C++11)  
[to_address](../to_address.html "cpp/memory/to address")(C++20)  
[addressof](../addressof.html "cpp/memory/addressof")(C++11)  
[align](../align.html "cpp/memory/align")(C++11)  
[assume_aligned](../assume_aligned.html "cpp/memory/assume aligned")(C++20)  
[is_sufficiently_aligned](../is_sufficiently_aligned.html "cpp/memory/is sufficiently aligned")(C++26)  
[C Library](../c.html "cpp/memory/c")  
| [malloc](../c/malloc.html "cpp/memory/c/malloc")  
---  
[calloc](../c/calloc.html "cpp/memory/c/calloc")  
[realloc](../c/realloc.html "cpp/memory/c/realloc")  
  
| [free](../c/free.html "cpp/memory/c/free")  
---  
[aligned_alloc](../c/aligned_alloc.html "cpp/memory/c/aligned alloc")(C++17)  
  
  
  


[Low level memory management](../new.html "cpp/memory/new")

[Functions](../new.html#Functions "cpp/memory/new")  
---  
[operator newoperator new[]](operator_new.html "cpp/memory/new/operator new")  
**operator delete operator delete[]**  
[get_new_handler](get_new_handler.html "cpp/memory/new/get new handler")(C++11)  
[set_new_handler](set_new_handler.html "cpp/memory/new/set new handler")  
[Classes](../new.html#Classes "cpp/memory/new")  
[bad_alloc](bad_alloc.html "cpp/memory/new/bad alloc")  
[bad_array_new_length](bad_array_new_length.html "cpp/memory/new/bad array new length")(C++11)  
[align_val_t](align_val_t.html "cpp/memory/new/align val t")(C++17)  
[Types](../new.html#Types "cpp/memory/new")  
[new_handler](new_handler.html "cpp/memory/new/new handler")  
[Objects](../new.html#Objects "cpp/memory/new")  
[nothrow](nothrow.html "cpp/memory/new/nothrow")  
[destroying_delete](destroying_delete_t.html "cpp/memory/new/destroying delete")(C++20)  
[Object access](../new.html#Object_access "cpp/memory/new")  
[launder](../../utility/launder.html "cpp/utility/launder")(C++17)  
  


Defined in header `[<new>](../../header/new.html "cpp/header/new")` |  |   
---|---|---  
Replaceable usual deallocation functions |  |   
| (1) |   
void operator delete ( void* ptr ) throw(); |  | (until C++11)  
void operator delete ( void* ptr ) noexcept; |  |  (since C++11)  
| (2) |   
void operator delete[]( void* ptr ) throw(); |  | (until C++11)  
void operator delete[]( void* ptr ) noexcept; |  |  (since C++11)  
void operator delete ( void* ptr, [std::align_val_t](align_val_t.html) al ) noexcept; |  (3) | (since C++17)  
void operator delete[]( void* ptr, [std::align_val_t](align_val_t.html) al ) noexcept; |  (4) | (since C++17)  
void operator delete ( void* ptr, [std::size_t](../../types/size_t.html) sz ) noexcept; |  (5) | (since C++14)  
void operator delete[]( void* ptr, [std::size_t](../../types/size_t.html) sz ) noexcept; |  (6) | (since C++14)  
void operator delete ( void* ptr, [std::size_t](../../types/size_t.html) sz,  
[std::align_val_t](align_val_t.html) al ) noexcept; |  (7) | (since C++17)  
void operator delete[]( void* ptr, [std::size_t](../../types/size_t.html) sz,  
[std::align_val_t](align_val_t.html) al ) noexcept; |  (8) | (since C++17)  
Replaceable placement deallocation functions |  |   
| (9) |   
void operator delete ( void* ptr, const [std::nothrow_t](nothrow_t.html)& tag ) throw(); |  | (until C++11)  
void operator delete ( void* ptr, const [std::nothrow_t](nothrow_t.html)& tag ) noexcept; |  |  (since C++11)  
| (10) |   
void operator delete[]( void* ptr, const [std::nothrow_t](nothrow_t.html)& tag ) throw(); |  | (until C++11)  
void operator delete[]( void* ptr, const [std::nothrow_t](nothrow_t.html)& tag ) noexcept; |  |  (since C++11)  
void operator delete ( void* ptr, [std::align_val_t](align_val_t.html) al,  
const [std::nothrow_t](nothrow_t.html)& tag ) noexcept; |  (11) | (since C++17)  
void operator delete[]( void* ptr, [std::align_val_t](align_val_t.html) al,  
const [std::nothrow_t](nothrow_t.html)& tag ) noexcept; |  (12) | (since C++17)  
Non-allocating placement deallocation functions |  |   
| (13) |   
void operator delete ( void* ptr, void* place ) throw(); |  | (until C++11)  
void operator delete ( void* ptr, void* place ) noexcept; |  |  (since C++11)  
| (14) |   
void operator delete[]( void* ptr, void* place ) throw(); |  | (until C++11)  
void operator delete[]( void* ptr, void* place ) noexcept; |  |  (since C++11)  
User-defined placement deallocation functions |  |   
void operator delete ( void* ptr, args... ); |  (15) |   
void operator delete[]( void* ptr, args... ); |  (16) |   
Class-specific usual deallocation functions |  |   
void T::operator delete ( void* ptr ); |  (17) |   
void T::operator delete[]( void* ptr ); |  (18) |   
void T::operator delete ( void* ptr, [std::align_val_t](align_val_t.html) al ); |  (19) | (since C++17)  
void T::operator delete[]( void* ptr, [std::align_val_t](align_val_t.html) al ); |  (20) | (since C++17)  
void T::operator delete ( void* ptr, [std::size_t](../../types/size_t.html) sz ); |  (21) |   
void T::operator delete[]( void* ptr, [std::size_t](../../types/size_t.html) sz ); |  (22) |   
void T::operator delete ( void* ptr, [std::size_t](../../types/size_t.html) sz, [std::align_val_t](align_val_t.html) al ); |  (23) | (since C++17)  
void T::operator delete[]( void* ptr, [std::size_t](../../types/size_t.html) sz, [std::align_val_t](align_val_t.html) al ); |  (24) | (since C++17)  
Class-specific placement deallocation functions |  |   
void T::operator delete ( void* ptr, args... ); |  (25) |   
void T::operator delete[]( void* ptr, args... ); |  (26) |   
Class-specific usual destroying deallocation functions |  |   
void T::operator delete( T* ptr, [std::destroying_delete_t](destroying_delete_t.html) ); |  (27) | (since C++20)  
void T::operator delete( T* ptr, [std::destroying_delete_t](destroying_delete_t.html),  
[std::align_val_t](align_val_t.html) al ); |  (28) | (since C++20)  
void T::operator delete( T* ptr, [std::destroying_delete_t](destroying_delete_t.html), [std::size_t](../../types/size_t.html) sz ); |  (29) | (since C++20)  
void T::operator delete( T* ptr, [std::destroying_delete_t](destroying_delete_t.html),  
[std::size_t](../../types/size_t.html) sz, [std::align_val_t](align_val_t.html) al ); |  (30) | (since C++20)  
| |   
  
Deallocates storage previously allocated by a matching [operator new](operator_new.html "cpp/memory/new/operator new") or [operator new[]](operator_new.html "cpp/memory/new/operator new"). These deallocation functions are called by [delete and delete[] expressions](../../language/delete.html "cpp/language/delete") and by [placement new expressions](../../language/new.html#Placement_new "cpp/language/new") to deallocate memory after destructing (or failing to construct) objects with dynamic storage duration. They may also be called using regular function call syntax. 

1-12) [Replaceable](../../language/replacement_function.html "cpp/language/replacement function") deallocation functions. The standard library provides default implementations for these functions, for the effects of the default implementations, see [below](operator_delete.html#Global_replacement).

1-8) Called by delete and delete[] expressions. Invalidates any non-null ptr.

9-12) Called by placement new expressions upon [initialization failure](../../language/new.html#Initialization_failure "cpp/language/new"). operator delete[] invalidates any non-null ptr.

     If ptr is not a null pointer and one of the following conditions is satisfied, the behavior is undefined: 

  * For operator delete, the value of ptr does not represent the address of a block of memory allocated by an earlier call to (possibly replaced) [operator new](operator_new.html)([std::size_t](../../types/size_t.html)) (for overloads (1,5,9)) or [operator new](operator_new.html)([std::size_t](../../types/size_t.html), [std::align_val_t](align_val_t.html)) (for overloads (3,7,11)) which has not been invalidated by an intervening call to operator delete. 
  * For operator delete[], the value of ptr does not represent the address of a block of memory allocated by an earlier call to (possibly replaced) [operator new](operator_new.html)[]([std::size_t](../../types/size_t.html)) (for overloads (2,6,10)) or [operator new](operator_new.html)[]([std::size_t](../../types/size_t.html), [std::align_val_t](align_val_t.html)) (for overloads (4,8,12)) which has not been invalidated by an intervening call to operator delete[]. 



13,14) Called by placement new expressions that invoked [non-allocating placement allocation function](operator_new.html#Version_9 "cpp/memory/new/operator new") when any part of the initialization in the expression terminates by throwing an exception. Performs no action.

15-30) User-defined deallocation functions called by delete, delete[] and placement new expressions.

27-30) If defined, delete expressions does not execute the destructor for *ptr before placing a call to operator delete. Instead, direct invocation of the destructor such as by ptr->~T(); becomes the responsibility of this operator delete.

Overloads ([1-8](operator_delete.html#Version_1)) are implicitly declared in each translation unit even if the [`<new>`](../../header/new.html "cpp/header/new") header is not included. 

See [delete expression](../../language/delete.html "cpp/language/delete") for the criteria of selecting overload. 

## Contents

  * [1 Parameters](operator_delete.html#Parameters)
  * [2 Exceptions](operator_delete.html#Exceptions)
  * [3 Global replacements](operator_delete.html#Global_replacements)
  * [4 Class-specific overloads](operator_delete.html#Class-specific_overloads)
  * [5 Notes](operator_delete.html#Notes)
  * [6 Defect reports](operator_delete.html#Defect_reports)
  * [7 See also](operator_delete.html#See_also)

  
---  
  
### Parameters

ptr  |  \-  |  pointer to a memory block to deallocate or a null pointer   
---|---|---  
sz  |  \-  |  the size that was passed to the matching allocation function   
place  |  \-  |  pointer used as the placement parameter in the matching placement new   
tag  |  \-  |  overload disambiguation tag matching the tag used by non-throwing operator new   
al  |  \-  |  alignment of the object or array element that was allocated   
args  |  \-  |  arbitrary parameters matching a placement allocation function (may include [std::size_t](../../types/size_t.html "cpp/types/size t") and [std::align_val_t](align_val_t.html "cpp/memory/new/align val t"))   
  
### Exceptions

All deallocation functions are noexcept(true) unless specified otherwise in the declaration.  | (since C++11)  
---|---  
  
If a deallocation function terminates by throwing an exception, the behavior is undefined, even if it is declared with noexcept(false)(since C++11). 

### Global replacements

Overloads ([1-12](operator_delete.html#Version_1)) are [replaceable](../../language/replacement_function.html "cpp/language/replacement function"). The effects of the default versions are: 

1) If ptr is null, does nothing. Otherwise, reclaims the storage allocated by the earlier call to [operator new](operator_new.html).

2) Calls operator delete(ptr) as if overload (1) can reclaim the storage allocated by the earlier call to [operator new](operator_new.html)[].

3) Same as (1).

4) Calls operator delete(ptr, al) as if overload (3) can reclaim the storage allocated by the earlier call to [operator new](operator_new.html)[].

5) Calls operator delete(ptr).

6) Calls operator delete[](ptr).

7) Calls operator delete(ptr, al).

8) Calls operator delete[](ptr, al).

9) Calls operator delete(ptr).

10) Calls operator delete[](ptr).

11) Calls operator delete(ptr, al).

12) Calls operator delete[](ptr, al).

Global `operator`s new/delete replacement:

Run this code
    
    
    #include <cstdio>
    #include <cstdlib>
    #include <new>
     
    // no inline, required by [replacement.functions]/3
    void* [operator new](operator_new.html)([std::size_t](../../types/size_t.html) sz)
    {
        [std::printf](../../io/c/fprintf.html)("1) new(size_t), size = %zu\n", sz);
        if (sz == 0)
            ++sz; // avoid std::malloc(0) which may return nullptr on success
     
        if (void *ptr = [std::malloc](../c/malloc.html)(sz))
            return ptr;
     
        throw [std::bad_alloc](bad_alloc.html){}; // required by [new.delete.single]/3
    }
     
    // no inline, required by [replacement.functions]/3
    void* [operator new](operator_new.html)[]([std::size_t](../../types/size_t.html) sz)
    {
        [std::printf](../../io/c/fprintf.html)("2) new[](size_t), size = %zu\n", sz);
        if (sz == 0)
            ++sz; // avoid std::malloc(0) which may return nullptr on success
     
        if (void *ptr = [std::malloc](../c/malloc.html)(sz))
            return ptr;
     
        throw [std::bad_alloc](bad_alloc.html){}; // required by [new.delete.single]/3
    }
     
    void operator delete(void* ptr) noexcept
    {
        [std::puts](../../io/c/puts.html)("3) delete(void*)");
        [std::free](../c/free.html)(ptr);
    }
     
    void operator delete(void* ptr, [std::size_t](../../types/size_t.html) size) noexcept
    {
        [std::printf](../../io/c/fprintf.html)("4) delete(void*, size_t), size = %zu\n", size);
        [std::free](../c/free.html)(ptr);
    }
     
    void operator delete[](void* ptr) noexcept
    {
        [std::puts](../../io/c/puts.html)("5) delete[](void* ptr)");
        [std::free](../c/free.html)(ptr);
    }
     
    void operator delete[](void* ptr, [std::size_t](../../types/size_t.html) size) noexcept
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

Overloads of operator delete and operator delete[] with additional user-defined parameters ("placement forms", ([15,16](operator_delete.html#Version_15))) may be declared at global scope as usual, and are called by the matching placement forms of new expressions if a constructor of the object that is being allocated throws an exception. 

The standard library placement forms of operator delete and operator delete[] ([13,14](operator_delete.html#Version_13)) cannot be replaced and can only be customized if the placement new expression did not use the ::new syntax, by providing a class-specific placement delete ([25,26](operator_delete.html#Version_25)) with matching signature: void T::operator delete(void*, void*) or void T::operator delete[](void*, void*). 

### Class-specific overloads

Deallocation functions ([17-24](operator_delete.html#Version_17)) may be defined as static member functions of a class. These deallocation functions, if provided, are called by delete expressions when deleting objects ([17,19,21](operator_delete.html#Version_17)) and arrays ([18,20,22](operator_delete.html#Version_18)) of this class, unless the delete expression used the form ::delete which bypasses class-scope lookup. The keyword static is optional for these function declarations: whether the keyword is used or not, the deallocation function is always a static member function. 

The delete expression looks for appropriate deallocation function's name starting from the class scope (array form looks in the scope of the array element class) and proceeds to the global scope if no members are found as usual. Note, that as per [name lookup rules](../../language/lookup.html "cpp/language/lookup"), any deallocation functions declared in class scope hides all global deallocation functions. 

If the static type of the object that is being deleted differs from its dynamic type (such as when deleting a [polymorphic](../../language/objects.html "cpp/language/object") object through a pointer to base), and if the destructor in the static type is virtual, the single object form of delete begins lookup of the deallocation function's name starting from the point of definition of the final overrider of its virtual destructor. Regardless of which deallocation function would be executed at run time, the statically visible version of operator delete must be accessible in order to compile. In other cases, when deleting an array through a pointer to base, or when deleting through pointer to base with non-virtual destructor, the behavior is undefined. 

If the single-argument overload ([17,18](operator_delete.html#Version_17)) is not provided, but the size-aware overload taking [std::size_t](../../types/size_t.html "cpp/types/size t") as the second parameter ([21,22](operator_delete.html#Version_21)) is provided, the size-aware form is called for normal deallocation, and the C++ runtime passes the size of the object to be deallocated as the second argument. If both forms are defined, the size-unaware version is called. 

Run this code
    
    
    #include <cstddef>
    #include <iostream>
     
    // sized class-specific deallocation functions
    struct X
    {
        static void operator delete(void* ptr, [std::size_t](../../types/size_t.html) sz)
        {
            [std::cout](../../io/cout.html) << "custom delete for size " << sz << '\n';
            ::operator delete(ptr);
        }
     
        static void operator delete[](void* ptr, [std::size_t](../../types/size_t.html) sz)
        {
            [std::cout](../../io/cout.html) << "custom delete for size " << sz << '\n';
            ::operator delete[](ptr);
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
    
    
    custom delete for size 1
    custom delete for size 18

Overloads of operator delete and operator delete[] with additional user-defined parameters ("placement forms", ([25,26](operator_delete.html#Version_25))) may also be defined as class members. When the failed placement new expression looks for the corresponding placement delete function to call, it begins lookup at class scope before examining the global scope, and looks for the function with the signature matching the placement new: 

Run this code
    
    
    #include <cstddef>
    #include <iostream>
    #include <stdexcept>
     
    struct X
    {
        X() { throw [std::runtime_error](../../error/runtime_error.html)("X(): std::runtime_error"); }
     
        // custom placement new
        static void* [operator new](operator_new.html)([std::size_t](../../types/size_t.html) sz, bool b)
        {
            [std::cout](../../io/cout.html) << "custom placement new called, b = " << b << '\n';
            return ::[operator new](operator_new.html)(sz);
        }
     
        // custom placement delete
        static void operator delete(void* ptr, bool b)
        {
            [std::cout](../../io/cout.html) << "custom placement delete called, b = " << b << '\n';
            ::operator delete(ptr);
        }
    };
     
    int main()
    {
        try
        {
            [[maybe_unused]] X* p1 = new (true) X;
        }
        catch (const [std::exception](../../error/exception.html)& ex)
        {
            [std::cout](../../io/cout.html) << ex.what() << '\n';
        }
    }

Output: 
    
    
    custom placement new called, b = 1
    custom placement delete called, b = 1
    X(): std::runtime_error

If class-level operator delete is a template function, it must have the return type of void, the first argument void*, and it must have two or more parameters. In other words, only placement forms can be templates. A template instance is never a usual deallocation function, regardless of its signature. The specialization of the template operator delete is chosen with [template argument deduction](../../language/template_argument_deduction.html "cpp/language/template argument deduction"). 

### Notes

The call to the class-specific T::operator delete on a polymorphic class is the only case where a static member function is called through dynamic dispatch. 

The following functions are required to be thread-safe: 

  * The library versions of [`operator new`](operator_new.html "cpp/memory/new/operator new") and **`operator delete`**
  * User replacement versions of global [`operator new`](operator_new.html "cpp/memory/new/operator new") and **`operator delete`**
  * [std::calloc](../c/calloc.html "cpp/memory/c/calloc"), [std::malloc](../c/malloc.html "cpp/memory/c/malloc"), [std::realloc](../c/realloc.html "cpp/memory/c/realloc"), [std::aligned_alloc](../c/aligned_alloc.html "cpp/memory/c/aligned alloc")(since C++17), [std::free](../c/free.html "cpp/memory/c/free")

Calls to these functions that allocate or deallocate a particular unit of storage occur in a single total order, and each such deallocation call [happens-before](../../atomic/memory_order.html "cpp/atomic/memory order") the next allocation (if any) in this order.  | (since C++11)  
---|---  
[Feature-test](../../utility/feature_test.html "cpp/utility/feature test") macro  | Value | Std | Feature   
---|---|---|---  
[`__cpp_sized_deallocation`](../../experimental/feature_test.html#cpp_sized_deallocation "cpp/feature test") | [`201309L`](../../compiler_support/14.html#cpp_sized_deallocation_201309L "cpp/compiler support/14") | (C++14) | Sized deallocation   
[`__cpp_impl_destroying_delete`](../../experimental/feature_test.html#cpp_impl_destroying_delete "cpp/feature test") | [`201806L`](../../compiler_support/20.html#cpp_impl_destroying_delete_201806L "cpp/compiler support/20") | (C++20) | Destroying operator delete (compiler support)   
[`__cpp_lib_destroying_delete`](../../experimental/feature_test.html#cpp_lib_destroying_delete "cpp/feature test") | [`201806L`](../../compiler_support/20.html#cpp_lib_destroying_delete_201806L "cpp/compiler support/20") | (C++20) | Destroying operator delete (library support)   
  
### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[CWG 220](https://cplusplus.github.io/CWG/issues/220.html) | C++98  | user-defined deallocation functions were permitted to throw  | throwing from a deallocation function  
results in undefined behavior   
[CWG 1438](https://cplusplus.github.io/CWG/issues/1438.html) | C++98  | any use of an invalid pointer value was undefined behavior  | only indirection and deallocation are   
[LWG 206](https://cplusplus.github.io/LWG/issue206) | C++98  | replacing ([2](operator_delete.html#Version_2)) did not affect the default behavior of ([10](operator_delete.html#Version_10)) | the default behavior  
changes accordingly   
[LWG 298](https://cplusplus.github.io/LWG/issue298) | C++98  | replacing ([1](operator_delete.html#Version_1)) did not affect the default behavior of ([9](operator_delete.html#Version_9)) | the default behavior  
changes accordingly   
[LWG 404](https://cplusplus.github.io/LWG/issue404) | C++98  | replacements of the replaceable deallocation  
functions could be declared inline | prohibited, no diagnostic required   
[LWG 2458](https://cplusplus.github.io/LWG/issue2458) | C++14  | overloads taking (void*, [std::size_t](../../types/size_t.html), const  
[std::nothrow_t](nothrow_t.html)&) were specified, but could never be called  | removed spurious overloads   
  
### See also

[ operator delete](../../coroutine/generator/promise_type/operator_delete.html "cpp/coroutine/generator/promise type/operator delete")[static] (C++23) |  deallocates memory previously obtained from `operator new`   
(public static member function of `std::generator<Ref,V,Allocator>::promise_type`)   
---|---  
[ operator newoperator new[]](operator_new.html "cpp/memory/new/operator new") |  allocation functions   
(function)   
[ return_temporary_buffer](../return_temporary_buffer.html "cpp/memory/return temporary buffer")(deprecated in C++17)(removed in C++20) |  frees uninitialized storage   
(function template)   
[ free](../c/free.html "cpp/memory/c/free") |  deallocates previously allocated memory   
(function) 
  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
