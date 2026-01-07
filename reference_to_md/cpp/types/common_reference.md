
  


  
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
**common_reference**(C++20)  
[underlying_type](underlying_type.html "cpp/types/underlying type")(C++11)  
[type_identity](type_identity.html "cpp/types/type identity")(C++20)  
[enable_if](enable_if.html "cpp/types/enable if")(C++11)  
[void_t](void_t.html "cpp/types/void t")(C++17)  
  
[Compile-time rational arithmetic](../utility/ratio.html "cpp/numeric/ratio")  
Compile-time integer sequences  
[integer_sequence](../utility/integer_sequence.html "cpp/utility/integer sequence")(C++14)  
  


Defined in header `[<type_traits>](../header/type_traits.html "cpp/header/type traits")` |  |   
---|---|---  
template< class... T >  
struct common_reference; |  |  (since C++20)  
| |   
  
Determines the common reference type of the types `T...`, that is, the type to which all the types in `T...` can be converted or bound. If such a type exists (as determined according to the rules below), the member `type` names that type. Otherwise, there is no member `type`. The behavior is undefined if any of the types in `T...` is an incomplete type other than (possibly cv-qualified) void. 

When given reference types, `common_reference` attempts to find a reference type to which the supplied reference types can all be bound, but may return a non-reference type if it cannot find such a reference type. 

  * If sizeof...(T) is zero, there is no member `type`. 
  * If sizeof...(T) is one (i.e., `T...` contains only one type `T0`), the member `type` names the same type as T0. 
  * If sizeof...(T) is two (i.e., `T...` contains two types `T1` and `T2`): 
    * Let type `S` be the _simple common reference type_ of `T1` and `T2` (as defined below). The member type `type` names `S` if all of the conditions below are satisfied: 
      * `T1` and `T2` are both reference types 
      * `S` is well-formed 



    

    

  * [std::is_convertible_v](is_convertible.html)<[std::add_pointer_t](add_pointer.html)<T1>, [std::add_pointer_t](add_pointer.html)<S>> and [std::is_convertible_v](is_convertible.html)<[std::add_pointer_t](add_pointer.html)<T2>, [std::add_pointer_t](add_pointer.html)<S>> are true; 


| (since C++23)  
---|---  
  
    

  * Otherwise, if std::basic_common_reference<[std::remove_cvref_t](remove_cvref.html)<T1>, [std::remove_cvref_t](remove_cvref.html)<T2>, T1Q, T2Q>::type exists, where `TiQ` is a unary alias template such that TiQ<U> is `U` with the addition of `Ti`'s cv- and reference qualifiers, then the member type `type` names that type; 



  *     * Otherwise, if decltype(false? val<T1>() : val<T2>()), where `val` is a function template template<class T> T val();, is a valid type, then the member type `type` names that type; 
    * Otherwise, if [std::common_type_t](common_type.html)<T1, T2> is a valid type, then the member type `type` names that type; 
    * Otherwise, there is no member `type`. 
  * If sizeof...(T) is greater than two (i.e., `T...` consists of the types `T1, T2, R...`), then if std::common_reference_t<T1, T2> exists, the member `type` denotes std::common_reference_t<std::common_reference_t<T1, T2>, R...> if such a type exists. In all other cases, there is no member `type`. 



The _simple common reference type_ of two reference types `T1` and `T2` is defined as follows: 

  * If `T1` is `_cv1_ X&` and `T2` is `_cv2_ Y&` (i.e., both are lvalue reference types): their simple common reference type is decltype(false? [std::declval](../utility/declval.html)<cv12 X&>() : [std::declval](../utility/declval.html)<cv12 Y&>()), where _cv12_ is the union of _cv1_ and _cv2_ , if that type exists and is a reference type; 
  * If `T1` and `T2` are both rvalue reference types: if the simple common reference type of `T1&` and `T2&` (determined according to the previous bullet) exists, then let `C` denote that type's corresponding rvalue reference type. If [std::is_convertible_v](is_convertible.html)<T1, C> and [std::is_convertible_v](is_convertible.html)<T2, C> are both true, then the simple common reference type of `T1` and `T2` is `C`; 
  * Otherwise, one of the two types must be an lvalue reference type `A&` and the other must be an rvalue reference type `B&&` (`A` and `B` might be cv-qualified). Let `D` denote the simple common reference type of A& and B const&, if any. If D exists and [std::is_convertible_v](is_convertible.html)<B&&, D> is true, then the simple common reference type is `D`; 
  * Otherwise, there's no simple common reference type. 



