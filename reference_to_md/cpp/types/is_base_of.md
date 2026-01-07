
  


  
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
[is_pointer_interconvertible_with_class](is_pointer_interconvertible_with_class.html "cpp/types/is pointer interconvertible with class")(C++20)` `  
[is_corresponding_member](is_corresponding_member.html "cpp/types/is corresponding member")(C++20)  
[reference_constructs_from_temporary](reference_constructs_from_temporary.html "cpp/types/reference constructs from temporary")(C++23)  
[reference_converts_from_temporary](reference_converts_from_temporary.html "cpp/types/reference converts from temporary")(C++23)  
  
| **is_base_of**(C++11)  
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
template< class Base, class Derived >  
struct is_base_of; |  |  (since C++11)  
| |   
  
`std::is_base_of` is a [BinaryTypeTrait](../named_req/BinaryTypeTrait.html "cpp/named req/BinaryTypeTrait"). 

If `Derived` is [derived](../language/derived_class.html "cpp/language/derived class") from `Base` or if both are the same non-union class (in both cases ignoring cv-qualification), provides the member constant value equal to true. Otherwise value is false. 

If both `Base` and `Derived` are non-union class types, and they are not the same type (ignoring cv-qualification), `Derived` should be a [complete type](../language/incomplete_type.html "cpp/language/incomplete type"); otherwise the behavior is undefined. 

If the program adds specializations for `std::is_base_of` or `std::is_base_of_v`(since C++17), the behavior is undefined. 

## Contents

  * [1 Helper variable template](is_base_of.html#Helper_variable_template)
  * [2 Inherited from std::integral_constant](is_base_of.html#Inherited_from_std::integral_constant)
    * [2.1 Member constants](is_base_of.html#Member_constants)
    * [2.2 Member functions](is_base_of.html#Member_functions)
    * [2.3 Member types](is_base_of.html#Member_types)
    * [2.4 Notes](is_base_of.html#Notes)
    * [2.5 Possible Implementation](is_base_of.html#Possible_Implementation)
    * [2.6 Example](is_base_of.html#Example)
    * [2.7 Defect reports](is_base_of.html#Defect_reports)
    * [2.8 See also](is_base_of.html#See_also)

  
---  
  
### Helper variable template

template< class Base, class Derived >  
constexpr bool is_base_of_v = is_base_of<Base, Derived>::value; |  |  (since C++17)  
---|---|---  
| |   
  


##  Inherited from [ std::integral_constant](integral_constant.html "cpp/types/integral constant")

###  Member constants

value[static] |  true if `Derived` is derived from `Base` or if both are the same non-union class (in both cases ignoring cv-qualification), false otherwise   
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

std::is_base_of<A, B>::value is true even if `A` is a private, protected, or ambiguous base class of `B`. In many situations, [std::is_convertible](is_convertible.html)<B*, A*> is the more appropriate test. 

Although no class is its own base, std::is_base_of<T, T>::value is true because the intent of the trait is to model the "is-a" relationship, and `T` is a `T`. Despite that, std::is_base_of<int, int>::value is false because only classes participate in the relationship that this trait models. 

### Possible Implementation
    
    
    namespace details
    {
        template<typename B>
        [std::true_type](integral_constant.html) test_ptr_conv(const volatile B*);
        template<typename>
        [std::false_type](integral_constant.html) test_ptr_conv(const volatile void*);
     
        template<typename B, typename D>
        auto test_is_base_of(int) -> decltype(test_ptr_conv<B>(static_cast<D*>(nullptr)));
        template<typename, typename>
        auto test_is_base_of(...) -> [std::true_type](integral_constant.html); // private or ambiguous base
    }
     
    template<typename Base, typename Derived>
    struct is_base_of :
        [std::integral_constant](integral_constant.html)<
            bool,
            [std::is_class](is_class.html)<Base>::value &&
            [std::is_class](is_class.html)<Derived>::value &&
            decltype(details::test_is_base_of<Base, Derived>(0))::value
        > {};  
  
---  
  
### Example

Run this code
    
    
    #include <type_traits>
     
    class A {};
    class B : A {};
    class C : B {};
    class D {};
    union E {};
    using I = int;
     
    static_assert
    (
        std::is_base_of_v<A, A> == true &&
        std::is_base_of_v<A, B> == true &&
        std::is_base_of_v<A, C> == true &&
        std::is_base_of_v<A, D> != true &&
        std::is_base_of_v<B, A> != true &&
        std::is_base_of_v<E, E> != true &&
        std::is_base_of_v<I, I> != true
    );
     
    int main() {}

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 2015](https://cplusplus.github.io/LWG/issue2015) | C++11  | the behavior might be undefined if  
`Derived` is an incomplete union type  | the base characteristic is  
[std::false_type](integral_constant.html "cpp/types/integral constant") in this case   
  
### See also

[ is_virtual_base_of](is_virtual_base_of.html "cpp/types/is virtual base of")(C++26) |  checks if a type is a virtual base of the other type   
(class template)   
---|---  
[ is_convertibleis_nothrow_convertible](is_convertible.html "cpp/types/is convertible")(C++11)(C++20) |  checks if a type can be converted to the other type   
(class template)   
[ derived_from](../concepts/derived_from.html "cpp/concepts/derived from")(C++20) |  specifies that a type is derived from another type   
(concept) 
