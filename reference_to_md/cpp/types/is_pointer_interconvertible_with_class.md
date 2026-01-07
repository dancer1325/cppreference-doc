
  


  
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
| [is_same](is_same.html "cpp/types/is same")(C++11)  
---  
[is_convertibleis_nothrow_convertible](is_convertible.html "cpp/types/is convertible")(C++11)(C++20)  
[is_layout_compatible](is_layout_compatible.html "cpp/types/is layout compatible")(C++20)  
[is_pointer_interconvertible_base_of](is_pointer_interconvertible_base_of.html "cpp/types/is pointer interconvertible base of")(C++20)  
**is_pointer_interconvertible_with_class**(C++20)` `  
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
template< class S, class M >  
constexpr bool is_pointer_interconvertible_with_class( M S::* mp ) noexcept; |  |  (since C++20)  
| |   
  
Given an object `s` of type `S`, determines whether s.*mp refers to a subobject of `s` and `s` is [pointer-interconvertible](../language/static_cast.html#pointer-interconvertible "cpp/language/static cast") with its subobject s.*mp. The program is ill-formed if `S` is not a [complete type](../language/type-id.html#Incomplete_type "cpp/language/type"). 

If `S` is not a [StandardLayoutType](../named_req/StandardLayoutType.html "cpp/named req/StandardLayoutType"), or `M` is not an object type, or `mp` is equal to nullptr, the result is always false. 

## Contents

  * [1 Parameters](is_pointer_interconvertible_with_class.html#Parameters)
  * [2 Return value](is_pointer_interconvertible_with_class.html#Return_value)
  * [3 Notes](is_pointer_interconvertible_with_class.html#Notes)
  * [4 Example](is_pointer_interconvertible_with_class.html#Example)
  * [5 See also](is_pointer_interconvertible_with_class.html#See_also)

  
---  
  
### Parameters

mp  |  \-  |  a pointer-to-member to detect   
---|---|---  
  
### Return value

true if s.*mp refers a subobject of `s` and `s` is pointer-interconvertible with its subobject s.*mp, otherwise false, where `s` is an object of type `S`. 

### Notes

The type of a pointer-to-member expression &S::m is not always M S::*, where `m` is of type `M`, because `m` may be a member inherited from a base class of `S`. The template arguments can be specified in order to avoid potentially surprising results. 

If there is a value `mp` of type M S::* such that std::is_pointer_interconvertible_with_class(mp) == true, then reinterpret_cast<M&>(s) has well-defined result and it refers the same subobject as s.*mp, where `s` is a valid lvalue of type `S`. 

On common platforms, the bit pattern of `mp` is all zero if std::is_pointer_interconvertible_with_class(mp) == true. 

[Feature-test](../utility/feature_test.html "cpp/utility/feature test") macro | Value | Std | Feature   
---|---|---|---  
[`__cpp_lib_is_pointer_interconvertible`](../experimental/feature_test.html#cpp_lib_is_pointer_interconvertible "cpp/feature test") | [`201907L`](../compiler_support/20.html#cpp_lib_is_pointer_interconvertible_201907L "cpp/compiler support/20") | (C++20) | Pointer-interconvertibility traits: 

  * [std::is_pointer_interconvertible_base_of](is_pointer_interconvertible_base_of.html "cpp/types/is pointer interconvertible base of"), 
  * `std::is_pointer_interconvertible_with_class`

  
  
### Example

Run this code
    
    
    #include <type_traits>
     
    struct Foo { int x; };
    struct Bar { int y; };
     
    struct Baz : Foo, Bar {}; // not standard-layout
     
    static_assert( not [std::is_same_v](is_same.html)<decltype(&Baz::x), int Baz::*> );
    static_assert( std::is_pointer_interconvertible_with_class(&Baz::x) );
    static_assert( not std::is_pointer_interconvertible_with_class<Baz, int>(&Baz::x) );
     
    int main() { }

### See also

[ is_standard_layout](is_standard_layout.html "cpp/types/is standard layout")(C++11) |  checks if a type is a [standard-layout](../language/data_members.html#Standard-layout "cpp/language/data members") type   
(class template)   
---|---  
[ is_member_object_pointer](is_member_object_pointer.html "cpp/types/is member object pointer")(C++11) |  checks if a type is a non-static member object pointer   
(class template) 
  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
