* inspects the
  * [entity](basics.md)'s declared type
  * expression's type & value category  

## Contents

  * [1 Syntax](decltype.html#Syntax)
  * [2 Explanation](decltype.html#Explanation)
  * [3 Notes](decltype.html#Notes)
  * [4 Keywords](decltype.html#Keywords)
  * [5 Example](decltype.html#Example)
  * [6 References](decltype.html#References)
  * [7 See also](decltype.html#See_also)

### Syntax  
   
* `decltype (entity)`
  * if the argument == unparenthesized [id-expression](name.md) OR unparenthesized [class member access](operator_member_access.md) expression -> `decltype` == type of the entity named by this expression
    * if there is NO such entity OR argument names a set of overloaded functions -> the program is ill-formed
  * | C++17,
    * if the argument is an unparenthesized [id-expression](name.md) naming a [structured binding](structured_binding.md) -> `decltype` == _referenced type_ (== structured binding declaration specification)
  * | C++20
    * If the argument is an unparenthesized [id-expression](name.html "cpp/language/identifiers") naming a [constant template parameter](template_parameters.html#Constant_template_parameter "cpp/language/template parameters"), then decltype yields the type of the template parameter
      (after performing any necessary type deduction if the template parameter is declared with a placeholder type)
    * The type is non-const even if the entity is a template parameter object (which is a const object)
* `decltype (expression)`
  * if the argument == any other expression / 's type `T` &
    * expression's [value category](value_category.md) == [_xvalue_](value_category.md#xvalue) -> `decltype` == `T&&`
    * expression's [value category](value_category.md) == [_lvalue_](value_category.md#lvalue) -> `decltype` == `T&` 
    * expression's [value category](value_category.md) == [_prvalue_](value_category.md#prvalue) -> `decltype` == `T`
      * | C++17-,
        * if expression is a function call which returns a prvalue of class type or is a [comma expression](operator_other.md) whose right operand is such a function call, a temporary object is not introduced for that prvalue
      * | C++17,
        * if expression is a prvalue other than a (possibly parenthesized) [immediate invocation](consteval.md)(since C++20), a temporary object is not [materialized](implicit_cast.html#Temporary_materialization "cpp/language/implicit cast") from that prvalue: such prvalue has no result object
      * Because no temporary object is created, the type need not be [complete](incomplete_type.md) OR
        have an available [destructor](destructor.html "cpp/language/destructor"), and can be [abstract](abstract_class.html "cpp/language/abstract class")
      * This rule doesn't apply to sub-expressions: in decltype(f(g())), g() must have a complete type, but f() need not.
  
### Explanation


Note that if the name of an object is parenthesized, it is treated as an ordinary lvalue expression, thus decltype(x) and decltype((x)) are often different types. 

`decltype` is useful when declaring types that are difficult or impossible to declare using standard notation, like lambda-related types or types that depend on template parameters. 

### Notes

Feature-test macro | Value | Std | Feature   
---|---|---|---  
[`__cpp_decltype`](../experimental/feature_test.html#cpp_decltype "cpp/feature test") | [`200707L`](../compiler_support/11.html#cpp_decltype_200707L "cpp/compiler support/11") | (C++11) | decltype  
  
### Keywords

[`decltype`](../keywords/decltype.html "cpp/keyword/decltype")

### References

Extended content  
---  
  
  * C++23 standard (ISO/IEC 14882:2024): 



    

  * 9.2.9.5 Decltype specifiers [dcl.type.decltype] 



  * C++20 standard (ISO/IEC 14882:2020): 



    

  * 9.2.8.4 Decltype specifiers [dcl.type.decltype] 



  * C++17 standard (ISO/IEC 14882:2017): 



    

  * TBD Decltype specifiers [dcl.type.decltype] 



  * C++14 standard (ISO/IEC 14882:2014): 



    

  * TBD Decltype specifiers [dcl.type.decltype] 



  * C++11 standard (ISO/IEC 14882:2011): 



    

  * TBD Decltype specifiers [dcl.type.decltype] 

  
  
| This section is incomplete  
Reason: Requires correction. See: [Talk: Wrong References](https://en.cppreference.com/w/Talk%253Acpp/language/decltype.html#Wrong_References "Talk:cpp/language/decltype").   
---|---  
  
### See also

* [`auto` specifier ](auto.md)
  * (C++11) |  specifies a type deduced from an expression   
  ---|---  
  [ declval](../utility/declval.html "cpp/utility/declval")(C++11) |  obtains a reference to an object of the template type argument for use in an unevaluated context   
  (function template)   
  [ is_same](../types/is_same.html "cpp/types/is same")(C++11) |  checks if two types are the same   
  (class template)   
  [C documentation](../../c/language/typeof_unqual.html "c/language/typeof") for typeof
    *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
    *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
