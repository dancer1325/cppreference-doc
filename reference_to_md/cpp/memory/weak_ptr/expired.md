 
  


  
  
  
  
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
  
  
  


[`std::weak_ptr`](../weak_ptr.html "cpp/memory/weak ptr")

Member functions  
---  
[weak_ptr::weak_ptr](weak_ptr.html "cpp/memory/weak ptr/weak ptr")  
[weak_ptr::~weak_ptr](~weak_ptr.html "cpp/memory/weak ptr/~weak ptr")  
[weak_ptr::operator=](operator=.html "cpp/memory/weak ptr/operator=")  
Modifiers  
[weak_ptr::reset](reset.html "cpp/memory/weak ptr/reset")  
[weak_ptr::swap](swap.html "cpp/memory/weak ptr/swap")  
Observers  
[weak_ptr::use_count](use_count.html "cpp/memory/weak ptr/use count")  
**weak_ptr::expired**  
[weak_ptr::lock](lock.html "cpp/memory/weak ptr/lock")  
[weak_ptr::owner_before](owner_before.html "cpp/memory/weak ptr/owner before")  
[weak_ptr::owner_hash](owner_hash.html "cpp/memory/weak ptr/owner hash")(C++26)  
[weak_ptr::owner_equal](owner_equal.html "cpp/memory/weak ptr/owner equal")(C++26)  
Non-member functions  
[swap(std::weak_ptr)](swap2.html "cpp/memory/weak ptr/swap2")  
Helper classes  
[atomic<std::weak_ptr>](atomic2.html "cpp/memory/weak ptr/atomic2")(C++20)  
[Deduction guides](deduction_guides.html "cpp/memory/weak ptr/deduction guides")(C++17)  
  


bool expired() const noexcept; |  |  (since C++11)  
---|---|---  
| |   
  
Equivalent to use_count() == 0. The destructor for the managed object may not yet have been called, but this object's destruction is imminent (or may have already happened). 

## Contents

  * [1 Parameters](expired.html#Parameters)
  * [2 Return value](expired.html#Return_value)
  * [3 Notes](expired.html#Notes)
  * [4 Example](expired.html#Example)
  * [5 See also](expired.html#See_also)

  
---  
  
### Parameters

(none) 

### Return value

true if the managed object has already been deleted, false otherwise. 

### Notes

If the managed object is shared among threads, it is only meaningful when `expired()` returns true. 

### Example

Demonstrates how `expired` is used to check validity of the pointer.

Run this code
    
    
    #include <iostream>
    #include <memory>
     
    [std::weak_ptr](../weak_ptr.html)<int> gw;
     
    void f()
    {
        if (!gw.expired())
    	[std::cout](../../io/cout.html) << "gw is valid\n";
        else
            [std::cout](../../io/cout.html) << "gw is expired\n";
    }
     
    int main()
    {
        {
            auto sp = [std::make_shared](../shared_ptr/make_shared.html)<int>(42);
    	gw = sp;
     
    	f();
        }
     
        f();
    }

Output: 
    
    
    gw is valid
    gw is expired

### See also

[ lock](lock.html "cpp/memory/weak ptr/lock") |  creates a `shared_ptr` that manages the referenced object   
(public member function)   
---|---  
[ use_count](use_count.html "cpp/memory/weak ptr/use count") |  returns the number of `shared_ptr` objects that manage the object   
(public member function) 
