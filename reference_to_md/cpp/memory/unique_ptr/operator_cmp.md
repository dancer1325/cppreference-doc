 
  


  
  
  
  
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
**operator== operator!=operator<operator>operator<=operator>=operator<=>**(until C++20)(C++20)  
[operator<<](operator_ltlt.html "cpp/memory/unique ptr/operator ltlt")(C++20)  
[swap(std::unique_ptr)](swap2.html "cpp/memory/unique ptr/swap2")  
[Helper classes](../unique_ptr.html#Helper_classes "cpp/memory/unique ptr")  
[hash<std::unique_ptr>](hash.html "cpp/memory/unique ptr/hash")  
  


Defined in header `[<memory>](../../header/memory.html "cpp/header/memory")` |  |   
---|---|---  
template< class T1, class D1, class T2, class D2 >  
bool operator==( const unique_ptr<T1, D1>& x, const unique_ptr<T2, D2>& y ); |  (1)  |  (since C++11)   
(constexpr since C++23)  
template< class T1, class D1, class T2, class D2 >  
bool operator!=( const unique_ptr<T1, D1>& x, const unique_ptr<T2, D2>& y ); |  (2)  |  (since C++11)   
(until C++20)  
template< class T1, class D1, class T2, class D2 >  
bool operator<( const unique_ptr<T1, D1>& x, const unique_ptr<T2, D2>& y ); |  (3)  |  (since C++11)  
template< class T1, class D1, class T2, class D2 >  
bool operator<=( const unique_ptr<T1, D1>& x, const unique_ptr<T2, D2>& y ); |  (4)  |  (since C++11)  
template< class T1, class D1, class T2, class D2 >  
bool operator>( const unique_ptr<T1, D1>& x, const unique_ptr<T2, D2>& y ); |  (5)  |  (since C++11)  
template< class T1, class D1, class T2, class D2 >  
bool operator>=( const unique_ptr<T1, D1>& x, const unique_ptr<T2, D2>& y ); |  (6)  |  (since C++11)  
template< class T1, class D1, class T2, class D2 >  
requires [std::three_way_comparable_with](../../utility/compare/three_way_comparable.html)<  
typename unique_ptr<T1, D1>::pointer,  
typename unique_ptr<T2, D2>::pointer>  
[std::compare_three_way_result_t](../../utility/compare/compare_three_way_result.html)<typename unique_ptr<T1, D1>::pointer,  
typename unique_ptr<T2, D2>::pointer>  
operator<=>( const unique_ptr<T1, D1>& x, const unique_ptr<T2, D2>& y ); |  (7)  |  (since C++20)  
template< class T, class D >  
bool operator==( const unique_ptr<T, D>& x, [std::nullptr_t](../../types/nullptr_t.html) ) noexcept; |  (8)  |  (since C++11)   
(constexpr since C++23)  
template< class T, class D >  
bool operator==( [std::nullptr_t](../../types/nullptr_t.html), const unique_ptr<T, D>& x ) noexcept; |  (9)  |  (since C++11)   
(until C++20)  
template< class T, class D >  
bool operator!=( const unique_ptr<T, D>& x, [std::nullptr_t](../../types/nullptr_t.html) ) noexcept; |  (10)  |  (since C++11)   
(until C++20)  
template< class T, class D >  
bool operator!=( [std::nullptr_t](../../types/nullptr_t.html), const unique_ptr<T, D>& x ) noexcept; |  (11)  |  (since C++11)   
(until C++20)  
template< class T, class D >  
bool operator<( const unique_ptr<T, D>& x, [std::nullptr_t](../../types/nullptr_t.html) ); |  (12)  |  (since C++11)   
(constexpr since C++23)  
template< class T, class D >  
bool operator<( [std::nullptr_t](../../types/nullptr_t.html), const unique_ptr<T, D>& y ); |  (13)  |  (since C++11)   
(constexpr since C++23)  
template< class T, class D >  
bool operator<=( const unique_ptr<T, D>& x, [std::nullptr_t](../../types/nullptr_t.html) ); |  (14)  |  (since C++11)   
(constexpr since C++23)  
template< class T, class D >  
bool operator<=( [std::nullptr_t](../../types/nullptr_t.html), const unique_ptr<T, D>& y ); |  (15)  |  (since C++11)   
(constexpr since C++23)  
template< class T, class D >  
bool operator>( const unique_ptr<T, D>& x, [std::nullptr_t](../../types/nullptr_t.html) ); |  (16)  |  (since C++11)   
(constexpr since C++23)  
template< class T, class D >  
bool operator>( [std::nullptr_t](../../types/nullptr_t.html), const unique_ptr<T, D>& y ); |  (17)  |  (since C++11)   
(constexpr since C++23)  
template< class T, class D >  
bool operator>=( const unique_ptr<T, D>& x, [std::nullptr_t](../../types/nullptr_t.html) ); |  (18)  |  (since C++11)   
(constexpr since C++23)  
template< class T, class D >  
bool operator>=( [std::nullptr_t](../../types/nullptr_t.html), const unique_ptr<T, D>& y ); |  (19)  |  (since C++11)   
(constexpr since C++23)  
template< class T, class D >  
requires [std::three_way_comparable](../../utility/compare/three_way_comparable.html)<typename unique_ptr<T, D>::pointer>  
[std::compare_three_way_result_t](../../utility/compare/compare_three_way_result.html)<typename unique_ptr<T, D>::pointer>  
operator<=>( const unique_ptr<T, D>& x, [std::nullptr_t](../../types/nullptr_t.html) ); |  (20)  |  (since C++20)   
(constexpr since C++23)  
| |   
  
Compares the pointer values of two `unique_ptr`s, or a `unique_ptr` and nullptr. 

1-7) Compares two `unique_ptr`s.

