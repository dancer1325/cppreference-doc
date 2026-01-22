 
  


  
  
  
  
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
**unique_ptr::operator=**  
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
[swap(std::unique_ptr)](swap2.html "cpp/memory/unique ptr/swap2")  
[Helper classes](../unique_ptr.html#Helper_classes "cpp/memory/unique ptr")  
[hash<std::unique_ptr>](hash.html "cpp/memory/unique ptr/hash")  
  


unique_ptr& operator=( unique_ptr&& r ) noexcept; |  (1) | (constexpr since C++23)  
---|---|---  
template< class U, class E >  
unique_ptr& operator=( unique_ptr<U, E>&& r ) noexcept; |  (2) | (constexpr since C++23)  
unique_ptr& operator=( [std::nullptr_t](../../types/nullptr_t.html) ) noexcept; |  (3) | (constexpr since C++23)  
unique_ptr& operator=( const unique_ptr& ) = delete; |  (4)  |   
| |   
  
1) Move assignment operator. Transfers ownership from r to *this as if by calling reset(r.release()) followed by assigning [get_deleter()](get_deleter.html "cpp/memory/unique ptr/get deleter") from [std::forward](../../utility/forward.html)<Deleter>(r.get_deleter()).

This overload participates in overload resolution only if [std::is_move_assignable](../../types/is_move_assignable.html)<Deleter>::value is true.

If `Deleter` is not a reference type, the behavior is undefined if 

  * `Deleter` is not [MoveAssignable](../../named_req/MoveAssignable.html "cpp/named req/MoveAssignable"), or 
  * assigning [get_deleter()](get_deleter.html "cpp/memory/unique ptr/get deleter") from an [rvalue](../../language/value_category.html "cpp/language/value category") of type `Deleter` would throw an exception.



Otherwise (`Deleter` is a reference type), the behavior is undefined if 

  * `std::remove_reference<Deleter>::type` is not [CopyAssignable](../../named_req/CopyAssignable.html "cpp/named req/CopyAssignable"), or 
  * assigning [get_deleter()](get_deleter.html "cpp/memory/unique ptr/get deleter") from an [lvalue](../../language/value_category.html "cpp/language/value category") of type `Deleter` would throw an exception.



2) Converting assignment operator. Transfers ownership from r to *this as if by calling reset(r.release()) followed by assigning [get_deleter()](get_deleter.html "cpp/memory/unique ptr/get deleter") from [std::forward](../../utility/forward.html)<E>(r.get_deleter()).

This overload participates in overload resolution only if all following conditions are satisfied: 

  * [std::is_assignable](../../types/is_assignable.html)<Deleter&, E&&>::value is true. 
  * For the primary template, all following conditions are satisfied: 
    * `U` is not an array type. 
    * `unique_ptr<U, E>::pointer` is implicitly convertible to `pointer`, and. 
  * For the array specialization (`unique_ptr<T[]>`), all following conditions are satisfied: 
    * `U` is an array type. 
    * `pointer` is the same type as `element_type*`. 
    * `unique_ptr<U, E>::pointer` is the same type as `unique_ptr<U, E>::element_type*`. 
    * `unique_ptr<U, E>::element_type(*)[]` is convertible to `element_type(*)[]`.



If `E` is not a reference type, the behavior is undefined if assigning [get_deleter()](get_deleter.html "cpp/memory/unique ptr/get deleter") from an [rvalue](../../language/value_category.html "cpp/language/value category") of type `E` is ill-formed or would throw an exception.

Otherwise (`E` is a reference type), the behavior is undefined if assigning [get_deleter()](get_deleter.html "cpp/memory/unique ptr/get deleter") from an [lvalue](../../language/value_category.html "cpp/language/value category") of type `E` is ill-formed or would throw an exception.

3) Effectively the same as calling [reset()](reset.html "cpp/memory/unique ptr/reset").

4) Copy assignment operator is explicitly deleted.

## Contents

  * [1 Parameters](operator=.html#Parameters)
  * [2 Return value](operator=.html#Return_value)
  * [3 Notes](operator=.html#Notes)
  * [4 Example](operator=.html#Example)
  * [5 Defect reports](operator=.html#Defect_reports)

  
---  
  
### Parameters

r  |  \-  |  smart pointer from which ownership will be transferred   
---|---|---  
  
### Return value

*this

### Notes

As a move-only type, `unique_ptr`'s assignment operator only accepts [rvalues](../../language/value_category.html "cpp/language/value category") arguments (e.g. the result of [std::make_unique](make_unique.html "cpp/memory/unique ptr/make unique") or a std::move'd `unique_ptr` variable). 

### Example

Run this code
    
    
    #include <iostream>
    #include <memory>
     
    struct Foo
    {
        int id;
        Foo(int id) : id(id) { [std::cout](../../io/cout.html) << "Foo " << id << '\n'; }
        ~Foo() { [std::cout](../../io/cout.html) << "~Foo " << id << '\n'; }
    };
     
    int main() 
    {
        [std::unique_ptr](../unique_ptr.html)<Foo> p1([std::make_unique](make_unique.html)<Foo>(1));
     
        {
            [std::cout](../../io/cout.html) << "Creating new Foo...\n";
            [std::unique_ptr](../unique_ptr.html)<Foo> p2([std::make_unique](make_unique.html)<Foo>(2));
            // p1 = p2; // Error ! can't copy unique_ptr
            p1 = std::move(p2);
            [std::cout](../../io/cout.html) << "About to leave inner block...\n";
     
            // Foo instance will continue to live, 
            // despite p2 going out of scope
        }
     
        [std::cout](../../io/cout.html) << "About to leave program...\n";
    }

Output: 
    
    
    Foo 1
    Creating new Foo...
    Foo 2
    ~Foo 1
    About to leave inner block...
    About to leave program...
    ~Foo 2

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 2047](https://cplusplus.github.io/LWG/issue2047) | C++11  | for overload (2), [get_deleter()](get_deleter.html "cpp/memory/unique ptr/get deleter") was assigned from  
[std::forward](../../utility/forward.html)<Deleter>(r.get_deleter()) | corrected to  
[std::forward](../../utility/forward.html)<E>(r.get_deleter())  
[LWG 2118](https://cplusplus.github.io/LWG/issue2118) | C++11  | `unique_ptr<T[]>::operator=`  
rejected qualification conversions  | accepts   
[LWG 2228](https://cplusplus.github.io/LWG/issue2228)  
([N4366](https://wg21.link/N4366))  | C++11  | the converting assignment operator  
was missing the assignability constraint  | added the constraint   
[LWG 2246](https://cplusplus.github.io/LWG/issue2246) | C++11  | the assignment target of the converted  
deleter of r was not specified  | specified as [get_deleter()](get_deleter.html "cpp/memory/unique ptr/get deleter")  
[LWG 2899](https://cplusplus.github.io/LWG/issue2899) | C++11  | the move assignment operator was not constrained  | constrained 
