 
  


  
  
  
  
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
**unique_ptr::unique_ptr**  
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
[swap(std::unique_ptr)](swap2.html "cpp/memory/unique ptr/swap2")  
[Helper classes](../unique_ptr.html#Helper_classes "cpp/memory/unique ptr")  
[hash<std::unique_ptr>](hash.html "cpp/memory/unique ptr/hash")  
  


members of the primary template, unique_ptr<T> |  |   
---|---|---  
constexpr unique_ptr() noexcept;  
constexpr unique_ptr( [std::nullptr_t](../../types/nullptr_t.html) ) noexcept; |  (1)  |   
explicit unique_ptr( pointer p ) noexcept; |  (2) | (constexpr since C++23)  
unique_ptr( pointer p, /* see below */ d1 ) noexcept; |  (3) | (constexpr since C++23)  
unique_ptr( pointer p, /* see below */ d2 ) noexcept; |  (4) | (constexpr since C++23)  
unique_ptr( unique_ptr&& u ) noexcept; |  (5) | (constexpr since C++23)  
template< class U, class E >  
unique_ptr( unique_ptr<U, E>&& u ) noexcept; |  (6) | (constexpr since C++23)  
unique_ptr( const unique_ptr& ) = delete; |  (7)  |   
template< class U >  
unique_ptr( [std::auto_ptr](../auto_ptr.html)<U>&& u ) noexcept; |  (8)  |  (removed in C++17)  
members of the specialization for arrays, unique_ptr<T[]> |  |   
constexpr unique_ptr() noexcept;  
constexpr unique_ptr( [std::nullptr_t](../../types/nullptr_t.html) ) noexcept; |  (1)  |   
template< class U >  
explicit unique_ptr( U p ) noexcept; |  (2) | (constexpr since C++23)  
template< class U >  
unique_ptr( U p, /* see below */ d1 ) noexcept; |  (3) | (constexpr since C++23)  
template< class U >  
unique_ptr( U p, /* see below */ d2 ) noexcept; |  (4) | (constexpr since C++23)  
unique_ptr( unique_ptr&& u ) noexcept; |  (5) | (constexpr since C++23)  
template< class U, class E >  
unique_ptr( unique_ptr<U, E>&& u ) noexcept; |  (6) | (constexpr since C++23)  
unique_ptr( const unique_ptr& ) = delete; |  (7)  |   
| |   
  
1) Constructs a `std::unique_ptr` that owns nothing. Value-initializes the stored pointer and the stored deleter. Requires that `Deleter` is [DefaultConstructible](../../named_req/DefaultConstructible.html "cpp/named req/DefaultConstructible") and that construction does not throw an exception. These overloads participate in overload resolution only if [std::is_default_constructible](../../types/is_default_constructible.html)<Deleter>::value is true and Deleter is not a pointer type.

2) Constructs a `std::unique_ptr` which owns p, initializing the stored pointer with p and value-initializing the stored deleter. Requires that `Deleter` is [DefaultConstructible](../../named_req/DefaultConstructible.html "cpp/named req/DefaultConstructible") and that construction does not throw an exception. This overload participates in overload resolution only if [std::is_default_constructible](../../types/is_default_constructible.html)<Deleter>::value is true and Deleter is not a pointer type.  This constructor is not selected by [class template argument deduction](../../language/ctad.html "cpp/language/class template argument deduction").  | (since C++17)  
---|---  
  
3,4) Constructs a `std::unique_ptr` object which owns p, initializing the stored pointer with p and initializing a deleter `D` as below (depends upon whether `D` is a reference type).

a) If `D` is non-reference type A, then the signatures are:  unique_ptr(pointer p, const A& d) noexcept; |  (1)  |  (requires that `Deleter` is nothrow-[CopyConstructible](../../named_req/CopyConstructible.html "cpp/named req/CopyConstructible"))   
---|---|---  
unique_ptr(pointer p, A&& d) noexcept; |  (2)  |  (requires that `Deleter` is nothrow-[MoveConstructible](../../named_req/MoveConstructible.html "cpp/named req/MoveConstructible"))   
| |   
  
b) If `D` is an lvalue-reference type A&, then the signatures are:  unique_ptr(pointer p, A& d) noexcept; |  (1)  |   
---|---|---  
unique_ptr(pointer p, A&& d) = delete; |  (2)  |   
| |   
  
c) If `D` is an lvalue-reference type const A&, then the signatures are:  unique_ptr(pointer p, const A& d) noexcept; |  (1)  |   
---|---|---  
unique_ptr(pointer p, const A&& d) = delete; |  (2)  |   
| |   
  
In all cases the deleter is initialized from [std::forward](../../utility/forward.html)<decltype(d)>(d). These overloads participate in overload resolution only if [std::is_constructible](../../types/is_constructible.html)<D, decltype(d)>::value is true.  These two constructors are not selected by [class template argument deduction](../../language/ctad.html "cpp/language/class template argument deduction").  | (since C++17)  
---|---  
  
