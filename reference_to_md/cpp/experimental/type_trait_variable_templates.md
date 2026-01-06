  
  


[Experimental](../experimental.html "cpp/experimental")

[Technical Specification](../experimental.html#Technical_Specification "cpp/experimental")  
---  
[Filesystem library](fs.html "cpp/experimental/fs") (filesystem TS)  
[Library fundamentals](memory.html "cpp/experimental/lib extensions") (library fundamentals TS)  
[Library fundamentals 2](lib_extensions_2.html "cpp/experimental/lib extensions 2") (library fundamentals TS v2)  
[Library fundamentals 3](lib_extensions_3.html "cpp/experimental/lib extensions 3") (library fundamentals TS v3)  
[Extensions for parallelism](parallelism.html "cpp/experimental/parallelism") (parallelism TS)  
[Extensions for parallelism 2](parallelism_2.html "cpp/experimental/parallelism 2") (parallelism TS v2)  
[Extensions for concurrency](concurrency.html "cpp/experimental/concurrency") (concurrency TS)  
[Extensions for concurrency 2](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/concurrency_2&action=edit&redlink=1 "cpp/experimental/concurrency 2 \(page does not exist\)") (concurrency TS v2)  
[Concepts](constraints.html "cpp/experimental/constraints") (concepts TS)  
[Ranges](ranges.html "cpp/experimental/ranges") (ranges TS)  
[Reflection](reflect.html "cpp/experimental/reflect") (reflection TS)  
[Mathematical special functions](special_math.html "cpp/experimental/special functions") (special functions TR)  
[Experimental Non-TS](../experimental.html#Experimental_Non-TS "cpp/experimental")  
[Pattern Matching](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/pm&action=edit&redlink=1 "cpp/experimental/pm \(page does not exist\)")  
[Linear Algebra](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/la&action=edit&redlink=1 "cpp/experimental/la \(page does not exist\)")  
[std::execution](execution.html "cpp/experimental/execution")  
[Contracts](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/contracts&action=edit&redlink=1 "cpp/experimental/contracts \(page does not exist\)")  
[2D Graphics](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/2dgraphics&action=edit&redlink=1 "cpp/experimental/2dgraphics \(page does not exist\)")  
  


[Library fundamentals](memory.html "cpp/experimental/lib extensions")

[experimental::optional](optional.html "cpp/experimental/optional")  
---  
[experimental::any](any.html "cpp/experimental/any")  
[experimental::basic_string_view](basic_string_view.html "cpp/experimental/basic string view")  
[experimental::sample](sample.html "cpp/experimental/sample")  
[experimental::shared_ptr](shared_ptr.html "cpp/experimental/shared ptr")  
[experimental::weak_ptr](weak_ptr.html "cpp/experimental/weak ptr")  
[experimental::apply](apply.html "cpp/experimental/apply")  
[experimental::invocation_typeexperimental::raw_invocation_type](invocation_type.html "cpp/experimental/invocation type")  
[experimental::search](search.html "cpp/experimental/search")  
[experimental::default_searcherexperimental::make_default_searcher](default_searcher.html "cpp/experimental/default searcher")  
[experimental::boyer_moore_searcherexperimental::make_boyer_moore_searcher](boyer_moore_searcher.html "cpp/experimental/boyer moore searcher")  
[experimental::boyer_moore_horspool_searcherexperimental::make_boyer_moore_horspool_searcher](boyer_moore_horspool_searcher.html "cpp/experimental/boyer moore horspool searcher")  
[Type-erased and polymorphic allocators](memory.html "cpp/experimental/memory")  
**Variable templates for type traits**  
  


Version 1 of the C++ Extensions for Library Fundamentals provides a number of constexpr variable templates for type traits classes, as well as other similar class templates with public `::value` members. 

Unless otherwise noted, the following variable templates are defined in the `std::experimental` namespace. 

| 

## Contents

  * [1 Type traits](type_trait_variable_templates.html#Type_traits)
    * [1.1 Primary type categories](type_trait_variable_templates.html#Primary_type_categories)
    * [1.2 Composite type categories](type_trait_variable_templates.html#Composite_type_categories)
    * [1.3 Type properties](type_trait_variable_templates.html#Type_properties)
    * [1.4 Supported operations](type_trait_variable_templates.html#Supported_operations)
    * [1.5 Property queries](type_trait_variable_templates.html#Property_queries)
    * [1.6 Type relationships](type_trait_variable_templates.html#Type_relationships)
  * [2 Other variable templates](type_trait_variable_templates.html#Other_variable_templates)
    * [2.1 std::ratio comparison](type_trait_variable_templates.html#std::ratio_comparison)
    * [2.2 Miscellaneous](type_trait_variable_templates.html#Miscellaneous)
  * [3 Notes](type_trait_variable_templates.html#Notes)

  
---  
  
###  Type traits  
  
#####  Primary type categories   
  
Variable template  |  Value   
Defined in header `[<experimental/type_traits>](https://en.cppreference.com/mwiki/index.php?title=cpp/header/experimental/type_traits&action=edit&redlink=1 "cpp/header/experimental/type traits \(page does not exist\)")`  
template<class T> constexpr bool is_void_v = |  [std::is_void](../types/is_void.html)<T>::value;  
template<class T> constexpr bool is_null_pointer_v = |  [std::is_null_pointer](../types/is_null_pointer.html)<T>::value;  
template<class T> constexpr bool is_integral_v = |  [std::is_integral](../types/is_integral.html)<T>::value;  
template<class T> constexpr bool is_floating_point_v = |  [std::is_floating_point](../types/is_floating_point.html)<T>::value;  
template<class T> constexpr bool is_array_v = |  [std::is_array](../types/is_array.html)<T>::value;  
template<class T> constexpr bool is_pointer_v = |  [std::is_pointer](../types/is_pointer.html)<T>::value;  
template<class T> constexpr bool is_lvalue_reference_v = |  [std::is_lvalue_reference](../types/is_lvalue_reference.html)<T>::value;  
template<class T> constexpr bool is_rvalue_reference_v = |  [std::is_rvalue_reference](../types/is_rvalue_reference.html)<T>::value;  
template<class T> constexpr bool is_member_object_pointer_v = |  [std::is_member_object_pointer](../types/is_member_object_pointer.html)<T>::value;  
template<class T> constexpr bool is_member_function_pointer_v = |  [std::is_member_function_pointer](../types/is_member_function_pointer.html)<T>::value;  
template<class T> constexpr bool is_enum_v = |  [std::is_enum](../types/is_enum.html)<T>::value;  
template<class T> constexpr bool is_union_v = |  [std::is_union](../types/is_union.html)<T>::value;  
template<class T> constexpr bool is_class_v = |  [std::is_class](../types/is_class.html)<T>::value;  
template<class T> constexpr bool is_function_v = |  [std::is_function](../types/is_function.html)<T>::value;  
  
#####  Composite type categories   
  
Variable template  |  Value   
Defined in header `[<experimental/type_traits>](https://en.cppreference.com/mwiki/index.php?title=cpp/header/experimental/type_traits&action=edit&redlink=1 "cpp/header/experimental/type traits \(page does not exist\)")`  
template<class T> constexpr bool is_reference_v = |  [std::is_reference](../types/is_reference.html)<T>::value;  
template<class T> constexpr bool is_arithmetic_v = |  [std::is_arithmetic](../types/is_arithmetic.html)<T>::value;  
template<class T> constexpr bool is_fundamental_v = |  [std::is_fundamental](../types/is_fundamental.html)<T>::value;  
template<class T> constexpr bool is_object_v = |  [std::is_object](../types/is_object.html)<T>::value;  
template<class T> constexpr bool is_scalar_v = |  [std::is_scalar](../types/is_scalar.html)<T>::value;  
template<class T> constexpr bool is_compound_v = |  [std::is_compound](../types/is_compound.html)<T>::value;  
template<class T> constexpr bool is_member_pointer_v = |  [std::is_member_pointer](../types/is_member_pointer.html)<T>::value;  
  
#####  Type properties   
  
Variable template  |  Value   
Defined in header `[<experimental/type_traits>](https://en.cppreference.com/mwiki/index.php?title=cpp/header/experimental/type_traits&action=edit&redlink=1 "cpp/header/experimental/type traits \(page does not exist\)")`  
template<class T> constexpr bool is_const_v = |  [std::is_const](../types/is_const.html)<T>::value;  
template<class T> constexpr bool is_volatile_v = |  [std::is_volatile](../types/is_volatile.html)<T>::value;  
template<class T> constexpr bool is_trivial_v = |  [std::is_trivial](../types/is_trivial.html)<T>::value;  
template<class T> constexpr bool is_trivially_copyable_v = |  [std::is_trivially_copyable](../types/is_trivially_copyable.html)<T>::value;  
template<class T> constexpr bool is_standard_layout_v = |  [std::is_standard_layout](../types/is_standard_layout.html)<T>::value;  
template<class T> constexpr bool is_pod_v = |  [std::is_pod](../types/is_pod.html)<T>::value;  
template<class T> constexpr bool is_literal_type_v = |  [std::is_literal_type](../types/is_literal_type.html)<T>::value;  
template<class T> constexpr bool is_empty_v = |  [std::is_empty](../types/is_empty.html)<T>::value;  
template<class T> constexpr bool is_polymorphic_v = |  [std::is_polymorphic](../types/is_polymorphic.html)<T>::value;  
template<class T> constexpr bool is_abstract_v = |  [std::is_abstract](../types/is_abstract.html)<T>::value;  
template<class T> constexpr bool is_final_v = |  [std::is_final](../types/is_final.html)<T>::value;  
template<class T> constexpr bool is_signed_v = |  [std::is_signed](../types/is_signed.html)<T>::value;  
template<class T> constexpr bool is_unsigned_v = |  [std::is_unsigned](../types/is_unsigned.html)<T>::value;  
  
#####  Supported operations   
  
---  
Variable template  |  Value   
Defined in header `[<experimental/type_traits>](https://en.cppreference.com/mwiki/index.php?title=cpp/header/experimental/type_traits&action=edit&redlink=1 "cpp/header/experimental/type traits \(page does not exist\)")`  
template<class T, class... Args> constexpr bool is_constructible_v = |  [std::is_constructible](../types/is_constructible.html)<T, Args...>::value;  
template<class T, class... Args> constexpr bool is_trivially_constructible_v = |  [std::is_trivially_constructible](../types/is_constructible.html)<T, Args...>::value;  
template<class T, class... Args> constexpr bool is_nothrow_constructible_v = |  [std::is_nothrow_constructible](../types/is_constructible.html)<T, Args...>::value;  
template<class T> constexpr bool is_default_constructible_v = |  [std::is_default_constructible](../types/is_default_constructible.html)<T>::value;  
template<class T> constexpr bool is_trivially_default_constructible_v = |  [std::is_trivially_default_constructible](../types/is_default_constructible.html)<T>::value;  
template<class T> constexpr bool is_nothrow_default_constructible_v = |  [std::is_nothrow_default_constructible](../types/is_default_constructible.html)<T>::value;  
template<class T> constexpr bool is_copy_constructible_v = |  [std::is_copy_constructible](../types/is_copy_constructible.html)<T>::value;  
template<class T> constexpr bool is_trivially_copy_constructible_v = |  [std::is_trivially_copy_constructible](../types/is_copy_constructible.html)<T>::value;  
template<class T> constexpr bool is_nothrow_copy_constructible_v = |  [std::is_nothrow_copy_constructible](../types/is_copy_constructible.html)<T>::value;  
template<class T> constexpr bool is_move_constructible_v = |  [std::is_move_constructible](../types/is_move_constructible.html)<T>::value;  
template<class T> constexpr bool is_trivially_move_constructible_v = |  [std::is_trivially_move_constructible](../types/is_move_constructible.html)<T>::value;  
template<class T> constexpr bool is_nothrow_move_constructible_v = |  [std::is_nothrow_move_constructible](../types/is_move_constructible.html)<T>::value;  
template<class T, class U> constexpr bool is_assignable_v = |  [std::is_assignable](../types/is_assignable.html)<T, U>::value;  
template<class T, class U> constexpr bool is_trivially_assignable_v = |  [std::is_trivially_assignable](../types/is_assignable.html)<T, U>::value;  
template<class T, class U> constexpr bool is_nothrow_assignable_v = |  [std::is_nothrow_assignable](../types/is_assignable.html)<T, U>::value;  
template<class T> constexpr bool is_copy_assignable_v = |  [std::is_copy_assignable](../types/is_copy_assignable.html)<T>::value;  
template<class T> constexpr bool is_trivially_copy_assignable_v = |  [std::is_trivially_copy_assignable](../types/is_copy_assignable.html)<T>::value;  
template<class T> constexpr bool is_nothrow_copy_assignable_v = |  [std::is_nothrow_copy_assignable](../types/is_copy_assignable.html)<T>::value;  
template<class T> constexpr bool is_move_assignable_v = |  [std::is_move_assignable](../types/is_move_assignable.html)<T>::value;  
template<class T> constexpr bool is_trivially_move_assignable_v = |  [std::is_trivially_move_assignable](../types/is_move_assignable.html)<T>::value;  
template<class T> constexpr bool is_nothrow_move_assignable_v = |  [std::is_nothrow_move_assignable](../types/is_move_assignable.html)<T>::value;  
template<class T> constexpr bool is_destructible_v = |  [std::is_destructible](../types/is_destructible.html)<T>::value;  
template<class T> constexpr bool is_trivially_destructible_v = |  [std::is_trivially_destructible](../types/is_destructible.html)<T>::value;  
template<class T> constexpr bool is_nothrow_destructible_v = |  [std::is_nothrow_destructible](../types/is_destructible.html)<T>::value;  
template<class T> constexpr bool has_virtual_destructor_v = |  [std::has_virtual_destructor](../types/has_virtual_destructor.html)<T>::value;  
  
#####  Property queries   
  
---  
Variable template  |  Value   
Defined in header `[<experimental/type_traits>](https://en.cppreference.com/mwiki/index.php?title=cpp/header/experimental/type_traits&action=edit&redlink=1 "cpp/header/experimental/type traits \(page does not exist\)")`  
template<class T> constexpr [std::size_t](../types/size_t.html) alignment_of_v = |  [std::alignment_of](../types/alignment_of.html)<T>::value;  
template<class T> constexpr [std::size_t](../types/size_t.html) rank_v = |  [std::rank](../types/rank.html)<T>::value;  
template<class T, unsigned I = 0> constexpr [std::size_t](../types/size_t.html) extent_v = |  [std::extent](../types/extent.html)<T, I>::value;  
  
#####  Type relationships   
  
Variable template  |  Value   
Defined in header `[<experimental/type_traits>](https://en.cppreference.com/mwiki/index.php?title=cpp/header/experimental/type_traits&action=edit&redlink=1 "cpp/header/experimental/type traits \(page does not exist\)")`  
template<class T, class U> constexpr bool is_same_v = |  [std::is_same](../types/is_same.html)<T, U>::value;  
template<class Base, class Derived> constexpr bool is_base_of_v = |  [std::is_base_of](../types/is_base_of.html)<Base, Derived>::value;  
template<class From, class To> constexpr bool is_convertible_v = |  [std::is_convertible](../types/is_convertible.html)<From, To>::value;  
  
###  Other variable templates  
  
#####  [std::ratio](../numeric/ratio/ratio.html "cpp/numeric/ratio/ratio") comparison   
  
Variable template  |  Value   
Defined in header `[<experimental/ratio>](https://en.cppreference.com/mwiki/index.php?title=cpp/header/experimental/ratio&action=edit&redlink=1 "cpp/header/experimental/ratio \(page does not exist\)")`  
template<class R1, class R2> constexpr bool ratio_equal_v = |  [std::ratio_equal](../numeric/ratio/ratio_equal.html)<R1, R2>::value;  
template<class R1, class R2> constexpr bool ratio_not_equal_v = |  [std::ratio_not_equal](../numeric/ratio/ratio_not_equal.html)<R1, R2>::value;  
template<class R1, class R2> constexpr bool ratio_less_v = |  [std::ratio_less](../numeric/ratio/ratio_less.html)<R1, R2>::value;  
template<class R1, class R2> constexpr bool ratio_less_equal_v = |  [std::ratio_less_equal](../numeric/ratio/ratio_less_equal.html)<R1, R2>::value;  
template<class R1, class R2> constexpr bool ratio_greater_v = |  [std::ratio_greater](../numeric/ratio/ratio_greater.html)<R1, R2>::value;  
template<class R1, class R2> constexpr bool ratio_greater_equal_v = |  [std::ratio_greater_equal](../numeric/ratio/ratio_greater_equal.html)<R1, R2>::value;  
  
#####  Miscellaneous   
  
Variable template  |  Value   
Defined in header `[<experimental/tuple>](https://en.cppreference.com/mwiki/index.php?title=cpp/header/experimental/tuple&action=edit&redlink=1 "cpp/header/experimental/tuple \(page does not exist\)")`  
template<class T> constexpr [std::size_t](../types/size_t.html) tuple_size_v = |  [std::tuple_size](../utility/tuple_size.html)<T>::value;  
Defined in header `[<experimental/chrono>](https://en.cppreference.com/mwiki/index.php?title=cpp/header/experimental/chrono&action=edit&redlink=1 "cpp/header/experimental/chrono \(page does not exist\)")`  
template<class Rep> constexpr bool treat_as_floating_point_v = |  [std::chrono::treat_as_floating_point](../chrono/treat_as_floating_point.html)<Rep>::value;[1]  
Defined in header `[<experimental/system_error>](https://en.cppreference.com/mwiki/index.php?title=cpp/header/experimental/system_error&action=edit&redlink=1 "cpp/header/experimental/system error \(page does not exist\)")`  
template<class T> constexpr bool is_error_code_enum_v = |  [std::is_error_code_enum](../error/error_code/is_error_code_enum.html)<T>::value;  
template<class T> constexpr bool is_error_condition_enum_v = |  [std::is_error_condition_enum](../error/error_condition/is_error_condition_enum.html)<T>::value;  
Defined in header `[<experimental/functional>](../header/experimental/functional.html "cpp/header/experimental/functional")`  
template<class T> constexpr bool is_bind_expression_v = |  [std::is_bind_expression](../utility/functional/is_bind_expression.html)<T>::value;  
template<class T> constexpr int is_placeholder_v = |  [std::is_placeholder](../utility/functional/is_placeholder.html)<T>::value;  
Defined in header `[<experimental/memory>](https://en.cppreference.com/mwiki/index.php?title=cpp/header/experimental/memory&action=edit&redlink=1 "cpp/header/experimental/memory \(page does not exist\)")`  
template<class T, class Alloc> constexpr bool uses_allocator_v = |  [std::uses_allocator](../memory/uses_allocator.html)<T, Alloc>::value;  
  
### Notes

[1]: Defined in the `std::chrono::experimental` namespace. 
