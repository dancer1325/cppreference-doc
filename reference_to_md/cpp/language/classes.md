[C++](../../cpp.html "cpp")

[Compiler support](../compiler_support.html "cpp/compiler support")  
---  
[Freestanding and hosted](../freestanding.html "cpp/freestanding")  
[Language](../language.html "cpp/language")  
[Standard library](../standard_library.html "cpp/standard library")  
[Standard library headers](../headers.html "cpp/header")  
[Named requirements](../iterator/concepts.html "cpp/named req")  
[Feature test macros](../experimental/feature_test.html "cpp/feature test") (C++20)  
[Language support library](../utility.html#Language_support "cpp/utility")  
[Concepts library](../concepts.html "cpp/concepts") (C++20)  
[Diagnostics library](../error.html "cpp/error")  
[Memory management library](../memory.html "cpp/memory")  
[Metaprogramming library](../meta.html "cpp/meta") (C++11)  
[General utilities library](../utility.html "cpp/utility")  
[Containers library](../container.html "cpp/container")  
[Iterators library](../iterator.html "cpp/iterator")  
[Ranges library](../ranges.html "cpp/ranges") (C++20)  
[Algorithms library](../algorithm.html "cpp/algorithm")  
[Strings library](../string.html "cpp/string")  
[Text processing library](../text.html "cpp/text")  
[Numerics library](../numeric.html "cpp/numeric")  
[Date and time library](../chrono.html "cpp/chrono")  
[Input/output library](../io.html "cpp/io")  
[Filesystem library](../filesystem.html "cpp/filesystem") (C++17)  
[Concurrency support library](../atomic.html "cpp/thread") (C++11)  
[Execution control library](../experimental/execution.html "cpp/execution") (C++26)  
[Technical specifications](../experimental.html "cpp/experimental")  
[Symbols index](../symbol_index.html "cpp/symbol index")  
[External libraries](../links/libs.html "cpp/links/libs")  
  


[C++ language](../language.html "cpp/language")

General topics  
---  
| [Preprocessor](../preprocessor.html "cpp/preprocessor")  
---  
[Comments](../comments.html "cpp/comment")  
  
| [Keywords](../keywords.html "cpp/keyword")  
---  
[Escape sequences](escape.html "cpp/language/escape")  
  
[Flow control](statements.html "cpp/language/statements")  
Conditional execution statements  
| [`if`](if.html "cpp/language/if")  
---  
  
| [`switch`](switch.html "cpp/language/switch")  
---  
  
Iteration statements (loops)  
| [`for`](for.html "cpp/language/for")  
---  
[range-`for`](range-for.html "cpp/language/range-for") (C++11)  
  
| [`while`](while.html "cpp/language/while")  
---  
[`do-while`](do.html "cpp/language/do")  
  
Jump statements  
| [`continue`](continue.html "cpp/language/continue") \- [`break`](break.html "cpp/language/break")  
---  
  
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
  
  
  
Specifiers  
| [`const`/`volatile`](cv.html "cpp/language/cv")  
---  
[`decltype`](decltype.html "cpp/language/decltype") (C++11)  
[`auto`](auto.html "cpp/language/auto") (C++11)  
  
| [`constexpr`](constexpr.html "cpp/language/constexpr") (C++11)  
---  
[`consteval`](consteval.html "cpp/language/consteval") (C++20)  
[`constinit`](constinit.html "cpp/language/constinit") (C++20)  
  
[Storage duration specifiers](storage_duration.html "cpp/language/storage duration")  
[Initialization](initialization.html "cpp/language/initialization")  
| [Default-initialization](default_initialization.html "cpp/language/default initialization")  
---  
[Value-initialization](value_initialization.html "cpp/language/value initialization")  
[Zero-initialization](zero_initialization.html "cpp/language/zero initialization")  
[Copy-initialization](copy_initialization.html "cpp/language/copy initialization")  
[Direct-initialization](direct_initialization.html "cpp/language/direct initialization")  
  
| [Aggregate initialization](aggregate_initialization.html "cpp/language/aggregate initialization")  
---  
[List-initialization](list_initialization.html "cpp/language/list initialization") (C++11)` `  
[Constant initialization](constant_initialization.html "cpp/language/constant initialization")  
[Reference initialization](reference_initialization.html "cpp/language/reference initialization")  
  
  
  
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
[Type alias declaration](type_alias.html "cpp/language/type alias") (C++11)  
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
  
| [`delete` expression](delete.html "cpp/language/delete")  
---  
  
**Classes**  
| [Class declaration](class.html "cpp/language/class")  
---  
[Constructors](initializer_list.html "cpp/language/constructor")  
[`this` pointer](this.html "cpp/language/this")  
  
| [Access specifiers](access.html "cpp/language/access")  
---  
[`friend` specifier](friend.html "cpp/language/friend")  
  
  
  
Class-specific function properties  
| [Virtual function](virtual.html "cpp/language/virtual")  
---  
[`override` specifier](override.html "cpp/language/override") (C++11)` `  
[`final` specifier](final.html "cpp/language/final") (C++11)  
  
| [`explicit`](explicit.html "cpp/language/explicit") (C++11)  
---  
[`static`](static.html "cpp/language/static")  
  
  
  
Special member functions  
| [Default constructor](default_constructor.html "cpp/language/default constructor")  
---  
[Copy constructor](copy_constructor.html "cpp/language/copy constructor")  
[Move constructor](move_constructor.html "cpp/language/move constructor") (C++11)  
  
| [Copy assignment](as_operator.html "cpp/language/as operator")  
---  
[Move assignment](move_operator.html "cpp/language/move operator") (C++11)  
[Destructor](destructor.html "cpp/language/destructor")  
  
[Templates](templates.html "cpp/language/templates")  
| [Class template](class_template.html "cpp/language/class template")  
---  
[Function template](function_template.html "cpp/language/function template")  
  
| [Template specialization](template_specialization.html "cpp/language/template specialization")  
---  
[Parameter packs](parameter_pack.html "cpp/language/pack") (C++11)  
  
Miscellaneous  
| [Inline assembly](asm.html "cpp/language/asm")  
---  
  
| [History of C++](history.html "cpp/language/history")  
---  
  


**Classes**

General  
---  
**Overview**  
[`class`/`struct` types](class.html "cpp/language/class")  
[`union` types](union.html "cpp/language/union")  
[Injected-class-name](injected-class-name.html "cpp/language/injected-class-name")  
[Class property specifiers](class_property_specifiers.html "cpp/language/class property specifiers") (C++26)  
Members  
[Data members](data_members.html "cpp/language/data members")  
[Static members](static.html "cpp/language/static")  
[The `this` pointer](this.html "cpp/language/this")  
[Nested classes](nested_classes.html "cpp/language/nested types")  
[Member templates](member_template.html "cpp/language/member template")  
[Bit-fields](bit_field.html "cpp/language/bit field")  
[`using`-declarations](using_declaration.html "cpp/language/using declaration")  
[Member functions](member_functions.html "cpp/language/member functions")  
[Member access specifiers](access.html "cpp/language/access")  
[Constructors and member initializer lists](initializer_list.html "cpp/language/constructor")  
[Default member initializer](data_members.html#Member_initialization "cpp/language/data members") (C++11)  
[`friend` specifier](friend.html "cpp/language/friend")  
[`explicit` specifier](explicit.html "cpp/language/explicit")  
[Converting constructor](converting_constructor.html "cpp/language/converting constructor")  
Special member functions  
[Default constructor](default_constructor.html "cpp/language/default constructor")  
[Copy constructor](copy_constructor.html "cpp/language/copy constructor")  
[Move constructor](move_constructor.html "cpp/language/move constructor") (C++11)  
[Copy assignment operator](as_operator.html "cpp/language/copy assignment")  
[Move assignment operator](move_operator.html "cpp/language/move assignment") (C++11)  
[Destructor](destructor.html "cpp/language/destructor")  
Inheritance  
[Base and derived classes](derived_class.html "cpp/language/derived class")  
[Empty base optimization (EBO)](ebo.html "cpp/language/ebo")  
[Virtual member functions](virtual.html "cpp/language/virtual")  
[Pure virtual functions and abstract classes](abstract_class.html "cpp/language/abstract class")  
[`override` specifier](override.html "cpp/language/override") (C++11)  
[`final` specifier](final.html "cpp/language/final") (C++11)  
  


A class is a user-defined type. 

A class type is defined by class-specifier, which appears in decl-specifier-seq of the [declaration](declarations.html "cpp/language/declarations") syntax. See [class declaration](class.html "cpp/language/class") for the syntax of the class specifier. 

A class can have the following kinds of members: 

1) data members:

a) [non-static data members](data_members.html "cpp/language/data members"), including [bit-fields](bit_field.html "cpp/language/bit field").

