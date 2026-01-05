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
  


[ Classes](classes.html "cpp/language/classes")

General  
---  
[Overview](classes.html "cpp/language/classes")  
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
**Member functions**  
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
  


A non-static member function is a function that is declared in a [member specification](class.html "cpp/language/class") of a class without a [`static`](static.html "cpp/language/static") or [`friend`](friend.html "cpp/language/friend") specifier (see [static member functions](static.html#Static_member_functions "cpp/language/static") and [friend declaration](friend.html "cpp/language/friend") for the effect of those keywords). 
    
    
    class S
    {
        int mf1(); // non-static member function declaration
        void mf2() volatile, mf3() &&; // can have cv-qualifiers and/or a reference-qualifier
            // the declaration above is equivalent to two separate declarations:
            // void mf2() volatile;
            // void mf3() &&;
     
        int mf4() const { return data; } // can be defined inline
        virtual void mf5() final; // can be virtual, can use final/override
        S() : data(12) {} // constructors are member functions too
        int data;
    };
     
    int S::mf1() { return 7; } // if not defined inline, has to be defined at namespace

[Constructors](initializer_list.html "cpp/language/constructor"), [destructors](destructor.html "cpp/language/destructor"), and [conversion functions](cast_operator.html "cpp/language/cast operator") use special syntaxes for their declarations. The rules described in this page may not apply to these functions. See their respective pages for details. 

An _explicit object member function_ is a non-static member function with an [explicit object parameter](function.html#Parameter_list "cpp/language/function").  | (since C++23)  
---|---  
  
An _implicit object member function_ is a non-static member function without an explicit object parameter (prior to C++23, this was the only kind of non-static member function, and hence referred to as "non-static member function" in the literature). 

## Contents

  * [1 Explanation](member_functions.html#Explanation)
    * [1.1 Member functions with cv-qualifiers](member_functions.html#Member_functions_with_cv-qualifiers)
    * [1.2 Member functions with ref-qualifier](member_functions.html#Member_functions_with_ref-qualifier)
    * [1.3 Virtual and pure virtual functions](member_functions.html#Virtual_and_pure_virtual_functions)
    * [1.4 Explicit object member functions](member_functions.html#Explicit_object_member_functions)
    * [1.5 Special member functions](member_functions.html#Special_member_functions)
  * [2 Notes](member_functions.html#Notes)
  * [3 Example](member_functions.html#Example)
  * [4 Defect reports](member_functions.html#Defect_reports)
  * [5 See also](member_functions.html#See_also)

  
---  
  
### Explanation

Any [function declarations](function.html "cpp/language/function") are allowed, with additional syntax elements that are only available for non-static member functions: [pure-specifiers](abstract_class.html "cpp/language/abstract class"), cv-qualifiers, ref-qualifiers, [`final`](final.html "cpp/language/final") and [`override`](override.html "cpp/language/override") specifiers(since C++11), and [member initialization lists](initializer_list.html "cpp/language/initializer list"). 

A non-static member function of class `X` may be called 

1) For an object of type `X` using the class member access operator

2) For an object of a class [derived](derived_class.html "cpp/language/derived class") from `X`

3) Directly from within the body of a member function of `X`

4) Directly from within the body of a member function of a class derived from `X`

Calling a non-static member function of class `X` on an object that is not of type `X`, or of a type derived from `X` invokes undefined behavior. 

Within the body of a non-static member function of `X`, any [id-expression](expressions.html "cpp/language/expressions") e (e.g. an identifier) that resolves to a non-type non-static member of `X` or of a base class of `X`, is transformed to a member access expression (*this).e (unless it's already a part of a member access expression). This does not occur in template definition context, so a name may have to be prefixed with this-> explicitly to become [dependent](dependent_name.html "cpp/language/dependent name"). 
    
    
    struct S
    {
        int n;
        void f();
    };
     
    void S::f()
    {
        n = 1; // transformed to (*this).n = 1;
    }
     
    int main()
    {
        S s1, s2;
        s1.f(); // changes s1.n
    }

Within the body of a non-static member function of `X`, any unqualified-id that resolves to a static member, an enumerator or a nested type of `X` or of a base class of `X`, is transformed to the corresponding qualified-id: 
    
    
    struct S
    {
        static int n;
        void f();
    };
     
    void S::f()
    {
        n = 1; // transformed to S::n = 1;
    }
     
    int main()
    {
        S s1, s2;
        s1.f(); // changes S::n
    }

#### Member functions with cv-qualifiers

An implicit object member function can be declared with a [cv-qualifier](cv.html "cpp/language/cv") sequence (const, volatile, or a combination of const and volatile), this sequence appears after the parameter list in the [function declaration](function.html "cpp/language/function"). Functions with different cv-qualifier sequences (or no sequence) have different types and so may overload each other. 

In the body of a function with a cv-qualifier sequence, *this is cv-qualified, e.g. in a member function with const qualifier, only other member functions with const qualifier may be called normally. A member function without const qualifier may still be called if [`const_cast`](const_cast.html "cpp/language/const cast") is applied or through an access path that does not involve [`this`](this.html "cpp/language/this"). 
    
    
    #include <vector>
     
    struct Array
    {
        [std::vector](../container/vector.html)<int> data;
        Array(int sz) : data(sz) {}
     
        // const member function
        int operator[](int idx) const
        {                     // the this pointer has type const Array*
            return data[idx]; // transformed to (*this).data[idx];
        }
     
        // non-const member function
        int& operator[](int idx)
        {                     // the this pointer has type Array*
            return data[idx]; // transformed to (*this).data[idx]
        }
    };
     
    int main()
    {
        Array a(10);
        a[1] = 1;  // OK: the type of a[1] is int&
        const Array ca(10);
        ca[1] = 2; // Error: the type of ca[1] is int
    }

####  Member functions with ref-qualifier

An implicit object member function can be declared with no ref-qualifier, with an lvalue ref-qualifier (the token `&` after the parameter list) or the rvalue ref-qualifier (the token `&&` after the parameter list). During [overload resolution](overload_resolution.html "cpp/language/overload resolution"), an implicit object member function with a cv-qualifier sequence of class X is treated as follows: 

  * no ref-qualifier: the implicit object parameter has type lvalue reference to cv-qualified X and is additionally allowed to bind rvalue implied object argument 
  * lvalue ref-qualifier: the implicit object parameter has type lvalue reference to cv-qualified X 
  * rvalue ref-qualifier: the implicit object parameter has type rvalue reference to cv-qualified X 


    
    
    #include <iostream>
     
    struct S
    {
        void f() &  { [std::cout](../io/cout.html) << "lvalue\n"; }
        void f() && { [std::cout](../io/cout.html) << "rvalue\n"; }
    };
     
    int main()
    {
        S s;
        s.f();            // prints "lvalue"
        std::move(s).f(); // prints "rvalue"
        S().f();          // prints "rvalue"
    }

Note: unlike cv-qualification, ref-qualification does not change the properties of the [`this`](this.html "cpp/language/this") pointer: within an rvalue ref-qualified function, *this remains an lvalue expression.  | (since C++11)  
---|---  
  
#### Virtual and pure virtual functions

A non-static member function may be declared _virtual_ or _pure virtual_. See [virtual functions](virtual.html "cpp/language/virtual") and [abstract classes](abstract_class.html "cpp/language/abstract class") for details. 

####  Explicit object member functions

For a non-static non-virtual member function not declared with cv-qualifier or ref-qualifier, its first parameter, if not being a [function parameter pack](parameter_pack.html "cpp/language/parameter pack"), can be an [explicit object parameter](function.html#Explicit_object_parameter "cpp/language/function") (denoted with the prefixed keyword this): 
    
    
    struct X
    {
        void foo(this X const& self, int i); // same as void foo(int i) const &;
    //  void foo(int i) const &; // Error: already declared
     
        void bar(this X self, int i); // pass object by value: makes a copy of “*this”
    };

For member function templates, explicit object parameter allows deduction of type and value category, this language feature is called “deducing this”: 
    
    
    struct X
    {
        template<typename Self>
        void foo(this Self&&, int);
    };
     
    struct D : X {};
     
    void ex(X& x, D& d)
    {
        x.foo(1);       // Self = X&
        move(x).foo(2); // Self = X
        d.foo(3);       // Self = D&
    }

This makes it possible to deduplicate const- and non-const member functions, see [array subscript operator](operators.html#Array_subscript_operator "cpp/language/operators") for an example. Inside the body of an explicit object member function, the this pointer cannot be used: all member access must be done through the first parameter, like in static member functions: 
    
    
    struct C
    {
        void bar();
     
        void foo(this C c)
        {
            auto x = this; // error: no this
            bar();         // error: no implicit this->
            c.bar();       // ok
        }
    };

A pointer to an explicit object member function is an ordinary pointer to function, not a pointer to member: 
    
    
    struct Y 
    {
        int f(int, int) const&;
        int g(this Y const&, int, int);
    };
     
    auto pf = &Y::f;
    pf(y, 1, 2);              // error: pointers to member functions are not callable
    (y.*pf)(1, 2);            // ok
    [std::invoke](../utility/functional/invoke.html)(pf, y, 1, 2); // ok
     
    auto pg = &Y::g;
    pg(y, 3, 4);              // ok
    (y.*pg)(3, 4);            // error: “pg” is not a pointer to member function
    [std::invoke](../utility/functional/invoke.html)(pg, y, 3, 4); // ok

| (since C++23)  
---|---  
  
#### Special member functions

Some member functions are _special_ : under certain circumstances they are defined by the compiler even if not defined by the user. They are: 

  * [Default constructor](default_constructor.html "cpp/language/default constructor")
  * [Copy constructor](copy_constructor.html "cpp/language/copy constructor")



  * [Move constructor](move_constructor.html "cpp/language/move constructor")

| (since C++11)  
---|---  
  
  * [Copy assignment operator](as_operator.html "cpp/language/as operator")



  * [Move assignment operator](move_operator.html "cpp/language/move operator")

| (since C++11)  
---|---  
  
  * [Destructor](destructor.html "cpp/language/destructor")(until C++20)[Prospective destructor](destructor.html#Prospective_destructor "cpp/language/destructor")(since C++20)



Special member functions along with the [comparison operators](default_comparisons.html "cpp/language/default comparisons")(since C++20) are the only functions that can be _defaulted_ , that is, defined using = default instead of the function body (see their pages for details). 

### Notes

Feature-test macro  | Value | Std | Feature   
---|---|---|---  
[`__cpp_ref_qualifiers`](../experimental/feature_test.html#cpp_ref_qualifiers "cpp/feature test") | [`200710L`](../compiler_support/11.html#cpp_ref_qualifiers_200710L "cpp/compiler support/11") | (C++11) | [ref-qualifiers](function.html#Function_declaration "cpp/language/function")  
[`__cpp_explicit_this_parameter`](../experimental/feature_test.html#cpp_explicit_this_parameter "cpp/feature test") | [`202110L`](../compiler_support/23.html#cpp_explicit_this_parameter_202110L "cpp/compiler support/23") | (C++23) | [explicit object parameter](function.html#explicit_object_parameter "cpp/language/function") ([deducing `this`](member_functions.html#Explicit_object_member_functions))   
  
### Example

Run this code
    
    
    #include <exception>
    #include <iostream>
    #include <string>
    #include <utility>
     
    struct S
    {
        int data;
     
        // simple converting constructor (declaration)
        S(int val);
     
        // simple explicit constructor (declaration)
        explicit S([std::string](../string/basic_string.html) str);
     
        // const member function (definition)
        virtual int getData() const { return data; }
    };
     
    // definition of the constructor
    S::S(int val) : data(val)
    {
        [std::cout](../io/cout.html) << "ctor1 called, data = " << data << '\n';
    }
     
    // this constructor has a catch clause
    S::S([std::string](../string/basic_string.html) str) try : data([std::stoi](../string/basic_string/stol.html)(str))
    {
        [std::cout](../io/cout.html) << "ctor2 called, data = " << data << '\n';
    }
    catch(const [std::exception](../error/exception.html)&)
    {
        [std::cout](../io/cout.html) << "ctor2 failed, string was '" << str << "'\n";
        throw; // ctor's catch clause should always rethrow
    }
     
    struct D : S
    {
        int data2;
        // constructor with a default argument
        D(int v1, int v2 = 11) : S(v1), data2(v2) {}
     
        // virtual member function
        int getData() const override { return data * data2; }
     
        // lvalue-only assignment operator
        D& operator=(D other) &
        {
            [std::swap](../algorithm/swap.html)(other.data, data);
            [std::swap](../algorithm/swap.html)(other.data2, data2);
            return *this;
        }
    };
     
    int main()
    {
        D d1 = 1;
        S s2("2");
     
        try
        {
            S s3("not a number");
        }
        catch(const [std::exception](../error/exception.html)&) {}
     
        [std::cout](../io/cout.html) << s2.getData() << '\n';
     
        D d2(3, 4);
        d2 = d1;   // OK: assignment to lvalue
    //  D(5) = d1; // ERROR: no suitable overload of operator=
    }

Output: 
    
    
    ctor1 called, data = 1
    ctor2 called, data = 2
    ctor2 failed, string was 'not a number'
    2
    ctor1 called, data = 3

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[CWG 194](https://cplusplus.github.io/CWG/issues/194.html) | C++98  | ambiguous whether a non-static member function  
could have the same name as the enclosing class name  | explicit naming restriction added   
  
### See also

  * [classes](classes.html "cpp/language/classes")
  * [non-static data members](data_members.html "cpp/language/data members")
  * [static data members](static.html "cpp/language/static")


  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
