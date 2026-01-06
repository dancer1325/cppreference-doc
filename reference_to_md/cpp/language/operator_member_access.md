

  
  
  
  
  

  
  
  

---  
  

---  
  


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
**Member access operators**  
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
  


Accesses a member of its operand. 

Operator name  |  Syntax  | [Overloadable](operators.html "cpp/language/operators") | Prototype examples (for class T)   
---|---|---|---  
Inside class definition  | Outside class definition   
subscript  | a[b] | Yes  | R& T::operator[](S b); |  N/A  
a[...] (since C++23) | R& T::operator[](...);  
indirection  | *a | Yes  | R& T::operator*(); | R& operator*(T a);  
address-of  | &a | Yes  | R* T::operator&(); | R* operator&(T a);  
member of object  | a.b |  No  |  N/A |  N/A  
member of pointer  | a->b | Yes  | R* T::operator->(); |  N/A  
pointer to member of object  | a.*b |  No  |  N/A |  N/A  
pointer to member of pointer  | a->*b | Yes  | R& T::operator->*(S b); | R& operator->*(T a, S b);  
  
    **Notes**  


  * As with most user-defined overloads, return types should match return types provided by the built-in operators so that [the user-defined operators](operators.html "cpp/language/operators") can be used in the same manner as the built-ins. However, in a user-defined operator overload, any type can be used as return type (including void). One exception is operator->, which must return a pointer or another class with overloaded operator-> to be realistically usable. 

  
  
