
  


  
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
**add_lvalue_reference add_rvalue_reference**(C++11)(C++11)  
[remove_pointer](remove_pointer.html "cpp/types/remove pointer")(C++11)  
[add_pointer](add_pointer.html "cpp/types/add pointer")(C++11)  
[remove_extent](remove_extent.html "cpp/types/remove extent")(C++11)  
[remove_all_extents](remove_all_extents.html "cpp/types/remove all extents")(C++11)  
  
  
  
  
  


Defined in header `[<type_traits>](../header/type_traits.html "cpp/header/type traits")` |  |   
---|---|---  
template< class T >  
struct add_lvalue_reference; |  (1)  |  (since C++11)  
template< class T >  
struct add_rvalue_reference; |  (2)  |  (since C++11)  
| |   
  
Creates an lvalue or rvalue reference type of `T`. 

Type trait  | The type referred by the nested type `type`  
---|---  
`T` is a [referenceable type](../meta.html#Definitions "cpp/meta") |  `T` is not a referenceable type   
(1) | `T&`[[1]](add_reference.html#cite_note-1) | `T`  
(2) | `T&&`[[2]](add_reference.html#cite_note-2)  
  
  1. [↑](add_reference.html#cite_ref-1) This rule reflects the semantics of [reference collapsing](../language/reference.html#Reference_collapsing "cpp/language/reference").
  2. [↑](add_reference.html#cite_ref-2) This rule reflects the semantics of [reference collapsing](../language/reference.html#Reference_collapsing "cpp/language/reference"). Note that std::add_rvalue_reference<T&>::type is `T&`, which is not an rvalue reference type.



If the program adds specializations for any of the templates described on this page, the behavior is undefined. 

## Contents

  * [1 Nested types](add_reference.html#Nested_types)
  * [2 Helper types](add_reference.html#Helper_types)
  * [3 Notes](add_reference.html#Notes)
  * [4 Possible implementation](add_reference.html#Possible_implementation)
  * [5 Example](add_reference.html#Example)
  * [6 Defect reports](add_reference.html#Defect_reports)
  * [7 See also](add_reference.html#See_also)

  
---  
  
### Nested types

Name  |  Definition   
---|---  
`type` |  determined as above   
  
### Helper types

template< class T >  
using add_lvalue_reference_t = typename add_lvalue_reference<T>::type; |  |  (since C++14)  
---|---|---  
template< class T >  
using add_rvalue_reference_t = typename add_rvalue_reference<T>::type; |  |  (since C++14)  
| |   
  
### Notes

The major difference to directly using `T&` or `T&&` is that `T` can be a non-[referenceable](../meta.html#Definitions "cpp/meta") type. For example, std::add_lvalue_reference<void>::type is void, while void& leads to a compilation error. 

### Possible implementation
    
    
    namespace detail
    {
        template<class T>
        struct type_identity { using type = T; }; // or use std::type_identity (since C++20)
     
        template<class T> // Note that “cv void&” is a substitution failure
        auto try_add_lvalue_reference(int) -> type_identity<T&>;
        template<class T> // Handle T = cv void case
        auto try_add_lvalue_reference(...) -> type_identity<T>;
     
        template<class T>
        auto try_add_rvalue_reference(int) -> type_identity<T&&>;
        template<class T>
        auto try_add_rvalue_reference(...) -> type_identity<T>;
    } // namespace detail
     
    template<class T>
    struct add_lvalue_reference
        : decltype(detail::try_add_lvalue_reference<T>(0)) {};
     
    template<class T>
    struct add_rvalue_reference
        : decltype(detail::try_add_rvalue_reference<T>(0)) {};  
  
---  
  
### Example

Run this code
    
    
    #include <type_traits>
     
    using non_ref = int;
    static_assert([std::is_lvalue_reference_v](is_lvalue_reference.html)<non_ref> == false);
     
    using l_ref = std::add_lvalue_reference_t<non_ref>;
    static_assert([std::is_lvalue_reference_v](is_lvalue_reference.html)<l_ref> == true);
     
    using r_ref = std::add_rvalue_reference_t<non_ref>;
    static_assert([std::is_rvalue_reference_v](is_rvalue_reference.html)<r_ref> == true);
     
    using void_ref = std::add_lvalue_reference_t<void>;
    static_assert([std::is_reference_v](is_reference.html)<void_ref> == false);
     
    int main() {}

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 2101](https://cplusplus.github.io/LWG/issue2101) | C++11  | the program was ill-formed if `T` is a [function type](../language/function.html#Function_type "cpp/language/function") with cv or ref | the type produced is `T` in this case   
  
### See also

[ is_reference](is_reference.html "cpp/types/is reference")(C++11) |  checks if a type is either an _lvalue reference_ or _rvalue reference_   
(class template)   
---|---  
[ remove_reference](remove_reference.html "cpp/types/remove reference")(C++11) |  removes a reference from the given type   
(class template)   
[ remove_cvref](remove_cvref.html "cpp/types/remove cvref")(C++20) |  combines [std::remove_cv](remove_cv.html "cpp/types/remove cv") and [std::remove_reference](remove_reference.html "cpp/types/remove reference")   
(class template) 
