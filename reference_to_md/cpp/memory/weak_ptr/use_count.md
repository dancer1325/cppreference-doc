 
  


  
  
  
  
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
**weak_ptr::use_count**  
[weak_ptr::expired](expired.html "cpp/memory/weak ptr/expired")  
[weak_ptr::lock](lock.html "cpp/memory/weak ptr/lock")  
[weak_ptr::owner_before](owner_before.html "cpp/memory/weak ptr/owner before")  
[weak_ptr::owner_hash](owner_hash.html "cpp/memory/weak ptr/owner hash")(C++26)  
[weak_ptr::owner_equal](owner_equal.html "cpp/memory/weak ptr/owner equal")(C++26)  
Non-member functions  
[swap(std::weak_ptr)](swap2.html "cpp/memory/weak ptr/swap2")  
Helper classes  
[atomic<std::weak_ptr>](atomic2.html "cpp/memory/weak ptr/atomic2")(C++20)  
[Deduction guides](deduction_guides.html "cpp/memory/weak ptr/deduction guides")(C++17)  
  


long use_count() const noexcept; |  |  (since C++11)  
---|---|---  
| |   
  
Returns the number of `shared_ptr` instances that share ownership of the managed object, or ​0​ if the managed object has already been deleted, i.e. *this is empty. 

## Contents

  * [1 Parameters](use_count.html#Parameters)
  * [2 Return value](use_count.html#Return_value)
  * [3 Notes](use_count.html#Notes)
  * [4 Example](use_count.html#Example)
  * [5 See also](use_count.html#See_also)

  
---  
  
### Parameters

(none) 

### Return value

The number of `shared_ptr` instances sharing the ownership of the managed object at the instant of the call. 

### Notes

The usage and behavior of this function are similar to [std::shared_ptr::use_count](../shared_ptr/use_count.html "cpp/memory/shared ptr/use count"), but it returns a different count. 

### Example

Run this code
    
    
    #include <iostream>
    #include <memory>
     
    [std::weak_ptr](../weak_ptr.html)<int> gwp;
     
    void observe_gwp()
    {
        [std::cout](../../io/cout.html) << "use_count(): " << gwp.use_count() << "\t id: ";
        if (auto sp = gwp.lock())
            [std::cout](../../io/cout.html) << *sp << '\n';
        else
            [std::cout](../../io/cout.html) << "??\n";
    }
     
    void share_recursively([std::shared_ptr](../shared_ptr.html)<int> sp, int depth)
    {
        observe_gwp(); // : 2 3 4
        if (1 < depth)
            share_recursively(sp, depth - 1);
        observe_gwp(); // : 4 3 2
    }
     
    int main()
    {
        observe_gwp();
        {
            auto sp = [std::make_shared](../shared_ptr/make_shared.html)<int>(42);
            gwp = sp;
            observe_gwp(); // : 1
            share_recursively(sp, 3); // : 2 3 4 4 3 2
            observe_gwp(); // : 1
        }
        observe_gwp(); // : 0
    }

Output: 
    
    
    use_count(): 0   id: ??
    use_count(): 1   id: 42
    use_count(): 2   id: 42
    use_count(): 3   id: 42
    use_count(): 4   id: 42
    use_count(): 4   id: 42
    use_count(): 3   id: 42
    use_count(): 2   id: 42
    use_count(): 1   id: 42
    use_count(): 0   id: ??

### See also

[ expired](expired.html "cpp/memory/weak ptr/expired") |  checks whether the referenced object was already deleted   
(public member function)   
---|---