b) [static data members](static.html#Static_data_members "cpp/language/static")

2) member functions:

a) [non-static member functions](member_functions.html "cpp/language/member functions")

b) [static member functions](static.html#Static_member_functions "cpp/language/static")

3) nested types:

a) [nested classes](nested_classes.html "cpp/language/nested classes") and [enumerations](enum.html "cpp/language/enum") defined within the class definition

b) aliases of existing types, defined with [`typedef`](typedef.html "cpp/language/typedef") or [type alias](type_alias.html "cpp/language/type alias") (since C++11)declarations

c) the name of the class within its own definition acts as a public member type alias of itself for the purpose of [lookup](unqualified_lookup.html#Injected_class_name "cpp/language/unqualified lookup") (except when used to name a [constructor](initializer_list.html "cpp/language/constructor")): this is known as _[injected-class-name](injected-class-name.html "cpp/language/injected-class-name")_

4) [enumerators](enum.html "cpp/language/enum") from all unscoped enumerations defined within the class, or introduced by [using-declarations](using_declaration.html "cpp/language/using declaration") or [using-enum-declarations](enum.html#Using-enum-declaration "cpp/language/enum")(since C++20)

5) [member templates](member_template.html "cpp/language/member template") (variable templates, (since C++14)class templates or function templates) may appear in the body of any non-local class/struct/union.

