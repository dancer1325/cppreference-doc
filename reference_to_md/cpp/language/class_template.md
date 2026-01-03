* class template
  * == family of classes 

## Contents

  * [1 Syntax](class_template.html#Syntax)
  * [2 Explanation](class_template.html#Explanation)
  * [3 Class template instantiation](class_template.html#Class_template_instantiation)
    * [3.1 Explicit instantiation](class_template.html#Explicit_instantiation)
    * [3.2 Implicit instantiation](class_template.html#Implicit_instantiation)
  * [4 Keywords](class_template.html#Keywords)
  * [5 See also](class_template.html#See_also)

### Syntax  

* `template < parameter-list > class-declaration`
* `template < parameter-list > requires constraint class-declaration`
  * requirements
    * C++20
* `export template < parameter-list > class-declaration`
  * | C++11
    * removed 
      * Reason:🧠`export` implementations: rare & disagreed🧠
  * `export`
    * OPTIONAL
  
### Explanation

* `class-declaration`
  * == [class declaration](class.md)
  * template name
    * == class name 
* `parameter-list`
  * == list of [template parameters](template_parameters.md) /
    * non-empty
    * comma-separated
    * ALLOWED ones
      * [constant parameter](template_parameters.md#Constant_template_parameter)
      * [type parameter](template_parameters.md#Type_template_parameter)
      * [template parameter](template_parameters.md#Template_template_parameter)
      * [parameter pack](parameter_pack.md) OF PREVIOUS ones
* `constraint`
  * == [constraint expression](constraints.md) / restricts the ALLOWED template parameters   
* `export`
  * == template is _exported_
  * -> ALL class template's members are exported
  
### Class template instantiation

A class template by itself is not a type, or an object, or any other entity. No code is generated from a source file that contains only template definitions. In order for any code to appear, a template must be instantiated: the template arguments must be provided so that the compiler can generate an actual class (or function, from a function template). 

#### Explicit instantiation  

`**template**` class-key template-name `**<**` argument-list `**>**` `**;**` |  (1)  |   
`**extern**` `**template**` class-key template-name `**<**` argument-list `**>**` `**;**` |  (2)  |  (since C++11)  
class-key |  \-  |  `**class**`, `**struct**` or `**union**`  
---|---|---  
  
1) Explicit instantiation definition

2) Explicit instantiation declaration

An explicit instantiation definition forces instantiation of the class, struct, or union they refer to. It may appear in the program anywhere after the template definition, and for a given argument-list, is only allowed to appear once in the entire program, no diagnostic required. 

An explicit instantiation declaration (an extern template) skips implicit instantiation step: the code that would otherwise cause an implicit instantiation instead uses the explicit instantiation definition provided elsewhere (resulting in link errors if no such instantiation exists). This can be used to reduce compilation times by explicitly declaring a template instantiation in all but one of the source files using it, and explicitly defining it in the remaining file.  | (since C++11)  
---|---  
  
Classes, functions, variables(since C++14), and member template specializations can be explicitly instantiated from their templates. Member functions, member classes, and static data members of class templates can be explicitly instantiated from their member definitions. 

Explicit instantiation can only appear in the enclosing namespace of the template, unless it uses qualified-id: 
    
    
    namespace N
    {
        template<class T>
        class Y // template definition
        {
            void mf() {}
        };
    }
     
    // template class Y<int>; // error: class template Y not visible in the global namespace
    using N::Y;
    // template class Y<int>; // error: explicit instantiation outside
                              // of the namespace of the template
    template class N::Y<char*>;       // OK: explicit instantiation
    template void N::Y<double>::mf(); // OK: explicit instantiation

Explicit instantiation has no effect if an [explicit specialization](template_specialization.html "cpp/language/template specialization") appeared before for the same set of template arguments. 

Only the declaration is required to be visible when explicitly instantiating a function template, a variable template(since C++14), a member function or static data member of a class template, or a member function template. The complete definition must appear before the explicit instantiation of a class template, a member class of a class template, or a member class template, unless an explicit specialization with the same template arguments appeared before. 

If a function template, variable template(since C++14), member function template, or member function or static data member of a class template is explicitly instantiated with an explicit instantiation definition, the template definition must be present in the same translation unit. 

When an explicit instantiation names a class template specialization, it serves as an explicit instantiation of the same kind (declaration or definition) of each of its non-inherited non-template members that has not been previously explicitly specialized in the translation unit. If this explicit instantiation is a definition, it is also an explicit instantiation definition only for the members that have been defined at this point. 

Explicit instantiation definitions ignore member access specifiers: parameter types and return types may be private. 

#### Implicit instantiation

When code refers to a template in context that requires a completely defined type, or when the completeness of the type affects the code, and this particular type has not been explicitly instantiated, implicit instantiation occurs. For example, when an object of this type is constructed, but not when a pointer to this type is constructed. 

This applies to the members of the class template: unless the member is used in the program, it is not instantiated, and does not require a definition. 
    
    
    template<class T>
    struct Z // template definition
    {
        void f() {}
        void g(); // never defined
    };
     
    template struct Z<double>; // explicit instantiation of Z<double>
    Z<int> a;                  // implicit instantiation of Z<int>
    Z<char>* p;                // nothing is instantiated here
     
    p->f(); // implicit instantiation of Z<char> and Z<char>::f() occurs here.
            // Z<char>::g() is never needed and never instantiated:
            // it does not have to be defined

If a class template has been declared, but not defined, at the point of instantiation, the instantiation yields an incomplete class type: 
    
    
    template<class T>
    class X;    // declaration, not definition
     
    X<char> ch; // error: incomplete type X<char>

[Local classes](class.html#Local_classes "cpp/language/class") and any templates used in their members are instantiated as part of the instantiation of the entity within which the local class or enumeration is declared. | (since C++17)  
---|---  
  
### Keywords

* [`export`](../keyword/export.md)
  * requirements
    * C++11
* [`extern`](../keyword/extern.md)
  * requirements
    * C++11

### See also

  * [template parameters and arguments](template_parameters.html "cpp/language/template parameters") allow templates to be parameterized 
  * [function template declaration](function_template.html "cpp/language/function template") declares a function template 
  * [template specialization](template_specialization.html "cpp/language/template specialization") defines an existing template for a specific type 
  * [parameter packs](parameter_pack.html "cpp/language/parameter pack") allows the use of lists of types in templates (since C++11)


