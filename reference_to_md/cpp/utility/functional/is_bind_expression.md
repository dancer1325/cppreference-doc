 
  


  
  
  
  
  
  
  
  
  
  
  
  


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
**is_bind_expression**(C++11)  
[is_placeholder](is_placeholder.html "cpp/utility/functional/is placeholder")(C++11)  
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
struct is_bind_expression; |  |  (since C++11)  
| |   
  
If `T` is a type produced by a call to [std::bind](bind.html "cpp/utility/functional/bind") (but not [std::bind_front](bind_front.html "cpp/utility/functional/bind front") or [std::bind_back](bind_front.html "cpp/utility/functional/bind front")), this template is derived from [std::true_type](../../types/integral_constant.html "cpp/types/integral constant"). For any other type (unless user-specialized), this template is derived from [std::false_type](../../types/integral_constant.html "cpp/types/integral constant"). 

A program may specialize this template for a [program-defined type](../../language/type-id.html#Program-defined_type "cpp/language/type") `T` to implement [UnaryTypeTrait](../../named_req/UnaryTypeTrait.html "cpp/named req/UnaryTypeTrait") with base characteristic of [std::true_type](../../types/integral_constant.html "cpp/types/integral constant") to indicate that `T` should be treated by [std::bind](bind.html "cpp/utility/functional/bind") as if it were the type of a bind subexpression: when a bind-generated function object is invoked, a bound argument of this type will be invoked as a function object and will be given all the unbound arguments passed to the bind-generated object. 

## Contents

  * [1 Helper variable template](is_bind_expression.html#Helper_variable_template)
  * [2 Inherited from std::integral_constant](is_bind_expression.html#Inherited_from_std::integral_constant)
    * [2.1 Member constants](is_bind_expression.html#Member_constants)
    * [2.2 Member functions](is_bind_expression.html#Member_functions)
    * [2.3 Member types](is_bind_expression.html#Member_types)
    * [2.4 Example](is_bind_expression.html#Example)
    * [2.5 Defect reports](is_bind_expression.html#Defect_reports)
    * [2.6 See also](is_bind_expression.html#See_also)

  
---  
  
### Helper variable template

template< class T >  
constexpr bool is_bind_expression_v = is_bind_expression<T>::value; |  |  (since C++17)  
---|---|---  
| |   
  


##  Inherited from [ std::integral_constant](../../types/integral_constant.html "cpp/types/integral constant")

###  Member constants

value[static] |  true if `T` is a function object generated by [std::bind](bind.html "cpp/utility/functional/bind"), false otherwise   
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
`type` |  [std::integral_constant](../../types/integral_constant.html)<bool, value>  
  
### Example

Run this code
    
    
    #include <functional>
    #include <iostream>
    #include <type_traits>
     
    struct MyBind
    {
        typedef int result_type;
        int operator()(int a, int b) const { return a + b; }
    };
     
    namespace std
    {
        template<>
        struct is_bind_expression<MyBind> : public true_type {};
    }
     
    int f(int n1, int n2)
    {
        return n1 + n2;
    }
     
    int main()
    {
        // as if bind(f, bind(MyBind(), _1, _2), 2)
        auto b = [std::bind](bind.html)(f, MyBind(), 2); 
     
        [std::cout](../../io/cout.html) << "Adding 2 to the sum of 10 and 11 gives " << b(10, 11) << '\n';
    }

Output: 
    
    
    Adding 2 to the sum of 10 and 11 gives 23

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 2010](https://cplusplus.github.io/LWG/issue2010) | C++11  | program-defined specializations could  
only be derived from [std::false_type](../../types/integral_constant.html "cpp/types/integral constant") | can be derived from  
[std::true_type](../../types/integral_constant.html "cpp/types/integral constant")  
  
### See also

[ bind](bind.html "cpp/utility/functional/bind")(C++11) |  binds one or more arguments to a function object   
(function template)   
---|---
