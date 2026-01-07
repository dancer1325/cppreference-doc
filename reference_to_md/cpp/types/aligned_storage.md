
  


  
---  
[is_scalar](is_scalar.html "cpp/types/is scalar")(C++11)  
[is_compound](is_compound.html "cpp/types/is compound")(C++11)  
[is_integral](is_integral.html "cpp/types/is integral")(C++11)  
[is_floating_point](is_floating_point.html "cpp/types/is floating point")(C++11)` `  
[is_fundamental](is_fundamental.html "cpp/types/is fundamental")(C++11)  
[is_arithmetic](is_arithmetic.html "cpp/types/is arithmetic")(C++11)  
  
[is_lvalue_reference](is_lvalue_reference.html "cpp/types/is lvalue reference")(C++11)  
[is_rvalue_reference](is_rvalue_reference.html "cpp/types/is rvalue reference")(C++11)  
[is_member_pointer](is_member_pointer.html "cpp/types/is member pointer")(C++11)  
[is_member_object_pointer](is_member_object_pointer.html "cpp/types/is member object pointer")(C++11)  
[is_member_function_pointer](is_member_function_pointer.html "cpp/types/is member function pointer")(C++11)  
Type properties  
[is_const](is_const.html "cpp/types/is const")(C++11)  
[is_volatile](is_volatile.html "cpp/types/is volatile")(C++11)  
[is_empty](is_empty.html "cpp/types/is empty")(C++11)  
[is_polymorphic](is_polymorphic.html "cpp/types/is polymorphic")(C++11)  
[is_final](is_final.html "cpp/types/is final")(C++14)  
[is_abstract](is_abstract.html "cpp/types/is abstract")(C++11)  
[is_aggregate](is_aggregate.html "cpp/types/is aggregate")(C++17)  
[is_implicit_lifetime](is_implicit_lifetime.html "cpp/types/is implicit lifetime")(C++23)  
[is_trivial](is_trivial.html "cpp/types/is trivial")(C++11)(deprecated in C++26)  
[is_trivially_copyable](is_trivially_copyable.html "cpp/types/is trivially copyable")(C++11)  
[is_standard_layout](is_standard_layout.html "cpp/types/is standard layout")(C++11)  
[is_literal_type](is_literal_type.html "cpp/types/is literal type")(C++11)(until C++20*)  
[is_pod](is_pod.html "cpp/types/is pod")(C++11)(deprecated in C++20)  
[is_signed](is_signed.html "cpp/types/is signed")(C++11)  
[is_unsigned](is_unsigned.html "cpp/types/is unsigned")(C++11)  
[is_bounded_array](is_bounded_array.html "cpp/types/is bounded array")(C++20)  
[is_unbounded_array](is_unbounded_array.html "cpp/types/is unbounded array")(C++20)  
[is_scoped_enum](is_scoped_enum.html "cpp/types/is scoped enum")(C++23)  
[has_unique_object_representations](has_unique_object_representations.html "cpp/types/has unique object representations")(C++17)  
Type trait constants  
[integral_constantbool_constanttrue_typefalse_type](integral_constant.html "cpp/types/integral constant")(C++11)(C++17)(C++11)(C++11)  
Metafunctions  
[conjunction](conjunction.html "cpp/types/conjunction")(C++17)  
[disjunction](disjunction.html "cpp/types/disjunction")(C++17)  
[negation](negation.html "cpp/types/negation")(C++17)  
  
  
  
  
  
  
  
  
  
Type transformations  
| **aligned_storage**(C++11)(deprecated in C++23)  
---  
[aligned_union](aligned_union.html "cpp/types/aligned union")(C++11)(deprecated in C++23)  
[decay](decay.html "cpp/types/decay")(C++11)  
[remove_cvref](remove_cvref.html "cpp/types/remove cvref")(C++20)  
[result_ofinvoke_result](result_of.html "cpp/types/result of")(C++11)(until C++20*)(C++17)  
  
  
  
| [conditional](conditional.html "cpp/types/conditional")(C++11)  
---  
[common_type](common_type.html "cpp/types/common type")(C++11)  
[common_reference](common_reference.html "cpp/types/common reference")(C++20)  
[underlying_type](underlying_type.html "cpp/types/underlying type")(C++11)  
[type_identity](type_identity.html "cpp/types/type identity")(C++20)  
[enable_if](enable_if.html "cpp/types/enable if")(C++11)  
[void_t](void_t.html "cpp/types/void t")(C++17)  
  
[Compile-time rational arithmetic](../utility/ratio.html "cpp/numeric/ratio")  
Compile-time integer sequences  
[integer_sequence](../utility/integer_sequence.html "cpp/utility/integer sequence")(C++14)  
  


Defined in header `[<type_traits>](../header/type_traits.html "cpp/header/type traits")` |  |   
---|---|---  
template< [std::size_t](size_t.html) Len, [std::size_t](size_t.html) Align = /* default-alignment */ >  
struct aligned_storage; |  |  (since C++11)   
(deprecated in C++23)  
| |   
  
