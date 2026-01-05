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
**Partial specialization**  
[Dependent names](dependent_name.html "cpp/language/dependent name")  
[Packs](parameter_pack.html "cpp/language/pack") (C++11)  
[sizeof...](sizeof....html "cpp/language/sizeof...") (C++11)  
[Fold expressions](fold.html "cpp/language/fold") (C++17)  
[Pack indexing](pack_indexing.html "cpp/language/pack indexing") (C++26)  
[SFINAE](sfinae.html "cpp/language/sfinae")  
[Constraints and concepts](constraints.html "cpp/language/constraints") (C++20)  
[requires expression](requires.html "cpp/language/requires") (C++20)  
  


Allows customizing class and variable(since C++14) templates for a given category of template arguments. 

## Contents

  * [1 Syntax](partial_specialization.html#Syntax)
  * [2 The argument list](partial_specialization.html#The_argument_list)
  * [3 Name lookup](partial_specialization.html#Name_lookup)
  * [4 Partial ordering](partial_specialization.html#Partial_ordering)
  * [5 Members of partial specializations](partial_specialization.html#Members_of_partial_specializations)
  * [6 Defect reports](partial_specialization.html#Defect_reports)
  * [7 See also](partial_specialization.html#See_also)

  
---  
  
### Syntax  
  
---  
`**template**` `**<**` parameter-list `**>**` class-key class-head-name `**<**` argument-list `**>**` declaration |  (1)  |   
`**template**` `**<**` parameter-list `**>**` decl-specifier-seq declarator `**<**` argument-list `**>**` initializer ﻿(optional) |  (2)  |  (since C++14)  
  
where class-head-name identifies the name of a previously declared [class template](class_template.html "cpp/language/class template") and declarator identifies the name of a previously declared [variable template](variable_template.html "cpp/language/variable template")(since C++14). 

Partial specialization may be declared in any scope where its primary template may be defined (which may be different from the scope where the primary template is defined; such as with out-of-class specialization of a [member template](member_template.html "cpp/language/member template")). Partial specialization has to appear after the non-specialized template declaration. 

For example, 
    
    
    template<class T1, class T2, int I>
    class A {};             // primary template
     
    template<class T, int I>
    class A<T, T*, I> {};   // #1: partial specialization where T2 is a pointer to T1
     
    template<class T, class T2, int I>
    class A<T*, T2, I> {};  // #2: partial specialization where T1 is a pointer
     
    template<class T>
    class A<int, T*, 5> {}; // #3: partial specialization where
                            //     T1 is int, I is 5, and T2 is a pointer
     
    template<class X, class T, int I>
    class A<X, T*, I> {};   // #4: partial specialization where T2 is a pointer

Examples of partial specializations in the standard library include [std::unique_ptr](../memory/unique_ptr.html "cpp/memory/unique ptr"), which has a partial specialization for array types. 

### The argument list

The following restrictions apply to the argument-list of a partial template specialization: 

1) The argument list cannot be identical to the non-specialized argument list (it must specialize something): 
    
    
    template<class T1, class T2, int I> class B {};        // primary template
    template<class X, class Y, int N> class B<X, Y, N> {}; // error

Moreover, the specialization has to be more specialized than the primary template 
    
    
    template<int N, typename T1, typename... Ts> struct B;
    template<typename... Ts> struct B<0, Ts...> {}; // Error: not more specialized

| (since C++11)  
---|---  
  
2) Default arguments cannot appear in the argument list

3) If any argument is a pack expansion, it must be the last argument in the list

4) Constant argument expressions can use template parameters as long as the parameter appears at least once outside a [non-deduced context](template_argument_deduction.html#Non-deduced_contexts "cpp/language/template argument deduction") (note that only clang and gcc 12 support this feature currently): 
    
    
    template<int I, int J> struct A {};
    template<int I> struct A<I + 5, I * 2> {}; // error, I is not deducible
     
    template<int I, int J, int K> struct B {};
    template<int I> struct B<I, I * 2, 2> {};  // OK: first parameter is deducible

5) Constant template argument cannot specialize a template parameter whose type depends on a parameter of the specialization: 
    
    
    template<class T, T t> struct C {}; // primary template
    template<class T> struct C<T, 1>;   // error: type of the argument 1 is T,
                                        // which depends on the parameter T
     
    template<int X, int (*array_ptr)[X]> class B {}; // primary template
    int array[5];
    template<int X> class B<X, &array> {}; // error: type of the argument &array is
                                           // int(*)[X], which depends on the parameter X

### Name lookup

Partial template specializations are not found by name lookup. Only if the primary template is found by name lookup, its partial specializations are considered. In particular, a using declaration that makes a primary template visible, makes partial specializations visible as well: 
    
    
    namespace N
    {
        template<class T1, class T2> class Z {}; // primary template
    }
    using N::Z; // refers to the primary template
     
    namespace N
    {
        template<class T> class Z<T, T*> {};     // partial specialization
    }
    Z<int, int*> z; // name lookup finds N::Z (the primary template), the
                    // partial specialization with T = int is then used

### Partial ordering

When a class or variable(since C++14) template is instantiated, and there are partial specializations available, the compiler has to decide if the primary template is going to be used or one of its partial specializations. 

1) If only one specialization matches the template arguments, that specialization is used

2) If more than one specialization matches, partial order rules are used to determine which specialization is more specialized. The most specialized specialization is used, if it is unique (if it is not unique, the program cannot be compiled)

3) If no specializations match, the primary template is used 
    
    
    // given the template A as defined above
    A<int, int, 1> a1;   // no specializations match, uses primary template
    A<int, int*, 1> a2;  // uses partial specialization #1 (T = int, I = 1)
    A<int, char*, 5> a3; // uses partial specialization #3, (T = char)
    A<int, char*, 1> a4; // uses partial specialization #4, (X = int, T = char, I = 1)
    A<int*, int*, 2> a5; // error: matches #2 (T = int, T2 = int*, I= 2)
                         //        matches #4 (X = int*, T = int, I = 2)
                         // neither one is more specialized than the other

