[[edit template]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/memory/owner_before&action=edit)

 
  


  
  
  
  
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
[weak_ptr::lock](lock.html "cpp/memory/weak ptr/lock")  
**weak_ptr::owner_before**  
[weak_ptr::owner_hash](owner_hash.html "cpp/memory/weak ptr/owner hash")(C++26)  
[weak_ptr::owner_equal](owner_equal.html "cpp/memory/weak ptr/owner equal")(C++26)  
Non-member functions  
[swap(std::weak_ptr)](swap2.html "cpp/memory/weak ptr/swap2")  
Helper classes  
[atomic<std::weak_ptr>](atomic2.html "cpp/memory/weak ptr/atomic2")(C++20)  
[Deduction guides](deduction_guides.html "cpp/memory/weak ptr/deduction guides")(C++17)  
  


template< class Y >   
bool owner_before( const weak_ptr<Y>& other ) const noexcept; |  |   
---|---|---  
template< class Y >  
bool owner_before( const [std::shared_ptr](../shared_ptr.html)<Y>& other ) const noexcept; |  |   
| |   
  
Checks whether this `weak_ptr` precedes other in implementation defined owner-based (as opposed to value-based) order. The order is such that two smart pointers compare equivalent only if they are both empty or if they both own the same object, even if the values of the pointers obtained by get() are different (e.g. because they point at different subobjects within the same object). 

This ordering is used to make shared and weak pointers usable as keys in associative containers, typically through [std::owner_less](../owner_less.html "cpp/memory/owner less"). 

## Contents

  * [1 Parameters](owner_before.html#Parameters)
  * [2 Return value](owner_before.html#Return_value)
  * [3 Example](owner_before.html#Example)
  * [4 Defect reports](owner_before.html#Defect_reports)
  * [5 See also](owner_before.html#See_also)

  
---  
  
### Parameters

other  |  \-  |  the [std::shared_ptr](../shared_ptr.html "cpp/memory/shared ptr") or [std::weak_ptr](../weak_ptr.html "cpp/memory/weak ptr") to be compared   
---|---|---  
  
### Return value

true if *this precedes other, false otherwise. Common implementations compare the addresses of the control blocks. 

### Example

Run this code
    
    
    #include <iostream>
    #include <memory>
     
    struct Foo
    {
        int n1;
        int n2; 
        Foo(int a, int b) : n1(a), n2(b) {}
    };
     
    int main()
    {   
        auto p1 = [std::make_shared](../shared_ptr/make_shared.html)<Foo>(1, 2);
        [std::shared_ptr](../shared_ptr.html)<int> p2(p1, &p1->n1);
        [std::shared_ptr](../shared_ptr.html)<int> p3(p1, &p1->n2);
     
        [std::cout](../../io/cout.html) << [std::boolalpha](../../io/manip/boolalpha.html)
                  << "p2 < p3 " << (p2 < p3) << '\n'
                  << "p3 < p2 " << (p3 < p2) << '\n'
                  << "p2.owner_before(p3) " << p2.owner_before(p3) << '\n'
                  << "p3.owner_before(p2) " << p3.owner_before(p2) << '\n';
     
        [std::weak_ptr](../weak_ptr.html)<int> w2(p2);
        [std::weak_ptr](../weak_ptr.html)<int> w3(p3);
        [std::cout](../../io/cout.html) 
    //            << "w2 < w3 " << (w2 < w3) << '\n' // won't compile 
    //            << "w3 < w2 " << (w3 < w2) << '\n' // won't compile
                  << "w2.owner_before(w3) " << w2.owner_before(w3) << '\n'
                  << "w3.owner_before(w2) " << w3.owner_before(w2) << '\n';
    }

Output: 
    
    
    p2 < p3 true
    p3 < p2 false
    p2.owner_before(p3) false
    p3.owner_before(p2) false
    w2.owner_before(w3) false
    w3.owner_before(w2) false

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 2083](https://cplusplus.github.io/LWG/issue2083) | C++11  | `owner_before` was not declared const | declared const  
[LWG 2942](https://cplusplus.github.io/LWG/issue2942) | C++11  | `owner_before` was not declared noexcept | declared noexcept  
  
### See also

[ owner_less](../owner_less.html "cpp/memory/owner less")(C++11) |  provides mixed-type owner-based ordering of shared and weak pointers   
(class template)   
---|---