8-20) Compares a `unique_ptr` and nullptr.

The `!=` operator is [synthesized](../../language/default_comparisons.html#Other_defaulted_comparison_operators "cpp/language/default comparisons") from `operator==`.  | (since C++20)  
---|---  
  
## Contents

  * [1 Parameters](operator_cmp.html#Parameters)
  * [2 Return value](operator_cmp.html#Return_value)
  * [3 Example](operator_cmp.html#Example)
  * [4 Defect reports](operator_cmp.html#Defect_reports)
  * [5 See also](operator_cmp.html#See_also)

  
---  
  
### Parameters

x, y  |  \-  |  `unique_ptr`s to compare   
---|---|---  
  
### Return value

1) x.get() == y.get()

2) x.get() != y.get()

3) [std::less](../../utility/functional/less.html)<CT>()(x.get(), y.get()), where `CT` is [std::common_type](../../types/common_type.html)<unique_ptr<T1, D1>::pointer, unique_ptr<T2, D2>::pointer>::type.

4) !(y < x)

5) y < x

6) !(x < y)

7) [std::compare_three_way](../../utility/compare/compare_three_way.html){}(x.get(), y.get())

8,9) !x

10,11) (bool)x

12) [std::less](../../utility/functional/less.html)<unique_ptr<T,D>::pointer>()(x.get(), nullptr)

13) [std::less](../../utility/functional/less.html)<unique_ptr<T,D>::pointer>()(nullptr, y.get())

14) !(nullptr < x)

15) !(y < nullptr)

16) nullptr < x

17) y < nullptr

18) !(x < nullptr)

19) !(nullptr < y)

20) [std::compare_three_way](../../utility/compare/compare_three_way.html){}(x.get(), static_cast<typename unique_ptr<T, D>::pointer>(nullptr))

### Example

Run this code
    
    
    #include <iostream>
    #include <memory>
     
    int main()
    {
        [std::unique_ptr](../unique_ptr.html)<int> p1(new int(42));
        [std::unique_ptr](../unique_ptr.html)<int> p2(new int(42));
     
        [std::cout](../../io/cout.html) << [std::boolalpha](../../io/manip/boolalpha.html)
            << "(p1 == p1)       : " << (p1 == p1) << '\n'
            << "(p1 <=> p1) == 0 : " << ((p1 <=> p1) == 0) << '\n' // Since C++20
     
        // p1 and p2 point to different memory locations, so p1 != p2
            << "(p1 == p2)       : " << (p1 == p2) << '\n'
            << "(p1 < p2)        : " << (p1 < p2) << '\n'
            << "(p1 <=> p2) < 0  : " << ((p1 <=> p2) < 0) << '\n'   // Since C++20
            << "(p1 <=> p2) == 0 : " << ((p1 <=> p2) == 0) << '\n'; // Since C++20
    }

Possible output: 
    
    
    (p1 == p1)       : true
    (p1 <=> p1) == 0 : true
    (p1 == p2)       : false
    (p1 < p2)        : true
    (p1 <=> p2) < 0  : true
    (p1 <=> p2) == 0 : false

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 3426](https://cplusplus.github.io/LWG/issue3426) | C++20  | `operator<=>(unique_ptr, nullptr_t)` was ill-formed  | constraints and definition fixed   
  
### See also

[ get](get.html "cpp/memory/unique ptr/get") |  returns a pointer to the managed object   
(public member function)   
---|---
