
  


  
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
[common_reference](common_reference.html "cpp/types/common reference")(C++20)  
[underlying_type](underlying_type.html "cpp/types/underlying type")(C++11)  
[type_identity](type_identity.html "cpp/types/type identity")(C++20)  
[enable_if](enable_if.html "cpp/types/enable if")(C++11)  
**void_t**(C++17)  
  
[Compile-time rational arithmetic](../utility/ratio.html "cpp/numeric/ratio")  
Compile-time integer sequences  
[integer_sequence](../utility/integer_sequence.html "cpp/utility/integer sequence")(C++14)  
  


Defined in header `[<type_traits>](../header/type_traits.html "cpp/header/type traits")` |  |   
---|---|---  
template< class... >  
using void_t = void; |  |  (since C++17)  
| |   
  
Utility metafunction that maps a sequence of any types to the type void. This metafunction is a convenient way to leverage [SFINAE](../language/sfinae.html "cpp/language/sfinae") prior to C++20's [concepts](../language/constraints.html "cpp/language/constraints"), in particular for conditionally removing functions from the [candidate set](../language/overload_resolution.html "cpp/language/overload resolution") based on whether an expression is valid in the [unevaluated context](../language/expressions.html#Unevaluated_expressions "cpp/language/expressions") (such as operand to [`decltype`](../language/decltype.html "cpp/language/decltype") expression), allowing to exist separate function overloads or specializations based on supported operations. 

### Notes

This metafunction is used in template metaprogramming to detect ill-formed types in SFINAE context: 
    
    
    // primary template handles types that have no nested ::type member:
    template<class, class = void>
    struct has_type_member : [std::false_type](integral_constant.html) {};
     
    // specialization recognizes types that do have a nested ::type member:
    template<class T>
    struct has_type_member<T, std::void_t<typename T::type>> : [std::true_type](integral_constant.html) {};

It can also be used to detect validity of an expression: 
    
    
    // primary template handles types that do not support pre-increment:
    template<class, class = void>
    struct has_pre_increment_member : [std::false_type](integral_constant.html) {};
     
    // specialization recognizes types that do support pre-increment:
    template<class T>
    struct has_pre_increment_member<T,
               std::void_t<decltype(++[std::declval](../utility/declval.html)<T&>())>
           > : [std::true_type](integral_constant.html) {};

Until the resolution of [CWG issue 1558](https://cplusplus.github.io/CWG/issues/1558.html) (a C++11 defect), unused parameters in [alias templates](../language/type_alias.html "cpp/language/type alias") were not guaranteed to ensure SFINAE and could be ignored, so earlier compilers require a more complex definition of `void_t`, such as 
    
    
    template<typename... Ts>
    struct make_void { typedef void type; };
     
    template<typename... Ts>
    using void_t = typename make_void<Ts...>::type;

[Feature-test](../utility/feature_test.html "cpp/utility/feature test") macro | Value | Std | Feature   
---|---|---|---  
[`__cpp_lib_void_t`](../experimental/feature_test.html#cpp_lib_void_t "cpp/feature test") | [`201411L`](../compiler_support/17.html#cpp_lib_void_t_201411L "cpp/compiler support/17") | (C++17) | [`std::void_t`](void_t.html#Top)  
  
### Example

Run this code
    
    
    #include <iomanip>
    #include <iostream>
    #include <map>
    #include <type_traits>
    #include <vector>
     
    // Variable template that checks if a type has begin() and end() member functions
    template<typename, typename = void>
    constexpr bool is_range = false;
     
    template<typename T>
    constexpr bool is_range<T,
        std::void_t<decltype([std::declval](../utility/declval.html)<T>().begin()),
                    decltype([std::declval](../utility/declval.html)<T>().end())>> = true;
     
    // An iterator trait those value_type is the value_type of the iterated container,
    // supports even back_insert_iterator (where value_type is void)
    template<typename T, typename = void>
    struct iterator_trait : [std::iterator_traits](../iterator/iterator_traits.html)<T> {};
     
    template<typename T>
    struct iterator_trait<T, std::void_t<typename T::container_type>>
        : [std::iterator_traits](../iterator/iterator_traits.html)<typename T::container_type::iterator> {};
     
    class A {};
     
    #define SHOW(...) std::cout << std::setw(34) << #__VA_ARGS__ \
                                << " == " << __VA_ARGS__ << '\n'
     
    int main()
    {
        [std::cout](../io/cout.html) << [std::boolalpha](../io/manip/boolalpha.html) << [std::left](../io/manip/left.html);
     
        SHOW(is_range<[std::vector](../container/vector.html)<double>>);
        SHOW(is_range<[std::map](../container/map.html)<int, double>>);
        SHOW(is_range<double>);
        SHOW(is_range<A>);
     
        using container_t = [std::vector](../container/vector.html)<int>;
        container_t v;
     
        static_assert([std::is_same_v](is_same.html)<
            container_t::value_type,
            iterator_trait<decltype([std::begin](../iterator/begin.html)(v))>::value_type>);
     
        static_assert([std::is_same_v](is_same.html)<
            container_t::value_type,
            iterator_trait<decltype([std::back_inserter](../iterator/back_inserter.html)(v))>::value_type>);
    }

Output: 
    
    
    is_range<std::vector<double>>   == true
    is_range<std::map<int, double>> == true
    is_range<double>                == false
    is_range<A>                     == false

### See also

[ enable_if](enable_if.html "cpp/types/enable if")(C++11) |  conditionally [removes](../language/sfinae.html "cpp/language/sfinae") a function overload or template specialization from overload resolution   
(class template)   
---|---
  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
