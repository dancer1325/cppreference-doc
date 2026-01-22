 
  


  
  
  
  
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
  
  
  


[`std::enable_shared_from_this`](../enable_shared_from_this.html "cpp/memory/enable shared from this")

Protected member functions  
---  
[enable_shared_from_this::enable_shared_from_this](enable_shared_from_this.html "cpp/memory/enable shared from this/enable shared from this")  
[enable_shared_from_this::~enable_shared_from_this](~enable_shared_from_this.html "cpp/memory/enable shared from this/~enable shared from this")  
[enable_shared_from_this::operator=](operator=.html "cpp/memory/enable shared from this/operator=")  
Public member functions  
**enable_shared_from_this::shared_from_this**  
[enable_shared_from_this::weak_from_this](weak_from_this.html "cpp/memory/enable shared from this/weak from this")(C++17)  
  


[std::shared_ptr](../shared_ptr.html)<T> shared_from_this(); |  (1)  |  (since C++11)  
---|---|---  
[std::shared_ptr](../shared_ptr.html)<T const> shared_from_this() const; |  (2)  |  (since C++11)  
| |   
  
Returns a [std::shared_ptr](../shared_ptr.html)<T> that shares ownership of *this with all existing [std::shared_ptr](../shared_ptr.html) that refer to *this. 

## Contents

  * [1 Return value](shared_from_this.html#Return_value)
  * [2 Exceptions](shared_from_this.html#Exceptions)
  * [3 Example](shared_from_this.html#Example)
  * [4 See also](shared_from_this.html#See_also)

  
---  
  
### Return value

[std::shared_ptr](../shared_ptr.html)<T>(`_[weak_this](../enable_shared_from_this.html#weak_this "cpp/memory/enable shared from this")_` ﻿)

### Exceptions

If `shared_from_this` is called on an object that is not previously shared by [std::shared_ptr](../shared_ptr.html "cpp/memory/shared ptr"), [std::bad_weak_ptr](../bad_weak_ptr.html "cpp/memory/bad weak ptr") is thrown by the [std::shared_ptr](../shared_ptr.html "cpp/memory/shared ptr") constructor. 

### Example

Run this code
    
    
    #include <iostream>
    #include <memory>
     
    struct Foo : public [std::enable_shared_from_this](../enable_shared_from_this.html)<Foo>
    {
        Foo() { [std::cout](../../io/cout.html) << "Foo::Foo\n"; }
        ~Foo() { [std::cout](../../io/cout.html) << "Foo::~Foo\n"; } 
        [std::shared_ptr](../shared_ptr.html)<Foo> getFoo() { return shared_from_this(); }
    };
     
    int main()
    {
        Foo *f = new Foo;
        [std::shared_ptr](../shared_ptr.html)<Foo> pf1;
     
        {
            [std::shared_ptr](../shared_ptr.html)<Foo> pf2(f);
            pf1 = pf2->getFoo(); // shares ownership of object with pf2
        }
     
        [std::cout](../../io/cout.html) << "pf2 is gone\n";   
    }

Output: 
    
    
    Foo::Foo
    pf2 is gone
    Foo::~Foo

### See also

[ shared_ptr](../shared_ptr.html "cpp/memory/shared ptr")(C++11) |  smart pointer with shared object ownership semantics   
(class template)   
---|---
