
  


  
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
**is_const**(C++11)  
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
  
  
  
  
  
  
  
  
  
  
  


Defined in header `[<type_traits>](../header/type_traits.html "cpp/header/type traits")` |  |   
---|---|---  
template< class T >  
struct is_const; |  |  (since C++11)  
| |   
  
`std::is_const` is a [UnaryTypeTrait](../named_req/UnaryTypeTrait.html "cpp/named req/UnaryTypeTrait"). 

If `T` is a const-qualified type (that is, const, or const volatile), provides the member constant value equal to true. For any other type, value is false. 

If the program adds specializations for `std::is_const` or `std::is_const_v`, the behavior is undefined. 

## Contents

  * [1 Template parameters](is_const.html#Template_parameters)
  * [2 Helper variable template](is_const.html#Helper_variable_template)
  * [3 Inherited from std::integral_constant](is_const.html#Inherited_from_std::integral_constant)
    * [3.1 Member constants](is_const.html#Member_constants)
    * [3.2 Member functions](is_const.html#Member_functions)
    * [3.3 Member types](is_const.html#Member_types)
    * [3.4 Notes](is_const.html#Notes)
    * [3.5 Possible implementation](is_const.html#Possible_implementation)
    * [3.6 Example](is_const.html#Example)
    * [3.7 See also](is_const.html#See_also)

  
---  
  
### Template parameters

T  |  \-  |  a type to check   
---|---|---  
  
### Helper variable template

template< class T >  
constexpr bool is_const_v = is_const<T>::value; |  |  (since C++17)  
---|---|---  
| |   
  


##  Inherited from [ std::integral_constant](integral_constant.html "cpp/types/integral constant")

###  Member constants

value[static] |  true if `T` is a const-qualified type, false otherwise   
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

If T is a reference type then is_const<T>::value is always false. The proper way to check a potentially-reference type for constness is to remove the reference: is_const<typename remove_reference<T>::type>. 

### Possible implementation
    
    
    template<class T> struct is_const          : [std::false_type](integral_constant.html) {};
    template<class T> struct is_const<const T> : [std::true_type](integral_constant.html) {};  
  
---  
  
### Example

Run this code
    
    
    #include <type_traits>
     
    static_assert([std::is_same_v](is_same.html)<const int*, int const*>,
        "Remember, constness binds tightly inside pointers.");
    static_assert(!std::is_const_v<int>);
    static_assert(std::is_const_v<const int>);
    static_assert(!std::is_const_v<int*>);
    static_assert(std::is_const_v<int* const>,
        "Because the pointer itself can't be changed but the int pointed at can.");
    static_assert(!std::is_const_v<const int*>,
        "Because the pointer itself can be changed but not the int pointed at.");
    static_assert(!std::is_const_v<const int&>);
    static_assert(std::is_const_v<[std::remove_reference_t](remove_reference.html)<const int&>>);
     
    struct S
    {
        void foo() const {}
        void bar() const {}
    };
     
    int main()
    {
        // A const member function is const in a different way:
     
        static_assert(!std::is_const_v<decltype(&S::foo)>,
            "Because &S::foo is a pointer.");
     
        using S_mem_fun_ptr = void(S::*)() const;
     
        S_mem_fun_ptr sfp = &S::foo;
        sfp = &S::bar; // OK, can be re-pointed
        static_assert(!std::is_const_v<decltype(sfp)>,
            "Because sfp is the same pointer type and thus can be re-pointed.");
     
        const S_mem_fun_ptr csfp = &S::foo;
        // csfp = &S::bar; // Error
        static_assert(std::is_const_v<decltype(csfp)>,
            "Because csfp cannot be re-pointed.");
    }

### See also

[ is_volatile](is_volatile.html "cpp/types/is volatile")(C++11) |  checks if a type is volatile-qualified   
(class template)   
---|---  
[ as_const](../utility/as_const.html "cpp/utility/as const")(C++17) |  obtains a reference to const to its argument   
(function template) 
