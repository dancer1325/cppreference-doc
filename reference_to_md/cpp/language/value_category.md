

  
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
  
  
  

  
  
  
[Expressions](expressions.html "cpp/language/expressions")  
---  
| **Value categories**  
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
  

---  
  


[ Expressions](expressions.html "cpp/language/expressions")

General  
---  
| **Value categories**  
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
  


Each C++ [expression](expressions.html "cpp/language/expressions") (an operator with its operands, a literal, a variable name, etc.) is characterized by two independent properties: a _[type](type-id.html "cpp/language/type")_ and a _value category_. Each expression has some non-reference type, and each expression belongs to exactly one of the three primary value categories: [_prvalue_](value_category.html#prvalue), [_xvalue_](value_category.html#xvalue), and [_lvalue_](value_category.html#lvalue). 

  * a [glvalue](value_category.html#glvalue) (“generalized” lvalue) is an expression whose evaluation determines the identity of an object or function; 
  * a [prvalue](value_category.html#prvalue) (“pure” rvalue) is an expression whose evaluation 



    

  * computes the value of an operand of a built-in operator (such prvalue has no _result object_), or 
  * initializes an object (such prvalue is said to have a _result object_). 



     The result object may be a variable, an object created by [new-expression](new.html "cpp/language/new"), a temporary created by [temporary materialization](implicit_cast.html#Temporary_materialization "cpp/language/implicit conversion"), or a member thereof. Note that non-void [discarded](expressions.html#Discarded-value_expressions "cpp/language/expressions") expressions have a result object (the materialized temporary). Also, every class and array prvalue has a result object except when it is the operand of [`decltype`](decltype.html "cpp/language/decltype"); 

  * an [xvalue](value_category.html#xvalue) (an “eXpiring” value) is a glvalue that denotes an object whose resources can be reused; 
  * an [lvalue](value_category.html#lvalue) is a glvalue that is not an xvalue; 



Extended content  
---  
So-called, historically, because lvalues could appear on the left-hand side of an assignment expression. In general, it's not always the case: 
    
    
    void foo();
     
    void baz()
    {
        int a; // Expression `a` is lvalue
        a = 4; // OK, could appear on the left-hand side of an assignment expression
     
        int &b{a}; // Expression `b` is lvalue
        b = 5; // OK, could appear on the left-hand side of an assignment expression
     
        const int &c{a}; // Expression `c` is lvalue
        c = 6;           // ill-formed, assignment of read-only reference
     
        // Expression `foo` is lvalue
        // address may be taken by built-in address-of operator
        void (*p)() = &foo;
     
        foo = baz; // ill-formed, assignment of function
    }  
  
  * an [rvalue](value_category.html#rvalue) is a prvalue or an xvalue; 



Extended content  
---  
So-called, historically, because rvalues could appear on the right-hand side of an assignment expression. In general, it's not always the case:  Run this code
    
    
    #include <iostream>
     
    struct S
    {
        S() : m{42} {}
        S(int a) : m{a} {}
        int m;
    };
     
    int main()
    {
        S s;
     
        // Expression `S{}` is prvalue
        // May appear on the right-hand side of an assignment expression
        s = S{};
     
        [std::cout](../io/cout.html) << s.m << '\n';
     
        // Expression `S{}` is prvalue
        // Can be used on the left-hand side too
        [std::cout](../io/cout.html) << (S{} = S{7}).m << '\n';
    }

Output: 
    
    
    42
    7  
  
Note: this taxonomy went through significant changes with past C++ standard revisions, see [History](value_category.html#History) below for details. 

Extended content  
---  
Despite their names, these terms classify expressions, not values.  Run this code
    
    
    #include <type_traits>
    #include <utility>
     
    template <class T> struct is_prvalue : [std::true_type](../types/integral_constant.html) {};
    template <class T> struct is_prvalue<T&> : [std::false_type](../types/integral_constant.html) {};
    template <class T> struct is_prvalue<T&&> : [std::false_type](../types/integral_constant.html) {};
     
    template <class T> struct is_lvalue : [std::false_type](../types/integral_constant.html) {};
    template <class T> struct is_lvalue<T&> : [std::true_type](../types/integral_constant.html) {};
    template <class T> struct is_lvalue<T&&> : [std::false_type](../types/integral_constant.html) {};
     
    template <class T> struct is_xvalue : [std::false_type](../types/integral_constant.html) {};
    template <class T> struct is_xvalue<T&> : [std::false_type](../types/integral_constant.html) {};
    template <class T> struct is_xvalue<T&&> : [std::true_type](../types/integral_constant.html) {};
     
    int main()
    {
        int a{42};
        int& b{a};
        int&& r{std::move(a)};
     
        // Expression `42` is prvalue
        static_assert(is_prvalue<decltype((42))>::value);
     
        // Expression `a` is lvalue
        static_assert(is_lvalue<decltype((a))>::value);
     
        // Expression `b` is lvalue
        static_assert(is_lvalue<decltype((b))>::value);
     
        // Expression `std::move(a)` is xvalue
        static_assert(is_xvalue<decltype((std::move(a)))>::value);
     
        // Type of variable `r` is rvalue reference
        static_assert([std::is_rvalue_reference](../types/is_rvalue_reference.html)<decltype(r)>::value);
     
        // Type of variable `b` is lvalue reference
        static_assert([std::is_lvalue_reference](../types/is_lvalue_reference.html)<decltype(b)>::value);
     
        // Expression `r` is lvalue
        static_assert(is_lvalue<decltype((r))>::value);
    }  
  
## Contents

  * [1 Primary categories](value_category.html#Primary_categories)
    * [1.1 lvalue](value_category.html#lvalue)
    * [1.2 prvalue](value_category.html#prvalue)
    * [1.3 xvalue](value_category.html#xvalue)
  * [2 Mixed categories](value_category.html#Mixed_categories)
    * [2.1 glvalue](value_category.html#glvalue)
    * [2.2 rvalue](value_category.html#rvalue)
  * [3 Special categories](value_category.html#Special_categories)
    * [3.1 Pending member function call](value_category.html#Pending_member_function_call)
    * [3.2 Void expressions](value_category.html#Void_expressions)
    * [3.3 Bit-fields](value_category.html#Bit-fields)
    * [3.4 Move-eligible expressions](value_category.html#Move-eligible_expressions)
  * [4 History](value_category.html#History)
    * [4.1 CPL](value_category.html#CPL)
    * [4.2 C](value_category.html#C)
    * [4.3 C++98](value_category.html#C.2B.2B98)
    * [4.4 C++11](value_category.html#C.2B.2B11)
    * [4.5 C++17](value_category.html#C.2B.2B17)
  * [5 Footnotes](value_category.html#Footnotes)
  * [6 References](value_category.html#References)
  * [7 Defect reports](value_category.html#Defect_reports)
  * [8 See also](value_category.html#See_also)
  * [9 External links](value_category.html#External_links)

  
---  
  
### Primary categories

#### lvalue

The following expressions are _lvalue expressions_ : 

  * the name of a variable, a function, a [template parameter object](template_parameters.html#Constant_template_parameter "cpp/language/template parameters")(since C++20), or a data member, regardless of type, such as [std::cin](../io/cin.html) or [std::hex](../io/manip/hex.html). Even if the variable's type is rvalue reference, the expression consisting of its name is an lvalue expression (but see [Move-eligible expressions](value_category.html#Move-eligible_expressions)); 



Extended content  
---  
      
    
    void foo() {}
     
    void baz()
    {
        // `foo` is lvalue
        // address may be taken by built-in address-of operator
        void (*p)() = &foo;
    }
    
    
    struct foo {};
     
    template <foo a>
    void baz()
    {
        const foo* obj = &a;  // `a` is an lvalue, template parameter object
    }  
  
  * a function call or an overloaded operator expression, whose return type is lvalue reference, such as [std::getline](../string/basic_string/getline.html)([std::cin](../io/cin.html), str), [std::cout](../io/cout.html) << 1, str1 = str2, or ++it; 



Extended content  
---  
      
    
    int& a_ref()
    {
        static int a{3};
        return a;
    }
     
    void foo()
    {
        a_ref() = 5;  // `a_ref()` is lvalue, function call whose return type is lvalue reference
    }  
  
  * a = b, a += b, a %= b, and all other built-in [assignment and compound assignment](operator_assignment.html "cpp/language/operator assignment") expressions; 
  * ++a and \--a, the built-in [pre-increment and pre-decrement](operator_incdec.html#Built-in_prefix_operators "cpp/language/operator incdec") expressions; 
  * *p, the built-in [indirection](operator_member_access.html#Built-in_indirection_operator "cpp/language/operator member access") expression; 
  * a[n] and p[n], the built-in [subscript](operator_member_access.html#Built-in_subscript_operator "cpp/language/operator member access") expressions, where one operand in a[n] is an array lvalue(since C++11); 
  * a.m, the [member of object](operator_member_access.html#Built-in_member_access_operators "cpp/language/operator member access") expression, except where `m` is a member enumerator or a non-static member function, or where a is an rvalue and `m` is a non-static data member of object type; 



Extended content  
---  
      
    
    struct foo
    {
        enum bar
        {
            m // member enumerator
        };
    };
     
    void baz()
    {
        foo a;
        a.m = 42; // ill-formed, lvalue required as left operand of assignment
    }
    
    
    struct foo
    {
        void m() {} // non-static member function
    };
     
    void baz()
    {
        foo a;
     
        // `a.m` is a prvalue, hence the address cannot be taken by built-in
        // address-of operator
        void (foo::*p1)() = &a.m; // ill-formed
     
        void (foo::*p2)() = &foo::m; // OK: pointer to member function
    }
    
    
    struct foo
    {
        static void m() {} // static member function
    };
     
    void baz()
    {
        foo a;
        void (*p1)() = &a.m;     // `a.m` is an lvalue
        void (*p2)() = &foo::m;  // the same
    }  
  
  * p->m, the built-in [member of pointer](operator_member_access.html#Built-in_member_access_operators "cpp/language/operator member access") expression, except where `m` is a member enumerator or a non-static member function; 
  * a.*mp, the [pointer to member of object](operator_member_access.html#Built-in_pointer-to-member_access_operators "cpp/language/operator member access") expression, where a is an lvalue and `mp` is a pointer to data member; 
  * p->*mp, the built-in [pointer to member of pointer](operator_member_access.html#Built-in_pointer-to-member_access_operators "cpp/language/operator member access") expression, where `mp` is a pointer to data member; 
  * a, b, the built-in [comma](operator_other.html#Built-in_comma_operator "cpp/language/operator other") expression, where b is an lvalue; 
  * a ? b : c, the [ternary conditional](operator_other.html#Conditional_operator "cpp/language/operator other") expression for certain b and c (e.g., when both are lvalues of the same type, but see [definition](operator_other.html#Conditional_operator "cpp/language/operator other") for detail); 
  * a [string literal](string_literal.html "cpp/language/string literal"), such as "Hello, world!"; 
  * a cast expression to lvalue reference type, such as static_cast<int&>(x) or static_cast<void(&)(int)>(x); 
  * a constant [template parameter](template_parameters.html "cpp/language/template parameters") of an lvalue reference type; 


    
    
    template <int& v>
    void set()
    {
        v = 5; // template parameter is lvalue
    }
     
    int a{3}; // static variable, fixed address is known at compile-time
     
    void foo()
    {
        set<a>();
    }

  * a function call or an overloaded operator expression, whose return type is rvalue reference to function; 
  * a cast expression to rvalue reference to function type, such as static_cast<void(&&)(int)>(x). 

| (since C++11)  
---|---  
  
Properties: 

  * Same as [glvalue](value_category.html#glvalue) (below). 
  * Address of an lvalue may be taken by built-in address-of operator: &++i[[1]](value_category.html#cite_note-1) and &[std::hex](../io/manip/hex.html) are valid expressions. 
  * A modifiable lvalue may be used as the left-hand operand of the built-in assignment and compound assignment operators. 
  * An lvalue may be used to [initialize an lvalue reference](reference_initialization.html "cpp/language/reference initialization"); this associates a new name with the object identified by the expression. 



#### prvalue

The following expressions are _prvalue expressions_ : 

  * a [literal](expressions.html#Literals "cpp/language/expressions") (except for [string literal](string_literal.html "cpp/language/string literal")), such as 42, true or nullptr; 
  * a function call or an overloaded operator expression, whose return type is non-reference, such as str.substr(1, 2), str1 + str2, or it++; 
  * a++ and a\--, the built-in [post-increment and post-decrement](operator_incdec.html#Built-in_postfix_operators "cpp/language/operator incdec") expressions; 
  * a + b, a % b, a & b, a << b, and all other built-in [arithmetic](operator_arithmetic.html "cpp/language/operator arithmetic") expressions; 
  * a && b, a || b, !a, the built-in [logical](operator_logical.html "cpp/language/operator logical") expressions; 
  * a < b, a == b, a >= b, and all other built-in [comparison](operator_comparison.html "cpp/language/operator comparison") expressions; 
  * &a, the built-in [address-of](operator_member_access.html#Built-in_address-of_operator "cpp/language/operator member access") expression; 
  * a.m, the [member of object](operator_member_access.html#Built-in_member_access_operators "cpp/language/operator member access") expression, where `m` is a member enumerator or a non-static member function[[2]](value_category.html#cite_note-pmfc-2); 
  * p->m, the built-in [member of pointer](operator_member_access.html#Built-in_member_access_operators "cpp/language/operator member access") expression, where `m` is a member enumerator or a non-static member function[[2]](value_category.html#cite_note-pmfc-2); 
  * a.*mp, the [pointer to member of object](operator_member_access.html#Built-in_pointer-to-member_access_operators "cpp/language/operator member access") expression, where `mp` is a pointer to member function[[2]](value_category.html#cite_note-pmfc-2); 
  * p->*mp, the built-in [pointer to member of pointer](operator_member_access.html#Built-in_pointer-to-member_access_operators "cpp/language/operator member access") expression, where `mp` is a pointer to member function[[2]](value_category.html#cite_note-pmfc-2); 
  * a, b, the built-in [comma](operator_other.html#Built-in_comma_operator "cpp/language/operator other") expression, where b is an prvalue; 
  * a ? b : c, the [ternary conditional](operator_other.html#Conditional_operator "cpp/language/operator other") expression for certain b and c (see [definition](operator_other.html#Conditional_operator "cpp/language/operator other") for detail); 
  * a cast expression to non-reference type, such as static_cast<double>(x), [std::string](../string/basic_string.html){}, or (int)42; 
  * the [`this`](this.html "cpp/language/this") pointer; 
  * an [enumerator](enum.html "cpp/language/enum"); 
  * a constant [template parameter](template_parameters.html "cpp/language/template parameters") of a scalar type; 


    
    
    template <int v>
    void foo()
    {
        // not an lvalue, `v` is a template parameter of scalar type int
        const int* a = &v; // ill-formed
     
        v = 3; // ill-formed: lvalue required as left operand of assignment
    }

  * a [lambda expression](lambda.html "cpp/language/lambda"), such as [](int x){ return x * x; }; 

| (since C++11)  
---|---  
  
  * a [requires-expression](constraints.html "cpp/language/constraints"), such as requires (T i) { typename T::type; }; 
  * a specialization of a [concept](constraints.html "cpp/language/constraints"), such as [std::equality_comparable](../concepts/equality_comparable.html)<int>. 

| (since C++20)  
  
Properties: 

  * Same as [rvalue](value_category.html#rvalue) (below). 
  * A prvalue cannot be [polymorphic](objects.html#Polymorphic_objects "cpp/language/object"): the [dynamic type](type-id.html#Dynamic_type "cpp/language/type") of the object it denotes is always the type of the expression. 
  * A non-class non-array prvalue cannot be [cv-qualified](cv.html "cpp/language/cv"), unless it is [materialized](implicit_cast.html#Temporary_materialization "cpp/language/implicit conversion") in order to be [bound to a reference](reference_initialization.html "cpp/language/reference initialization") to a cv-qualified type(since C++17). (Note: a function call or cast expression may result in a prvalue of non-class cv-qualified type, but the cv-qualifier is generally immediately stripped out.) 
  * A prvalue cannot have [incomplete type](type-id.html#Incomplete_type "cpp/language/type") (except for type void, see below, or when used in [`decltype`](decltype.html "cpp/language/decltype") specifier). 
  * A prvalue cannot have [abstract class type](abstract_class.html "cpp/language/abstract class") or an array thereof. 



#### xvalue

The following expressions are _xvalue expressions_ : 

  * a.m, the [member of object](operator_member_access.html#Built-in_member_access_operators "cpp/language/operator member access") expression, where a is an rvalue and `m` is a non-static data member of an object type; 
  * a.*mp, the [pointer to member of object](operator_member_access.html#Built-in_pointer-to-member_access_operators "cpp/language/operator member access") expression, where a is an rvalue and `mp` is a pointer to data member; 
  * a, b, the built-in [comma](operator_other.html#Built-in_comma_operator "cpp/language/operator other") expression, where b is an xvalue; 
  * a ? b : c, the [ternary conditional](operator_other.html#Conditional_operator "cpp/language/operator other") expression for certain b and c (see [definition](operator_other.html#Conditional_operator "cpp/language/operator other") for detail); 



  * a function call or an overloaded operator expression, whose return type is rvalue reference to object, such as std::move(x); 
  * a[n], the built-in [subscript](operator_member_access.html#Built-in_subscript_operator "cpp/language/operator member access") expression, where one operand is an array rvalue; 
  * a cast expression to rvalue reference to object type, such as static_cast<char&&>(x); 

| (since C++11)  
---|---  
  
  * any expression that designates a temporary object, after [temporary materialization](implicit_cast.html#Temporary_materialization "cpp/language/implicit conversion"); 

| (since C++17)  
  
  * a [move-eligible expression](value_category.html#Move-eligible_expressions). 

| (since C++23)  
  
Properties: 

  * Same as rvalue (below). 
  * Same as glvalue (below). 



In particular, like all rvalues, xvalues bind to rvalue references, and like all glvalues, xvalues may be [polymorphic](objects.html#Polymorphic_objects "cpp/language/object"), and non-class xvalues may be [cv-qualified](cv.html "cpp/language/cv"). 

Extended content  
---  
Run this code
    
    
    #include <type_traits>
     
    template <class T> struct is_prvalue : [std::true_type](../types/integral_constant.html) {};
    template <class T> struct is_prvalue<T&> : [std::false_type](../types/integral_constant.html) {};
    template <class T> struct is_prvalue<T&&> : [std::false_type](../types/integral_constant.html) {};
     
    template <class T> struct is_lvalue : [std::false_type](../types/integral_constant.html) {};
    template <class T> struct is_lvalue<T&> : [std::true_type](../types/integral_constant.html) {};
    template <class T> struct is_lvalue<T&&> : [std::false_type](../types/integral_constant.html) {};
     
    template <class T> struct is_xvalue : [std::false_type](../types/integral_constant.html) {};
    template <class T> struct is_xvalue<T&> : [std::false_type](../types/integral_constant.html) {};
    template <class T> struct is_xvalue<T&&> : [std::true_type](../types/integral_constant.html) {};
     
    // Example from C++23 standard: 7.2.1 Value category [basic.lval]
    struct A
    {
        int m;
    };
     
    A&& operator+(A, A);
    A&& f();
     
    int main()
    {
        A a;
        A&& ar = static_cast<A&&>(a);
     
        // Function call with return type rvalue reference is xvalue
        static_assert(is_xvalue<decltype( (f()) )>::value);
     
        // Member of object expression, object is xvalue, `m` is a non-static data member
        static_assert(is_xvalue<decltype( (f().m) )>::value);
     
        // A cast expression to rvalue reference
        static_assert(is_xvalue<decltype( (static_cast<A&&>(a)) )>::value);
     
        // Operator expression, whose return type is rvalue reference to object
        static_assert(is_xvalue<decltype( (a + a) )>::value);
     
        // Expression `ar` is lvalue, `&ar` is valid
        static_assert(is_lvalue<decltype( (ar) )>::value);
        [[maybe_unused]] A* ap = &ar;
    }  
  
### Mixed categories

#### glvalue

A _glvalue expression_ is either lvalue or xvalue. 

Properties: 

  * A glvalue may be implicitly converted to a prvalue with lvalue-to-rvalue, array-to-pointer, or function-to-pointer [implicit conversion](implicit_cast.html "cpp/language/implicit conversion"). 
  * A glvalue may be [polymorphic](objects.html#Polymorphic_objects "cpp/language/object"): the [dynamic type](type-id.html#Dynamic_type "cpp/language/type") of the object it identifies is not necessarily the static type of the expression. 
  * A glvalue can have [incomplete type](type-id.html#Incomplete_type "cpp/language/type"), where permitted by the expression. 



#### rvalue

An _rvalue expression_ is either prvalue or xvalue. 

Properties: 

  * Address of an rvalue cannot be taken by built-in address-of operator: &int(), &i++[[3]](value_category.html#cite_note-3), &42, and &std::move(x) are invalid. 
  * An rvalue can't be used as the left-hand operand of the built-in assignment or compound assignment operators. 
  * An rvalue may be used to [initialize a const lvalue reference](reference_initialization.html "cpp/language/reference initialization"), in which case the lifetime of the temporary object identified by the rvalue is [extended](reference_initialization.html#Lifetime_of_a_temporary "cpp/language/reference initialization") until the scope of the reference ends. 



  * An rvalue may be used to [initialize an rvalue reference](reference_initialization.html "cpp/language/reference initialization"), in which case the lifetime of the temporary object identified by the rvalue is [extended](reference_initialization.html#Lifetime_of_a_temporary "cpp/language/reference initialization") until the scope of the reference ends. 
  * When used as a function argument and when [two overloads](overload_resolution.html "cpp/language/overload resolution") of the function are available, one taking rvalue reference parameter and the other taking lvalue reference to const parameter, an rvalue binds to the rvalue reference overload (thus, if both copy and move constructors are available, an rvalue argument invokes the [move constructor](move_constructor.html "cpp/language/move constructor"), and likewise with copy and move assignment operators). 

| (since C++11)  
---|---  
  
### Special categories

#### Pending member function call

The expressions a.mf and p->mf, where `mf` is a [non-static member function](member_functions.html "cpp/language/member functions"), and the expressions a.*pmf and p->*pmf, where `pmf` is a [pointer to member function](pointer.html#Pointers_to_member_functions "cpp/language/pointer"), are classified as prvalue expressions, but they cannot be used to initialize references, as function arguments, or for any purpose at all, except as the left-hand argument of the function call operator, e.g. (p->*pmf)(args). 

#### Void expressions

Function call expressions returning void, cast expressions to void, and [throw-expressions](throw.html "cpp/language/throw") are classified as prvalue expressions, but they cannot be used to initialize references or as function arguments. They can be used in discarded-value contexts (e.g. on a line of its own, as the left-hand operand of the comma operator, etc.) and in the return statement in a function returning void. In addition, throw-expressions may be used as the second and the third operands of the [conditional operator ?:](operator_other.html "cpp/language/operator other"). 

Void expressions have no _result object_.  | (since C++17)  
---|---  
  
#### Bit-fields

An expression that designates a [bit-field](bit_field.html "cpp/language/bit field") (e.g. a.m, where a is an lvalue of type struct A { int m: 3; }) is a glvalue expression: it may be used as the left-hand operand of the assignment operator, but its address cannot be taken and a non-const lvalue reference cannot be bound to it. A const lvalue reference or rvalue reference can be initialized from a bit-field glvalue, but a temporary copy of the bit-field will be made: it won't bind to the bit-field directly. 

####  Move-eligible expressions

Although an expression consisting of the name of any variable is an lvalue expression, such expression may be move-eligible if it appears as the operand of 

  * a [`return`](return.html "cpp/language/return") statement 
  * a [`co_return`](coroutines.html "cpp/language/coroutines") statement (since C++20)
  * a [`throw`](throw.html "cpp/language/throw") expression (since C++17)

If an expression is move-eligible, it is treated either as an rvalue or as an lvalue(until C++23)as an rvalue(since C++23) for the purpose of [overload resolution](overload_resolution.html "cpp/language/overload resolution") (thus it may select the [move constructor](move_constructor.html "cpp/language/move constructor")). See [Automatic move from local variables and parameters](return.html#Automatic_move_from_local_variables_and_parameters "cpp/language/return") for details.  | (since C++11)  
---|---  
  
### History

#### CPL

The programming language [CPL](https://en.wikipedia.org/wiki/CPL_\(programming_language\) "enwiki:CPL \(programming language\)") was first to introduce value categories for expressions: all CPL expressions can be evaluated in "right-hand mode", but only certain kinds of expression are meaningful in "left-hand mode". When evaluated in right-hand mode, an expression is regarded as being a rule for the computation of a value (the right-hand value, or _rvalue_). When evaluated in left-hand mode an expression effectively gives an address (the left-hand value, or _lvalue_). "Left" and "Right" here stood for "left of assignment" and "right of assignment". 

#### C

The C programming language followed a similar taxonomy, except that the role of assignment was no longer significant: C expressions are categorized between "lvalue expressions" and others (functions and non-object values), where "lvalue" means an expression that identifies an object, a "locator value"[[4]](value_category.html#cite_note-4). 

#### C++98

Pre-2011 C++ followed the C model, but restored the name "rvalue" to non-lvalue expressions, made functions into lvalues, and added the rule that references can bind to lvalues, but only references to const can bind to rvalues. Several non-lvalue C expressions became lvalue expressions in C++. 

#### C++11

With the introduction of move semantics in C++11, value categories were redefined to characterize two independent properties of expressions[[5]](value_category.html#cite_note-5): 

  * _has identity_ : it's possible to determine whether the expression refers to the same entity as another expression, such as by comparing addresses of the objects or the functions they identify (obtained directly or indirectly); 
  * _can be moved from_ : [move constructor](move_constructor.html "cpp/language/move constructor"), [move assignment operator](move_operator.html "cpp/language/move assignment"), or another function overload that implements move semantics can bind to the expression. 



In C++11, expressions that: 

  * have identity and cannot be moved from are called _lvalue_ expressions; 
  * have identity and can be moved from are called _xvalue_ expressions; 
  * do not have identity and can be moved from are called _prvalue_ ("pure rvalue") expressions; 
  * do not have identity and cannot be moved from are not used[[6]](value_category.html#cite_note-6). 



The expressions that have identity are called "glvalue expressions" (glvalue stands for "generalized lvalue"). Both lvalues and xvalues are glvalue expressions. 

The expressions that can be moved from are called "rvalue expressions". Both prvalues and xvalues are rvalue expressions. 

#### C++17

In C++17, [copy elision](copy_elision.html "cpp/language/copy elision") was made mandatory in some situations, and that required separation of prvalue expressions from the temporary objects initialized by them, resulting in the system we have today. Note that, in contrast with the C++11 scheme, prvalues are no longer moved from. 

### Footnotes

  1. [↑](value_category.html#cite_ref-1) Assuming i has built-in type or the pre-increment operator is [overloaded](operators.html "cpp/language/operators") to return by lvalue reference.
  2. ↑ [2.0](value_category.html#cite_ref-pmfc_2-0) [2.1](value_category.html#cite_ref-pmfc_2-1) [2.2](value_category.html#cite_ref-pmfc_2-2) [2.3](value_category.html#cite_ref-pmfc_2-3) Special rvalue category, see [pending member function call](value_category.html#Pending_member_function_call).
  3. [↑](value_category.html#cite_ref-3) Assuming i has built-in type or the post-increment operator is not [overloaded](operators.html "cpp/language/operators") to return by lvalue reference.
  4. [↑](value_category.html#cite_ref-4) "A difference of opinion within the C community centered around the meaning of lvalue, one group considering an lvalue to be any kind of object locator, another group holding that an lvalue is meaningful on the left side of an assigning operator. The C89 Committee adopted the definition of lvalue as an object locator." -- ANSI C Rationale, 6.3.2.1/10.
  5. [↑](value_category.html#cite_ref-5) ["New" Value Terminology](https://www.stroustrup.com/terminology.pdf) by Bjarne Stroustrup, 2010.
  6. [↑](value_category.html#cite_ref-6) const prvalues (only allowed for class types) and const xvalues do not bind to `T&&` overloads, but they bind to the const T&& overloads, which are also classified as "move constructor" and "move assignment operator" by the standard, satisfying the definition of "can be moved from" for the purpose of this classification. However, such overloads cannot modify their arguments and are not used in practice; in their absence const prvalues and const xvalues bind to const T& overloads.



### References

  * C++23 standard (ISO/IEC 14882:2024): 



    

  * 7.2.1 Value category [basic.lval] 



  * C++20 standard (ISO/IEC 14882:2020): 



    

  * 7.2.1 Value category [basic.lval] 



  * C++17 standard (ISO/IEC 14882:2017): 



    

  * 6.10 Lvalues and rvalues [basic.lval] 



  * C++14 standard (ISO/IEC 14882:2014): 



    

  * 3.10 Lvalues and rvalues [basic.lval] 



  * C++11 standard (ISO/IEC 14882:2011): 



    

  * 3.10 Lvalues and rvalues [basic.lval] 



  * C++98 standard (ISO/IEC 14882:1998): 



    

  * 3.10 Lvalues and rvalues [basic.lval] 



### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[CWG 616](https://cplusplus.github.io/CWG/issues/616.html) | C++11  | member access and member access through  
pointer to member of an rvalue resulted in prvalue  | reclassified as xvalue   
[CWG 1059](https://cplusplus.github.io/CWG/issues/1059.html) | C++11  | array prvalues could not be cv-qualified  | allowed   
[CWG 1213](https://cplusplus.github.io/CWG/issues/1213.html) | C++11  | subscripting an array rvalue resulted in lvalue  | reclassified as xvalue   
  
### See also

[C documentation](../../c/language/value_category.html "c/language/value category") for value categories  
---  
  
### External links

1\.  | [C++ value categories and decltype demystified](https://www.scs.stanford.edu/~dm/blog/decltype.html) — David Mazières, 2021   
---|---  
2\.  | [Empirically determine value category of expression](https://stackoverflow.com/a/16638081) — StackOverflow  |   
---
