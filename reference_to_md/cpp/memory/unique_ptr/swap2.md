 
  


  
  
  
  
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
[unique_ptr::operator*unique_ptr::operator->](operator*.html "cpp/memory/unique ptr/operator*")  
[unique_ptr::operator[]](operator_at.html "cpp/memory/unique ptr/operator at")  
[Non-member functions](../unique_ptr.html#Non-member_functions "cpp/memory/unique ptr")  
[make_uniquemake_unique_for_overwrite](make_unique.html "cpp/memory/unique ptr/make unique")(C++14)(C++20)  
[operator==operator!=operator<operator>operator<=operator>=operator<=>](operator_cmp.html "cpp/memory/unique ptr/operator cmp")(until C++20)(C++20)  
[operator<<](operator_ltlt.html "cpp/memory/unique ptr/operator ltlt")(C++20)  
**swap(std::unique_ptr)**  
[Helper classes](../unique_ptr.html#Helper_classes "cpp/memory/unique ptr")  
[hash<std::unique_ptr>](hash.html "cpp/memory/unique ptr/hash")  
  


Defined in header `[<memory>](../../header/memory.html "cpp/header/memory")` |  |   
---|---|---  
template< class T, class D >  
void swap( [std::unique_ptr](../unique_ptr.html)<T, D>& lhs, [std::unique_ptr](../unique_ptr.html)<T, D>& rhs ) noexcept; |  |  (since C++11)   
(constexpr since C++23)  
| |   
  
Specializes the [std::swap](../../utility/swap.html "cpp/algorithm/swap") algorithm for [std::unique_ptr](../unique_ptr.html). Swaps the contents of lhs and rhs. Calls lhs.swap(rhs). 

This function does not participate in overload resolution unless [std::is_swappable_v](../../types/is_swappable.html)<D> is true.  | (since C++17)  
---|---  
  
## Contents

  * [1 Parameters](swap2.html#Parameters)
  * [2 Return value](swap2.html#Return_value)
  * [3 Complexity](swap2.html#Complexity)
  * [4 Example](swap2.html#Example)
  * [5 See also](swap2.html#See_also)

  
---  
  
### Parameters

lhs, rhs  |  \-  |  smart pointers whose contents to swap   
---|---|---  
  
### Return value

(none) 

### Complexity

Constant. 

### Example

Run this code
    
    
    #include <iostream>
    #include <memory>
    #include <string>
     
    struct Foo {
        Foo(int _val) : val(_val) { [std::cout](../../io/cout.html) << "Foo...\n"; }
        ~Foo() { [std::cout](../../io/cout.html) << "~Foo...\n"; }
        [std::string](../../string/basic_string.html) print() { return [std::to_string](../../string/basic_string/to_string.html)(val); }
        int val;
    };
     
    int main()
    {
        [std::unique_ptr](../unique_ptr.html)<Foo> p1 = [std::make_unique](make_unique.html)<Foo>(100);
        [std::unique_ptr](../unique_ptr.html)<Foo> p2 = [std::make_unique](make_unique.html)<Foo>(200);
        auto print = [&]() {
            [std::cout](../../io/cout.html) << " p1=" << (p1 ? p1->print() : "nullptr");
            [std::cout](../../io/cout.html) << " p2=" << (p2 ? p2->print() : "nullptr") << '\n';  
        };
        print();
     
        [std::swap](../../algorithm/swap.html)(p1, p2);
        print();
     
        p1.reset();
        print();
     
        [std::swap](../../algorithm/swap.html)(p1, p2);
        print();   
    }

Output: 
    
    
    Foo...
    Foo...
     p1=100 p2=200
     p1=200 p2=100
    ~Foo...
     p1=nullptr p2=100
     p1=100 p2=nullptr
    ~Foo...

### See also

[ swap](../../utility/swap.html "cpp/algorithm/swap") |  swaps the values of two objects   
(function template)   
---|---  
[ swap](swap.html "cpp/memory/unique ptr/swap") |  swaps the contents   
(public member function) 
