 
  


  
  
  
  
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
  
  
  


[`std::shared_ptr`](../shared_ptr.html "cpp/memory/shared ptr")

Member functions  
---  
[shared_ptr::shared_ptr](shared_ptr.html "cpp/memory/shared ptr/shared ptr")  
[shared_ptr::~shared_ptr](~shared_ptr.html "cpp/memory/shared ptr/~shared ptr")  
[shared_ptr::operator=](operator=.html "cpp/memory/shared ptr/operator=")  
Modifiers  
[shared_ptr::reset](reset.html "cpp/memory/shared ptr/reset")  
[shared_ptr::swap](swap.html "cpp/memory/shared ptr/swap")  
Observers  
[shared_ptr::get](get.html "cpp/memory/shared ptr/get")  
[shared_ptr::operator*shared_ptr::operator->](operator*.html "cpp/memory/shared ptr/operator*")  
[shared_ptr::operator[]](operator_at.html "cpp/memory/shared ptr/operator at")(C++17)  
[shared_ptr::use_count](use_count.html "cpp/memory/shared ptr/use count")  
[shared_ptr::unique](unique.html "cpp/memory/shared ptr/unique")(until C++20*)  
[shared_ptr::operator bool](operator_bool.html "cpp/memory/shared ptr/operator bool")  
[shared_ptr::owner_before](owner_before.html "cpp/memory/shared ptr/owner before")  
[shared_ptr::owner_hash](owner_hash.html "cpp/memory/shared ptr/owner hash")(C++26)  
[shared_ptr::owner_equal](owner_equal.html "cpp/memory/shared ptr/owner equal")(C++26)  
Non-member functions  
[swap(std::shared_ptr)](swap2.html "cpp/memory/shared ptr/swap2")  
[make_sharedmake_shared_for_overwrite](make_shared.html "cpp/memory/shared ptr/make shared")(C++20)  
[allocate_sharedallocate_shared_for_overwrite](allocate_shared.html "cpp/memory/shared ptr/allocate shared")(C++20)  
[static_pointer_castdynamic_pointer_castconst_pointer_castreinterpret_pointer_cast](pointer_cast.html "cpp/memory/shared ptr/pointer cast")(C++17)  
[get_deleter](get_deleter.html "cpp/memory/shared ptr/get deleter")  
**operator== operator!=operator<operator<=operator>operator>=operator<=>**(until C++20)(until C++20)(until C++20)(until C++20)(until C++20)(C++20)  
[operator<<](operator_ltlt.html "cpp/memory/shared ptr/operator ltlt")  
[atomic_xxx](atomic.html "cpp/memory/shared ptr/atomic")functions (until C++26*)  
Helper classes  
[atomic<std::shared_ptr>](atomic2.html "cpp/memory/shared ptr/atomic2")(C++20)  
[hash<std::shared_ptr>](hash.html "cpp/memory/shared ptr/hash")  
[Deduction guides](deduction_guides.html "cpp/memory/shared ptr/deduction guides")(C++17)  
  


