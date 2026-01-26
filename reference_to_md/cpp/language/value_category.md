* value categories 
  * allows
    * 👀classify expressions (!= values) -- by -- their values👀
  * ALLOWED ones
    * [_prvalue_](#prvalue)
    * [_xvalue_](#xvalue)
    * [_lvalue_](#lvalue)
    * [rvalue](#rvalue)
  * == result object's properties
    * ALLOWED ones
      * variable
      * object / created -- by -- [new-expression](new.md)
      * temporary / created -- by -- [temporary materialization](implicit_cast.md#temporary-materialization)
      * member thereof
    * uses | 
      * non-void [discarded](expressions.md#discarded-value-expressions) expressions
      * every class
        * EXCEPT to, == operand of [`decltype`](decltype.md) 
      * array prvalue  
        * EXCEPT to, == operand of [`decltype`](decltype.md)

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

  
### Primary categories

#### lvalue

* := glvalue / is NOT a xvalue 
* ⚠️ORIGINALLY⚠️
  * == assignment expression's left-hand (_l_) side
* ❌RIGHT now, NOT ALWAYS❌ 

* _lvalue expressions_
  * ALLOWED ones
    * name of a 
      * variable,
      * function,
      * [template parameter object](template_parameters.md#constant-template-parameter-or-non-type-template-parameter-)
        * | C++20
      * data member
    * function call OR overloaded operator expression / 's return type == lvalue reference
    * [assignment & compound assignment expressions](operator_assignment.md) 
    * [pre-increment & pre-decrement expressions](operator_incdec.md#built-in-prefix-operators) 
    * [indirection expression](operator_member_access.md#built-in-indirection-operator)
    * [subscript expression](operator_member_access.md#built-in-subscript-operator)
    * [member of object expression](operator_member_access.md#built-in-member-access-operators)
  * ⚠️regardless of type⚠️
    * _Examples:_ [std::cin](../io/cin.md) OR [std::hex](../io/manip/hex.md)
    * ⚠️if the variable's type == rvalue reference -> expression / consist of its name == lvalue expression⚠️
      * [Move-eligible expressions](#move-eligible-expressions)

  
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

* == “pure” rvalue
* == expression /
  * | evaluate,
    * computes the built-in operator's operand's value
      * == NO _result object_
    * initializes an object 
      * -> _result object_
  * ALLOWED ones
    * [literal](expressions.md#literals) 
      * ⚠️EXCEPT for [string literal](string_literal.md)⚠️
    * function call OR overloaded operator expression / 
      * 's return type == non-reference
    * [post-increment & post-decrement expressions](operator_incdec.md#built-in-postfix-operators)
    * [arithmetic expressions](operator_arithmetic.md) 
    * [logical expressions](operator_logical.md)
    * [comparison expressions](operator_comparison.md)
    * [address-of expression](operator_member_access.md#built-in-address-of-operator)
    * [member of object expression](operator_member_access.md#built-in-member-access-operators)
    * [member of pointer expression](operator_member_access.md#built-in-member-access-operators)
    * [pointer to member of object expression](operator_member_access.md#built-in-pointer-to-member-access-operators)
    * [pointer to member of pointer expression](operator_member_access.md#built-in-pointer-to-member-access-operators)
    * [comma expression](operator_other.md#built-in-comma-operator)
    * [ternary conditional expression](operator_other.md#conditional-operator)
    * cast expression -- to -- non-reference type
    * [`this` pointer](this.md) 
    * [enumerator](enum.md) 
    * [template parameter](template_parameters.md) /
      * constant
      * scalar type 
    * [lambda expression](lambda.md)
      * | C++11
    * [requires-expression](constraints.md) 
    * specialization of a [concept](constraints.md) 
      * | C++20  
  * ❌NOT ALLOWED❌
    * [polymorphic](objects.md#polymorphic-objects)
      * object's [dynamic type](incomplete_type.md#dynamic-type) == expression's type
    * if non-class non-array prvalue -> NOT ALLOWED [cv-qualified](cv.md)
      * EXCEPT FOR: it is [materialized](implicit_cast.md#temporary-materialization)
        * Reason:🧠[bound to a reference](reference_initialization.md) -- to a -- cv-qualified type
          * | C++17
      * (Note: a function call or cast expression may result in a prvalue of non-class cv-qualified type, but the cv-qualifier is generally immediately stripped out.)
  * 's properties
    * == [rvalue's properties](#rvalue)  
    * ❌NOT ALLOWED❌
      * [incomplete type](incomplete_type.md#incomplete-type)
        * EXCEPT for
          * `type void`
          * using | [`decltype`](decltype.md) specifier 
      * [abstract class type](abstract_class.md)
      * array thereof 

#### xvalue

* == “eXpiring” value
* == glvalue / 
  * object's resources can be reused
* requirements
  * C++11

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

* [glvalue](#glvalue)
  * == “generalized” lvalue /
    * | evaluate,
      * determines the identity of an object or function

A _glvalue expression_ is either lvalue or xvalue. 

Properties: 

  * A glvalue may be implicitly converted to a prvalue with lvalue-to-rvalue, array-to-pointer, or function-to-pointer [implicit conversion](implicit_cast.html "cpp/language/implicit conversion"). 
  * A glvalue may be [polymorphic](objects.html#Polymorphic_objects "cpp/language/object"): the [dynamic type](type-id.html#Dynamic_type "cpp/language/type") of the object it identifies is not necessarily the static type of the expression. 
  * A glvalue can have [incomplete type](type-id.html#Incomplete_type "cpp/language/type"), where permitted by the expression. 



#### rvalue

* == [prvalue](#prvalue) OR [xvalue](#xvalue)
* ⚠️ORIGINALLY⚠️
  * == assignment expression's right-hand (_l_) side
    * ❌RIGHT now, NOT ALWAYS❌
* == right-hand value
* 's properties
  * 's address can NOT be taken -- by -- built-in address-of operator
    * _Example of invalid ones:_ `&int()`, `&i++`, `&42`, `&std::move(x)` 
* ❌NOT uses❌
  * built-in assignment`s left-hand operand 
  * compound assignment operators 
* uses
  * [initialize a const lvalue reference](reference_initialization.md) /
    * rvalue's temporary object's [lifetime](reference_initialization.md#lifetime-of-a-temporary) == [, reference's scope ends] 
  * [initialize an rvalue reference](reference_initialization.md) /
    * rvalue's temporary object's [lifetime](reference_initialization.md#lifetime-of-a-temporary) == [, reference's scope ends] 
  * When used as a function argument and when [two overloads](overload_resolution.html "cpp/language/overload resolution") of the function are available,
  one taking rvalue reference parameter and the other taking lvalue reference to const parameter, 
  an rvalue binds to the rvalue reference overload 
  (thus, if both copy and move constructors are available, an rvalue argument invokes the [move constructor](move_constructor.html "cpp/language/move constructor"),
  and likewise with copy and move assignment operators). 

| (since C++11)  
---|---  
  
### Special categories

#### Pending member function call

The expressions a.mf and p->mf, where `mf` is a [non-static member function](member_functions.html "cpp/language/member functions"),
and the expressions a.*pmf and p->*pmf, where `pmf` is a [pointer to member function](pointer.html#Pointers_to_member_functions "cpp/language/pointer"), 
are classified as prvalue expressions, but they cannot be used to initialize references, as function arguments, 
or for any purpose at all, except as the left-hand argument of the function call operator, e.g. (p->*pmf)(args). 

#### Void expressions

Function call expressions returning void, cast expressions to void, and [throw-expressions](throw.html "cpp/language/throw") are classified as prvalue expressions, 
but they cannot be used to initialize references or as function arguments
* They can be used in discarded-value contexts (e.g. on a line of its own, as the left-hand operand of the comma operator, etc.) and
in the return statement in a function returning void
* In addition, throw-expressions may be used as the second and the third operands of the [conditional operator ?:](operator_other.html "cpp/language/operator other"). 

* Void expressions
  * | C++17,
    * ❌have NO _result object_❌    
  
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

#### [CPL](https://en.wikipedia.org/wiki/CPL_\(programming_language\)

* == programming language
  * ⚠️FIRST / introduced value categories for expressions⚠️
    * | "right-hand mode",
      * ALL CPL expressions can be evaluated 
        * expression == rule for the computation of a value (_rvalue_) 
    * | "left-hand mode"
      * ONLY certain kinds of expression can be evaluated (== are meaningful)
        * expression gives an address (_lvalue_)
    * "Left"
      * == "left of assignment"
    * "Right"
      * == "right of assignment" 

#### C

* followed a similar taxonomy
  * EXCEPT that: ❌role of assignment was NO longer significant❌
* C expressions categories
  * "lvalue expressions"
    * "lvalue" == expression / identifies an object
      * == ["locator value"](#external-links) 
  * others (functions and non-object values)

#### C++98 (== pre-2011 C++)

* vs C model  
  * restored "rvalue"
    * == non-lvalue expressions / functions were made into lvalues
  * rule / references
    * can bind -- to -- lvalues
    * to const can bind -- to -- rvalues
  * several non-lvalue C expressions became -- lvalue expressions | C++ 

#### C++11

* ⭐️move semantics ⭐️
  * 💡NEW feature💡
  * allows
    * 👀redefining value categories -- based on -- [2 expressions' properties / are independent](#footnotes)👀
      * `_has identity_`
        * enable you to, determine whether the expression refers -- to -- same entity OR another expression
          * _Example:_ compare objects' addresses OR functions / they identify 
      * `_can be moved from_`
        * [move constructor](move_constructor.md)
        * [move assignment operator](move_operator.md)
        * another function overload / implements move semantics can bind -- to the -- expression

* C++11 expressions
  * 👀_lvalue_ expressions👀
    * have identity
    * can NOT be moved from  
  * 👀_xvalue_ expressions👀
    * have identity
    * can be moved from  
  * 👀_prvalue_ expressions👀
    * do NOT have identity
    * can be moved from  
  * ⚠️[NOT used](#external-links) expressions⚠️
    * do NOT have identity
    * can NOT be moved from
  * 👀"glvalue expressions"👀
    * := expressions / have identity
      * _Example:_ lvalues and xvalues
  * 👀"rvalue expressions"👀
    * := expressions / can be moved from
      * _Example:_ prvalues and xvalues

#### C++17

* [copy elision](copy_elision.md)
  * | some situations,
    * made mandatory
  * requirements
    * separate `prvalue` expressions -- from the -- temporary objects / initialized by them
* vs C++11 scheme,
  * `prvalues` 
    * NO longer moved from 

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
