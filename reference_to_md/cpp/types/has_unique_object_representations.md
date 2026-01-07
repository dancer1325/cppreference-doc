
  


  
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
**has_unique_object_representations**(C++17)  
Type trait constants  
[integral_constantbool_constanttrue_typefalse_type](integral_constant.html "cpp/types/integral constant")(C++11)(C++17)(C++11)(C++11)  
Metafunctions  
[conjunction](conjunction.html "cpp/types/conjunction")(C++17)  
[disjunction](disjunction.html "cpp/types/disjunction")(C++17)  
[negation](negation.html "cpp/types/negation")(C++17)  
  
  
  
  
  
  
  
  
  
  
  


Defined in header `[<type_traits>](../header/type_traits.html "cpp/header/type traits")` |  |   
---|---|---  
template< class T >  
struct has_unique_object_representations; |  |  (since C++17)  
| |   
  
`std::has_unique_object_representations` is a [UnaryTypeTrait](../named_req/UnaryTypeTrait.html "cpp/named req/UnaryTypeTrait"). 

If `T` is [trivially copyable](../language/type-id.html#Trivially_copyable_type "cpp/language/type") and if any two objects of type `T` with the same value have the same [object representation](../language/objects.html#Object_representation_and_value_representation "cpp/language/object"), provides the member constant `value` equal true. For any other type, `value` is false. 

For the purpose of this trait, two arrays have the same value if their elements have the same values, two non-union classes have the same value if their direct subobjects have the same value, and two unions have the same value if they have the same active member and the value of that member is the same. 

It is implementation-defined which scalar types satisfy this trait, but unsigned(until C++20) integer types that do not use padding bits are guaranteed to have unique object representations. 

If [std::remove_all_extents_t](remove_all_extents.html)<T> is an incomplete type other than (possibly cv-qualified) void, the behavior is undefined. 

If the program adds specializations for `std::has_unique_object_representations` or `std::has_unique_object_representations_v`, the behavior is undefined. 

## Contents

  * [1 Template parameters](has_unique_object_representations.html#Template_parameters)
  * [2 Helper variable template](has_unique_object_representations.html#Helper_variable_template)
  * [3 Inherited from std::integral_constant](has_unique_object_representations.html#Inherited_from_std::integral_constant)
    * [3.1 Member constants](has_unique_object_representations.html#Member_constants)
    * [3.2 Member functions](has_unique_object_representations.html#Member_functions)
    * [3.3 Member types](has_unique_object_representations.html#Member_types)
    * [3.4 Notes](has_unique_object_representations.html#Notes)
    * [3.5 Example](has_unique_object_representations.html#Example)
    * [3.6 Defect reports](has_unique_object_representations.html#Defect_reports)
    * [3.7 See also](has_unique_object_representations.html#See_also)

  
---  
  
### Template parameters

T  |  \-  |  a type to check   
---|---|---  
  
### Helper variable template

template< class T >  
constexpr bool has_unique_object_representations_v =  
has_unique_object_representations<T>::value; |  |  (since C++17)  
---|---|---  
| |   
  


##  Inherited from [ std::integral_constant](integral_constant.html "cpp/types/integral constant")

###  Member constants

value[static] |  true if `T` has unique object representations, false otherwise   
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
  
### Notes

This trait was introduced to make it possible to determine whether a type can be correctly hashed by hashing its object representation as a byte array. 

[Feature-test](../utility/feature_test.html "cpp/utility/feature test") macro | Value | Std | Feature   
---|---|---|---  
[`__cpp_lib_has_unique_object_representations`](../experimental/feature_test.html#cpp_lib_has_unique_object_representations "cpp/feature test") | [`201606L`](../compiler_support/17.html#cpp_lib_has_unique_object_representations_201606L "cpp/compiler support/17") | (C++17) | `std::has_unique_object_representations`  
  
### Example

Run this code
    
    
    #include <cstdint>
    #include <type_traits>
     
    struct unpadded
    {
        [std::uint32_t](integer.html) a, b;
    };
     
    struct likely_padded
    {
        [std::uint8_t](integer.html) c;
        [std::uint16_t](integer.html) st;
        [std::uint32_t](integer.html) i;
    };
     
    int main()
    {
        // Every value of a char corresponds to exactly one object representation.
        static_assert(std::has_unique_object_representations_v<char>);
        // For IEC 559 floats, assertion passes because the value NaN has
        // multiple object representations.
        static_assert(!std::has_unique_object_representations_v<float>);
     
        // Should succeed in any sane implementation because unpadded
        // is typically not padded, and std::uint32_t cannot contain padding bits.
        static_assert(std::has_unique_object_representations_v<unpadded>);
        // Fails in most implementations because padding bits are inserted
        // between the data members c and st for the purpose of aligning st to 16 bits.
        static_assert(!std::has_unique_object_representations_v<likely_padded>);
     
        // Notable architectural divergence:
        static_assert(std::has_unique_object_representations_v<bool>);  // x86
     // static_assert(!std::has_unique_object_representations_v<bool>); // ARM
    }

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 4113](https://cplusplus.github.io/LWG/issue4113) | C++17  | `T` could be an array of unknown bound  
even if its element type is incomplete  | required the element  
type to be complete   
  
### See also

[ is_standard_layout](is_standard_layout.html "cpp/types/is standard layout")(C++11) |  checks if a type is a [standard-layout](../language/data_members.html#Standard-layout "cpp/language/data members") type   
(class template)   
---|---  
[ hash](../utility/hash.html "cpp/utility/hash")(C++11) |  hash function object   
(class template) 
  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
