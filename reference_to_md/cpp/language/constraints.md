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
[Packs](parameter_pack.html "cpp/language/pack") (C++11)  
[sizeof...](sizeof....html "cpp/language/sizeof...") (C++11)  
[Fold expressions](fold.html "cpp/language/fold") (C++17)  
[Pack indexing](pack_indexing.html "cpp/language/pack indexing") (C++26)  
[SFINAE](sfinae.html "cpp/language/sfinae")  
**Constraints and concepts** (C++20)  
[requires expression](requires.html "cpp/language/requires") (C++20)  
  


[Class templates](class_template.html "cpp/language/class template"), [function templates](function_template.html "cpp/language/function template") (including [generic lambdas](lambda.html "cpp/language/lambda")), and other [templated functions](templates.html#Templated_entity "cpp/language/templates") (typically members of class templates) might be associated with a _constraint ﻿_ , which specifies the requirements on template arguments, which can be used to select the most appropriate function overloads and template specializations. 

Named sets of such [requirements](requires.html "cpp/language/requires") are called _concepts ﻿_. Each concept is a predicate, evaluated at compile time, and becomes a part of the interface of a template where it is used as a constraint: 

Run this code
    
    
    #include <cstddef>
    #include <concepts>
    #include <functional>
    #include <string>
     
    // Declaration of the concept “Hashable”, which is satisfied by any type “T”
    // such that for values “a” of type “T”, the expression std::hash<T>{}(a)
    // compiles and its result is convertible to std::size_t
    template<typename T>
    concept Hashable = requires(T a)
    {
        { [std::hash](../utility/hash.html)<T>{}(a) } -> [std::convertible_to](../concepts/convertible_to.html)<[std::size_t](../types/size_t.html)>;
    };
     
    struct meow {};
     
    // Constrained C++20 function template:
    template<Hashable T>
    void f(T) {}
    //
    // Alternative ways to apply the same constraint:
    // template<typename T>
    //     requires Hashable<T>
    // void f(T) {}
    //
    // template<typename T>
    // void f(T) requires Hashable<T> {}
    //
    // void f(Hashable auto /* parameter-name */) {}
     
    int main()
    {
        using std::operator""s;
     
        f("abc"s);    // OK, std::string satisfies Hashable
        // f(meow{}); // Error: meow does not satisfy Hashable
    }

Violations of constraints are detected at compile time, early in the template instantiation process, which leads to easy to follow error messages: 
    
    
    [std::list](../container/list.html)<int> l = {3, -1, 10};
    [std::sort](../algorithm/sort.html)(l.begin(), l.end()); 
    // Typical compiler diagnostic without concepts:
    // invalid operands to binary expression ('std::_List_iterator<int>' and
    // 'std::_List_iterator<int>')
    //                           std::__lg(__last - __first) * 2);
    //                                     ~~~~~~ ^ ~~~~~~~
    // ... 50 lines of output ...
    //
    // Typical compiler diagnostic with concepts:
    // error: cannot call std::sort with std::_List_iterator<int>
    // note:  concept RandomAccessIterator<std::_List_iterator<int>> was not satisfied

The intent of concepts is to model semantic categories (Number, Range, RegularFunction) rather than syntactic restrictions (HasPlus, Array). According to [ISO C++ core guideline T.20](https://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines#t20-avoid-concepts-without-meaningful-semantics), “The ability to specify meaningful semantics is a defining characteristic of a true concept, as opposed to a syntactic constraint.” 

## Contents

  * [1 Concepts](constraints.html#Concepts)
  * [2 Constraints](constraints.html#Constraints)
    * [2.1 Redeclarations](constraints.html#Redeclarations)
    * [2.2 Conjunctions](constraints.html#Conjunctions)
    * [2.3 Disjunctions](constraints.html#Disjunctions)
    * [2.4 Atomic constraints](constraints.html#Atomic_constraints)
    * [2.5 Fold expanded constraints](constraints.html#Fold_expanded_constraints)
    * [2.6 Constraint normalization](constraints.html#Constraint_normalization)
  * [3 requires clauses](constraints.html#requires_clauses)
  * [4 Partial ordering of constraints](constraints.html#Partial_ordering_of_constraints)
  * [5 Notes](constraints.html#Notes)
  * [6 Keywords](constraints.html#Keywords)
  * [7 Defect reports](constraints.html#Defect_reports)
  * [8 See also](constraints.html#See_also)

  
---  
  
### Concepts

A concept is a named set of [requirements](requires.html "cpp/language/requires"). The definition of a concept must appear at namespace scope. 

The definition of a concept has the form   
  
---  
`**template <**` template-parameter-list `**>**` `**concept**` concept-name attr ﻿(optional) `**=**` constraint-expression`**;**` |  |   
attr |  \-  |  sequence of any number of [attributes](attributes.html "cpp/language/attributes")  
---|---|---  
      
    
    // concept
    template<class T, class U>
    concept Derived = [std::is_base_of](../types/is_base_of.html)<U, T>::value;

Concepts cannot recursively refer to themselves and cannot be constrained: 
    
    
    template<typename T>
    concept V = V<T*>; // error: recursive concept
     
    template<class T>
    concept C1 = true;
    template<C1 T>
    concept Error1 = true; // Error: C1 T attempts to constrain a concept definition
    template<class T> requires C1<T>
    concept Error2 = true; // Error: the requires clause attempts to constrain a concept

Explicit instantiations, explicit specializations, or partial specializations of concepts are not allowed (the meaning of the original definition of a constraint cannot be changed). 

Concepts can be named in an id-expression. The value of the id-expression is true if the constraint expression is satisfied, and false otherwise. 

Concepts can also be named in a type-constraint, as part of 

  * [type template parameter declaration](template_parameters.html#Type_template_parameter "cpp/language/template parameters"), 
  * [placeholder type specifier](auto.html "cpp/language/auto"), 
  * [compound requirement](requires.html#Compound_Requirements "cpp/language/requires"). 



In a type-constraint, a concept takes one less template argument than its parameter list demands, because the contextually deduced type is implicitly used as the first argument of the concept. 
    
    
    template<class T, class U>
    concept Derived = [std::is_base_of](../types/is_base_of.html)<U, T>::value;
     
    template<Derived<Base> T>
    void f(T); // T is constrained by Derived<T, Base>

### Constraints

A constraint is a sequence of logical operations and operands that specifies requirements on template arguments. They can appear within [requires expressions](requires.html "cpp/language/requires") or directly as bodies of concepts. 

There are three(until C++26)four(since C++26) types of constraints: 

1) conjunctions

2) disjunctions

3) atomic constraints

4) fold expanded constraints | (since C++26)  
---|---  
  
The constraint associated with a declaration is determined by [normalizing](constraints.html#Constraint_normalization) a logical AND expression whose operands are in the following order: 

  1. the constraint expression introduced for each constrained [type template parameter](template_parameters.html#Type_template_parameter "cpp/language/template parameters") or constant template parameter declared with a constrained [placeholder type](auto.html "cpp/language/auto"), in order of appearance; 
  2. the constraint expression in the [requires clause](constraints.html#Requires_clauses "cpp/language/constraints") after the template parameter list; 
  3. the constraint expression introduced for each parameter with constrained [placeholder type](auto.html "cpp/language/auto") in an [abbreviated function template](function_template.html#Abbreviated_function_template "cpp/language/function template") declaration; 
  4. the constraint expression in the trailing [requires clause](constraints.html#Requires_clauses "cpp/language/constraints"). 



This order determines the order in which constraints are instantiated when checking for satisfaction. 

#### Redeclarations

A constrained declaration may only be redeclared using the same syntactic form. No diagnostic is required: 
    
    
    // These first two declarations of f are fine
    template<Incrementable T>
    void f(T) requires Decrementable<T>;
     
    template<Incrementable T>
    void f(T) requires Decrementable<T>; // OK, redeclaration
     
    // Inclusion of this third, logically-equivalent-but-syntactically-different
    // declaration of f is ill-formed, no diagnostic required
    template<typename T>
        requires Incrementable<T> && Decrementable<T>
    void f(T);
     
    // The following two declarations have different constraints:
    // the first declaration has Incrementable<T> && Decrementable<T>
    // the second declaration has Decrementable<T> && Incrementable<T>
    // Even though they are logically equivalent.
     
    template<Incrementable T> 
    void g(T) requires Decrementable<T>;
     
    template<Decrementable T> 
    void g(T) requires Incrementable<T>; // ill-formed, no diagnostic required

#### Conjunctions

The conjunction of two constraints is formed by using the `&&` operator in the constraint expression: 
    
    
    template<class T>
    concept Integral = [std::is_integral](../types/is_integral.html)<T>::value;
    template<class T>
    concept SignedIntegral = Integral<T> && [std::is_signed](../types/is_signed.html)<T>::value;
    template<class T>
    concept UnsignedIntegral = Integral<T> && !SignedIntegral<T>;

A conjunction of two constraints is satisfied only if both constraints are satisfied. Conjunctions are evaluated left to right and short-circuited (if the left constraint is not satisfied, template argument substitution into the right constraint is not attempted: this prevents failures due to substitution outside of immediate context). 
    
    
    template<typename T>
    constexpr bool get_value() { return T::value; }
     
    template<typename T>
        requires (sizeof(T) > 1 && get_value<T>())
    void f(T);   // #1
     
    void f(int); // #2
     
    void g()
    {
        f('A'); // OK, calls #2. When checking the constraints of #1,
                // 'sizeof(char) > 1' is not satisfied, so get_value<T>() is not checked
    }

#### Disjunctions

The disjunction of two constraints is formed by using the `||` operator in the constraint expression. 

A disjunction of two constraints is satisfied if either constraint is satisfied. Disjunctions are evaluated left to right and short-circuited (if the left constraint is satisfied, template argument substitution into the right constraint is not attempted). 
    
    
    template<class T = void>
        requires EqualityComparable<T> || Same<T, void>
    struct equal_to;

#### Atomic constraints

An atomic constraint consists of an expression E and a mapping from the template parameters that appear within E to template arguments involving the template parameters of the constrained entity, called its _parameter mapping ﻿_. 

Atomic constraints are formed during [constraint normalization](constraints.html#Constraint_normalization). E is never a logical AND or logical OR expression (those form conjunctions and disjunctions, respectively). 

Satisfaction of an atomic constraint is checked by substituting the parameter mapping and template arguments into the expression E. If the substitution results in an invalid type or expression, the constraint is not satisfied. Otherwise, E, after any lvalue-to-rvalue conversion, must be a prvalue constant expression of type bool, and the constraint is satisfied if and only if it evaluates to true. 

The type of E after substitution must be exactly bool. No conversion is permitted: 
    
    
    template<typename T>
    struct S
    {
        constexpr operator bool() const { return true; }
    };
     
    template<typename T>
        requires (S<T>{})
    void f(T);   // #1
     
    void f(int); // #2
     
    void g()
    {
        f(0); // error: S<int>{} does not have type bool when checking #1,
              // even though #2 is a better match
    }

Two atomic constraints are considered _identical_ if they are formed from the same expression at the source level and their parameter mappings are equivalent. 
    
    
    template<class T>
    constexpr bool is_meowable = true;
     
    template<class T>
    constexpr bool is_cat = true;
     
    template<class T>
    concept Meowable = is_meowable<T>;
     
    template<class T>
    concept BadMeowableCat = is_meowable<T> && is_cat<T>;
     
    template<class T>
    concept GoodMeowableCat = Meowable<T> && is_cat<T>;
     
    template<Meowable T>
    void f1(T); // #1
     
    template<BadMeowableCat T>
    void f1(T); // #2
     
    template<Meowable T>
    void f2(T); // #3
     
    template<GoodMeowableCat T>
    void f2(T); // #4
     
    void g()
    {
        f1(0); // error, ambiguous:
               // the is_meowable<T> in Meowable and BadMeowableCat forms distinct atomic
               // constraints that are not identical (and so do not subsume each other)
     
        f2(0); // OK, calls #4, more constrained than #3
               // GoodMeowableCat got its is_meowable<T> from Meowable
    }

####  Fold expanded constraints

A _fold expanded constraint_ is formed from a constraint `C` and a fold operator (either `&&` or `||`). A fold expanded constraint is a [pack expansion](parameter_pack.html "cpp/language/parameter pack"). Let N be the number of elements in the pack expansion parameters: 

  * If the pack expansion is invalid (such as expanding packs of different size), the fold expanded constraint is not satisfied. 
  * If N is ​0​, the fold expanded constraint is satisfied if the fold operator is `&&`, or not satisfied if the fold operator is `||`. 
  * For a fold expanded constraint with a positive N,for each i in `[`1`, `N`]`, each pack expansion parameter is replaced with the corresponding ith element in increasing order: 



    

  * For fold expanded constraints whose fold operator is `&&`, if the replacement of the jth element violates `C`, the fold expanded constraint is not satisfied. In this case, no substitution takes place for any i greater than j. Otherwise, the fold expanded constraint is satisfied. 
  * For fold expanded constraints whose fold operator is `||`, if the replacement of the jth element satisfies `C`, the fold expanded constraint is satisfied. In this case, no substitution takes place for any i greater than j. Otherwise, the fold expanded constraint is not satisfied. 


  

    
    
    template <class T> concept A = [std::is_move_constructible_v](../types/is_move_constructible.html)<T>;
    template <class T> concept B = [std::is_copy_constructible_v](../types/is_copy_constructible.html)<T>;
    template <class T> concept C = A<T> && B<T>;
     
    // in C++23, these two overloads of g() have distinct atomic constraints 
    // that are not identical and so do not subsume each other: calls to g() are ambiguous
    // in C++26, the folds are expanded and constraint on overload #2 (both move and copy
    // required), subsumes constraint on overload #1 (just the move is required)
    template <class... T>
    requires (A<T> && ...) void g(T...); // #1
     
    template <class... T>
    requires (C<T> && ...) void g(T...); // #2

  
| (since C++26)  
---|---  
  
#### Constraint normalization

_Constraint normalization_ is the process that transforms a constraint expression into a sequence of conjunctions and disjunctions of atomic constraints. The _normal form_ of an expression is defined as follows: 

  * The normal form of an expression (E) is the normal form of E. 
  * The normal form of an expression E1 && E2 is the conjunction of the normal forms of E1 and E2. 
  * The normal form of an expression E1 || E2 is the disjunction of the normal forms of E1 and E2. 
  * The normal form of an expression C<A1, A2, ... , AN>, where `C` names a concept, is the normal form of the constraint expression of `C`, after substituting `A1`, `A2`, ... , `AN` for `C`'s respective template parameters in the parameter mappings of each atomic constraint of `C`. If any such substitution into the parameter mappings results in an invalid type or expression, the program is ill-formed, no diagnostic required. 


    
    
    template<typename T>
    concept A = T::value || true;
     
    template<typename U>
    concept B = A<U*>; // OK: normalized to the disjunction of 
                       // - T::value (with mapping T -> U*) and
                       // - true (with an empty mapping).
                       // No invalid type in mapping even though
                       // T::value is ill-formed for all pointer types
     
    template<typename V>
    concept C = B<V&>; // Normalizes to the disjunction of
                       // - T::value (with mapping T-> V&*) and
                       // - true (with an empty mapping).
                       // Invalid type V&* formed in mapping => ill-formed NDR

  * The normal form of expressions (E && ...) and (... && E) is a fold expanded constraint, where `C` is the normal form of E and the fold operator is `&&`. 
  * The normal form of expressions (E || ...) and (... || E) is a fold expanded constraint, where `C` is the normal form of E and the fold operator is `||`. 
  * The normal forms of expressions (E1 && ... && E2) and (E1 || ... || E2) are the normal forms of 



    

  * (E1 && ...) && E2 and (E1 || ...) || E2 respectively, if E1 contains an unexpanded pack, or 
  * E1 && (... && E2) and E1 || (... || E2) respectively otherwise. 


| (since C++26)  
---|---  
  
  * The normal form of any other expression E is the atomic constraint whose expression is E and whose parameter mapping is the identity mapping. This includes all [fold expressions](fold.html "cpp/language/fold"), even those folding over the `&&` or `||` operators. 



User-defined overloads of `&&` or `||` have no effect on constraint normalization. 

### requires clauses

The keyword [`requires`](../keyword/requires.html "cpp/keyword/requires") is used to introduce a _requires clause ﻿_, which specifies constraints on template arguments or on a function declaration. 
    
    
    template<typename T>
    void f(T&&) requires Eq<T>; // can appear as the last element of a function declarator
     
    template<typename T> requires Addable<T> // or right after a template parameter list
    T add(T a, T b) { return a + b; }

In this case, the keyword requires must be followed by some constant expression (so it's possible to write requires true), but the intent is that a named concept (as in the example above) or a conjunction/disjunction of named concepts or a [requires expression](requires.html "cpp/language/requires") is used. 

The expression must have one of the following forms: 

  * A [primary expression](expressions.html#Primary_expressions "cpp/language/expressions"), e.g. Swappable<T>, [std::is_integral](../types/is_integral.html)<T>::value, ([std::is_object_v](../types/is_object.html)<Args> && ...), or any parenthesized expression. 
  * A sequence of primary expressions joined with the operator `&&`. 
  * A sequence of aforementioned expressions joined with the operator `||`. 


    
    
    template<class T>
    constexpr bool is_meowable = true;
     
    template<class T>
    constexpr bool is_purrable() { return true; }
     
    template<class T>
    void f(T) requires is_meowable<T>; // OK
     
    template<class T>
    void g(T) requires is_purrable<T>(); // error, is_purrable<T>() is not a primary expression
     
    template<class T>
    void h(T) requires (is_purrable<T>()); // OK

### Partial ordering of constraints

Before any further analysis, constraints are [normalized](constraints.html#Constraint_normalization) by substituting the body of every named concept and every [requires expression](requires.html "cpp/language/requires") until what is left is a sequence of conjunctions and disjunctions on atomic constraints. 

A constraint `P` is said to _subsume_ constraint `Q` if it can be proven that `P` [implies](https://en.wikipedia.org/wiki/Logical_consequence "enwiki:Logical consequence") `Q` up to the identity of atomic constraints in P and Q. (Types and expressions are not analyzed for equivalence: `N > 0` does not subsume `N >= 0`). 

Specifically, first `P` is converted to disjunctive normal form and `Q` is converted to conjunctive normal form. `P` subsumes `Q` if and only if: 

  * every disjunctive clause in the disjunctive normal form of `P` subsumes every conjunctive clause in the conjunctive normal form of `Q`, where 
  * a disjunctive clause subsumes a conjunctive clause if and only if there is an atomic constraint `U` in the disjunctive clause and an atomic constraint `V` in the conjunctive clause such that `U` subsumes `V`; 
  * an atomic constraint `A` subsumes an atomic constraint `B` if and only if they are identical using the rules described [above](constraints.html#Atomic_constraints). 



  * A fold expanded constraint `A` subsumes another fold expanded constraint `B` if they have the same fold operator, the constraint `C` of `A` subsumes that of `B`, and both `C` contain an equivalent unexpanded pack. 

| (since C++26)  
---|---  
  
Subsumption relationship defines partial order of constraints, which is used to determine: 

  * the best viable candidate for a non-template function in [overload resolution](overload_resolution.html "cpp/language/overload resolution")
  * the [address of a non-template function](overloaded_address.html "cpp/language/overloaded address") in an overload set 
  * the best match for a template template argument 
  * partial ordering of class template specializations 
  * [partial ordering](function_template.html#Function_template_overloading "cpp/language/function template") of function templates 

| This section is incomplete  
Reason: backlinks from the above to here   
---|---  
  
If declarations `D1` and `D2` are constrained and `D1`'s associated constraints subsume `D2`'s associated constraints (or if `D2` is unconstrained), then `D1` is said to be _at least as constrained_ as `D2`. If `D1` is at least as constrained as `D2`, and `D2` is not at least as constrained as `D1`, then `D1` is _more constrained_ than `D2`. 

If all following conditions are satisfied, a non-template function `F1` is _more partial-ordering-constrained_ than a non-template function `F2`: 

  * They have the same parameter-type-list, omitting the types of [explicit object parameters](member_functions.html#Explicit_object_parameter "cpp/language/member functions")(since C++23). 
  * If they are member functions, both are direct members of the same class. 
  * If both are non-static member functions, they have the same types for their object parameters. 
  * `F1` is more constrained than `F2`. 


    
    
    template<typename T>
    concept Decrementable = requires(T t) { --t; };
    template<typename T>
    concept RevIterator = Decrementable<T> && requires(T t) { *t; };
     
    // RevIterator subsumes Decrementable, but not the other way around
     
    template<Decrementable T>
    void f(T); // #1
     
    template<RevIterator T>
    void f(T); // #2, more constrained than #1
     
    f(0);       // int only satisfies Decrementable, selects #1
    f((int*)0); // int* satisfies both constraints, selects #2 as more constrained
     
    template<class T>
    void g(T); // #3 (unconstrained)
     
    template<Decrementable T>
    void g(T); // #4
     
    g(true); // bool does not satisfy Decrementable, selects #3
    g(0);    // int satisfies Decrementable, selects #4 because it is more constrained
     
    template<typename T>
    concept RevIterator2 = requires(T t) { --t; *t; };
     
    template<Decrementable T>
    void h(T); // #5
     
    template<RevIterator2 T>
    void h(T); // #6
     
    h((int*)0); // ambiguous

### Notes

Feature-test macro  | Value | Std | Feature   
---|---|---|---  
[`__cpp_concepts`](../experimental/feature_test.html#cpp_concepts "cpp/feature test") | [`201907L`](../compiler_support/20.html#cpp_concepts_201907L "cpp/compiler support/20") | (C++20) | Constraints   
[`202002L`](../compiler_support/20.html#cpp_concepts_202002L "cpp/compiler support/20") | (C++20) | Conditionally trivial [special member functions](member_functions.html#Special_member_functions "cpp/language/member functions")  
  
### Keywords

[`concept`](../keyword/concept.html "cpp/keyword/concept"), [`requires`](../keyword/requires.html "cpp/keyword/requires"), [`typename`](../keyword/typename.html "cpp/keyword/typename")

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[CWG 2428](https://cplusplus.github.io/CWG/issues/2428.html) | C++20  | could not apply attributes to concepts  | allowed   
  
### See also

  * [Concepts TS](../experimental/constraints.html "cpp/experimental/constraints")
  * [Named requirements](../iterator/concepts.html "cpp/named req")

[Requires expression](requires.html "cpp/language/requires")(C++20) |  yields a prvalue expression of type bool that describes the constraints  
---|---
  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
