
  


  
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
**type_identity**(C++20)  
[enable_if](enable_if.html "cpp/types/enable if")(C++11)  
[void_t](void_t.html "cpp/types/void t")(C++17)  
  
[Compile-time rational arithmetic](../utility/ratio.html "cpp/numeric/ratio")  
Compile-time integer sequences  
[integer_sequence](../utility/integer_sequence.html "cpp/utility/integer sequence")(C++14)  
  


Defined in header `[<type_traits>](../header/type_traits.html "cpp/header/type traits")` |  |   
---|---|---  
template< class T >  
struct type_identity; |  |  (since C++20)  
| |   
  
Provides the member typedef `type` that names `T` (i.e., the identity transformation). 

If the program adds specializations for `std::type_identity`, the behavior is undefined. 

## Contents

  * [1 Member types](type_identity.html#Member_types)
  * [2 Helper types](type_identity.html#Helper_types)
  * [3 Possible implementation](type_identity.html#Possible_implementation)
  * [4 Notes](type_identity.html#Notes)
  * [5 Example](type_identity.html#Example)
  * [6 See also](type_identity.html#See_also)

  
---  
  
### Member types

Name  |  Definition   
---|---  
`type` |  `T`  
  
### Helper types

template< class T >  
using type_identity_t = type_identity<T>::type; |  |  (since C++20)  
---|---|---  
| |   
  
### Possible implementation
    
    
    template<class T>
    struct type_identity { using type = T; };  
  
---  
  
### Notes 

`std::type_identity` can be used to establish [non-deduced contexts](../language/template_argument_deduction.html#Non-deduced_contexts "cpp/language/template argument deduction") in template argument deduction. 

[Feature-test](../utility/feature_test.html "cpp/utility/feature test") macro | Value | Std | Feature   
---|---|---|---  
[`__cpp_lib_type_identity`](../experimental/feature_test.html#cpp_lib_type_identity "cpp/feature test") | [`201806L`](../compiler_support/20.html#cpp_lib_type_identity_201806L "cpp/compiler support/20") | (C++20) | `std::type_identity`  
  
### Example

Run this code
    
    
    #include <iostream>
    #include <type_traits>
     
    template<class T>
    T foo(T a, T b) { return a + b; }
     
    template<class T>
    T bar(T a, std::type_identity_t<T> b) { return a + b; }
     
    int main()
    {
        // foo(4.2, 1); // error, deduced conflicting types for 'T'
        [std::cout](../io/cout.html) << bar(4.2, 1) << '\n';  // OK, calls bar<double>
    }

Output: 
    
    
    5.2

### See also

[ identity](../utility/functional/identity.html "cpp/utility/functional/identity")(C++20) |  function object that returns its argument unchanged   
(class)   
---|---
  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
