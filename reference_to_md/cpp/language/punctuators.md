* C++'s punctuation symbols 

## Contents

  * [1 Preprocessing operators](punctuators.html#Preprocessing_operators)
    * [1.1 # (including %:)](punctuators.html#.23_.28including_.25:.29)
    * [1.2 ##(including %:%:)](punctuators.html#.23.23.28including_.25:.25:.29)
  * [2 Single-character operators and punctuators](punctuators.html#Single-character_operators_and_punctuators)
    * [2.1 { and } (including <% and %>)](punctuators.html#.7B_and_.7D_.28including_.3C.25_and_.25.3E.29)
    * [2.2 [ and ] (including <: and :>)](punctuators.html#.5B_and_.5D_.28including_.3C:_and_:.3E.29)
    * [2.3 ( and )](punctuators.html#.28_and_.29)
    * [2.4 ;](punctuators.html#.3B)
    * [2.5 :](punctuators.html#:)
    * [2.6 ?](punctuators.html#.3F)
    * [2.7 .](punctuators.html#.)
    * [2.8 ~ (including compl)](punctuators.html#.7E_.28including_compl.29)
    * [2.9 ! (including not)](punctuators.html#.21_.28including_not.29)
    * [2.10 +](punctuators.html#.2B)
    * [2.11 -](punctuators.html#-)
    * [2.12 *](punctuators.html#.2A)
    * [2.13 /](punctuators.html#.2F)
    * [2.14 %](punctuators.html#.25)
    * [2.15 ^ (including xor)](punctuators.html#.5E_.28including_xor.29)
    * [2.16 & (including bitand)](punctuators.html#.26_.28including_bitand.29)
    * [2.17 | (including bitor)](punctuators.html#.7C_.28including_bitor.29)
    * [2.18 =](punctuators.html#.3D)
    * [2.19 <](punctuators.html#.3C)
    * [2.20 >](punctuators.html#.3E)
    * [2.21 ,](punctuators.html#.2C)
  * [3 Multi-character operators and punctuators](punctuators.html#Multi-character_operators_and_punctuators)
    * [3.1 ...](punctuators.html#...)
    * [3.2 ::](punctuators.html#::)
    * [3.3 .*](punctuators.html#..2A)
    * [3.4 ->](punctuators.html#-.3E)
    * [3.5 ->*](punctuators.html#-.3E.2A)
    * [3.6 +=](punctuators.html#.2B.3D)
    * [3.7 -=](punctuators.html#-.3D)
    * [3.8 *=](punctuators.html#.2A.3D)
    * [3.9 /=](punctuators.html#.2F.3D)
    * [3.10 %=](punctuators.html#.25.3D)
    * [3.11 ^= (including xor_eq)](punctuators.html#.5E.3D_.28including_xor_eq.29)
    * [3.12 &= (including and_eq)](punctuators.html#.26.3D_.28including_and_eq.29)
    * [3.13 |= (including or_eq)](punctuators.html#.7C.3D_.28including_or_eq.29)
    * [3.14 ==](punctuators.html#.3D.3D)
    * [3.15 != (including not_eq)](punctuators.html#.21.3D_.28including_not_eq.29)
    * [3.16 <=](punctuators.html#.3C.3D)
    * [3.17 >=](punctuators.html#.3E.3D)
    * [3.18 <=>](punctuators.html#.3C.3D.3E)
    * [3.19 && (including and)](punctuators.html#.26.26_.28including_and.29)
    * [3.20 || (including or)](punctuators.html#.7C.7C_.28including_or.29)
    * [3.21 <<](punctuators.html#.3C.3C)
    * [3.22 >>](punctuators.html#.3E.3E)
    * [3.23 <<=](punctuators.html#.3C.3C.3D)
    * [3.24 >>=](punctuators.html#.3E.3E.3D)
    * [3.25 ++](punctuators.html#.2B.2B)
    * [3.26 \--](punctuators.html#--)
  * [4 References](punctuators.html#References)
  * [5 See also](punctuators.html#See_also)

### Preprocessing operators

* recognized -- by -- [preprocessors](../preprocessor.md) 

#### # (including %:)

  * Introduce a [preprocessing directive](../preprocessor.html "cpp/preprocessor"). 
  * The [preprocessing operator for stringification](../preprocessor/replace.html#.23_and_.23.23_operators "cpp/preprocessor/replace"). 



#### ##(including %:%:)

  * The [preprocessing operator for token pasting](../preprocessor/replace.html#.23_and_.23.23_operators "cpp/preprocessor/replace"). 



### Single-character operators and punctuators

#### { and } (including <% and %>)

  * In a [class](class.html "cpp/language/class") definition, delimit the [member specification](class.html#Member_specification "cpp/language/class"). 
  * In an [enumeration](enum.html "cpp/language/enum") definition, delimit the enumerator list. 
  * Delimit a [compound statement](statements.html#Compound_statements "cpp/language/statements"). The compound statement may be part of 



    

  * a [function definition](function.html#Function_definition "cpp/language/function")
  * a [try block](try.html "cpp/language/try")



    

  * a [lambda expression](lambda.html "cpp/language/lambda")


| (since C++11)  
---|---  
  
  * Part of the [aggregate initialization](aggregate_initialization.html "cpp/language/aggregate initialization")(until C++11)[list-initialization](list_initialization.html "cpp/language/list initialization")(since C++11) syntax of an [initializer](initialization.html "cpp/language/initialization"). 
  * In a [namespace definition](namespace.html "cpp/language/namespace"), delimit the namespace body. 
  * In a [language linkage specification](language_linkage.html "cpp/language/language linkage"), delimit the declarations. 



  * In a [requires expression](constraints.html#Requires_expressions "cpp/language/constraints"), delimit the requirements. 
  * In a [compound requirement](constraints.html#Compound_Requirements "cpp/language/constraints"), delimit the expression. 
  * In an [export declaration](modules.html "cpp/language/modules"), delimit the declarations. 

| (since C++20)  
---|---  
  
#### [ and ] (including <: and :>)

  * [Subscript operator](operator_member_access.html#Built-in_subscript_operator "cpp/language/operator member access"); part of operator[] in [operator overloading](operators.html#Array_subscript_operator "cpp/language/operators"). 
  * Part of [array declarator](declarations.html#Declarators "cpp/language/declarations") in a [declaration](declarations.html "cpp/language/declarations") or a [type-id](type-id.html#Type_naming "cpp/language/type") (e.g. in a [new expression](new.html "cpp/language/new")). 
  * Part of new[] operator in [operator overloading (allocation function)](../memory/new/operator_new.html "cpp/memory/new/operator new"). 
  * Part of delete[] operator in [delete expression](delete.html "cpp/language/delete") and [operator overloading (deallocation function)](../memory/new/operator_delete.html "cpp/memory/new/operator delete"). 



  * In a [lambda expression](lambda.html "cpp/language/lambda"), delimit the [captures](lambda.html#Lambda_capture "cpp/language/lambda"). 
  * In an [attribute specifier](attributes.html "cpp/language/attributes"), delimit the attributes. 

| (since C++11)  
---|---  
  
  * In a [structured binding declaration](structured_binding.html "cpp/language/structured binding"), delimit the identifier list. 

| (since C++17)  
  
  * In a [pack indexing](pack_indexing.html "cpp/language/pack indexing"), delimit [converted constant expression](constant_expression.html "cpp/language/constant expression") representing an index. 

| (since C++26)  
  
#### ( and )

  * In an expression, [indicate grouping](expressions.html#Primary_expressions "cpp/language/expressions"). 
  * [Function call operator](operator_other.html#Built-in_function_call_operator "cpp/language/operator other"); part of operator() in [operator overloading](operators.html#Function_call_operator "cpp/language/operators"). 
  * In a [function-style type cast](explicit_cast.html "cpp/language/explicit cast"), delimit the expression/initializers. 
  * In a [`static_cast`](static_cast.html "cpp/language/static cast"), [`const_cast`](const_cast.html "cpp/language/const cast"), [`reinterpret_cast`](reinterpret_cast.html "cpp/language/reinterpret cast"), or [`dynamic_cast`](dynamic_cast.html "cpp/language/dynamic cast"), delimit the expression. 
  * Delimit the operand of the following operators: 



    

  * [`typeid`](typeid.html "cpp/language/typeid")
  * [`sizeof`](sizeof.html "cpp/language/sizeof")



    

  * [`sizeof...`](sizeof....html "cpp/language/sizeof...")
  * [`alignof`](alignof.html "cpp/language/alignof")
  * [`noexcept`](noexcept.html "cpp/language/noexcept")


| (since C++11)  
---|---  
  
  * In a [placement new expression](new.html "cpp/language/new"), delimit the placement arguments. 
  * In a [new expression](new.html "cpp/language/new"), optionally delimit the type-id. 
  * In a [new expression](new.html "cpp/language/new"), delimit the initializers. 
  * In a [C-style cast](explicit_cast.html "cpp/language/explicit cast"), delimit the type-id. 
  * In a [declaration](declarations.html "cpp/language/declarations") or a [type-id](type-id.html#Type_naming "cpp/language/type"), indicate grouping. 
  * Delimit the parameter list in 



    

  * a [function declarator](function.html "cpp/language/function") (in a [declaration](declarations.html "cpp/language/declarations") or a [type-id](type-id.html#Type_naming "cpp/language/type")) 



    

  * a [lambda expression](lambda.html "cpp/language/lambda")


| (since C++11)  
---|---  
  
    

  * a [user-defined deduction guide](ctad.html "cpp/language/class template argument deduction")


| (since C++17)  
  
    

  * a [requires expression](constraints.html#Requires_expressions "cpp/language/constraints")


| (since C++20)  
  
  * Part of the [direct-initialization](direct_initialization.html "cpp/language/direct initialization") syntax of an [initializer](initialization.html "cpp/language/initialization"). 
  * In an [asm declaration](asm.html "cpp/language/asm"), delimit the string literal. 
  * In a [member initializer list](initializer_list.html "cpp/language/initializer list"), delimit the initializers to a base or member. 
  * Delimit the controlling clause of a selection statement or iteration statement, including: 



    

  * [`if`](if.html "cpp/language/if") (except [consteval if](if.html#Consteval_if "cpp/language/if"))(since C++23)
  * [`switch`](switch.html "cpp/language/switch")
  * [`while`](while.html "cpp/language/while")
  * [`do-while`](do.html "cpp/language/do")
  * [`for`](for.html "cpp/language/for")



    

  * [range-based `for`](range-for.html "cpp/language/range-for")


| (since C++11)  
---|---  
  
  * In a [handler](catch.html "cpp/language/catch"), delimit the parameter declaration. 
  * In a [function-like macro definition](../preprocessor/replace.html#Function-like_macros "cpp/preprocessor/replace"), delimit the macro parameters. 
  * In a [function-like macro invocation](../preprocessor/replace.html#Function-like_macros "cpp/preprocessor/replace"), delimit the macro arguments or prevent commas from being interpreted as argument separators. 
  * Part of a `defined`, `__has_include`(since C++17), `__has_cpp_attribute`(since C++20) preprocessing operator. 



  * In a [`static_assert`](static_assert.html "cpp/language/static assert") declaration, delimit the operands. 
  * Delimit the operand of the following specifiers: 



    

  * [`decltype`](decltype.html "cpp/language/decltype")
  * [`noexcept`](noexcept_spec.html "cpp/language/noexcept spec")
  * [`alignas`](alignas.html "cpp/language/alignas")


| 

    

  * [`explicit`](explicit.html "cpp/language/explicit")


| (since C++20)  
---|---  
  
  * In an [attribute](attributes.html "cpp/language/attributes"), delimit the attribute arguments. 

(since C++11)  
  
  * Part of [`decltype(auto)`](decltype.html "cpp/language/decltype") specifier. 

| (since C++14)  
  
  * Delimit a [fold expression](fold.html "cpp/language/fold"). 

| (since C++17)  
  
  * Part of [`__VA_OPT__`](../preprocessor/replace.html "cpp/preprocessor/replace") replacement in a variadic macro definition. 

| (since C++20)  
  
#### ;

  * Indicate the end of 



    

  * a [statement](statements.html "cpp/language/statements")
  * a [declaration](declarations.html "cpp/language/declarations") or [member declaration](class.html#Member_specification "cpp/language/class")



    

  * a [module declaration](modules.html "cpp/language/modules"), import declaration, global module fragment introducer, or private module fragment introducer 
  * a [requirement](constraints.html#Requires_expressions "cpp/language/constraints")


| (since C++20)  
---|---  
  
  * Separate the condition and statement of a [for statement](for.html "cpp/language/for"). 



#### :

  * Part of [conditional operator](operator_other.html#Conditional_operator "cpp/language/operator other"). 
  * Part of [label declaration](statements.html#Labels "cpp/language/statements"). 
  * In the base-clause of a [class definition](class.html "cpp/language/class"), introduce the [base class](derived_class.html "cpp/language/derived class"). 
  * Part of [access specifier](access.html "cpp/language/access") in member specification. 
  * In a [bit-field member declaration](bit_field.html "cpp/language/bit field"), introduce the width. 
  * In a [constructor](initializer_list.html "cpp/language/constructor") definition, introduce the member initializer list. 



  * In a [range-based for](range-for.html "cpp/language/range-for") statement, separate the item-declaration and the range-initializer. 
  * In the enum-base of an [enumeration declaration](enum.html "cpp/language/enum"), introduce the underlying type. 

| (since C++11)  
---|---  
  
  * In an [attribute specifier](attributes.html "cpp/language/attributes"), separate the attribute-namespace and the attribute-list. 

| (since C++17)  
  
  * In a [module declaration](modules.html "cpp/language/modules") or import declaration of module partition, introduce the module partition name. 
  * Part of a [private module fragment](modules.html#Private_module_fragment "cpp/language/modules") introducer (module :private;). 

| (since C++20)  
  
#### ?

  * Part of [conditional operator](operator_other.html#Conditional_operator "cpp/language/operator other"). 



#### .

  * [Member access operator](operator_member_access.html#Built-in_member_access_operators "cpp/language/operator member access"). 



  * In [aggregate initialization](aggregate_initialization.html "cpp/language/aggregate initialization"), introduce a designator. 
  * Part of [module name or module partition name](modules.html "cpp/language/modules"). 

| (since C++20)  
---|---  
  
#### ~ (including compl)

  * [Unary complement operator (a.k.a. bitwise not operator)](operator_arithmetic.html#Bitwise_logic_operators "cpp/language/operator arithmetic"); part of operator~ in [operator overloading](operators.html "cpp/language/operators"). 
  * Part of an [identifier expression](name.html "cpp/language/identifiers") to name a [destructor](destructor.html "cpp/language/destructor") or pseudo-destructor. 



#### ! (including not)

  * [Logical not operator](operator_logical.html "cpp/language/operator logical"); part of operator! in [operator overloading](operators.html "cpp/language/operators"). 



  * Part of [consteval if](if.html#Consteval_if "cpp/language/if") statement. 

| (since C++23)  
---|---  
  
#### +

  * [Unary plus operator](operator_arithmetic.html#Unary_arithmetic_operators "cpp/language/operator arithmetic"); part of operator+ in [operator overloading](operators.html "cpp/language/operators"). 
  * [Binary plus operator](operator_arithmetic.html#Additive_operators "cpp/language/operator arithmetic"); part of operator+ in [operator overloading](operators.html "cpp/language/operators"). 



#### -

  * [Unary minus operator](operator_arithmetic.html#Unary_arithmetic_operators "cpp/language/operator arithmetic"); part of operator- in [operator overloading](operators.html "cpp/language/operators"). 
  * [Binary minus operator](operator_arithmetic.html#Additive_operators "cpp/language/operator arithmetic"); part of operator- in [operator overloading](operators.html "cpp/language/operators"). 



#### *

  * [Indirection operator](operator_member_access.html#Built-in_indirection_operator "cpp/language/operator member access"); part of operator* in [operator overloading](operators.html "cpp/language/operators"). 
  * [Multiplication operator](operator_arithmetic.html#Multiplicative_operators "cpp/language/operator arithmetic"); part of operator* in [operator overloading](operators.html "cpp/language/operators"). 
  * Pointer operator or part of pointer-to-member operator in a [declarator](declarations.html#Declarators "cpp/language/declarations") or in a [type-id](type-id.html#Type_naming "cpp/language/type"). 



  * Part of *this in a [lambda capture](lambda.html#Lambda_capture "cpp/language/lambda") list, to capture the current object by copy. 

| (since C++17)  
---|---  
  
#### /

  * [Division operator](operator_arithmetic.html#Multiplicative_operators "cpp/language/operator arithmetic"); part of operator/ in [operator overloading](operators.html "cpp/language/operators"). 



#### %

  * [Modulo operator](operator_arithmetic.html#Multiplicative_operators "cpp/language/operator arithmetic"); part of operator% in [operator overloading](operators.html "cpp/language/operators"). 



#### ^ (including xor)

  * [Bitwise xor operator](operator_arithmetic.html#Bitwise_logic_operators "cpp/language/operator arithmetic"); part of operator^ in [operator overloading](operators.html "cpp/language/operators"). 



#### & (including bitand)

  * [Address-of operator](operator_member_access.html#Built-in_address-of_operator "cpp/language/operator member access"); part of operator& in [operator overloading](operators.html#Rarely_overloaded_operators "cpp/language/operators"). 
  * [Bitwise and operator](operator_arithmetic.html#Bitwise_logic_operators "cpp/language/operator arithmetic"); part of operator& in [operator overloading](operators.html "cpp/language/operators"). 
  * Lvalue-reference operator in a [declarator](declarations.html#Declarators "cpp/language/declarations") or in a [type-id](type-id.html#Type_naming "cpp/language/type"). 



  * In a [lambda capture](lambda.html#Lambda_capture "cpp/language/lambda"), indicate by-reference capture. 
  * [Ref-qualifier](member_functions.html#ref-qualified_member_functions "cpp/language/member functions") in [member function declaration](member_functions.html "cpp/language/member functions"). 

| (since C++11)  
---|---  
  
#### | (including bitor)

  * [Bitwise or operator](operator_arithmetic.html#Bitwise_logic_operators "cpp/language/operator arithmetic"); part of operator| in [operator overloading](operators.html "cpp/language/operators"). 



#### =

  * [Simple assignment operator](operator_assignment.html "cpp/language/operator assignment"); part of operator= in [operator overloading](operators.html#Assignment_operator "cpp/language/operators"), which might be a special member function ([copy assignment operator](as_operator.html "cpp/language/copy assignment")or [move assignment operator](move_operator.html "cpp/language/move assignment")(since C++11)). 
  * Part of the [copy-initialization](copy_initialization.html "cpp/language/copy initialization") and [aggregate initialization](aggregate_initialization.html "cpp/language/aggregate initialization")(until C++11)[copy-list-initialization](list_initialization.html "cpp/language/list initialization")(since C++11) syntax of an [initializer](initialization.html "cpp/language/initialization"). 
  * In a [function declaration](function.html "cpp/language/function"), introduce a [default argument](default_arguments.html "cpp/language/default arguments"). 
  * In a [template parameter list](template_parameters.html "cpp/language/template parameters"), introduce a [default template argument](template_parameters.html#Default_template_arguments "cpp/language/template parameters"). 
  * In a [namespace alias definition](namespace_alias.html "cpp/language/namespace alias"), separate the alias and the aliased namespace. 
  * In an [enum definition](enum.html "cpp/language/enum"), introduce the value of enumerator. 
  * Part of pure-specifier in a [pure virtual function declaration](abstract_class.html "cpp/language/abstract class"). 



  * Capture default in [lambda capture](lambda.html#Lambda_capture "cpp/language/lambda"), to indicate by-copy capture. 
  * Part of defaulted definition (=default;) or deleted definition (=delete;) in [function definition](function.html#Function_definition "cpp/language/function"). 
  * In a [type alias declaration](type_alias.html "cpp/language/type alias"), separate the alias and the aliased type. 

| (since C++11)  
---|---  
  
  * In a [concept definition](constraints.html "cpp/language/constraints"), separate the concept name and the constraint expression. 

| (since C++20)  
  
#### <

  * [Less-than operator](operator_comparison.html "cpp/language/operator comparison"); part of operator< in [operator overloading](operators.html#Comparison_operators "cpp/language/operators"). 
  * In a [`static_cast`](static_cast.html "cpp/language/static cast"), [`const_cast`](const_cast.html "cpp/language/const cast"), [`reinterpret_cast`](reinterpret_cast.html "cpp/language/reinterpret cast"), or [`dynamic_cast`](dynamic_cast.html "cpp/language/dynamic cast"), introduce the type-id. 
  * Introduce a [template argument list](template_parameters.html#Template_arguments "cpp/language/template parameters"). 
  * Introduce a [template parameter list](template_parameters.html "cpp/language/template parameters") in 



    

  * a [template declaration](templates.html "cpp/language/templates")
  * a [partial specialization](partial_specialization.html "cpp/language/partial specialization")



    

  * a [lambda expression](lambda.html "cpp/language/lambda")


| (since C++20)  
---|---  
  
  * Part of template<> in [template specialization declaration](template_specialization.html "cpp/language/template specialization"). 
  * Introduce a header name in 



    

  * a [#include directive](../preprocessor/include.html "cpp/preprocessor/include")



    

  * a [__has_include preprocessing expression](../preprocessor/include.html "cpp/preprocessor/include")


| (since C++17)  
---|---  
  
    

  * an [import declaration](modules.html "cpp/language/modules")


| (since C++20)  
  
#### >

  * [Greater-than operator](operator_comparison.html "cpp/language/operator comparison"); part of operator> in [operator overloading](operators.html#Comparison_operators "cpp/language/operators"). 
  * [`static_cast`](static_cast.html "cpp/language/static cast"), [`const_cast`](const_cast.html "cpp/language/const cast"), [`reinterpret_cast`](reinterpret_cast.html "cpp/language/reinterpret cast"), or [`dynamic_cast`](dynamic_cast.html "cpp/language/dynamic cast"), indicate the end of type-id. 
  * Indicate the end of a [template argument list](template_parameters.html#Template_arguments "cpp/language/template parameters"). 
  * Indicate the end of a [template parameter list](template_parameters.html "cpp/language/template parameters") in 



    

  * a [template declaration](templates.html "cpp/language/templates")
  * a [partial specialization](partial_specialization.html "cpp/language/partial specialization")



    

  * a [lambda expression](lambda.html "cpp/language/lambda")


| (since C++20)  
---|---  
  
  * Part of template<> in [template specialization declaration](template_specialization.html "cpp/language/template specialization"). 
  * Indicate the end of a header name in 



    

  * a [#include directive](../preprocessor/include.html "cpp/preprocessor/include")



    

  * a [__has_include preprocessing expression](../preprocessor/include.html "cpp/preprocessor/include")


| (since C++17)  
---|---  
  
    

  * an [import declaration](modules.html "cpp/language/modules")


| (since C++20)  
  
#### ,

  * [Comma operator](operator_other.html#Built-in_comma_operator "cpp/language/operator other"); part of operator, in [operator overloading](operators.html#Rarely_overloaded_operators "cpp/language/operators"). 
  * List separator in 



    

  * the declarator list in a [declaration](declarations.html "cpp/language/declarations")
  * initializer list in [initialization](initialization.html "cpp/language/initialization")
  * the placement argument list in a [placement new](new.html "cpp/language/new")
  * the argument list in a [function call expression](operator_other.html#Function_call_operator "cpp/language/operator other")
  * the enumerator list in an [enum](enum.html "cpp/language/enum") declaration 
  * the [base class](derived_class.html "cpp/language/derived class") list in a [class](class.html "cpp/language/class") declaration 
  * the member initializer list in a [constructor](initializer_list.html "cpp/language/constructor") definition 
  * a [function parameter list](function.html#Parameter_list "cpp/language/function")
  * a [template parameter list](template_parameters.html "cpp/language/template parameters")
  * a [template argument list](template_parameters.html#Template_arguments "cpp/language/template parameters")



    

  * a [lambda capture](lambda.html#Lambda_capture "cpp/language/lambda") list 
  * an [attribute](attributes.html "cpp/language/attributes") list 


| (since C++11)  
---|---  
  
    

  * the declarator list in a [using-declaration](namespace.html#Using-declarations "cpp/language/namespace")
  * the identifier list in a [structured binding](structured_binding.html "cpp/language/structured binding") declaration 


| (since C++17)  
  
    

  * the argument list in a [multi-argument subscript expression](operator_member_access.html#Built-in_subscript_operator "cpp/language/operator member access")


| (since C++23)  
  
    

  * the macro parameter list in a [function-like macro definition](../preprocessor/replace.html "cpp/preprocessor/replace")
  * the macro argument list in a [function-like macro invocation](../preprocessor/replace.html#Function-like_macros "cpp/preprocessor/replace"), unless found between the parentheses of an argument 



  * In a [`static_assert`](static_assert.html "cpp/language/static assert") declaration, separate the arguments. 

| (since C++11)  
---|---  
  
### Multi-character operators and punctuators

#### ...

  * In the [parameter list](function.html#Parameter_list "cpp/language/function") of a function declaratoror lambda expression(since C++11)or user-defined deduction guide(since C++17), signify a [variadic function](variadic_arguments.html "cpp/language/variadic arguments"). 
  * In a [handler](catch.html "cpp/language/catch"), signify catch-all handler. 



  * In a [macro definition](../preprocessor/replace.html "cpp/preprocessor/replace"), signify a variadic macro. 
  * Indicate [pack](parameter_pack.html "cpp/language/parameter pack") declaration and expansion. 

| (since C++11)  
---|---  
  
  * In [pack indexing](pack_indexing.html#Syntax "cpp/language/pack indexing") expression and specifier. 

| (since C++26)  
  
#### `::`

* scope resolution operator |
  * [qualified name](qualified_lookup.md)
  * [pointer-to-member declaration](pointer.md#pointers-to-members)
  * [`new`](new.md) OR [`delete`](delete.md) expression
    * == ONLY look up global allocation OR deallocation functions  

* | C++11,  
  * | [attribute](attributes.md),
    * == attribute scope 
* | C++17,
  * part of [nested namespace definition](namespace.md)  
  
#### .*

  * [Pointer-to-member access operator](operator_member_access.html#Built-in_pointer-to-member_access_operators "cpp/language/operator member access"). 



#### ->

  * [Member access operator](operator_member_access.html#Built-in_member_access_operators "cpp/language/operator member access"); part of operator-> in [operator overloading](operators.html "cpp/language/operators"). 



  * In a [function declarator](function.html "cpp/language/function") or [lambda expression](lambda.html "cpp/language/lambda"), introduce the trailing return type. 

| (since C++11)  
---|---  
  
  * In a [user-defined deduction guide](ctad.html "cpp/language/class template argument deduction"), introduce the result type. 

| (since C++17)  
  
  * In a [compound requirement](constraints.html#Compound_Requirements "cpp/language/constraints"), introduce the return type requirement. 

| (since C++20)  
  
#### ->*

  * [Pointer-to-member access operator](operator_member_access.html#Built-in_pointer-to-member_access_operators "cpp/language/operator member access"); part of operator->* in [operator overloading](operators.html#Rarely_overloaded_operators "cpp/language/operators"). 



#### +=

  * [Compound assignment operator](operator_assignment.html "cpp/language/operator assignment"); part of operator+= in [operator overloading](operators.html "cpp/language/operators"). 



#### -=

  * [Compound assignment operator](operator_assignment.html "cpp/language/operator assignment"); part of operator-= in [operator overloading](operators.html "cpp/language/operators"). 



#### *=

  * [Compound assignment operator](operator_assignment.html "cpp/language/operator assignment"); part of operator*= in [operator overloading](operators.html "cpp/language/operators"). 



#### /=

  * [Compound assignment operator](operator_assignment.html "cpp/language/operator assignment"); part of operator/= in [operator overloading](operators.html "cpp/language/operators"). 



#### %=

  * [Compound assignment operator](operator_assignment.html "cpp/language/operator assignment"); part of operator%= in [operator overloading](operators.html "cpp/language/operators"). 



#### ^= (including xor_eq)

  * [Compound assignment operator](operator_assignment.html "cpp/language/operator assignment"); part of operator^= in [operator overloading](operators.html "cpp/language/operators"). 



#### &= (including and_eq)

  * [Compound assignment operator](operator_assignment.html "cpp/language/operator assignment"); part of operator&= in [operator overloading](operators.html "cpp/language/operators"). 



#### |= (including or_eq)

  * [Compound assignment operator](operator_assignment.html "cpp/language/operator assignment"); part of operator|= in [operator overloading](operators.html "cpp/language/operators"). 



#### ==

  * [Equality operator](operator_comparison.html "cpp/language/operator comparison"); part of operator== in [operator overloading](operators.html#Comparison_operators "cpp/language/operators"). 



#### != (including not_eq)

  * [Inequality operator](operator_comparison.html "cpp/language/operator comparison"); part of operator!= in [operator overloading](operators.html#Comparison_operators "cpp/language/operators"). 



#### <=

  * [Less-than-or-equal-to operator](operator_comparison.html "cpp/language/operator comparison"); part of operator<= in [operator overloading](operators.html#Comparison_operators "cpp/language/operators"). 



#### >=

  * [Greater-than-or-equal-to operator](operator_comparison.html "cpp/language/operator comparison"); part of operator>= in [operator overloading](operators.html#Comparison_operators "cpp/language/operators"). 



####  <=>

  * [Three-way comparison (spaceship) operator](operator_comparison.html#Three-way_comparison "cpp/language/operator comparison"); part of operator<=> in [operator overloading](operators.html#Comparison_operators "cpp/language/operators"). 

| (since C++20)  
---|---  
  
#### && (including and)

  * [Logical and operator](operator_logical.html "cpp/language/operator logical"); part of operator&& in [operator overloading](operators.html#Rarely_overloaded_operators "cpp/language/operators"). 



  * Rvalue-reference operator in a [declarator](declarations.html#Declarators "cpp/language/declarations") or in a [type-id](type-id.html#Type_naming "cpp/language/type"). 
  * [Ref-qualifier](member_functions.html#ref-qualified_member_functions "cpp/language/member functions") in [member function declaration](member_functions.html "cpp/language/member functions"). 

| (since C++11)  
---|---  
  
#### || (including or)

  * [Logical or operator](operator_logical.html "cpp/language/operator logical"); part of operator|| in [operator overloading](operators.html#Rarely_overloaded_operators "cpp/language/operators"). 



#### <<

  * [Bitwise shift operator](operator_arithmetic.html#Bitwise_shift_operators "cpp/language/operator arithmetic"); part of operator<< in operator overloading ([bitwise operator](operators.html#Bitwise_arithmetic_operators "cpp/language/operators") or [stream insertion operator](operators.html#Stream_extraction_and_insertion "cpp/language/operators")). 



#### >>

  * [Bitwise shift operator](operator_arithmetic.html#Bitwise_shift_operators "cpp/language/operator arithmetic"); part of operator>> in operator overloading ([bitwise operator](operators.html#Bitwise_arithmetic_operators "cpp/language/operators") or [stream extraction operator](operators.html#Stream_extraction_and_insertion "cpp/language/operators")). 



#### <<=

  * [Compound assignment operator](operator_assignment.html "cpp/language/operator assignment"); part of operator<<= in [operator overloading](operators.html "cpp/language/operators"). 



#### >>=

  * [Compound assignment operator](operator_assignment.html "cpp/language/operator assignment"); part of operator>>= in [operator overloading](operators.html "cpp/language/operators"). 



#### ++

  * [Increment operator](operator_incdec.html "cpp/language/operator incdec"); part of operator++ in [operator overloading](operators.html "cpp/language/operators"). 



#### \--

  * [Decrement operator](operator_incdec.html "cpp/language/operator incdec"); part of operator\-- in [operator overloading](operators.html "cpp/language/operators"). 



### References

  * C++23 standard (ISO/IEC 14882:2024): 



    

  * 5.12 Operators and punctuators [lex.operators] 



  * C++20 standard (ISO/IEC 14882:2020): 



    

  * 5.12 Operators and punctuators [lex.operators] 



  * C++17 standard (ISO/IEC 14882:2017): 



    

  * 5.12 Operators and punctuators [lex.operators] 



  * C++14 standard (ISO/IEC 14882:2014): 



    

  * 2.13 Operators and punctuators [lex.operators] 



  * C++11 standard (ISO/IEC 14882:2011): 



    

  * 2.13 Operators and punctuators [lex.operators] 



  * C++03 standard (ISO/IEC 14882:2003): 



    

  * 2.12 Operators and punctuators [lex.operators] 



  * C++98 standard (ISO/IEC 14882:1998): 



    

  * 2.12 Operators and punctuators [lex.operators] 



### See also

[ Alternative representations ](operator_alternative.html "cpp/language/operator alternative") |  alternative spellings for certain operators  
---|---  
[C documentation](../../c/language/punctuators.html "c/language/punctuators") for Punctuation