All members are defined at once in the class definition, they cannot be added to an already-defined class (unlike the members of namespaces) 

A member of a class `T` cannot use `T` as its name if the member is 

  * a static data member, 
  * a member function, 
  * a member type, 
  * a member template, 
  * an enumerator of an enumeration (unless the enumeration is scoped)(since C++11), or 
  * a member of a member anonymous union. 



However, a non-static data member may use the name `T` as long as there are no user-declared constructors. 

A class with at least one declared or inherited [virtual](virtual.html "cpp/language/virtual") member function is _polymorphic_. Objects of this type are [polymorphic objects](objects.html#Polymorphic_objects "cpp/language/object") and have runtime type information stored as part of the object representation, which may be queried with [`dynamic_cast`](dynamic_cast.html "cpp/language/dynamic cast") and [`typeid`](typeid.html "cpp/language/typeid"). Virtual member functions participate in dynamic binding. 

A class with at least one declared or inherited pure virtual member function is an [abstract class](abstract_class.html "cpp/language/abstract class"). Objects of this type cannot be created. 

A class with a [constexpr](constexpr.html "cpp/language/constexpr") constructor is a [LiteralType](../named_req/LiteralType.html "cpp/named req/LiteralType"): objects of this type can be manipulated by [constexpr](constexpr.html "cpp/language/constexpr") functions at compile time.  | (since C++11)  
---|---  
  
## Contents

  * [1 Properties of classes](classes.html#Properties_of_classes)
    * [1.1 Trivially copyable class](classes.html#Trivially_copyable_class)
    * [1.2 Trivial class](classes.html#Trivial_class)
    * [1.3 Standard-layout class](classes.html#Standard-layout_class)
    * [1.4 Implicit-lifetime class](classes.html#Implicit-lifetime_class)
    * [1.5 POD class](classes.html#POD_class)
  * [2 Defect reports](classes.html#Defect_reports)

  
---  
  
### Properties of classes

####  Trivially copyable class

A _trivially copyable class_ is a class that 

  * has at least one eligible [copy constructor](copy_constructor.html#Eligible_copy_constructor "cpp/language/copy constructor"), [move constructor](move_constructor.html#Eligible_move_constructor "cpp/language/move constructor"), [copy assignment operator](as_operator.html#Eligible_copy_assignment_operator "cpp/language/copy assignment"), or [move assignment operator](move_operator.html#Eligible_move_assignment_operator "cpp/language/move assignment"), 
  * each eligible copy constructor is [trivial](copy_constructor.html#Trivial_copy_constructor "cpp/language/copy constructor")
  * each eligible move constructor is [trivial](move_constructor.html#Trivial_move_constructor "cpp/language/move constructor")
  * each eligible copy assignment operator is [trivial](as_operator.html#Trivial_copy_assignment_operator "cpp/language/copy assignment")
  * each eligible move assignment operator is [trivial](move_operator.html#Trivial_move_assignment_operator "cpp/language/move assignment"), and 
  * has a non-deleted [trivial destructor](destructor.html#Trivial_destructor "cpp/language/destructor"). 

| 

####  Trivial class

A _trivial class_ is a class that 

  * is trivially copyable, and 
  * has one or more [eligible default constructors](default_constructor.html#Eligible_default_constructor "cpp/language/default constructor") such that each is [trivial](default_constructor.html#Trivial_default_constructor "cpp/language/default constructor"). 

| (deprecated in C++26)  
---|---  
  
####  Standard-layout class

A _standard-layout class_ is a class that 

  * has no [non-static data members](data_members.html "cpp/language/data members") of type non-standard-layout class (or array of such types) or reference, 
  * has no [virtual functions](virtual.html "cpp/language/virtual") and no [virtual base classes](derived_class.html#Virtual_base_classes "cpp/language/derived class"), 
  * has the same [access control](access.html "cpp/language/access") for all non-static data members, 
  * has no non-standard-layout base classes, 
  * only one class in the hierarchy has non-static data members, and 
  * Informally, none of the base classes has the same type as the first non-static data member. Or, formally: given the class as S, has no element of the set M(S) of types as a base class, where M(X) for a type X is defined as: 



    

  * If X is a non-union class type with no (possibly inherited) non-static data members, the set M(X) is empty. 
  * If X is a non-union class type whose first non-static data member has type X0 (where said member may be an anonymous union), the set M(X) consists of X0 and the elements of M(X0). 
  * If X is a union type, the set M(X) is the union of all M(Ui) and the set containing all Ui, where each Ui is the type of the ith non-static data member of X. 
  * If X is an array type with element type Xe, the set M(X) consists of Xe and the elements of M(Xe). 
  * If X is a non-class, non-array type, the set M(X) is empty. 



A _standard-layout struct_ is a standard-layout class defined with the class keyword [`struct`](../keyword/struct.html "cpp/keyword/struct") or the class keyword [`class`](../keyword/class.html "cpp/keyword/class"). A _standard-layout union_ is a standard-layout class defined with the class keyword [`union`](../keyword/union.html "cpp/keyword/union"). 

(since C++11)  
  
#### Implicit-lifetime class

An _implicit-lifetime class_ is a class that 

  * is an [aggregate](aggregate_initialization.html "cpp/language/aggregate initialization") whose destructor is not user-declared(until C++11)[user-provided](function.html#User-provided_functions "cpp/language/function")(since C++11), or 
  * has at least one trivial eligible constructor and a trivial, non-deleted destructor. 



Notes: the implicit-lifetime property is clarified by defect report [P0593R6](https://wg21.link/P0593R6). 

#### POD class

A _POD class_ is a class that  | 

  * is an [aggregate](aggregate_initialization.html "cpp/language/aggregate initialization"), 
  * has no user-declared copy assignment operator, 
  * has no user-declared destructor, and 
  * has no non-static data members of type non-POD class (or array of such types) or reference. 

| (until C++11)  
---|---  
  
  * is a trivial class, 
  * is a standard-layout class, and 
  * has no non-static data members of type non-POD class (or array of such types). 

| (since C++11)  
  
A _POD struct_ is a non-union POD class. A _POD union_ is a union that is a POD class. 

(deprecated in C++20)  
  
### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[CWG 148](https://cplusplus.github.io/CWG/issues/148.html) | C++98  | POD classes could not contain pointers to member,  
which are themselves POD (scalar) types  | restriction removed   
[CWG 383](https://cplusplus.github.io/CWG/issues/383.html) | C++98  | copy assignment operators or destructors could be  
user-declared in POD classes if they are not defined  | not allowed   
[CWG 1363](https://cplusplus.github.io/CWG/issues/1363.html) | C++11  | a class that has both trivial default constructors and non-trivial  
default constructors at the same time could be trivial  | it is non-trivial   
[CWG 1496](https://cplusplus.github.io/CWG/issues/1496.html) | C++11  | a class that only has constructors that  
are all defined as deleted could be trivial  | it is non-trivial   
[CWG 1672](https://cplusplus.github.io/CWG/issues/1672.html) | C++11  | a class could be a standard-layout class  
if it has multiple empty base classes  | it is not a standard-layout class   
[CWG 1734](https://cplusplus.github.io/CWG/issues/1734.html) | C++11  | a trivially copyable class could not have non-trivial  
deleted copy/move constructors/assignment operators  | can be trivial if deleted   
[CWG 1813](https://cplusplus.github.io/CWG/issues/1813.html) | C++11  | a class was never a standard-layout class if it has a  
base class that inherits a non-static data member  | it can be a standard-layout class   
[CWG 1881](https://cplusplus.github.io/CWG/issues/1881.html) | C++11  | for a standard-layout class and its base classes,  
unnamed bit-fields might be declared in a  
different class declaring the data members  | all non-static data members  
and bit-fields need to be first  
declared in the same class   
[CWG 1909](https://cplusplus.github.io/CWG/issues/1909.html) | C++98  | a member template could have the same name as its class  | prohibited   
[CWG 2120](https://cplusplus.github.io/CWG/issues/2120.html) | C++11  | the definition of M(X) in determining a standard-  
layout class did not consider the case of  
a class whose first member is an array  | addressed this case in  
the definition of M(X)   
[CWG 2605](https://cplusplus.github.io/CWG/issues/2605.html) | C++98  | an implicit-lifetime class could have a user-provided destructor  | prohibited 
