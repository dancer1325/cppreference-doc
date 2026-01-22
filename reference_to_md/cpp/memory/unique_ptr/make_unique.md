 
  


  
  
  
  
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
**make_unique make_unique_for_overwrite**(C++14)(C++20)  
[operator==operator!=operator<operator>operator<=operator>=operator<=>](operator_cmp.html "cpp/memory/unique ptr/operator cmp")(until C++20)(C++20)  
[operator<<](operator_ltlt.html "cpp/memory/unique ptr/operator ltlt")(C++20)  
[swap(std::unique_ptr)](swap2.html "cpp/memory/unique ptr/swap2")  
[Helper classes](../unique_ptr.html#Helper_classes "cpp/memory/unique ptr")  
[hash<std::unique_ptr>](hash.html "cpp/memory/unique ptr/hash")  
  


Defined in header `[<memory>](../../header/memory.html "cpp/header/memory")` |  |   
---|---|---  
| (1) |   
template< class T, class... Args >  
unique_ptr<T> make_unique( Args&&... args ); |  | (since C++14)   
(until C++23)   
(only for non-array types)  
template< class T, class... Args >  
constexpr unique_ptr<T> make_unique( Args&&... args ); |  |  (since C++23)   
(only for non-array types)  
| (2) |   
template< class T >  
unique_ptr<T> make_unique( [std::size_t](../../types/size_t.html) size ); |  | (since C++14)   
(until C++23)   
(only for array types with unknown bound)  
template< class T >  
constexpr unique_ptr<T> make_unique( [std::size_t](../../types/size_t.html) size ); |  |  (since C++23)   
(only for array types with unknown bound)  
template< class T, class... Args >  
/* unspecified */ make_unique( Args&&... args ) = delete; |  (3)  |  (since C++14)   
(only for array types with known bound)  
| (4) |   
template< class T >  
unique_ptr<T> make_unique_for_overwrite(); |  | (since C++20)   
(until C++23)   
(only for non-array types)  
template< class T >  
constexpr unique_ptr<T> make_unique_for_overwrite(); |  |  (since C++23)   
(only for non-array types)  
| (5) |   
template< class T >  
unique_ptr<T> make_unique_for_overwrite( [std::size_t](../../types/size_t.html) size ); |  | (since C++20)   
(until C++23)   
(only for array types with unknown bound)  
template< class T >  
constexpr unique_ptr<T> make_unique_for_overwrite( [std::size_t](../../types/size_t.html) size ); |  |  (since C++23)   
(only for array types with unknown bound)  
template< class T, class... Args >  
/* unspecified */ make_unique_for_overwrite( Args&&... args ) = delete; |  (6)  |  (since C++20)   
(only for array types with known bound)  
| |   
  
Constructs an object of type `T` and wraps it in a [std::unique_ptr](../unique_ptr.html "cpp/memory/unique ptr"). 

1) Constructs a non-array type `T`. The arguments args are passed to the constructor of `T`. This overload participates in overload resolution only if `T` is not an array type. The function is equivalent to: 
    
    
    unique_ptr<T>(new T([std::forward](../../utility/forward.html)<Args>(args)...))

2) Constructs an array of the given dynamic size. The array elements are [value-initialized](../../language/value_initialization.html "cpp/language/value initialization"). This overload participates in overload resolution only if `T` is an array of unknown bound. The function is equivalent to: 
    
    
    unique_ptr<T>(new [std::remove_extent_t](../../types/remove_extent.html)<T>[size]())

3,6) Construction of arrays of known bound is disallowed.

4) Same as (1), except that the object is [default-initialized](../../language/default_initialization.html "cpp/language/default initialization"). This overload participates in overload resolution only if `T` is not an array type. The function is equivalent to: 
    
    
    unique_ptr<T>(new T)

5) Same as (2), except that the array is default-initialized. This overload participates in overload resolution only if `T` is an array of unknown bound. The function is equivalent to: 
    
    
    unique_ptr<T>(new [std::remove_extent_t](../../types/remove_extent.html)<T>[size])

