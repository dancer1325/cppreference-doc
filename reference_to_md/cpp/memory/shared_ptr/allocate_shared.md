 
  


  
  
  
  
[operator newoperator new[]](../new/operator_new.html "cpp/memory/new/operator new")  
[operator deleteoperator delete[]](../new/operator_delete.html "cpp/memory/new/operator delete")  
[nothrow_t](../new/nothrow_t.html "cpp/memory/new/nothrow t")  
[nothrow](../new/nothrow.html "cpp/memory/new/nothrow")  
[new_handler](../new/new_handler.html "cpp/memory/new/new handler")  
[set_new_handler](../new/set_new_handler.html "cpp/memory/new/set new handler")  
[get_new_handler](../new/get_new_handler.html "cpp/memory/new/get new handler")(C++11)  
[bad_alloc](../new/bad_alloc.html "cpp/memory/new/bad alloc")  
[bad_array_new_length](../new/bad_array_new_length.html "cpp/memory/new/bad array new length")(C++11)  
[align_val_t](../new/align_val_t.html "cpp/memory/new/align val t")(C++17)  
[destroying_delete_t](../new/destroying_delete_t.html "cpp/memory/new/destroying delete t")(C++20)  
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
  
  
  


[`std::shared_ptr`](../shared_ptr.html "cpp/memory/shared ptr")

Member functions  
---  
[shared_ptr::shared_ptr](shared_ptr.html "cpp/memory/shared ptr/shared ptr")  
[shared_ptr::~shared_ptr](~shared_ptr.html "cpp/memory/shared ptr/~shared ptr")  
[shared_ptr::operator=](operator=.html "cpp/memory/shared ptr/operator=")  
Modifiers  
[shared_ptr::reset](reset.html "cpp/memory/shared ptr/reset")  
[shared_ptr::swap](swap.html "cpp/memory/shared ptr/swap")  
Observers  
[shared_ptr::get](get.html "cpp/memory/shared ptr/get")  
[shared_ptr::operator*shared_ptr::operator->](operator*.html "cpp/memory/shared ptr/operator*")  
[shared_ptr::operator[]](operator_at.html "cpp/memory/shared ptr/operator at")(C++17)  
[shared_ptr::use_count](use_count.html "cpp/memory/shared ptr/use count")  
[shared_ptr::unique](unique.html "cpp/memory/shared ptr/unique")(until C++20*)  
[shared_ptr::operator bool](operator_bool.html "cpp/memory/shared ptr/operator bool")  
[shared_ptr::owner_before](owner_before.html "cpp/memory/shared ptr/owner before")  
[shared_ptr::owner_hash](owner_hash.html "cpp/memory/shared ptr/owner hash")(C++26)  
[shared_ptr::owner_equal](owner_equal.html "cpp/memory/shared ptr/owner equal")(C++26)  
Non-member functions  
[swap(std::shared_ptr)](swap2.html "cpp/memory/shared ptr/swap2")  
[make_sharedmake_shared_for_overwrite](make_shared.html "cpp/memory/shared ptr/make shared")(C++20)  
**allocate_shared allocate_shared_for_overwrite**(C++20)  
[static_pointer_castdynamic_pointer_castconst_pointer_castreinterpret_pointer_cast](pointer_cast.html "cpp/memory/shared ptr/pointer cast")(C++17)  
[get_deleter](get_deleter.html "cpp/memory/shared ptr/get deleter")  
[operator==operator!=operator<operator<=operator>operator>=operator<=>](operator_cmp.html "cpp/memory/shared ptr/operator cmp")(until C++20)(until C++20)(until C++20)(until C++20)(until C++20)(C++20)  
[operator<<](operator_ltlt.html "cpp/memory/shared ptr/operator ltlt")  
[atomic_xxx](atomic.html "cpp/memory/shared ptr/atomic")functions (until C++26*)  
Helper classes  
[atomic<std::shared_ptr>](atomic2.html "cpp/memory/shared ptr/atomic2")(C++20)  
[hash<std::shared_ptr>](hash.html "cpp/memory/shared ptr/hash")  
[Deduction guides](deduction_guides.html "cpp/memory/shared ptr/deduction guides")(C++17)  
  


