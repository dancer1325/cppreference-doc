
  


[Metaprogramming library](../meta.html "cpp/meta")

Type traits  
---  
| Type categories  
---  
[is_void](is_void.html "cpp/types/is void")(C++11)  
[is_null_pointer](is_null_pointer.html "cpp/types/is null pointer")(C++11)(DR*)  
| [is_array](is_array.html "cpp/types/is array")(C++11)  
---  
[is_pointer](is_pointer.html "cpp/types/is pointer")(C++11)  
[is_enum](is_enum.html "cpp/types/is enum")(C++11)  
[is_union](is_union.html "cpp/types/is union")(C++11)  
[is_class](is_class.html "cpp/types/is class")(C++11)  
[is_function](is_function.html "cpp/types/is function")(C++11)  
[is_reference](is_reference.html "cpp/types/is reference")(C++11)` `  
  
| [is_object](is_object.html "cpp/types/is object")(C++11)  
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
  
| Supported operations  
---  
| [is_constructibleis_trivially_constructibleis_nothrow_constructible](is_constructible.html "cpp/types/is constructible")(C++11)(C++11)(C++11)  
---  
[is_default_constructibleis_trivially_default_constructibleis_nothrow_default_constructible](is_default_constructible.html "cpp/types/is default constructible")(C++11)(C++11)(C++11)  
[is_copy_constructibleis_trivially_copy_constructibleis_nothrow_copy_constructible](is_copy_constructible.html "cpp/types/is copy constructible")(C++11)(C++11)(C++11)  
[is_move_constructibleis_trivially_move_constructibleis_nothrow_move_constructible](is_move_constructible.html "cpp/types/is move constructible")(C++11)(C++11)(C++11)  
[is_assignableis_trivially_assignableis_nothrow_assignable](is_assignable.html "cpp/types/is assignable")(C++11)(C++11)(C++11)  
  
| [is_copy_assignableis_trivially_copy_assignableis_nothrow_copy_assignable](is_copy_assignable.html "cpp/types/is copy assignable")(C++11)(C++11)(C++11)  
---  
[is_move_assignableis_trivially_move_assignableis_nothrow_move_assignable](is_move_assignable.html "cpp/types/is move assignable")(C++11)(C++11)(C++11)  
[is_destructibleis_trivially_destructibleis_nothrow_destructible](is_destructible.html "cpp/types/is destructible")(C++11)(C++11)(C++11)  
[has_virtual_destructor](has_virtual_destructor.html "cpp/types/has virtual destructor")(C++11)  
[is_swappable_withis_swappableis_nothrow_swappable_withis_nothrow_swappable](is_swappable.html "cpp/types/is swappable")(C++17)(C++17)(C++17)(C++17)  
  
  
  
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
[add_lvalue_referenceadd_rvalue_reference](add_reference.html "cpp/types/add reference")(C++11)(C++11)  
[remove_pointer](remove_pointer.html "cpp/types/remove pointer")(C++11)  
[add_pointer](add_pointer.html "cpp/types/add pointer")(C++11)  
[remove_extent](remove_extent.html "cpp/types/remove extent")(C++11)  
[remove_all_extents](remove_all_extents.html "cpp/types/remove all extents")(C++11)  
  
  
  
Type transformations  
| [aligned_storage](aligned_storage.html "cpp/types/aligned storage")(C++11)(deprecated in C++23)  
---  
[aligned_union](aligned_union.html "cpp/types/aligned union")(C++11)(deprecated in C++23)  
[decay](decay.html "cpp/types/decay")(C++11)  
[remove_cvref](remove_cvref.html "cpp/types/remove cvref")(C++20)  
[result_ofinvoke_result](result_of.html "cpp/types/result of")(C++11)(until C++20*)(C++17)  
  
  
  
| [conditional](conditional.html "cpp/types/conditional")(C++11)  
---  
**common_type**(C++11)  
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
template< class... T >  
struct common_type; |  |  (since C++11)  
| |   
  
