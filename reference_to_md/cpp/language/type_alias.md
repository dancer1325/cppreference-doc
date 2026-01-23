* Type alias 
  * == name / refers -- to a -- PREVIOUSLY defined type
    * == 👀[`typedef`](typedef.md) 👀
    * ❌!= create a NEW type❌
    * ❌!= change the meaning of an EXISTING type❌

* Alias template
  * == name / refers -- to a -- family of types 

## Contents

  * [1 Syntax](type_alias.html#Syntax)
  * [2 Explanation](type_alias.html#Explanation)
  * [3 Notes](type_alias.html#Notes)
  * [4 Keywords](type_alias.html#Keywords)
  * [5 Example](type_alias.html#Example)
  * [6 Defect reports](type_alias.html#Defect_reports)
  * [7 See also](type_alias.html#See_also)

### Syntax 

#### (1)
```c++
using identifier attr = type-id
```
* `attr`
  * OPTIONAL
* `identifier`
  * refers -- to -- `type-id`

* used |
  * block scope
  * class scope
  * namespace scope

#### (2)
```c++
template < template-parameter-list >
using identifier attr = type-id ;
```
* `attr`
  * OPTIONAL

* == alias template
  * | specialize it,
    * == substitute the alias template's template arguments -- for the -- template parameters | type-id


#### (3)

```c++
template < template-parameter-list > requires constraint
using identifier attr = type-id ;
```

* `attr`
  * OPTIONAL
* | C++20
  
* == alias template


### Explanation

* `attr`
  * optional sequence of any number of [attributes](attributes.html "cpp/language/attributes")  
* `identifier`
  * name that is introduced by this declaration, which becomes either a type name (1) or a template name (2)  
* `template-parameter-list`
  * [template parameter list](template_parameters.html "cpp/language/template parameters"), as in [template declaration](templates.html "cpp/language/templates")  
* `constraint`
  * [constraint expression](constraints.html "cpp/language/constraints") which restricts the template parameters accepted by this alias template
* `type-id`
  * abstract declarator or any other valid type-id (which may introduce a new type, as noted in [type-id](type-id.html#Type_naming "cpp/language/type"))
  * The type-id cannot directly or indirectly refer to identifier
  * Note that the [point of declaration](scope.html#Point_of_declaration "cpp/language/scope") of the identifier is at the semicolon following type-id.


2) 

When the result of specializing an alias template is a dependent [template-id](templates.html#template-id "cpp/language/templates"), subsequent substitutions apply to that template-id: 
    
    
    template<typename...>
    using void_t = void;
     
    template<typename T>
    void_t<typename T::foo> f();
     
    f<int>(); // error, int does not have a nested type foo

The type produced when specializing an alias template is not allowed to directly or indirectly make use of its own type: 
    
    
    template<class T>
    struct A;
     
    template<class T>
    using B = typename A<T>::U; // type-id is A<T>::U
     
    template<class T>
    struct A { typedef B<T> U; };
     
    B<short> b; // error: B<short> uses its own type via A<short>::U

Alias templates are never deduced by [template argument deduction](function_template.html#Template_argument_deduction "cpp/language/function template") when deducing a template template parameter. 

It is not possible to [partially](partial_specialization.html "cpp/language/partial specialization") or [explicitly specialize](template_specialization.html "cpp/language/template specialization") an alias template.

Like any template declaration, an alias template can only be declared at class scope or namespace scope. 

The type of a [lambda expression](lambda.html "cpp/language/lambda") appearing in an alias template declaration is different between instantiations of that template, even when the lambda expression is not dependent. 
    
    
    template<class T>
    using A = decltype([] {}); // A<int> and A<char> refer to different closure types

| (since C++20)  
---|---  
  
### Notes

Feature-test macro | Value | Std | Feature   
---|---|---|---  
[`__cpp_alias_templates`](../experimental/feature_test.html#cpp_alias_templates "cpp/feature test") | [`200704L`](../compiler_support/11.html#cpp_alias_templates_200704L "cpp/compiler support/11") | (C++11) | Alias templates   
  
### Keywords

* [`using`](../keyword/using.md)

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[CWG 1558](https://cplusplus.github.io/CWG/issues/1558.html) | C++11  | whether unused arguments in an alias specialization  
participate in substitution was not specified  | substitution  
is performed   
  
### See also

[ `typedef` declaration](typedef.html "cpp/language/typedef") |  creates a synonym for a type  
---|---  
[ namespace alias ](namespace_alias.html "cpp/language/namespace alias") |  creates an alias of an existing namespace
  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
