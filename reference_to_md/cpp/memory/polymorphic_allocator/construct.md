 
  


  
  
  
  
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
  
  
  


[`std::pmr::polymorphic_allocator`](../polymorphic_allocator.html "cpp/memory/polymorphic allocator")

Member functions  
---  
[polymorphic_allocator::polymorphic_allocator](polymorphic_allocator.html "cpp/memory/polymorphic allocator/polymorphic allocator")  
[polymorphic_allocator::allocate](allocate.html "cpp/memory/polymorphic allocator/allocate")  
[polymorphic_allocator::deallocate](deallocate.html "cpp/memory/polymorphic allocator/deallocate")  
**polymorphic_allocator::construct**  
[polymorphic_allocator::destroy](destroy.html "cpp/memory/polymorphic allocator/destroy")(C++20/26*)  
[polymorphic_allocator::allocate_bytes](allocate_bytes.html "cpp/memory/polymorphic allocator/allocate bytes")(C++20)  
[polymorphic_allocator::deallocate_bytes](deallocate_bytes.html "cpp/memory/polymorphic allocator/deallocate bytes")(C++20)  
[polymorphic_allocator::allocate_object](allocate_object.html "cpp/memory/polymorphic allocator/allocate object")(C++20)  
[polymorphic_allocator::deallocate_object](deallocate_object.html "cpp/memory/polymorphic allocator/deallocate object")(C++20)  
[polymorphic_allocator::new_object](new_object.html "cpp/memory/polymorphic allocator/new object")(C++20)  
[polymorphic_allocator::delete_object](delete_object.html "cpp/memory/polymorphic allocator/delete object")(C++20)  
[polymorphic_allocator::select_on_container_copy_construction](select_on_container_copy_construction.html "cpp/memory/polymorphic allocator/select on container copy construction")  
[polymorphic_allocator::resource](resource.html "cpp/memory/polymorphic allocator/resource")  
Non-member functions  
[operator==operator!=](operator_eq.html "cpp/memory/polymorphic allocator/operator eq")(until C++20)  
  


template< class U, class... Args >  
void construct( U* p, Args&&... args ); |  (1)  |  (since C++17)  
---|---|---  
template< class T1, class T2, class... Args1, class... Args2 >  
void construct( [std::pair](../../utility/pair.html)<T1, T2>* p,  
[std::piecewise_construct_t](../../utility/piecewise_construct_t.html),  
[std::tuple](../../utility/tuple.html)<Args1...> x,  
[std::tuple](../../utility/tuple.html)<Args2...> y ); |  (2)  |  (since C++17)   
(until C++20)  
template< class T1, class T2 >  
void construct( [std::pair](../../utility/pair.html)<T1, T2>* p ); |  (3)  |  (since C++17)   
(until C++20)  
template< class T1, class T2, class U, class V >  
void construct( [std::pair](../../utility/pair.html)<T1, T2>* p, U&& x, V&& y ); |  (4)  |  (since C++17)   
(until C++20)  
template< class T1, class T2, class U, class V >  
void construct( [std::pair](../../utility/pair.html)<T1, T2>* p, const [std::pair](../../utility/pair.html)<U, V>& xy ); |  (5)  |  (since C++17)   
(until C++20)  
template< class T1, class T2, class U, class V >  
void construct( [std::pair](../../utility/pair.html)<T1, T2>* p, [std::pair](../../utility/pair.html)<U, V>&& xy ); |  (6)  |  (since C++17)   
(until C++20)  
template< class T1, class T2, class NonPair >  
void construct( [std::pair](../../utility/pair.html)<T1, T2>* p, NonPair&& non_pair ); |  (7)  |  (since C++17)   
(until C++20)  
| |   
  
Constructs an object in allocated, but not initialized storage pointed to by p the provided constructor arguments. If the object is of type that itself uses allocators, or if it is std::pair, passes *this down to the constructed object. 

