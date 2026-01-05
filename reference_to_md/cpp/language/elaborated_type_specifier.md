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
  
[Classes](classes.html "cpp/language/classes")  
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
**Elaborated type specifier**  
[Attributes](attributes.html "cpp/language/attributes") (C++11)  
  
| Declarators  
---  
[Reference](reference.html "cpp/language/reference")  
[Pointer](pointer.html "cpp/language/pointer")  
[Array](array.html "cpp/language/array")  
Block declarations  
[Simple-declaration](declarations.html "cpp/language/declarations")  
→[Structured binding declaration](structured_binding.html "cpp/language/structured binding") (C++17)  
[Alias declaration](type_alias.html "cpp/language/type alias") (C++11)  
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
  
  
  


Elaborated type specifiers may be used to refer to a previously-declared class name (class, struct, or union) or to a previously-declared enum name even if the name was [hidden by a non-type declaration](lookup.html "cpp/language/lookup"). They may also be used to declare new class names. 

## Contents

  * [1 Syntax](elaborated_type_specifier.html#Syntax)
  * [2 Explanation](elaborated_type_specifier.html#Explanation)
  * [3 Keywords](elaborated_type_specifier.html#Keywords)
  * [4 References](elaborated_type_specifier.html#References)

  
---  
  
### Syntax  
  
---  
class-key class-name |  (1)  |   
`**enum**` enum-name |  (2)  |   
class-key attr ﻿(optional) identifier `**;**` |  (3)  |   
class-key |  \-  |  one of [class](../keyword/class.html "cpp/keyword/class"), [struct](../keyword/struct.html "cpp/keyword/struct"), [union](../keyword/union.html "cpp/keyword/union")  
---|---|---  
class-name |  \-  |  the name of a previously-declared class type, optionally [qualified](name.html#Qualified_identifiers "cpp/language/identifiers"), or an identifier not previously declared as a type name   
enum-name |  \-  |  the name of a previously-declared enumeration type, optionally [qualified](name.html#Qualified_identifiers "cpp/language/identifiers")  
attr |  \-  |  (since C++11) any number of [attributes](attributes.html "cpp/language/attributes")  
  
1) Elaborated type specifier for a class type.

2) Elaborated type specifier for an enumeration type.

3) A declaration that consists solely of an elaborated type specifier always declares a class type named by identifier in the [scope](scope.html "cpp/language/scope") that contains the declaration.

[Opaque enum declaration](enum.html "cpp/language/enum") resembles form (3), but the enum type is a complete type after an opaque enum declaration. 

### Explanation

Form (3) is a special case of elaborated type specifier, usually referred to as _forward declaration_ of classes, for the description of form (3), see [Forward declaration](class.html#Forward_declaration "cpp/language/class"). The following only apply to form (1) and (2). 

The class-name or enum-name in the elaborated type specifier may either be a simple identifier or be a [qualified-id](name.html#Qualified_identifiers "cpp/language/identifiers"). The name is looked up using [unqualified name lookup](unqualified_lookup.html "cpp/language/unqualified lookup") or [qualified name lookup](qualified_lookup.html "cpp/language/qualified lookup"), depending on their appearance. But in either case, non-type names are not considered. 
    
    
    class T
    {
    public:
        class U;
    private:
        int U;
    };
     
    int main()
    {
        int T;
        T t; // error: the local variable T is found
        class T t; // OK: finds ::T, the local variable T is ignored
        T::U* u; // error: lookup of T::U finds the private data member
        class T::U* u; // OK: the data member is ignored
    }

If the name lookup does not find a previously declared type name, the elaborated-type-specifier is introduced by `**class**`, `**struct**`, or `**union**` (i.e. not by `**enum**`), and class-name is an unqualified identifier, then the elaborated-type-specifier is a class declaration of the class-name, and the target scope is the nearest enclosing namespace or block scope. 
    
    
    template<typename T>
    struct Node
    {
        struct Node* Next; // OK: lookup of Node finds the injected-class-name
        struct Data* Data; // OK: declares type Data at global scope
                           // and also declares the data member Data
        friend class ::List; // error: cannot introduce a qualified name
        enum Kind* kind; // error: cannot introduce an enum
    };
     
    Data* p; // OK: struct Data has been declared

If the name refers to a [typedef name](typedef.html "cpp/language/typedef"), a [type alias](type_alias.html "cpp/language/type alias"), a [template type parameter](template_parameters.html#Type_template_parameter "cpp/language/template parameters"), or an [alias template specialization](type_alias.html "cpp/language/type alias"), the program is ill-formed, otherwise the elaborated type specifier introduces the name into the declaration the same way a [simple type specifier](declarations.html#Specifiers "cpp/language/declarations") introduces its type-name. 
    
    
    template<typename T>
    class Node
    {
        friend class T; // error: type parameter cannot appear in an elaborated type specifier;
                        // note that similar declaration `friend T;` is OK.
    };
     
    class A {};
    enum b { f, t };
     
    int main()
    {
        class A a; // OK: equivalent to 'A a;'
        enum b flag; // OK: equivalent to 'b flag;'
    }

The class-key or `**enum**` keyword present in the elaborated-type-specifier must agree in kind with the declaration to which the name in the elaborated-type-specifier refers. 

  * the `**enum**` keyword must be used to refer to an [enumeration type](enum.html "cpp/language/enum") (whether scoped or unscoped) 
  * the `**union**` class-key must be used to refer to a [union](union.html "cpp/language/union")
  * either the `**class**` or `**struct**` class-key must be used to refer to a non-union class type (the keywords `**class**` and `**struct**` are interchangeable here). 


    
    
    enum class E { a, b };
    enum E x = E::a; // OK
    enum class E y = E::b; // error: 'enum class' cannot introduce an elaborated type specifier
     
    struct A {};
    class A a; // OK

When used as a [template argument](template_parameters.html#Template_arguments "cpp/language/template parameters"), class T is a type template parameter named `T`, not an unnamed constant parameter whose type `T` is introduced by elaborated type specifier. 

### Keywords

[`class`](../keyword/class.html "cpp/keyword/class"), [`struct`](../keyword/struct.html "cpp/keyword/struct"), [`union`](../keyword/union.html "cpp/keyword/union"), [`enum`](../keyword/enum.html "cpp/keyword/enum")

### References

  * C++23 standard (ISO/IEC 14882:2024): 



    

  * 6.5.6 Elaborated type specifiers [basic.lookup.elab] 



    

  * 9.2.9.4 Elaborated type specifiers [dcl.type.elab] 



  * C++20 standard (ISO/IEC 14882:2020): 



    

  * 6.5.4 Elaborated type specifiers [basic.lookup.elab] 



    

  * 9.2.8.3 Elaborated type specifiers [dcl.type.elab] 



  * C++17 standard (ISO/IEC 14882:2017): 



    

  * 6.4.4 Elaborated type specifiers [basic.lookup.elab] 



    

  * 10.1.7.3 Elaborated type specifiers [dcl.type.elab] 



  * C++14 standard (ISO/IEC 14882:2014): 



    

  * 3.4.4 Elaborated type specifiers [basic.lookup.elab] 



    

  * 7.1.6.3 Elaborated type specifiers [dcl.type.elab] 



  * C++11 standard (ISO/IEC 14882:2011): 



    

  * 3.4.4 Elaborated type specifiers [basic.lookup.elab] 



    

  * 7.1.6.3 Elaborated type specifiers [dcl.type.elab] 



  * C++98 standard (ISO/IEC 14882:1998): 



    

  * 3.4.4 Elaborated type specifiers [basic.lookup.elab] 



    

  * 7.1.5.3 Elaborated type specifiers [dcl.type.elab] 



| This section is incomplete  
Reason: probably pull most of 9.1[class.name]/2-3 out of cpp/language/class   
---|---
