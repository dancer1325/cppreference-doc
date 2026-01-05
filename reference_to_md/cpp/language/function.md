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
**Function declaration**  
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
**Function types**  
  
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
**Function declaration**  
[Function parameter list](function.html#Parameter_list "cpp/language/function")  
[Function definition](function.html#Function_definition "cpp/language/function")  
[Function contract specifiers](function.html#Function_contract_specifiers "cpp/language/function") (C++26)  
[Default arguments](default_arguments.html "cpp/language/default arguments")  
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
  


A function declaration introduces the function name and its type. A function definition associates the function name/type with the function body. 

## Contents

  * [1 Function declaration](function.html#Function_declaration)
  * [2 Return type deduction](function.html#Return_type_deduction)
  * [3 Parameter list](function.html#Parameter_list)
    * [3.1 Using an ellipsis](function.html#Using_an_ellipsis)
  * [4 Function type](function.html#Function_type)
    * [4.1 Parameter-type-list](function.html#Parameter-type-list)
    * [4.2 Determining function type](function.html#Determining_function_type)
    * [4.3 Trailing qualifiers](function.html#Trailing_qualifiers)
  * [5 Function signature](function.html#Function_signature)
  * [6 Function definition](function.html#Function_definition)
    * [6.1 Defaulted functions](function.html#Defaulted_functions)
    * [6.2 Deleted functions](function.html#Deleted_functions)
    * [6.3 User-provided functions](function.html#User-provided_functions)
    * [6.4 Ambiguity Resolution](function.html#Ambiguity_Resolution)
    * [6.5 __func__](function.html#func)
  * [7 Function contract specifiers](function.html#Function_contract_specifiers)
    * [7.1 Precondition assertions](function.html#Precondition_assertions)
    * [7.2 Postcondition assertions](function.html#Postcondition_assertions)
    * [7.3 Contract consistency](function.html#Contract_consistency)
  * [8 Notes](function.html#Notes)
  * [9 Keywords](function.html#Keywords)
  * [10 Example](function.html#Example)
  * [11 Defect reports](function.html#Defect_reports)
  * [12 See also](function.html#See_also)

  
---  
  
### Function declaration

Function declarations may appear in any scope. A function declaration at class scope introduces a class member function (unless the friend specifier is used), see [member functions](member_functions.html "cpp/language/member functions") and [friend functions](friend.html "cpp/language/friend") for details.   
  
---  
noptr-declarator `**(**` parameter-list `**)**` cv ﻿(optional) ref ﻿ ﻿(optional) except ﻿(optional) attr ﻿(optional) |  (1)  |   
noptr-declarator `**(**` parameter-list `**)**` cv ﻿(optional) ref ﻿ ﻿(optional) except ﻿(optional) attr ﻿(optional)  
`**- >**` trailing |  (2)  |  (since C++11)  
  
(see [Declarations](declarations.html "cpp/language/declarations") for the other forms of the declarator syntax) 

1) Regular function declarator syntax.

2) Trailing return type declaration. The decl-specifier-seq in this case must contain the keyword auto.

noptr-declarator |  \-  |  any valid declarator, but if it begins with `*`, `&`, or `&&`, it has to be surrounded by parentheses.   
---|---|---  
parameter-list |  \-  |  possibly empty, comma-separated list of the function parameters (see below for details)   
attr |  \-  |  (since C++11) a list of [attributes](attributes.html "cpp/language/attributes"). These attributes are applied to the type of the function, not the function itself. The attributes for the function appear after the identifier within the declarator and are combined with the attributes that appear in the beginning of the declaration, if any.   
cv |  \-  |  const/volatile qualification, only allowed in non-static member function declarations   
ref |  \-  |  (since C++11) ref-qualification, only allowed in non-static member function declarations   
except |  \-  |  |  [dynamic exception specification](except_spec.html "cpp/language/except spec") | (until C++11)  
---|---  
either [dynamic exception specification](except_spec.html "cpp/language/except spec")  
or [noexcept specification](noexcept_spec.html "cpp/language/noexcept spec") | (since C++11)  
(until C++17)  
[noexcept specification](noexcept_spec.html "cpp/language/noexcept spec") | (since C++17)  
trailing |  \-  |  Trailing return type, useful if the return type depends on argument names, such as template<class T, class U> auto add(T t, U u) -> decltype(t + u); or is complicated, such as in auto fpif(int)->int(*)(int)  
  
  


As mentioned in [Declarations](declarations.html#Declarators "cpp/language/declarations"), the declarator can be followed by a [requires clause](constraints.html#Requires_clauses "cpp/language/constraints"), which declares the associated [constraints](constraints.html "cpp/language/constraints") for the function, which must be satisfied in order for the function to be selected by [overload resolution](overload_resolution.html "cpp/language/overload resolution"). (example: void f1(int a) requires true;) Note that the associated constraint is part of function signature, but not part of function type.  | (since C++20)  
---|---  
  
Function declarators can be mixed with other declarators, where the [declaration specifier sequence](declarations.html#Specifiers "cpp/language/declarations") allows: 
    
    
    // declares an int, an int*, a function, and a pointer to a function
    int a = 1, *p = [NULL](../types/NULL.html), f(), (*pf)(double);
    // decl-specifier-seq is int
    // declarator f() declares (but doesn't define)
    //                a function taking no arguments and returning int
     
    struct S
    {
        virtual int f(char) const, g(int) &&; // declares two non-static member functions
        virtual int f(char), x; // compile-time error: virtual (in decl-specifier-seq)
                                // is only allowed in declarations of non-static
                                // member functions
    };

Using a volatile-qualified object type as parameter type or return type is deprecated.  | (since C++20)  
---|---  
  
The return type of a function cannot be a function type or an array type (but can be a pointer or reference to those). 

As with any declaration, attributes that appear before the declaration and the attributes that appear immediately after the identifier within the declarator both apply to the entity being declared or defined (in this case, to the function): 
    
    
    [[noreturn]] void f [[noreturn]] (); // OK: both attributes apply to the function f

However, the attributes that appear after the declarator (in the syntax above), apply to the type of the function, not to the function itself: 
    
    
    void f() [[noreturn]]; // Error: this attribute has no effect on the function itself

| (since C++11)  
---|---  
  
###  Return type deduction

If the decl-specifier-seq of the function declaration contains the keyword auto, trailing return type may be omitted, and will be deduced by the compiler from the type of the operand used in the [non-discarded](if.html#constexpr_if "cpp/language/if") [return](return.html "cpp/language/return") statement. If the return type does not use decltype(auto), the deduction follows the rules of [template argument deduction](template_argument_deduction.html#Other_contexts "cpp/language/template argument deduction"): 
    
    
    int x = 1;
    auto f() { return x; }        // return type is int
    const auto& f() { return x; } // return type is const int&

If the return type is decltype(auto), the return type is as what would be obtained if the operand used in the return statement were wrapped in [`decltype`](decltype.html "cpp/language/decltype"): 
    
    
    int x = 1;
    decltype(auto) f() { return x; }  // return type is int, same as decltype(x)
    decltype(auto) f() { return(x); } // return type is int&, same as decltype((x))

(note: “const decltype(auto)&” is an error, decltype(auto) must be used on its own) If there are multiple return statements, they must all deduce to the same type: 
    
    
    auto f(bool val)
    {
        if (val) return 123; // deduces return type int
        else return 3.14f;   // Error: deduces return type float
    }

If there is no return statement or if the operand of the return statement is a void expression (including return statements with no operand), the declared return type must be either decltype(auto), in which case the deduced return type is void, or (possibly cv-qualified) auto, in which case the deduced return type is then (identically cv-qualified) void: 
    
    
    auto f() {}              // returns void
    auto g() { return f(); } // returns void
    auto* x() {}             // Error: cannot deduce auto* from void

Once a return statement has been seen in a function, the return type deduced from that statement can be used in the rest of the function, including in other return statements: 
    
    
    auto sum(int i)
    {
        if (i == 1)
            return i;              // sum’s return type is int
        else
            return sum(i - 1) + i; // OK: sum’s return type is already known
    }

If the return statement uses a [brace-enclosed initializer list](initialization.html "cpp/language/initialization"), deduction is not allowed: 
    
    
    auto func() { return {1, 2, 3}; } // Error

[Virtual functions](virtual.html "cpp/language/virtual") and [coroutines](coroutines.html "cpp/language/coroutines")(since C++20) cannot use return type deduction: 
    
    
    struct F
    {
        virtual auto f() { return 2; } // Error
    };

[Function templates](function_template.html "cpp/language/function template") other than [user-defined conversion functions](cast_operator.html "cpp/language/cast operator") can use return type deduction. The deduction takes place at instantiation even if the expression in the return statement is not [dependent](dependent_name.html "cpp/language/dependent name"). This instantiation is not in an immediate context for the purposes of [SFINAE](sfinae.html "cpp/language/sfinae"). 
    
    
    template<class T>
    auto f(T t) { return t; }
    typedef decltype(f(1)) fint_t;    // instantiates f<int> to deduce return type
     
    template<class T>
    auto f(T* t) { return *t; }
    void g() { int (*p)(int*) = &f; } // instantiates both fs to determine return types,
                                      // chooses second template overload

Redeclarations or specializations of functions or function templates that use return type deduction must use the same return type placeholders: 
    
    
    auto f(int num) { return num; }
    // int f(int num);            // Error: no placeholder return type
    // decltype(auto) f(int num); // Error: different placeholder
     
    template<typename T>
    auto g(T t) { return t; }
    template auto g(int);     // OK: return type is int
    // template char g(char); // Error: not a specialization of the primary template g

Similarly, redeclarations or specializations of functions or function templates that do not use return type deduction must not use a placeholder: 
    
    
    int f(int num);
    // auto f(int num) { return num; } // Error: not a redeclaration of f
     
    template<typename T>
    T g(T t) { return t; }
    template int g(int);      // OK: specialize T as int
    // template auto g(char); // Error: not a specialization of the primary template g

[Explicit instantiation declarations](function_template.html#Explicit_instantiation "cpp/language/function template") do not themselves instantiate function templates that use return type deduction: 
    
    
    template<typename T>
    auto f(T t) { return t; }
    extern template auto f(int); // does not instantiate f<int>
     
    int (*p)(int) = f; // instantiates f<int> to determine its return type,
                       // but an explicit instantiation definition 
                       // is still required somewhere in the program

| (since C++14)  
  
### Parameter list

The parameter list determines the arguments that can be specified when the function is called. It is a comma-separated list of _parameter declarations_ , each of which has the following syntax:   
  
---  
attr ﻿(optional) decl-specifier-seq declarator |  (1)  |   
attr ﻿(optional) `**this**` decl-specifier-seq declarator |  (2)  |  (since C++23)  
attr ﻿(optional) decl-specifier-seq declarator `**=**` initializer |  (3)  |   
attr ﻿(optional) decl-specifier-seq abstract-declarator ﻿(optional) |  (4)  |   
attr ﻿(optional) `**this**` decl-specifier-seq abstract-declarator ﻿(optional) |  (5)  |  (since C++23)  
attr ﻿(optional) decl-specifier-seq abstract-declarator ﻿(optional) `**=**` initializer |  (6)  |   
`**void**` |  (7)  |   
  
1) Declares a named (formal) parameter. For the meanings of decl-specifier-seq and declarator, see [declarations](declarations.html "cpp/language/declarations").

int f(int a, int* p, int (*(*x)(double))[3]);

2) Declares a named [explicit object parameter](function.html#Explicit_object_parameter).

3) Declares a named (formal) parameter with a [default value](default_arguments.html "cpp/language/default arguments").

int f(int a = 7, int* p = nullptr, int (*(*x)(double))[3] = nullptr);

4) Declares an unnamed parameter.

int f(int, int*, int (*(*)(double))[3]);

5) Declares a unnamed [explicit object parameter](function.html#Explicit_object_parameter).

6) Declares an unnamed parameter with a [default value](default_arguments.html "cpp/language/default arguments").

int f(int = 7, int* = nullptr, int (*(*)(double))[3] = nullptr);

7) Indicates that the function takes no parameters, it is the exact synonym for an empty parameter list: int f(void); and int f(); declare the same function.

void is the only syntax equivalent to an empty parameter list, other usages of void parameters are ill-formed:  Incorrect usage  | Example   
---|---  
multiple parameters are present  | int f1(void, int);  
the void parameter is named  | inf f2(void param);  
void is cv-qualified  | int f3(const void);  
void is [dependent](dependent_name.html "cpp/language/dependent name") | int f4(T); (where `T` is void)   
the void parameter is an [explicit object parameter](function.html#Explicit_object_parameter) (since C++23) | int f5(this void);  
  
Although decl-specifier-seq implies there can exist [specifiers](declarations.html#Specifiers "cpp/language/declarations") other than type specifiers, the only other specifier allowed is register as well as auto(until C++11), and it has no effect.  | (until C++17)  
---|---  
If any of the function parameters uses a _placeholder_ (either auto or a [concept type](../concepts.html "cpp/concepts")), the function declaration is instead an [abbreviated function template](function_template.html#Abbreviated_function_template "cpp/language/function template") declaration: 
    
    
    void f1(auto);    // same as template<class T> void f1(T)
    void f2(C1 auto); // same as template<C1 T> void f2(T), if C1 is a concept

| (since C++20)  
A parameter declaration with the specifier this (syntax ([2](function.html#Version_2))/([5](function.html#Version_5))) declares an _explicit object parameter_. An explicit object parameter cannot be a [function parameter pack](parameter_pack.html "cpp/language/pack"), and it can only appear as the first parameter of the parameter list in the following declarations: 

  * a declaration of a [member function](member_functions.html "cpp/language/member functions") or member function template 
  * an [explicit instantiation](function_template.html#Explicit_instantiation "cpp/language/function template") or [explicit specialization](template_specialization.html "cpp/language/template specialization") of a templated member function 
  * a [lambda](lambda.html "cpp/language/lambda") declaration 

A member function with an explicit object parameter has the following restrictions: 

  * The function is not [static](static.html "cpp/language/static"). 
  * The function is not [virtual](virtual.html "cpp/language/virtual"). 
  * The declarator of the function does not contain cv and ref. 


    
    
    struct C
    {
        void f(this C& self);     // OK
     
        template<typename Self>
        void g(this Self&& self); // also OK for templates
     
        void p(this C) const;     // Error: “const” not allowed here
        static void q(this C);    // Error: “static” not allowed here
        void r(int, this C);      // Error: an explicit object parameter
                                  //        can only be the first parameter
    };
     
    // void func(this C& self);   // Error: non-member functions cannot have
                                  //        an explicit object parameter

| (since C++23)  
  
Parameter names declared in function declarations are usually for only self-documenting purposes. They are used (but remain optional) in function definitions. 

An ambiguity arises in a parameter list when a type name is nested in parentheses (including [lambda expressions](lambda.html "cpp/language/lambda"))(since C++11). In this case, the choice is between the declaration of a parameter of type pointer to function and the declaration of a parameter with redundant parentheses around the identifier of the declarator. The resolution is to consider the type name as a [simple type specifier](declarations.html#Specifiers "cpp/language/declarations") (which is the pointer to function type): 
    
    
    class C {};
     
    void f(int(C)) {} // void f(int(*fp)(C param)) {}
                      // NOT void f(int C) {}
     
    void g(int *(C[10])); // void g(int *(*fp)(C param[10]));
                          // NOT void g(int *C[10]);

Parameter type cannot be a type that includes a reference or a pointer to array of unknown bound, including a multi-level pointers/arrays of such types, or a pointer to functions whose parameters are such types. 

#### Using an ellipsis

The last parameter in the parameter list can be an ellipsis (...); this declares a [variadic function](variadic_arguments.html "cpp/language/variadic arguments"). The comma preceding the ellipsis can be omitted(deprecated in C++26): 
    
    
    int printf(const char* fmt, ...); // a variadic function
    int printf(const char* fmt...);   // same as above, but deprecated since C++26
     
    template<typename... Args>
    void f(Args..., ...); // a variadic function template with a parameter pack
     
    template<typename... Args>
    void f(Args... ...);  // same as above, but deprecated since C++26
     
    template<typename... Args>
    void f(Args......);   // same as above, but deprecated since C++26

### Function type

#### Parameter-type-list

A function’s _parameter-type-list_ is determined as follows: 

  1. The type of each parameter (including function [parameter packs](parameter_pack.html "cpp/language/pack"))(since C++11) is determined from its own [parameter declaration](function.html#Parameter_list). 
  2. After determining the type of each parameter, any parameter of type “array of `T`” or of function type `T` is adjusted to be “pointer to `T`”. 
  3. After producing the list of parameter types, any top-level [cv-qualifiers](cv.html "cpp/language/cv") modifying a parameter type are deleted when forming the function type. 
  4. The resulting list of transformed parameter types and the presence or absence of the [ellipsis](function.html#Using_an_ellipsis) or a function [parameter pack](parameter_pack.html "cpp/language/pack")(since C++11) is the function’s parameter-type-list. 


    
    
    void f(char*);         // #1
    void f(char[]) {}      // defines #1
    void f(const char*) {} // OK, another overload
    void f(char* const) {} // Error: redefines #1
     
    void g(char(*)[2]);   // #2
    void g(char[3][2]) {} // defines #2
    void g(char[3][3]) {} // OK, another overload
     
    void h(int x(const int)); // #3
    void h(int (*)(int)) {}   // defines #3

#### Determining function type

In syntax (1), assuming noptr-declarator as a standalone declaration, given the type of the qualified-id or unqualified-id in noptr-declarator as “derived-declarator-type-list `T`”: 

  * If the exception specification is [non-throwing](noexcept_spec.html "cpp/language/noexcept spec"), the type of the function declared is  
“derived-declarator-type-list noexcept function of  
parameter-type-list cv ﻿(optional) ref ﻿ ﻿(optional) returning `T`”. 

| (since C++17)  
---|---  
  
  * The(until C++17)Otherwise, the(since C++17) type of the function declared is  
“derived-declarator-type-list function of  
parameter-type-list cv ﻿(optional) ref ﻿ ﻿(optional)(since C++11) returning `T`”. 

In syntax (2), assuming noptr-declarator as a standalone declaration, given the type of the qualified-id or unqualified-id in noptr-declarator as “derived-declarator-type-list `T`” (`T` must be auto in this case):  | (since C++11)  
---|---  
  
  * If the exception specification is [non-throwing](noexcept_spec.html "cpp/language/noexcept spec"), the type of the function declared is  
“derived-declarator-type-list noexcept function of  
parameter-type-list cv ﻿(optional) ref ﻿ ﻿(optional) returning trailing ﻿”. 

| (since C++17)  
  
  * The(until C++17)Otherwise, the(since C++17) type of the function declared is  
“derived-declarator-type-list function of  
parameter-type-list cv ﻿(optional) ref ﻿ ﻿(optional) returning trailing ﻿”. 

attr, if present, applies to the function type.  | (since C++11)  
      
    
    // the type of “f1” is
    // “function of int returning void, with attribute noreturn”
    void f1(int a) [[noreturn]];
     
    // the type of “f2” is
    // “constexpr noexcept function of pointer to int returning int”
    constexpr auto f2(int[] b) noexcept -> int;
     
    struct X
    {
        // the type of “f3” is
        // “function of no parameter const returning const int”
        const int f3() const;
    };

#### Trailing qualifiers

A function type with cv ﻿ or ref ﻿ ﻿(since C++11) (including a type named by [`typedef`](typedef.html "cpp/language/typedef") name) can appear only as: 

  * the function type for a [non-static member function](member_functions.html "cpp/language/member functions"), 
  * the function type to which a pointer to member refers, 
  * the top-level function type of a function typedef declaration or [alias declaration](type_alias.html "cpp/language/type alias")(since C++11), 
  * the [type-id](type-id.html#Type_naming "cpp/language/type") in the default argument of a [template type parameter](template_parameters.html#Type_template_parameter "cpp/language/template parameters"), or 
  * the type-id of a template argument for a template type parameter. 


    
    
    typedef int FIC(int) const;
    FIC f;     // Error: does not declare a member function
     
    struct S
    {
        FIC f; // OK
    };
     
    FIC S::*pm = &S::f; // OK

### Function signature

Every function has a signature. 

The signature of a function consists of its name and [parameter-type-list](function.html#Parameter-type-list). Its signature also contains the enclosing [namespace](namespace.html "cpp/language/namespace"), with the following exceptions: 

  * If the function is a [member function](member_functions.html "cpp/language/member functions"), its signature contains the class of which the function is a member instead of the enclosing namespace. Its signature also contains the following components, if exists: 



    

  * cv



    

  * ref


| (since C++11)  
---|---  
  
    

  * trailing requires clause 



  * If the function is a non-template [friend](friend.html "cpp/language/friend") function with a trailing requires clause, its signature contains the enclosing class instead of the enclosing namespace. The signature also contains the trailing requires clause. 

| (since C++20)  
  
except and attr(since C++11) doesn't involve function signature, although [noexcept specification](noexcept_spec.html "cpp/language/noexcept spec") affects the function type(since C++17). 

### Function definition

A non-member function definition may appear at namespace scope only (there are no nested functions). A [member function](member_functions.html "cpp/language/member functions") definition may also appear in the body of a [class definition](class.html "cpp/language/class"). They have the following syntax:   
  
---  
attr ﻿(optional) decl-specifier-seq ﻿(optional) declarator  
virt-specs ﻿(optional) contract-specs ﻿(optional) function-body |  (1)  |   
attr ﻿(optional) decl-specifier-seq ﻿(optional) declarator  
requires-clause contract-specs ﻿(optional) function-body |  (2)  |  (since C++20)  
  
1) A function definition without constraints.

2) A function definition with constraints.

attr |  \-  |  (since C++11) a list of [attributes](attributes.html "cpp/language/attributes"). These attributes are combined with the attributes after the identifier in the declarator (see top of this page), if any.   
---|---|---  
decl-specifier-seq |  \-  |  the return type with specifiers, as in the [declaration grammar](declarations.html "cpp/language/declarations")  
declarator |  \-  |  function declarator, same as in the function declaration grammar above (can be parenthesized)   
virt-specs |  \-  |  (since C++11) [`override`](override.html "cpp/language/override"), [`final`](final.html "cpp/language/final"), or their combination in any order   
requires-clause |  \-  |  a [requires clause](constraints.html#Requires_clauses "cpp/language/constraints")  
contract-specs |  \-  |  (since C++26) a list of [function contract specifiers](function.html#Function_contract_specifiers)  
function-body |  \-  |  the function body (see below)   
  
  
function-body is one of the following:   
  
---  
ctor-initializer ﻿(optional) compound-statement |  (1)  |   
function-try-block |  (2)  |   
`**=**` `**default**` `**;**` |  (3)  |  (since C++11)  
`**=**` `**delete**` `**;**` |  (4)  |  (since C++11)  
`**=**` `**delete**` `**(**` string-literal `**);**` |  (5)  |  (since C++26)  
  
1) Regular function body.

2) [Function try block](try.html#Function_try_block "cpp/language/try").

3) Explicitly defaulted function definition.

4) Explicitly deleted function definition.

5) Explicitly deleted function definition with error message.

ctor-initializer |  \-  |  [member initializer list](initializer_list.html "cpp/language/initializer list"), only allowed in constructors   
---|---|---  
compound-statement |  \-  |  the brace-enclosed [sequence of statements](statements.html#Compound_statements "cpp/language/statements") that constitutes the body of a function   
function-try-block |  \-  |  a [function try block](try.html#Function_try_block "cpp/language/try")  
string-literal |  \-  |  an [unevaluated string literal](string_literal.html#Unevaluated_strings "cpp/language/string literal") that could be used to explain the rationale for why the function is deleted   
      
    
    int max(int a, int b, int c)
    {
        int m = (a > b) ? a : b;
        return (m > c) ? m : c;
    }
     
    // decl-specifier-seq is “int”
    // declarator is “max(int a, int b, int c)”
    // body is { ... }

The function body is a [compound statement](statements.html#Compound_statements "cpp/language/statements") (sequence of zero or more statements surrounded by a pair of curly braces), which is executed when the function call is made. Moreover, the function body of a [constructor](initializer_list.html "cpp/language/constructor") also includes the following: 

  * For all non-static data members whose identifiers are absent in the constructor's [member initializer list](initializer_list.html "cpp/language/constructor"), the [default member initializers](data_members.html#Member_initialization "cpp/language/data members") or(since C++11) [default-initializations](default_initialization.html "cpp/language/default initialization") used to initialize the corresponding member [subobjects](objects.html#Subobjects "cpp/language/object"). 
  * For all base classes whose type names are absent in the constructor's member initializer list, the default-initializations used to initialize the corresponding base class subobjects. 

If a function definition contains a virt-specs, it must define a [member function](member_functions.html "cpp/language/member functions").  | (since C++11)  
---|---  
If a function definition contains a requires-clause, it must define a [templated function](templates.html#Templated_entity "cpp/language/templates").  | (since C++20)  
      
    
    void f() override {} // Error: not a member function
     
    void g() requires (sizeof(int) == 4) {} // Error: not a templated function

The parameter types, as well as the return type of a function definition cannot be (possibly cv-qualified) [incomplete](incomplete_type.html "cpp/language/incomplete type") [class types](class.html "cpp/language/class") unless the function is defined as deleted(since C++11). The completeness check is only made in the function body, which allows [member functions](member_functions.html "cpp/language/member functions") to return the class in which they are defined (or its enclosing class), even if it is incomplete at the point of definition (it is complete in the function body). 

The parameters declared in the declarator of a function definition are [in scope](scope.html "cpp/language/scope") within the body. If a parameter is not used in the function body, it does not need to be named (it's sufficient to use an abstract declarator): 
    
    
    void print(int a, int) // second parameter is not used
    {
        [std::printf](../io/c/fprintf.html)("a = %d\n", a);
    }

Even though top-level [cv-qualifiers](cv.html "cpp/language/cv") on the parameters are discarded in function declarations, they modify the type of the parameter as visible in the body of a function: 
    
    
    void f(const int n) // declares function of type void(int)
    {
        // but in the body, the type of “n” is const int
    }

####  Defaulted functions

If the function definition is of syntax ([3](function.html#Version_3)), the function is defined as _explicitly defaulted_. A function that is explicitly defaulted must be a [special member function](member_functions.html#Special_member_functions "cpp/language/member functions") or [comparison operator function](operator_comparison.html "cpp/language/operator comparison")(since C++20), and it must have no [default argument](default_arguments.html "cpp/language/default arguments"). An explicitly defaulted special member function `F1` is allowed to differ from the corresponding special member function `F2` that would have been implicitly declared, as follows: 

  * `F1` and `F2` may have different ref and/or except. 
  * If `F2` has a non-object parameter of type const C&, the corresponding non-object parameter of `F1` maybe of type `C&`. 

| 

  * If `F2` has an implicit object parameter of type “reference to `C`”, `F1` may be an explicit object member function whose [explicit object parameter](function.html#Explicit_object_parameter) is of (possibly different) type “reference to `C`”, in which case the type of `F1` would differ from the type of `F2` in that the type of `F1` has an additional parameter. 

| (since C++23)  
---|---  
  
If the type of `F1` differs from the type of `F2` in a way other than as allowed by the preceding rules, then: 

  * If `F1` is an assignment operator, and the return type of `F1` differs from the return type of `F2` or `F1`’s non-object parameter type is not a reference, the program is ill-formed. 
  * Otherwise, if `F1` is explicitly defaulted on its first declaration, it is defined as deleted. 
  * Otherwise, the program is ill-formed. 



A function explicitly defaulted on its first declaration is implicitly [inline](inline.html "cpp/language/inline"), and is implicitly constexpr if it can be a [constexpr function](constexpr.html#constexpr_function "cpp/language/constexpr"). 
    
    
    struct S
    {
        S(int a = 0) = default;             // error: default argument
        void operator=(const S&) = default; // error: non-matching return type
        ~S() noexcept(false) = default;     // OK, different exception specification
    private:
        int i;
        S(S&);          // OK, private copy constructor
    };
     
    S::S(S&) = default; // OK, defines copy constructor

Explicitly-defaulted functions and implicitly-declared functions are collectively called _defaulted_ functions. Their actual definitions will be implicitly provided, see their corresponding pages for details. 

####  Deleted functions

If the function definition is of syntax ([4](function.html#Version_4)) or ([5](function.html#Version_5))(since C++26), the function is defined as _explicitly deleted_. 

Any use of a deleted function is ill-formed (the program will not compile). This includes calls, both explicit (with a function call operator) and implicit (a call to deleted overloaded operator, special member function, allocation function, etc), constructing a pointer or pointer-to-member to a deleted function, and even the use of a deleted function in an expression that is not [potentially-evaluated](expressions.html#Potentially-evaluated_expressions "cpp/language/expressions"). 

A non-pure virtual member function can be defined as deleted, even though it is implicitly [odr-used](definition.html#ODR-use "cpp/language/definition"). A deleted function can only be overridden by deleted functions, and a non-deleted function can only be overridden by non-deleted functions. 

If string-literal is present, the implementation is encouraged to include the text of it as part of the resulting diagnostic message which shows the rationale for deletion or to suggest an alternative.  | (since C++26)  
---|---  
  
If the function is overloaded, [overload resolution](overload_resolution.html "cpp/language/overload resolution") takes place first, and the program is only ill-formed if the deleted function was selected: 
    
    
    struct T
    {
        void* [operator new](../memory/new/operator_new.html)([std::size_t](../types/size_t.html)) = delete;
        void* [operator new](../memory/new/operator_new.html)[]([std::size_t](../types/size_t.html)) = delete("new[] is deleted"); // since C++26
    };
     
    T* p = new T;    // Error: attempts to call deleted T::operator new
    T* p = new T[5]; // Error: attempts to call deleted T::operator new[],
                     //        emits a diagnostic message “new[] is deleted”

The deleted definition of a function must be the first declaration in a translation unit: a previously-declared function cannot be redeclared as deleted: 
    
    
    struct T { T(); };
    T::T() = delete; // Error: must be deleted on the first declaration

####  User-provided functions

A function is _user-provided_ if it is user-declared and not explicitly defaulted or deleted on its first declaration. A user-provided explicitly-defaulted function (i.e., explicitly defaulted after its first declaration) is defined at the point where it is explicitly defaulted; if such a function is implicitly defined as deleted, the program is ill-formed. Declaring a function as defaulted after its first declaration can provide efficient execution and concise definition while enabling a stable binary interface to an evolving code base. 
    
    
    // All special member functions of “trivial” are
    // defaulted on their first declarations respectively,
    // they are not user-provided
    struct trivial
    {
        trivial() = default;
        trivial(const trivial&) = default;
        trivial(trivial&&) = default;
        trivial& operator=(const trivial&) = default;
        trivial& operator=(trivial&&) = default;
        ~trivial() = default;
    };
     
    struct nontrivial
    {
        nontrivial(); // first declaration
    };
     
    // not defaulted on the first declaration,
    // it is user-provided and is defined here
    nontrivial::nontrivial() = default;

####  Ambiguity Resolution

In the case of an ambiguity between a function body and an [initializer](initialization.html "cpp/language/initialization") beginning with `**{**` or `**=**`(since C++26), the ambiguity is resolved by checking the type of the [declarator identifier](declarations.html#Declarators "cpp/language/declarations") of noptr-declarator ﻿: 

  * If the type is a function type, the ambiguous token sequence is treated as a function body. 
  * Otherwise, the ambiguous token sequence is treated as an initializer. 


    
    
    using T = void(); // function type
    using U = int;    // non-function type
     
    T a{}; // defines a function doing nothing
    U b{}; // value-initializes an int object
     
    T c = delete("hello"); // defines a function as deleted
    U d = delete("hello"); // copy-initializes an int object with
                           // the result of a delete expression (ill-formed)

####  __func__

Within the function body, the function-local predefined variable __func__ is defined as if by 
    
    
    static const char __func__[] = "function-name";

This variable has block scope and static storage duration: 
    
    
    struct S
    {
        S(): s(__func__) {} // OK: initializer-list is part of function body
        const char* s;
    };
    void f(const char* s = __func__); // Error: parameter-list is part of declarator

Run this code
    
    
    #include <iostream>
     
    void Foo() { [std::cout](../io/cout.html) << __func__ << ' '; }
     
    struct Bar
    {
        Bar() { [std::cout](../io/cout.html) << __func__ << ' '; }
        ~Bar() { [std::cout](../io/cout.html) << __func__ << ' '; }
        struct Pub { Pub() { [std::cout](../io/cout.html) << __func__ << ' '; } };
    };
     
    int main()
    {
        Foo();
        Bar bar;
        Bar::Pub pub;
    }

Possible output: 
    
    
    Foo Bar Pub ~Bar

(since C++11)  
  
###  Function contract specifiers

Function declarations and [lambda expressions](lambda.html "cpp/language/lambda") can contain a sequence of _function contract specifiers ﻿_ , each specifier has the following syntax:  |   
---  
`**pre**` attr ﻿(optional) `**(**` predicate `**)**` |  (1)  |   
`**post**` attr ﻿(optional) `**(**` predicate `**)**` |  (2)  |   
`**post**` attr ﻿(optional) `**(**` identifier result-attr ﻿(optional) `**:**` predicate `**)**` |  (3)  |   
  
1) Introduces a _precondition assertion ﻿_.

2,3) Introduces a _postcondition assertion ﻿_.

2) The assertion does not bind to the result.

3) The assertion binds to the result.

attr |  \-  |  a list of attributes appertaining to the introduced contract assertion   
---|---|---  
predicate |  \-  |  any expression (except unparenthesized [comma expressions](operator_other.html#Built-in_comma_operator "cpp/language/operator other"))   
identifier |  \-  |  the identifier that refers to the result   
result-attr |  \-  |  a list of attributes appertaining to the result binding   
  
  
Precondition assertion and postcondition assertion are collectively called _function contract assertion ﻿_. 

A function contract assertion is a [contract assertion](contracts.html "cpp/language/contracts") associated with a function. The predicate of a function contract assertion is its predicate [contextually converted](implicit_cast.html#Contextual_conversions "cpp/language/implicit conversion") to bool. 

The following functions cannot be declared with function contract specifiers: 

  * [virtual functions](virtual.html "cpp/language/virtual")
  * [deleted functions](function.html#Deleted_functions)
  * function [defaulted](function.html#Defaulted_functions) on their first declarations 



####  Precondition assertions

A precondition assertion is associated with entering a function: 
    
    
    int divide(int dividend, int divisor) pre(divisor != 0)
    {
        return dividend / divisor;
    }
     
    double square_root(double num) pre(num >= 0)
    {
        return [std::sqrt](../numeric/math/sqrt.html)(num);
    }

####  Postcondition assertions

A postcondition assertion is associated with exiting a function normally. 

If a postcondition assertion has an identifier ﻿, the function contract specifier introduces identifier as the name of a _result binding_ of the associated function. A result binding denotes the object or reference returned by invocation of that function. The type of a result binding is the return type of its associated function. 
    
    
    int absolute_value(int num) post(r : r >= 0)
    {
        return std::abs(num);
    }
     
    double sine(double num) post(r : r >= -1.0 && r <= 1.0)
    {
        if ([std::isnan](../numeric/math/isnan.html)(num) || [std::isinf](../numeric/math/isinf.html)(num))
            // exiting via an exception never causes contract violation
            throw [std::invalid_argument](../error/invalid_argument.html)("Invalid argument");
        return [std::sin](../numeric/math/sin.html)(num);
    }

If a postcondition assertion has an identifier ﻿, and the return type of the associated function is (possibly cv-qualified) void, the program is ill-formed: 
    
    
    void f() post(r : r > 0); // Error: no value can be bound to “r”

When the declared return type of a non-templated function contains a [placeholder type](auto.html "cpp/language/auto"), a postcondition assertion with an identifier ﻿ can only appear in a function definition: 
    
    
    auto g(auto&) post(r : r >= 0); // OK, “g” is a template
     
    auto h() post(r : r >= 0);      // Error: cannot name the return value
     
    auto k() post(r : r >= 0)       // OK, “k” is a definition
    {
        return 0;
    }

####  Contract consistency

A [redeclaration](conflicting_declarations.html#Multiple_declarations_of_the_same_entity "cpp/language/conflicting declarations") `D` of a function or function template func must have either no contract-specs or the same contract-specs as any first declaration `F` reachable from `D`. If `D` and `F` are in different translation units, a diagnostic is required only if `D` is attached to a named module. 

If a declaration `F1` is a first declaration of func in one translation unit and a declaration `F2` is a first declaration of func in another translation unit, `F1` and `F2` must specify the same contract-specs ﻿, no diagnostic required. 

Two contract-specs ﻿s are the same if they consist of the same function contract specifiers in the same order. 

A function contract specifier `C1` on a function declaration `D1` is the same as a function contract specifier `C2` on a function declaration `D2` if all following conditions are satisfied: 

  * The predicate ﻿s of `C1` and `C2` would satisfy the [one-definition rule](definition.html#ODR "cpp/language/definition") if placed in function definitions on the declarations `D1` and `D2` (if `D1` and `D2` are in different translation units, corresponding entities defined within each predicate behave as if there is a single entity with a single definition), respectively, except for the following renamings: 
    * The renaming of the parameters of the declared function. 
    * The renaming of template parameters of a template enclosing the declared function. 
    * The renaming of the result binding (if any). 
  * Both `C1` and `C2` have an identifier or neither have. 



If this condition is not met solely due to the comparison of two lambda expressions that are contained within the predicate ﻿s, no diagnostic is required. 
    
    
    bool b1, b2;
     
    void f() pre (b1) pre([]{ return b2; }());
    void f(); // OK, function contract specifiers omitted
    void f() pre (b1) pre([]{ return b2; }()); // Error: closures have different types
    void f() pre (b1); // Error: function contract specifiers are different
     
    int g() post(r : b1);
    int g() post(b1); // Error: no result binding
     
    namespace N
    {
        void h() pre (b1);
        bool b1;
        void h() pre (b1); // Error: function contract specifiers differ
                           //        according to the one−definition rule
    }

(since C++26)  
  
### Notes

In case of ambiguity between a variable declaration using the direct-initialization syntax and a function declaration, the compiler always chooses function declaration; see [direct-initialization](direct_initialization.html#Notes "cpp/language/direct initialization"). 

Feature-test macro  | Value | Std | Feature   
---|---|---|---  
[`__cpp_decltype_auto`](../experimental/feature_test.html#cpp_decltype_auto "cpp/feature test") | [`201304L`](../compiler_support/14.html#cpp_decltype_auto_201304L "cpp/compiler support/14") | (C++14) | [`decltype(auto)`](auto.html "cpp/language/auto")  
[`__cpp_return_type_deduction`](../experimental/feature_test.html#cpp_return_type_deduction "cpp/feature test") | [`201304L`](../compiler_support/14.html#cpp_return_type_deduction_201304L "cpp/compiler support/14") | (C++14) | [return type deduction](function.html#Return_type_deduction) for normal functions   
[`__cpp_explicit_this_parameter`](../experimental/feature_test.html#cpp_explicit_this_parameter "cpp/feature test") | [`202110L`](../compiler_support/23.html#cpp_explicit_this_parameter_202110L "cpp/compiler support/23") | (C++23) | [explicit object parameters](function.html#Explicit_object_parameter) ([deducing this](member_functions.html#Explicit_object_member_functions "cpp/language/member functions"))   
[`__cpp_deleted_function`](../experimental/feature_test.html#cpp_deleted_function "cpp/feature test") | [`202403L`](../compiler_support/26.html#cpp_deleted_function_202403L "cpp/compiler support/26") | (C++26) | deleted function with a reason   
  
### Keywords

[`default`](../keyword/default.html "cpp/keyword/default"), [`delete`](../keyword/delete.html "cpp/keyword/delete"), [`pre`](../identifier_with_special_meaning/pre.html "cpp/identifier with special meaning/pre"), [`post`](../identifier_with_special_meaning/post.html "cpp/identifier with special meaning/post")

### Example

Run this code
    
    
    #include <iostream>
    #include <string>
     
    // simple function with a default argument, returning nothing
    void f0(const [std::string](../string/basic_string.html)& arg = "world!")
    {
        [std::cout](../io/cout.html) << "Hello, " << arg << '\n';
    }
     
    // the declaration is in namespace (file) scope
    // (the definition is provided later)
    int f1();
     
    // function returning a pointer to f0, pre-C++11 style
    void (*fp03())(const [std::string](../string/basic_string.html)&)
    {
        return f0;
    }
     
    // function returning a pointer to f0, with C++11 trailing return type
    auto fp11() -> void(*)(const [std::string](../string/basic_string.html)&)
    {
        return f0;
    }
     
    int main()
    {
        f0();
        fp03()("test!");
        fp11()("again!");
        int f2([std::string](../string/basic_string.html)) noexcept; // declaration in function scope
        [std::cout](../io/cout.html) << "f2(\"bad\"): " << f2("bad") << '\n';
        [std::cout](../io/cout.html) << "f2(\"42\"): " << f2("42") << '\n';
    }
     
    // simple non-member function returning int
    int f1()
    {
        return 007;
    }
     
    // function with an exception specification and a function try block
    int f2([std::string](../string/basic_string.html) str) noexcept
    try
    {
        return [std::stoi](../string/basic_string/stol.html)(str);
    }
    catch (const [std::exception](../error/exception.html)& e)
    {
        [std::cerr](../io/cerr.html) << "stoi() failed!\n";
        return 0;
    }
     
    // deleted function, an attempt to call it results in a compilation error
    void bar() = delete
    #   if __cpp_deleted_function
        ("reason")
    #   endif
    ;

Possible output: 
    
    
    stoi() failed!
    Hello, world!
    Hello, test!
    Hello, again!
    f2("bad"): 0
    f2("42"): 42

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[CWG 135](https://cplusplus.github.io/CWG/issues/135.html) | C++98  | member functions defined in class  
could not have a parameter of or return  
its own class because it is incomplete  | allowed   
[CWG 332](https://cplusplus.github.io/CWG/issues/332.html) | C++98  | a parameter could have cv-qualified void type  | prohibited   
[CWG 393](https://cplusplus.github.io/CWG/issues/393.html) | C++98  | types that include pointers/references to  
array of unknown bound could not be parameters  | such types are allowed   
[CWG 452](https://cplusplus.github.io/CWG/issues/452.html) | C++98  | member initializer list was not a part of function body  | it is   
[CWG 577](https://cplusplus.github.io/CWG/issues/577.html) | C++98  | dependent type void could be used to  
declare a function taking no parameters  | only non-dependent  
void is allowed   
[CWG 1327](https://cplusplus.github.io/CWG/issues/1327.html) | C++11  | defaulted or deleted functions could not  
be specified with override or final | allowed   
[CWG 1355](https://cplusplus.github.io/CWG/issues/1355.html) | C++11  | only special member functions could be user-provided  | extended to all functions   
[CWG 1394](https://cplusplus.github.io/CWG/issues/1394.html) | C++11  | deleted functions could not have any parameter of  
an incomplete type or return an incomplete type  | incomplete type allowed   
[CWG 1824](https://cplusplus.github.io/CWG/issues/1824.html) | C++98  | the completeness check on parameter type and  
return type of a function definition could be made  
outside the context of the function definition  | only check in the  
context of the  
function definition   
[CWG 1877](https://cplusplus.github.io/CWG/issues/1877.html) | C++14  | return type deduction treated return; as return void(); | simply deduce the return  
type as void in this case   
[CWG 2015](https://cplusplus.github.io/CWG/issues/2015.html) | C++11  | the implicit odr-use of a deleted  
virtual function was ill-formed  | such odr-uses are exempt  
from the use prohibition   
[CWG 2044](https://cplusplus.github.io/CWG/issues/2044.html) | C++14  | return type deduction on functions returning void  
would fail if the declared return type is decltype(auto) | updated the deduction  
rule to handle this case   
[CWG 2081](https://cplusplus.github.io/CWG/issues/2081.html) | C++14  | function redeclarations could use return type  
deduction even if the initial declaration does not  | not allowed   
[CWG 2144](https://cplusplus.github.io/CWG/issues/2144.html) | C++11  | {} could be a function body or an initializer at the same place  | differentiated by the type  
of the declarator identifier   
[CWG 2145](https://cplusplus.github.io/CWG/issues/2145.html) | C++98  | the declarator in function definition could not be parenthesized  | allowed   
[CWG 2259](https://cplusplus.github.io/CWG/issues/2259.html) | C++11  | the ambiguity resolution rule regarding parenthesized  
type names did not cover lambda expressions  | covered   
[CWG 2430](https://cplusplus.github.io/CWG/issues/2430.html) | C++98  | in the definition of a member function in a class definition,  
the type of that class could not be the return type or  
parameter type due to the resolution of [CWG issue 1824](https://cplusplus.github.io/CWG/issues/1824.html) | only check in the  
function body   
[CWG 2760](https://cplusplus.github.io/CWG/issues/2760.html) | C++98  | the function body of a constructor did not include the initializations  
not specified in the constructor's regular function body  | also includes these  
initializations   
[CWG 2831](https://cplusplus.github.io/CWG/issues/2831.html) | C++20  | a function definition with a requires-clause  
could define a non-templated function  | prohibited   
[CWG 2846](https://cplusplus.github.io/CWG/issues/2846.html) | C++23  | explicit object member functions could not have out-of-class definitions  | allowed   
[CWG 2915](https://cplusplus.github.io/CWG/issues/2915.html) | C++23  | unnamed explicit object parameters could have type void | prohibited   
  
### See also

[C documentation](../../c/language/function_declaration.html "c/language/function declaration") for Declaring functions  
---
  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
