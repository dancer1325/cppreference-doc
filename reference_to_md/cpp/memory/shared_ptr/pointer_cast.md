 
  


  
  
  
  
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
**static_pointer_cast dynamic_pointer_castconst_pointer_castreinterpret_pointer_cast**(C++17)  
[get_deleter](get_deleter.html "cpp/memory/shared ptr/get deleter")  
[operator==operator!=operator<operator<=operator>operator>=operator<=>](operator_cmp.html "cpp/memory/shared ptr/operator cmp")(until C++20)(until C++20)(until C++20)(until C++20)(until C++20)(C++20)  
[operator<<](operator_ltlt.html "cpp/memory/shared ptr/operator ltlt")  
[atomic_xxx](atomic.html "cpp/memory/shared ptr/atomic")functions (until C++26*)  
Helper classes  
[atomic<std::shared_ptr>](atomic2.html "cpp/memory/shared ptr/atomic2")(C++20)  
[hash<std::shared_ptr>](hash.html "cpp/memory/shared ptr/hash")  
[Deduction guides](deduction_guides.html "cpp/memory/shared ptr/deduction guides")(C++17)  
  


Defined in header `[<memory>](../../header/memory.html "cpp/header/memory")` |  |   
---|---|---  
template< class T, class U >  
[std::shared_ptr](../shared_ptr.html)<T> static_pointer_cast( const [std::shared_ptr](../shared_ptr.html)<U>& r ) noexcept; |  (1) | (since C++11)  
template< class T, class U >  
[std::shared_ptr](../shared_ptr.html)<T> static_pointer_cast( [std::shared_ptr](../shared_ptr.html)<U>&& r ) noexcept; |  (2)  |  (since C++20)  
template< class T, class U >  
[std::shared_ptr](../shared_ptr.html)<T> dynamic_pointer_cast( const [std::shared_ptr](../shared_ptr.html)<U>& r ) noexcept; |  (3) | (since C++11)  
template< class T, class U >  
[std::shared_ptr](../shared_ptr.html)<T> dynamic_pointer_cast( [std::shared_ptr](../shared_ptr.html)<U>&& r ) noexcept; |  (4)  |  (since C++20)  
template< class T, class U >  
[std::shared_ptr](../shared_ptr.html)<T> const_pointer_cast( const [std::shared_ptr](../shared_ptr.html)<U>& r ) noexcept; |  (5) | (since C++11)  
template< class T, class U >  
[std::shared_ptr](../shared_ptr.html)<T> const_pointer_cast( [std::shared_ptr](../shared_ptr.html)<U>&& r ) noexcept; |  (6)  |  (since C++20)  
template< class T, class U >  
[std::shared_ptr](../shared_ptr.html)<T> reinterpret_pointer_cast( const [std::shared_ptr](../shared_ptr.html)<U>& r ) noexcept; |  (7) | (since C++17)  
template< class T, class U >  
[std::shared_ptr](../shared_ptr.html)<T> reinterpret_pointer_cast( [std::shared_ptr](../shared_ptr.html)<U>&& r ) noexcept; |  (8)  |  (since C++20)  
| |   
  
Creates a new instance of [std::shared_ptr](../shared_ptr.html "cpp/memory/shared ptr") whose stored pointer is obtained from r's stored pointer using a cast expression. 

If r is empty, so is the new `shared_ptr` (but its stored pointer is not necessarily null). Otherwise, the new `shared_ptr` will share ownership with the initial value of r, except that it is empty if the `dynamic_cast` performed by `dynamic_pointer_cast` returns a null pointer. 

Let `Y` be typename [std::shared_ptr](../shared_ptr.html)<T>::element_type, then the resulting [std::shared_ptr](../shared_ptr.html "cpp/memory/shared ptr")'s stored pointer will be obtained by evaluating, respectively: 

1,2) static_cast<Y*>(r.get())

3,4) dynamic_cast<Y*>(r.get()). If the result of the `dynamic_cast` is a null pointer value, the returned `shared_ptr` will be empty.

5,6) const_cast<Y*>(r.get())

7,8) reinterpret_cast<Y*>(r.get())

The behavior of these functions is undefined unless the corresponding cast from `U*` to `T*` is well formed: 

1,2) The behavior is undefined unless static_cast<T*>((U*)nullptr) is well formed.

3,4) The behavior is undefined unless dynamic_cast<T*>((U*)nullptr) is well formed.

5,6) The behavior is undefined unless const_cast<T*>((U*)nullptr) is well formed.

7,8) The behavior is undefined unless reinterpret_cast<T*>((U*)nullptr) is well formed.

After calling the rvalue overloads (2,4,6,8), r is empty and r.get() == nullptr, except that r is not modified for `dynamic_pointer_cast` (4) if the dynamic_cast fails.  | (since C++20)  
---|---  
  
