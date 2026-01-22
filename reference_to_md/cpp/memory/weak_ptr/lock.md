 
  


  
  
  
  
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
[weak_ptr::expired](expired.html "cpp/memory/weak ptr/expired")  
**weak_ptr::lock**  
[weak_ptr::owner_before](owner_before.html "cpp/memory/weak ptr/owner before")  
[weak_ptr::owner_hash](owner_hash.html "cpp/memory/weak ptr/owner hash")(C++26)  
[weak_ptr::owner_equal](owner_equal.html "cpp/memory/weak ptr/owner equal")(C++26)  
Non-member functions  
[swap(std::weak_ptr)](swap2.html "cpp/memory/weak ptr/swap2")  
Helper classes  
[atomic<std::weak_ptr>](atomic2.html "cpp/memory/weak ptr/atomic2")(C++20)  
[Deduction guides](deduction_guides.html "cpp/memory/weak ptr/deduction guides")(C++17)  
  


[std::shared_ptr](../shared_ptr.html)<T> lock() const noexcept; |  |  (since C++11)  
---|---|---  
| |   
  
Creates a new [std::shared_ptr](../shared_ptr.html "cpp/memory/shared ptr") that shares ownership of the managed object. If there is no managed object, i.e. *this is empty, then the returned `shared_ptr` also is empty. 

Effectively returns expired() ? shared_ptr<T>() : shared_ptr<T>(*this), executed atomically. 

## Contents

  * [1 Return value](lock.html#Return_value)
  * [2 Notes](lock.html#Notes)
  * [3 Example](lock.html#Example)
  * [4 Defect reports](lock.html#Defect_reports)
  * [5 See also](lock.html#See_also)

  
---  
  
### Return value

A `shared_ptr` which shares ownership of the owned object if [std::weak_ptr::expired](expired.html "cpp/memory/weak ptr/expired") returns false. Else returns default-constructed `shared_ptr` of type `T`. 

### Notes

Both this function and the constructor of [std::shared_ptr](../shared_ptr.html "cpp/memory/shared ptr") may be used to acquire temporary ownership of the managed object referred to by a `std::weak_ptr`. The difference is that the constructor of [std::shared_ptr](../shared_ptr.html "cpp/memory/shared ptr") throws an exception when its `std::weak_ptr` argument is empty, while std::weak_ptr<T>::lock() constructs an empty std::shared_ptr<T>. 

### Example

Run this code
    
    
    #include <iostream>
    #include <memory>
     
    void observe([std::weak_ptr](../weak_ptr.html)<int> weak)
    {
        if (auto p = weak.lock())
            [std::cout](../../io/cout.html) << "\tobserve() is able to lock weak_ptr<>, value=" << *p << '\n';
        else
            [std::cout](../../io/cout.html) << "\tobserve() is unable to lock weak_ptr<>\n";
    }
     
    int main()
    {
        [std::weak_ptr](../weak_ptr.html)<int> weak;
        [std::cout](../../io/cout.html) << "weak_ptr<> is not yet initialized\n";
        observe(weak);
     
        {
            auto shared = [std::make_shared](../shared_ptr/make_shared.html)<int>(42);
            weak = shared;
            [std::cout](../../io/cout.html) << "weak_ptr<> is initialized with shared_ptr\n";
            observe(weak);
        }
     
        [std::cout](../../io/cout.html) << "shared_ptr<> has been destructed due to scope exit\n";
        observe(weak);
    }

Output: 
    
    
    weak_ptr<> is not yet initialized
            observe() is unable to lock weak_ptr<>
    weak_ptr<> is initialized with shared_ptr
            observe() is able to lock weak_ptr<>, value=42
    shared_ptr<> has been destructed due to scope exit
            observe() is unable to lock weak_ptr<>

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 2316](https://cplusplus.github.io/LWG/issue2316) | C++11  | lock() was not required to be atomic, but required to be noexcept, which led to a contradiction  | specified to be atomic   
  
### See also

[ expired](expired.html "cpp/memory/weak ptr/expired") |  checks whether the referenced object was already deleted   
(public member function)   
---|---