## Contents

  * [1 Explanation](operator_member_access.html#Explanation)
    * [1.1 Built-in subscript operator](operator_member_access.html#Built-in_subscript_operator)
    * [1.2 Built-in indirection operator](operator_member_access.html#Built-in_indirection_operator)
    * [1.3 Built-in address-of operator](operator_member_access.html#Built-in_address-of_operator)
    * [1.4 Built-in member access operators](operator_member_access.html#Built-in_member_access_operators)
    * [1.5 Built-in pointer-to-member access operators](operator_member_access.html#Built-in_pointer-to-member_access_operators)
  * [2 Standard library](operator_member_access.html#Standard_library)
  * [3 Notes](operator_member_access.html#Notes)
  * [4 Defect reports](operator_member_access.html#Defect_reports)
  * [5 See also](operator_member_access.html#See_also)

  
---  
  
### Explanation

Built-in _subscript_ operator provides access to an object pointed-to by the [pointer](pointer.html "cpp/language/pointer") or [array](array.html "cpp/language/array") operand. 

Built-in _indirection_ operator provides access to an object or function pointed-to by the pointer operand. 

Built-in _address-of_ operator creates a pointer pointing to the object or function operand. 

_Member of object_ and _pointer to member of object_ operators provide access to a data member or member function of the object operand. 

Built-in _member of pointer_ and _pointer to member of pointer_ operators provide access to a data member or member function of the class pointed-to by the pointer operand. 

#### Built-in subscript operator

The subscript operator expressions have the form   
  
---  
expr1 ﻿`**[**` expr2 ﻿`**]**` |  (1)  |   
expr1 ﻿`**[{**` expr ﻿`, ...``**}]**` |  (2)  |  (since C++11)  
expr1 ﻿`**[**` expr2 ﻿`,` expr ﻿`, ...``**]**` |  (3)  |  (since C++23)  
  
1) For the built-in operator, one of the expressions (either expr1 or expr2) must be a glvalue of type “array of `T`” or a prvalue of type “pointer to `T`”, while the other expression (expr2 or expr1, respectively) must be a prvalue of unscoped enumeration or integral type. The result of this expression has the type `T`. expr2 cannot be an unparenthesized [comma expression](operator_other.html#Built-in_comma_operator "cpp/language/operator other").(since C++23)

2) The form with brace-enclosed list inside the square brackets is only used to call an overloaded operator[].

3) The form with comma-separated expression list inside the square brackets is only used to call an overloaded operator[].

The built-in subscript expression E1[E2] is exactly identical to the expression *(E1 + E2) except for its value category (see below)  and [evaluation order](eval_order.html "cpp/language/eval order")(since C++17): the pointer operand (which may be a result of array-to-pointer conversion, and which must point to an element of some array or one past the end) is adjusted to point to another element of the same array, following the rules of [pointer arithmetic](operator_arithmetic.html "cpp/language/operator arithmetic"), and is then dereferenced. 

When applied to an array, the subscript expression is an [lvalue](value_category.html "cpp/language/value category") if the array is an lvalue, and an [xvalue](value_category.html "cpp/language/value category") if it isn't(since C++11). 

When applied to a pointer, the subscript expression is always an lvalue. 

The type `T` is not allowed to be an [incomplete type](incomplete_type.html "cpp/language/incomplete type"), even if the size or internal structure of `T` is never used, as in &x[0]. 

Using an unparenthesized [comma expression](operator_other.html#Built-in_comma_operator "cpp/language/operator other") as second (right) argument of a subscript operator is deprecated. For example, a[b, c] is deprecated and a[(b, c)] is not.  | (since C++20)  
(until C++23)  
---|---  
An unparenthesized [comma expression](operator_other.html#Built-in_comma_operator "cpp/language/operator other") cannot be second (right) argument of a subscript operator. For example, a[b, c] is either ill-formed or equivalent to a.operator[](b, c). Parentheses are needed to for using a comma expression as the subscript, e.g., a[(b, c)].  | (since C++23)  
  
In [overload resolution against user-defined operators](overload_resolution.html#Call_to_an_overloaded_operator "cpp/language/overload resolution"), for every object type `T` (possibly cv-qualified), the following function signature participates in overload resolution: 

T& operator[](T*, [std::ptrdiff_t](../types/ptrdiff_t.html)); |  |   
---|---|---  
T& operator[]([std::ptrdiff_t](../types/ptrdiff_t.html), T*); |  |   
| |   
  
Run this code
    
    
    #include <iostream>
    #include <map>
    #include <string>
     
    int main()
    {
        int a[4] = {1, 2, 3, 4};
        int* p = &a[2];
        [std::cout](../io/cout.html) << p[1] << p[-1] << 1[p] << (-1)[p] << '\n';
     
        [std::map](../container/map.html)<[std::pair](../utility/pair.html)<int, int>, [std::string](../string/basic_string.html)> m;
        m[{1, 2}] = "abc"; // uses the [{...}] version
    }

Output: 
    
    
    4242

#### Built-in indirection operator

The indirection operator expressions have the form   
  
---  
`*****` expr |  |   
  
The operand of the built-in indirection operator must be pointer to object or a pointer to function, and the result is the lvalue referring to the object or function to which expr points. If expr does not actually points to an object or function, the behavior is undefined (except for the case specified by [`typeid`](typeid.html "cpp/language/typeid")). 

A pointer to (possibly [cv](cv.html "cpp/language/cv")-qualified) void cannot be dereferenced. Pointers to other incomplete types can be dereferenced, but the resulting lvalue can only be used in contexts that allow an lvalue of incomplete type, e.g. when initializing a reference. 

In [overload resolution against user-defined operators](overload_resolution.html#Call_to_an_overloaded_operator "cpp/language/overload resolution"), for every type `T` that is either object type (possibly cv-qualified) or function type (not const- or ref-qualified), the following function signature participates in overload resolution: 

T& operator*(T*); |  |   
---|---|---  
| |   
  
Run this code
    
    
    #include <iostream>
     
    int f() { return 42; }
     
    int main()
    {
        int n = 1;
        int* pn = &n;
     
        int& r = *pn; // lvalue can be bound to a reference
        int m = *pn;  // indirection + lvalue-to-rvalue conversion
     
        int (*fp)() = &f;
        int (&fr)() = *fp; // function lvalue can be bound to a reference
     
        [](...){}(r, m, fr); // removes possible "unused variable" warnings
    }

#### Built-in address-of operator

The address-of operator expressions have the form   
  
---  
`**&**` expr |  (1)  |   
`**&**` class ﻿`**::**` member |  (2)  |   
  
1) If the operand is an lvalue expression of some object or function type `T`, `operator&` creates and returns a prvalue of type `T*`, with the same cv qualification, that is pointing to the object or function designated by the operand. If the operand has incomplete type, the pointer can be formed, but if that incomplete type happens to be a class that defines its own operator&, it is unspecified whether the built-in or the overload is used. For the operands of type with user-defined operator&, [std::addressof](../memory/addressof.html "cpp/memory/addressof") may be used to obtain the true pointer. Note that, unlike C99 and later C versions, there's no special case for the unary operator& applied to the result of the unary operator*.

If the operand is the name of an overloaded function, the address may be taken only if the overload can be resolved due to context. See [Address of an overloaded function](overloaded_address.html "cpp/language/overloaded address") for details.  If expr names an [explicit object member function](member_functions.html "cpp/language/member functions"), expr must be a [qualified identifier](name.html#Qualified_identifiers "cpp/language/identifiers"). Applying `&` to an unqualified identifier naming an explicit object member function is ill-formed.  | (since C++23)  
---|---  
  
2) If the operand is a qualified name of a non-static or [variant](union.html#Union-like_classes "cpp/language/union") member other than an [explicit object member function](member_functions.html "cpp/language/member functions")(since C++23), e.g. &C::member, the result is a prvalue [pointer to member function](pointer.html#Pointers_to_member_functions "cpp/language/pointer") or [pointer to data member](pointer.html#Pointers_to_data_members "cpp/language/pointer") of type `T` in class `C`. Note that neither &member nor C::member nor even &(C::member) may be used to initialize a pointer to member.

In [overload resolution against user-defined operators](overload_resolution.html#Call_to_an_overloaded_operator "cpp/language/overload resolution"), this operator does not introduce any additional function signatures: built-in address-of operator does not apply if there exists an overloaded operator& that is a [viable function](overload_resolution.html#Viable_functions "cpp/language/overload resolution"). 

Run this code
    
    
    void f(int) {}
    void f(double) {}
     
    struct A { int i; };
    struct B { void f(); };
     
    int main()
    {
        int n = 1;
        int* pn = &n;    // pointer
        int* pn2 = &*pn; // pn2 == pn
     
        int A::* mp = &A::i;      // pointer to data member
        void (B::*mpf)() = &B::f; // pointer to member function
     
        void (*pf)(int) = &f; // overload resolution due to initialization context
    //  auto pf2 = &f; // error: ambiguous overloaded function type
        auto pf2 = static_cast<void (*)(int)>(&f); // overload resolution due to cast
    }

#### Built-in member access operators

The member access operator expressions have the form   
  
---  
expr ﻿`**.template**`(optional) id-expr |  (1)  |   
expr ﻿`**- >template**`(optional) id-expr |  (2)  |   
expr ﻿`**.**` pseudo-destructor |  (3)  |   
expr ﻿`**- >**`pseudo-destructor |  (4)  |   
  
1) The expr must be an expression of [complete](incomplete_type.html "cpp/language/incomplete type") class type `T`.

If id-expr names a [static member](static.html "cpp/language/static") or [enumerator](enum.html "cpp/language/enum"), expr is a [discarded-value expression](expressions.html#Discarded-value_expressions "cpp/language/expressions").

2) The expr must be an expression of pointer to complete class type `T*`.

3,4) The expr must be an expression of scalar type (see below).

id-expr is a name of (formally, an [identifier expression](name.html#In_expressions "cpp/language/identifiers") that names) a data member or member function of `T` or of an unambiguous and accessible base class `B` of `T` (e.g. E1.E2 or E1->E2), optionally [qualified](name.html#Qualified_identifiers "cpp/language/identifiers") (e.g. E1.B::E2 or E1->B::E2), optionally using [template disambiguator](dependent_name.html#template_disambiguator "cpp/language/dependent name") (e.g. E1.template E2 or E1->template E2). 

If a user-defined operator-> is called, operator-> is called again on the resulting value, recursively, until an operator-> is reached that returns a plain pointer. After that, built-in semantics are applied to that pointer. 

The expression E1->E2 is exactly equivalent to (*E1).E2 for built-in types; that is why the following rules address only E1.E2. 

In the expression E1.E2: 

1) If E2 is a [static data member](static.html "cpp/language/static"): 

  * If E2 is of reference type `T&` or `T&&`(since C++11), the result is an lvalue of type `T` designating the object or function to which the reference is bound. 
  * Otherwise, given the type of E2 as `T`, the result is an lvalue of type `T` designating that static data member.



Essentially, E1 is evaluated and discarded in both cases.

2) If E2 is a [non-static data member](data_members.html "cpp/language/data members"): 

  * If E2 is of reference type `T&` or `T&&`(since C++11), the result is an lvalue of type `T` designating the object or function to which the corresponding reference member of E1 is bound. 
  * Otherwise, if E1 is an lvalue, the result is an lvalue designating that non-static data member of E1. 
  * Otherwise (if E1 is an rvalue(until C++17)xvalue (which may be [materialized](implicit_cast.html#Temporary_materialization "cpp/language/implicit conversion") from prvalue)(since C++17)), the result is an rvalue(until C++11)xvalue(since C++11) designating that non-static data member of E1.



If E2 is not a [mutable](cv.html#mutable_specifier "cpp/language/cv") member, the [cv-qualification](cv.html "cpp/language/cv") of the result is the union of the cv-qualifications of E1 and E2, otherwise (if E2 is a mutable member), it is the union of the volatile-qualifications of E1 and E2.

3) If E2 is an overload set (of one or more [static member functions](static.html "cpp/language/static") and [non-static member functions](member_functions.html "cpp/language/member functions")), E1.E2 must be the (possibly-parenthesized) left-hand operand of a [member function call operator](operator_other.html#Built-in_function_call_operator "cpp/language/operator other"), and [function overload resolution](overload_resolution.html#Call_to_a_named_function "cpp/language/overload resolution") is used to select the function to which E2 refers, after that: 

  * If E2 is a [static member function](static.html "cpp/language/static"), the result is an lvalue designating that static member function. Essentially, E1 is evaluated and discarded in this case. 
  * Otherwise (E2 is a [non-static member function](member_functions.html "cpp/language/member functions")), the result is a prvalue designating that non-static member function of E1.



4) If E2 is a member enumerator, given the type of E2 as `T`, the result is an rvalue(until C++11)a prvalue(since C++11) of type `T` whose value is the value of the enumerator.

5) If E2 is a [nested type](nested_classes.html "cpp/language/nested classes"), the program is ill-formed.

6) If E1 has a [ScalarType](../named_req/ScalarType.html "cpp/named req/ScalarType") and E2 is a `**~**` followed by the [type name](type-id.html#Type_naming "cpp/language/type") or [decltype specifier](decltype.html "cpp/language/decltype") designating the same type (minus cv-qualifications), optionally [qualified](name.html#Qualified_identifiers "cpp/language/identifiers"), the result is a special kind of prvalue that can only be used as the left-hand operand of a function call operator, and for no other purpose

The resulting function call expression is called _pseudo destructor call_. It takes no arguments, returns void, evaluates E1, and ends the lifetime of its result object. This is the only case where the left-hand operand of operator. has non-class type. Allowing pseudo destructor call makes it possible to write code without having to know if a destructor exists for a given type.

operator. cannot be overloaded, and for operator->, in [overload resolution against user-defined operators](overload_resolution.html#Call_to_an_overloaded_operator "cpp/language/overload resolution"), the built-in operator does not introduce any additional function signatures: built-in operator-> does not apply if there exists an overloaded operator-> that is a [viable function](overload_resolution.html#Viable_functions "cpp/language/overload resolution"). 

Run this code
    
    
    #include <cassert>
    #include <iostream>
    #include <memory>
     
    struct P
    {
        template<typename T>
        static T* ptr() { return new T; }
    };
     
    template<typename T>
    struct A
    {
        A(int n): n(n) {}
     
        int n;
        static int sn;
     
        int f() { return 10 + n; }
        static int sf() { return 4; }
     
        class B {};
        enum E {RED = 1, BLUE = 2};
     
        void g()
        {
            typedef int U;
     
            // keyword template needed for a dependent template member
            int* p = T().template ptr<U>();
            p->~U(); // U is int, calls int's pseudo destructor
            delete p;
        }
    };
     
    template<>
    int A<P>::sn = 2;
     
    struct UPtrWrapper
    {
        [std::unique_ptr](../memory/unique_ptr.html)<[std::string](../string/basic_string.html)> uPtr;
        [std::unique_ptr](../memory/unique_ptr.html)<[std::string](../string/basic_string.html)>& operator->() { return uPtr; }
    };
     
    int main()
    {
        A<P> a(1);
        [std::cout](../io/cout.html) << a.n << ' '
                  << a.sn << ' '   // A::sn also works
                  << a.f() << ' ' 
                  << a.sf() << ' ' // A::sf() also works
    //            << &a.f << ' '   // error: ill-formed if a.f is not the
                                   // left-hand operand of operator()
    //            << a.B << ' '    // error: nested type not allowed
                  << a.RED << ' '; // enumerator
     
        UPtrWrapper uPtrWrap{[std::make_unique](../memory/unique_ptr/make_unique.html)<[std::string](../string/basic_string.html)>("wrapped")};
        [assert](../error/assert.html)(uPtrWrap->data() == uPtrWrap.operator->().operator->()->data());
    }

Output: 
    
    
    1 2 11 4 1

If E2 is a non-static member and the result of E1 is an object whose type is not [similar](implicit_cast.html#Similar_types "cpp/language/implicit conversion") to the type of E1, the behavior is undefined: 
    
    
    struct A { int i; };
    struct B { int j; };
    struct D : A, B {};
     
    void f()
    {
        D d;
        static_cast<B&>(d).j;      // OK, object expression designates the B subobject of d
        reinterpret_cast<B&>(d).j; // undefined behavior
    }

#### Built-in pointer-to-member access operators

The member access operator expressions through pointers to members have the form   
  
---  
lhs ﻿`**.***` rhs |  (1)  |   
lhs ﻿`**- >***`rhs |  (2)  |   
  
1) lhs must be an expression of class type `T`.

2) lhs must be an expression of type pointer to class type `T*`.

rhs must be an rvalue of type pointer to member ([data](pointer.html#Pointers_to_data_members "cpp/language/pointer") or [function](pointer.html#Pointers_to_member_functions "cpp/language/pointer")) of `T` or pointer to member of an unambiguous and accessible base class `B` of `T`. 

The expression E1->*E2 is exactly equivalent to (*E1).*E2 for built-in types; that is why the following rules address only E1.*E2. 

In the expression E1.*E2: 

1) if E2 is a pointer to data member, 

  * if E1 is an lvalue, the result is an lvalue designating that data member, 
  * otherwise (if E1 is an rvalue(until C++17)xvalue (which may be [materialized](implicit_cast.html#Temporary_materialization "cpp/language/implicit conversion") from prvalue)(since C++17)), the result is an rvalue(until C++11)xvalue(since C++11) designating that data member;



2) if E2 is a pointer to member function, the result is a special kind of prvalue designating that member function that can only be used as the left-hand operand of a member function call operator, and for no other purpose;

3) cv-qualification rules are the same as for member of object operator, with one additional rule: a pointer to member that refers to a mutable member cannot be used to modify that member in a const object;

4) if E2 is a null pointer-to-member value, the behavior is undefined;

5) if the result E1 is an object such that its type is not [similar](implicit_cast.html#Similar_types "cpp/language/implicit conversion") to the type of E1, or its [most derived object](objects.html#Subobjects "cpp/language/object") does not contain the member to which E2 refers, the behavior is undefined;

6) if E1 is an rvalue and E2 points to a member function with ref-qualifier `**&**`, the program is ill-formed unless the member function has the cv-qualifier const but not volatile(since C++20);

7) if E1 is an lvalue and E2 points to a member function with ref-qualifier `**& &**`, the program is ill-formed. | (since C++11)  
---|---  
  
In [overload resolution against user-defined operators](overload_resolution.html#Call_to_an_overloaded_operator "cpp/language/overload resolution"), for every combination of types `D`, `B`, `R`, where class type `B` is either the same class as `D` or an unambiguous and accessible base class of `D`, and `R` is either an object or function type, the following function signature participates in overload resolution: 

R& operator->*(D*, R B::*); |  |   
---|---|---  
| |   
  
where both operands may be cv-qualified, in which case the return type's cv-qualification is the union of the cv-qualification of the operands. 

Run this code
    
    
    #include <iostream>
     
    struct S
    {
        S(int n) : mi(n) {}
        mutable int mi;
        int f(int n) { return mi + n; }
    };
     
    struct D : public S
    {
        D(int n) : S(n) {}
    };
     
    int main()
    {
        int S::* pmi = &S::mi;
        int (S::* pf)(int) = &S::f;
     
        const S s(7);
    //  s.*pmi = 10; // error: cannot modify through mutable
        [std::cout](../io/cout.html) << s.*pmi << '\n';
     
        D d(7); // base pointers work with derived object
        D* pd = &d;
        [std::cout](../io/cout.html) << (d.*pf)(7) << ' '
                  << (pd->*pf)(8) << '\n';
    }

Output: 
    
    
    7
    14 15

### Standard library

Subscript operator is overloaded by many standard container classes: 

[ operator[]](../utility/bitset/operator_at.html "cpp/utility/bitset/operator at") |  accesses specific bit   
(public member function of `std::bitset<N>`)   
---|---  
[ operator[]](../memory/unique_ptr/operator_at.html "cpp/memory/unique ptr/operator at") |  provides indexed access to the managed array   
(public member function of `std::unique_ptr<T,Deleter>`)   
[ operator[]](../string/basic_string/operator_at.html "cpp/string/basic string/operator at") |  accesses the specified character   
(public member function of `std::basic_string<CharT,Traits,Allocator>`)   
[ operator[]](../container/array/operator_at.html "cpp/container/array/operator at") |  access specified element   
(public member function of `std::array<T,N>`)   
[ operator[]](../container/deque/operator_at.html "cpp/container/deque/operator at") |  access specified element   
(public member function of `std::deque<T,Allocator>`)   
[ operator[]](../container/vector/operator_at.html "cpp/container/vector/operator at") |  access specified element   
(public member function of `std::vector<T,Allocator>`)   
[ operator[]](../container/map/operator_at.html "cpp/container/map/operator at") |  access or insert specified element   
(public member function of `std::map<Key,T,Compare,Allocator>`)   
[ operator[]](../container/unordered_map/operator_at.html "cpp/container/unordered map/operator at") |  access or insert specified element   
(public member function of `std::unordered_map<Key,T,Hash,KeyEqual,Allocator>`)   
[ operator[]](../iterator/reverse_iterator/operator_at.html "cpp/iterator/reverse iterator/operator at") |  accesses an element by index   
(public member function of `std::reverse_iterator<Iter>`)   
[ operator[]](../iterator/move_iterator/operator_at.html "cpp/iterator/move iterator/operator at") |  accesses an element by index   
(public member function of `std::move_iterator<Iter>`)   
[ operator[]](../numeric/valarray/operator_at.html "cpp/numeric/valarray/operator at") |  get/set valarray element, slice, or mask   
(public member function of `std::valarray<T>`)   
[ operator[]](../regex/match_results/operator_at.html "cpp/regex/match results/operator at") |  returns specified sub-match   
(public member function of `std::match_results<BidirIt,Alloc>`)   
  
The indirection and member operators are overloaded by many iterators and smart pointer classes: 

[ operator*operator->](../memory/unique_ptr/operator*.html "cpp/memory/unique ptr/operator*") |  dereferences pointer to the managed object   
(public member function of `std::unique_ptr<T,Deleter>`)   
---|---  
[ operator*operator->](../memory/shared_ptr/operator*.html "cpp/memory/shared ptr/operator*") |  dereferences the stored pointer   
(public member function of `std::shared_ptr<T>`)   
[ operator*operator->](../memory/auto_ptr/operator*.html "cpp/memory/auto ptr/operator*") |  accesses the managed object   
(public member function of `std::auto_ptr<T>`)   
[ operator*](../memory/raw_storage_iterator/operator*.html "cpp/memory/raw storage iterator/operator*") |  dereferences the iterator   
(public member function of `std::raw_storage_iterator<OutputIt,T>`)   
[ operator*operator->](../iterator/reverse_iterator/operator*.html "cpp/iterator/reverse iterator/operator*") |  dereferences the decremented underlying iterator   
(public member function of `std::reverse_iterator<Iter>`)   
[ operator*](../iterator/back_insert_iterator/operator*.html "cpp/iterator/back insert iterator/operator*") |  no-op   
(public member function of `std::back_insert_iterator<Container>`)   
[ operator*](../iterator/front_insert_iterator/operator*.html "cpp/iterator/front insert iterator/operator*") |  no-op   
(public member function of `std::front_insert_iterator<Container>`)   
[ operator*](../iterator/insert_iterator/operator*.html "cpp/iterator/insert iterator/operator*") |  no-op   
(public member function of `std::insert_iterator<Container>`)   
[ operator*operator->](../iterator/move_iterator/operator*.html "cpp/iterator/move iterator/operator*") |  accesses the pointed-to element   
(public member function of `std::move_iterator<Iter>`)   
[ operator*operator->](../iterator/istream_iterator/operator*.html "cpp/iterator/istream iterator/operator*") |  returns the current element   
(public member function of `std::istream_iterator<T,CharT,Traits,Distance>`)   
[ operator*](../iterator/ostream_iterator/operator*.html "cpp/iterator/ostream iterator/operator*") |  no-op   
(public member function of `std::ostream_iterator<T,CharT,Traits>`)   
[ operator*](../iterator/istreambuf_iterator/operator*.html "cpp/iterator/istreambuf iterator/operator*") |  obtains a copy of the current character   
(public member function of `std::istreambuf_iterator<CharT,Traits>`)   
[ operator*](../iterator/ostreambuf_iterator/operator*.html "cpp/iterator/ostreambuf iterator/operator*") |  no-op   
(public member function of `std::ostreambuf_iterator<CharT,Traits>`)   
[ operator*operator->](../regex/regex_iterator/operator*.html "cpp/regex/regex iterator/operator*") |  accesses the current match   
(public member function of `std::regex_iterator<BidirIt,CharT,Traits>`)   
[ operator*operator->](../regex/regex_token_iterator/operator*.html "cpp/regex/regex token iterator/operator*") |  accesses current submatch   
(public member function of `std::regex_token_iterator<BidirIt,CharT,Traits>`)   
  
No standard library classes overload operator&. The best known example of overloaded operator& is the Microsoft COM class [`CComPtr`](https://msdn.microsoft.com/en-us/library/31k6d0k7\(v=vs.100\).aspx), although it can also appear in EDSLs such as [boost.spirit](https://www.boost.org/doc/libs/release/libs/spirit/doc/html/spirit/qi/reference/operator/and_predicate.html). 

No standard library classes overload operator->*. It was suggested that it could be part of [smart pointer interface](https://www.aristeia.com/Papers/DDJ_Oct_1999.pdf), and in fact is used in that capacity by actors in [boost.phoenix](https://www.boost.org/doc/libs/release/libs/phoenix/doc/html/phoenix/modules/operator.html#phoenix.modules.operator.member_pointer_operator), but is more common in EDSLs such as [cpp.react](https://github.com/schlangster/cpp.react/blob/master/include/react/Signal.h#L557). 

### Notes

Feature-test macro | Value | Std | Feature   
---|---|---|---  
[`__cpp_multidimensional_subscript`](../experimental/feature_test.html#cpp_multidimensional_subscript "cpp/feature test") | [`202110L`](../compiler_support/23.html#cpp_multidimensional_subscript_202110L "cpp/compiler support/23") | (C++23) | [Multidimensional subscript operator](operators.html#Array_subscript_operator "cpp/language/operators")  
  
### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[CWG 1213](https://cplusplus.github.io/CWG/issues/1213.html) | C++11  | subscripting an array rvalue resulted in lvalue  | reclassified as xvalue   
[CWG 1458](https://cplusplus.github.io/CWG/issues/1458.html) | C++98  | applying `&` to an lvalue of incomplete class type which  
declares operator& resulted in undefined behavior  | it is unspecified  
which & is used   
[CWG 1642](https://cplusplus.github.io/CWG/issues/1642.html) | C++98  | the rhs ﻿ in built-in pointer-to-member access operators could be an lvalue  | can only be an rvalue   
[CWG 1800](https://cplusplus.github.io/CWG/issues/1800.html) | C++98  | when applying `&` to a non-static data member of a  
member anonymous union, it was unclear whether  
the anonymous union take a part in the result type  | the anonymous union  
is not included in  
the result type   
[CWG 2614](https://cplusplus.github.io/CWG/issues/2614.html) | C++98  | the result of E1.E2 was unclear if E2 is a reference member or enumerator  | made clear   
[CWG 2725](https://cplusplus.github.io/CWG/issues/2725.html) | C++98  | if E2 is a static member function, E1.E2 is well-formed  
even if it is not the left hand opreand of operator() | E1.E2 is ill-formed  
in this case   
[CWG 2748](https://cplusplus.github.io/CWG/issues/2748.html) | C++98  | the behavior of E1->E2 was unclear if E1 is a  
null pointer and E2 refers to a static member  | the behavior is  
undefined in this case   
[CWG 2813](https://cplusplus.github.io/CWG/issues/2813.html) | C++98  | E1 was not a discarded-value expression if  
E1.E2 names a static member or enumeration  | it is   
[CWG 2823](https://cplusplus.github.io/CWG/issues/2823.html) | C++98  | the behavior of *expr was unclear if expr  
does not point to an object or function  | made clear   
  
### See also

[Operator precedence](operator_precedence.html "cpp/language/operator precedence")

[Operator overloading](operators.html "cpp/language/operators")

Common operators   
---  
[assignment](operator_assignment.html "cpp/language/operator assignment") | [increment  
decrement](operator_incdec.html "cpp/language/operator incdec") | [arithmetic](operator_arithmetic.html "cpp/language/operator arithmetic") | [logical](operator_logical.html "cpp/language/operator logical") | [comparison](operator_comparison.html "cpp/language/operator comparison") | **member  
access** | [other](operator_other.html "cpp/language/operator other")  
a = b  
a += b  
a -= b  
a *= b  
a /= b  
a %= b  
a &= b  
a |= b  
a ^= b  
a <<= b  
a >>= b |  ++a  
\--a  
a++  
a\-- |  +a  
-a  
a + b  
a - b  
a * b  
a / b  
a % b  
~a  
a & b  
a | b  
a ^ b  
a << b  
a >> b |  !a  
a && b  
a || b |  a == b  
a != b  
a < b  
a > b  
a <= b  
a >= b  
a <=> b |  a[...]  
*a  
&a  
a->b  
a.b  
a->*b  
a.*b | function call  
  
a(...)  
comma  
  
a, b  
conditional  
  
a ? b : c  
Special operators   
[`static_cast`](static_cast.html "cpp/language/static cast") converts one type to another related type  
[`dynamic_cast`](dynamic_cast.html "cpp/language/dynamic cast") converts within inheritance hierarchies  
[`const_cast`](const_cast.html "cpp/language/const cast") adds or removes [cv](cv.html "cpp/language/cv")-qualifiers  
[`reinterpret_cast`](reinterpret_cast.html "cpp/language/reinterpret cast") converts type to unrelated type  
[C-style cast](explicit_cast.html "cpp/language/explicit cast") converts one type to another by a mix of static_cast, const_cast, and reinterpret_cast  
[`new`](new.html "cpp/language/new") creates objects with dynamic storage duration  
[`delete`](delete.html "cpp/language/delete") destructs objects previously created by the new expression and releases obtained memory area  
[`sizeof`](sizeof.html "cpp/language/sizeof") queries the size of a type  
[`sizeof...`](sizeof....html "cpp/language/sizeof...") queries the size of a [pack](parameter_pack.html "cpp/language/pack") (since C++11)  
[`typeid`](typeid.html "cpp/language/typeid") queries the type information of a type  
[`noexcept`](noexcept.html "cpp/language/noexcept") checks if an expression can throw an exception (since C++11)  
[`alignof`](alignof.html "cpp/language/alignof") queries alignment requirements of a type (since C++11)  
[C documentation](../../c/language/operator_member_access.html "c/language/operator member access") for Member access operators  
---
  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
