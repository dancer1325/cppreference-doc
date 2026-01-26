 
  


  
  
  
  
  
  
  
  
  
  
  
  


[Function objects](../../functional.html "cpp/utility/functional")

| [Function wrappers](../../functional.html#Function_wrappers "cpp/utility/functional")  
---  
[function](function.html "cpp/utility/functional/function")(C++11)  
[move_only_function](move_only_function.html "cpp/utility/functional/move only function")(C++23)  
[copyable_function](copyable_function.html "cpp/utility/functional/copyable function")(C++26)  
[function_ref](function_ref.html "cpp/utility/functional/function ref")(C++26)  
[mem_fn](mem_fn.html "cpp/utility/functional/mem fn")(C++11)  
[bad_function_call](bad_function_call.html "cpp/utility/functional/bad function call")(C++11)  
  
| [Partial function application](../../functional.html#Partial_function_application "cpp/utility/functional")  
---  
[bind_frontbind_back](bind_front.html "cpp/utility/functional/bind front")(C++20)(C++23)  
[bind](bind.html "cpp/utility/functional/bind")(C++11)  
[is_bind_expression](is_bind_expression.html "cpp/utility/functional/is bind expression")(C++11)  
**is_placeholder**(C++11)  
[_1, _2, _3, ...](placeholders.html "cpp/utility/functional/placeholders")(C++11)  
  
| [Function invocation](../../functional.html#Function_invocation "cpp/utility/functional")  
---  
[invokeinvoke_r](invoke.html "cpp/utility/functional/invoke")(C++17)(C++23)  
Identity function object  
[identity](identity.html "cpp/utility/functional/identity")(C++20)  
  
| [Reference wrappers](../../functional.html#Reference_wrappers "cpp/utility/functional")  
---  
[reference_wrapper](reference_wrapper.html "cpp/utility/functional/reference wrapper")(C++11)  
[refcref](ref.html "cpp/utility/functional/ref")(C++11)(C++11)  
[unwrap_referenceunwrap_ref_decay](unwrap_reference.html "cpp/utility/functional/unwrap reference")(C++20)(C++20)  
  
| [Operator wrappers](../../functional.html#Operator_function_objects "cpp/utility/functional")  
---  
| [plus](plus.html "cpp/utility/functional/plus")  
---  
[minus](minus.html "cpp/utility/functional/minus")  
[negate](negate.html "cpp/utility/functional/negate")  
[multiplies](multiplies.html "cpp/utility/functional/multiplies")  
[divides](divides.html "cpp/utility/functional/divides")  
[modulus](modulus.html "cpp/utility/functional/modulus")  
[bit_and](bit_and.html "cpp/utility/functional/bit and")  
[bit_or](bit_or.html "cpp/utility/functional/bit or")  
[bit_not](bit_not.html "cpp/utility/functional/bit not")(C++14)  
[bit_xor](bit_xor.html "cpp/utility/functional/bit xor")  
  
| [equal_to](equal_to.html "cpp/utility/functional/equal to")  
---  
  
  
  
  
  
  
  


Defined in header `[<functional>](../../header/functional.html "cpp/header/functional")` |  |   
---|---|---  
template< class T >  
struct is_placeholder; |  |  (since C++11)  
| |   
  
If `T` is the type of a standard placeholder `(_1, _2, _3, ...)`, then this template is derived from [std::integral_constant](../../types/integral_constant.html)<int, 1>, [std::integral_constant](../../types/integral_constant.html)<int, 2>, [std::integral_constant](../../types/integral_constant.html)<int, 3>, respectively. 

If `T` is not a standard placeholder type, this template is derived from [std::integral_constant](../../types/integral_constant.html)<int, 0>. 

A program may specialize this template for a [program-defined type](../../language/type-id.html#Program-defined_type "cpp/language/type") `T` to implement [UnaryTypeTrait](../../named_req/UnaryTypeTrait.html "cpp/named req/UnaryTypeTrait") with base characteristic of [std::integral_constant](../../types/integral_constant.html)<int, N> with positive N to indicate that `T` should be treated as Nth placeholder type. 

[std::bind](bind.html "cpp/utility/functional/bind") uses `std::is_placeholder` to detect placeholders for unbound arguments. 

## Contents

  * [1 Helper variable template](is_placeholder.html#Helper_variable_template)
  * [2 Inherited from std::integral_constant](is_placeholder.html#Inherited_from_std::integral_constant)
    * [2.1 Member constants](is_placeholder.html#Member_constants)
    * [2.2 Member functions](is_placeholder.html#Member_functions)
    * [2.3 Member types](is_placeholder.html#Member_types)
    * [2.4 Example](is_placeholder.html#Example)
    * [2.5 See also](is_placeholder.html#See_also)

  
---  
  
### Helper variable template

template< class T >  
constexpr int is_placeholder_v = is_placeholder<T>::value; |  |  (since C++17)  
---|---|---  
| |   
  
##  Inherited from [ std::integral_constant](../../types/integral_constant.html "cpp/types/integral constant")

###  Member constants

value[static] |  placeholder value or ​0​ for non-placeholder types   
(public static member constant)  
---|---  
  
###  Member functions

operator int |  converts the object to int, returns value   
(public member function)  
---|---  
operator()(C++14) |  returns value   
(public member function)  
  
###  Member types

Type  |  Definition   
---|---  
`value_type` |  int  
`type` |  [std::integral_constant](../../types/integral_constant.html)<int, value>  
  
### Example

Run this code
    
    
    #include <functional>
    #include <iostream>
    #include <type_traits>
     
    struct My_2 {} my_2;
     
    namespace std
    {
        template<>
        struct is_placeholder<My_2> : public integral_constant<int, 2> {};
    }
     
    int f(int n1, int n2)
    {
        return n1 + n2;
    }
     
    int main()
    {
        [std::cout](../../io/cout.html) << "Standard placeholder _5 is for the argument number "
                  << std::is_placeholder_v<decltype(std::placeholders::_5)>
                  << '\n';
     
        auto b = [std::bind](bind.html)(f, my_2, 2);
        [std::cout](../../io/cout.html) << "Adding 2 to 11 selected with a custom placeholder gives " 
                  << b(10, 11) // the first argument, namely 10, is ignored
                  << '\n';
    }

Output: 
    
    
    Standard placeholder _5 is for the argument number 5
    Adding 2 to 11 selected with a custom placeholder gives 13

### See also

[ bind](bind.html "cpp/utility/functional/bind")(C++11) |  binds one or more arguments to a function object   
(function template)   
---|---  
[ _1, _2, _3, _4, ...](placeholders.html "cpp/utility/functional/placeholders")(C++11) |  placeholders for the unbound arguments in a `std::bind` expression   
(constant) 
