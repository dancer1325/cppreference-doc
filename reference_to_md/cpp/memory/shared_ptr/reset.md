 
  


  
  
  
  
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
**shared_ptr::reset**  
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
[allocate_sharedallocate_shared_for_overwrite](allocate_shared.html "cpp/memory/shared ptr/allocate shared")(C++20)  
[static_pointer_castdynamic_pointer_castconst_pointer_castreinterpret_pointer_cast](pointer_cast.html "cpp/memory/shared ptr/pointer cast")(C++17)  
[get_deleter](get_deleter.html "cpp/memory/shared ptr/get deleter")  
[operator==operator!=operator<operator<=operator>operator>=operator<=>](operator_cmp.html "cpp/memory/shared ptr/operator cmp")(until C++20)(until C++20)(until C++20)(until C++20)(until C++20)(C++20)  
[operator<<](operator_ltlt.html "cpp/memory/shared ptr/operator ltlt")  
[atomic_xxx](atomic.html "cpp/memory/shared ptr/atomic")functions (until C++26*)  
Helper classes  
[atomic<std::shared_ptr>](atomic2.html "cpp/memory/shared ptr/atomic2")(C++20)  
[hash<std::shared_ptr>](hash.html "cpp/memory/shared ptr/hash")  
[Deduction guides](deduction_guides.html "cpp/memory/shared ptr/deduction guides")(C++17)  
  


void reset() noexcept; |  (1)  |  (since C++11)  
---|---|---  
template< class Y >   
void reset( Y* ptr ); |  (2)  |  (since C++11)  
template< class Y, class Deleter >   
void reset( Y* ptr, Deleter d ); |  (3)  |  (since C++11)  
template< class Y, class Deleter, class Alloc >   
void reset( Y* ptr, Deleter d, Alloc alloc ); |  (4)  |  (since C++11)  
| |   
  
Replaces the managed object with an object pointed to by ptr. Optional deleter d can be supplied, which is later used to destroy the new object when no `shared_ptr` objects own it. By default, [`delete`](../../language/delete.html "cpp/language/delete") expression is used as deleter. Proper [`delete`](../../language/delete.html "cpp/language/delete") expression corresponding to the supplied type is always selected, this is the reason why the function is implemented as template using a separate parameter `Y`. 

If *this already owns an object and it is the last `shared_ptr` owning it, the object is destroyed through the owned deleter. 

If the object pointed to by ptr is already owned, the function generally results in undefined behavior. 

1) Releases the ownership of the managed object, if any. After the call, *this manages no object. Equivalent to shared_ptr().swap(*this);.

2-4) Replaces the managed object with an object pointed to by ptr. `Y` must be a complete type and implicitly convertible to `T`. Additionally:

2) Uses the delete expression as the deleter. A valid delete expression must be available, i.e. delete ptr must be well formed, have well-defined behavior and not throw any exceptions. Equivalent to shared_ptr<T>(ptr).swap(*this);.

3) Uses the specified deleter d as the deleter. `Deleter` must be callable for the type `T`, i.e. d(ptr) must be well formed, have well-defined behavior and not throw any exceptions. `Deleter` must be [CopyConstructible](../../named_req/CopyConstructible.html "cpp/named req/CopyConstructible"), and its copy constructor and destructor must not throw exceptions. Equivalent to shared_ptr<T>(ptr, d).swap(*this);.

4) Same as (3), but additionally uses a copy of alloc for allocation of data for internal use. `Alloc` must be an [Allocator](../../named_req/Allocator.html "cpp/named req/Allocator"). The copy constructor and destructor must not throw exceptions. Equivalent to shared_ptr<T>(ptr, d, alloc).swap(*this);.

