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
**Parameter packs** (C++11)  
  
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
  
  
  


[ Expressions](expressions.html "cpp/language/expressions")

General  
---  
| [Value categories](value_category.html "cpp/language/value category")  
---  
[Order of evaluation](eval_order.html "cpp/language/eval order")  
[Constant expressions](constant_expression.html "cpp/language/constant expression")  
[Primary expressions](expressions.html#Primary_expressions "cpp/language/expressions")  
  
| [Lambda expressions](lambda.html "cpp/language/lambda") (C++11)  
---  
[Requires expressions](requires.html "cpp/language/requires") (C++20)  
[Pack indexing expression](pack_indexing.html#Pack_indexing_expression "cpp/language/pack indexing") (C++26)  
[Potentially-evaluated expressions](expressions.html#Potentially-evaluated_expressions "cpp/language/expressions")  
  
Literals  
| [Integer literals](integer_literal.html "cpp/language/integer literal")  
---  
[Floating-point literals](floating_literal.html "cpp/language/floating literal")  
[Boolean literals](bool_literal.html "cpp/language/bool literal")  
[Character literals](character_literal.html "cpp/language/character literal")  
  
| [Escape sequences](escape.html "cpp/language/escape")  
---  
[String literals](string_literal.html "cpp/language/string literal")  
[Null pointer literal](nullptr.html "cpp/language/nullptr") (C++11)  
[User-defined literal](user_literal.html "cpp/language/user literal") (C++11)  
  
Operators  
| [Assignment operators](operator_assignment.html "cpp/language/operator assignment")  
---  
[Increment and decrement](operator_incdec.html "cpp/language/operator incdec")  
[Arithmetic operators](operator_arithmetic.html "cpp/language/operator arithmetic")  
[Logical operators](operator_logical.html "cpp/language/operator logical")  
[Comparison operators](operator_comparison.html "cpp/language/operator comparison")  
[Member access operators](operator_member_access.html "cpp/language/operator member access")  
[Other operators](operator_other.html "cpp/language/operator other")  
[`new`-expression](new.html "cpp/language/new")  
[`delete`-expression](delete.html "cpp/language/delete")  
[`throw`-expression](throw.html "cpp/language/throw")  
  
| [`alignof`](alignof.html "cpp/language/alignof")  
---  
[`sizeof`](sizeof.html "cpp/language/sizeof")  
[`sizeof...`](sizeof....html "cpp/language/sizeof...") (C++11)  
[`typeid`](typeid.html "cpp/language/typeid")  
[`noexcept`](noexcept.html "cpp/language/noexcept") (C++11)  
[Fold expressions](fold.html "cpp/language/fold") (C++17)  
[Alternative representations of operators](operator_alternative.html "cpp/language/operator alternative")  
[Precedence and associativity](operator_precedence.html "cpp/language/operator precedence")  
[Operator overloading](operators.html "cpp/language/operators")  
[Default comparisons](default_comparisons.html "cpp/language/default comparisons") (C++20)  
  
Conversions  
| [Implicit conversions](implicit_cast.html "cpp/language/implicit conversion")  
---  
[Explicit conversions](explicit_cast.html "cpp/language/explicit cast")  
[Usual arithmetic conversions](usual_arithmetic_conversions.html "cpp/language/usual arithmetic conversions")  
[User-defined conversion](cast_operator.html "cpp/language/cast operator")  
  
| [`const_cast`](const_cast.html "cpp/language/const cast")  
---  
[`static_cast`](static_cast.html "cpp/language/static cast")  
[`dynamic_cast`](dynamic_cast.html "cpp/language/dynamic cast")  
[`reinterpret_cast`](reinterpret_cast.html "cpp/language/reinterpret cast")  
  


[ Templates](templates.html "cpp/language/templates")

[Template parameters](template_parameters.html "cpp/language/template parameters")  
---  
[Template arguments](template_arguments.html "cpp/language/template arguments")  
[Class templates](class_template.html "cpp/language/class template")  
[Function templates](function_template.html "cpp/language/function template")  
[Class member templates](member_template.html "cpp/language/member template")  
[Variable templates](variable_template.html "cpp/language/variable template") (C++14)  
[Template argument deduction](template_argument_deduction.html "cpp/language/template argument deduction")  
[Class template argument deduction](ctad.html "cpp/language/class template argument deduction") (C++17)  
[Explicit (full) specialization](template_specialization.html "cpp/language/template specialization")  
[Partial specialization](partial_specialization.html "cpp/language/partial specialization")  
[Dependent names](dependent_name.html "cpp/language/dependent name")  
**Packs** (C++11)  
[sizeof...](sizeof....html "cpp/language/sizeof...") (C++11)  
[Fold expressions](fold.html "cpp/language/fold") (C++17)  
[Pack indexing](pack_indexing.html "cpp/language/pack indexing") (C++26)  
[SFINAE](sfinae.html "cpp/language/sfinae")  
[Constraints and concepts](constraints.html "cpp/language/constraints") (C++20)  
[requires expression](requires.html "cpp/language/requires") (C++20)  
  


A pack is a C++ entity that defines one of the following: 

  * a parameter pack 



    

  * template parameter pack 
  * function parameter pack 



  * [lambda init-capture pack](lambda.html#Lambda_capture "cpp/language/lambda")

| (since C++20)  
---|---  
  
  * [structured binding pack](structured_binding.html "cpp/language/structured binding")

| (since C++26)  
---|---  
  
A template parameter pack is a template parameter that accepts zero or more template arguments (constants, types, or templates). A function parameter pack is a function parameter that accepts zero or more function arguments. 

A lambda init-capture pack is a lambda capture that introduces an init-capture for each of the elements in the pack expansion of its initializer.  | (since C++20)  
---|---  
A structured binding pack is an identifier in the structured binding declaration that introduces zero or more structured bindings.  | (since C++26)  
---|---  
  
The number of elements of a pack is equal to: 

  * the number of arguments provided for the parameter pack, if the pack is a template or function parameter pack, 



  * the number of elements in the pack expansion of its initializer, if the pack is a lambda init-capture pack, 

| (since C++20)  
---|---  
  
  * structured binding size of the initializer less the number of non-pack elements in the structured binding declaration, if the pack is a structured binding pack. 

| (since C++26)  
---|---  
  
A template with at least one parameter pack is called a _variadic template_. 

## Contents

  * [1 Syntax](parameter_pack.html#Syntax)
  * [2 Explanation](parameter_pack.html#Explanation)
  * [3 Pack expansion](parameter_pack.html#Pack_expansion)
  * [4 Expansion loci](parameter_pack.html#Expansion_loci)
    * [4.1 Function argument lists](parameter_pack.html#Function_argument_lists)
    * [4.2 Parenthesized initializers](parameter_pack.html#Parenthesized_initializers)
    * [4.3 Brace-enclosed initializers](parameter_pack.html#Brace-enclosed_initializers)
    * [4.4 Template argument lists](parameter_pack.html#Template_argument_lists)
    * [4.5 Function parameter list](parameter_pack.html#Function_parameter_list)
    * [4.6 Template parameter list](parameter_pack.html#Template_parameter_list)
    * [4.7 Base specifiers and member initializer lists](parameter_pack.html#Base_specifiers_and_member_initializer_lists)
    * [4.8 Lambda captures](parameter_pack.html#Lambda_captures)
    * [4.9 The sizeof... operator](parameter_pack.html#The_sizeof..._operator)
    * [4.10 Dynamic exception specifications](parameter_pack.html#Dynamic_exception_specifications)
    * [4.11 Alignment specifier](parameter_pack.html#Alignment_specifier)
    * [4.12 Attribute list](parameter_pack.html#Attribute_list)
    * [4.13 Fold expressions](parameter_pack.html#Fold_expressions)
    * [4.14 Using-declarations](parameter_pack.html#Using-declarations)
    * [4.15 Pack indexing](parameter_pack.html#Pack_indexing)
    * [4.16 Friend declarations](parameter_pack.html#Friend_declarations)
    * [4.17 Fold expanded constraints](parameter_pack.html#Fold_expanded_constraints)
  * [5 Notes](parameter_pack.html#Notes)
  * [6 Example](parameter_pack.html#Example)
  * [7 Defect reports](parameter_pack.html#Defect_reports)
  * [8 See also](parameter_pack.html#See_also)

  
---  
  
### Syntax

Template parameter pack (appears in [alias template](type_alias.html "cpp/language/type alias"), [class template](class_template.html "cpp/language/class template"), [variable template](variable_template.html "cpp/language/variable template")(since C++14), [concept](constraints.html "cpp/language/constraints")(since C++20) and [function template](function_template.html "cpp/language/function template") parameter lists)   
  
---  
type `**...**` pack-name ﻿(optional) |  (1)  |   
`**typename**``**|**``**class**` `**...**` pack-name ﻿(optional) |  (2)  |   
type-constraint `**...**` pack-name ﻿(optional) |  (3)  |  (since C++20)  
`**template**` `**<**` parameter-list `**>**` `**class**` `**...**` pack-name ﻿(optional) |  (4)  |  (until C++17)  
`**template**` `**<**` parameter-list `**>**` `**typename**``**|**``**class**` `**...**` pack-name ﻿(optional) |  (4)  |  (since C++17)  
  
Function parameter pack (a form of [declarator](declarations.html "cpp/language/declarations"), appears in a function parameter list of a variadic function template)   
  
---  
pack-name `**...**` pack-param-name ﻿(optional) |  (5)  |   
For the syntax of non-parameter packs, see [lambda init-capture pack](lambda.html#Lambda_capture "cpp/language/lambda") and [structured binding pack](structured_binding.html "cpp/language/structured binding")(since C++26).  | (since C++20)  
---|---  
  
Pack expansion (appears in a body of a template)   
  
---  
pattern `**...**` |  (6)  |   
  
1) A constant template parameter pack with an optional name

2) A type template parameter pack with an optional name

3) A [constrained](constraints.html "cpp/language/constraints") type template parameter pack with an optional name  | (since C++20)  
---|---  
  
4) A template template parameter pack with an optional name

5) A function parameter pack with an optional name

6) Pack expansion: expands to a list of zero or more `pattern`s. The pattern must include at least one pack.

### Explanation

A variadic class template can be instantiated with any number of template arguments: 
    
    
    template<class... Types>
    struct Tuple {};
     
    Tuple<> t0;           // Types contains no arguments
    Tuple<int> t1;        // Types contains one argument: int
    Tuple<int, float> t2; // Types contains two arguments: int and float
    Tuple<0> t3;          // error: 0 is not a type

A variadic function template can be called with any number of function arguments (the template arguments are deduced through [template argument deduction](template_argument_deduction.html "cpp/language/template argument deduction")): 
    
    
    template<class... Types>
    void f(Types... args);
     
    f();       // OK: args contains no arguments
    f(1);      // OK: args contains one argument: int
    f(2, 1.0); // OK: args contains two arguments: int and double

In a primary class template, the template parameter pack must be the final parameter in the template parameter list. In a function template, the template parameter pack may appear earlier in the list provided that all following parameters can be deduced from the function arguments, or have default arguments: 
    
    
    template<typename U, typename... Ts>    // OK: can deduce U
    struct valid;
    // template<typename... Ts, typename U> // Error: Ts... not at the end
    // struct Invalid;
     
    template<typename... Ts, typename U, typename=void>
    void valid(U, Ts...);    // OK: can deduce U
    // void valid(Ts..., U); // Can't be used: Ts... is a non-deduced context in this position
     
    valid(1.0, 1, 2, 3);     // OK: deduces U as double, Ts as {int, int, int}

If every valid specialization of a variadic template requires an empty template parameter pack, the program is ill-formed, no diagnostic required. 

### Pack expansion

A pattern followed by an ellipsis, in which the name of at least one pack appears at least once, is _expanded_ into zero or more instantiations of the pattern, where the name of the pack is replaced by each of the elements from the pack, in order. Instantiations of [alignment specifiers](parameter_pack.html#Alignment_specifier) are space-separated, other instantiations are comma-separated. 
    
    
    template<class... Us>
    void f(Us... pargs) {}
     
    template<class... Ts>
    void g(Ts... args)
    {
        f(&args...); // “&args...” is a pack expansion
                     // “&args” is its pattern
    }
     
    g(1, 0.2, "a"); // Ts... args expand to int E1, double E2, const char* E3
                    // &args... expands to &E1, &E2, &E3
                    // Us... pargs expand to int* E1, double* E2, const char** E3

If the names of two packs appear in the same pattern, they are expanded simultaneously, and they must have the same length: 
    
    
    template<typename...>
    struct Tuple {};
     
    template<typename T1, typename T2>
    struct Pair {};
     
    template<class... Args1>
    struct zip
    {
        template<class... Args2>
        struct with
        {
            typedef Tuple<Pair<Args1, Args2>...> type;
            // Pair<Args1, Args2>... is the pack expansion
            // Pair<Args1, Args2> is the pattern
        };
    };
     
    typedef zip<short, int>::with<unsigned short, unsigned>::type T1;
    // Pair<Args1, Args2>... expands to
    // Pair<short, unsigned short>, Pair<int, unsigned int> 
    // T1 is Tuple<Pair<short, unsigned short>, Pair<int, unsigned>>
     
    // typedef zip<short>::with<unsigned short, unsigned>::type T2;
    // error: pack expansion contains packs of different lengths

If a pack expansion is nested within another pack expansion, the packs that appear inside the innermost pack expansion are expanded by it, and there must be another pack mentioned in the enclosing pack expansion, but not in the innermost one: 
    
    
    template<class... Args>
    void g(Args... args)
    {
        f(const_cast<const Args*>(&args)...); 
        // const_cast<const Args*>(&args) is the pattern, it expands two packs
        // (Args and args) simultaneously
     
        f(h(args...) + args...); // Nested pack expansion:
        // inner pack expansion is "args...", it is expanded first
        // outer pack expansion is h(E1, E2, E3) + args..., it is expanded
        // second (as h(E1, E2, E3) + E1, h(E1, E2, E3) + E2, h(E1, E2, E3) + E3)
    }

When the number of elements in a pack is zero (empty pack), the instantiation of a pack expansion does not alter the syntactic interpretation of the enclosing construct, even in cases where omitting the pack expansion entirely would otherwise be ill-formed or would result in a syntax ambiguity. The instantiation produces an empty list. 
    
    
    template<class... Bases> 
    struct X : Bases... { };
     
    template<class... Args> 
    void f(Args... args) 
    {
        X<Args...> x(args...);
    }
     
    template void f<>(); // OK, X<> has no base classes
                         // x is a variable of type X<> that is value-initialized

### Expansion loci

Depending on where the expansion takes place, the resulting comma-separated (or space-separated for [alignment specifiers](parameter_pack.html#Alignment_specifier)) list is a different kind of list: function parameter list, member initializer list, attribute list, etc. The following is the list of all allowed contexts: 

#### Function argument lists

A pack expansion may appear inside the parentheses of a function call operator, in which case the largest expression or [brace-enclosed initializer list](initialization.html "cpp/language/initialization") to the left of the ellipsis is the pattern that is expanded: 
    
    
    f(args...);              // expands to f(E1, E2, E3)
    f(&args...);             // expands to f(&E1, &E2, &E3)
    f(n, ++args...);         // expands to f(n, ++E1, ++E2, ++E3);
    f(++args..., n);         // expands to f(++E1, ++E2, ++E3, n);
     
    f(const_cast<const Args*>(&args)...);
    // f(const_cast<const E1*>(&X1), const_cast<const E2*>(&X2), const_cast<const E3*>(&X3))
     
    f(h(args...) + args...); // expands to 
    // f(h(E1, E2, E3) + E1, h(E1, E2, E3) + E2, h(E1, E2, E3) + E3)

#### Parenthesized initializers

A pack expansion may appear inside the parentheses of a [direct initializer](direct_initialization.html "cpp/language/direct initialization"), a [function-style cast](explicit_cast.html "cpp/language/explicit cast"), and other contexts ([member initializer](initializer_list.html "cpp/language/initializer list"), [new-expression](new.html "cpp/language/new"), etc.) in which case the rules are identical to the rules for a function call expression above: 
    
    
    Class c1(&args...);             // calls Class::Class(&E1, &E2, &E3)
    Class c2 = Class(n, ++args...); // calls Class::Class(n, ++E1, ++E2, ++E3);
     
    ::new((void *)p) U([std::forward](../utility/forward.html)<Args>(args)...) // std::allocator::allocate

#### Brace-enclosed initializers

In a brace-enclosed initializer list, a pack expansion may appear as well: 
    
    
    template<typename... Ts>
    void func(Ts... args)
    {
        const int size = sizeof...(args) + 2;
        int res[size] = {1, args..., 2};
     
        // since initializer lists guarantee sequencing, this can be used to
        // call a function on each element of a pack, in order:
        int dummy[sizeof...(Ts)] = {([std::cout](../io/cout.html) << args, 0)...};
    }

#### Template argument lists

Pack expansions can be used anywhere in a template argument list, provided the template has the parameters to match the expansion: 
    
    
    template<class A, class B, class... C>
    void func(A arg1, B arg2, C... arg3)
    {
        container<A, B, C...> t1; // expands to container<A, B, E1, E2, E3> 
        container<C..., A, B> t2; // expands to container<E1, E2, E3, A, B> 
        container<A, C..., B> t3; // expands to container<A, E1, E2, E3, B> 
    }

#### Function parameter list

In a function parameter list, if an ellipsis appears in a parameter declaration (whether it names a function parameter pack (as in, Args`**...**` args) or not) the parameter declaration is the pattern: 
    
    
    template<typename... Ts>
    void f(Ts...) {}
     
    f('a', 1); // Ts... expands to void f(char, int)
    f(0.1);    // Ts... expands to void f(double)
     
    template<typename... Ts, int... N>
    void g(Ts (&...arr)[N]) {}
     
    int n[1];
     
    g<const char, int>("a", n); // Ts (&...arr)[N] expands to 
                                // const char (&)[2], int(&)[1]

Note: In the pattern `Ts (&...arr)[N]`, the ellipsis is the innermost element, not the last element as in all other pack expansions. 

Note: `Ts (&...)[N]` is not allowed because the C++11 grammar requires the parenthesized ellipsis to have a name: [CWG issue 1488](https://cplusplus.github.io/CWG/issues/1488.html). 

#### Template parameter list

Pack expansion may appear in a template parameter list: 
    
    
    template<typename... T>
    struct value_holder
    {
        template<T... Values> // expands to a constant template parameter 
        struct apply {};      // list, such as <int, char, int(&)[5]>
    };

#### Base specifiers and member initializer lists

A pack expansion may designate the list of base classes in a [class declaration](class.html "cpp/language/class"). Typically, this also means that the constructor needs to use a pack expansion in the [member initializer list](initializer_list.html "cpp/language/initializer list") to call the constructors of these bases: 
    
    
    template<class... Mixins>
    class X : public Mixins...
    {
    public:
        X(const Mixins&... mixins) : Mixins(mixins)... {}
    };

#### Lambda captures

Pack expansion may appear in the capture clause of a [lambda](lambda.html "cpp/language/lambda") expression: 
    
    
    template<class... Args>
    void f(Args... args)
    {
        auto lm = [&, args...] { return g(args...); };
        lm();
    }

#### The sizeof... operator

The [`sizeof...`](sizeof....html "cpp/language/sizeof...") operator is classified as a pack expansion as well: 
    
    
    template<class... Types>
    struct count
    {
        static const [std::size_t](../types/size_t.html) value = sizeof...(Types);
    };

####  Dynamic exception specifications

The list of exceptions in a [dynamic exception specification](except_spec.html "cpp/language/except spec") may also be a pack expansion: 
    
    
    template<class... X>
    void func(int arg) throw(X...)
    {
        // ... throw different Xs in different situations
    }

| (until C++17)  
---|---  
  
#### Alignment specifier

Pack expansions are allowed in both the lists of types and the lists of expressions used by the keyword [`alignas`](alignas.html "cpp/language/alignas"). The instantiations are space-separated: 
    
    
    template<class... T>
    struct Align
    {
        alignas(T...) unsigned char buffer[128];
    };
     
    Align<int, short> a; // the alignment specifiers after expansion are
                         // alignas(int) alignas(short)
                         // (no comma in between)

#### Attribute list

Pack expansions are allowed in the lists of [attributes](attributes.html "cpp/language/attributes"), if permitted by the attribute's specification. For example: 
    
    
    template<int... args>
    [[vendor::attr(args)...]] void* f();

####  Fold expressions

In [fold expressions](fold.html "cpp/language/fold"), the pattern is the entire subexpression that does not contain an unexpanded pack. 

####  Using-declarations

In [using declarations](using_declaration.html "cpp/language/using declaration"), ellipsis may appear in the list of declarators, this is useful when deriving from a template parameter pack: 
    
    
    template<typename... bases>
    struct X : bases...
    {
        using bases::g...;
    };
    X<B, D> x; // OK: B::g and D::g introduced

| (since C++17)  
---|---  
  
  


####  Pack indexing

In [pack indexing](pack_indexing.html "cpp/language/pack indexing"), the pack expansion contains an unexpanded pack followed by an ellipsis and subscript. The pattern of pack indexing expression is an identifier, while the pattern of pack indexing specifier is a typedef-name. 
    
    
    consteval auto first_plus_last(auto... args)
    {
        return args...[0] + args...[sizeof...(args) - 1];
    }
     
    static_assert(first_plus_last(5) == 10);
    static_assert(first_plus_last(5, 4) == 9);
    static_assert(first_plus_last(5, 6, 2) == 7);

####  Friend declarations

In class [friend declarations](friend.html "cpp/language/friend"), each type specifier can be followed by an ellipsis: 
    
    
    struct C {};
    struct E { struct Nested; };
     
    template<class... Ts>
    class R
    {
        friend Ts...;
    };
     
    template<class... Ts, class... Us>
    class R<R<Ts...>, R<Us...>>
    {
        friend Ts::Nested..., Us...;
    };
     
    R<C, E> rce;           // classes C and E are friends of R<C, E>
    R<R<E>, R<C, int>> rr; // E::Nested and C are friends of R<R<E>, R<C, int>>

####  Fold expanded constraints

In [fold expanded constraints](constraints.html#Fold_expanded_constraints "cpp/language/constraints"), the pattern is the constraint of that fold expanded constraint. A fold expanded constraint is not instantiated.  | (since C++26)  
---|---  
  
### Notes

| This section is incomplete  
Reason: a few words about partial specializations and other ways to access individual elements? Mention recursion vs logarithmic vs shortcuts such as fold expressions   
---|---  
[Feature-test](../utility/feature_test.html "cpp/utility/feature test") macro  | Value | Std | Feature   
---|---|---|---  
[`__cpp_variadic_templates`](../experimental/feature_test.html#cpp_variadic_templates "cpp/feature test") | [`200704L`](../compiler_support/11.html#cpp_variadic_templates_200704L "cpp/compiler support/11") | (C++11) | [Variadic templates](parameter_pack.html#Variadic_template)  
[`__cpp_pack_indexing`](../experimental/feature_test.html#cpp_pack_indexing "cpp/feature test") | [`202311L`](../compiler_support/26.html#cpp_pack_indexing_202311L "cpp/compiler support/26") | (C++26) | [Pack indexing](parameter_pack.html#Pack_indexing)  
  
### Example

The below example defines a function similar to [std::printf](../io/c/printf.html "cpp/io/c/fprintf"), that replace each occurrence of the character `%` in the format string with a value. 

The first overload is called when only the format string is passed and there is no parameter expansion. 

The second overload contains a separate template parameter for the head of the arguments and a parameter pack, this allows the recursive call to pass only the tail of the parameters until it becomes empty. 

`**Targs**` is the template parameter pack and `**Fargs**` is the function parameter pack. 

Run this code
    
    
    #include <iostream>
     
    void tprintf(const char* format) // base function
    {
        [std::cout](../io/cout.html) << format;
    }
     
    template<typename T, typename... Targs>
    void tprintf(const char* format, T value, Targs... Fargs) // recursive variadic function
    {
        for (; *format != '\0'; format++)
        {
            if (*format == '%')
            {
                [std::cout](../io/cout.html) << value;
                tprintf(format + 1, Fargs...); // recursive call
                return;
            }
            [std::cout](../io/cout.html) << *format;
        }
    }
     
    int main()
    {
        tprintf("% world% %\n", "Hello", '!', 123);
    }

Output: 
    
    
    Hello world! 123

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[CWG 1533](https://cplusplus.github.io/CWG/issues/1533.html) | C++11  | a pack expansion could occur in a member initializer for a member  | not allowed   
[CWG 2717](https://cplusplus.github.io/CWG/issues/2717.html) | C++11  | instantiations of alignment specifiers were comma-separated  | they are space-separated   
  
### See also

[Function template](function_template.html "cpp/language/function template") |  Defines a family of functions   
---|---  
[Class template](class_template.html "cpp/language/class template") |  Defines a family of classes   
[`sizeof...`](sizeof....html "cpp/language/sizeof...") |  Queries the number of elements in a pack   
[C-style variadic function](../utility/variadic.html "cpp/utility/variadic") |  Takes a variable number of arguments   
[Preprocessor macros](../preprocessor/replace.html "cpp/preprocessor/replace") |  Can be variadic as well   
[Fold expression](fold.html "cpp/language/fold") |  Reduces a pack over a binary operator   
[Pack indexing](pack_indexing.html "cpp/language/pack indexing") |  Accesses the element of a pack at specified index 
  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
