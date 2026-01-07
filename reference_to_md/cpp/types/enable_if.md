
  


  
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
| [aligned_storage](aligned_storage.html "cpp/types/aligned storage")(C++11)(deprecated in C++23)  
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
**enable_if**(C++11)  
[void_t](void_t.html "cpp/types/void t")(C++17)  
  
[Compile-time rational arithmetic](../utility/ratio.html "cpp/numeric/ratio")  
Compile-time integer sequences  
[integer_sequence](../utility/integer_sequence.html "cpp/utility/integer sequence")(C++14)  
  


Defined in header `[<type_traits>](../header/type_traits.html "cpp/header/type traits")` |  |   
---|---|---  
template< bool B, class T = void >  
struct enable_if; |  |  (since C++11)  
| |   
  
If `B` is true, `std::enable_if` has a public member typedef `type`, equal to `T`; otherwise, there is no member typedef. 

This metafunction is a convenient way to leverage [SFINAE](../language/sfinae.html "cpp/language/sfinae") prior to C++20's [concepts](../language/constraints.html "cpp/language/constraints"), in particular for conditionally removing functions from the [candidate set](../language/overload_resolution.html "cpp/language/overload resolution") based on type traits, allowing separate function overloads or specializations based on those different type traits. 

`std::enable_if` can be used in many forms, including: 

  * as an additional function argument (not applicable to most operator overloads), 
  * as a return type (not applicable to constructors and destructors), 
  * as a class template or function template parameter. 



If the program adds specializations for `std::enable_if`, the behavior is undefined. 

