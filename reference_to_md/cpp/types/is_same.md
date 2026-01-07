
  


  
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
  
  
  
  
  
Relationships and property queries  
| **is_same**(C++11)  
---  
[is_convertibleis_nothrow_convertible](is_convertible.html "cpp/types/is convertible")(C++11)(C++20)  
[is_layout_compatible](is_layout_compatible.html "cpp/types/is layout compatible")(C++20)  
[is_pointer_interconvertible_base_of](is_pointer_interconvertible_base_of.html "cpp/types/is pointer interconvertible base of")(C++20)  
[is_pointer_interconvertible_with_class](is_pointer_interconvertible_with_class.html "cpp/types/is pointer interconvertible with class")(C++20)` `  
[is_corresponding_member](is_corresponding_member.html "cpp/types/is corresponding member")(C++20)  
[reference_constructs_from_temporary](reference_constructs_from_temporary.html "cpp/types/reference constructs from temporary")(C++23)  
[reference_converts_from_temporary](reference_converts_from_temporary.html "cpp/types/reference converts from temporary")(C++23)  
  
| [is_base_of](is_base_of.html "cpp/types/is base of")(C++11)  
---  
[is_virtual_base_of](is_virtual_base_of.html "cpp/types/is virtual base of")(C++26)  
[alignment_of](alignment_of.html "cpp/types/alignment of")(C++11)  
[rank](rank.html "cpp/types/rank")(C++11)  
[extent](extent.html "cpp/types/extent")(C++11)  
[is_invocableis_invocable_ris_nothrow_invocableis_nothrow_invocable_r](is_invocable.html "cpp/types/is invocable")(C++17)(C++17)(C++17)(C++17)  
  
Type modifications  
| [remove_cvremove_constremove_volatile](remove_cv.html "cpp/types/remove cv")(C++11)(C++11)(C++11)  
---  
[add_cvadd_constadd_volatile](add_cv.html "cpp/types/add cv")(C++11)(C++11)(C++11)  
[make_signed](make_signed.html "cpp/types/make signed")(C++11)  
[make_unsigned](make_unsigned.html "cpp/types/make unsigned")(C++11)  
  
| [remove_reference](remove_reference.html "cpp/types/remove reference")(C++11)  
---  
[add_lvalue_referenceadd_rvalue_reference](add_reference.html "cpp/types/add reference")(C++11)(C++11)  
[remove_pointer](remove_pointer.html "cpp/types/remove pointer")(C++11)  
[add_pointer](add_pointer.html "cpp/types/add pointer")(C++11)  
[remove_extent](remove_extent.html "cpp/types/remove extent")(C++11)  
[remove_all_extents](remove_all_extents.html "cpp/types/remove all extents")(C++11)  
  
  
  
  
  


Defined in header `[<type_traits>](../header/type_traits.html "cpp/header/type traits")` |  |   
---|---|---  
template< class T, class U >  
struct is_same; |  |  (since C++11)  
| |   
  
If `T` and `U` name the same type (taking into account const/volatile qualifications), provides the member constant value equal to true. Otherwise value is false. 

Commutativity is satisfied, i.e. for any two types `T` and `U`, is_same<T, U>::value == true if and only if is_same<U, T>::value == true. 

If the program adds specializations for `std::is_same` or `std::is_same_v`(since C++17), the behavior is undefined. 

## Contents

  * [1 Helper variable template](is_same.html#Helper_variable_template)
  * [2 Inherited from std::integral_constant](is_same.html#Inherited_from_std::integral_constant)
    * [2.1 Member constants](is_same.html#Member_constants)
    * [2.2 Member functions](is_same.html#Member_functions)
    * [2.3 Member types](is_same.html#Member_types)
    * [2.4 Possible implementation](is_same.html#Possible_implementation)
    * [2.5 Example](is_same.html#Example)
    * [2.6 See also](is_same.html#See_also)

  
---  
  
### Helper variable template

template< class T, class U >  
constexpr bool is_same_v = is_same<T, U>::value; |  |  (since C++17)  
---|---|---  
| |   
  


##  Inherited from [ std::integral_constant](integral_constant.html "cpp/types/integral constant")

###  Member constants

value[static] |  true if `T` and `U` are the same type, false otherwise   
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
    
    
    template<class T, class U>
    struct is_same : [std::false_type](integral_constant.html) {};
     
    template<class T>
    struct is_same<T, T> : [std::true_type](integral_constant.html) {};  
  
---  
  
### Example

Run this code
    
    
    #include <cstdint>
    #include <iostream>
    #include <type_traits>
     
    #define SHOW(...) std::cout << #__VA_ARGS__ << " : " << __VA_ARGS__ << '\n'
     
    int main()
    {
        [std::cout](../io/cout.html) << [std::boolalpha](../io/manip/boolalpha.html);
     
        // some implementation-defined facts
     
        // usually true if 'int' is 32 bit
        SHOW( std::is_same<int, [std::int32_t](integer.html)>::value ); // maybe true
        // possibly true if ILP64 data model is used
        SHOW( std::is_same<int, [std::int64_t](integer.html)>::value ); // maybe false
     
        // same tests as above, except using C++17's std::is_same_v<T, U> format
        SHOW( std::is_same_v<int, [std::int32_t](integer.html)> ); // maybe true
        SHOW( std::is_same_v<int, [std::int64_t](integer.html)> ); // maybe false
     
        // compare the types of a couple variables
        long double num1 = 1.0;
        long double num2 = 2.0;
        static_assert( std::is_same_v<decltype(num1), decltype(num2)> == true );
     
        // 'float' is never an integral type
        static_assert( std::is_same<float, [std::int32_t](integer.html)>::value == false );
     
        // 'int' is implicitly 'signed'
        static_assert( std::is_same_v<int, int> == true );
        static_assert( std::is_same_v<int, unsigned int> == false );
        static_assert( std::is_same_v<int, signed int> == true );
     
        // unlike other types, 'char' is neither 'unsigned' nor 'signed'
        static_assert( std::is_same_v<char, char> == true );
        static_assert( std::is_same_v<char, unsigned char> == false );
        static_assert( std::is_same_v<char, signed char> == false );
     
        // const-qualified type T is not same as non-const T
        static_assert( !std::is_same<const int, int>() );
    }
    #undef SHOW

Possible output: 
    
    
    std::is_same<int, std::int32_t>::value : true
    std::is_same<int, std::int64_t>::value : false
    std::is_same_v<int, std::int32_t> : true
    std::is_same_v<int, std::int64_t> : false

### See also

[ same_as](../concepts/same_as.html "cpp/concepts/same as")(C++20) |  specifies that a type is the same as another type   
(concept)   
---|---  
[ `decltype` specifier](../language/decltype.html "cpp/language/decltype")(C++11) |  obtains the type of an expression or an entity