1) Creates an object of the given type `U` by means of [uses-allocator construction](../uses_allocator.html#Uses-allocator_construction "cpp/memory/uses allocator") at the uninitialized memory location indicated by p, using *this as the allocator. This overload participates in overload resolution only if `U` is not a specialization of [std::pair](../../utility/pair.html "cpp/utility/pair").(until C++20)

2) First, if either `T1` or `T2` is allocator-aware, modifies the tuples x and y to include `this->resource()`, resulting in the two new tuples `xprime` and `yprime`, according to the following three rules: 2a) if `T1` is not allocator-aware ([std::uses_allocator](../uses_allocator.html)<T1, polymorphic_allocator>::value==false) and [std::is_constructible](../../types/is_constructible.html)<T1, Args1...>::value==true, then `xprime` is x, unmodified. 2b) if `T1` is allocator-aware ([std::uses_allocator](../uses_allocator.html)<T1, polymorphic_allocator>::value==true), and its constructor takes an allocator tag ([std::is_constructible](../../types/is_constructible.html)<T1, [std::allocator_arg_t](../allocator_arg_t.html), polymorphic_allocator, Args1...>::value==true, then `xprime` is [std::tuple_cat](../../utility/tuple/tuple_cat.html)([std::make_tuple](../../utility/tuple/make_tuple.html)([std::allocator_arg](../allocator_arg.html), *this), std::move(x)). 2c) if `T1` is allocator-aware ([std::uses_allocator](../uses_allocator.html)<T1, polymorphic_allocator>::value==true), and its constructor takes the allocator as the last argument ([std::is_constructible](../../types/is_constructible.html)<T1, Args1..., polymorphic_allocator>::value==true), then `xprime` is [std::tuple_cat](../../utility/tuple/tuple_cat.html)(std::move(x), [std::make_tuple](../../utility/tuple/make_tuple.html)(*this)). 2d) Otherwise, the program is ill-formed. Same rules apply to `T2` and the replacement of y with `yprime`. Once `xprime` and `yprime` are constructed, constructs the pair p in allocated storage as if by ::new((void *) p) pair<T1, T2>([std::piecewise_construct](../../utility/piecewise_construct.html), std::move(xprime), std::move(yprime));. 3) Equivalent to construct(p, [std::piecewise_construct](../../utility/piecewise_construct.html), [std::tuple](../../utility/tuple.html)<>(), [std::tuple](../../utility/tuple.html)<>()), that is, passes the memory resource on to the pair's member types if they accept them. 4) Equivalent to 
    
    
    construct(p, [std::piecewise_construct](../../utility/piecewise_construct.html), [std::forward_as_tuple](../../utility/tuple/forward_as_tuple.html)([std::forward](../../utility/forward.html)<U>(x)),
                                           [std::forward_as_tuple](../../utility/tuple/forward_as_tuple.html)([std::forward](../../utility/forward.html)<V>(y)))

5) Equivalent to 
    
    
    construct(p, [std::piecewise_construct](../../utility/piecewise_construct.html), [std::forward_as_tuple](../../utility/tuple/forward_as_tuple.html)(xy.first),
                                           [std::forward_as_tuple](../../utility/tuple/forward_as_tuple.html)(xy.second))

6) Equivalent to 
    
    
    construct(p, [std::piecewise_construct](../../utility/piecewise_construct.html), [std::forward_as_tuple](../../utility/tuple/forward_as_tuple.html)([std::forward](../../utility/forward.html)<U>(xy.first)),
                                           [std::forward_as_tuple](../../utility/tuple/forward_as_tuple.html)([std::forward](../../utility/forward.html)<V>(xy.second)))

7) This overload participates in overload resolution only if given the exposition-only function template 
    
    
    template< class A, class B >
    void /*deduce-as-pair*/( const [std::pair](../../utility/pair.html)<A, B>& );

, /*deduce-as-pair*/(non_pair) is ill-formed when considered as an unevaluated operand. Equivalent to 
    
    
    construct<T1, T2, T1, T2>(p, [std::forward](../../utility/forward.html)<NonPair>(non_pair));

| (until C++20)  
---|---  
  
## Contents

  * [1 Parameters](construct.html#Parameters)
  * [2 Return value](construct.html#Return_value)
  * [3 Notes](construct.html#Notes)
  * [4 Defect reports](construct.html#Defect_reports)
  * [5 See also](construct.html#See_also)

  
---  
  
### Parameters

p  |  \-  |  pointer to allocated, but not initialized storage   
---|---|---  
args...  |  \-  |  the constructor arguments to pass to the constructor of `T`  
x  |  \-  |  the constructor arguments to pass to the constructor of `T1`  
y  |  \-  |  the constructor arguments to pass to the constructor of `T2`  
xy  |  \-  |  the pair whose two members are the constructor arguments for `T1` and `T2`  
non_pair  |  \-  |  non-`pair` argument to convert to `pair` for further construction   
  
### Return value

(none) 

### Notes

This function is called (through [std::allocator_traits](../allocator_traits.html "cpp/memory/allocator traits")) by any allocator-aware object, such as [std::pmr::vector](../../container/vector.html "cpp/container/vector") (or another [std::vector](../../container/vector.html "cpp/container/vector") that was given a `std::pmr::polymorphic_allocator` as the allocator to use). 

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 2969](https://cplusplus.github.io/LWG/issue2969) | C++17  | uses-allocator construction passed `resource()` | passes *this  
[LWG 2975](https://cplusplus.github.io/LWG/issue2975) | C++17  | first overload is mistakenly used for pair construction in some cases  | constrained to not accept pairs   
[LWG 3525](https://cplusplus.github.io/LWG/issue3525) | C++17  | no overload could handle non-`pair` types convertible to `pair` | reconstructing overload added   
  
### See also

[ construct](../allocator_traits/construct.html "cpp/memory/allocator traits/construct")[static] |  constructs an object in the allocated storage   
(function template)   
---|---  
[ construct](../allocator/construct.html "cpp/memory/allocator/construct")(until C++20) |  constructs an object in allocated storage   
(public member function of `std::allocator<T>`) 