## Contents

  * [1 Parameters](reset.html#Parameters)
  * [2 Return value](reset.html#Return_value)
  * [3 Exceptions](reset.html#Exceptions)
  * [4 Example](reset.html#Example)
  * [5 See also](reset.html#See_also)

  
---  
  
### Parameters

ptr  |  \-  |  pointer to an object to acquire ownership of   
---|---|---  
d  |  \-  |  deleter to store for deletion of the object   
alloc  |  \-  |  allocator to use for internal allocations   
  
### Return value

(none) 

### Exceptions

2) [std::bad_alloc](../new/bad_alloc.html "cpp/memory/new/bad alloc") if required additional memory could not be obtained. May throw implementation-defined exception for other errors. delete ptr is called if an exception occurs.

3,4) [std::bad_alloc](../new/bad_alloc.html "cpp/memory/new/bad alloc") if required additional memory could not be obtained. May throw implementation-defined exception for other errors. d(ptr) is called if an exception occurs.

### Example

Run this code
    
    
    #include <iostream>
    #include <memory>
     
    struct Foo
    {
        Foo(int n = 0) noexcept : bar(n)
        {
            [std::cout](../../io/cout.html) << "Foo::Foo(), bar = " << bar << " @ " << this << '\n';
        }
        ~Foo()
        {
            [std::cout](../../io/cout.html) << "Foo::~Foo(), bar = " << bar << " @ " << this << '\n';
        }
        int getBar() const noexcept { return bar; }
    private:
        int bar;
    };
     
    int main()
    {
        [std::cout](../../io/cout.html) << "1) unique ownership\n";
        {
            [std::shared_ptr](../shared_ptr.html)<Foo> sptr = [std::make_shared](make_shared.html)<Foo>(100);
     
            [std::cout](../../io/cout.html) << "Foo::bar = " << sptr->getBar() << ", use_count() = "
                      << sptr.use_count() << '\n';
     
            // Reset the shared_ptr without handing it a fresh instance of Foo.
            // The old instance will be destroyed after this call.
            [std::cout](../../io/cout.html) << "call sptr.reset()...\n";
            sptr.reset(); // calls Foo's destructor here
            [std::cout](../../io/cout.html) << "After reset(): use_count() = " << sptr.use_count()
                      << ", sptr = " << sptr << '\n';
        }   // No call to Foo's destructor, it was done earlier in reset().
     
        [std::cout](../../io/cout.html) << "\n2) unique ownership\n";
        {
            [std::shared_ptr](../shared_ptr.html)<Foo> sptr = [std::make_shared](make_shared.html)<Foo>(200);
     
            [std::cout](../../io/cout.html) << "Foo::bar = " << sptr->getBar() << ", use_count() = "
                      << sptr.use_count() << '\n';
     
            // Reset the shared_ptr, hand it a fresh instance of Foo.
            // The old instance will be destroyed after this call.
            [std::cout](../../io/cout.html) << "call sptr.reset()...\n";
            sptr.reset(new Foo{222});
            [std::cout](../../io/cout.html) << "After reset(): use_count() = " << sptr.use_count()
                      << ", sptr = " << sptr << "\nLeaving the scope...\n";
        }   // Calls Foo's destructor.
     
        [std::cout](../../io/cout.html) << "\n3) multiple ownership\n";
        {
            [std::shared_ptr](../shared_ptr.html)<Foo> sptr1 = [std::make_shared](make_shared.html)<Foo>(300);
            [std::shared_ptr](../shared_ptr.html)<Foo> sptr2 = sptr1;
            [std::shared_ptr](../shared_ptr.html)<Foo> sptr3 = sptr2;
     
            [std::cout](../../io/cout.html) << "Foo::bar = " << sptr1->getBar() << ", use_count() = "
                      << sptr1.use_count() << '\n';
     
            // Reset the shared_ptr sptr1, hand it a fresh instance of Foo.
            // The old instance will stay shared between sptr2 and sptr3.
            [std::cout](../../io/cout.html) << "call sptr1.reset()...\n";
            sptr1.reset(new Foo{333});
     
            [std::cout](../../io/cout.html) << "After reset():\n"
                      << "sptr1.use_count() = " << sptr1.use_count()
                      << ", sptr1 @ " << sptr1 << '\n'
                      << "sptr2.use_count() = " << sptr2.use_count()
                      << ", sptr2 @ " << sptr2 << '\n'
                      << "sptr3.use_count() = " << sptr3.use_count()
                      << ", sptr3 @ " << sptr3 << '\n'
                      << "Leaving the scope...\n";
        }   // Calls two destructors of: 1) Foo owned by sptr1,
            // 2) Foo shared between sptr2/sptr3.
    }

Possible output: 
    
    
    1) unique ownership
    Foo::Foo(), bar = 100 @ 0x23c5040
    Foo::bar = 100, use_count() = 1
    call sptr.reset()...
    Foo::~Foo(), bar = 100 @ 0x23c5040
    After reset(): use_count() = 0, sptr = 0
     
    2) unique ownership
    Foo::Foo(), bar = 200 @ 0x23c5040
    Foo::bar = 200, use_count() = 1
    call sptr.reset()...
    Foo::Foo(), bar = 222 @ 0x23c5050
    Foo::~Foo(), bar = 200 @ 0x23c5040
    After reset(): use_count() = 1, sptr = 0x23c5050
    Leaving the scope...
    Foo::~Foo(), bar = 222 @ 0x23c5050
     
    3) multiple ownership
    Foo::Foo(), bar = 300 @ 0x23c5080
    Foo::bar = 300, use_count() = 3
    call sptr1.reset()...
    Foo::Foo(), bar = 333 @ 0x23c5050
    After reset():
    sptr1.use_count() = 1, sptr1 @ 0x23c5050
    sptr2.use_count() = 2, sptr2 @ 0x23c5080
    sptr3.use_count() = 2, sptr3 @ 0x23c5080
    Leaving the scope...
    Foo::~Foo(), bar = 300 @ 0x23c5080
    Foo::~Foo(), bar = 333 @ 0x23c5050

### See also

[ (constructor)](shared_ptr.html "cpp/memory/shared ptr/shared ptr") |  constructs new `shared_ptr`   
(public member function)   
---|---
