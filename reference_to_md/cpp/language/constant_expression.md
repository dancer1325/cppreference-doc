

  
  
  
  
  

  
  
  

---  
  

---  
  


[ Expressions](expressions.html "cpp/language/expressions")

General  
---  
| [Value categories](value_category.html "cpp/language/value category")  
---  
[Order of evaluation](eval_order.html "cpp/language/eval order")  
**Constant expressions**  
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
  

  
  


Defines an [expression](expressions.html "cpp/language/expressions") that can be evaluated at compile time. 

Such expressions can be used as constant template arguments, array sizes, and in other contexts that require constant expressions, e.g. 
    
    
    int n = 1;
    [std::array](../container/array.html)<int, n> a1;  // Error: “n” is not a constant expression
    const int cn = 2;
    [std::array](../container/array.html)<int, cn> a2; // OK: “cn” is a constant expression

## Contents

  * [1 Definition](constant_expression.html#Definition)
    * [1.1 Integral constant expression (C++98)](constant_expression.html#Integral_constant_expression_.28C.2B.2B98.29)
    * [1.2 Other constant expression categories](constant_expression.html#Other_constant_expression_categories)
  * [2 Literal type](constant_expression.html#Literal_type)
  * [3 Core constant expression](constant_expression.html#Core_constant_expression)
    * [3.1 Extra requirements](constant_expression.html#Extra_requirements)
  * [4 Integral constant expression](constant_expression.html#Integral_constant_expression)
  * [5 Converted constant expression](constant_expression.html#Converted_constant_expression)
  * [6 Constituent entities](constant_expression.html#Constituent_entities)
  * [7 Constexpr-representable entities](constant_expression.html#Constexpr-representable_entities)
  * [8 Constant-initialized entities](constant_expression.html#Constant-initialized_entities)
  * [9 Usable in constant expressions](constant_expression.html#Usable_in_constant_expressions)
  * [10 Manifestly constant-evaluated expressions](constant_expression.html#Manifestly_constant-evaluated_expressions)
  * [11 Functions and variables needed for constant evaluation](constant_expression.html#Functions_and_variables_needed_for_constant_evaluation)
  * [12 Constant subexpression](constant_expression.html#Constant_subexpression)
  * [13 Notes](constant_expression.html#Notes)
  * [14 Example](constant_expression.html#Example)
  * [15 Defect reports](constant_expression.html#Defect_reports)
  * [16 See also](constant_expression.html#See_also)

  
---  
  
### Definition

An expression that belongs to any of the constant expression categories listed below is a _constant expression_.  | C++98 constant expression categories  
---  
  
####  Integral constant expression (C++98)

In the following places, C++ requires expressions that evaluate to an integral or enumeration constant: 

  * [array bounds](array.html "cpp/language/array") (including the dimensions in [new expressions](new.html "cpp/language/new") other than the first) 
  * [case label](statements.html#Labels "cpp/language/statements") constants 
  * [bit-field](bit_field.html "cpp/language/bit field") lengths 
  * [enumerator](enum.html "cpp/language/enum") initializers 
  * [static data member](static.html "cpp/language/static") initializers 
  * [template constant arguments](template_parameters.html#Template_constant_arguments "cpp/language/template parameters") of integral or enumeration type 

An expression satisfying all following conditions is an _integral constant-expression_ ﻿: 

  * It only involves the following entities: 



    

  * literals of arithmetic types 
  * enumerators 
  * variables or static data members satisfying all following conditions: 



    

  * They are const-qualified. 
  * They are not volatile-qualified. 
  * They are of integral or enumeration types. 
  * They are initialized with constant expressions. 



  * [constant template parameters](template_parameters.html#Constant_template_parameters "cpp/language/template parameters") of integral or enumeration types 
  * [`sizeof`](sizeof.html "cpp/language/sizeof") expressions 



  * It does not use any floating-point literals, unless they are [explicitly converted](explicit_cast.html "cpp/language/explicit cast") to integral or enumeration types. 
  * It does not apply any conversion to non-integral and non-enumeration types. 
  * It does not use any of the following entities except in the operands of sizeof: 



    

  * function 
  * class object 
  * pointer 
  * reference 
  * assignment operator 
  * increment operator 
  * decrement operator 
  * function-call operator 
  * comma operator 



####  Other constant expression categories

Other expressions are considered constant expressions only for the purpose of [constant initialization](constant_initialization.html "cpp/language/constant initialization"). Such a constant expression must be one of the following expressions: 

  * an expression that evaluates to a [null pointer value](pointer.html#Null_pointers "cpp/language/pointer")
  * an expression that evaluates to a null pointer-to-member value 
  * an arithmetic constant expression 
  * an address constant expression 
  * a reference constant expression 
  * an address constant expression for a complete object type, plus or minus an integral constant expression 
  * a pointer-to-member constant expression 

An _arithmetic constant expression_ is an expression satisfying the requirements for an integral constant expression, with the following exceptions: 

  * Floating-point literals can be used without explicit conversion. 
  * Conversions to floating-point types can be applied. 

An _address constant expression_ is an expression of pointer type satisfying all following conditions: 

  * The pointer points to an lvalue designating an object of [static storage duration](storage_duration.html#Static_storage_duration "cpp/language/storage duration"), a [string literal](string_literal.html "cpp/language/string literal"), or a [function](function.html "cpp/language/function"). The object is not a [subobject](objects.html#Subobjects "cpp/language/object") of non-[POD class](classes.html#POD_class "cpp/language/classes") type. 
  * The pointer is created by one of the following methods: 



    

  * explicitly using the address-of operator 
  * implicitly using a constant template parameter of pointer type 
  * using an expression of array or function type 



  * The expression does not call any function. 
  * The expression uses explicit pointer conversions (except [`dynamic_cast`](dynamic_cast.html "cpp/language/dynamic cast")) and the following operators without accessing the result object: 



    

  * subscript operator 
  * indirection operator 
  * address-of operator 
  * member access operator 



  * If the subscript operator is used, one of its operands is an integral constant expression. 

A _reference constant expression_ is an expression of reference type satisfying all following conditions: 

  * The reference designates an object of static storage duration, a constant template parameter of reference type, or a function. The reference does not designate a member or base class of non-POD class type. 
  * The expression does not call any function. 
  * The expression uses explicit reference conversions (except [`dynamic_cast`](dynamic_cast.html "cpp/language/dynamic cast")) and the following operators without accessing the result object: 



    

  * subscript operator 
  * indirection operator 
  * address-of operator 
  * member access operator 



  * If the subscript operator is used, one of its operands is an integral constant expression. 

A _pointer-to-member constant expression_ is an expression of pointer-to-member type where the pointer is created by applying the address-of operator to a qualified identifier, optionally preceded by an explicit pointer-to-member conversion.   
  
(until C++11)  
The following expressions are collectively called _constant expressions_ ﻿: 

  * prvalue [core constant expressions](constant_expression.html#Core_constant_expression) of non-pointer [literal type](constant_expression.html#Literal_types)
  * lvalue core constant expressions that designate objects with [static storage duration](storage_duration.html#Static_storage_duration "cpp/language/storage duration") or functions 
  * prvalue core constant expressions of pointer type that evaluate to one of the following values: 



    

  * the address of an object with static storage duration 
  * the address of a function 
  * a [null pointer value](pointer.html#Null_pointers "cpp/language/pointer")



  * prvalue core constant expressions of type [std::nullptr_t](../types/nullptr_t.html "cpp/types/nullptr t")

| (since C++11)  
(until C++14)  
The following entities are _permitted results of a constant expression_ ﻿: 

  * temporary objects with [static storage duration](storage_duration.html#Static_storage_duration "cpp/language/storage duration")
  * non-temporary objects with static storage duration whose values satisfy the constraints listed below 
  * non-[immediate](consteval.html "cpp/language/consteval") (since C++20)functions 

A _constant expression_ is either a glvalue [core constant expression](constant_expression.html#Core_constant_expression) that refers to an entity that is a permitted result of a constant expression, or a prvalue core constant expression whose value satisfies the following constraints: 

  * If the value is an object of class type, each non-static data member of reference type refers to an entity that is a permitted result of a constant expression. 
  * If the value is an object of [scalar type](type-id.html#Scalar_type "cpp/language/type"), it does not have an [indeterminate](default_initialization.html#Indeterminate_and_erroneous_values "cpp/language/default initialization") value. 
  * If the value is of [pointer type](pointer.html "cpp/language/pointer"), it is one of the following values: 



    

  * the address of an object with static storage duration 
  * the address past the end of an object with static storage duration 
  * the address of a non-immediate(since C++20) function 
  * a [null pointer value](pointer.html#Null_pointers "cpp/language/pointer")


| 

  * If the value is of pointer-to-member-function type, it does not designate an immediate function. 

| (since C++20)  
---|---  
  
  * If the value is an object of class or array type, each subobject satisfies these constraints for the value. 

(since C++14)  
(until C++26)  
A _constant expression_ is either a glvalue [core constant expression](constant_expression.html#Core_constant_expression) that refers to an object or a non-[immediate function](consteval.html "cpp/language/consteval"), or a prvalue core constant expression whose value satisfies the following constraints: 

  * Each [constituent reference](constant_expression.html#Constituent_entities) refers to an object or a non-immediate function. 
  * No [constituent value](constant_expression.html#Constituent_entities) of [scalar type](type-id.html#Scalar_type "cpp/language/type") is an [indeterminate or erroneous value](default_initialization.html#Indeterminate_and_erroneous_values "cpp/language/default initialization"). 
  * No constituent value of pointer type is a pointer to an immediate function or an [invalid pointer value](pointer.html#Invalid_pointers "cpp/language/pointer"). 
  * No constituent value of pointer-to-member type designates an immediate function. 

| (since C++26)  
  
When determining whether an expression is a constant expression, [copy elision](copy_elision.html "cpp/language/copy elision") is assumed not to be performed. 

The C++98 definition of constant expressions is entirely within the collapse box. The following description applies to C++11 and later C++ versions. 

### Literal type

The following types are collectively called _literal types_ ﻿: 

  * possibly cv-qualified void
  * [scalar type](type-id.html#Scalar_type "cpp/language/type")
  * [reference type](reference.html "cpp/language/reference")
  * an [array](array.html "cpp/language/array") of literal type 
  * possibly cv-qualified class type that satisfies all following conditions: 



    

  * It has a [trivial destructor](destructor.html#Trivial_destructor "cpp/language/destructor")(until C++20)[constexpr destructor](constexpr.html#constexpr_destructor "cpp/language/constexpr")(since C++20). 
  * All of its non-static non-variant data members and base classes are of non-volatile literal types. 
  * It is one of the following types: 



    

    

  * a [closure type](lambda.html#Closure_type "cpp/language/lambda")


| (since C++17)  
---|---  
  
    

    

  * an [aggregate](aggregate_initialization.html#Definitions "cpp/language/aggregate initialization") union type that satisfies one of the following conditions: 



    

  * It has no [variant member](union.html#Union-like_classes "cpp/language/union"). 
  * It has at least one variant member of non-volatile literal type. 



  * a non-union aggregate type, and each of its [anonymous union](union.html#Anonymous_unions "cpp/language/union") members satisfies one of the following conditions: 



    

  * It has no variant member. 
  * It has at least one variant member of non-volatile literal type. 



  * a type with at least one constexpr constructor (template) that is not a copy or move constructor 



Only objects of literal types can be created within a constant expression. 

### Core constant expression

A _core constant expression_ is any expression whose evaluation **would not** evaluate any one of the following language constructs: 

Language construct  |  Version  | Paper(s)   
---|---|---  
the [`this`](this.html "cpp/language/this") pointer, except in a [constexpr function](constexpr.html#constexpr_function "cpp/language/constexpr") that is being evaluated as part of the expression, or when appearing in an implicit or explicit class member access expression  |  | [N2235](https://wg21.link/N2235)  
a control flow that passes through a declaration of a [block variable](scope.html#Block_scope "cpp/language/scope") with static or thread [storage duration](storage_duration.html "cpp/language/storage duration") that is not [usable in constant expressions](constant_expression.html#Usable_in_constant_expressions) | (since C++23) | [P2242R3](https://wg21.link/P2242R3)  
| This section is incomplete  
Reason: Transfer the contents from the raw-HTML ordered list below to the wikitable above, while adding the papers/CWG issues that introduced the corresponding item to the standard. The mini-examples are not preserved, they can be combined to form a large example at the bottom of this page.   
---|---  
  
  1. a function call expression that calls a function (or a constructor) that is not declared [constexpr](constexpr.html "cpp/language/constexpr")
         
         constexpr int n = [std::numeric_limits](../types/numeric_limits.html)<int>::max(); // OK: max() is constexpr
         constexpr int m = [std::time](../chrono/c/time.html)(nullptr); // Error: std::time() is not constexpr

  2. a function call to a constexpr function which is declared, but not defined 
  3. a function call to a constexpr function/constructor template instantiation where the instantiation fails to satisfy [constexpr function/constructor](constexpr.html "cpp/language/constexpr") requirements. 
  4. a function call to a constexpr virtual function, invoked on an object whose dynamic type is constexpr-unknown 
  5. an expression that would exceed the implementation-defined limits 
  6. an expression whose evaluation leads to any form of core language [undefined](ub.html "cpp/language/ub") or erroneous(since C++26) behavior, except for any potential undefined behavior introduced by [standard attributes](attributes.html#Standard_attributes "cpp/language/attributes"). 
         
         constexpr double d1 = 2.0 / 1.0; // OK
         constexpr double d2 = 2.0 / 0.0; // Error: not defined
         constexpr int n = [std::numeric_limits](../types/numeric_limits.html)<int>::max() + 1; // Error: overflow
         int x, y, z[30];
         constexpr auto e1 = &y - &x;        // Error: undefined
         constexpr auto e2 = &z[20] - &z[3]; // OK
         constexpr [std::bitset](../utility/bitset.html)<2> a; 
         constexpr bool b = a[2]; // UB, but unspecified if detected

  7. (until C++17) a [lambda expression](lambda.html "cpp/language/lambda")
  8. an lvalue-to-rvalue [implicit conversion](implicit_cast.html "cpp/language/implicit conversion") unless applied to... 
     1. a glvalue of type (possibly cv-qualified) [std::nullptr_t](../types/nullptr_t.html "cpp/types/nullptr t")
     2. a non-volatile literal-type glvalue that designates an object that is [usable in constant expressions](constant_expression.html#Usable_in_constant_expressions)
            
            int main()
            {
                const [std::size_t](../types/size_t.html) tabsize = 50;
                int tab[tabsize]; // OK: tabsize is a constant expression
                                  // because tabsize is usable in constant expressions
                                  // because it has const-qualified integral type, and
                                  // its initializer is a constant initializer
             
                [std::size_t](../types/size_t.html) n = 50;
                const [std::size_t](../types/size_t.html) sz = n;
                int tab2[sz]; // Error: sz is not a constant expression
                              // because sz is not usable in constant expressions
                              // because its initializer was not a constant initializer
            }

     3. a non-volatile literal-type glvalue that refers to a non-volatile object whose lifetime began within the evaluation of this expression 
  9. an lvalue-to-rvalue [implicit conversion](implicit_cast.html "cpp/language/implicit conversion") or modification applied to a non-active member of a [union](union.html "cpp/language/union") or its subobject (even if it shares a common initial sequence with the active member) 
  10. an lvalue-to-rvalue implicit conversion on an object [whose value is indeterminate](default_initialization.html "cpp/language/default initialization")
  11. an invocation of implicit copy/move constructor/assignment for a union whose active member is mutable (if any), with lifetime beginning outside the evaluation of this expression 
  12. (until C++20) an assignment expression that would change the active member of a union 
  13. conversion from [pointer to void](pointer.html#Pointers_to_void "cpp/language/pointer") to a pointer-to-object type `T*` unless the pointer holds a null pointer value or points to an object whose type is [similar](implicit_cast.html#Similar_types "cpp/language/implicit conversion") to `T`(since C++26)
  14. [`dynamic_cast`](dynamic_cast.html "cpp/language/dynamic cast") whose operand is a glvalue that refers to an object whose dynamic type is constexpr-unknown(since C++20)
  15. [`reinterpret_cast`](reinterpret_cast.html "cpp/language/reinterpret cast")
  16. (until C++20) pseudo-destructor call 
  17. (until C++14) an increment or a decrement operator 
  18. (since C++14) modification of an object, unless the object has non-volatile literal type and its lifetime began within the evaluation of the expression 
         
         constexpr int incr(int& n)
         {
             return ++n;
         }
          
         constexpr int g(int k)
         {
             constexpr int x = incr(k); // Error: incr(k) is not a core constant
                                        // expression because lifetime of k
                                        // began outside the expression incr(k)
             return x;
         }
          
         constexpr int h(int k)
         {
             int x = incr(k); // OK: x is not required to be initialized
                              // with a core constant expression
             return x;
         }
          
         constexpr int y = h(1); // OK: initializes y with the value 2
                                 // h(1) is a core constant expression because
                                 // the lifetime of k begins inside the expression h(1)

  19. (since C++20) a destructor call or pseudo destructor call for an object whose lifetime did not begin within the evaluation of this expression 
  20. a [`typeid`](typeid.html "cpp/language/typeid") expression applied to a glvalue of polymorphic type and that glvalue refers to an object whose dynamic type is constexpr-unknown(since C++20)
  21. a [new expression](new.html "cpp/language/new"), unless one of the following conditions is satisfied:(since C++20)
     * The selected [allocation function](../memory/new/operator_new.html "cpp/memory/new/operator new") is a replaceable global allocation function and the allocated storage is deallocated within the evaluation of this expression. 
| (since C++20)  
---|---  
     * The selected allocation function is a non-allocating form with an allocated type `T`, and the placement argument satisfies all following conditions: 

    
     * It points to: 

    
     * an object whose type is similar to `T`, if `T` is not an array type, or 
     * the first element of an object of a type similar to `T`, if `T` is an array type. 
     * It points to storage whose duration began within the evaluation of this expression. 
| (since C++26)  
  22. a [delete expression](delete.html "cpp/language/delete"), unless it deallocates a region of storage allocated within the evaluation of this expression(since C++20)
  23. (since C++20) Coroutines: an [await-expression](coroutines.html#co_await "cpp/language/coroutines") or a [yield-expression](coroutines.html#co_yield "cpp/language/coroutines")
  24. (since C++20) a [three-way comparison](operator_comparison.html#Three-way_comparison "cpp/language/operator comparison") when the result is unspecified 
  25. an equality or relational operator whose result is unspecified 
  26. (until C++14) an assignment or a compound assignment operator 
  27. (until C++26) a throw expression 
  28. (since C++26) a construction of an exception object, unless the exception object and all of its implicit copies created by invocations of [std::current_exception](../error/current_exception.html "cpp/error/current exception") or [std::rethrow_exception](../error/rethrow_exception.html "cpp/error/rethrow exception") are destroyed within the evaluation of this expression 
         
         constexpr void check(int i)
         {
             if (i < 0)
                 throw i;
         }
          
         constexpr bool is_ok(int i)
         {
             try {
                 check(i);
             } catch (...) {
                 return false;
             }
             return true;
         }
          
         constexpr bool always_throw()
         {
             throw 12;
             return true;
         }
          
         static_assert(is_ok(5)); // OK
         static_assert(!is_ok(-1)); // OK since C++26
         static_assert(always_throw()); // Error: uncaught exception

  29. an [asm-declaration](asm.html "cpp/language/asm")
  30. an invocation of the [va_arg](../utility/variadic/va_arg.html "cpp/utility/variadic/va arg") macro 
  31. a [`goto`](goto.html "cpp/language/goto") statement 
  32. a [`dynamic_cast`](dynamic_cast.html "cpp/language/dynamic cast") or [`typeid`](typeid.html "cpp/language/typeid") expression or [new expression](new.html "cpp/language/new")(since C++26) that would throw an exception where no definition of the exception type is reachable(since C++26)
  33. inside a lambda expression, a reference to this or to a variable defined outside that lambda, if that reference would be an odr-use 
         
         void g()
         {
             const int n = 0;
          
             constexpr int j = *&n; // OK: outside of a lambda-expression
          
             [=]
             {
                 constexpr int i = n;   // OK: 'n' is not odr-used and not captured here.
                 constexpr int j = *&n; // Ill-formed: '&n' would be an odr-use of 'n'.
             };
         }

note that if the odr-use takes place in a function call to a closure, it does not refer to this or to an enclosing variable, since it accesses a closure's data member instead 
         
         // OK: 'v' & 'm' are odr-used but do not occur in a constant-expression
         // within the nested lambda
         auto monad = [](auto v){ return [=]{ return v; }; };
         auto bind = [](auto m){ return [=](auto fvm){ return fvm(m()); }; };
          
         // OK to have captures to automatic objects created during constant expression evaluation.
         static_assert(bind(monad(2))(monad)() == monad(2)());

| (since C++17)  
---|---  



#### Extra requirements

Even if an expression E does not evaluate anything stated above, it is implementation-defined whether E is a core constant expression if evaluating E would result in [runtime-undefined behavior](ub.html "cpp/language/ub"). 

Even if an expression E does not evaluate anything stated above, it is unspecified whether E is a core constant expression if evaluating E would evaluate any of the following: 

  * An operation with undefined behavior in the [standard library](../standard_library.html "cpp/standard library"). 
  * An invocation of the [va_start](../utility/variadic/va_start.html "cpp/utility/variadic/va start") macro. 



For the purposes of determining whether an expression is a core constant expression, the evaluation of the body of a member function of [std::allocator](../memory/allocator.html)<T> is ignored if `T` is a literal type. 

For the purposes of determining whether an expression is a core constant expression, the evaluation of a call to a trivial copy/move constructor or copy/move assignment operator of a [union](union.html "cpp/language/union") is considered to copy/move the active member of the union, if any. 

For the purposes of determining whether an expression is a core constant expression, the evaluation of an identifier expression that names a [structured binding](structured_binding.html "cpp/language/structured binding") bd has the following semantics: 

  * If bd is an lvalue referring to the object bound to an invented reference ref, the behavior is as if ref were nominated. 
  * Otherwise, if bd names an array element, the behavior is that of evaluating e[i], where e is the name of the variable initialized from the initializer of the structured binding declaration, and i is the index of the element referred to by bd. 
  * Otherwise, if bd names a class member, the behavior is that of evaluating e.m, where e is the name of the variable initialized from the initializer of the structured binding declaration, and m is the name of the member referred to by bd. 

| (since C++26)  
---|---  
  
During the evaluation of the expression as a core constant expression, all identifier expressions and uses of *this that refer to an object or reference whose lifetime began outside the evaluation of the expression are treated as referring to a specific instance of that object of that object or reference whose lifetime and that of all subobjects (including all union members) includes the entire constant evaluation. 

  * For such an object that is not [usable in constant expressions](constant_expression.html#Usable_in_constant_expressions)(since C++20), the dynamic type of the object is _constexpr-unknown_. 
  * For such a reference that is not usable constant expression(since C++20)s, the reference is treated as binding to an unspecified object of the referenced type whose lifetime and that of all subobjects includes the entire constant evaluation and whose dynamic type is constexpr-unknown. 



### Integral constant expression

_Integral constant expression_ is an expression of integral or unscoped enumeration type implicitly converted to a prvalue, where the converted expression is a core constant expression. 

If an expression of class type is used where an integral constant expression is expected, the expression is [contextually implicitly converted](implicit_cast.html "cpp/language/implicit cast") to an integral or unscoped enumeration type. 

### Converted constant expression

A _converted constant expression_ of type `T` is an expression [implicitly converted](implicit_cast.html "cpp/language/implicit cast") to type `T`, where the converted expression is a constant expression, and the implicit conversion sequence contains only: 

    

  * constexpr [user-defined conversions](cast_operator.html "cpp/language/cast operator")
  * [lvalue-to-rvalue conversions](implicit_cast.html#Lvalue-to-rvalue_conversion "cpp/language/implicit conversion")
  * [integral promotions](implicit_cast.html#Integral_promotion "cpp/language/implicit conversion")
  * non-narrowing [integral conversions](implicit_cast.html#Integral_conversions "cpp/language/implicit conversion")
  * [floating-point promotions](implicit_cast.html#Floating-point_promotion "cpp/language/implicit conversion")
  * non-narrowing [floating-point conversions](implicit_cast.html#Floating-point_conversions "cpp/language/implicit conversion")



    

  * [array-to-pointer conversions](implicit_cast.html#Array-to-pointer_conversion "cpp/language/implicit conversion")
  * [function-to-pointer conversions](implicit_cast.html#Function-to-pointer_conversion "cpp/language/implicit conversion")
  * [function pointer conversions](implicit_cast.html#Function_pointer_conversions "cpp/language/implicit conversion")
  * [qualification conversions](implicit_cast.html#Qualification_conversions "cpp/language/implicit conversion")
  * [null pointer conversions](implicit_cast.html#Pointer_conversions "cpp/language/implicit conversion") from [std::nullptr_t](../types/nullptr_t.html "cpp/types/nullptr t")
  * [null member pointer conversions](implicit_cast.html#Pointer-to-member_conversions "cpp/language/implicit conversion") from [std::nullptr_t](../types/nullptr_t.html "cpp/types/nullptr t")


| (since C++17)  
---|---  
  
And if any [reference binding](reference_initialization.html "cpp/language/reference initialization") takes place, it can only be [direct binding](reference_initialization.html#Direct_binding "cpp/language/reference initialization"). 

The following contexts require a converted constant expression: 

  * the constant-expression of [case labels](switch.html#Labels "cpp/language/switch")
  * [enumerator initializers](enum.html "cpp/language/enum") when the underlying type is fixed 
  * integral and enumeration (until C++17)constant [template arguments](template_parameters.html "cpp/language/template parameters")



  * [array bounds](array.html "cpp/language/array")
  * the dimensions in [new expressions](new.html "cpp/language/new") other than the first 

| (since C++14)  
---|---  
  
  * the index of [pack indexing expression](pack_indexing.html "cpp/language/pack indexing") and [pack indexing specifier](pack_indexing.html "cpp/language/pack indexing")

| (since C++26)  
  
A _contextually converted constant expression of type bool_ is an expression, [contextually converted to bool](implicit_cast.html#Contextual_conversions "cpp/language/implicit cast"), where the converted expression is a constant expression and the conversion sequence contains only the conversions above. 

The following contexts require a contextually converted constant expression of type bool: 

  * [noexcept specifications](noexcept_spec.html "cpp/language/noexcept spec")



  * [static_assert declarations](static_assert.html "cpp/language/static assert")

| (until C++23)  
---|---  
  
  * [constexpr if-statements](if.html#Constexpr_if "cpp/language/if")

| (since C++17)  
(until C++23)  
  
  * [conditional explicit specifiers](explicit.html "cpp/language/explicit")

| (since C++20)  
  
  


###  Constituent entities

The _constituent values_ of an object obj are defined as follows: 

  * If obj has scalar type, the constituent value is the value of obj. 
  * Otherwise, the constituent values are the constituent values of any direct [subobjects](objects.html#Subobjects "cpp/language/object") of obj other than [inactive union members](union.html "cpp/language/union"). 

The _constituent references_ of an object obj include the following references: 

  * any direct members of obj that have reference type 
  * the constituent references of any direct subobjects of obj other than inactive union members 

The _constituent values_ and _constituent references_ of a variable var are defined as follows: 

  * If var declares an object, the constituent values and references are the constituent values and references of that object. 
  * If var declares a reference, the constituent reference is that reference. 

For any constituent reference ref of a variable var, if ref is bound to a temporary object or subobject thereof whose lifetime is extended to that of ref, the constituent values and references of that temporary object are also constituent values and references of var, recursively. 

###  Constexpr-representable entities

Objects with static storage duration is _constexpr-referenceable_ at any point in the program. An object obj with automatic storage duration is _constexpr-referenceable_ from a point `**P**` if the smallest [scope](scope.html "cpp/language/scope") enclosing the variable var and the smallest scope enclosing `**P**` that are the same function parameter scope that does not associate with the parameter list of a [requires expression](requires.html "cpp/language/requires"), where var is the variable corresponding to obj’s complete object or the variable to whose lifetime that of obj is [extended](reference_initialization.html#Lifetime_of_a_temporary "cpp/language/reference initialization"). An object or reference x is _constexpr-representable_ at a point `**P**` if all following conditions are satisfied: 

  * For each constituent value of x that points to an object obj, obj is constexpr-referenceable from `**P**`. 
  * For each constituent value of x that points past an object obj, obj is constexpr-referenceable from `**P**`. 
  * For each constituent reference of x that refers to an object obj, obj is constexpr-referenceable from `**P**`. 

| (since C++26)  
---|---  
  
###  Constant-initialized entities

|  A variable or temporary object obj is _constant-initialized_ if all following conditions are satisfied: 

  * Either it has an initializer, or its type is [const-default-constructible](default_initialization.html#Default-initialization_of_a_const_object "cpp/language/default initialization"). 
  * The [full-expression](expressions.html#Full-expressions "cpp/language/expressions") of its initialization is a constant expression in the context of requiring a constant expression, except that if obj is an object, that full-expression may also invoke [constexpr constructors](constexpr.html#constexpr_constructor "cpp/language/constexpr") for obj and its subobjects even if those objects are of non-literal class types. 

| (until C++26)  
---|---  
A variable var is _constant-initializable_ if all following conditions are satisfied: 

  * The [full-expression](expressions.html#Full-expressions "cpp/language/expressions") of its initialization is a constant expression in the context of requiring a constant expression, where all [contract assertions](contracts.html "cpp/language/contracts") use the “ignore” evaluation semantic. 
  * Immediately after the initializing declaration of var, the object or reference declared by var is constexpr-representable. 
  * If the object or reference x declared by var has static or thread storage duration, x is constexpr-representable at the nearest point whose immediate scope is a namespace scope that follows the initializing declaration of var. 

A constant-initializable variable is _constant-initialized_ if either it has an initializer, or its type is [const-default-constructible](default_initialization.html#Default-initialization_of_a_const_object "cpp/language/default initialization").  | (since C++26)  
  
###  Usable in constant expressions

A variable is _potentially-constant_ if it is a [constexpr variable](constexpr.html#constexpr_variable "cpp/language/constexpr") or it has reference or non-volatile const-qualified integral or enumeration type. 

A constant-initialized potentially-constant variable var is _usable in constant expressions_ at a point `**P**` if var’s initializing declaration `**D**` is reachable from `**P**` and any of the following conditions is satisfied: 

  * var is a constexpr variable. 
  * var is not initialized to a [TU-local](tu_local.html "cpp/language/tu local") value. 
  * `**P**` is in the same translation unit as `**D**`. 

An object or reference is _usable in constant expressions_ at a point `**P**` if it is one of the following entities: 

  * a variable that is usable in constant expressions at `**P**`
  * a temporary object of non-volatile const-qualified literal type whose lifetime is extended to that of a variable that is usable in constant expressions at `**P**`
  * a [template parameter object](template_parameters.html#template_parameter_object "cpp/language/template parameters")
  * a [string literal](string_literal.html "cpp/language/string literal") object 
  * a non-mutable subobject of any of the above 
  * a reference member of any of the above 

| (until C++26)  
---|---  
An object or reference is _potentially usable in constant expressions_ at a point `**P**` if it is one of the following entities: 

  * a variable that is usable in constant expressions at `**P**`
  * a temporary object of non-volatile const-qualified literal type whose lifetime is extended to that of a variable that is usable in constant expressions at `**P**`
  * a [template parameter object](template_parameters.html#template_parameter_object "cpp/language/template parameters")
  * a [string literal](string_literal.html "cpp/language/string literal") object 
  * a non-mutable subobject of any of the above 
  * a reference member of any of the above 

An object or reference is _usable in constant expressions_ at point `**P**` if it is an object or reference that is potentially usable in constant expressions at `**P**` and is constexpr-representable at `**P**`.  | (since C++26)  
  
###  Manifestly constant-evaluated expressions

The following expressions (including conversions to the destination type) are _manifestly constant-evaluated_ ﻿: 

  * [array bounds](array.html "cpp/language/array")
  * the dimensions in [new expressions](new.html "cpp/language/new") other than the first 
  * [bit-field](bit_field.html "cpp/language/bit field") lengths 
  * [enumeration](enum.html "cpp/language/enum") initializers 
  * [alignments](alignas.html "cpp/language/alignas")
  * the constant-expression of [case labels](switch.html#Labels "cpp/language/switch")
  * constant [template arguments](template_parameters.html "cpp/language/template parameters")
  * expressions in [noexcept specifications](noexcept_spec.html "cpp/language/noexcept spec")
  * expressions in [static_assert declarations](static_assert.html "cpp/language/static assert")
  * initializers of [constexpr variables](constexpr.html "cpp/language/constexpr")
  * conditions of [constexpr if-statements](if.html#Constexpr_if "cpp/language/if")
  * expressions in [conditional explicit specifiers](explicit.html "cpp/language/explicit")
  * [immediate invocations](consteval.html "cpp/language/consteval")
  * constraint expressions in [concept](constraints.html#Concepts "cpp/language/constraints") definitions, [nested requirements](constraints.html#Nested_requirements "cpp/language/constraints"), and [requires clauses](constraints.html#Requires_clauses "cpp/language/constraints"), when determining whether the constraints are satisfied 
  * initializers of variables with reference type or const-qualified integral or enumeration type, but only if the initializers are constant expressions 
  * initializers of static and thread local variables, but only if all subexpressions of the initializers (including constructor calls and implicit conversions) are constant expressions (that is, if the initializers are [constant initializers](constant_initialization.html "cpp/language/constant initialization")) 



Whether an evaluation occurs in a manifestly constant-evaluated context can be detected by [std::is_constant_evaluated](../types/is_constant_evaluated.html "cpp/types/is constant evaluated") and [`if consteval`](if.html#Consteval_if "cpp/language/if")(since C++23). 

(since C++20)  
  
### Functions and variables needed for constant evaluation

Following expressions or conversions are _potentially constant evaluated_ : 

  * manifestly constant-evaluated expressions 
  * potentially-evaluated expressions 
  * immediate subexpressions of a [braced-enclosed initializer list](initialization.html "cpp/language/initialization") (constant evaluation may be necessary to determine whether [a conversion is narrowing](list_initialization.html#Narrowing_conversions "cpp/language/list initialization")) 
  * address-of expressions that occur within a [templated entity](templates.html#Templated_entity "cpp/language/templates") (constant evaluation may be necessary to determine whether such an expression is [value-dependent](dependent_name.html#Value-dependent_expressions "cpp/language/dependent name")) 
  * subexpressions of one of the above that are not a subexpression of a nested [unevaluated operand](expressions.html#Unevaluated_expressions "cpp/language/expressions")



A function is _needed for constant evaluation_ if it is a constexpr function and [named by](definition.html#Naming_a_function "cpp/language/definition") an expression that is potentially constant evaluated. 

A variable is _needed for constant evaluation_ if it is either a constexpr variable or is of non-volatile const-qualified integral type or of reference type and the [identifier expression](expressions.html#Primary_expressions "cpp/language/expressions") that denotes it is potentially constant evaluated. 

Definition of a defaulted function and instantiation of a [function template](function_template.html "cpp/language/function template") specialization or [variable template](variable_template.html "cpp/language/variable template") specialization(since C++14) are triggered if the function or variable(since C++14) is needed for constant evaluation. 

### Constant subexpression

A _constant subexpression_ is an expression whose evaluation as [subexpression](expressions.html#Full-expressions "cpp/language/expressions") of an expression e would not prevent e from being a [core constant expression](constant_expression.html#Core_constant_expressions), where e is not any of the following expressions: 

  * [throw expression](throw.html "cpp/language/throw")



  * [yield expression](coroutines.html "cpp/language/coroutines")

| (since C++20)  
---|---  
  
  * [assignment expression](operator_assignment.html "cpp/language/operator assignment")
  * [comma expression](operator_other.html#Built-in_comma_operator "cpp/language/operator other")



### Notes

Feature-test macro  | Value | Std | Feature   
---|---|---|---  
[`__cpp_constexpr_in_decltype`](../experimental/feature_test.html#cpp_constexpr_in_decltype "cpp/feature test") | [`201711L`](../compiler_support/20.html#cpp_constexpr_in_decltype_201711L "cpp/compiler support/20") | (C++20)  
(DR11) | Generation of function and variable definitions when [needed for constant evaluation](constant_expression.html#Functions_and_variables_needed_for_constant_evaluation)  
[`__cpp_constexpr_dynamic_alloc`](../experimental/feature_test.html#cpp_constexpr_dynamic_alloc "cpp/feature test") | [`201907L`](../compiler_support/20.html#cpp_constexpr_dynamic_alloc_201907L "cpp/compiler support/20") | (C++20) | Operations for dynamic storage duration in constexpr functions   
[`__cpp_constexpr`](../experimental/feature_test.html#cpp_constexpr "cpp/feature test") | [`202306L`](../compiler_support/26.html#cpp_constexpr_202306L "cpp/compiler support/26") | (C++26) | constexpr cast from void*: towards constexpr type-erasure   
[`202406L`](../compiler_support/26.html#cpp_constexpr_202406L "cpp/compiler support/26") | (C++26) | constexpr placement new and new[]  
[`__cpp_constexpr_exceptions`](../experimental/feature_test.html#cpp_constexpr_exceptions "cpp/feature test") | [`202411L`](../compiler_support/26.html#cpp_constexpr_exceptions_202411L "cpp/compiler support/26") | (C++26) | constexpr exceptions: [[1]](constant_expression.html#P3068_1), [[2]](constant_expression.html#P3068_2)  
  
### Example

| This section is incomplete  
Reason: no example   
---|---  
  
### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[CWG 94](https://cplusplus.github.io/CWG/issues/94.html) | C++98  | arithmetic constant expressions could not  
involve variables and static data members  | they can   
[CWG 366](https://cplusplus.github.io/CWG/issues/366.html) | C++98  | expressions involving string literals  
could be integral constant expressions  | they are not   
[CWG 457](https://cplusplus.github.io/CWG/issues/457.html) | C++98  | expressions involving volatile variables  
could be integral constant expressions  | they are not   
[CWG 1293](https://cplusplus.github.io/CWG/issues/1293.html) | C++11  | it was unclear whether string literals  
are usable in constant expressions  | they are usable   
[CWG 1311](https://cplusplus.github.io/CWG/issues/1311.html) | C++11  | volatile glvalues could be used in constant expressions  | prohibited   
[CWG 1312](https://cplusplus.github.io/CWG/issues/1312.html) | C++11  | reinterpret_cast is prohibited in constant expressions,  
but casting to and from void* could achieve the same effect  | prohibited conversions  
from type _cv_ void* to  
a pointer-to-object type   
[CWG 1313](https://cplusplus.github.io/CWG/issues/1313.html) | C++11  | undefined behavior was permitted;  
all pointer subtraction was prohibited  | UB prohibited; same-array  
pointer subtraction OK   
[CWG 1405](https://cplusplus.github.io/CWG/issues/1405.html) | C++11  | for objects that are usable in constant expressions,  
their mutable subobjects were also usable  | they are not usable   
[CWG 1454](https://cplusplus.github.io/CWG/issues/1454.html) | C++11  | passing constants through constexpr  
functions via references was not allowed  | allowed   
[CWG 1455](https://cplusplus.github.io/CWG/issues/1455.html) | C++11  | converted constant expressions could only be prvalues  | can be lvalues   
[CWG 1456](https://cplusplus.github.io/CWG/issues/1456.html) | C++11  | an address constant expression could not  
designate the address one past the end of an array  | allowed   
[CWG 1535](https://cplusplus.github.io/CWG/issues/1535.html) | C++11  | a typeid expression whose operand is of a  
polymorphic class type was not a core constant  
expression even if no runtime check is involved  | the operand constraint  
is limited to glvalues of  
polymorphic class types   
[CWG 1581](https://cplusplus.github.io/CWG/issues/1581.html) | C++11  | functions needed for constant evaluation were  
not required to be defined or instantiated  | required   
[CWG 1613](https://cplusplus.github.io/CWG/issues/1613.html) | C++11  | core constant expressions could evaluate any  
odr-used reference inside lambda expressions  | some references could  
not be evaluated   
[CWG 1694](https://cplusplus.github.io/CWG/issues/1694.html) | C++11  | binding the value of a temporary to a static storage  
duration reference was a constant expression  | it is not a  
constant expression   
[CWG 1872](https://cplusplus.github.io/CWG/issues/1872.html) | C++11  | core constant expressions could invoke constexpr function template  
instantiations that do not satisfy the constexpr function requirements  | such instantiations  
cannot be invoked   
[CWG 1952](https://cplusplus.github.io/CWG/issues/1952.html) | C++11  | standard library undefined behaviors  
were required to be diagnosed  | unspecified whether  
they are diagnosed   
[CWG 2022](https://cplusplus.github.io/CWG/issues/2022.html) | C++98  | the determination of constant expression might  
depend on whether copy elision is performed  | assume that copy elision  
is always performed   
[CWG 2126](https://cplusplus.github.io/CWG/issues/2126.html) | C++11  | constant initialized lifetime-extended temporaries of const-  
qualified literal types were not usable in constant expressions  | usable   
[CWG 2129](https://cplusplus.github.io/CWG/issues/2129.html) | C++11  | integer literals were not constant expressions  | they are   
[CWG 2167](https://cplusplus.github.io/CWG/issues/2167.html) | C++11  | non-member references local to an evaluation  
made the evaluation non-constexpr  | non-member  
references allowed   
[CWG 2278](https://cplusplus.github.io/CWG/issues/2278.html) | C++98  | the resolution of [CWG issue 2022](https://cplusplus.github.io/CWG/issues/2022.html) was not implementable  | assume that copy elision  
is never performed   
[CWG 2299](https://cplusplus.github.io/CWG/issues/2299.html) | C++14  | it was unclear whether macros in [`<cstdarg>`](../header/cstdarg.html "cpp/header/cstdarg")  
can be used in constant evaluation  | `va_arg` forbidden,  
`va_start` unspecified   
[CWG 2400](https://cplusplus.github.io/CWG/issues/2400.html) | C++11  | invoking a constexpr virtual function on an object not usable  
in constant expressions and whose lifetime began outside the  
expression containing the invocation could be a constant expression  | it is not a  
constant expression   
[CWG 2490](https://cplusplus.github.io/CWG/issues/2490.html) | C++20  | (pseudo) destructor calls lacked  
restrictions in constant evaluation  | restriction added   
[CWG 2552](https://cplusplus.github.io/CWG/issues/2552.html) | C++23  | when evaluating a core constant expression, the control  
flow could not pass through a declaration of a non-block variable  | it can   
[CWG 2558](https://cplusplus.github.io/CWG/issues/2558.html) | C++11  | an indeterminate value could be a constant expression  | not a constant expression   
[CWG 2647](https://cplusplus.github.io/CWG/issues/2647.html) | C++20  | variables of volatile-qualified types could be potentially-constant  | they are not   
[CWG 2763](https://cplusplus.github.io/CWG/issues/2763.html) | C++11  | the violation of `[[[noreturn](attributes/noreturn.html "cpp/language/attributes/noreturn")]]` was not required  
to be detected during constant evaluation  | required   
[CWG 2851](https://cplusplus.github.io/CWG/issues/2851.html) | C++11  | converted constant expressions did  
not allow floating-point conversions  | allow non-narrowing  
floating-point conversions   
[CWG 2907](https://cplusplus.github.io/CWG/issues/2907.html) | C++11  | core constant expressions could not apply  
lvalue-to-rvalue conversions to [std::nullptr_t](../types/nullptr_t.html "cpp/types/nullptr t") glvalues  | can apply such  
conversions   
[CWG 2909](https://cplusplus.github.io/CWG/issues/2909.html) | C++20  | a variable without an initializer could only be  
constant-initialized if its default-initialization  
results in some initialization being performed  | can only be constant-  
initialized if its type is  
const-default-initializable   
[CWG 2924](https://cplusplus.github.io/CWG/issues/2924.html) | C++11  
C++23  | it was unspecified whether an expression violating  
the constraints of `[[[noreturn](attributes/noreturn.html "cpp/language/attributes/noreturn")]]` (C++11) or  
`[[[assume](attributes/assume.html "cpp/language/attributes/assume")]]` (C++23) is a core constant expression  | it is  
implementation-defined   
[P2280R4](https://wg21.link/P2280R4) | C++11  | evaluating an expression containing an identifier expression  
or *this that refers to an object or reference whose lifetime  
began outside this evaluation is not a constant expression  | it can be a  
constant expression   
  
### See also

[ `constexpr` specifier](constexpr.html "cpp/language/constexpr")(C++11) |  specifies that the value of a variable or function can be computed at compile time  
---|---  
[ is_literal_type](../types/is_literal_type.html "cpp/types/is literal type")(C++11)(deprecated in C++17)(removed in C++20) |  checks if a type is a literal type   
(class template)   
[C documentation](../../c/language/constant_expression.html "c/language/constant expression") for Constant expressions
  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
