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
  


[ Functions](functions.html "cpp/language/functions")

Declarations  
---  
[Function declaration](function.html "cpp/language/function")  
[Function parameter list](function.html#Parameter_list "cpp/language/function")  
[Function definition](function.html#Function_definition "cpp/language/function")  
[Function contract specifiers](function.html#Function_contract_specifiers "cpp/language/function") (C++26)  
**Default arguments**  
[Variadic arguments](variadic_arguments.html "cpp/language/variadic arguments")  
[`inline` specifier](inline.html "cpp/language/inline")  
[Lambda expressions](lambda.html "cpp/language/lambda") (C++11)  
[Coroutines](coroutines.html "cpp/language/coroutines") (C++20)  
[Replacement functions](replacement_function.html "cpp/language/replacement function")  
Function calls  
[Argument-Dependent Lookup (ADL)](adl.html "cpp/language/adl")  
[Function-call operator](operator_other.html#Built-in_function_call_operator "cpp/language/operator other")  
[Function objects](../named_req/FunctionObject.html "cpp/named req/FunctionObject")  
Overloading  
[Overload resolution](overload_resolution.html "cpp/language/overload resolution")  
[Operator overloading](operators.html "cpp/language/operators")  
[Address of an overload set](overloaded_address.html "cpp/language/overloaded address")  
  


Allows a function to be called without providing one or more trailing arguments. 

Indicated by using the following syntax for a parameter in the parameter-list of a [function declaration](function.html "cpp/language/function").   
  
---  
attr ﻿(optional) decl-specifier-seq declarator `**=**` initializer |  (1)  |   
attr ﻿(optional) decl-specifier-seq abstract-declarator ﻿(optional) `**=**` initializer |  (2)  |   
  
Default arguments are used in place of the missing trailing arguments in a function call: 
    
    
    void point(int x = 3, int y = 4);
     
    point(1, 2); // calls point(1, 2)
    point(1);    // calls point(1, 4)
    point();     // calls point(3, 4)

In a function declaration, after a parameter with a default argument, all subsequent parameters must: 

  * have a default argument supplied in this or a previous declaration from the same scope: 


    
    
    int x(int = 1, int); // Error: only the trailing parameters can have default arguments
                         //        (assuming there's no previous declaration of “x”)
     
    void f(int n, int k = 1);
    void f(int n = 0, int k); // OK: the default argument of “k” is provided by
                              // the previous declaration in the same scope
     
    void g(int, int = 7);
     
    void h()
    {
        void g(int = 1, int); // Error: not the same scope
    }

    

  * ...unless the parameter was expanded from a parameter pack: 


    
    
    template<class... T>
    struct C { void f(int n = 0, T...); };
     
    C<int> c;  // OK; instantiates declaration void C::f(int n = 0, int)

  * or be a function parameter pack: 


    
    
    template<class... T>
    void h(int i = 0, T... args); // OK

| (since C++11)  
---|---  
  
The ellipsis is not a parameter, and so can follow a parameter with a default argument: 
    
    
    int g(int n = 0, ...); // OK

Default arguments are only allowed in the parameter lists of [function declarations](function.html "cpp/language/function") and [lambda-expressions](lambda.html "cpp/language/lambda"),(since C++11) and are not allowed in the declarations of pointers to functions, references to functions, or in [typedef](typedef.html "cpp/language/typedef") declarations. Template parameter lists use similar syntax for their [default template arguments](template_parameters.html#Default_template_arguments "cpp/language/template parameters"). 

For non-template functions, default arguments can be added to a function that was already declared if the function is redeclared in the same scope. At the point of a function call, the default arguments are a union of the default arguments provided in all visible declarations for the function. A redeclaration cannot introduce a default argument for a parameter for which a default argument is already visible (even if the value is the same). A re-declaration in an inner scope does not acquire the default arguments from outer scopes. 
    
    
    void f(int, int);     // #1
    void f(int, int = 7); // #2 OK: adds a default argument
     
    void h()
    {
        f(3); // #1 and #2 are in scope; makes a call to f(3,7)
        void f(int = 1, int); // Error: the default argument of the second
                              // parameter is not acquired from outer scopes
    }
     
    void m()
    { // new scope begins
        void f(int, int); // inner scope declaration; has no default argument.
        f(4); // Error: not enough arguments to call f(int, int)
        void f(int, int = 6);
        f(4); // OK: calls f(4, 6);
        void f(int, int = 6); // Error: the second parameter already has a
                              // default argument (even if the values are the same)
    }
     
    void f(int = 1, int); // #3 OK, adds a default argument to #2
     
    void n()
    { // new scope begins
        f(); // #1, #2, and #3 are in scope: calls f(1, 7);
    }

If an [inline](inline.html "cpp/language/inline") function is declared in different translation units, the accumulated sets of default arguments must be the same at the end of each translation unit. 

If a non-inline function is declared in the same namespace scope in different translation units, the corresponding default arguments must be the same if present (but some default arguments can be absent in some TU).  | (since C++20)  
---|---  
  
If a [friend](friend.html "cpp/language/friend") declaration specifies a default argument, it must be a friend function definition, and no other declarations of this function are allowed in the translation unit. 

The [using-declarations](namespace.html#Using-declarations "cpp/language/namespace") carries over the set of known default arguments, and if more default arguments are added later to the function's namespace, those default arguments are also visible anywhere the using-declaration is visible: 
    
    
    namespace N
    {
        void f(int, int = 1);
    }
     
    using N::f;
     
    void g()
    {
        f(7); // calls f(7, 1);
        f();  // error
    }
     
    namespace N
    {
        void f(int = 2, int);
    }
     
    void h()
    {
        f();  // calls f(2, 1);
    }

The names used in the default arguments are looked up, checked for [accessibility](access.html "cpp/language/access"), and bound at the point of declaration, but are executed at the point of the function call: 
    
    
    int a = 1;
     
    int f(int);
     
    int g(int x = f(a)); // lookup for f finds ::f, lookup for a finds ::a
                         // the value of ::a, which is 1 at this point, is not used
     
    void h()
    {
        a = 2; // changes the value of ::a
        {
            int a = 3;
            g(); // calls f(2), then calls g() with the result
        }
    }

For a [member function](member_functions.html "cpp/language/member functions") of a non-[templated](templates.html#Templated_entity "cpp/language/templates") class, the default arguments are allowed on the out-of-class definition, and are combined with the default arguments provided by the declaration inside the class body. If these out-of-class default arguments would turn a member function into a default constructor or copy/move(since C++11) constructor/assignment operator (which makes the call ambiguous), the program is ill-formed. For member functions of templated classes, all default arguments must be provided in the initial declaration of the member function. 
    
    
    class C
    {
        void f(int i = 3);
        void g(int i, int j = 99);
        C(int arg); // non-default constructor
    };
     
    void C::f(int i = 3) {}         // error: default argument already
                                    // specified in class scope
     
    void C::g(int i = 88, int j) {} // OK: in this translation unit,
                                    // C::g can be called with no argument
     
    C::C(int arg = 1) {}            // Error: turns this into a default constructor

The overriders of [virtual](virtual.html "cpp/language/virtual") functions do not acquire the default arguments from the base class declarations, and when the virtual function call is made, the default arguments are decided based on the static type of the object (note: this can be avoided with [non-virtual interface](http://www.gotw.ca/publications/mill18.htm) pattern). 
    
    
    struct Base
    {
        virtual void f(int a = 7);
    };
     
    struct Derived : Base
    {
        void f(int a) override;
    };
     
    void m()
    {
        Derived d;
        Base& b = d;
        b.f(); // OK: calls Derived::f(7)
        d.f(); // Error: no default argument
    }

Local variables are not allowed in default arguments unless they are [not evaluated](expressions.html#Potentially-evaluated_expressions "cpp/language/expressions"): 
    
    
    void f()
    {
        int n = 1;
        extern void g(int x = n); // error: local variable cannot be a default argument
        extern void h(int x = sizeof n); // OK as of CWG 2082
    }

The [this](this.html "cpp/language/this") pointer is not allowed in default arguments: 
    
    
    class A
    {
        void f(A* p = this) {} // error: this is not allowed
    };

Non-static class members are not allowed in default arguments (even if they are not evaluated), except when used to form a pointer-to-member or in a member access expression: 
    
    
    int b;
     
    class X
    {
        int a;
        int mem1(int i = a); // error: non-static member cannot be used
        int mem2(int i = b); // OK: lookup finds X::b, the static member
        int mem3(int X::* i = &X::a); // OK: non-static member can be used
        int mem4(int i = x.a); // OK: in a member access expression
     
        static X x;
        static int b;
    };

A default argument is evaluated each time the function is called with no argument for the corresponding parameter. Function parameters are not allowed in default arguments except if they are [not evaluated](expressions.html#Potentially-evaluated_expressions "cpp/language/expressions"). Note that parameters that appear earlier in the parameter list are in [scope](scope.html "cpp/language/scope"): 
    
    
    int a;
     
    int f(int a, int b = a); // Error: the parameter a used in a default argument
     
    int g(int a, int b = sizeof a); // Error until resolving CWG 2082
                                    // OK after resolution: use in unevaluated context is OK

The default arguments are not part of the function type: 
    
    
    int f(int = 0);
     
    void h()
    {
        int j = f(1);
        int k = f(); // calls f(0);
    }
     
    int (*p1)(int) = &f;
    int (*p2)()    = &f; // Error: the type of f is int(int)

Operator functions other than the [function call operator](operator_other.html#Built-in_function_call_operator "cpp/language/operator other") and the [subscript operator](operator_member_access.html#Built-in_subscript_operator "cpp/language/operator member access")(since C++23) cannot have default arguments: 
    
    
    class C
    {
        int operator++(int i = 0); // ill-formed
        int operator[](int j = 0); // OK since C++23
        int operator()(int k = 0); // OK
    };

[Explicit object parameters](member_functions.html#Explicit_object_parameter "cpp/language/member functions") cannot have default arguments: 
    
    
    struct S { void f(this const S& = S{}); }; // ill-formed

| (since C++23)  
---|---  
  
### Note

Spaces may be necessary to avoid a compound assignment token if the parameter name is absent (see [maximal munch](translation_phases.html#Maximal_munch "cpp/language/translation phases")). 
    
    
    void f1(int*=0);         // Error, “*=” is unexpected here
    void g1(const int&=0);   // Error, “&=” is unexpected here
    void f2(int* = 0);       // OK
    void g2(const int& = 0); // OK
    void h(int&&=0);         // OK even without spaces, “&&” is a token here

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[CWG 217](https://cplusplus.github.io/CWG/issues/217.html) | C++98  | a default argument could be added to a non-  
template member function of a class template  | prohibited   
[CWG 1344](https://cplusplus.github.io/CWG/issues/1344.html) | C++98  | default arguments added in the out-of-class definition of a  
member function could change it to a special member function  | prohibited   
[CWG 1716](https://cplusplus.github.io/CWG/issues/1716.html) | C++98  | default arguments were evaluated each time the function  
is called, even if the caller provided the arguments  | evaluated only if no  
argument is provided for the  
corresponding parameter   
[CWG 2082](https://cplusplus.github.io/CWG/issues/2082.html) | C++98  | default arguments were forbidden to use local variables  
and preceding parameters in unevaluated context  | unevaluated context  
use allowed   
[CWG 2233](https://cplusplus.github.io/CWG/issues/2233.html) | C++11  | parameters expanded from parameter packs could  
not appear after parameters with default arguments  | allowed   
[CWG 2683](https://cplusplus.github.io/CWG/issues/2683.html) | C++98  | out-of-class definitions of the member functions of class  
templates' nested classes could have default arguments  | prohibited 
