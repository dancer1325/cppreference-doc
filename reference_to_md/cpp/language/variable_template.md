* variable template
  * allows
    * defining a 👀family of variables OR static data members👀 

## Contents

  * [1 Syntax](variable_template.html#Syntax)
  * [2 Explanation](variable_template.html#Explanation)
  * [3 Notes](variable_template.html#Notes)
  * [4 Defect reports](variable_template.html#Defect_reports)

### Syntax  
  
* `template < parameter-list > variable-declaration`
* `template < parameter-list > requires constraint variable-declaration`
  * | C++20

### Explanation

* `variable-declaration`
  * == [declaration](declarations.md) of a variable
  * template name
    * == variable name

* `parameter-list`
  * == list of [template parameters](template_parameters.md) /
    * non-empty
    * comma-separated
    * EACH one can be
      * [constant parameter](template_parameters.md#constant-template-parameter-or-non-type-template-parameter-) OR
      * [type parameter](template_parameters.md#type-template-parameter-) OR
      * [template parameter](template_parameters.md#template-template-parameter-) OR
      * [parameter pack](parameter_pack.md)
        * | C++11
    * can be [constrained](template_parameters.md#type-template-parameter-)
      * | C++20

* `constraint`
  * == [constraint expression](constraints.md) /
    * restricts the template parameters accepted -- by -- this function template

A variable instantiated from a variable template is called an _instantiated variable_
* A static data member instantiated from a static data member template is called an _instantiated static data member_. 

A variable template may be introduced by a template declaration at namespace scope, where variable-declaration declares a variable. 
    
    
    template<class T>
    constexpr T pi = T(3.1415926535897932385L); // variable template
     
    template<class T>
    T circular_area(T r) // function template
    {
        return pi<T> * r * r; // pi<T> is a variable template instantiation
    }

When used at class scope, variable template declares a static data member template. 
    
    
    using namespace std::literals;
    struct matrix_constants
    {
        template<class T>
        using pauli = hermitian_matrix<T, 2>; // alias template
     
        template<class T> // static data member template
        static constexpr pauli<T> sigmaX = {{0, 1}, {1, 0}};
     
        template<class T>
        static constexpr pauli<T> sigmaY = {{0, -1i}, {1i, 0}};
     
        template<class T>
        static constexpr pauli<T> sigmaZ = {{1, 0}, {0, -1}};
    };

As with other [static members](static.html "cpp/language/static"), a definition of a static data member template may be required. Such definition is provided outside the class definition. A template declaration of a static data member at namespace scope may also be a definition of a non-template [data member of a class template](member_template.html "cpp/language/member template"): 
    
    
    struct limits
    {
        template<typename T>
        static const T min; // declaration of a static data member template
    };
     
    template<typename T>
    const T limits::min = { }; // definition of a static data member template
     
    template<class T>
    class X
    {
        static T s; // declaration of a non-template static data member of a class template
    };
     
    template<class T>
    T X<T>::s = 0; // definition of a non-template data member of a class template

Unless a variable template was [explicitly specialized](template_specialization.html "cpp/language/template specialization") or explicitly instantiated, it is implicitly instantiated when a specialization of the variable template is referenced in a context that requires [a variable definition to exist](definition.html#ODR-use "cpp/language/definition") or if the existence of the definition affects the semantics of the program, i.e. if the variable is [needed for constant evaluation](constant_expression.html#Functions_and_variables_needed_for_constant_evaluation "cpp/language/constant expression") by an expression (the definition may be not used). 

The existence of a definition of a variable is considered to affect the semantics of the program if the variable is needed for constant evaluation by an expression, even if constant evaluation of the expression is not required or if constant expression evaluation does not use the definition. 

### Notes

Until variable templates were introduced in C++14, parametrized variables were typically implemented as either static data members of class templates or as constexpr function templates returning the desired values. 

Variable templates cannot be used as [template template arguments](template_parameters.html#Template_template_arguments "cpp/language/template parameters"). 

Feature-test macro | Value | Std | Feature   
---|---|---|---  
[`__cpp_variable_templates`](../experimental/feature_test.html#cpp_variable_templates "cpp/feature test") | [`201304L`](../compiler_support/14.html#cpp_variable_templates_201304L "cpp/compiler support/14") | (C++14) | Variable templates   
  
### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[CWG 2255](https://cplusplus.github.io/CWG/issues/2255.html) | C++14  | it was unclear whether a specialization of a static  
data member template is a static data member  | it is 
  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