2-4) In the specialization for arrays behave the same as the constructors that take a pointer parameter in the primary template except that they additionally do not participate in overload resolution unless one of the following is true: 

  * `U` is the same type as `pointer`, or 
  * `U` is [std::nullptr_t](../../types/nullptr_t.html "cpp/types/nullptr t"), or 
  * `pointer` is the same type as `element_type*` and `U` is some pointer type `V*` such that `V(*)[]` is implicitly convertible to `element_type(*)[]`.



5) Constructs a `unique_ptr` by transferring ownership from u to *this and stores the null pointer in u. This constructor only participates in overload resolution if [std::is_move_constructible](../../types/is_move_constructible.html)<Deleter>::value is true. If `Deleter` is not a reference type, requires that it is nothrow-[MoveConstructible](../../named_req/MoveConstructible.html "cpp/named req/MoveConstructible") (if `Deleter` is a reference, `get_deleter()` and `u.get_deleter()` after move construction reference the same value).

6) Constructs a `unique_ptr` by transferring ownership from u to *this, where u is constructed with a specified deleter (`E`). It depends upon whether `E` is a reference type, as following:

a) if `E` is a reference type, this deleter is copy constructed from u's deleter (requires that this construction does not throw),

b) if `E` is a non-reference type, this deleter is move constructed from u's deleter (requires that this construction does not throw).

This constructor only participates in overload resolution if all of the following is true:

a) unique_ptr<U, E>::pointer is implicitly convertible to `pointer`,

b) U is not an array type,

c) either `Deleter` is a reference type and `E` is the same type as `Deleter`, or `Deleter` is not a reference type and `E` is implicitly convertible to `Deleter`.

6) In the specialization for arrays behaves the same as in the primary template, except that it will only participate in overload resolution if all of the following is true: 

  * `U` is an array type, 
  * `pointer` is the same type as `element_type*`, 
  * unique_ptr<U,E>::pointer is the same type as unique_ptr<U,E>::element_type*, 
  * unique_ptr<U,E>::element_type(*)[] is convertible to `element_type(*)[]`, 
  * either `Deleter` is a reference type and `E` is the same type as `Deleter`, or `Deleter` is not a reference type and `E` is implicitly convertible to `Deleter`.



7) Copy constructor is explicitly deleted.

8) Constructs a `unique_ptr` where the stored pointer is initialized with [`u.release()`](../auto_ptr/release.html "cpp/memory/auto ptr/release") and the stored deleter is value-initialized. This constructor only participates in overload resolution if `U*` is implicitly convertible to `T*` and `Deleter` is the same type as [std::default_delete](../default_delete.html)<T>.

