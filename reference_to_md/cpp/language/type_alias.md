

  
| [`goto`](goto.html "cpp/language/goto") \- [`return`](return.html "cpp/language/return")  
---  
  
[Functions](functions.html "cpp/language/functions")  
[Function declaration](function.html "cpp/language/function")  
[Lambda function expression](lambda.html "cpp/language/lambda")  
[`inline` specifier](inline.html "cpp/language/inline")  
[Dynamic exception specifications](except_spec.html "cpp/language/except spec") (until C++17*)  
[`noexcept` specifier](noexcept_spec.html "cpp/language/noexcept spec") (C++11)  
Exceptions  
| [`throw`-expression](throw.html "cpp/language/throw")  
---  
[`try` block](try.html "cpp/language/try")  
  
|   
  
---  
[`catch` handler](catch.html "cpp/language/catch")  
  
Namespaces  
| [Namespace declaration](namespace.html "cpp/language/namespace")` `  
---  
  
| [Namespace aliases](namespace_alias.html "cpp/language/namespace alias")  
---  
  
Types  
| [Fundamental types](types.html "cpp/language/types")  
---  
[Enumeration types](enum.html "cpp/language/enum")  
[Function types](function.html "cpp/language/function")  
  
| [Class/struct types](class.html "cpp/language/class")  
---  
[Union types](union.html "cpp/language/union")  
  
  
  

  
  
  
[Expressions](expressions.html "cpp/language/expressions")  
---  
| [Value categories](value_category.html "cpp/language/value category")  
---  
[Order of evaluation](eval_order.html "cpp/language/eval order")  
  
| [Operators](operators.html "cpp/language/operators")  
---  
[Operator precedence](operator_precedence.html "cpp/language/operator precedence")  
  