See [Conditional operator](../language/operator_other.html#Conditional_operator "cpp/language/operator other") for the definition of the type of expression false ? X : Y like the ones used above. 

## Contents

  * [1 Member types](common_reference.html#Member_types)
  * [2 Helper types](common_reference.html#Helper_types)
  * [3 Specializations](common_reference.html#Specializations)
  * [4 Notes](common_reference.html#Notes)
  * [5 Examples](common_reference.html#Examples)
  * [6 See also](common_reference.html#See_also)

  
---  
  
### Member types

Name  |  Definition   
---|---  
`type` |  the common reference type for all `T...`  
  
### Helper types

template< class... T >  
using common_reference_t = std::common_reference<T...>::type; |  |   
---|---|---  
template< class T, class U, template<class> class TQual, template<class> class UQual >  
struct basic_common_reference {}; |  |   
| |   
  
The class template `basic_common_reference` is a customization point that allows users to influence the result of `common_reference` for user-defined types (typically proxy references). The primary template is empty. 

### Specializations

A program may specialize std::basic_common_reference<T, U, TQual, UQual> on the first two parameters `T` and `U` if [std::is_same_v](is_same.html)<T, [std::decay_t](decay.html)<T>> and [std::is_same_v](is_same.html)<U, [std::decay_t](decay.html)<U>> are both true and at least one of them depends on a program-defined type. 

If such a specialization has a member named `type`, it must be a public and unambiguous member that names a type to which both TQual<T> and UQual<U> are convertible. Additionally, std::basic_common_reference<T, U, TQual, UQual>::type and std::basic_common_reference<U, T, UQual, TQual>::type must denote the same type. 

A program may not specialize `basic_common_reference` on the third or fourth parameters, nor may it specialize `common_reference` itself. A program that adds specializations in violation of these rules has undefined behavior. 

The standard library provides following specializations of `basic_common_reference`: 

[ std::basic_common_reference<std::pair>](../utility/pair/basic_common_reference.html "cpp/utility/pair/basic common reference")(C++23) |  determines the common reference type of two `pair`s   
(class template specialization)   
---|---  
[ std::basic_common_reference<_tuple-like_ >](../utility/tuple/basic_common_reference.html "cpp/utility/tuple/basic common reference")(C++23) |  determines the common reference type of a `tuple` and a `_tuple-like_` type   
(class template specialization)   
[ std::basic_common_reference<std::reference_wrapper>](../utility/functional/reference_wrapper/basic_common_reference.html "cpp/utility/functional/reference wrapper/basic common reference")(C++23) |  determines the common reference type of `reference_wrapper` and non-`reference_wrapper`   
(class template specialization)   
  
### Notes

[Feature-test](../utility/feature_test.html "cpp/utility/feature test") macro | Value | Std | Feature   
---|---|---|---  
[`__cpp_lib_common_reference`](../experimental/feature_test.html#cpp_lib_common_reference "cpp/feature test") | [`202302L`](../compiler_support/23.html#cpp_lib_common_reference_202302L "cpp/compiler support/23") | (C++23) | Make std::common_reference_t of [std::reference_wrapper](../utility/functional/reference_wrapper.html "cpp/utility/functional/reference wrapper") a reference type   
  
### Examples

Run this code
    
    
    #include <concepts>
    #include <type_traits>
     
    static_assert(
        [std::same_as](../concepts/same_as.html)<
            int&,
            std::common_reference_t<
                [std::add_lvalue_reference_t](add_reference.html)<int>,
                [std::add_lvalue_reference_t](add_reference.html)<int>&,
                [std::add_lvalue_reference_t](add_reference.html)<int>&&,
                [std::add_lvalue_reference_t](add_reference.html)<int>const,
                [std::add_lvalue_reference_t](add_reference.html)<int>const&
            >
        >
    );
     
    int main() {}

### See also

[ common_type](common_type.html "cpp/types/common type")(C++11) |  determines the common type of a group of types   
(class template)   
---|---  
[ common_reference_with](../concepts/common_reference_with.html "cpp/concepts/common reference with")(C++20) |  specifies that two types share a common reference type   
(concept) 
  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