Defined in header `[<memory>](../../header/memory.html "cpp/header/memory")` |  |   
---|---|---  
Compare two `shared_ptr` objects. |  |   
template< class T, class U >   
bool operator==( const [std::shared_ptr](../shared_ptr.html)<T>& lhs,  
const [std::shared_ptr](../shared_ptr.html)<U>& rhs ) noexcept; |  (1)  |  (since C++11)  
template< class T, class U >   
bool operator!=( const [std::shared_ptr](../shared_ptr.html)<T>& lhs,  
const [std::shared_ptr](../shared_ptr.html)<U>& rhs ) noexcept; |  (2)  |  (since C++11)   
(until C++20)  
template< class T, class U >   
bool operator<( const [std::shared_ptr](../shared_ptr.html)<T>& lhs,  
const [std::shared_ptr](../shared_ptr.html)<U>& rhs ) noexcept; |  (3)  |  (since C++11)   
(until C++20)  
template< class T, class U >   
bool operator>( const [std::shared_ptr](../shared_ptr.html)<T>& lhs,  
const [std::shared_ptr](../shared_ptr.html)<U>& rhs ) noexcept; |  (4)  |  (since C++11)   
(until C++20)  
template< class T, class U >   
bool operator<=( const [std::shared_ptr](../shared_ptr.html)<T>& lhs,  
const [std::shared_ptr](../shared_ptr.html)<U>& rhs ) noexcept; |  (5)  |  (since C++11)   
(until C++20)  
template< class T, class U >   
bool operator>=( const [std::shared_ptr](../shared_ptr.html)<T>& lhs,  
const [std::shared_ptr](../shared_ptr.html)<U>& rhs ) noexcept; |  (6)  |  (since C++11)   
(until C++20)  
template< class T, class U >   
[std::strong_ordering](../../utility/compare/strong_ordering.html) operator<=>( const [std::shared_ptr](../shared_ptr.html)<T>& lhs,  
const [std::shared_ptr](../shared_ptr.html)<U>& rhs ) noexcept; |  (7)  |  (since C++20)  
Compare a `shared_ptr` with a null pointer. |  |   
template< class T >   
bool operator==( const [std::shared_ptr](../shared_ptr.html)<T>& lhs, [std::nullptr_t](../../types/nullptr_t.html) ) noexcept; |  (8)  |  (since C++11)  
template< class T >  
bool operator==( [std::nullptr_t](../../types/nullptr_t.html), const [std::shared_ptr](../shared_ptr.html)<T>& rhs ) noexcept; |  (9)  |  (since C++11)   
(until C++20)  
template< class T >  
bool operator!=( const [std::shared_ptr](../shared_ptr.html)<T>& lhs, [std::nullptr_t](../../types/nullptr_t.html) ) noexcept; |  (10)  |  (since C++11)   
(until C++20)  
template< class T >  
bool operator!=( [std::nullptr_t](../../types/nullptr_t.html), const [std::shared_ptr](../shared_ptr.html)<T>& rhs ) noexcept; |  (11)  |  (since C++11)   
(until C++20)  
template< class T >  
bool operator<( const [std::shared_ptr](../shared_ptr.html)<T>& lhs, [std::nullptr_t](../../types/nullptr_t.html) ) noexcept; |  (12)  |  (since C++11)   
(until C++20)  
template< class T >  
bool operator<( [std::nullptr_t](../../types/nullptr_t.html), const [std::shared_ptr](../shared_ptr.html)<T>& rhs ) noexcept; |  (13)  |  (since C++11)   
(until C++20)  
template< class T >  
bool operator>( const [std::shared_ptr](../shared_ptr.html)<T>& lhs, [std::nullptr_t](../../types/nullptr_t.html) ) noexcept; |  (14)  |  (since C++11)   
(until C++20)  
template< class T >  
bool operator>( [std::nullptr_t](../../types/nullptr_t.html), const [std::shared_ptr](../shared_ptr.html)<T>& rhs ) noexcept; |  (15)  |  (since C++11)   
(until C++20)  
template< class T >  
bool operator<=( const [std::shared_ptr](../shared_ptr.html)<T>& lhs, [std::nullptr_t](../../types/nullptr_t.html) ) noexcept; |  (16)  |  (since C++11)   
(until C++20)  
template< class T >  
bool operator<=( [std::nullptr_t](../../types/nullptr_t.html), const [std::shared_ptr](../shared_ptr.html)<T>& rhs ) noexcept; |  (17)  |  (since C++11)   
(until C++20)  
template< class T >  
bool operator>=( const [std::shared_ptr](../shared_ptr.html)<T>& lhs, [std::nullptr_t](../../types/nullptr_t.html) ) noexcept; |  (18)  |  (since C++11)   
(until C++20)  
template< class T >  
bool operator>=( [std::nullptr_t](../../types/nullptr_t.html), const [std::shared_ptr](../shared_ptr.html)<T>& rhs ) noexcept; |  (19)  |  (since C++11)   
(until C++20)  
template< class T >  
[std::strong_ordering](../../utility/compare/strong_ordering.html) operator<=>( const [std::shared_ptr](../shared_ptr.html)<T>& lhs,  
[std::nullptr_t](../../types/nullptr_t.html) ) noexcept; |  (20)  |  (since C++20)  
| |   
  
