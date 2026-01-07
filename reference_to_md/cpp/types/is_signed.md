* defined | header [`<type_traits>`](../header/type_traits.md)   

* requirements
  * C++11 

```c++
template< class T >  
struct is_signed;
```
  
* `std::is_signed`
  * == [UnaryTypeTrait](../named_req/UnaryTypeTrait.md) 

* TODO: Checks whether `T` is a signed arithmetic type. 

  * If [std::is_arithmetic](is_arithmetic.html)<T>::value is true, provides the member constant `value` equal to T(-1) < T(0). 
  * Otherwise, provides the member constant `value` equal to false. 



If the program adds specializations for `std::is_signed` or `std::is_signed_v`, the behavior is undefined. 

## Contents

  * [1 Template parameters](is_signed.html#Template_parameters)
  * [2 Helper variable template](is_signed.html#Helper_variable_template)
  * [3 Inherited from std::integral_constant](is_signed.html#Inherited_from_std::integral_constant)
    * [3.1 Member constants](is_signed.html#Member_constants)
    * [3.2 Member functions](is_signed.html#Member_functions)
    * [3.3 Member types](is_signed.html#Member_types)
    * [3.4 Possible implementation](is_signed.html#Possible_implementation)
    * [3.5 Example](is_signed.html#Example)
    * [3.6 Defect reports](is_signed.html#Defect_reports)
    * [3.7 See also](is_signed.html#See_also)

### Template parameters

T  |  \-  |  a type to check   
---|---|---  
  
### Helper variable template

template< class T >  
constexpr bool is_signed_v = is_signed<T>::value; |  |  (since C++17)  
---|---|---  
| |   
  


##  Inherited from [ std::integral_constant](integral_constant.html "cpp/types/integral constant")

###  Member constants

value[static] |  true if `T` is a signed arithmetic type, false otherwise   
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
  
### Possible implementation
    
    
    namespace detail
    {
        template<typename T, bool = [std::is_arithmetic](is_arithmetic.html)<T>::value>
        struct is_signed : [std::integral_constant](integral_constant.html)<bool, T(-1) < T(0)> {};
     
        template<typename T>
        struct is_signed<T, false> : [std::false_type](integral_constant.html) {};
    }
     
    template<typename T>
    struct is_signed : detail::is_signed<T>::type {};  


### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 2197](https://cplusplus.github.io/LWG/issue2197) | C++11  | `value` could be true even if `T` is not an arithmetic type  | can only be false in this case   
  
### See also

[ is_unsigned](is_unsigned.html "cpp/types/is unsigned")(C++11) |  checks if a type is an unsigned arithmetic type   
(class template)   
---|---  
[ is_signed](numeric_limits/is_signed.html "cpp/types/numeric limits/is signed")[static] |  identifies signed types   
(public static member constant of `std::numeric_limits<T>`)   
[ is_arithmetic](is_arithmetic.html "cpp/types/is arithmetic")(C++11) |  checks if a type is an arithmetic type   
(class template)   
[ make_signed](make_signed.html "cpp/types/make signed")(C++11) |  obtains the corresponding signed type for the given integral type   
(class template)   
[ make_unsigned](make_unsigned.html "cpp/types/make unsigned")(C++11) |  obtains the corresponding signed type for the given integral type   
(class template) 