Defined in header `[<memory>](../../header/memory.html "cpp/header/memory")` |  |   
---|---|---  
template< class T, class Alloc, class... Args >  
shared_ptr<T> allocate_shared( const Alloc& alloc, Args&&... args ); |  (1)  |  (since C++11)  
template< class T, class Alloc >  
shared_ptr<T> allocate_shared( const Alloc& alloc, [std::size_t](../../types/size_t.html) N ); |  (2)  |  (since C++20)  
template< class T, class Alloc >  
shared_ptr<T> allocate_shared( const Alloc& alloc ); |  (3)  |  (since C++20)  
template< class T, class Alloc >  
shared_ptr<T> allocate_shared( const Alloc& alloc, [std::size_t](../../types/size_t.html) N,  
const [std::remove_extent_t](../../types/remove_extent.html)<T>& u ); |  (4)  |  (since C++20)  
template< class T, class Alloc >  
shared_ptr<T> allocate_shared( const Alloc& alloc,  
const [std::remove_extent_t](../../types/remove_extent.html)<T>& u ); |  (5)  |  (since C++20)  
template< class T, class Alloc >  
shared_ptr<T> allocate_shared_for_overwrite( const Alloc& alloc ); |  (6) | (since C++20)  
template< class T, class Alloc >  
shared_ptr<T> allocate_shared_for_overwrite( const Alloc& alloc,  
[std::size_t](../../types/size_t.html) N ); |  (7)  |  (since C++20)  
| |   
  
Allocates memory for an object using a copy of alloc (rebound for an unspecified `value_type`) and initialize the object with the supplied arguments. Returns a [std::shared_ptr](../shared_ptr.html "cpp/memory/shared ptr") object managing the newly created object. 

1) The object is of type `T`, and is constructed as if by [std::allocator_traits](../allocator_traits.html)<Alloc>::construct  
(a, pt, ([std::forward](../../utility/forward.html)<Args>(args)...), where pt is a [std::remove_cv_t](../../types/remove_cv.html)<T>* pointer to storage suitable to hold an object of type [std::remove_cv_t](../../types/remove_cv.html)<T>. If the object is to be destroyed, it is destroyed as if by [std::allocator_traits](../allocator_traits.html)<Alloc>::destroy(a, pt), where pt is a pointer to that object of type [std::remove_cv_t](../../types/remove_cv.html)<T>.

In the description above, a is of type `Alloc`, and it is a potentially rebound copy of alloc.  This overload participates in overload resolution only if `T` is not an array type.  | (since C++20)  
---|---  
  
2) The object is of type [std::remove_extent_t](../../types/remove_extent.html)<T>[N]. Each element has a default initial value.

This overload participates in overload resolution only if `T` is an unbounded array type.

3) The object is of type `T`. Each element has a default initial value.

This overload participates in overload resolution only if `T` is a bounded array type.

4) The object is of type [std::remove_extent_t](../../types/remove_extent.html)<T>[N]. Each element has the initial value u.

This overload participates in overload resolution only if `T` is an unbounded array type.

5) The object is of type `T`. Each element has the initial value u.

This overload participates in overload resolution only if `T` is a bounded array type.

6) The object is of type `T`. 

  * If `T` is not an array type, the object is constructed as if by ::new (pv) T, where pv is a void* pointer to storage suitable to hold an object of type `T`. If the object is to be destroyed, it is destroyed as if by pt->~T(), where pt is a pointer to that object of type `T`. 
  * If `T` is a bounded array type, the initial value is unspecified for each element.



This overload participates in overload resolution only if `T` is not an array type or is an bounded array type.

7) The object is of type [std::remove_extent_t](../../types/remove_extent.html)<T>[N]. The initial value is unspecified for each element.

This overload participates in overload resolution only if `T` is an unbounded array type.

| 

