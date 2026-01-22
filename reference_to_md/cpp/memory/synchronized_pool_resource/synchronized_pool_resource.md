 
  


  
  
  
  
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
  
  
  


[`std::pmr::synchronized_pool_resource`](../synchronized_pool_resource.html "cpp/memory/synchronized pool resource")

**synchronized_pool_resource::synchronized_pool_resource**  
---  
[synchronized_pool_resource::~synchronized_pool_resource](~synchronized_pool_resource.html "cpp/memory/synchronized pool resource/~synchronized pool resource")  
Public member functions  
[synchronized_pool_resource::release](release.html "cpp/memory/synchronized pool resource/release")  
[synchronized_pool_resource::upstream_resource](upstream_resource.html "cpp/memory/synchronized pool resource/upstream resource")  
[synchronized_pool_resource::options](options.html "cpp/memory/synchronized pool resource/options")  
Protected member functions  
[synchronized_pool_resource::do_allocate](do_allocate.html "cpp/memory/synchronized pool resource/do allocate")  
[synchronized_pool_resource::do_deallocate](do_deallocate.html "cpp/memory/synchronized pool resource/do deallocate")  
[synchronized_pool_resource::do_is_equal](do_is_equal.html "cpp/memory/synchronized pool resource/do is equal")  
  


synchronized_pool_resource(); |  (1)  |  (since C++17)  
---|---|---  
explicit synchronized_pool_resource( [std::pmr::memory_resource](../memory_resource.html)* upstream ); |  (2)  |  (since C++17)  
explicit synchronized_pool_resource( const [std::pmr::pool_options](../pool_options.html)& opts ); |  (3)  |  (since C++17)  
synchronized_pool_resource( const [std::pmr::pool_options](../pool_options.html)& opts,  
[std::pmr::memory_resource](../memory_resource.html)* upstream ); |  (4)  |  (since C++17)  
synchronized_pool_resource( const synchronized_pool_resource& ) = delete; |  (5)  |  (since C++17)  
| |   
  
Constructs a `synchronized_pool_resource`. 

1-4) Constructs a `synchronized_pool_resource` using the specified upstream memory resource and tuned according to the specified options. The resulting object holds a copy of upstream but does not own the resource to which upstream points.  
The overloads not taking opts as a parameter uses a default constructed instance of [`pool_options`](../pool_options.html "cpp/memory/pool options") as the options. The overloads not taking upstream as a parameter uses the return value of [std::pmr::get_default_resource](../get_default_resource.html "cpp/memory/get default resource") as the upstream memory resource.

5) Copy constructor is deleted.

### Parameters 

opts  |  \-  |  a [std::pmr::pool_options](../pool_options.html "cpp/memory/pool options") struct containing the constructor options   
---|---|---  
upstream  |  \-  |  the upstream memory resource to use   
  
### Exceptions 

1-4) Throws only if a call to the `allocate()` function of the upstream resource throws. It is unspecified if or under what conditions such a call takes place.
