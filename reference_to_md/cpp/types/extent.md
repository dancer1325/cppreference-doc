
  


  
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
**extent**(C++11)  
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
template< class T, unsigned N = 0 >  
struct extent; |  |  (since C++11)  
| |   
  
If `T` is an array type, provides the member constant `value` equal to the number of elements along the `N`th dimension of the array, if `N` is in `[`​0​`, `[std::rank](rank.html)<T>::value`)`. For any other type, or if `T` is an array of unknown bound along its first dimension and `N` is ​0​, `value` is ​0​. 

If the program adds specializations for `std::extent` or `std::extent_v`(since C++17), the behavior is undefined. 

## Contents

  * [1 Helper variable template](extent.html#Helper_variable_template)
  * [2 Inherited from std::integral_constant](extent.html#Inherited_from_std::integral_constant)
    * [2.1 Member constants](extent.html#Member_constants)
    * [2.2 Member functions](extent.html#Member_functions)
    * [2.3 Member types](extent.html#Member_types)
    * [2.4 Possible implementation](extent.html#Possible_implementation)
    * [2.5 Example](extent.html#Example)
    * [2.6 See also](extent.html#See_also)

  
---  
  
### Helper variable template

template< class T, unsigned N = 0 >  
constexpr [std::size_t](size_t.html) extent_v = extent<T, N>::value; |  |  (since C++17)  
---|---|---  
| |   
  
##  Inherited from [ std::integral_constant](integral_constant.html "cpp/types/integral constant")

###  Member constants

value[static] |  the number of elements along the `N`th dimension of `T`   
(public static member constant)  
---|---  
  
###  Member functions

operator std::size_t |  converts the object to [std::size_t](size_t.html), returns value   
(public member function)  
---|---  
operator()(C++14) |  returns value   
(public member function)  
  
###  Member types

Type  |  Definition   
---|---  
`value_type` |  [std::size_t](size_t.html)  
`type` |  [std::integral_constant](integral_constant.html)<[std::size_t](size_t.html), value>  
  
### Possible implementation
    
    
    template<class T, unsigned N = 0>
    struct extent : [std::integral_constant](integral_constant.html)<[std::size_t](size_t.html), 0> {};
     
    template<class T>
    struct extent<T[], 0> : [std::integral_constant](integral_constant.html)<[std::size_t](size_t.html), 0> {};
     
    template<class T, unsigned N>
    struct extent<T[], N> : std::extent<T, N - 1> {};
     
    template<class T, [std::size_t](size_t.html) I>
    struct extent<T[I], 0> : [std::integral_constant](integral_constant.html)<[std::size_t](size_t.html), I> {};
     
    template<class T, [std::size_t](size_t.html) I, unsigned N>
    struct extent<T[I], N> : std::extent<T, N - 1> {};  
  
---  
  
### Example

Run this code
    
    
    #include <type_traits>
     
    static_assert(
        std::extent_v<int[3]> == 3 && // default dimension is 0
        std::extent_v<int[3], 0> == 3 && // the same as above
        std::extent_v<int[3][4], 0> == 3 &&
        std::extent_v<int[3][4], 1> == 4 &&
        std::extent_v<int[3][4], 2> == 0 &&
        std::extent_v<int[]> == 0
    );
     
    int main()
    {
        const auto ext = std::extent<int['*']>{};
        static_assert(ext == 42); // with implicit conversion to std::size_t
     
        const int ints[]{1, 2, 3, 4};
        static_assert(std::extent_v<decltype(ints)> == 4); // array size
     
        [[maybe_unused]] int ary[][3] = {{1, 2, 3}};
     
        // ary[0] is of type reference to 'int[3]', so, the extent
        // cannot be calculated correctly and it returns 0
        static_assert([std::is_same_v](is_same.html)<decltype(ary[0]), int(&)[3]>);
        static_assert(std::extent_v<decltype(ary[0])> == 0);
     
        // removing reference gives correct extent value 3
        static_assert(std::extent_v<[std::remove_cvref_t](remove_cvref.html)<decltype(ary[0])>> == 3);
    }

### See also

[ is_array](is_array.html "cpp/types/is array")(C++11) |  checks if a type is an array type   
(class template)   
---|---  
[ rank](rank.html "cpp/types/rank")(C++11) |  obtains the number of dimensions of an array type   
(class template)   
[ remove_extent](remove_extent.html "cpp/types/remove extent")(C++11) |  removes one extent from the given array type   
(class template)   
[ remove_all_extents](remove_all_extents.html "cpp/types/remove all extents")(C++11) |  removes all extents from the given array type   
(class template)   
[ extents](../container/mdspan/extents.html "cpp/container/mdspan/extents")(C++23) |  a descriptor of a multidimensional index space of some rank   
(class template) 
