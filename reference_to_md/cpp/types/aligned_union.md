
  


  
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
**aligned_union**(C++11)(deprecated in C++23)  
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
[void_t](void_t.html "cpp/types/void t")(C++17)  
  
[Compile-time rational arithmetic](../utility/ratio.html "cpp/numeric/ratio")  
Compile-time integer sequences  
[integer_sequence](../utility/integer_sequence.html "cpp/utility/integer sequence")(C++14)  
  


Defined in header `[<type_traits>](../header/type_traits.html "cpp/header/type traits")` |  |   
---|---|---  
template< [std::size_t](size_t.html) Len, class... Types >  
struct aligned_union; |  |  (since C++11)   
(deprecated in C++23)  
| |   
  
Provides the nested type `type`, which is a [trivial](../named_req/TrivialType.html "cpp/named req/TrivialType") [standard-layout](../named_req/StandardLayoutType.html "cpp/named req/StandardLayoutType") type of a size and alignment suitable for use as uninitialized storage for an object of any of the types listed in `Types`. The size of the storage is at least `Len`. `std::aligned_union` also determines the strictest (largest) alignment requirement among all `Types` and makes it available as the constant `alignment_value`. 

If sizeof...(Types) == 0 or if any of the types in `Types` is not a complete object type, the behavior is undefined. 

It is implementation-defined whether any [extended alignment](../language/objects.html#Alignment "cpp/language/object") is supported. 

If the program adds specializations for `std::aligned_union`, the behavior is undefined. 

## Contents

  * [1 Member types](aligned_union.html#Member_types)
  * [2 Helper types](aligned_union.html#Helper_types)
  * [3 Member constants](aligned_union.html#Member_constants)
  * [4 Possible implementation](aligned_union.html#Possible_implementation)
  * [5 Example](aligned_union.html#Example)
  * [6 Defect reports](aligned_union.html#Defect_reports)
  * [7 See also](aligned_union.html#See_also)

  
---  
  
### Member types

Name  |  Definition   
---|---  
`type` |  a trivial and standard-layout type suitable for storage of any type from `Types`  
  
### Helper types

template< [std::size_t](size_t.html) Len, class... Types >  
using aligned_union_t = typename aligned_union<Len,Types...>::type; |  |  (since C++14)   
(deprecated in C++23)  
---|---|---  
| |   
  
### Member constants

alignment_value[static] |  the strictest alignment requirement of all `Types`   
(public static member constant)  
---|---  
  
### Possible implementation
    
    
    #include <algorithm>
     
    template<[std::size_t](size_t.html) Len, class... Types>
    struct aligned_union
    {
        static constexpr [std::size_t](size_t.html) alignment_value = [std::max](../algorithm/max.html)({alignof(Types)...});
     
        struct type
        {
            alignas(alignment_value) char _s[[std::max](../algorithm/max.html)({Len, sizeof(Types)...})];
        };
    };  
  
---  
  
### Example

Run this code
    
    
    #include <iostream>
    #include <string>
    #include <type_traits>
     
    int main()
    {
        [std::cout](../io/cout.html) << sizeof(std::aligned_union_t<0, char>) << ' ' // 1
                  << sizeof(std::aligned_union_t<2, char>) << ' ' // 2
                  << sizeof(std::aligned_union_t<2, char[3]>) << ' ' // 3 (!)
                  << sizeof(std::aligned_union_t<3, char[4]>) << ' ' // 4
                  << sizeof(std::aligned_union_t<1, char, int, double>) << ' '    // 8
                  << sizeof(std::aligned_union_t<12, char, int, double>) << '\n'; // 16 (!)
     
        using var_t = std::aligned_union<16, int, [std::string](../string/basic_string.html)>;
     
        [std::cout](../io/cout.html) << "var_t::alignment_value = " << var_t::alignment_value << '\n'
                  << "sizeof(var_t::type) = " << sizeof(var_t::type) << '\n';
     
        var_t::type aligned_storage;
        int* int_ptr = new(&aligned_storage) int(42); // placement new
        [std::cout](../io/cout.html) << "*int_ptr = " << *int_ptr << '\n';
     
        [std::string](../string/basic_string.html)* string_ptr = new(&aligned_storage) [std::string](../string/basic_string.html)("bar");
        [std::cout](../io/cout.html) << "*string_ptr = " << *string_ptr << '\n';
        *string_ptr = "baz";
        [std::cout](../io/cout.html) << "*string_ptr = " << *string_ptr << '\n';
        string_ptr->~basic_string();
    }

Possible output: 
    
    
    1 2 3 4 8 16
    var_t::alignment_value = 8
    sizeof(var_t::type) = 32
    *int_ptr = 42
    *string_ptr = bar
    *string_ptr = baz

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 2979](https://cplusplus.github.io/LWG/issue2979) | C++11  | complete type was not required  | requires complete types   
  
### See also

[ alignment_of](alignment_of.html "cpp/types/alignment of")(C++11) |  obtains the type's alignment requirements   
(class template)   
---|---  
[ aligned_storage](aligned_storage.html "cpp/types/aligned storage")(since C++11)(deprecated in C++23) |  defines the type suitable for use as uninitialized storage for types of given size   
(class template) 
