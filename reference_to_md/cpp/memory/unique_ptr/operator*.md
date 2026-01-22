 
  


  
  
  
  
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
[unique_ptr::reset](reset.html "cpp/memory/unique ptr/reset")  
[unique_ptr::swap](swap.html "cpp/memory/unique ptr/swap")  
[Observers](../unique_ptr.html#Observers "cpp/memory/unique ptr")  
[unique_ptr::get](get.html "cpp/memory/unique ptr/get")  
[unique_ptr::get_deleter](get_deleter.html "cpp/memory/unique ptr/get deleter")  
[unique_ptr::operator bool](operator_bool.html "cpp/memory/unique ptr/operator bool")  
**unique_ptr::operator* unique_ptr::operator->**  
[unique_ptr::operator[]](operator_at.html "cpp/memory/unique ptr/operator at")  
[Non-member functions](../unique_ptr.html#Non-member_functions "cpp/memory/unique ptr")  
[make_uniquemake_unique_for_overwrite](make_unique.html "cpp/memory/unique ptr/make unique")(C++14)(C++20)  
[operator==operator!=operator<operator>operator<=operator>=operator<=>](operator_cmp.html "cpp/memory/unique ptr/operator cmp")(until C++20)(C++20)  
[operator<<](operator_ltlt.html "cpp/memory/unique ptr/operator ltlt")(C++20)  
[swap(std::unique_ptr)](swap2.html "cpp/memory/unique ptr/swap2")  
[Helper classes](../unique_ptr.html#Helper_classes "cpp/memory/unique ptr")  
[hash<std::unique_ptr>](hash.html "cpp/memory/unique ptr/hash")  
  


typename [std::add_lvalue_reference](../../types/add_reference.html)<T>::type operator*() const  
noexcept(noexcept(*[std::declval](../../utility/declval.html)<pointer>())); |  (1) | (since C++11)   
(constexpr since C++23)  
---|---|---  
pointer operator->() const noexcept; |  (2) | (since C++11)   
(constexpr since C++23)  
| |   
  
operator* and operator-> provide access to the object owned by *this. 

These member functions are only provided for `unique_ptr` for the single objects i.e. the primary template. 

1) If std::reference_converts_from_temporary_v  
<[std::add_lvalue_reference_t](../../types/add_reference.html)<T>,  
decltype(*[std::declval](../../utility/declval.html)<pointer>())> is true, the program is ill-formed. | (since C++23)  
---|---  
  
If get() is a null pointer, the behavior is undefined. 

## Contents

  * [1 Return value](operator*.html#Return_value)
  * [2 Exceptions](operator*.html#Exceptions)
  * [3 Notes](operator*.html#Notes)
  * [4 Example](operator*.html#Example)
  * [5 Defect reports](operator*.html#Defect_reports)
  * [6 See also](operator*.html#See_also)

  
---  
  
### Return value

1) Returns the object owned by *this, equivalent to *get().

2) Returns a pointer to the object owned by *this, i.e. get().

### Exceptions

1) May throw if `pointer` has a throwing operator*.

### Notes

The use of [std::add_lvalue_reference](../../types/add_reference.html "cpp/types/add reference") is to make it possible to instantiate [std::unique_ptr](../unique_ptr.html)<void> since void& isn't allowed in C++ while [std::add_lvalue_reference](../../types/add_reference.html)<void> produces void. See [LWG673](https://cplusplus.github.io/LWG/issue673) for details. 

### Example

Run this code
    
    
    #include <iostream>
    #include <memory>
     
    struct Foo
    {
        void bar() { [std::cout](../../io/cout.html) << "Foo::bar\n"; }
    };
     
    void f(const Foo&) 
    {
        [std::cout](../../io/cout.html) << "f(const Foo&)\n";
    }
     
    int main() 
    {
        [std::unique_ptr](../unique_ptr.html)<Foo> ptr(new Foo);
     
        ptr->bar();
        f(*ptr);
    }

Output: 
    
    
    Foo::bar
    f(const Foo&)

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 2762](https://cplusplus.github.io/LWG/issue2762) | C++11  | operator* might be potentially-throwing  
even if *get() was noexcept  | added a conditional  
exception specification   
[LWG 4148](https://cplusplus.github.io/LWG/issue4148) | C++23  | operator* could return a dangling reference if  
`element_type*` differs from `Deleter::pointer` | the program is ill-  
formed in this case   
  
### See also

[ get](get.html "cpp/memory/unique ptr/get") |  returns a pointer to the managed object   
(public member function)   
---|---
