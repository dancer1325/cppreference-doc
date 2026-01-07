
  


  
---  
[is_scalar](is_scalar.html "cpp/types/is scalar")(C++11)  
[is_compound](is_compound.html "cpp/types/is compound")(C++11)  
**is_integral**(C++11)  
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
  
  
  
  
  
  
  
  
  
  
  


Defined in header `[<type_traits>](../header/type_traits.html "cpp/header/type traits")` |  |   
---|---|---  
template< class T >  
struct is_integral; |  |  (since C++11)  
| |   
  
`std::is_integral` is a [UnaryTypeTrait](../named_req/UnaryTypeTrait.html "cpp/named req/UnaryTypeTrait"). 

Checks whether `T` is an [integral type](../language/type-id.html "cpp/language/type"). Provides the member constant value which is equal to true, if `T` is the type bool, char, char8_t(since C++20), char16_t, char32_t, wchar_t, short, int, long, long long, or any implementation-defined extended integer types, including any signed, unsigned, and cv-qualified variants. Otherwise, value is equal to false. 

If the program adds specializations for `std::is_integral` or `std::is_integral_v`, the behavior is undefined. 

## Contents

  * [1 Template parameters](is_integral.html#Template_parameters)
  * [2 Helper variable template](is_integral.html#Helper_variable_template)
  * [3 Inherited from std::integral_constant](is_integral.html#Inherited_from_std::integral_constant)
    * [3.1 Member constants](is_integral.html#Member_constants)
    * [3.2 Member functions](is_integral.html#Member_functions)
    * [3.3 Member types](is_integral.html#Member_types)
    * [3.4 Possible implementation](is_integral.html#Possible_implementation)
    * [3.5 Example](is_integral.html#Example)
    * [3.6 See also](is_integral.html#See_also)

  
---  
  
### Template parameters

T  |  \-  |  a type to check   
---|---|---  
  
### Helper variable template

template< class T >  
constexpr bool is_integral_v = is_integral<T>::value; |  |  (since C++17)  
---|---|---  
| |   
  


##  Inherited from [ std::integral_constant](integral_constant.html "cpp/types/integral constant")

###  Member constants

value[static] |  true if `T` is an integral type, false otherwise   
(public static member constant)  
---|---  
  
###  Member functions

operator bool |  converts the object to bool, returns value   
(public member function)  
---|---  
operator()(C++14) |  returns value   
(public member function)  
  
###  Member types

Type  |  Definition   
---|---  
`value_type` |  bool  
`type` |  [std::integral_constant](integral_constant.html)<bool, value>  
  
### Possible implementation
    
    
    // Note: this implementation uses C++20 facilities
    template<class T>
    struct is_integral : [std::bool_constant](integral_constant.html)<
        requires (T t, T* p, void (*f)(T)) // T* parameter excludes reference types
        {
            reinterpret_cast<T>(t); // Exclude class types
            f(0); // Exclude enumeration types
            p + t; // Exclude everything not yet excluded but integral types
        }> {};  
  
---  
  
### Example

Run this code
    
    
    #include <type_traits>
     
    static_assert
    (
        std::is_integral_v<float> == false &&
        std::is_integral_v<int*> == false &&
        std::is_integral_v<int> == true &&
        std::is_integral_v<const int> == true &&
        std::is_integral_v<bool> == true &&
        std::is_integral_v<char> == true
    );
     
    class A {};
    static_assert(std::is_integral_v<A> == false);
     
    struct B { int x:4; };
    static_assert(std::is_integral_v<B> == false);
    using BF = decltype(B::x); // bit-field's type
    static_assert(std::is_integral_v<BF> == true);
     
    enum E : int {};
    static_assert(std::is_integral_v<E> == false);
     
    template <class T>
    constexpr T same(T i)
    {
        static_assert(std::is_integral<T>::value, "Integral required.");
        return i;
    }
    static_assert(same('"') == 042);
     
    int main() {}

### See also

[ integral](../concepts/integral.html "cpp/concepts/integral")(C++20) |  specifies that a type is an integral type   
(concept)   
---|---  
[ is_integer](numeric_limits/is_integer.html "cpp/types/numeric limits/is integer")[static] |  identifies integer types   
(public static member constant of `std::numeric_limits<T>`)   
[ is_floating_point](is_floating_point.html "cpp/types/is floating point")(C++11) |  checks if a type is a floating-point type   
(class template)   
[ is_arithmetic](is_arithmetic.html "cpp/types/is arithmetic")(C++11) |  checks if a type is an arithmetic type   
(class template)   
[ is_enum](is_enum.html "cpp/types/is enum")(C++11) |  checks if a type is an enumeration type   
(class template) 
