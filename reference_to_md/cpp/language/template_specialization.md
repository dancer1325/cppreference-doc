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
  
| **Template specialization**  
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
**Explicit template specialization**  
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
**Explicit (full) specialization**  
[Partial specialization](partial_specialization.html "cpp/language/partial specialization")  
[Dependent names](dependent_name.html "cpp/language/dependent name")  
[Packs](parameter_pack.html "cpp/language/pack") (C++11)  
[sizeof...](sizeof....html "cpp/language/sizeof...") (C++11)  
[Fold expressions](fold.html "cpp/language/fold") (C++17)  
[Pack indexing](pack_indexing.html "cpp/language/pack indexing") (C++26)  
[SFINAE](sfinae.html "cpp/language/sfinae")  
[Constraints and concepts](constraints.html "cpp/language/constraints") (C++20)  
[requires expression](requires.html "cpp/language/requires") (C++20)  
  


Allows customizing the template code for a given set of template arguments. 

## Contents

  * [1 Syntax](template_specialization.html#Syntax)
  * [2 In detail](template_specialization.html#In_detail)
  * [3 Explicit specializations of function templates](template_specialization.html#Explicit_specializations_of_function_templates)
  * [4 Members of specializations](template_specialization.html#Members_of_specializations)
  * [5 Defect reports](template_specialization.html#Defect_reports)
  * [6 See also](template_specialization.html#See_also)

  
---  
  
### Syntax  
  
---  
`**template <>**` declaration |  |   
  
Any of the following can be fully specialized: 

  1. [function template](function_template.html "cpp/language/function template")
  2. [class template](class_template.html "cpp/language/class template")
  3. [variable template](variable_template.html "cpp/language/variable template")(since C++14)
  4. [member function](member_functions.html "cpp/language/member functions") of a class template 
  5. [static data member](static.html "cpp/language/static") of a class template 
  6. [member class](nested_classes.html "cpp/language/nested types") of a class template 
  7. member [enumeration](enum.html "cpp/language/enum") of a class template 
  8. [member class template](member_template.html "cpp/language/member template") of a class or class template 
  9. [member function template](member_template.html#Member_function_templates "cpp/language/member template") of a class or class template 
  10. [member variable template](member_template.html#Member_variable_templates "cpp/language/member template") of a class or class template(since C++14)



For example,

Run this code
    
    
    #include <type_traits>
     
    template<typename T> // primary template
    struct is_void : [std::false_type](../types/integral_constant.html) {};
    template<>           // explicit specialization for T = void
    struct is_void<void> : [std::true_type](../types/integral_constant.html) {};
     
    int main()
    {
        static_assert(is_void<char>::value == false,
            "for any type T other than void, the class is derived from false_type");
        static_assert(is_void<void>::value == true,
            "but when T is void, the class is derived from true_type");
    }

### In detail

Explicit specialization may be declared in any scope where its primary template may be defined (which may be different from the scope where the primary template is defined; such as with out-of-class specialization of a [member template](member_template.html "cpp/language/member template")). Explicit specialization has to appear after the non-specialized template declaration. 
    
    
    namespace N
    {
        template<class T> // primary template
        class X { /*...*/ };
        template<>        // specialization in same namespace
        class X<int> { /*...*/ };
     
        template<class T> // primary template
        class Y { /*...*/ };
        template<>        // forward declare specialization for double
        class Y<double>;
    }
     
    template<> // OK: specialization in same namespace
    class N::Y<double> { /*...*/ };

Specialization must be declared before the first use that would cause implicit instantiation, in every translation unit where such use occurs: 
    
    
    class String {};
     
    template<class T>
    class Array { /*...*/ };
     
    template<class T> // primary template
    void sort(Array<T>& v) { /*...*/ }
     
    void f(Array<String>& v)
    {
        sort(v); // implicitly instantiates sort(Array<String>&), 
    }            // using the primary template for sort()
     
    template<> // ERROR: explicit specialization of sort(Array<String>)
    void sort<String>(Array<String>& v); // after implicit instantiation

A template specialization that was declared but not defined can be used just like any other [incomplete type](incomplete_type.html "cpp/language/incomplete type") (e.g. pointers and references to it may be used): 
    
    
    template<class T> // primary template
    class X;
    template<>        // specialization (declared, not defined)
    class X<int>;
     
    X<int>* p; // OK: pointer to incomplete type
    X<int> x;  // error: object of incomplete type

Whether an explicit specialization of a function or variable(since C++14) template is [`inline`](inline.html "cpp/language/inline")/[`constexpr`](constexpr.html "cpp/language/constexpr")(since C++11)/[`constinit`](constinit.html "cpp/language/constinit")/[`consteval`](consteval.html "cpp/language/consteval")(since C++20) is determined by the explicit specialization itself, regardless of whether the primary template is declared with that specifier. Similarly, [attributes](attributes.html "cpp/language/attributes") appearing in the declaration of a template have no effect on an explicit specialization of that template:(since C++11)
    
    
    template<class T>
    void f(T) { /* ... */ }
    template<>
    inline void f<>(int) { /* ... */ } // OK, inline
     
    template<class T>
    inline T g(T) { /* ... */ }
    template<>
    int g<>(int) { /* ... */ }         // OK, not inline
     
    template<typename>
    [[noreturn]] void h([[maybe_unused]] int i);
    template<> void h<int>(int i)
    {
        // [[noreturn]] has no effect, but [[maybe_unused]] has
    }

### Explicit specializations of function templates

When specializing a function template, its template arguments can be omitted if [template argument deduction](template_argument_deduction.html "cpp/language/template argument deduction") can provide them from the function arguments: 
    
    
    template<class T>
    class Array { /*...*/ };
     
    template<class T> // primary template
    void sort(Array<T>& v);
    template<>        // specialization for T = int
    void sort(Array<int>&);
     
    // no need to write
    // template<> void sort<int>(Array<int>&);

A function with the same name and the same argument list as a specialization is not a specialization (see template overloading in [function template](function_template.html "cpp/language/function template")). 

[Default function arguments](default_arguments.html "cpp/language/default arguments") cannot be specified in explicit specializations of function templates, member function templates, and member functions of class templates when the class is implicitly instantiated. 

An explicit specialization cannot be a [friend declaration](friend.html "cpp/language/friend"). 

| This section is incomplete  
Reason: review the exception specification requirement across different C++ versions   
---|---  
  
### Members of specializations

When defining a member of an explicitly specialized class template outside the body of the class, the syntax template<> is not used, except if it's a member of an explicitly specialized member class template, which is specialized as a class template, because otherwise, the syntax would require such definition to begin with template<parameters> required by the nested template 
    
    
    template<typename T>
    struct A
    {
        struct B {};      // member class 
     
        template<class U> // member class template
        struct C {};
    };
     
    template<> // specialization
    struct A<int> 
    {
        void f(int); // member function of a specialization
    };
    // template<> not used for a member of a specialization
    void A<int>::f(int) { /* ... */ }
     
    template<> // specialization of a member class
    struct A<char>::B
    {
        void f();
    };
    // template<> not used for a member of a specialized member class either
    void A<char>::B::f() { /* ... */ }
     
    template<> // specialization of a member class template
    template<class U>
    struct A<char>::C
    {
        void f();
    };
     
    // template<> is used when defining a member of an explicitly
    // specialized member class template specialized as a class template
    template<>
    template<class U>
    void A<char>::C<U>::f() { /* ... */ }

  
An explicit specialization of a static data member of a template is a definition if the declaration includes an initializer; otherwise, it is a declaration. These definitions must use braces for default initialization: 
    
    
    template<>
    X Q<int>::x;    // declaration of a static member
    template<>
    X Q<int>::x (); // error: function declaration
    template<>
    X Q<int>::x {}; // definition of a default-initialized static member

A member or a member template of a class template may be explicitly specialized for a given implicit instantiation of the class template, even if the member or member template is defined in the class template definition. 
    
    
    template<typename T>
    struct A
    {
        void f(T);         // member, declared in the primary template
     
        void h(T) {}       // member, defined in the primary template
     
        template<class X1> // member template
        void g1(T, X1);
     
        template<class X2> // member template
        void g2(T, X2);
    };
     
    // specialization of a member
    template<>
    void A<int>::f(int);
     
    // member specialization OK even if defined in-class
    template<>
    void A<int>::h(int) {}
     
    // out of class member template definition
    template<class T>
    template<class X1>
    void A<T>::g1(T, X1) {}
     
    // member template specialization
    template<>
    template<class X1>
    void A<int>::g1(int, X1);
     
    // member template specialization
    template<>
    template<>
    void A<int>::g2<char>(int, char); // for X2 = char
     
    // same, using template argument deduction (X1 = char)
    template<> 
    template<>
    void A<int>::g1(int, char);

A member or a member template may be nested within many enclosing class templates. In an explicit specialization for such a member, there's a template<> for every enclosing class template that is explicitly specialized. 
    
    
    template<class T1>
    struct A
    {
        template<class T2>
        struct B
        {
            template<class T3>
            void mf();
        };
    };
     
    template<>
    struct A<int>;
     
    template<>
    template<>
    struct A<char>::B<double>;
     
    template<>
    template<>
    template<>
    void A<char>::B<char>::mf<double>();

In such a nested declaration, some of the levels may remain unspecialized (except that it can't specialize a class member template in namespace scope if its enclosing class is unspecialized). For each of those levels, the declaration needs template<arguments>, because such specializations are themselves templates: 
    
    
    template<class T1>
    class A
    {
        template<class T2>
        class B
        {
            template<class T3> // member template
            void mf1(T3);
     
            void mf2();        // non-template member
        };
    };
     
    // specialization
    template<>        // for the specialized A
    template<class X> // for the unspecialized B
    class A<int>::B
    {
        template<class T>
        void mf1(T);
    };
     
    // specialization
    template<>        // for the specialized A
    template<>        // for the specialized B
    template<class T> // for the unspecialized mf1
    void A<int>::B<double>::mf1(T t) {}
     
    // ERROR: B<double> is specialized and is a member template, so its enclosing A
    // must be specialized also
    template<class Y>
    template<>
    void A<Y>::B<double>::mf2() {}

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[CWG 531](https://cplusplus.github.io/CWG/issues/531.html) | C++98  | the syntax of defining members of explicit  
specializations in namespace scope was not specified  | specified   
[CWG 727](https://cplusplus.github.io/CWG/issues/727.html) | C++98  | partial and full specializations not allowed in  
class scope  | allowed in any scope   
[CWG 730](https://cplusplus.github.io/CWG/issues/730.html) | C++98  | member templates of non-template  
classes could not be fully specialized  | allowed   
[CWG 2478](https://cplusplus.github.io/CWG/issues/2478.html) | C++20  | it was unclear whether the constinit and consteval of the  
primary template are carried over into its explicit specializations  | not carried over   
[CWG 2604](https://cplusplus.github.io/CWG/issues/2604.html) | C++11  | it was unclear whether the attributes of the primary  
template are carried over into its explicit specializations  | not carried over   
  
### See also

  * [templates](templates.html "cpp/language/templates")
  * [class template](class_template.html "cpp/language/class template")
  * [function template](function_template.html "cpp/language/function template")
  * [partial specialization](partial_specialization.html "cpp/language/partial specialization")


