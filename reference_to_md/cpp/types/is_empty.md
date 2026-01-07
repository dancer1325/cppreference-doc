
  


  
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
**is_empty**(C++11)  
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
  
  
  
  
  
  
  
  
  
  
  


Defined in header `[<type_traits>](../header/type_traits.html "cpp/header/type traits")` |  |   
---|---|---  
template< class T >  
struct is_empty; |  |  (since C++11)  
| |   
  
`std::is_empty` is a [UnaryTypeTrait](../named_req/UnaryTypeTrait.html "cpp/named req/UnaryTypeTrait"). 

If `T` is an empty type (that is, a non-union class type with no non-static data members other than bit-fields of size 0, no virtual functions, no virtual base classes, and no non-empty base classes), provides the member constant `value` equal to true. For any other type, `value` is false. 

If `T` is an incomplete non-union class type, the behavior is undefined. 

If the program adds specializations for `std::is_empty` or `std::is_empty_v`, the behavior is undefined. 

## Contents

  * [1 Template parameters](is_empty.html#Template_parameters)
  * [2 Helper variable template](is_empty.html#Helper_variable_template)
  * [3 Inherited from std::integral_constant](is_empty.html#Inherited_from_std::integral_constant)
    * [3.1 Member constants](is_empty.html#Member_constants)
    * [3.2 Member functions](is_empty.html#Member_functions)
    * [3.3 Member types](is_empty.html#Member_types)
    * [3.4 Notes](is_empty.html#Notes)
    * [3.5 Example](is_empty.html#Example)
    * [3.6 Defect reports](is_empty.html#Defect_reports)
    * [3.7 See also](is_empty.html#See_also)

  
---  
  
### Template parameters

T  |  \-  |  a type to check   
---|---|---  
  
### Helper variable template

template< class T >  
constexpr bool is_empty_v = is_empty<T>::value; |  |  (since C++17)  
---|---|---  
| |   
  


##  Inherited from [ std::integral_constant](integral_constant.html "cpp/types/integral constant")

###  Member constants

value[static] |  true if `T` is an empty class type, false otherwise   
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

Inheriting from empty base classes usually does not increase the size of a class due to [empty base optimization](../language/ebo.html "cpp/language/ebo"). 

`std::is_empty<T>` and all other type traits are empty classes. 

### Example

Run this code
    
    
    #include <iostream>
    #include <type_traits>
     
    struct A {};
    static_assert(std::is_empty_v<A> == true);
     
    struct B { int m; };
    static_assert(std::is_empty_v<B> == false);
     
    struct C { static int m; };
    static_assert(std::is_empty_v<C> == true);
     
    struct D { virtual ~D(); };
    static_assert(std::is_empty_v<D> == false);
     
    union E {};
    static_assert(std::is_empty_v<E> == false);
     
    struct F { [[no_unique_address]] E e; };
     
    struct G
    {
        int:0;
        // C++ standard allow "as a special case, an unnamed bit-field with a width of zero
        // specifies alignment of the next bit-field at an allocation unit boundary.
        // Only when declaring an unnamed bit-field may the width be zero."
    };
    static_assert(std::is_empty_v<G>); // holds only unnamed bit-fields of zero width
     
    int main()
    {
        [std::cout](../io/cout.html) << [std::boolalpha](../io/manip/boolalpha.html);
        [std::cout](../io/cout.html) << "F: " << std::is_empty_v<F> << '\n'; // the result is ABI-dependent
    }

Possible output: 
    
    
    F: true

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 2015](https://cplusplus.github.io/LWG/issue2015) | C++11  | the behavior was undefined if  
`T` is an incomplete union type  | the base characteristic is  
[std::false_type](integral_constant.html "cpp/types/integral constant") in this case   
  
### See also

[ is_class](is_class.html "cpp/types/is class")(C++11) |  checks if a type is a non-union class type   
(class template)   
---|---
