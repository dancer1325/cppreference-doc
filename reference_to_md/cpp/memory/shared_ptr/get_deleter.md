 
  


  
  
  
  
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
[allocate_sharedallocate_shared_for_overwrite](allocate_shared.html "cpp/memory/shared ptr/allocate shared")(C++20)  
[static_pointer_castdynamic_pointer_castconst_pointer_castreinterpret_pointer_cast](pointer_cast.html "cpp/memory/shared ptr/pointer cast")(C++17)  
**get_deleter**  
[operator==operator!=operator<operator<=operator>operator>=operator<=>](operator_cmp.html "cpp/memory/shared ptr/operator cmp")(until C++20)(until C++20)(until C++20)(until C++20)(until C++20)(C++20)  
[operator<<](operator_ltlt.html "cpp/memory/shared ptr/operator ltlt")  
[atomic_xxx](atomic.html "cpp/memory/shared ptr/atomic")functions (until C++26*)  
Helper classes  
[atomic<std::shared_ptr>](atomic2.html "cpp/memory/shared ptr/atomic2")(C++20)  
[hash<std::shared_ptr>](hash.html "cpp/memory/shared ptr/hash")  
[Deduction guides](deduction_guides.html "cpp/memory/shared ptr/deduction guides")(C++17)  
  


Defined in header `[<memory>](../../header/memory.html "cpp/header/memory")` |  |   
---|---|---  
template< class Deleter, class T >  
Deleter* get_deleter( const [std::shared_ptr](../shared_ptr.html)<T>& p ) noexcept; |  |  (since C++11)  
| |   
  
Access to the p's deleter. If the shared pointer p owns a deleter of type cv-unqualified `Deleter` (e.g. if it was created with one of the constructors that take a deleter as a parameter), then returns a pointer to the deleter. Otherwise, returns a null pointer. 

## Contents

  * [1 Parameters](get_deleter.html#Parameters)
  * [2 Return value](get_deleter.html#Return_value)
  * [3 Notes](get_deleter.html#Notes)
  * [4 Example](get_deleter.html#Example)
  * [5 See also](get_deleter.html#See_also)

  
---  
  
### Parameters

p  |  \-  |  a shared pointer whose deleter needs to be accessed   
---|---|---  
  
### Return value

A pointer to the owned deleter or [`nullptr`](../../language/nullptr.html "cpp/language/nullptr"). The returned pointer is valid at least as long as there remains at least one [shared_ptr](../shared_ptr.html "cpp/memory/shared ptr") instance that owns it. 

### Notes

The returned pointer may outlive the last [shared_ptr](../shared_ptr.html "cpp/memory/shared ptr") if, for example, [std::weak_ptr](../weak_ptr.html "cpp/memory/weak ptr")s remain and the implementation doesn't destroy the deleter until the entire control block is destroyed. 

### Example

Demonstrates that [std::shared_ptr](../shared_ptr.html "cpp/memory/shared ptr") deleter is independent of the [shared_ptr](../shared_ptr.html "cpp/memory/shared ptr")'s type.

Run this code
    
    
    #include <iostream>
    #include <memory>
     
    struct Foo { int i; };
    void foo_deleter(Foo* p)
    {
        [std::cout](../../io/cout.html) << "foo_deleter called!\n";
        delete p;
    }
     
    int main()
    {
        [std::shared_ptr](../shared_ptr.html)<int> aptr;
     
        {
            // create a shared_ptr that owns a Foo and a deleter
            auto foo_p = new Foo;
            [std::shared_ptr](../shared_ptr.html)<Foo> r(foo_p, foo_deleter);
            aptr = [std::shared_ptr](../shared_ptr.html)<int>(r, &r->i); // aliasing ctor
            // aptr is now pointing to an int, but managing the whole Foo
        } // r gets destroyed (deleter not called)
     
        // obtain pointer to the deleter:
        if (auto del_p = std::get_deleter<void(*)(Foo*)>(aptr))
        {
            [std::cout](../../io/cout.html) << "shared_ptr<int> owns a deleter\n";
            if (*del_p == foo_deleter)
                [std::cout](../../io/cout.html) << "...and it equals &foo_deleter\n";
        }
        else
            [std::cout](../../io/cout.html) << "The deleter of shared_ptr<int> is null!\n";
    } // deleter called here

Output: 
    
    
    shared_ptr<int> owns a deleter
    ...and it equals &foo_deleter
    foo_deleter called!

### See also

[ (constructor)](shared_ptr.html "cpp/memory/shared ptr/shared ptr") |  [std::shared_ptr](../shared_ptr.html "cpp/memory/shared ptr") constructors   
(public member function)  
---|---  
[ get_deleter](../unique_ptr/get_deleter.html "cpp/memory/unique ptr/get deleter") |  returns the deleter that is used for destruction of the managed object   
(public member function of `std::unique_ptr<T,Deleter>`) 
