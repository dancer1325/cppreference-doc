 
  


  
  
  
  
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
  
  
  


[`std::out_ptr_t`](../out_ptr_t.html "cpp/memory/out ptr t")

Member functions  
---  
[out_ptr_t::out_ptr_t](out_ptr_t.html "cpp/memory/out ptr t/out ptr t")  
[out_ptr_t::~out_ptr_t](~out_ptr_t.html "cpp/memory/out ptr t/~out ptr t")  
[out_ptr_t::operator Pointer*out_ptr_t::operator void**](operator_ptr.html "cpp/memory/out ptr t/operator ptr")  
Non-member functions  
**out_ptr**  
  


Defined in header `[<memory>](../../header/memory.html "cpp/header/memory")` |  |   
---|---|---  
template< class Pointer = void, class Smart, class... Args >  
auto out_ptr( Smart& s, Args&&... args ); |  |  (since C++23)  
| |   
  
Returns an [`std::out_ptr_t`](../out_ptr_t.html "cpp/memory/out ptr t") with deduced template arguments that captures arguments for resetting by reference. 

The program is ill-formed if construction of the return value (see below) is ill-formed. 

## Contents

  * [1 Parameters](out_ptr.html#Parameters)
  * [2 Return value](out_ptr.html#Return_value)
  * [3 Notes](out_ptr.html#Notes)
  * [4 Example](out_ptr.html#Example)
  * [5 See also](out_ptr.html#See_also)

  
---  
  
### Parameters

s  |  \-  |  the object (typically a smart pointer) to adapt   
---|---|---  
args...  |  \-  |  the arguments for resetting to capture   
  
### Return value

[std::out_ptr_t](../out_ptr_t.html)<Smart, P, Args&&>(s, [std::forward](../../utility/forward.html)<Args>(args)...), where `P` is 

  * `Pointer`, if `Pointer` is not a void type. Otherwise, 
  * Smart::pointer, if it is valid and denotes a type. Otherwise, 
  * Smart::element_type*, if Smart::element_type is valid and denotes a type. Otherwise, 
  * [std::pointer_traits](../pointer_traits.html)<Smart>::element_type*. 



### Notes

Users may specify the template argument for the template parameter `Pointer`, in order to interoperate with foreign functions that take a Pointer*. 

As all arguments for resetting are captured by reference, the returned `out_ptr_t` should be a temporary object destroyed at the end of the full-expression containing the call to the foreign function, in order to avoid dangling references. 

[Feature-test](../../utility/feature_test.html "cpp/utility/feature test") macro  | Value | Std | Feature   
---|---|---|---  
[`__cpp_lib_out_ptr`](../../experimental/feature_test.html#cpp_lib_out_ptr "cpp/feature test") | [`202106L`](../../compiler_support/23.html#cpp_lib_out_ptr_202106L "cpp/compiler support/23") | (C++23) | `std::out_ptr`, std::inout_ptr  
[`202311L`](../../compiler_support/26.html#cpp_lib_out_ptr_202311L "cpp/compiler support/26") | (C++26) | freestanding `std::out_ptr` and std::inout_ptr  
  
### Example

Use `std::out_ptr` to adapt a smart pointer for [`sqlite3_open`](https://www.sqlite.org/c3ref/open.html), which expects a `sqlite3**` as an out parameter.

Run this code
    
    
    #include <memory>
    #include <sqlite3.h>
     
    int main()
    {
        auto close_db = [](sqlite3* db) { sqlite3_close(db); };
     
        {
            // open an in-memory database, and manage its lifetime with std::unique_ptr
            [std::unique_ptr](../unique_ptr.html)<sqlite3, decltype(close_db)> up;
            sqlite3_open(":memory:", std::out_ptr(up));
     
            sqlite3* db = up.get();
            // do something with db ...
        }
        {
            // same as above, but use a std::shared_ptr
            [std::shared_ptr](../shared_ptr.html)<sqlite3> sp;
            sqlite3_open(":memory:", std::out_ptr(sp, close_db));
     
            sqlite3* db = sp.get();
            // do something with db ...
        }
    }

### See also

[ inout_ptr](../inout_ptr_t/inout_ptr.html "cpp/memory/inout ptr t/inout ptr")(C++23) |  creates an `inout_ptr_t` with an associated smart pointer and resetting arguments   
(function template)   
---|---  
[ make_uniquemake_unique_for_overwrite](../unique_ptr/make_unique.html "cpp/memory/unique ptr/make unique")(C++14)(C++20) |  creates a unique pointer that manages a new object   
(function template)   
[ make_sharedmake_shared_for_overwrite](../shared_ptr/make_shared.html "cpp/memory/shared ptr/make shared")(C++20) |  creates a shared pointer that manages a new object   
(function template) 
  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
