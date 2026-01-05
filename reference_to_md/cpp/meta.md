[C++](../cpp.html "cpp")

[Compiler support](compiler_support.html "cpp/compiler support")  
---  
[Freestanding and hosted](freestanding.html "cpp/freestanding")  
[Language](language.html "cpp/language")  
[Standard library](standard_library.html "cpp/standard library")  
[Standard library headers](headers.html "cpp/header")  
[Named requirements](iterator/concepts.html "cpp/named req")  
[Feature test macros](experimental/feature_test.html "cpp/feature test") (C++20)  
[Language support library](utility.html#Language_support "cpp/utility")  
[Concepts library](concepts.html "cpp/concepts") (C++20)  
[Diagnostics library](error.html "cpp/error")  
[Memory management library](memory.html "cpp/memory")  
**Metaprogramming library** (C++11)  
[General utilities library](utility.html "cpp/utility")  
[Containers library](container.html "cpp/container")  
[Iterators library](iterator.html "cpp/iterator")  
[Ranges library](ranges.html "cpp/ranges") (C++20)  
[Algorithms library](algorithm.html "cpp/algorithm")  
[Strings library](string.html "cpp/string")  
[Text processing library](text.html "cpp/text")  
[Numerics library](numeric.html "cpp/numeric")  
[Date and time library](chrono.html "cpp/chrono")  
[Input/output library](io.html "cpp/io")  
[Filesystem library](filesystem.html "cpp/filesystem") (C++17)  
[Concurrency support library](atomic.html "cpp/thread") (C++11)  
[Execution control library](experimental/execution.html "cpp/execution") (C++26)  
[Technical specifications](experimental.html "cpp/experimental")  
[Symbols index](symbol_index.html "cpp/symbol index")  
[External libraries](links/libs.html "cpp/links/libs")  
  


**Metaprogramming library**

Type traits  
---  
| Type categories  
---  
[is_void](types/is_void.html "cpp/types/is void")(C++11)  
[is_null_pointer](types/is_null_pointer.html "cpp/types/is null pointer")(C++11)(DR*)  
| [is_array](types/is_array.html "cpp/types/is array")(C++11)  
---  
[is_pointer](types/is_pointer.html "cpp/types/is pointer")(C++11)  
[is_enum](types/is_enum.html "cpp/types/is enum")(C++11)  
[is_union](types/is_union.html "cpp/types/is union")(C++11)  
[is_class](types/is_class.html "cpp/types/is class")(C++11)  
[is_function](types/is_function.html "cpp/types/is function")(C++11)  
[is_reference](types/is_reference.html "cpp/types/is reference")(C++11)` `  
  
| [is_object](types/is_object.html "cpp/types/is object")(C++11)  
---  
[is_scalar](types/is_scalar.html "cpp/types/is scalar")(C++11)  
[is_compound](types/is_compound.html "cpp/types/is compound")(C++11)  
[is_integral](types/is_integral.html "cpp/types/is integral")(C++11)  
[is_floating_point](types/is_floating_point.html "cpp/types/is floating point")(C++11)` `  
[is_fundamental](types/is_fundamental.html "cpp/types/is fundamental")(C++11)  
[is_arithmetic](types/is_arithmetic.html "cpp/types/is arithmetic")(C++11)  
  
[is_lvalue_reference](types/is_lvalue_reference.html "cpp/types/is lvalue reference")(C++11)  
[is_rvalue_reference](types/is_rvalue_reference.html "cpp/types/is rvalue reference")(C++11)  
[is_member_pointer](types/is_member_pointer.html "cpp/types/is member pointer")(C++11)  
[is_member_object_pointer](types/is_member_object_pointer.html "cpp/types/is member object pointer")(C++11)  
[is_member_function_pointer](types/is_member_function_pointer.html "cpp/types/is member function pointer")(C++11)  
Type properties  
[is_const](types/is_const.html "cpp/types/is const")(C++11)  
[is_volatile](types/is_volatile.html "cpp/types/is volatile")(C++11)  
[is_empty](types/is_empty.html "cpp/types/is empty")(C++11)  
[is_polymorphic](types/is_polymorphic.html "cpp/types/is polymorphic")(C++11)  
[is_final](types/is_final.html "cpp/types/is final")(C++14)  
[is_abstract](types/is_abstract.html "cpp/types/is abstract")(C++11)  
[is_aggregate](types/is_aggregate.html "cpp/types/is aggregate")(C++17)  
[is_implicit_lifetime](types/is_implicit_lifetime.html "cpp/types/is implicit lifetime")(C++23)  
[is_trivial](types/is_trivial.html "cpp/types/is trivial")(C++11)(deprecated in C++26)  
[is_trivially_copyable](types/is_trivially_copyable.html "cpp/types/is trivially copyable")(C++11)  
[is_standard_layout](types/is_standard_layout.html "cpp/types/is standard layout")(C++11)  
[is_literal_type](types/is_literal_type.html "cpp/types/is literal type")(C++11)(until C++20*)  
[is_pod](types/is_pod.html "cpp/types/is pod")(C++11)(deprecated in C++20)  
[is_signed](types/is_signed.html "cpp/types/is signed")(C++11)  
[is_unsigned](types/is_unsigned.html "cpp/types/is unsigned")(C++11)  
[is_bounded_array](types/is_bounded_array.html "cpp/types/is bounded array")(C++20)  
[is_unbounded_array](types/is_unbounded_array.html "cpp/types/is unbounded array")(C++20)  
[is_scoped_enum](types/is_scoped_enum.html "cpp/types/is scoped enum")(C++23)  
[has_unique_object_representations](types/has_unique_object_representations.html "cpp/types/has unique object representations")(C++17)  
Type trait constants  
[integral_constantbool_constanttrue_typefalse_type](types/integral_constant.html "cpp/types/integral constant")(C++11)(C++17)(C++11)(C++11)  
Metafunctions  
[conjunction](types/conjunction.html "cpp/types/conjunction")(C++17)  
[disjunction](types/disjunction.html "cpp/types/disjunction")(C++17)  
[negation](types/negation.html "cpp/types/negation")(C++17)  
  
| Supported operations  
---  
| [is_constructibleis_trivially_constructibleis_nothrow_constructible](types/is_constructible.html "cpp/types/is constructible")(C++11)(C++11)(C++11)  
---  
[is_default_constructibleis_trivially_default_constructibleis_nothrow_default_constructible](types/is_default_constructible.html "cpp/types/is default constructible")(C++11)(C++11)(C++11)  
[is_copy_constructibleis_trivially_copy_constructibleis_nothrow_copy_constructible](types/is_copy_constructible.html "cpp/types/is copy constructible")(C++11)(C++11)(C++11)  
[is_move_constructibleis_trivially_move_constructibleis_nothrow_move_constructible](types/is_move_constructible.html "cpp/types/is move constructible")(C++11)(C++11)(C++11)  
[is_assignableis_trivially_assignableis_nothrow_assignable](types/is_assignable.html "cpp/types/is assignable")(C++11)(C++11)(C++11)  
  
| [is_copy_assignableis_trivially_copy_assignableis_nothrow_copy_assignable](types/is_copy_assignable.html "cpp/types/is copy assignable")(C++11)(C++11)(C++11)  
---  
[is_move_assignableis_trivially_move_assignableis_nothrow_move_assignable](types/is_move_assignable.html "cpp/types/is move assignable")(C++11)(C++11)(C++11)  
[is_destructibleis_trivially_destructibleis_nothrow_destructible](types/is_destructible.html "cpp/types/is destructible")(C++11)(C++11)(C++11)  
[has_virtual_destructor](types/has_virtual_destructor.html "cpp/types/has virtual destructor")(C++11)  
[is_swappable_withis_swappableis_nothrow_swappable_withis_nothrow_swappable](types/is_swappable.html "cpp/types/is swappable")(C++17)(C++17)(C++17)(C++17)  
  
  
  
Relationships and property queries  
| [is_same](types/is_same.html "cpp/types/is same")(C++11)  
---  
[is_convertibleis_nothrow_convertible](types/is_convertible.html "cpp/types/is convertible")(C++11)(C++20)  
[is_layout_compatible](types/is_layout_compatible.html "cpp/types/is layout compatible")(C++20)  
[is_pointer_interconvertible_base_of](types/is_pointer_interconvertible_base_of.html "cpp/types/is pointer interconvertible base of")(C++20)  
[is_pointer_interconvertible_with_class](types/is_pointer_interconvertible_with_class.html "cpp/types/is pointer interconvertible with class")(C++20)` `  
[is_corresponding_member](types/is_corresponding_member.html "cpp/types/is corresponding member")(C++20)  
[reference_constructs_from_temporary](types/reference_constructs_from_temporary.html "cpp/types/reference constructs from temporary")(C++23)  
[reference_converts_from_temporary](types/reference_converts_from_temporary.html "cpp/types/reference converts from temporary")(C++23)  
  
| [is_base_of](types/is_base_of.html "cpp/types/is base of")(C++11)  
---  
[is_virtual_base_of](types/is_virtual_base_of.html "cpp/types/is virtual base of")(C++26)  
[alignment_of](types/alignment_of.html "cpp/types/alignment of")(C++11)  
[rank](types/rank.html "cpp/types/rank")(C++11)  
[extent](types/extent.html "cpp/types/extent")(C++11)  
[is_invocableis_invocable_ris_nothrow_invocableis_nothrow_invocable_r](types/is_invocable.html "cpp/types/is invocable")(C++17)(C++17)(C++17)(C++17)  
  
Type modifications  
| [remove_cvremove_constremove_volatile](types/remove_cv.html "cpp/types/remove cv")(C++11)(C++11)(C++11)  
---  
[add_cvadd_constadd_volatile](types/add_cv.html "cpp/types/add cv")(C++11)(C++11)(C++11)  
[make_signed](types/make_signed.html "cpp/types/make signed")(C++11)  
[make_unsigned](types/make_unsigned.html "cpp/types/make unsigned")(C++11)  
  
| [remove_reference](types/remove_reference.html "cpp/types/remove reference")(C++11)  
---  
[add_lvalue_referenceadd_rvalue_reference](types/add_reference.html "cpp/types/add reference")(C++11)(C++11)  
[remove_pointer](types/remove_pointer.html "cpp/types/remove pointer")(C++11)  
[add_pointer](types/add_pointer.html "cpp/types/add pointer")(C++11)  
[remove_extent](types/remove_extent.html "cpp/types/remove extent")(C++11)  
[remove_all_extents](types/remove_all_extents.html "cpp/types/remove all extents")(C++11)  
  
  
  
Type transformations  
| [aligned_storage](types/aligned_storage.html "cpp/types/aligned storage")(C++11)(deprecated in C++23)  
---  
[aligned_union](types/aligned_union.html "cpp/types/aligned union")(C++11)(deprecated in C++23)  
[decay](types/decay.html "cpp/types/decay")(C++11)  
[remove_cvref](types/remove_cvref.html "cpp/types/remove cvref")(C++20)  
[result_ofinvoke_result](types/result_of.html "cpp/types/result of")(C++11)(until C++20*)(C++17)  
  
  
  
| [conditional](types/conditional.html "cpp/types/conditional")(C++11)  
---  
[common_type](types/common_type.html "cpp/types/common type")(C++11)  
[common_reference](types/common_reference.html "cpp/types/common reference")(C++20)  
[underlying_type](types/underlying_type.html "cpp/types/underlying type")(C++11)  
[type_identity](types/type_identity.html "cpp/types/type identity")(C++20)  
[enable_if](types/enable_if.html "cpp/types/enable if")(C++11)  
[void_t](types/void_t.html "cpp/types/void t")(C++17)  
  
[Compile-time rational arithmetic](utility/ratio.html "cpp/numeric/ratio")  
Compile-time integer sequences  
[integer_sequence](utility/integer_sequence.html "cpp/utility/integer sequence")(C++14)  
  


C++ provides metaprogramming facilities, such as type traits, compile-time rational arithmetic, and compile-time integer sequences. 

## Contents

  * [1 Definitions](meta.html#Definitions)
  * [2 Type traits](meta.html#Type_traits)
    * [2.1 Base classes](meta.html#Base_classes)
    * [2.2 Unary type traits](meta.html#Unary_type_traits)
      * [2.2.1 Primary type categories](meta.html#Primary_type_categories)
      * [2.2.2 Composite type categories](meta.html#Composite_type_categories)
      * [2.2.3 Type properties](meta.html#Type_properties)
      * [2.2.4 Supported operations](meta.html#Supported_operations)
    * [2.3 Property queries](meta.html#Property_queries)
    * [2.4 Type relationships](meta.html#Type_relationships)
    * [2.5 Type transformations](meta.html#Type_transformations)
      * [2.5.1 Const-volatility specifiers](meta.html#Const-volatility_specifiers)
      * [2.5.2 References](meta.html#References)
      * [2.5.3 Sign modifiers](meta.html#Sign_modifiers)
      * [2.5.4 Arrays](meta.html#Arrays)
      * [2.5.5 Pointers](meta.html#Pointers)
      * [2.5.6 Other transformations](meta.html#Other_transformations)
    * [2.6 Logical operations (since C++17)](meta.html#Logical_operations_.28since_C.2B.2B17.29)
    * [2.7 Member relationships (since C++20)](meta.html#Member_relationships_.28since_C.2B.2B20.29)
  * [3 Compile-time rational arithmetic](meta.html#Compile-time_rational_arithmetic)
  * [4 Compile-time integer sequences (since C++14)](meta.html#Compile-time_integer_sequences_.28since_C.2B.2B14.29)

  
---  
  
### Definitions

The following types are collectively called _referenceable types_ : 

  * [object types](language/type-id.html#Object_type "cpp/language/type")
  * [function types](language/function.html#Function_type "cpp/language/function") without cv and ref
  * [reference types](language/reference.html "cpp/language/reference")



For any referenceable type `T`, a reference to it can be created[[1]](meta.html#cite_note-1). 

  1. [↑](meta.html#cite_ref-1) For reference types, this can be done via [reference collapsing](language/reference.html#Reference_collapsing "cpp/language/reference").



### Type traits

Type traits define compile-time template-based interfaces to query the properties of types. 

Attempting to specialize a template defined in the [`<type_traits>`](header/type_traits.html "cpp/header/type traits") header and listed in this page results in undefined behavior, except that [std::common_type](types/common_type.html "cpp/types/common type") and [`std::basic_common_reference`](types/common_reference.html "cpp/types/common reference")(since C++20) may be specialized as required in description. 

A template defined in the [`<type_traits>`](header/type_traits.html "cpp/header/type traits") header may be instantiated with an incomplete type unless otherwise specified, notwithstanding the general prohibition against instantiating standard library templates with incomplete types. 

#### Base classes

Most of non-transforming type traits need to be publicly and unambiguously derived from [std::integral_constant](types/integral_constant.html "cpp/types/integral constant") in order to satisfy the requirements of [UnaryTypeTrait](named_req/UnaryTypeTrait.html "cpp/named req/UnaryTypeTrait") or [BinaryTypeTrait](named_req/BinaryTypeTrait.html "cpp/named req/BinaryTypeTrait"). 

Defined in header `[<type_traits>](header/type_traits.html "cpp/header/type traits")`  
---  
[ integral_constantbool_constant](types/integral_constant.html "cpp/types/integral constant")(C++11)(C++17) |  compile-time constant of specified type with specified value   
(class template)   
  
Two specializations of [std::integral_constant](types/integral_constant.html "cpp/types/integral constant") for the type bool are provided: 

Defined in header `[<type_traits>](header/type_traits.html "cpp/header/type traits")`  
---  
Type  |  Definition   
`true_type` |  [std::integral_constant](types/integral_constant.html)<bool, true>  
`false_type` |  [std::integral_constant](types/integral_constant.html)<bool, false>  
  
#### Unary type traits

Unary type traits can be used to query the boolean properties of a type at compile time. 

All these type traits satisfy [UnaryTypeTrait](named_req/UnaryTypeTrait.html "cpp/named req/UnaryTypeTrait"), the base characteristic of each type trait is either [std::true_type](types/integral_constant.html "cpp/types/integral constant") or [std::false_type](types/integral_constant.html "cpp/types/integral constant"), depending on whether the corresponding condition is met. 

#####  Primary type categories   
  
---  
Defined in header `[<type_traits>](header/type_traits.html "cpp/header/type traits")`  
[ is_void](types/is_void.html "cpp/types/is void")(C++11) |  checks if a type is void   
(class template)   
[ is_null_pointer](types/is_null_pointer.html "cpp/types/is null pointer")(C++11)(DR*) |  checks if a type is [std::nullptr_t](types/nullptr_t.html "cpp/types/nullptr t")   
(class template)   
[ is_integral](types/is_integral.html "cpp/types/is integral")(C++11) |  checks if a type is an integral type   
(class template)   
[ is_floating_point](types/is_floating_point.html "cpp/types/is floating point")(C++11) |  checks if a type is a floating-point type   
(class template)   
[ is_array](types/is_array.html "cpp/types/is array")(C++11) |  checks if a type is an array type   
(class template)   
[ is_enum](types/is_enum.html "cpp/types/is enum")(C++11) |  checks if a type is an enumeration type   
(class template)   
[ is_union](types/is_union.html "cpp/types/is union")(C++11) |  checks if a type is a union type   
(class template)   
[ is_class](types/is_class.html "cpp/types/is class")(C++11) |  checks if a type is a non-union class type   
(class template)   
[ is_function](types/is_function.html "cpp/types/is function")(C++11) |  checks if a type is a function type   
(class template)   
[ is_pointer](types/is_pointer.html "cpp/types/is pointer")(C++11) |  checks if a type is a pointer type   
(class template)   
[ is_lvalue_reference](types/is_lvalue_reference.html "cpp/types/is lvalue reference")(C++11) |  checks if a type is an _lvalue reference_   
(class template)   
[ is_rvalue_reference](types/is_rvalue_reference.html "cpp/types/is rvalue reference")(C++11) |  checks if a type is an _rvalue reference_   
(class template)   
[ is_member_object_pointer](types/is_member_object_pointer.html "cpp/types/is member object pointer")(C++11) |  checks if a type is a non-static member object pointer   
(class template)   
[ is_member_function_pointer](types/is_member_function_pointer.html "cpp/types/is member function pointer")(C++11) |  checks if a type is a non-static member function pointer   
(class template)   
  
#####  Composite type categories   
  
Defined in header `[<type_traits>](header/type_traits.html "cpp/header/type traits")`  
[ is_fundamental](types/is_fundamental.html "cpp/types/is fundamental")(C++11) |  checks if a type is a fundamental type   
(class template)   
[ is_arithmetic](types/is_arithmetic.html "cpp/types/is arithmetic")(C++11) |  checks if a type is an arithmetic type   
(class template)   
[ is_scalar](types/is_scalar.html "cpp/types/is scalar")(C++11) |  checks if a type is a scalar type   
(class template)   
[ is_object](types/is_object.html "cpp/types/is object")(C++11) |  checks if a type is an object type   
(class template)   
[ is_compound](types/is_compound.html "cpp/types/is compound")(C++11) |  checks if a type is a compound type   
(class template)   
[ is_reference](types/is_reference.html "cpp/types/is reference")(C++11) |  checks if a type is either an _lvalue reference_ or _rvalue reference_   
(class template)   
[ is_member_pointer](types/is_member_pointer.html "cpp/types/is member pointer")(C++11) |  checks if a type is a pointer to a non-static member function or object   
(class template)   
  
#####  Type properties   
  
Defined in header `[<type_traits>](header/type_traits.html "cpp/header/type traits")`  
[ is_const](types/is_const.html "cpp/types/is const")(C++11) |  checks if a type is const-qualified   
(class template)   
[ is_volatile](types/is_volatile.html "cpp/types/is volatile")(C++11) |  checks if a type is volatile-qualified   
(class template)   
[ is_trivial](types/is_trivial.html "cpp/types/is trivial")(C++11)(deprecated in C++26) |  checks if a type is trivial   
(class template)   
[ is_trivially_copyable](types/is_trivially_copyable.html "cpp/types/is trivially copyable")(C++11) |  checks if a type is trivially copyable   
(class template)   
[ is_standard_layout](types/is_standard_layout.html "cpp/types/is standard layout")(C++11) |  checks if a type is a [standard-layout](language/data_members.html#Standard-layout "cpp/language/data members") type   
(class template)   
[ is_pod](types/is_pod.html "cpp/types/is pod")(C++11)(deprecated in C++20) |  checks if a type is a plain-old data (POD) type   
(class template)   
[ is_literal_type](types/is_literal_type.html "cpp/types/is literal type")(C++11)(deprecated in C++17)(removed in C++20) |  checks if a type is a literal type   
(class template)   
[ has_unique_object_representations](types/has_unique_object_representations.html "cpp/types/has unique object representations")(C++17) |  checks if every bit in the type's object representation contributes to its value   
(class template)   
[ is_empty](types/is_empty.html "cpp/types/is empty")(C++11) |  checks if a type is a class (but not union) type and has no non-static data members   
(class template)   
[ is_polymorphic](types/is_polymorphic.html "cpp/types/is polymorphic")(C++11) |  checks if a type is a polymorphic class type   
(class template)   
[ is_abstract](types/is_abstract.html "cpp/types/is abstract")(C++11) |  checks if a type is an abstract class type   
(class template)   
[ is_final](types/is_final.html "cpp/types/is final")(C++14) |  checks if a type is a final class type   
(class template)   
[ is_aggregate](types/is_aggregate.html "cpp/types/is aggregate")(C++17) |  checks if a type is an aggregate type   
(class template)   
[ is_implicit_lifetime](types/is_implicit_lifetime.html "cpp/types/is implicit lifetime")(C++23) |  checks if a type is an implicit-lifetime type   
(class template)   
[ is_signed](types/is_signed.html "cpp/types/is signed")(C++11) |  checks if a type is a signed arithmetic type   
(class template)   
[ is_unsigned](types/is_unsigned.html "cpp/types/is unsigned")(C++11) |  checks if a type is an unsigned arithmetic type   
(class template)   
[ is_bounded_array](types/is_bounded_array.html "cpp/types/is bounded array")(C++20) |  checks if a type is an array type of known bound   
(class template)   
[ is_unbounded_array](types/is_unbounded_array.html "cpp/types/is unbounded array")(C++20) |  checks if a type is an array type of unknown bound   
(class template)   
[ is_scoped_enum](types/is_scoped_enum.html "cpp/types/is scoped enum")(C++23) |  checks if a type is a scoped enumeration type   
(class template)   
  
#####  Supported operations   
  
---  
Defined in header `[<type_traits>](header/type_traits.html "cpp/header/type traits")`  
[ is_constructibleis_trivially_constructibleis_nothrow_constructible](types/is_constructible.html "cpp/types/is constructible")(C++11)(C++11)(C++11) |  checks if a type has a constructor for specific arguments   
(class template)   
[ is_default_constructibleis_trivially_default_constructibleis_nothrow_default_constructible](types/is_default_constructible.html "cpp/types/is default constructible")(C++11)(C++11)(C++11) |  checks if a type has a default constructor   
(class template)   
[ is_copy_constructibleis_trivially_copy_constructibleis_nothrow_copy_constructible](types/is_copy_constructible.html "cpp/types/is copy constructible")(C++11)(C++11)(C++11) |  checks if a type has a copy constructor   
(class template)   
[ is_move_constructibleis_trivially_move_constructibleis_nothrow_move_constructible](types/is_move_constructible.html "cpp/types/is move constructible")(C++11)(C++11)(C++11) |  checks if a type can be constructed from an rvalue reference   
(class template)   
[ is_assignableis_trivially_assignableis_nothrow_assignable](types/is_assignable.html "cpp/types/is assignable")(C++11)(C++11)(C++11) |  checks if a type has an assignment operator for a specific argument   
(class template)   
[ is_copy_assignableis_trivially_copy_assignableis_nothrow_copy_assignable](types/is_copy_assignable.html "cpp/types/is copy assignable")(C++11)(C++11)(C++11) |  checks if a type has a copy assignment operator   
(class template)   
[ is_move_assignableis_trivially_move_assignableis_nothrow_move_assignable](types/is_move_assignable.html "cpp/types/is move assignable")(C++11)(C++11)(C++11) |  checks if a type has a move assignment operator   
(class template)   
[ is_destructibleis_trivially_destructibleis_nothrow_destructible](types/is_destructible.html "cpp/types/is destructible")(C++11)(C++11)(C++11) |  checks if a type has a non-deleted destructor   
(class template)   
[ has_virtual_destructor](types/has_virtual_destructor.html "cpp/types/has virtual destructor")(C++11) |  checks if a type has a virtual destructor   
(class template)   
[ is_swappable_withis_swappableis_nothrow_swappable_withis_nothrow_swappable](types/is_swappable.html "cpp/types/is swappable")(C++17)(C++17)(C++17)(C++17) |  checks if objects of a type can be swapped with objects of same or different type   
(class template)   
[ reference_constructs_from_temporary](types/reference_constructs_from_temporary.html "cpp/types/reference constructs from temporary")(C++23) |  checks if a reference is bound to a temporary in direct-initialization   
(class template)   
[ reference_converts_from_temporary](types/reference_converts_from_temporary.html "cpp/types/reference converts from temporary")(C++23) |  checks if a reference is bound to a temporary in copy-initialization   
(class template)   
  
#### Property queries

Property query traits can be used to query the integral properties of a type at compile time. 

All these type traits satisfy [UnaryTypeTrait](named_req/UnaryTypeTrait.html "cpp/named req/UnaryTypeTrait"), the base characteristic of each type trait is [std::integral_constant](types/integral_constant.html)<[std::size_t](types/size_t.html), Value>, where `Value` is the query result of the corresponding property. 

Defined in header `[<type_traits>](header/type_traits.html "cpp/header/type traits")`  
---  
[ alignment_of](types/alignment_of.html "cpp/types/alignment of")(C++11) |  obtains the type's alignment requirements   
(class template)   
[ rank](types/rank.html "cpp/types/rank")(C++11) |  obtains the number of dimensions of an array type   
(class template)   
[ extent](types/extent.html "cpp/types/extent")(C++11) |  obtains the size of an array type along a specified dimension   
(class template)   
  
#### Type relationships

Type relationship traits can be used to query relationships between types at compile time. 

All these type traits satisfy [BinaryTypeTrait](named_req/BinaryTypeTrait.html "cpp/named req/BinaryTypeTrait"), the base characteristic of each type trait is either [std::true_type](types/integral_constant.html "cpp/types/integral constant") or [std::false_type](types/integral_constant.html "cpp/types/integral constant"), depending on whether the corresponding condition is met. 

Defined in header `[<type_traits>](header/type_traits.html "cpp/header/type traits")`  
---  
[ is_same](types/is_same.html "cpp/types/is same")(C++11) |  checks if two types are the same   
(class template)   
[ is_base_of](types/is_base_of.html "cpp/types/is base of")(C++11) |  checks if a type is a base of the other type   
(class template)   
[ is_virtual_base_of](types/is_virtual_base_of.html "cpp/types/is virtual base of")(C++26) |  checks if a type is a virtual base of the other type   
(class template)   
[ is_convertibleis_nothrow_convertible](types/is_convertible.html "cpp/types/is convertible")(C++11)(C++20) |  checks if a type can be converted to the other type   
(class template)   
[ is_layout_compatible](types/is_layout_compatible.html "cpp/types/is layout compatible")(C++20) |  checks if two types are [_layout-compatible_](language/data_members.html#Standard_layout "cpp/language/data members")   
(class template)   
[ is_pointer_interconvertible_base_of](types/is_pointer_interconvertible_base_of.html "cpp/types/is pointer interconvertible base of")(C++20) |  checks if a type is a _[pointer-interconvertible](language/static_cast.html#pointer-interconvertible "cpp/language/static cast")_ (initial) base of another type   
(class template)   
[ is_invocableis_invocable_ris_nothrow_invocableis_nothrow_invocable_r](types/is_invocable.html "cpp/types/is invocable")(C++17) |  checks if a type can be invoked (as if by [std::invoke](utility/functional/invoke.html "cpp/utility/functional/invoke")) with the given argument types   
(class template)   
  
#### Type transformations

Type transformation traits transform one type to another following some predefined rules. 

All these type traits satisfy [TransformationTrait](named_req/TransformationTrait.html "cpp/named req/TransformationTrait"). 

#####  Const-volatility specifiers   
  
---  
Defined in header `[<type_traits>](header/type_traits.html "cpp/header/type traits")`  
[ remove_cvremove_constremove_volatile](types/remove_cv.html "cpp/types/remove cv")(C++11)(C++11)(C++11) |  removes const and/or volatile specifiers from the given type   
(class template)   
[ add_cvadd_constadd_volatile](types/add_cv.html "cpp/types/add cv")(C++11)(C++11)(C++11) |  adds const and/or volatile specifiers to the given type   
(class template)   
  
#####  References   
  
Defined in header `[<type_traits>](header/type_traits.html "cpp/header/type traits")`  
[ remove_reference](types/remove_reference.html "cpp/types/remove reference")(C++11) |  removes a reference from the given type   
(class template)   
[ add_lvalue_referenceadd_rvalue_reference](types/add_reference.html "cpp/types/add reference")(C++11)(C++11) |  adds an _lvalue_ or _rvalue_ reference to the given type   
(class template)   
  
#####  Sign modifiers   
  
Defined in header `[<type_traits>](header/type_traits.html "cpp/header/type traits")`  
[ make_signed](types/make_signed.html "cpp/types/make signed")(C++11) |  obtains the corresponding signed type for the given integral type   
(class template)   
[ make_unsigned](types/make_unsigned.html "cpp/types/make unsigned")(C++11) |  obtains the corresponding signed type for the given integral type   
(class template)   
  
#####  Arrays   
  
Defined in header `[<type_traits>](header/type_traits.html "cpp/header/type traits")`  
[ remove_extent](types/remove_extent.html "cpp/types/remove extent")(C++11) |  removes one extent from the given array type   
(class template)   
[ remove_all_extents](types/remove_all_extents.html "cpp/types/remove all extents")(C++11) |  removes all extents from the given array type   
(class template)   
  
#####  Pointers   
  
Defined in header `[<type_traits>](header/type_traits.html "cpp/header/type traits")`  
[ remove_pointer](types/remove_pointer.html "cpp/types/remove pointer")(C++11) |  removes a pointer from the given type   
(class template)   
[ add_pointer](types/add_pointer.html "cpp/types/add pointer")(C++11) |  adds a pointer to the given type   
(class template)   
  
#####  Other transformations   
  
Defined in header `[<type_traits>](header/type_traits.html "cpp/header/type traits")`  
[ aligned_storage](types/aligned_storage.html "cpp/types/aligned storage")(since C++11)(deprecated in C++23) |  defines the type suitable for use as uninitialized storage for types of given size   
(class template)   
[ aligned_union](types/aligned_union.html "cpp/types/aligned union")(since C++11)(deprecated in C++23) |  defines the type suitable for use as uninitialized storage for all given types   
(class template)   
[ decay](types/decay.html "cpp/types/decay")(C++11) |  applies type transformations as when passing a function argument by value   
(class template)   
[ remove_cvref](types/remove_cvref.html "cpp/types/remove cvref")(C++20) |  combines [std::remove_cv](types/remove_cv.html "cpp/types/remove cv") and [std::remove_reference](types/remove_reference.html "cpp/types/remove reference")   
(class template)   
[ enable_if](types/enable_if.html "cpp/types/enable if")(C++11) |  conditionally [removes](language/sfinae.html "cpp/language/sfinae") a function overload or template specialization from overload resolution   
(class template)   
[ conditional](types/conditional.html "cpp/types/conditional")(C++11) |  chooses one type or another based on compile-time boolean   
(class template)   
[ common_type](types/common_type.html "cpp/types/common type")(C++11) |  determines the common type of a group of types   
(class template)   
[ common_referencebasic_common_reference](types/common_reference.html "cpp/types/common reference")(C++20) |  determines the common reference type of a group of types   
(class template)   
[ underlying_type](types/underlying_type.html "cpp/types/underlying type")(C++11) |  obtains the underlying integer type for a given enumeration type   
(class template)   
[ result_ofinvoke_result](types/result_of.html "cpp/types/result of")(C++11)(removed in C++20)(C++17) |  deduces the result type of invoking a callable object with a set of arguments   
(class template)   
[ void_t](types/void_t.html "cpp/types/void t")(C++17) |  void variadic alias template   
(alias template)  
[ type_identity](types/type_identity.html "cpp/types/type identity")(C++20) |  returns the type argument unchanged   
(class template)   
  
#### Logical operations (since C++17)

Logical operator traits apply logical operators to other type traits. 

Defined in header `[<type_traits>](header/type_traits.html "cpp/header/type traits")`  
---  
[ conjunction](types/conjunction.html "cpp/types/conjunction")(C++17) |  variadic logical AND metafunction   
(class template)   
[ disjunction](types/disjunction.html "cpp/types/disjunction")(C++17) |  variadic logical OR metafunction   
(class template)   
[ negation](types/negation.html "cpp/types/negation")(C++17) |  logical NOT metafunction   
(class template)   
  
#### Member relationships (since C++20)

Defined in header `[<type_traits>](header/type_traits.html "cpp/header/type traits")`  
---  
[ is_pointer_interconvertible_with_class](types/is_pointer_interconvertible_with_class.html "cpp/types/is pointer interconvertible with class")(C++20) |  checks if objects of a type are _[pointer-interconvertible](language/static_cast.html#pointer-interconvertible "cpp/language/static cast")_ with the specified subobject of that type   
(function template)   
[ is_corresponding_member](types/is_corresponding_member.html "cpp/types/is corresponding member")(C++20) |  checks if two specified members correspond to each other in the common initial subsequence of two specified types   
(function template)   
  
### [Compile-time rational arithmetic](utility/ratio.html "cpp/numeric/ratio")

The header [`<ratio>`](header/ratio.html "cpp/header/ratio") provides [types and functions for manipulating and storing compile-time ratios](utility/ratio.html "cpp/numeric/ratio"). 

### Compile-time integer sequences (since C++14)

Defined in header `[<utility>](header/utility.html "cpp/header/utility")`  
---  
[ integer_sequence](utility/integer_sequence.html "cpp/utility/integer sequence")(C++14) |  implements compile-time sequence of integers   
(class template) 