Determines the common type among all types `T...`, that is a type all `T...` can be explicitly converted to. If such a type exists (as determined according to the rules below), the member `type` names that type. Otherwise, there is no member `type`. 

  * If sizeof...(T) is zero, there is no member `type`. 
  * If sizeof...(T) is one (i.e., `T...` contains only one type `T0`), the member `type` names the same type as std::common_type<T0, T0>::type if it exists; otherwise there is no member `type`. 
  * If sizeof...(T) is two (i.e., `T...` contains exactly two types `T1` and `T2`), 



    

  * If applying [std::decay](decay.html "cpp/types/decay") to at least one of `T1` and `T2` produces a different type, the member `type` names the same type as std::common_type<[std::decay](decay.html)<T1>::type, [std::decay](decay.html)<T2>::type>::type, if it exists; if not, there is no member `type`; 
  * Otherwise, if there is a user specialization for std::common_type<T1, T2>, that specialization is used; 
  * Otherwise, if [std::decay](decay.html)<decltype(false ? [std::declval](../utility/declval.html)<T1>() : [std::declval](../utility/declval.html)<T2>())>::type is a valid type, the member `type` denotes that type, see [the conditional operator](../language/operator_other.html#Conditional_operator "cpp/language/operator other"); 



    

  * Otherwise, if [std::decay](decay.html)<decltype(false ? [std::declval](../utility/declval.html)<CR1>() : [std::declval](../utility/declval.html)<CR2>())>::type is a valid type, where `CR1` and `CR2` are const [std::remove_reference_t](remove_reference.html)<T1>& and const [std::remove_reference_t](remove_reference.html)<T2>& respectively, the member `type` denotes that type; 


| (since C++20)  
---|---  
  
    

  * Otherwise, there is no member `type`. 



  * If sizeof...(T) is greater than two (i.e., `T...` consists of the types `T1, T2, R...`), then if std::common_type<T1, T2>::type exists, the member `type` denotes std::common_type<typename std::common_type<T1, T2>::type, R...>::type if such a type exists. In all other cases, there is no member `type`. 



If any type in the parameter pack `T` is not a complete type, (possibly cv-qualified) void, or an array of unknown bound, the behavior is undefined. 

If an instantiation of a template above depends, directly or indirectly, on an incomplete type, and that instantiation could yield a different result if that type were hypothetically completed, the behavior is undefined. 

## Contents

  * [1 Nested types](common_type.html#Nested_types)
  * [2 Helper types](common_type.html#Helper_types)
  * [3 Specializations](common_type.html#Specializations)
  * [4 Possible implementation](common_type.html#Possible_implementation)
  * [5 Notes](common_type.html#Notes)
  * [6 Examples](common_type.html#Examples)
  * [7 Defect reports](common_type.html#Defect_reports)
  * [8 See also](common_type.html#See_also)

  
---  
  
### Nested types

Name  |  Definition   
---|---  
`type` |  the common type for all `T`  
  
### Helper types

template< class... T >  
using common_type_t = typename common_type<T...>::type; |  |  (since C++14)  
---|---|---  
| |   
  
### Specializations

Users may specialize `common_type` for types `T1` and `T2` if 

  * At least one of `T1` and `T2` depends on a user-defined type, and 
  * [std::decay](decay.html "cpp/types/decay") is an identity transformation for both `T1` and `T2`. 



If such a specialization has a member named `type`, it must be a public and unambiguous member that names a cv-unqualified non-reference type to which both `T1` and `T2` are explicitly convertible. Additionally, std::common_type<T1, T2>::type and std::common_type<T2, T1>::type must denote the same type. 

A program that adds `common_type` specializations in violation of these rules has undefined behavior. 

Note that the behavior of a program that adds a specialization to any other template (except for [`std::basic_common_reference`](common_reference.html "cpp/types/common reference"))(since C++20) from `<type_traits>` is undefined. 

The following specializations are already provided by the standard library: 

[ std::common_type<std::chrono::duration>](../chrono/duration/common_type.html "cpp/chrono/duration/common type")(C++11) |  specializes the **std::common_type** trait   
(class template specialization)   
---|---  
[ std::common_type<std::chrono::time_point>](../chrono/time_point/common_type.html "cpp/chrono/time point/common type")(C++11) |  specializes the **std::common_type** trait   
(class template specialization)   
[ std::common_type<std::pair>](../utility/pair/common_type.html "cpp/utility/pair/common type")(C++23) |  determines the common type of two `pair`s   
(class template specialization)   
[ std::common_type<_tuple-like_ >](../utility/tuple/common_type.html "cpp/utility/tuple/common type")(C++23) |  determines the common type of a `tuple` and a `_tuple-like_` type   
(class template specialization)   
[ std::common_type<std::basic_const_iterator>](../iterator/basic_const_iterator/common_type.html "cpp/iterator/basic const iterator/common type")(C++23) |  determines the common type of an iterator and an adapted `basic_const_iterator` type   
(class template specialization)   
  
### Possible implementation
    
    
    // primary template (used for zero types)
    template<class...>
    struct common_type {};
     
    // one type
    template<class T>
    struct common_type<T> : common_type<T, T> {};
     
    namespace detail
    {
        template<class...>
        using void_t = void;
     
        template<class T1, class T2>
        using conditional_result_t = decltype(false ? [std::declval](../utility/declval.html)<T1>() : [std::declval](../utility/declval.html)<T2>());
     
        template<class, class, class = void>
        struct decay_conditional_result {};
        template<class T1, class T2>
        struct decay_conditional_result<T1, T2, void_t<conditional_result_t<T1, T2>>>
            : [std::decay](decay.html)<conditional_result_t<T1, T2>> {};
     
        template<class T1, class T2, class = void>
        struct common_type_2_impl : decay_conditional_result<const T1&, const T2&> {};
     
        // C++11 implementation:
        // template<class, class, class = void>
        // struct common_type_2_impl {};
     
        template<class T1, class T2>
        struct common_type_2_impl<T1, T2, void_t<conditional_result_t<T1, T2>>>
            : decay_conditional_result<T1, T2> {};
    }
     
    // two types
    template<class T1, class T2>
    struct common_type<T1, T2> 
        : [std::conditional](conditional.html)<[std::is_same](is_same.html)<T1, typename [std::decay](decay.html)<T1>::type>::value &&
                           [std::is_same](is_same.html)<T2, typename [std::decay](decay.html)<T2>::type>::value,
                           detail::common_type_2_impl<T1, T2>,
                           common_type<typename [std::decay](decay.html)<T1>::type,
                                       typename [std::decay](decay.html)<T2>::type>>::type {};
     
    // 3+ types
    namespace detail
    {
        template<class AlwaysVoid, class T1, class T2, class... R>
        struct common_type_multi_impl {};
        template<class T1, class T2, class...R>
        struct common_type_multi_impl<void_t<typename common_type<T1, T2>::type>, T1, T2, R...>
            : common_type<typename common_type<T1, T2>::type, R...> {};
    }
     
    template<class T1, class T2, class... R>
    struct common_type<T1, T2, R...>
        : detail::common_type_multi_impl<void, T1, T2, R...> {};  
  
---  
  
### Notes

For arithmetic types not subject to promotion, the common type may be viewed as the type of the (possibly mixed-mode) arithmetic expression such as T0() + T1() + ... + Tn(). 

### Examples

Demonstrates mixed-mode arithmetic on a program-defined class:

Run this code
    
    
    #include <iostream>
    #include <type_traits>
     
    template<class T>
    struct Number { T n; };
     
    template<class T, class U>
    constexpr Number<std::common_type_t<T, U>>
        operator+(const Number<T>& lhs, const Number<U>& rhs)
    {
        return {lhs.n + rhs.n};
    }
     
    void describe(const char* expr, const Number<int>& x)
    {
        [std::cout](../io/cout.html) << expr << "  is  Number<int>{" << x.n << "}\n";
    }
     
    void describe(const char* expr, const Number<double>& x)
    {
        [std::cout](../io/cout.html) << expr << "  is  Number<double>{" << x.n << "}\n";
    }
     
    int main()
    {
        Number<int> i1 = {1}, i2 = {2};
        Number<double> d1 = {2.3}, d2 = {3.5};
        describe("i1 + i2", i1 + i2);
        describe("i1 + d2", i1 + d2);
        describe("d1 + i2", d1 + i2);
        describe("d1 + d2", d1 + d2);
    }

Output: 
    
    
    i1 + i2  is  Number<int>{3}
    i1 + d2  is  Number<double>{4.5}
    d1 + i2  is  Number<double>{4.3}
    d1 + d2  is  Number<double>{5.8}

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 2141](https://cplusplus.github.io/LWG/issue2141) | C++11  | the result type of the conditional operator was not decayed  | decayed the result type   
[LWG 2408](https://cplusplus.github.io/LWG/issue2408) | C++11  | `common_type` was not SFINAE-friendly  | made SFINAE-friendly   
[LWG 2460](https://cplusplus.github.io/LWG/issue2460) | C++11  | `common_type` specializations were nearly impossible to write  | reduced the number of  
specializations needed   
  
### See also

[ common_with](../concepts/common_with.html "cpp/concepts/common with")(C++20) |  specifies that two types share a common type   
(concept)   
---|---