## Contents

  * [1 Initializing and destroying array elements](allocate_shared.html#Initializing_and_destroying_array_elements)
  * [2 Parameters](allocate_shared.html#Parameters)
  * [3 Return value](allocate_shared.html#Return_value)
  * [4 Exceptions](allocate_shared.html#Exceptions)
  * [5 Notes](allocate_shared.html#Notes)
  * [6 Example](allocate_shared.html#Example)
  * [7 Defect reports](allocate_shared.html#Defect_reports)
  * [8 See also](allocate_shared.html#See_also)

  
---  
  
####  Initializing and destroying array elements

In the description below, a is of type `Alloc`, and it is a potentially rebound copy of alloc. 

Array elements of type `U` are initialized in ascending order of their addresses. 

  * If `U` is not an array type, each element is constructed as if by the following expression, where pu is a [std::remove_cv_t](../../types/remove_cv.html)<U>* pointer to storage suitable to hold an object of type [std::remove_cv_t](../../types/remove_cv.html)<U>, and pv is a void* pointer to storage suitable to hold an object of type `U`: 



2,3) [std::allocator_traits](../allocator_traits.html)<Alloc>::construct(a, pu)

4,5) [std::allocator_traits](../allocator_traits.html)<Alloc>::construct(a, pu, u)

6,7) ::new (pv) U

  * Otherwise, recursively initializes the elements of each element. For the next dimension: 



    

  * `U` becomes [std::remove_extent_t](../../types/remove_extent.html)<U>. 
  * For overloads (4,5), u becomes the corresponding element of u. 



When the lifetime of the object managed by the return [std::shared_ptr](../shared_ptr.html "cpp/memory/shared ptr") ends, or when the initialization of an array element throws an exception, the initialized elements are destroyed in the reverse order of their original construction. 

For each array element of non-array type `U` to be destroyed, it is destroyed as if by the following expression: 

2-5) [std::allocator_traits](../allocator_traits.html)<Alloc>::destroy(a, pu), where pu is a U* pointer to that array element of type `U`

6,7) pu->~U(), where pu is a pointer to that array element of type `U`

(since C++20)  
  
### Parameters

alloc  |  \-  |  the [Allocator](../../named_req/Allocator.html "cpp/named req/Allocator") to use   
---|---|---  
args...  |  \-  |  list of arguments with which an instance of `T` will be constructed   
N  |  \-  |  array size to use   
u  |  \-  |  the initial value to initialize every element of the array   
  
### Return value

[std::shared_ptr](../shared_ptr.html "cpp/memory/shared ptr") to an object of type `T` or [std::remove_extent_t](../../types/remove_extent.html)<T>[N] if `T` is an unbounded array type(since C++20). 

For the returned [std::shared_ptr](../shared_ptr.html "cpp/memory/shared ptr") r, r.get() returns a non-null pointer and r.use_count() returns 1. 

### Exceptions

Can throw the exceptions thrown from Alloc::allocate() or from the constructor of `T`. If an exception is thrown, (1) has no effect. If an exception is thrown during the construction of the array, already-initialized elements are destroyed in reverse order(since C++20). 

### Notes

These functions will typically allocate more memory than sizeof(T) to allow for internal bookkeeping structures such as reference counts. 

Like [std::make_shared](make_shared.html "cpp/memory/shared ptr/make shared"), this function typically performs only one allocation, and places both the `T` object and the control block in the allocated memory block (the standard recommends but does not require this, all known implementations do this). A copy of alloc is stored as part of the control block so that it can be used to deallocate it once both shared and weak reference counts reach zero. 

Unlike the `std::shared_ptr` [`constructors`](shared_ptr.html "cpp/memory/shared ptr/shared ptr"), `std::allocate_shared` does not accept a separate custom deleter: the supplied allocator is used for destruction of the control block and the `T` object, and for deallocation of their shared memory block. 

[std::shared_ptr](../shared_ptr.html "cpp/memory/shared ptr") supports array types (as of C++17), but `std::allocate_shared` does not. This functionality is supported by [`boost::allocate_shared`](https://www.boost.org/doc/libs/1_66_0/libs/smart_ptr/doc/html/smart_ptr.html#make_shared).  | (until C++20)  
---|---  
  
A constructor _enables`shared_from_this`_ with a pointer ptr of type `U*` means that it determines if `U` has an unambiguous and accessible(since C++17) base class that is a specialization of [std::enable_shared_from_this](../enable_shared_from_this.html "cpp/memory/enable shared from this"), and if so, the constructor evaluates  if (ptr != nullptr && ptr->`_[weak_this](../enable_shared_from_this.html#weak_this "cpp/memory/enable shared from this")_` ﻿.expired())  
` `ptr->`_[weak_this](../enable_shared_from_this.html#weak_this "cpp/memory/enable shared from this")_`` `= [std::shared_ptr](../shared_ptr.html)<[std::remove_cv_t](../../types/remove_cv.html)<U>>  
` `(*this, const_cast<[std::remove_cv_t](../../types/remove_cv.html)<U>*>(ptr)); . 

The assignment to the `_[weak_this](../enable_shared_from_this.html#weak_this "cpp/memory/enable shared from this")_` is not atomic and conflicts with any potentially concurrent access to the same object. This ensures that future calls to [`shared_from_this()`](../enable_shared_from_this/shared_from_this.html "cpp/memory/enable shared from this/shared from this") would share ownership with the [std::shared_ptr](../shared_ptr.html "cpp/memory/shared ptr") created by this raw pointer constructor. 

The test ptr->`_[weak_this](../enable_shared_from_this.html#weak_this "cpp/memory/enable shared from this")_` ﻿.expired() in the code above makes sure that `_[weak_this](../enable_shared_from_this.html#weak_this "cpp/memory/enable shared from this")_` is not reassigned if it already indicates an owner. This test is required as of C++17. 

[Feature-test](../../utility/feature_test.html "cpp/utility/feature test") macro | Value | Std | Feature   
---|---|---|---  
[`__cpp_lib_smart_ptr_for_overwrite`](../../experimental/feature_test.html#cpp_lib_smart_ptr_for_overwrite "cpp/feature test") | [`202002L`](../../compiler_support/20.html#cpp_lib_smart_ptr_for_overwrite_202002L "cpp/compiler support/20") | (C++20) | Smart pointer creation with default initialization (`std::allocate_shared_for_overwrite`, [std::make_shared_for_overwrite](make_shared.html "cpp/memory/shared ptr/make shared"), [std::make_unique_for_overwrite](../unique_ptr/make_unique.html "cpp/memory/unique ptr/make unique")); overloads ([6,7](allocate_shared.html#Version_6))  
  
### Example

Run this code
    
    
    #include <cstddef>
    #include <iostream>
    #include <memory>
    #include <memory_resource>
    #include <vector>
     
    class Value
    {
        int i;
    public:
        Value(int i) : i(i) { [std::cout](../../io/cout.html) << "Value(), i = " << i << '\n'; }
        ~Value() { [std::cout](../../io/cout.html) << "~Value(), i = " << i << '\n'; }
        void print() const { [std::cout](../../io/cout.html) << "i = " << i << '\n'; }
    };
     
    int main()
    {
        // Create a polymorphic allocator using the monotonic buffer resource
        [std::byte](../../types/byte.html) buffer[sizeof(Value) * 8];
        [std::pmr::monotonic_buffer_resource](../monotonic_buffer_resource.html) resource(buffer, sizeof(buffer));
        [std::pmr::polymorphic_allocator](../polymorphic_allocator.html)<Value> allocator(&resource);
     
        [std::vector](../../container/vector.html)<[std::shared_ptr](../shared_ptr.html)<Value>> v;
     
        for (int i{}; i != 4; ++i)
            // Use std::allocate_shared with the custom allocator
            v.emplace_back(std::allocate_shared<Value>(allocator, i));
     
        for (const auto& sp : v)
            sp->print();
    } //< All shared pointers will automatically clean up when they go out of scope.

Output: 
    
    
    Value(), i = 0
    Value(), i = 1
    Value(), i = 2
    Value(), i = 3
    i = 0
    i = 1
    i = 2
    i = 3
    ~Value(), i = 0
    ~Value(), i = 1
    ~Value(), i = 2
    ~Value(), i = 3

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 3216](https://cplusplus.github.io/LWG/issue3216) | C++20  | `std::allocate_shared` always rebound the  
allocator before constructing and destroying objects  | rebind is optional   
[LWG 4024](https://cplusplus.github.io/LWG/issue4024) | C++20  | it was unclear how the objects constructed in  
`std::allocate_shared_for_overwrite` are destroyed  | made clear   
  
### See also

[ (constructor)](shared_ptr.html "cpp/memory/shared ptr/shared ptr") |  constructs new `shared_ptr`   
(public member function)   
---|---  
[ make_sharedmake_shared_for_overwrite](make_shared.html "cpp/memory/shared ptr/make shared")(C++20) |  creates a shared pointer that manages a new object   
(function template) 
  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
