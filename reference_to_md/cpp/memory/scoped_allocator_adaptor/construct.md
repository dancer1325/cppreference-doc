 
  


  
  
  
  
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
  
  
  


[`std::scoped_allocator_adaptor`](../scoped_allocator_adaptor.html "cpp/memory/scoped allocator adaptor")

Member functions  
---  
[scoped_allocator_adaptor::scoped_allocator_adaptor](scoped_allocator_adaptor.html "cpp/memory/scoped allocator adaptor/scoped allocator adaptor")  
[scoped_allocator_adaptor::~scoped_allocator_adaptor](~scoped_allocator_adaptor.html "cpp/memory/scoped allocator adaptor/~scoped allocator adaptor")  
[scoped_allocator_adaptor::operator=](operator=.html "cpp/memory/scoped allocator adaptor/operator=")  
[scoped_allocator_adaptor::inner_allocator](inner_allocator.html "cpp/memory/scoped allocator adaptor/inner allocator")  
[scoped_allocator_adaptor::outer_allocator](outer_allocator.html "cpp/memory/scoped allocator adaptor/outer allocator")  
[scoped_allocator_adaptor::allocate](allocate.html "cpp/memory/scoped allocator adaptor/allocate")  
[scoped_allocator_adaptor::deallocate](deallocate.html "cpp/memory/scoped allocator adaptor/deallocate")  
[scoped_allocator_adaptor::max_size](max_size.html "cpp/memory/scoped allocator adaptor/max size")  
**scoped_allocator_adaptor::construct**  
[scoped_allocator_adaptor::destroy](destroy.html "cpp/memory/scoped allocator adaptor/destroy")  
[scoped_allocator_adaptor::select_on_container_copy_construction](select_on_container_copy_construction.html "cpp/memory/scoped allocator adaptor/select on container copy construction")  
[_scoped_allocator_adaptor::outermost_  
 _scoped_allocator_adaptor::outermost-construct_  
 _scoped_allocator_adaptor::outermost-destroy_](helpers.html "cpp/memory/scoped allocator adaptor/helpers")  
Non-member functions  
[operator==operator!=](operator_cmp.html "cpp/memory/scoped allocator adaptor/operator cmp")(until C++20)  
[Deduction guides](deduction_guides.html "cpp/memory/scoped allocator adaptor/deduction guides")(C++17)  
  


Defined in header `[<scoped_allocator>](../../header/scoped_allocator.html "cpp/header/scoped allocator")` |  |   
---|---|---  
template< class T, class... Args >  
void construct( T* p, Args&&... args ); |  (1)  |   
template< class T1, class T2, class... Args1, class... Args2 >  
void construct( [std::pair](../../utility/pair.html)<T1, T2>* p, [std::piecewise_construct_t](../../utility/piecewise_construct_t.html),  
[std::tuple](../../utility/tuple.html)<Args1...> x, [std::tuple](../../utility/tuple.html)<Args2...> y ); |  (2)  |  (until C++20)  
template< class T1, class T2 >  
void construct( [std::pair](../../utility/pair.html)<T1, T2>* p ); |  (3)  |  (until C++20)  
template< class T1, class T2, class U, class V >  
void construct( [std::pair](../../utility/pair.html)<T1, T2>* p, U&& x, V&& y ); |  (4)  |  (until C++20)  
template< class T1, class T2, class U, class V >  
void construct( [std::pair](../../utility/pair.html)<T1, T2>* p, const [std::pair](../../utility/pair.html)<U, V>& xy ); |  (5)  |  (until C++20)  
template< class T1, class T2, class U, class V >  
void construct( [std::pair](../../utility/pair.html)<T1, T2>* p, [std::pair](../../utility/pair.html)<U, V>&& xy ); |  (6)  |  (until C++20)  
Helper function templates |  |   
template < class T, class... Args >  
[std::tuple](../../utility/tuple.html)</* see below */> /*concat-args*/( [std::tuple](../../utility/tuple.html)<Args...>&& tup ); |  (7) | (exposition only*)   
(until C++20)  
| |   
  
