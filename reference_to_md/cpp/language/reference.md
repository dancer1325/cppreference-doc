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
**Reference**  
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
  
  
  


Declares a named variable as a reference, that is, an alias to an already-existing object or function. 

## Contents

  * [1 Syntax](reference.html#Syntax)
  * [2 Reference collapsing](reference.html#Reference_collapsing)
  * [3 Lvalue references](reference.html#Lvalue_references)
  * [4 Rvalue references](reference.html#Rvalue_references)
  * [5 Forwarding references](reference.html#Forwarding_references)
  * [6 Dangling references](reference.html#Dangling_references)
  * [7 Type-inaccessible references](reference.html#Type-inaccessible_references)
  * [8 Call-incompatible references](reference.html#Call-incompatible_references)
  * [9 Notes](reference.html#Notes)
  * [10 Defect reports](reference.html#Defect_reports)
  * [11 External links](reference.html#External_links)

  
---  
  
### Syntax

A reference variable declaration is any simple declaration whose [declarator](declarations.html "cpp/language/declarations") has the form   
  
---  
`**&**` attr ﻿(optional) declarator |  (1)  |   
`**& &**` attr ﻿(optional) declarator |  (2)  |  (since C++11)  
  
1) **Lvalue reference declarator** : the declaration S& D; declares `D` as an _lvalue reference_ to the type determined by decl-specifier-seq `S`.

2) **Rvalue reference declarator** : the declaration S&& D; declares `D` as an _rvalue reference_ to the type determined by decl-specifier-seq `S`.

declarator |  \-  |  any [declarator](declarations.html "cpp/language/declarations") except for reference declarator, [array declarator](array.html "cpp/language/array"), and [pointer declarator](pointer.html "cpp/language/pointer") (there are no references to references, arrays of references, or pointers to references)   
---|---|---  
attr |  \-  |  (since C++11) list of [attributes](attributes.html "cpp/language/attributes")  
  
A reference is required to be initialized to refer to a valid object or function: see [reference initialization](reference_initialization.html "cpp/language/reference initialization"). 

The type “reference to (possibly cv-qualified) void” cannot be formed. 

Reference types cannot be [cv-qualified](cv.html "cpp/language/cv") at the top level; there is no syntax for that in declaration, and if a qualification is added to a typedef-name or [`decltype`](decltype.html "cpp/language/decltype") specifier,(since C++11) or [type template parameter](template_parameters.html#Type_template_parameter "cpp/language/template parameters"), it is ignored. 

References are not objects; they do not necessarily occupy storage, although the compiler may allocate storage if it is necessary to implement the desired semantics (e.g. a non-static data member of reference type usually increases the size of the class by the amount necessary to store a memory address). 

Because references are not objects, there are no arrays of references, no pointers to references, and no references to references: 
    
    
    int& a[3]; // error
    int&* p;   // error
    int& &r;   // error

###  Reference collapsing

It is permitted to form references to references through type manipulations in templates or typedefs, in which case the _reference collapsing_ rules apply: rvalue reference to rvalue reference collapses to rvalue reference, all other combinations form lvalue reference: 
    
    
    typedef int&  lref;
    typedef int&& rref;
    int n;
     
    lref&  r1 = n; // type of r1 is int&
    lref&& r2 = n; // type of r2 is int&
    rref&  r3 = n; // type of r3 is int&
    rref&& r4 = 1; // type of r4 is int&&

(This, along with special rules for [template argument deduction](template_argument_deduction.html "cpp/language/template argument deduction") when `T&&` is used in a function template, forms the rules that make [std::forward](../utility/forward.html "cpp/utility/forward") possible.)  | (since C++11)  
---|---  
  
### Lvalue references

Lvalue references can be used to alias an existing object (optionally with different cv-qualification): 

Run this code
    
    
    #include <iostream>
    #include <string>
     
    int main()
    {
        [std::string](../string/basic_string.html) s = "Ex";
        [std::string](../string/basic_string.html)& r1 = s;
        const [std::string](../string/basic_string.html)& r2 = s;
     
        r1 += "ample";           // modifies s
    //  r2 += "!";               // error: cannot modify through reference to const
        [std::cout](../io/cout.html) << r2 << '\n'; // prints s, which now holds "Example"
    }

They can also be used to implement pass-by-reference semantics in function calls: 

Run this code
    
    
    #include <iostream>
    #include <string>
     
    void double_string([std::string](../string/basic_string.html)& s)
    {
        s += s; // 's' is the same object as main()'s 'str'
    }
     
    int main()
    {
        [std::string](../string/basic_string.html) str = "Test";
        double_string(str);
        [std::cout](../io/cout.html) << str << '\n';
    }

When a function's return type is lvalue reference, the function call expression becomes an [lvalue](value_category.html#lvalue "cpp/language/value category") expression: 

Run this code
    
    
    #include <iostream>
    #include <string>
     
    char& char_number([std::string](../string/basic_string.html)& s, [std::size_t](../types/size_t.html) n)
    {
        return s.at(n); // string::at() returns a reference to char
    }
     
    int main()
    {
        [std::string](../string/basic_string.html) str = "Test";
        char_number(str, 1) = 'a'; // the function call is lvalue, can be assigned to
        [std::cout](../io/cout.html) << str << '\n';
    }

###  Rvalue references

Rvalue references can be used to [extend the lifetimes](reference_initialization.html#Lifetime_of_a_temporary "cpp/language/reference initialization") of temporary objects (note, lvalue references to const can extend the lifetimes of temporary objects too, but they are not modifiable through them):  Run this code
    
    
    #include <iostream>
    #include <string>
     
    int main()
    {
        [std::string](../string/basic_string.html) s1 = "Test";
    //  std::string&& r1 = s1;           // error: can't bind to lvalue
     
        const [std::string](../string/basic_string.html)& r2 = s1 + s1; // okay: lvalue reference to const extends lifetime
    //  r2 += "Test";                    // error: can't modify through reference to const
     
        [std::string](../string/basic_string.html)&& r3 = s1 + s1;      // okay: rvalue reference extends lifetime
        r3 += "Test";                    // okay: can modify through reference to non-const
        [std::cout](../io/cout.html) << r3 << '\n';
    }

More importantly, when a function has both rvalue reference and lvalue reference [overloads](overload_resolution.html "cpp/language/overload resolution"), the rvalue reference overload binds to rvalues (including both prvalues and xvalues), while the lvalue reference overload binds to lvalues:  Run this code
    
    
    #include <iostream>
    #include <utility>
     
    void f(int& x)
    {
        [std::cout](../io/cout.html) << "lvalue reference overload f(" << x << ")\n";
    }
     
    void f(const int& x)
    {
        [std::cout](../io/cout.html) << "lvalue reference to const overload f(" << x << ")\n";
    }
     
    void f(int&& x)
    {
        [std::cout](../io/cout.html) << "rvalue reference overload f(" << x << ")\n";
    }
     
    int main()
    {
        int i = 1;
        const int ci = 2;
     
        f(i);  // calls f(int&)
        f(ci); // calls f(const int&)
        f(3);  // calls f(int&&)
               // would call f(const int&) if f(int&&) overload wasn't provided
        f(std::move(i)); // calls f(int&&)
     
        // rvalue reference variables are lvalues when used in expressions
        int&& x = 1;
        f(x);            // calls f(int& x)
        f(std::move(x)); // calls f(int&& x)
    }

This allows [move constructors](move_constructor.html "cpp/language/move constructor"), [move assignment](move_operator.html "cpp/language/move assignment") operators, and other move-aware functions (e.g. [std::vector::push_back()](../container/vector/push_back.html "cpp/container/vector/push back")) to be automatically selected when suitable. Because rvalue references can bind to xvalues, they can refer to non-temporary objects: 
    
    
    int i2 = 42;
    int&& rri = std::move(i2); // binds directly to i2

This makes it possible to move out of an object in scope that is no longer needed: 
    
    
    [std::vector](../container/vector.html)<int> v{1, 2, 3, 4, 5};
    [std::vector](../container/vector.html)<int> v2(std::move(v)); // binds an rvalue reference to v
    [assert](../error/assert.html)(v.empty());

###  Forwarding references

Forwarding references are a special kind of references that preserve the value category of a function argument, making it possible to _forward_ it by means of [std::forward](../utility/forward.html "cpp/utility/forward"). Forwarding references are either:  1) function parameter of a function template declared as rvalue reference to cv-unqualified [type template parameter](template_parameters.html#Type_template_parameter "cpp/language/template parameters") of that same function template:
    
    
    template<class T>
    int f(T&& x)                      // x is a forwarding reference
    {
        return g([std::forward](../utility/forward.html)<T>(x)); // and so can be forwarded
    }
     
    int main()
    {
        int i;
        f(i); // argument is lvalue, calls f<int&>(int&), std::forward<int&>(x) is lvalue
        f(0); // argument is rvalue, calls f<int>(int&&), std::forward<int>(x) is rvalue
    }
     
    template<class T>
    int g(const T&& x); // x is not a forwarding reference: const T is not cv-unqualified
     
    template<class T>
    struct A
    {
        template<class U>
        A(T&& x, U&& y, int* p); // x is not a forwarding reference: T is not a
                                 // type template parameter of the constructor,
                                 // but y is a forwarding reference
    };

2) auto&& except when deduced from a brace-enclosed initializer list or, when representing a template parameter of a class template during [class template argument deduction](ctad.html "cpp/language/class template argument deduction")(since C++17):
    
    
    auto&& vec = foo();       // foo() may be lvalue or rvalue, vec is a forwarding reference
    auto i = [std::begin](../iterator/begin.html)(vec); // works either way
    (*i)++;                   // works either way
     
    g([std::forward](../utility/forward.html)<decltype(vec)>(vec)); // forwards, preserving value category
     
    for (auto&& x: f())
    {
        // x is a forwarding reference; this is a common way to use range for in generic code
    }
     
    auto&& z = {1, 2, 3}; // *not* a forwarding reference (special case for initializer lists)

See also [template argument deduction](template_argument_deduction.html#Deduction_from_a_function_call "cpp/language/template argument deduction") and [std::forward](../utility/forward.html "cpp/utility/forward").  | (since C++11)  
---|---  
  
### Dangling references

Although references always refer to valid objects or functions upon initialization, it is possible to create a program where the [lifetime](lifetime.html "cpp/language/lifetime") of the referred-to object ends, but the reference remains accessible (_dangling_). 

Given an expression expr of reference type and let target be the object or function denoted by the reference: 

  * If a pointer to target would be [valid](pointer.html#Invalid_pointers "cpp/language/pointer") in the context of the evalution of expr, the result designates target. 
  * Otherwise, the behavior is undefined. 


    
    
    [std::string](../string/basic_string.html)& f()
    {
        [std::string](../string/basic_string.html) s = "Example";
        return s; // exits the scope of s:
                  // its destructor is called and its storage deallocated
    }
     
    [std::string](../string/basic_string.html)& r = f(); // dangling reference
    [std::cout](../io/cout.html) << r;       // undefined behavior: reads from a dangling reference
    [std::string](../string/basic_string.html) s = f();  // undefined behavior: copy-initializes from a dangling reference

Note that rvalue references and lvalue references to const extend the lifetimes of temporary objects (see [Reference initialization](reference_initialization.html#Lifetime_of_a_temporary "cpp/language/reference initialization") for rules and exceptions). 

If the referred-to object was destroyed (e.g., by explicit destructor call), but the storage was not deallocated, a reference to the out-of-lifetime object may be used in limited ways, and may become valid if the object is recreated in the same storage (see [Access outside of lifetime](lifetime.html#Access_outside_of_lifetime "cpp/language/lifetime") for details). 

### Type-inaccessible references

Attempting to bind a reference to an object where the converted initializer is an lvalue(until C++11)a glvalue(since C++11) through which the object is not [type-accessible](reinterpret_cast.html#Type_accessibility "cpp/language/reinterpret cast") results in undefined behavior: 
    
    
    char x alignas(int);
     
    int& ir = *reinterpret_cast<int*>(&x); // undefined behavior:
                                           // initializer refers to char object

### Call-incompatible references

Attempting to bind a reference to a function where the converted initializer is an lvalue(until C++11)a glvalue(since C++11) whose type is not [call-compatible](reinterpret_cast.html#Call_compatibility "cpp/language/reinterpret cast") with the type of the function's definition results in undefined behavior: 
    
    
    void f(int);
     
    using F = void(float);
    F& ir = *reinterpret_cast<F*>(&f); // undefined behavior:
                                       // initializer refers to void(int) function

### Notes

Feature-test macro | Value | Std | Feature   
---|---|---|---  
[`__cpp_rvalue_references`](../experimental/feature_test.html#cpp_rvalue_references "cpp/feature test") | [`200610L`](../compiler_support/11.html#cpp_rvalue_references_200610L "cpp/compiler support/11") | (C++11) | [Rvalue references](reference.html#Rvalue_references)  
  
### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[CWG 453](https://cplusplus.github.io/CWG/issues/453.html) | C++98  | it was unclear which object or function a reference cannot be bound to  | made clear   
[CWG 1510](https://cplusplus.github.io/CWG/issues/1510.html) | C++11  | cv-qualified references could not be formed in the operand of decltype | allowed   
[CWG 2550](https://cplusplus.github.io/CWG/issues/2550.html) | C++98  | parameters could have type “reference to void”  | disallowed   
[CWG 2933](https://cplusplus.github.io/CWG/issues/2933.html) | C++98  | the behavior of accessing dangling references was unclear  | made clear   
  
### External links

Thomas Becker, 2013 - [C++ Rvalue References Explained](http://thbecker.net/articles/rvalue_references/section_01.html)  
---
  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
