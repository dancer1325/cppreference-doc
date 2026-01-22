 
  


  
  
  
  
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
**shared_ptr::get**  
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
  


T* get() const noexcept; |  |  (until C++17)  
---|---|---  
element_type* get() const noexcept; |  |  (since C++17)  
| |   
  
Returns the stored pointer. 

## Contents

  * [1 Parameters](get.html#Parameters)
  * [2 Return value](get.html#Return_value)
  * [3 Notes](get.html#Notes)
  * [4 Example](get.html#Example)
  * [5 See also](get.html#See_also)

  
---  
  
### Parameters

(none) 

### Return value

The stored pointer. 

### Notes

A `shared_ptr` may share ownership of an object while storing a pointer to another object. `get()` returns the stored pointer, not the managed pointer. 

### Example

Run this code
    
    
    #include <iostream>
    #include <memory>
    #include <string_view>
     
    int main()
    {
        auto output = []([std::string_view](../../string/basic_string_view.html) msg, int const* pInt)
        {
            [std::cout](../../io/cout.html) << msg << *pInt << " in " << pInt << '\n';
        };
     
        int* pInt = new int(42);
        [std::shared_ptr](../shared_ptr.html)<int> pShared = [std::make_shared](make_shared.html)<int>(42);
     
        output("Naked pointer: ", pInt);
    //  output("Shared pointer: ", pShared); // compiler error
        output("Shared pointer: ", &*pShared); // OK, calls operator*, then takes addr
        output("Shared pointer with get(): ", pShared.get());
     
        delete pInt;
     
        [std::cout](../../io/cout.html) << "\nThe shared_ptr's aliasing constructor demo.\n";
        struct Base1 { int i1{}; };
        struct Base2 { int i2{}; };
        struct Derived : Base1, Base2 { int i3{}; };
     
        [std::shared_ptr](../shared_ptr.html)<Derived> p(new Derived());
        [std::shared_ptr](../shared_ptr.html)<Base2> q(p, static_cast<Base2*>(p.get()));
        [std::cout](../../io/cout.html) << "q shares ownership with p, but points to Base2 subobject:\n"
                  << "p.get(): " << p.get() << '\n'
                  << "q.get(): " << q.get() << '\n'
                  << "&(p->i1): " << &(p->i1) << '\n'
                  << "&(p->i2): " << &(p->i2) << '\n'
                  << "&(p->i3): " << &(p->i3) << '\n'
                  << "&(q->i2): " << &(q->i2) << '\n';
    }

Possible output: 
    
    
    Naked pointer: 42 in 0xacac20
    Shared pointer: 42 in 0xacac50
    Shared pointer with get(): 42 in 0xacac50
     
    The shared_ptr's aliasing constructor demo.
    q shares ownership with p, but points to Base2 subobject:
    p.get(): 0xacac20
    q.get(): 0xacac24
    &(p->i1): 0xacac20
    &(p->i2): 0xacac24
    &(p->i3): 0xacac28
    &(q->i2): 0xacac24

### See also

[ operator*operator->](operator*.html "cpp/memory/shared ptr/operator*") |  dereferences the stored pointer   
(public member function)   
---|---