## Contents

  * [1 Parameters](pointer_cast.html#Parameters)
  * [2 Notes](pointer_cast.html#Notes)
  * [3 Possible implementation](pointer_cast.html#Possible_implementation)
  * [4 Example](pointer_cast.html#Example)
  * [5 See also](pointer_cast.html#See_also)

  
---  
  
### Parameters

r  |  \-  |  the pointer to convert   
---|---|---  
  
### Notes

The expressions [std::shared_ptr](../shared_ptr.html)<T>(static_cast<T*>(r.get())), [std::shared_ptr](../shared_ptr.html)<T>(dynamic_cast<T*>(r.get())) and [std::shared_ptr](../shared_ptr.html)<T>(const_cast<T*>(r.get())) might seem to have the same effect, but they all will likely result in undefined behavior, attempting to delete the same object twice! 

### Possible implementation

[static_pointer_cast](pointer_cast.html#Version_1)  
---  
      
    
    template<class T, class U>
    [std::shared_ptr](../shared_ptr.html)<T> static_pointer_cast(const [std::shared_ptr](../shared_ptr.html)<U>& r) noexcept
    {
        auto p = static_cast<typename [std::shared_ptr](../shared_ptr.html)<T>::element_type*>(r.get());
        return [std::shared_ptr](../shared_ptr.html)<T>{r, p};
    }  
  
[dynamic_pointer_cast](pointer_cast.html#Version_3)  
      
    
    template<class T, class U>
    [std::shared_ptr](../shared_ptr.html)<T> dynamic_pointer_cast(const [std::shared_ptr](../shared_ptr.html)<U>& r) noexcept
    {
        if (auto p = dynamic_cast<typename [std::shared_ptr](../shared_ptr.html)<T>::element_type*>(r.get()))
            return [std::shared_ptr](../shared_ptr.html)<T>{r, p};
        else
            return [std::shared_ptr](../shared_ptr.html)<T>{};
    }  
  
[const_pointer_cast](pointer_cast.html#Version_5)  
      
    
    template<class T, class U>
    [std::shared_ptr](../shared_ptr.html)<T> const_pointer_cast(const [std::shared_ptr](../shared_ptr.html)<U>& r) noexcept
    {
        auto p = const_cast<typename [std::shared_ptr](../shared_ptr.html)<T>::element_type*>(r.get());
        return [std::shared_ptr](../shared_ptr.html)<T>{r, p};
    }  
  
[reinterpret_pointer_cast](pointer_cast.html#Version_7)  
      
    
    template<class T, class U>
    [std::shared_ptr](../shared_ptr.html)<T> reinterpret_pointer_cast(const [std::shared_ptr](../shared_ptr.html)<U>& r) noexcept
    {
        auto p = reinterpret_cast<typename [std::shared_ptr](../shared_ptr.html)<T>::element_type*>(r.get());
        return [std::shared_ptr](../shared_ptr.html)<T>{r, p};
    }  
  
### Example

Run this code
    
    
    #include <iostream>
    #include <memory>
     
    class Base
    {
    public:
        int a;
        virtual void f() const { [std::cout](../../io/cout.html) << "I am base!\n"; }
        virtual ~Base() {}
    };
     
    class Derived : public Base
    {
    public:
        void f() const override { [std::cout](../../io/cout.html) << "I am derived!\n"; }
        ~Derived() {}
    };
     
    int main()
    {
        auto basePtr = [std::make_shared](make_shared.html)<Base>();
        [std::cout](../../io/cout.html) << "Base pointer says: ";
        basePtr->f();
     
        auto derivedPtr = [std::make_shared](make_shared.html)<Derived>();
        [std::cout](../../io/cout.html) << "Derived pointer says: ";
        derivedPtr->f();
     
        // static_pointer_cast to go up class hierarchy
        basePtr = std::static_pointer_cast<Base>(derivedPtr);
        [std::cout](../../io/cout.html) << "Base pointer to derived says: ";
        basePtr->f();
     
        // dynamic_pointer_cast to go down/across class hierarchy
        auto downcastedPtr = std::dynamic_pointer_cast<Derived>(basePtr);
        if (downcastedPtr)
        {
            [std::cout](../../io/cout.html) << "Downcasted pointer says: ";
            downcastedPtr->f();
        }
     
        // All pointers to derived share ownership
        [std::cout](../../io/cout.html) << "Pointers to underlying derived: "
                  << derivedPtr.use_count()
                  << '\n';
    }

Output: 
    
    
    Base pointer says: I am base!
    Derived pointer says: I am derived!
    Base pointer to derived says: I am derived!
    Downcasted pointer says: I am derived!
    Pointers to underlying derived: 3

### See also

[ (constructor)](shared_ptr.html "cpp/memory/shared ptr/shared ptr") |  constructs new `shared_ptr`   
(public member function)   
---|---