[Alternative representations](operator_alternative.html "cpp/language/operator alternative")  
[Literals](expressions.html#Literals "cpp/language/expressions")  
[Boolean](bool_literal.html "cpp/language/bool literal") \- [Integer](integer_literal.html "cpp/language/integer literal") \- [Floating-point](floating_literal.html "cpp/language/floating literal")  
[Character](character_literal.html "cpp/language/character literal") \- [String](string_literal.html "cpp/language/string literal") \- [`nullptr`](nullptr.html "cpp/language/nullptr") (C++11)  
[User-defined](user_literal.html "cpp/language/user literal") (C++11)  
Utilities  
[Attributes](attributes.html "cpp/language/attributes") (C++11)  
Types  
[`typedef` declaration](typedef.html "cpp/language/typedef")  
**Type alias declaration** (C++11)  
Casts  
| [Implicit conversions](implicit_cast.html "cpp/language/implicit conversion")  
---  
[`static_cast`](static_cast.html "cpp/language/static cast")  
[`const_cast`](const_cast.html "cpp/language/const cast")  
  
| [Explicit conversions](explicit_cast.html "cpp/language/explicit cast")  
---  
[`dynamic_cast`](dynamic_cast.html "cpp/language/dynamic cast")  
[`reinterpret_cast`](reinterpret_cast.html "cpp/language/reinterpret cast")  
  
Memory allocation  
| [`new` expression](new.html "cpp/language/new")  
---  
  

---  
  


[Declarations](declarations.html "cpp/language/declarations")

| Overview  
---  
[Declaration syntax](declarations.html "cpp/language/declarations")  
[_decl-specifier-seq_](declarations.html#Specifiers "cpp/language/declarations")  
[Declarator](declarations.html#Declarators "cpp/language/declarations")  
[Conflicting declarations](conflicting_declarations.html "cpp/language/conflicting declarations")  
Specifiers  
[typedef](typedef.html "cpp/language/typedef")  
[inline](inline.html "cpp/language/inline")  
[virtual function specifier](virtual.html "cpp/language/virtual")  
[explicit function specifier](explicit.html "cpp/language/explicit")  
[friend](friend.html "cpp/language/friend")  
[constexpr](constexpr.html "cpp/language/constexpr")(C++11)  
[consteval](consteval.html "cpp/language/consteval")(C++20)  
[constinit](constinit.html "cpp/language/constinit")(C++20)  
[Storage class specifiers](storage_duration.html "cpp/language/storage duration")  
[Translation-unit-local](tu_local.html "cpp/language/tu local") (C++20)  
[class/struct](class.html "cpp/language/class")  
[union](union.html "cpp/language/union")  
[enum](enum.html "cpp/language/enum")  
[decltype](decltype.html "cpp/language/decltype")(C++11)  
[auto](auto.html "cpp/language/auto")(C++11)  
[alignas](alignas.html "cpp/language/alignas")(C++11)  
[constvolatile](cv.html "cpp/language/cv")  
[Pack indexing specifier](pack_indexing.html#Pack_indexing_specifier "cpp/language/pack indexing") (C++26)  
[Elaborated type specifier](elaborated_type_specifier.html "cpp/language/elaborated type specifier")  
[Attributes](attributes.html "cpp/language/attributes") (C++11)  
  
| Declarators  
---  
[Reference](reference.html "cpp/language/reference")  
[Pointer](pointer.html "cpp/language/pointer")  
[Array](array.html "cpp/language/array")  
Block declarations  
[Simple-declaration](declarations.html "cpp/language/declarations")  
→[Structured binding declaration](structured_binding.html "cpp/language/structured binding") (C++17)  
**Alias declaration** (C++11)  
[Namespace alias definition](namespace_alias.html "cpp/language/namespace alias")  
[using declaration](using_declaration.html "cpp/language/using declaration")  
[`using` directive](namespace.html#Using-directives "cpp/language/namespace")  
[static_assert declaration](static_assert.html "cpp/language/static assert") (C++11)  
[asm declaration](asm.html "cpp/language/asm")  
[Opaque enum declaration](enum.html "cpp/language/enum") (C++11)  
Other declarations  
[Namespace definition](namespace.html "cpp/language/namespace")  
[Function declaration](function.html "cpp/language/function")  
[Class template declaration](class_template.html "cpp/language/class template")  
[Function template declaration](function_template.html "cpp/language/function template")  
[Explicit template instantiation](class_template.html#Explicit_instantiation "cpp/language/class template") (C++11)  
[Explicit template specialization](template_specialization.html "cpp/language/template specialization")  
[Linkage specification](language_linkage.html "cpp/language/language linkage")  
[Attribute declaration](declarations.html "cpp/language/declarations") (C++11)  
[Empty declaration](declarations.html "cpp/language/declarations")  
  
  
  


Type alias is a name that refers to a previously defined type (similar to [`typedef`](typedef.html "cpp/language/typedef")). 

Alias template is a name that refers to a family of types. 

## Contents

  * [1 Syntax](type_alias.html#Syntax)
  * [2 Explanation](type_alias.html#Explanation)
  * [3 Notes](type_alias.html#Notes)
  * [4 Keywords](type_alias.html#Keywords)
  * [5 Example](type_alias.html#Example)
  * [6 Defect reports](type_alias.html#Defect_reports)
  * [7 See also](type_alias.html#See_also)

  
---  
  
### Syntax

Alias declarations are [declarations](declarations.html "cpp/language/declarations") with the following syntax:   
  
---  
`**using**` identifier attr ﻿(optional) `**=**` type-id `**;**` |  (1)  |   
`**template**` `**<**` template-parameter-list `**>**` `**using**` identifier attr ﻿(optional) `**=**` type-id `**;**` |  (2)  |   
`**template**` `**<**` template-parameter-list `**>**` `**requires**` constraint `**using**` identifier attr ﻿(optional) `**=**` type-id `**;**` |  (3)  |  (since C++20)  
attr |  \-  |  optional sequence of any number of [attributes](attributes.html "cpp/language/attributes")  
---|---|---  
identifier |  \-  |  the name that is introduced by this declaration, which becomes either a type name (1) or a template name (2)  
template-parameter-list |  \-  |  [template parameter list](template_parameters.html "cpp/language/template parameters"), as in [template declaration](templates.html "cpp/language/templates")  
constraint |  \-  |  a [constraint expression](constraints.html "cpp/language/constraints") which restricts the template parameters accepted by this alias template   
type-id |  \-  |  abstract declarator or any other valid type-id (which may introduce a new type, as noted in [type-id](type-id.html#Type_naming "cpp/language/type")). The type-id cannot directly or indirectly refer to identifier. Note that the [point of declaration](scope.html#Point_of_declaration "cpp/language/scope") of the identifier is at the semicolon following type-id.   
  
### Explanation

1) A type alias declaration introduces a name which can be used as a synonym for the type denoted by type-id. It does not introduce a new type and it cannot change the meaning of an existing type name. There is no difference between a type alias declaration and [typedef](typedef.html "cpp/language/typedef") declaration. This declaration may appear in block scope, class scope, or namespace scope.

2) An alias template is a template which, when specialized, is equivalent to the result of substituting the template arguments of the alias template for the template parameters in the type-id. 
    
    
    template<class T>
    struct Alloc {};
     
    template<class T>
    using Vec = vector<T, Alloc<T>>; // type-id is vector<T, Alloc<T>>
     
    Vec<int> v; // Vec<int> is the same as vector<int, Alloc<int>>

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

[`using`](../keyword/using.html "cpp/keyword/using")

### Example

Run this code
    
    
    #include <iostream>
    #include <string>
    #include <type_traits>
    #include <typeinfo>
     
    // type alias, identical to
    // typedef std::ios_base::fmtflags flags;
    using flags = [std::ios_base::fmtflags](../io/ios_base/fmtflags.html);
    // the name 'flags' now denotes a type:
    flags fl = [std::ios_base::dec](../io/ios_base/fmtflags.html);
     
    // type alias, identical to
    // typedef void (*func)(int, int);
    using func = void (*) (int, int);
     
    // the name 'func' now denotes a pointer to function:
    void example(int, int) {}
    func f = example;
     
    // alias template
    template<class T>
    using ptr = T*;
    // the name 'ptr<T>' is now an alias for pointer to T
    ptr<int> x;
     
    // type alias used to hide a template parameter
    template<class CharT>
    using mystring = [std::basic_string](../string/basic_string.html)<CharT, [std::char_traits](../string/char_traits.html)<CharT>>;
     
    mystring<char> str;
     
    // type alias can introduce a member typedef name
    template<typename T>
    struct Container { using value_type = T; };
     
    // which can be used in generic programming
    template<typename ContainerT>
    void info(const ContainerT& c)
    {
        typename ContainerT::value_type T;
        [std::cout](../io/cout.html) << "ContainerT is `" << typeid(decltype(c)).name() << "`\n"
                     "value_type is `" << typeid(T).name() << "`\n";
    }
     
    // type alias used to simplify the syntax of std::enable_if
    template<typename T>
    using Invoke = typename T::type;
     
    template<typename Condition>
    using EnableIf = Invoke<[std::enable_if](../types/enable_if.html)<Condition::value>>;
     
    template<typename T, typename = EnableIf<[std::is_polymorphic](../types/is_polymorphic.html)<T>>>
    int fpoly_only(T) { return 1; }
     
    struct S { virtual ~S() {} };
     
    int main()
    {
        Container<int> c;
        info(c); // Container::value_type will be int in this function
    //  fpoly_only(c); // error: enable_if prohibits this
        S s;
        fpoly_only(s); // okay: enable_if allows this
    }

Possible output: 
    
    
    ContainerT is `struct Container<int>`
    value_type is `int`

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