Compares two `shared_ptr<T>` objects or compares `shared_ptr<T>` with a null pointer. 

Note that the comparison operators for `shared_ptr` simply compare pointer values; the actual objects pointed to are _not_ compared. Having `operator<` defined for `shared_ptr` allows `shared_ptr`s to be used as keys in associative containers, like [std::map](../../container/map.html "cpp/container/map") and [std::set](../../container/set.html "cpp/container/set"). 

The `<`, `<=`, `>`, `>=`, and `!=` operators are [synthesized](../../language/operators.html#Comparison_operators "cpp/language/operators") from operator<=> and operator== respectively.  | (since C++20)  
---|---  
  
## Contents

  * [1 Parameters](operator_cmp.html#Parameters)
  * [2 Return value](operator_cmp.html#Return_value)
  * [3 Notes](operator_cmp.html#Notes)
  * [4 Example](operator_cmp.html#Example)
  * [5 Defect reports](operator_cmp.html#Defect_reports)
  * [6 See also](operator_cmp.html#See_also)

  
---  
  
### Parameters

lhs  |  \-  |  the left-hand `shared_ptr` to compare   
---|---|---  
rhs  |  \-  |  the right-hand `shared_ptr` to compare   
  
### Return value

1) lhs.get() == rhs.get()

2) !(lhs == rhs)

3) [std::less](../../utility/functional/less.html)<V>()(lhs.get(), rhs.get()), where V is the [composite pointer type](../../language/operator_comparison.html#Pointer_comparison_operators "cpp/language/operator comparison") of [std::shared_ptr](../shared_ptr.html)<T>::element_type* and [std::shared_ptr](../shared_ptr.html)<U>::element_type*.

4) rhs < lhs

5) !(rhs < lhs)

6) !(lhs < rhs)

7) [std::compare_three_way](../../utility/compare/compare_three_way.html){}(x.get(), y.get())

8) !lhs

9) !rhs

10) (bool)lhs

11) (bool)rhs

12) [std::less](../../utility/functional/less.html)<[std::shared_ptr](../shared_ptr.html)<T>::element_type*>()(lhs.get(), nullptr)

13) [std::less](../../utility/functional/less.html)<[std::shared_ptr](../shared_ptr.html)<T>::element_type*>()(nullptr, rhs.get())

14) nullptr < lhs

15) rhs < nullptr

16) !(nullptr < lhs)

17) !(rhs < nullptr)

18) !(lhs < nullptr)

19) !(nullptr < rhs)

20) [std::compare_three_way](../../utility/compare/compare_three_way.html){}(x.get(), static_cast<[std::shared_ptr](../shared_ptr.html)<T>::element_type*>(nullptr))

### Notes

In all cases, it is the stored pointer (the one returned by [get()](get.html "cpp/memory/shared ptr/get")) that is compared, rather than the managed pointer (the one passed to the deleter when [use_count](use_count.html "cpp/memory/shared ptr/use count") goes to zero). The two pointers may differ in a [shared_ptr](../shared_ptr.html "cpp/memory/shared ptr") created using the aliasing constructor. 

### Example

Run this code
    
    
    #include <iostream>
    #include <memory>
     
    int main()
    {
        [std::shared_ptr](../shared_ptr.html)<int> p1(new int(42));
        [std::shared_ptr](../shared_ptr.html)<int> p2(new int(42));
     
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
[LWG 3427](https://cplusplus.github.io/LWG/issue3427) | C++20  | `operator<=>(shared_ptr, nullptr_t)` was ill-formed  | definition fixed   
  
### See also

[ get](get.html "cpp/memory/shared ptr/get") |  returns the stored pointer   
(public member function)   
---|---
