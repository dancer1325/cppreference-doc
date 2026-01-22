 
  


  
  
  
  
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
  
  
  


[`std::unique_ptr`](../unique_ptr.html "cpp/memory/unique ptr")

[Member functions](../unique_ptr.html#Member_functions "cpp/memory/unique ptr")  
---  
[unique_ptr::unique_ptr](unique_ptr.html "cpp/memory/unique ptr/unique ptr")  
[unique_ptr::~unique_ptr](~unique_ptr.html "cpp/memory/unique ptr/~unique ptr")  
[unique_ptr::operator=](operator=.html "cpp/memory/unique ptr/operator=")  
[Modifiers](../unique_ptr.html#Modifiers "cpp/memory/unique ptr")  
[unique_ptr::release](release.html "cpp/memory/unique ptr/release")  
**unique_ptr::reset**  
[unique_ptr::swap](swap.html "cpp/memory/unique ptr/swap")  
[Observers](../unique_ptr.html#Observers "cpp/memory/unique ptr")  
[unique_ptr::get](get.html "cpp/memory/unique ptr/get")  
[unique_ptr::get_deleter](get_deleter.html "cpp/memory/unique ptr/get deleter")  
[unique_ptr::operator bool](operator_bool.html "cpp/memory/unique ptr/operator bool")  
[unique_ptr::operator*unique_ptr::operator->](operator*.html "cpp/memory/unique ptr/operator*")  
[unique_ptr::operator[]](operator_at.html "cpp/memory/unique ptr/operator at")  
[Non-member functions](../unique_ptr.html#Non-member_functions "cpp/memory/unique ptr")  
[make_uniquemake_unique_for_overwrite](make_unique.html "cpp/memory/unique ptr/make unique")(C++14)(C++20)  
[operator==operator!=operator<operator>operator<=operator>=operator<=>](operator_cmp.html "cpp/memory/unique ptr/operator cmp")(until C++20)(C++20)  
[operator<<](operator_ltlt.html "cpp/memory/unique ptr/operator ltlt")(C++20)  
[swap(std::unique_ptr)](swap2.html "cpp/memory/unique ptr/swap2")  
[Helper classes](../unique_ptr.html#Helper_classes "cpp/memory/unique ptr")  
[hash<std::unique_ptr>](hash.html "cpp/memory/unique ptr/hash")  
  


members of the primary template, unique_ptr<T> |  |   
---|---|---  
void reset( pointer ptr = pointer() ) noexcept; |  (1) | (constexpr since C++23)  
members of the specialization unique_ptr<T[]> |  |   
template< class U >   
void reset( U ptr ) noexcept; |  (2) | (constexpr since C++23)  
void reset( [std::nullptr_t](../../types/nullptr_t.html) = nullptr ) noexcept; |  (3) | (constexpr since C++23)  
| |   
  
Replaces the managed object. 

1,2) Equivalent to auto old_ptr = get();  
/* assigns “ptr” to the stored pointer */  
if (old_ptr)  
get_deleter()(old_ptr);.

If get_deleter()(old_ptr) throws an exception, the behavior is undefined.

2) This overload participates in overload resolution only if `U` is the same type as `pointer`, or all following conditions are satisfied: 

  * `pointer` is the same type as `element_type*`. 
  * `U` is a pointer type `V*` such that `V(*)[]` is convertible to `element_type(*)[]`.



3) Equivalent to reset(pointer()).

## Contents

  * [1 Parameters](reset.html#Parameters)
  * [2 Notes](reset.html#Notes)
  * [3 Example](reset.html#Example)
  * [4 Defect reports](reset.html#Defect_reports)
  * [5 See also](reset.html#See_also)

  
---  
  
### Parameters

ptr  |  \-  |  pointer to a new object to manage   
---|---|---  
  
### Notes

To replace the managed object while supplying a new deleter as well, move assignment operator may be used. 

A test for self-reset, i.e. whether ptr points to an object already managed by *this, is not performed, except where provided as a compiler extension or as a debugging assert. Note that code such as p.reset(p.release()) does not involve self-reset, only code like p.reset(p.get()) does. 

### Example

Run this code
    
    
    #include <iostream>
    #include <memory>
     
    struct Foo // object to manage
    {
        Foo() { [std::cout](../../io/cout.html) << "Foo...\n"; }
        ~Foo() { [std::cout](../../io/cout.html) << "~Foo...\n"; }
    };
     
    struct D // deleter
    {
        void operator() (Foo* p)
        {
            [std::cout](../../io/cout.html) << "Calling delete for Foo object... \n";
            delete p;
        }
    };
     
    int main()
    {
        [std::cout](../../io/cout.html) << "Creating new Foo...\n";
        [std::unique_ptr](../unique_ptr.html)<Foo, D> up(new Foo(), D()); // up owns the Foo pointer (deleter D)
     
        [std::cout](../../io/cout.html) << "Replace owned Foo with a new Foo...\n";
        up.reset(new Foo());  // calls deleter for the old one
     
        [std::cout](../../io/cout.html) << "Release and delete the owned Foo...\n";
        up.reset(nullptr);      
    }

Output: 
    
    
    Creating new Foo...
    Foo...
    Replace owned Foo with a new Foo...
    Foo...
    Calling delete for Foo object...
    ~Foo...
    Release and delete the owned Foo...
    Calling delete for Foo object...
    ~Foo...

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 2118](https://cplusplus.github.io/LWG/issue2118) | C++11  | `unique_ptr<T[]>::reset` rejected qualification conversions  | accepts   
[LWG 2169](https://cplusplus.github.io/LWG/issue2169) | C++11  | the overload `unique_ptr<T[]>::reset(pointer)` existed  | removed the overload   
  
### See also

[ release](release.html "cpp/memory/unique ptr/release") |  returns a pointer to the managed object and releases the ownership   
(public member function)   
---|---