Constructs an object in allocated, but not initialized storage pointed to by p using the outer allocator and the provided constructor arguments. If the object is of a type that itself uses allocators, or if it is [std::pair](../../utility/pair.html "cpp/utility/pair")(until C++20), passes the inner allocator down to the constructed object. 

1) Constructs an object of type `T` by [uses-allocator construction](../uses_allocator.html#Uses-allocator_construction "cpp/memory/uses allocator") at the uninitialized memory location indicated by p using the outermost allocator.  Given [std::uses_allocator](../uses_allocator.html)<T, inner_allocator_type>::value as uses_inner: 

  * If uses_inner is false and [std::is_constructible](../../types/is_constructible.html)<T, Args...>::value is true, calls `_[outermost-construct](helpers.html#outermost-construct "cpp/memory/scoped allocator adaptor/helpers")_` ﻿(p, [std::forward](../../utility/forward.html)<Args>(args)...). 
  * Otherwise, if uses_inner and [std::is_constructible](../../types/is_constructible.html)<T, [std::allocator_arg_t](../allocator_arg_t.html),  
inner_allocator_type&,  
Args...>::value are both true, calls `_[outermost-construct](helpers.html#outermost-construct "cpp/memory/scoped allocator adaptor/helpers")_` ﻿(p, [std::allocator_arg](../allocator_arg.html),  
` `inner_allocator(),  
` `[std::forward](../../utility/forward.html)<Args>(args)...). 
  * Otherwise, if uses_inner and [std::is_constructible](../../types/is_constructible.html)<T, Args..., inner_allocator_type&>::value are both true, calls `_[outermost-construct](helpers.html#outermost-construct "cpp/memory/scoped allocator adaptor/helpers")_` ﻿(p, [std::forward](../../utility/forward.html)<Args>(args)..., inner_allocator()). 
  * Otherwise, the program is ill-formed. 

This overload participates in overload resolution only if `T` is not a specialization of [std::pair](../../utility/pair.html "cpp/utility/pair").  | (until C++20)  
---|---  
Equivalent to  [std::apply](../../utility/apply.html)  
(  
` `[p, this](auto&&... newargs)  
` `{  
` `` _[outermost-construct](helpers.html#outermost-construct "cpp/memory/scoped allocator adaptor/helpers")_`  
` `(p, [std::forward](../../utility/forward.html)<decltype(newargs)>(newargs)...);  
` `},  
` `[std::uses_allocator_construction_args](../uses_allocator_construction_args.html)  
` `(inner_allocator(), [std::forward](../../utility/forward.html)<Args>(args)...)  
); .  | (since C++20)  
  
2-6) Constructs a [std::pair](../../utility/pair.html "cpp/utility/pair") object by [uses-allocator construction](../uses_allocator.html#Uses-allocator_construction "cpp/memory/uses allocator") at the uninitialized memory location indicated by p using the outermost allocator.

2) Let xprime be `_concat-args_` ﻿<T1>(std::move(x)), yprime be `_concat-args_` ﻿<T2>(std::move(y)), calls `_[outermost-construct](helpers.html#outermost-construct "cpp/memory/scoped allocator adaptor/helpers")_` ﻿(p, [std::piecewise_construct](../../utility/piecewise_construct.html), std::move(xprime), std::move(yprime)).

3) Equivalent to construct(p, [std::piecewise_construct](../../utility/piecewise_construct.html), [std::tuple](../../utility/tuple.html)<>(), [std::tuple](../../utility/tuple.html)<>());.

4-6) Equivalent to construct(p, [std::piecewise_construct](../../utility/piecewise_construct.html),  
[std::forward_as_tuple](../../utility/tuple/forward_as_tuple.html)(xarg), [std::forward_as_tuple](../../utility/tuple/forward_as_tuple.html)(yarg));, where xarg and yarg are defined as follows:  Overload  | xarg | yarg  
---|---|---  
(4) | [std::forward](../../utility/forward.html)<U>(x) | [std::forward](../../utility/forward.html)<V>(y)  
(5) | xy.first | xy.second  
(6) | [std::forward](../../utility/forward.html)<U>(xy.first) | [std::forward](../../utility/forward.html)<V>(xy.second)  
  
