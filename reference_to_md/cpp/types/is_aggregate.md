
  


  
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
**is_aggregate**(C++17)  
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
  
  
  
  
  
  
  
  
  
  
  


Defined in header `[<type_traits>](../header/type_traits.html "cpp/header/type traits")` |  |   
---|---|---  
template< class T >  
struct is_aggregate; |  |  (since C++17)  
| |   
  
`std::is_aggregate` is a [UnaryTypeTrait](../named_req/UnaryTypeTrait.html "cpp/named req/UnaryTypeTrait"). 

If `T` is an [aggregate type](../language/aggregate_initialization.html "cpp/language/aggregate initialization"), provides the member constant `value` equal true. For any other type, `value` is false. 

If `T` is an incomplete type other than an array type or (possibly cv-qualified) void, the behavior is undefined. 

If the program adds specializations for `std::is_aggregate` or `std::is_aggregate_v`, the behavior is undefined. 

## Contents

  * [1 Template parameters](is_aggregate.html#Template_parameters)
  * [2 Helper variable template](is_aggregate.html#Helper_variable_template)
  * [3 Inherited from std::integral_constant](is_aggregate.html#Inherited_from_std::integral_constant)
    * [3.1 Member constants](is_aggregate.html#Member_constants)
    * [3.2 Member functions](is_aggregate.html#Member_functions)
    * [3.3 Member types](is_aggregate.html#Member_types)
    * [3.4 Notes](is_aggregate.html#Notes)
    * [3.5 Example](is_aggregate.html#Example)
    * [3.6 Defect reports](is_aggregate.html#Defect_reports)

  
---  
  
### Template parameters

T  |  \-  |  a type to check   
---|---|---  
  
### Helper variable template

template< class T >  
constexpr bool is_aggregate_v = is_aggregate<T>::value; |  |  (since C++17)  
---|---|---  
| |   
  


##  Inherited from [ std::integral_constant](integral_constant.html "cpp/types/integral constant")

###  Member constants

value[static] |  true if `T` is an aggregate type, false otherwise   
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

[Feature-test](../utility/feature_test.html "cpp/utility/feature test") macro | Value | Std | Feature   
---|---|---|---  
[`__cpp_lib_is_aggregate`](../experimental/feature_test.html#cpp_lib_is_aggregate "cpp/feature test") | [`201703L`](../compiler_support/17.html#cpp_lib_is_aggregate_201703L "cpp/compiler support/17") | (C++17) | `std::is_agregate`  
  
### Example

Run this code
    
    
    #include <algorithm>
    #include <cassert>
    #include <cstddef>
    #include <new>
    #include <string_view>
    #include <type_traits>
    #include <utility>
     
    // Constructs a T at the uninitialized memory pointed to by p using
    // list-initialization for aggregates and non-list initialization otherwise.
    template<class T, class... Args>
    T* construct(T* p, Args&&... args)
    {
        if constexpr (std::is_aggregate_v<T>)
            return ::new (static_cast<void*>(p)) T{[std::forward](../utility/forward.html)<Args>(args)...};
        else
            return ::new (static_cast<void*>(p)) T([std::forward](../utility/forward.html)<Args>(args)...);
    }
     
    struct A { int x, y; };
    static_assert(std::is_aggregate_v<A>);
     
    struct B
    {
        int i;
        [std::string_view](../string/basic_string_view.html) str;
     
        B(int i, [std::string_view](../string/basic_string_view.html) str) : i(i), str(str) {}
    };
    static_assert(not std::is_aggregate_v<B>);
     
    template <typename... Ts>
    using aligned_storage_t = alignas(Ts...) [std::byte](byte.html)[[std::max](../algorithm/max.html)({sizeof(Ts)...})];
     
    int main()
    {
        aligned_storage_t<A, B> storage;
     
        A& a = *construct(reinterpret_cast<A*>(&storage), 1, 2);
        [assert](../error/assert.html)(a.x == 1 and a.y == 2);
     
        B& b = *construct(reinterpret_cast<B*>(&storage), 3, "4");
        [assert](../error/assert.html)(b.i == 3 and b.str == "4");
    }

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 3823](https://cplusplus.github.io/LWG/issue3823) | C++17  | The behavior is undefined if `T` is an array type but  
`std::remove_all_extents_t<T>` is an incomplete type.  | The behavior is defined regardless of the  
incompleteness of `std::remove_all_extents_t<T>`  
as long as `T` is an array type. 
  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