## Contents

  * [1 Parameters](unique_ptr.html#Parameters)
  * [2 Notes](unique_ptr.html#Notes)
  * [3 Example](unique_ptr.html#Example)
  * [4 Defect reports](unique_ptr.html#Defect_reports)

  
---  
  
### Parameters

p  |  \-  |  a pointer to an object to manage   
---|---|---  
d1, d2  |  \-  |  a deleter to use to destroy the object   
u  |  \-  |  another smart pointer to acquire the ownership from   
  
### Notes

Instead of using the overload (2) together with new, it is often a better idea to use [std::make_unique<T>](make_unique.html "cpp/memory/unique ptr/make unique").  | (since C++14)  
---|---  
  
[std::unique_ptr](../unique_ptr.html)<Derived> is implicitly convertible to [std::unique_ptr](../unique_ptr.html)<Base> through the overload (6) (because both the managed pointer and [std::default_delete](../default_delete.html "cpp/memory/default delete") are implicitly convertible). 

Because the default constructor is constexpr, static unique_ptrs are initialized as part of [static non-local initialization](../../language/initialization.html#Non-local_variables "cpp/language/initialization"), before any dynamic non-local initialization begins. This makes it safe to use a unique_ptr in a constructor of any static object. 

There is no [class template argument deduction](../../language/ctad.html "cpp/language/class template argument deduction") from pointer type because it is impossible to distinguish a pointer obtained from array and non-array forms of new.  | (since C++17)  
---|---  
  
### Example

Run this code
    
    
    #include <iostream>
    #include <memory>
     
    struct Foo // object to manage
    {
        Foo() { [std::cout](../../io/cout.html) << "Foo ctor\n"; }
        Foo(const Foo&) { [std::cout](../../io/cout.html) << "Foo copy ctor\n"; }
        Foo(Foo&&) { [std::cout](../../io/cout.html) << "Foo move ctor\n"; }
        ~Foo() { [std::cout](../../io/cout.html) << "~Foo dtor\n"; }
    };
     
    struct D // deleter
    {
        D() {};
        D(const D&) { [std::cout](../../io/cout.html) << "D copy ctor\n"; }
        D(D&) { [std::cout](../../io/cout.html) << "D non-const copy ctor\n"; }
        D(D&&) { [std::cout](../../io/cout.html) << "D move ctor \n"; }
        void operator()(Foo* p) const
        {
            [std::cout](../../io/cout.html) << "D is deleting a Foo\n";
            delete p;
        };
    };
     
    int main()
    {
        [std::cout](../../io/cout.html) << "Example constructor(1)...\n";
        [std::unique_ptr](../unique_ptr.html)<Foo> up1; // up1 is empty
        [std::unique_ptr](../unique_ptr.html)<Foo> up1b(nullptr); // up1b is empty
     
        [std::cout](../../io/cout.html) << "Example constructor(2)...\n";
        {
            [std::unique_ptr](../unique_ptr.html)<Foo> up2(new Foo); //up2 now owns a Foo
        } // Foo deleted
     
        [std::cout](../../io/cout.html) << "Example constructor(3)...\n";
        D d;
        {   // deleter type is not a reference
            [std::unique_ptr](../unique_ptr.html)<Foo, D> up3(new Foo, d); // deleter copied
        }
        {   // deleter type is a reference
            [std::unique_ptr](../unique_ptr.html)<Foo, D&> up3b(new Foo, d); // up3b holds a reference to d
        }
     
        [std::cout](../../io/cout.html) << "Example constructor(4)...\n";
        {   // deleter is not a reference
            [std::unique_ptr](../unique_ptr.html)<Foo, D> up4(new Foo, D()); // deleter moved
        }
     
        [std::cout](../../io/cout.html) << "Example constructor(5)...\n";
        {
            [std::unique_ptr](../unique_ptr.html)<Foo> up5a(new Foo);
            [std::unique_ptr](../unique_ptr.html)<Foo> up5b(std::move(up5a)); // ownership transfer
        }
     
        [std::cout](../../io/cout.html) << "Example constructor(6)...\n";
        {
            [std::unique_ptr](../unique_ptr.html)<Foo, D> up6a(new Foo, d); // D is copied
            [std::unique_ptr](../unique_ptr.html)<Foo, D> up6b(std::move(up6a)); // D is moved
     
            [std::unique_ptr](../unique_ptr.html)<Foo, D&> up6c(new Foo, d); // D is a reference
            [std::unique_ptr](../unique_ptr.html)<Foo, D> up6d(std::move(up6c)); // D is copied
        }
     
    #if (__cplusplus < 201703L)
        [std::cout](../../io/cout.html) << "Example constructor(7)...\n";
        {
            [std::auto_ptr](../auto_ptr.html)<Foo> up7a(new Foo);
            [std::unique_ptr](../unique_ptr.html)<Foo> up7b(std::move(up7a)); // ownership transfer
        }
    #endif
     
        [std::cout](../../io/cout.html) << "Example array constructor...\n";
        {
            [std::unique_ptr](../unique_ptr.html)<Foo[]> up(new Foo[3]);
        } // three Foo objects deleted
    }

Output: 
    
    
    Example constructor(1)...
    Example constructor(2)...
    Foo ctor
    ~Foo dtor
    Example constructor(3)...
    Foo ctor
    D copy ctor
    D is deleting a Foo
    ~Foo dtor
    Foo ctor
    D is deleting a Foo
    ~Foo dtor
    Example constructor(4)...
    Foo ctor
    D move ctor
    D is deleting a Foo
    ~Foo dtor
    Example constructor(5)...
    Foo ctor
    ~Foo dtor
    Example constructor(6)...
    Foo ctor
    D copy ctor
    D move ctor
    Foo ctor
    D non-const copy ctor
    D is deleting a Foo
    ~Foo dtor
    D is deleting a Foo
    ~Foo dtor
    Example constructor(7)...
    Foo ctor
    ~Foo dtor
    Example array constructor...
    Foo ctor
    Foo ctor
    Foo ctor
    ~Foo dtor
    ~Foo dtor
    ~Foo dtor

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 2118](https://cplusplus.github.io/LWG/issue2118) | C++11  | Constructors of `unique_ptr<T[]>` rejected qualification conversions.  | Accept.   
[LWG 2520](https://cplusplus.github.io/LWG/issue2520) | C++11  | `unique_ptr<T[]>` was accidentally made non-constructible from `nullptr_t`.  | Made constructible.   
[LWG 2801](https://cplusplus.github.io/LWG/issue2801) | C++11  | The default constructor was not constrained.  | Constrained.   
[LWG 2899](https://cplusplus.github.io/LWG/issue2899) | C++11  | The move constructor was not constrained.  | Constrained.   
[LWG 2905](https://cplusplus.github.io/LWG/issue2905) | C++11  | Constraint on the constructor from a pointer and a deleter was wrong.  | Corrected.   
[LWG 2944](https://cplusplus.github.io/LWG/issue2944) | C++11  | Some preconditions were accidentally dropped by LWG 2905  | Restored. 