Provides the nested type _`type`_ , which satisfies [TrivialType](../named_req/TrivialType.html "cpp/named req/TrivialType") and [StandardLayoutType](../named_req/StandardLayoutType.html "cpp/named req/StandardLayoutType") and suitable for use as uninitialized storage for any object whose size is at most `Len` and whose [alignment requirement](../language/objects.html#Alignment "cpp/language/object") is a divisor of `Align`. 

The default value of `Align` is the most stringent (the largest) alignment requirement for any object whose size is at most `Len`. If the default value is not used, `Align` must be the value of alignof(T) for some type `T`, or the behavior is undefined. 

The behavior is undefined if Len == 0. 

It is implementation-defined whether any [extended alignment](../language/objects.html#Alignment "cpp/language/object") is supported. 

If the program adds specializations for `std::aligned_storage`, the behavior is undefined. 

## Contents

  * [1 Member types](aligned_storage.html#Member_types)
  * [2 Helper types](aligned_storage.html#Helper_types)
  * [3 Notes](aligned_storage.html#Notes)
  * [4 Possible implementation](aligned_storage.html#Possible_implementation)
  * [5 Example](aligned_storage.html#Example)
  * [6 See also](aligned_storage.html#See_also)

  
---  
  
### Member types

Name  |  Definition   
---|---  
`type` |  a [trivial](../named_req/TrivialType.html "cpp/named req/TrivialType") and [standard-layout](../named_req/StandardLayoutType.html "cpp/named req/StandardLayoutType") type of at least size `Len` with alignment requirement `Align`  
  
### Helper types

template< [std::size_t](size_t.html) Len, [std::size_t](size_t.html) Align = /* default-alignment */ >  
using aligned_storage_t = typename aligned_storage<Len, Align>::type; |  |  (since C++14)   
(deprecated in C++23)  
---|---|---  
| |   
  
### Notes

The type defined by `std::aligned_storage<>::type` can be used to create uninitialized memory blocks suitable to hold the objects of given type, optionally aligned stricter than their natural alignment requirement, for example on a cache or page boundary. 

As with any other uninitialized storage, the objects are created using [placement new](../language/new.html "cpp/language/new") and destroyed with explicit destructor calls. 

### Possible implementation

Except for default argument, aligned_storage is expressible in terms of alignas: 
    
    
    template<[std::size_t](size_t.html) Len, [std::size_t](size_t.html) Align = /* default alignment not implemented */>
    struct aligned_storage
    {
        struct type
        {
            alignas(Align) unsigned char data[Len];
        };
    };  
  
---  
  
### Example

A primitive static vector class, demonstrating creation, access, and destruction of objects in aligned storage.

Run this code
    
    
    #include <cstddef>
    #include <iostream>
    #include <new>
    #include <string>
    #include <type_traits>
     
    template<class T, [std::size_t](size_t.html) N>
    class static_vector
    {
        // Properly aligned uninitialized storage for N T's
        std::aligned_storage_t<sizeof(T), alignof(T)> data[N];
        [std::size_t](size_t.html) m_size = 0;
     
    public:
        // Create an object in aligned storage
        template<typename ...Args> void emplace_back(Args&&... args)
        {
            if (m_size >= N) // Possible error handling
                throw [std::bad_alloc](../memory/new/bad_alloc.html){};
     
            // Construct value in memory of aligned storage using inplace operator new
            ::new(&data[m_size]) T([std::forward](../utility/forward.html)<Args>(args)...);
            ++m_size;
        }
     
        // Access an object in aligned storage
        const T& operator[]([std::size_t](size_t.html) pos) const
        {
            // Note: std::launder is needed after the change of object model in P0137R1
            return *[std::launder](../utility/launder.html)(reinterpret_cast<const T*>(&data[pos]));
        }
     
        // Destroy objects from aligned storage
        ~static_vector()
        {
            for ([std::size_t](size_t.html) pos = 0; pos < m_size; ++pos)
                // Note: std::launder is needed after the change of object model in P0137R1
                [std::destroy_at](../memory/destroy_at.html)([std::launder](../utility/launder.html)(reinterpret_cast<T*>(&data[pos])));
        }
    };
     
    int main()
    {
        static_vector<[std::string](../string/basic_string.html), 10> v1;
        v1.emplace_back(5, '*');
        v1.emplace_back(10, '*');
        [std::cout](../io/cout.html) << v1[0] << '\n' << v1[1] << '\n';
    }

Output: 
    
    
    *****
    **********

### See also

`**[alignas](../language/alignas.html "cpp/language/alignas")**` (C++11) |  specifies that the storage for the variable should be aligned by specific amount  
(specifier)  
---|---  
[ alignment_of](alignment_of.html "cpp/types/alignment of")(C++11) |  obtains the type's alignment requirements   
(class template)   
[ aligned_alloc](../memory/c/aligned_alloc.html "cpp/memory/c/aligned alloc")(C++17) |  allocates aligned memory   
(function)   
[ aligned_union](aligned_union.html "cpp/types/aligned union")(since C++11)(deprecated in C++23) |  defines the type suitable for use as uninitialized storage for all given types   
(class template)   
[ max_align_t](max_align_t.html "cpp/types/max align t")(C++11) |  trivial type with alignment requirement as great as any other scalar type   
(typedef)   
[ launder](../utility/launder.html "cpp/utility/launder")(C++17) |  pointer optimization barrier   
(function template) 