7) Merges the arguments contained in tup and additional arguments required by [uses-allocator construction](../uses_allocator.html#Uses-allocator_construction "cpp/memory/uses allocator") of an object of type `T`.

Given [std::uses_allocator](../uses_allocator.html)<T, inner_allocator_type>::value as uses_inner: 

  * If uses_inner is false and [std::is_constructible](../../types/is_constructible.html)<T, Args...>::value is true, returns [std::tuple](../../utility/tuple.html)<Args&&...>(std::move(tup)). 
  * Otherwise, if uses_inner and [std::is_constructible](../../types/is_constructible.html)<T, [std::allocator_arg_t](../allocator_arg_t.html),  
inner_allocator_type&,  
Args...>::value are both true, returns [std::tuple_cat](../../utility/tuple/tuple_cat.html)([std::tuple](../../utility/tuple.html)<[std::allocator_arg_t](../allocator_arg_t.html), inner_allocator_type&>  
([std::allocator_arg](../allocator_arg.html), inner_allocator()),  
[std::tuple](../../utility/tuple.html)<Args&&...>(std::move(tup))). 
  * Otherwise, if uses_inner and [std::is_constructible](../../types/is_constructible.html)<T, Args..., inner_allocator_type&>::value are both true, returns [std::tuple_cat](../../utility/tuple/tuple_cat.html)([std::tuple](../../utility/tuple.html)<Args&&...>(std::move(tup)),  
[std::tuple](../../utility/tuple.html)<inner_allocator_type&>(inner_allocator()). 
  * Otherwise, the program is ill-formed.



## Contents

  * [1 Parameters](construct.html#Parameters)
  * [2 Notes](construct.html#Notes)
  * [3 Defect reports](construct.html#Defect_reports)
  * [4 See also](construct.html#See_also)

  
---  
  
### Parameters

p  |  \-  |  pointer to allocated, but not initialized storage   
---|---|---  
args  |  \-  |  the constructor arguments to pass to the constructor of `T`  
x  |  \-  |  the constructor arguments to pass to the constructor of `T1`  
y  |  \-  |  the constructor arguments to pass to the constructor of `T2`  
xy  |  \-  |  the pair whose two members are the constructor arguments for `T1` and `T2`  
tup  |  \-  |  the arguments to be merged   
  
### Notes

This function is called (through [std::allocator_traits](../allocator_traits.html "cpp/memory/allocator traits")) by any allocator-aware object, such as [std::vector](../../container/vector.html "cpp/container/vector"), that was given a [std::scoped_allocator_adaptor](../scoped_allocator_adaptor.html "cpp/memory/scoped allocator adaptor") as the allocator to use. Since `inner_allocator_type` is itself a specialization of [std::scoped_allocator_adaptor](../scoped_allocator_adaptor.html "cpp/memory/scoped allocator adaptor"), this function will also be called when the allocator-aware objects constructed through this function start constructing their own members. 

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 2203](https://cplusplus.github.io/LWG/issue2203) | C++11  | inner allocators were obtained by value-initializing  
an `inner_allocator_type` object  | obtained by calling [`inner_allocator()`](inner_allocator.html "cpp/memory/scoped allocator adaptor/inner allocator")  
[LWG 2511](https://cplusplus.github.io/LWG/issue2511)  
([P0475R1](https://wg21.link/P0475R1))  | C++11  | `_concat-args_` might copy elements of [std::tuple](../../utility/tuple.html "cpp/utility/tuple")s  | eliminated all element copy operations   
[LWG 2586](https://cplusplus.github.io/LWG/issue2586) | C++11  | only constructions from  
`inner_allocator_type` rvalues were checked  | checks constructions from non-const  
`inner_allocator_type` lvalues instead   
[LWG 2975](https://cplusplus.github.io/LWG/issue2975) | C++11  | overload (1) was not constrained  | constrained to refuse [std::pair](../../utility/pair.html "cpp/utility/pair")  
  
### See also

[ construct](../allocator_traits/construct.html "cpp/memory/allocator traits/construct")[static] |  constructs an object in the allocated storage   
(function template)   
---|---  
[ construct](../allocator/construct.html "cpp/memory/allocator/construct")(until C++20) |  constructs an object in allocated storage   
(public member function of `std::allocator<T>`) 