## Contents

  * [1 Member types](enable_if.html#Member_types)
  * [2 Helper types](enable_if.html#Helper_types)
  * [3 Possible implementation](enable_if.html#Possible_implementation)
  * [4 Notes](enable_if.html#Notes)
  * [5 Example](enable_if.html#Example)
  * [6 See also](enable_if.html#See_also)

  
---  
  
### Member types

Type  |  Definition   
---|---  
`type` |  either `T` or no such member, depending on the value of `B`  
  
### Helper types

template< bool B, class T = void >  
using enable_if_t = typename enable_if<B,T>::type; |  |  (since C++14)  
---|---|---  
| |   
  
### Possible implementation
    
    
    template<bool B, class T = void>
    struct enable_if {};
     
    template<class T>
    struct enable_if<true, T> { typedef T type; };  
  
---  
  
### Notes

A common mistake is to declare two function templates that differ only in their default template arguments. This does not work because the declarations are treated as redeclarations of the same function template (default template arguments are not accounted for in [function template equivalence](../language/function_template.html#Function_template_overloading "cpp/language/function template")). 
    
    
    /* WRONG */
     
    struct T
    {
        enum { int_t, float_t } type;
     
        template<typename Integer,
                 typename = std::enable_if_t<[std::is_integral](is_integral.html)<Integer>::value>>
        T(Integer) : type(int_t) {}
     
        template<typename Floating,
                 typename = std::enable_if_t<[std::is_floating_point](is_floating_point.html)<Floating>::value>>
        T(Floating) : type(float_t) {} // error: treated as redefinition
    };
     
    /* RIGHT */
     
    struct T
    {
        enum { int_t, float_t } type;
     
        template<typename Integer,
                 std::enable_if_t<[std::is_integral](is_integral.html)<Integer>::value, bool> = true>
        T(Integer) : type(int_t) {}
     
        template<typename Floating,
                 std::enable_if_t<[std::is_floating_point](is_floating_point.html)<Floating>::value, bool> = true>
        T(Floating) : type(float_t) {} // OK
    };

Care should be taken when using `enable_if` in the type of a constant template parameter of a namespace-scope function template. Some ABI specifications like the Itanium ABI do not include the instantiation-dependent portions of constant template parameters in the mangling, meaning that specializations of two distinct function templates might end up with the same mangled name and be erroneously linked together. For example: 
    
    
    // first translation unit
     
    struct X
    {
        enum { value1 = true, value2 = true };
    };
     
    template<class T, std::enable_if_t<T::value1, int> = 0>
    void func() {} // #1
     
    template void func<X>(); // #2
     
    // second translation unit
     
    struct X
    {
        enum { value1 = true, value2 = true };
    };
     
    template<class T, std::enable_if_t<T::value2, int> = 0>
    void func() {} // #3
     
    template void func<X>(); // #4

The function templates #1 and #3 have different signatures and are distinct templates. Nonetheless, #2 and #4, despite being instantiations of different function templates, have the same mangled name [in the Itanium C++ ABI](https://github.com/itanium-cxx-abi/cxx-abi/issues/20) (`_Z4funcI1XLi0EEvv`), meaning that the linker will erroneously consider them to be the same entity. 

### Example

Run this code
    
    
    #include <iostream>
    #include <new>
    #include <string>
    #include <type_traits>
     
    namespace detail
    { 
        void* voidify(const volatile void* ptr) noexcept { return const_cast<void*>(ptr); } 
    }
     
    // #1, enabled via the return type
    template<class T>
    typename std::enable_if<[std::is_trivially_default_constructible](is_default_constructible.html)<T>::value>::type 
        construct(T*) 
    {
        [std::cout](../io/cout.html) << "default constructing trivially default constructible T\n";
    }
     
    // same as above
    template<class T>
    typename std::enable_if<![std::is_trivially_default_constructible](is_default_constructible.html)<T>::value>::type 
        construct(T* p) 
    {
        [std::cout](../io/cout.html) << "default constructing non-trivially default constructible T\n";
        ::new(detail::voidify(p)) T;
    }
     
    // #2
    template<class T, class... Args>
    std::enable_if_t<[std::is_constructible](is_constructible.html)<T, Args&&...>::value> // Using helper type
        construct(T* p, Args&&... args) 
    {
        [std::cout](../io/cout.html) << "constructing T with operation\n";
        ::new(detail::voidify(p)) T(static_cast<Args&&>(args)...);
    }
     
    // #3, enabled via a parameter
    template<class T>
    void destroy(
        T*, 
        typename std::enable_if<
            [std::is_trivially_destructible](is_destructible.html)<T>::value
        >::type* = 0)
    {
        [std::cout](../io/cout.html) << "destroying trivially destructible T\n";
    }
     
    // #4, enabled via a constant template parameter
    template<class T,
             typename std::enable_if<
                 ![std::is_trivially_destructible](is_destructible.html)<T>{} &&
                 ([std::is_class](is_class.html)<T>{} || [std::is_union](is_union.html)<T>{}),
                 bool>::type = true>
    void destroy(T* t)
    {
        [std::cout](../io/cout.html) << "destroying non-trivially destructible T\n";
        t->~T();
    }
     
    // #5, enabled via a type template parameter
    template<class T,
    	 typename = std::enable_if_t<[std::is_array](is_array.html)<T>::value>>
    void destroy(T* t) // note: function signature is unmodified
    {
        for ([std::size_t](size_t.html) i = 0; i < [std::extent](extent.html)<T>::value; ++i)
            destroy((*t)[i]);
    }
     
    /*
    template<class T,
    	 typename = std::enable_if_t<std::is_void<T>::value>>
    void destroy(T* t) {} // error: has the same signature with #5
    */
     
    // the partial specialization of A is enabled via a template parameter
    template<class T, class Enable = void>
    class A {}; // primary template
     
    template<class T>
    class A<T, typename std::enable_if<[std::is_floating_point](is_floating_point.html)<T>::value>::type>
    {}; // specialization for floating point types
     
    int main()
    {
        union { int i; char s[sizeof([std::string](../string/basic_string.html))]; } u;
     
        construct(reinterpret_cast<int*>(&u));
        destroy(reinterpret_cast<int*>(&u));
     
        construct(reinterpret_cast<[std::string](../string/basic_string.html)*>(&u), "Hello");
        destroy(reinterpret_cast<[std::string](../string/basic_string.html)*>(&u));
     
        A<int>{}; // OK: matches the primary template
        A<double>{}; // OK: matches the partial specialization
    }

Output: 
    
    
    default constructing trivially default constructible T
    destroying trivially destructible T
    constructing T with operation
    destroying non-trivially destructible T

### See also

[ void_t](void_t.html "cpp/types/void t")(C++17) |  void variadic alias template   
(alias template)  
---|---  
  
  * [`static_assert`](../language/static_assert.html "cpp/language/static assert")
  * [SFINAE](../language/sfinae.html "cpp/language/sfinae")
  * [Constraints and Concepts](../language/constraints.html "cpp/language/constraints")