## Contents

  * [1 Parameters](make_unique.html#Parameters)
  * [2 Return value](make_unique.html#Return_value)
  * [3 Exceptions](make_unique.html#Exceptions)
  * [4 Possible Implementation](make_unique.html#Possible_Implementation)
  * [5 Notes](make_unique.html#Notes)
  * [6 Example](make_unique.html#Example)
  * [7 See also](make_unique.html#See_also)

  
---  
  
### Parameters

args  |  \-  |  list of arguments with which an instance of `T` will be constructed   
---|---|---  
size  |  \-  |  the length of the array to construct   
  
### Return value

[std::unique_ptr](../unique_ptr.html "cpp/memory/unique ptr") of an instance of type `T`. 

### Exceptions

May throw [std::bad_alloc](../new/bad_alloc.html "cpp/memory/new/bad alloc") or any exception thrown by the constructor of `T`. If an exception is thrown, this function has no effect. 

### Possible Implementation

[make_unique (1-3)](make_unique.html#Version_1)  
---  
      
    
    // C++14 make_unique
    namespace detail
    {
        template<class>
        constexpr bool is_unbounded_array_v = false;
        template<class T>
        constexpr bool is_unbounded_array_v<T[]> = true;
     
        template<class>
        constexpr bool is_bounded_array_v = false;
        template<class T, [std::size_t](../../types/size_t.html) N>
        constexpr bool is_bounded_array_v<T[N]> = true;
    } // namespace detail
     
    template<class T, class... Args>
    [std::enable_if_t](../../types/enable_if.html)<![std::is_array](../../types/is_array.html)<T>::value, [std::unique_ptr](../unique_ptr.html)<T>>
    make_unique(Args&&... args)
    {
        return [std::unique_ptr](../unique_ptr.html)<T>(new T([std::forward](../../utility/forward.html)<Args>(args)...));
    }
     
    template<class T>
    [std::enable_if_t](../../types/enable_if.html)<detail::is_unbounded_array_v<T>, [std::unique_ptr](../unique_ptr.html)<T>>
    make_unique([std::size_t](../../types/size_t.html) n)
    {
        return [std::unique_ptr](../unique_ptr.html)<T>(new [std::remove_extent_t](../../types/remove_extent.html)<T>[n]());
    }
     
    template<class T, class... Args>
    [std::enable_if_t](../../types/enable_if.html)<detail::is_bounded_array_v<T>> make_unique(Args&&...) = delete;  
  
[make_unique_for_overwrite (4-6)](make_unique.html#Version_4)  
      
    
    // C++20 make_unique_for_overwrite
    template<class T>
        requires (![std::is_array_v](../../types/is_array.html)<T>)
    [std::unique_ptr](../unique_ptr.html)<T> make_unique_for_overwrite()
    {
        return [std::unique_ptr](../unique_ptr.html)<T>(new T);
    }
     
    template<class T>
        requires [std::is_unbounded_array_v](../../types/is_unbounded_array.html)<T>
    [std::unique_ptr](../unique_ptr.html)<T> make_unique_for_overwrite([std::size_t](../../types/size_t.html) n)
    {
        return [std::unique_ptr](../unique_ptr.html)<T>(new [std::remove_extent_t](../../types/remove_extent.html)<T>[n]);
    }
     
    template<class T, class... Args>
        requires [std::is_bounded_array_v](../../types/is_bounded_array.html)<T>
    void make_unique_for_overwrite(Args&&...) = delete;  
  
### Notes

Unlike [std::make_shared](../shared_ptr/make_shared.html "cpp/memory/shared ptr/make shared") (which has [std::allocate_shared](../shared_ptr/allocate_shared.html "cpp/memory/shared ptr/allocate shared")), `std::make_unique` does not have an allocator-aware counterpart. `allocate_unique` proposed in [P0211](https://wg21.link/P0211) would be required to invent the deleter type `D` for the [std::unique_ptr](../unique_ptr.html)<T,D> it returns which would contain an allocator object and invoke both `destroy` and `deallocate` in its operator(). 

[Feature-test](../../utility/feature_test.html "cpp/utility/feature test") macro  | Value | Std | Feature   
---|---|---|---  
[`__cpp_lib_make_unique`](../../experimental/feature_test.html#cpp_lib_make_unique "cpp/feature test") | [`201304L`](../../compiler_support/14.html#cpp_lib_make_unique_201304L "cpp/compiler support/14") | (C++14) | `std::make_unique`; overload ([1](make_unique.html#Version_1))  
[`__cpp_lib_smart_ptr_for_overwrite`](../../experimental/feature_test.html#cpp_lib_smart_ptr_for_overwrite "cpp/feature test") | [`202002L`](../../compiler_support/20.html#cpp_lib_smart_ptr_for_overwrite_202002L "cpp/compiler support/20") | (C++20) | Smart pointer creation with default initialization ([std::allocate_shared_for_overwrite](../shared_ptr/allocate_shared.html "cpp/memory/shared ptr/allocate shared"), [std::make_shared_for_overwrite](../shared_ptr/make_shared.html "cpp/memory/shared ptr/make shared"), `std::make_unique_for_overwrite`); overloads ([4-6](make_unique.html#Version_4))  
[`__cpp_lib_constexpr_memory`](../../experimental/feature_test.html#cpp_lib_constexpr_memory "cpp/feature test") | [`202202L`](../../compiler_support/23.html#cpp_lib_constexpr_memory_202202L "cpp/compiler support/23") | (C++23) | `constexpr` for overloads ([1,2,4,5](make_unique.html#Version_1))  
  
### Example

| This section is incomplete  
Reason: add more make_unique_for_overwrite() demos   
---|---  
  
Run this code
    
    
    #include <cstddef>
    #include <iomanip>
    #include <iostream>
    #include <memory>
    #include <utility>
     
    struct Vec3
    {
        int x, y, z;
     
        // Following constructor is no longer needed since C++20.
        Vec3(int x = 0, int y = 0, int z = 0) noexcept : x(x), y(y), z(z) {}
     
        friend [std::ostream](../../io/basic_ostream.html)& operator<<([std::ostream](../../io/basic_ostream.html)& os, const Vec3& v)
        {
            return os << "{ x=" << v.x << ", y=" << v.y << ", z=" << v.z << " }";
        }
    };
     
    // Output Fibonacci numbers to an output iterator.
    template<typename OutputIt>
    OutputIt fibonacci(OutputIt first, OutputIt last)
    {
        for (int a = 0, b = 1; first != last; ++first)
        {
            *first = b;
            b += [std::exchange](../../utility/exchange.html)(a, b);
        }
        return first;
    }
     
    int main()
    {
        // Use the default constructor.
        [std::unique_ptr](../unique_ptr.html)<Vec3> v1 = std::make_unique<Vec3>();
        // Use the constructor that matches these arguments.
        [std::unique_ptr](../unique_ptr.html)<Vec3> v2 = std::make_unique<Vec3>(0, 1, 2);
        // Create a unique_ptr to an array of 5 elements.
        [std::unique_ptr](../unique_ptr.html)<Vec3[]> v3 = std::make_unique<Vec3[]>(5);
     
        // Create a unique_ptr to an uninitialized array of 10 integers,
        // then populate it with Fibonacci numbers.
        [std::unique_ptr](../unique_ptr.html)<int[]> i1 = std::make_unique_for_overwrite<int[]>(10);
        fibonacci(i1.get(), i1.get() + 10);
     
        [std::cout](../../io/cout.html) << "make_unique<Vec3>():      " << *v1 << '\n'
                  << "make_unique<Vec3>(0,1,2): " << *v2 << '\n'
                  << "make_unique<Vec3[]>(5):   ";
        for ([std::size_t](../../types/size_t.html) i = 0; i < 5; ++i)
            [std::cout](../../io/cout.html) << [std::setw](../../io/manip/setw.html)(i ? 30 : 0) << v3[i] << '\n';
        [std::cout](../../io/cout.html) << '\n';
     
        [std::cout](../../io/cout.html) << "make_unique_for_overwrite<int[]>(10), fibonacci(...): [" << i1[0];
        for ([std::size_t](../../types/size_t.html) i = 1; i < 10; ++i)
            [std::cout](../../io/cout.html) << ", " << i1[i];
        [std::cout](../../io/cout.html) << "]\n";
    }

Output: 
    
    
    make_unique<Vec3>():      { x=0, y=0, z=0 }
    make_unique<Vec3>(0,1,2): { x=0, y=1, z=2 }
    make_unique<Vec3[]>(5):   { x=0, y=0, z=0 }
                              { x=0, y=0, z=0 }
                              { x=0, y=0, z=0 }
                              { x=0, y=0, z=0 }
                              { x=0, y=0, z=0 }
     
    make_unique_for_overwrite<int[]>(10), fibonacci(...): [1, 1, 2, 3, 5, 8, 13, 21, 34, 55]

### See also

[ (constructor)](unique_ptr.html "cpp/memory/unique ptr/unique ptr") |  constructs a new `unique_ptr`   
(public member function)   
---|---  
[ make_sharedmake_shared_for_overwrite](../shared_ptr/make_shared.html "cpp/memory/shared ptr/make shared")(C++20) |  creates a shared pointer that manages a new object   
(function template) 
  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
