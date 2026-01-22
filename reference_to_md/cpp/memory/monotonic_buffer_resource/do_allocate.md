 
  


  
  
  
  
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
  
  
  


[`std::pmr::monotonic_buffer_resource`](../monotonic_buffer_resource.html "cpp/memory/monotonic buffer resource")

[monotonic_buffer_resource::monotonic_buffer_resource](monotonic_buffer_resource.html "cpp/memory/monotonic buffer resource/monotonic buffer resource")  
---  
[monotonic_buffer_resource::~monotonic_buffer_resource](~monotonic_buffer_resource.html "cpp/memory/monotonic buffer resource/~monotonic buffer resource")  
Public member functions  
[monotonic_buffer_resource::release](release.html "cpp/memory/monotonic buffer resource/release")  
[monotonic_buffer_resource::upstream_resource](upstream_resource.html "cpp/memory/monotonic buffer resource/upstream resource")  
Protected member functions  
**monotonic_buffer_resource::do_allocate**  
[monotonic_buffer_resource::do_deallocate](do_deallocate.html "cpp/memory/monotonic buffer resource/do deallocate")  
[monotonic_buffer_resource::do_is_equal](do_is_equal.html "cpp/memory/monotonic buffer resource/do is equal")  
  


virtual void* do_allocate( [std::size_t](../../types/size_t.html) bytes, [std::size_t](../../types/size_t.html) alignment ); |  |  (since C++17)  
---|---|---  
| |   
  
Allocates storage. 

If the _current buffer_ has sufficient unused space to fit a block with the specified size and alignment, allocates the return block from the current buffer. 

Otherwise, this function allocates a new buffer by calling upstream_resource()->allocate(n, m), where `n` is not less than the greater of bytes and the _next buffer size_ and `m` is not less than alignment. It sets the new buffer as the _current buffer_ , increases the _next buffer size_ by an implementation-defined growth factor (which is not necessarily integral), and then allocates the return block from the newly allocated buffer. 

### Return value 

A pointer to allocated storage of at least bytes bytes in size, aligned to the specified alignment if such alignment is supported, and to alignof([std::max_align_t](../../types/max_align_t.html)) otherwise. 

### Exceptions 

Throws nothing unless calling `allocate()` on the upstream memory resource throws. 

### See also 

[ allocate](../memory_resource/allocate.html "cpp/memory/memory resource/allocate") |  allocates memory   
(public member function of `std::pmr::memory_resource`)   
---|---  
[ do_allocate](../memory_resource/do_allocate.html "cpp/memory/memory resource/do allocate")[virtual] |  allocates memory  
(virtual private member function of `std::pmr::memory_resource`)
