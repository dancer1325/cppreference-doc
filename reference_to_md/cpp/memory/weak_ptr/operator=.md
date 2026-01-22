 
  


  
  
  
  
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
**weak_ptr::operator=**  
Modifiers  
[weak_ptr::reset](reset.html "cpp/memory/weak ptr/reset")  
[weak_ptr::swap](swap.html "cpp/memory/weak ptr/swap")  
Observers  
[weak_ptr::use_count](use_count.html "cpp/memory/weak ptr/use count")  
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
  


weak_ptr& operator=( const weak_ptr& r ) noexcept; |  (1)  |  (since C++11)  
---|---|---  
template< class Y >   
weak_ptr& operator=( const weak_ptr<Y>& r ) noexcept; |  (2)  |  (since C++11)  
template< class Y >   
weak_ptr& operator=( const shared_ptr<Y>& r ) noexcept; |  (3)  |  (since C++11)  
weak_ptr& operator=( weak_ptr&& r ) noexcept; |  (4)  |  (since C++11)  
template< class Y >   
weak_ptr& operator=( weak_ptr<Y>&& r ) noexcept; |  (5)  |  (since C++11)  
| |   
  
Replaces the managed object with the one managed by r. The object is shared with r. If r manages no object, *this manages no object too. 

1-3) Equivalent to [std::weak_ptr](../weak_ptr.html)<T>(r).swap(*this).

4,5) Equivalent to [std::weak_ptr](../weak_ptr.html)<T>(std::move(r)).swap(*this).

## Contents

  * [1 Parameters](operator=.html#Parameters)
  * [2 Return value](operator=.html#Return_value)
  * [3 Notes](operator=.html#Notes)
  * [4 Defect reports](operator=.html#Defect_reports)
  * [5 See also](operator=.html#See_also)

  
---  
  
### Parameters

r  |  \-  |  smart pointer to share an object with   
---|---|---  
  
### Return value

*this

### Notes

The implementation may meet the requirements without creating a temporary `weak_ptr` object. 

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 2315](https://cplusplus.github.io/LWG/issue2315) | C++11  | move semantic was not enabled for `weak_ptr` | enabled   
  
### See also

[ (constructor)](weak_ptr.html "cpp/memory/weak ptr/weak ptr") |  creates a new `weak_ptr`   
(public member function)   
---|---  
[ swap](swap.html "cpp/memory/weak ptr/swap") |  swaps the managed objects   
(public member function) 
