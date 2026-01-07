
  


  
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
| **remove_cv remove_constremove_volatile**(C++11)(C++11)(C++11)  
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
template< class T >  
struct remove_cv; |  (1)  |  (since C++11)  
template< class T >  
struct remove_const; |  (2)  |  (since C++11)  
template< class T >  
struct remove_volatile; |  (3)  |  (since C++11)  
| |   
  
Provides the member typedef `type` which is the same as `T`, except that its topmost cv-qualifiers are removed. 

1) Removes the topmost const, or the topmost volatile, or both, if present.

2) Removes the topmost const.

3) Removes the topmost volatile.

If the program adds specializations for any of the templates described on this page, the behavior is undefined. 

## Contents

  * [1 Member types](remove_cv.html#Member_types)
  * [2 Helper types](remove_cv.html#Helper_types)
  * [3 Possible implementation](remove_cv.html#Possible_implementation)
  * [4 Example](remove_cv.html#Example)
  * [5 See also](remove_cv.html#See_also)

  
---  
  
### Member types

Name  |  Definition   
---|---  
`type` |  the type `T` without cv-qualifier   
  
### Helper types

template< class T >  
using remove_cv_t = typename remove_cv<T>::type; |  |  (since C++14)  
---|---|---  
template< class T >  
using remove_const_t = typename remove_const<T>::type; |  |  (since C++14)  
template< class T >  
using remove_volatile_t = typename remove_volatile<T>::type; |  |  (since C++14)  
| |   
  
### Possible implementation
    
    
    template<class T> struct remove_cv { typedef T type; };
    template<class T> struct remove_cv<const T> { typedef T type; };
    template<class T> struct remove_cv<volatile T> { typedef T type; };
    template<class T> struct remove_cv<const volatile T> { typedef T type; };
     
    template<class T> struct remove_const { typedef T type; };
    template<class T> struct remove_const<const T> { typedef T type; };
     
    template<class T> struct remove_volatile { typedef T type; };
    template<class T> struct remove_volatile<volatile T> { typedef T type; };  
  
---  
  
### Example

Removing const/volatile from const volatile int* does not modify the type, because the pointer itself is neither const nor volatile.

Run this code
    
    
    #include <type_traits>
     
    template<typename U, typename V>
    constexpr bool same = [std::is_same_v](is_same.html)<U, V>;
     
    static_assert
    (
        same<std::remove_cv_t<int>, int> &&
        same<std::remove_cv_t<const int>, int> &&
        same<std::remove_cv_t<volatile int>, int> &&
        same<std::remove_cv_t<const volatile int>, int> &&
        // remove_cv only works on types, not on pointers
        not same<std::remove_cv_t<const volatile int*>, int*> &&
        same<std::remove_cv_t<const volatile int*>, const volatile int*> &&
        same<std::remove_cv_t<const int* volatile>, const int*> &&
        same<std::remove_cv_t<int* const volatile>, int*>
    );
     
    int main() {}

### See also

[ is_const](is_const.html "cpp/types/is const")(C++11) |  checks if a type is const-qualified   
(class template)   
---|---  
[ is_volatile](is_volatile.html "cpp/types/is volatile")(C++11) |  checks if a type is volatile-qualified   
(class template)   
[ add_cvadd_constadd_volatile](add_cv.html "cpp/types/add cv")(C++11)(C++11)(C++11) |  adds const and/or volatile specifiers to the given type   
(class template)   
[ remove_cvref](remove_cvref.html "cpp/types/remove cvref")(C++20) |  combines **std::remove_cv** and [std::remove_reference](remove_reference.html "cpp/types/remove reference")   
(class template) 