Informally "A is more specialized than B" means "A accepts a subset of the types that B accepts". 

Formally, to establish more-specialized-than relationship between partial specializations, each is first converted to a fictitious function template as follows: 

  * the first function template has the same template parameters as the first partial specialization and has just one function parameter, whose type is a class template specialization with all the template arguments from the first partial specialization 
  * the second function template has the same template parameters as the second partial specialization and has just one function parameter whose type is a class template specialization with all the template arguments from the second partial specialization. 



The function templates are then ranked as if for [function template overloading](function_template.html#Function_template_overloading "cpp/language/function template"). 
    
    
    template<int I, int J, class T> struct X {}; // primary template
    template<int I, int J>          struct X<I, J, int>
    {
        static const int s = 1;
    }; // partial specialization #1
    // fictitious function template for #1 is
    // template<int I, int J> void f(X<I, J, int>); #A
     
    template<int I>                 struct X<I, I, int>
    {
        static const int s = 2;
    }; // partial specialization #2
    // fictitious function template for #2 is 
    // template<int I>        void f(X<I, I, int>); #B
     
    int main()
    {
        X<2, 2, int> x; // both #1 and #2 match
    // partial ordering for function templates:
    // #A from #B: void(X<I, J, int>) from void(X<U1, U1, int>): deduction OK
    // #B from #A: void(X<I, I, int>) from void(X<U1, U2, int>): deduction fails
    // #B is more specialized
    // #2 is the specialization that is instantiated
        [std::cout](../io/cout.html) << x.s << '\n'; // prints 2
    }

### Members of partial specializations

The template parameter list and the template argument list of a member of a partial specialization must match the parameter list and the argument list of the partial specialization. 

Just like with members of primary templates, they only need to be defined if used in the program. 

Members of partial specializations are not related to the members of the primary template. 

Explicit (full) specialization of a member of a partial specialization is declared the same way as an explicit specialization of the primary template. 
    
    
    template<class T, int I> // primary template
    struct A
    {
        void f(); // member declaration
    };
     
    template<class T, int I>
    void A<T, I>::f() {}     // primary template member definition
     
    // partial specialization
    template<class T>
    struct A<T, 2>
    {
        void f();
        void g();
        void h();
    };
     
    // member of partial specialization
    template<class T>
    void A<T, 2>::g() {}
     
    // explicit (full) specialization
    // of a member of partial specialization
    template<>
    void A<char, 2>::h() {}
     
    int main()
    {
        A<char, 0> a0;
        A<char, 2> a2;
        a0.f(); // OK, uses primary template’s member definition
        a2.g(); // OK, uses partial specialization's member definition
        a2.h(); // OK, uses fully-specialized definition of
                // the member of a partial specialization
        a2.f(); // error: no definition of f() in the partial
                // specialization A<T,2> (the primary template is not used)
    }

If a primary template is a member of another class template, its partial specializations are members of the enclosing class template. If the enclosing template is instantiated, the declaration of each member partial specialization is instantiated as well (the same way declarations, but not definitions, of all other members of a template are instantiated). 

If the primary member template is explicitly (fully) specialized for a given (implicit) specialization of the enclosing class template, the partial specializations of the member template are ignored for this specialization of the enclosing class template. 

If a partial specialization of the member template is explicitly specialized for a given (implicit) specialization of the enclosing class template, the primary member template and its other partial specializations are still considered for this specialization of the enclosing class template. 
    
    
    template<class T> struct A // enclosing class template
    {
        template<class T2>
        struct B {};      // primary member template
        template<class T2>
        struct B<T2*> {}; // partial specialization of member template
    };
     
    template<>
    template<class T2>
    struct A<short>::B {}; // full specialization of primary member template
                           // (will ignore the partial)
     
    A<char>::B<int*> abcip;  // uses partial specialization T2=int
    A<short>::B<int*> absip; // uses full specialization of the primary (ignores partial)
    A<char>::B<int> abci;    // uses primary

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[CWG 727](https://cplusplus.github.io/CWG/issues/727.html) | C++98  | partial and full specializations not allowed in  
class scope  | allowed in any scope   
[CWG 1315](https://cplusplus.github.io/CWG/issues/1315.html) | C++98  | template parameter could not be used in constant  
template arguments other than id-expressions  | expressions ok as long as deducible   
[CWG 1495](https://cplusplus.github.io/CWG/issues/1495.html) | C++11  | the specification was unclear when involving parameter pack  | the specialization shall be more specialized   
[CWG 1711](https://cplusplus.github.io/CWG/issues/1711.html) | C++14  | missing specification of variable template partial specializations  | add support for variable templates   
[CWG 1819](https://cplusplus.github.io/CWG/issues/1819.html) | C++98  | acceptable scopes for definition of partial specialization  | make partial specialization can be declared  
in the same scope with primary templates   
[CWG 2330](https://cplusplus.github.io/CWG/issues/2330.html) | C++14  | missing references to variable templates  | add support for variable templates   
  
### See also

  * [templates](templates.html "cpp/language/templates")
  * [class template](class_template.html "cpp/language/class template")
  * [function template](function_template.html "cpp/language/function template")
  * [full template specialization](template_specialization.html "cpp/language/template specialization")


