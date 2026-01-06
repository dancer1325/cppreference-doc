

  
  
  
  
  

  
  
  

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
**Comparison operators**  
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
  


Compares the arguments. 

Operator name  |  Syntax  | [Overloadable](operators.html "cpp/language/operators") | Prototype examples (for class T)   
---|---|---|---  
Inside class definition  | Outside class definition   
Equal to  | `a == b` | Yes  | bool T::operator==(const U& b) const; | bool operator==(const T& a, const U& b);  
Not equal to  | `a != b` | Yes  | bool T::operator!=(const U& b) const; | bool operator!=(const T& a, const U& b);  
Less than  | `a < b` | Yes  | bool T::operator<(const U& b) const; | bool operator<(const T& a, const U& b);  
Greater than  | `a > b` | Yes  | bool T::operator>(const U& b) const; | bool operator>(const T& a, const U& b);  
Less than or equal to  | `a <= b` | Yes  | bool T::operator<=(const U& b) const; | bool operator<=(const T& a, const U& b);  
Greater than or equal to  | `a >= b` | Yes  | bool T::operator>=(const U& b) const; | bool operator>=(const T& a, const U& b);  
Three-way comparison (C++20) | `a <=> b` | Yes  | `_R_` T::operator<=>(const U& b) const;[[1]](operator_comparison.html#cite_note-R-1) | `_R_` operator<=>(const T& a, const U& b);[[1]](operator_comparison.html#cite_note-R-1)  
  
    **Notes**  


  * Where built-in operators return bool, most [user-defined overloads](operators.html "cpp/language/operators") also return bool so that the user-defined operators can be used in the same manner as the built-ins. However, in a user-defined operator overload, any type can be used as return type (including void). 
  * `U` can be any type including `T`. 


  1. ↑ [1.0](operator_comparison.html#cite_ref-R_1-0) [1.1](operator_comparison.html#cite_ref-R_1-1) `_R_` is the return type of `operator<=>` ([see below](operator_comparison.html#Three-way_comparison))

  
  
## Contents

  * [1 Two-way comparison](operator_comparison.html#Two-way_comparison)
    * [1.1 Relational operators](operator_comparison.html#Relational_operators)
    * [1.2 Equality operators](operator_comparison.html#Equality_operators)
    * [1.3 Built-in two-way comparison operators](operator_comparison.html#Built-in_two-way_comparison_operators)
    * [1.4 Built-in arithmetic comparison](operator_comparison.html#Built-in_arithmetic_comparison)
    * [1.5 Built-in pointer equality comparison](operator_comparison.html#Built-in_pointer_equality_comparison)
    * [1.6 Built-in pointer relational comparison](operator_comparison.html#Built-in_pointer_relational_comparison)
    * [1.7 Pointer total order](operator_comparison.html#Pointer_total_order)
    * [1.8 Overloads](operator_comparison.html#Overloads)
  * [2 Three-way comparison](operator_comparison.html#Three-way_comparison)
    * [2.1 Overloads](operator_comparison.html#Overloads_2)
  * [3 Notes](operator_comparison.html#Notes)
  * [4 Standard library](operator_comparison.html#Standard_library)
  * [5 Defect reports](operator_comparison.html#Defect_reports)
  * [6 See also](operator_comparison.html#See_also)

  
---  
  
### Two-way comparison

The two-way comparison operator expressions have the form 

##### Relational operators  
  
---  
lhs `**<**` rhs |  (1)  |   
lhs `**>**` rhs |  (2)  |   
lhs `**< =**` rhs |  (3)  |   
lhs `**> =**` rhs |  (4)  |   
  
##### Equality operators  
  
---  
lhs `**==**` rhs |  (5)  |   
lhs `**!=**` rhs |  (6)  |   
  
1) Returns true if lhs is less than rhs, false otherwise.

2) Returns true if lhs is greater than rhs, false otherwise.

3) Returns true if lhs is less than or equal to rhs, false otherwise.

4) Returns true if lhs is greater than or equal to rhs, false otherwise.

5) Returns true if lhs is equal to rhs, false otherwise.

6) Returns true if lhs is not equal to rhs, false otherwise.

#### Built-in two-way comparison operators

For built-in two-way comparison operators, [lvalue-to-rvalue conversions](implicit_cast.html#Lvalue-to-rvalue_conversion "cpp/language/implicit conversion"), [array-to-pointer conversions](implicit_cast.html#Array-to-pointer_conversion "cpp/language/implicit conversion")(until C++26) and [function-to-pointer conversions](implicit_cast.html#Function-to-pointer_conversion "cpp/language/implicit conversion") are applied to lhs and rhs ﻿. 

The comparison is deprecated if both lhs and rhs have array type prior to the application of these conversions.  | (since C++20)  
(until C++26)  
---|---  
For built-in relational operators, if one of the operands is a pointer, the [array-to-pointer conversion](implicit_cast.html#Array-to-pointer_conversion "cpp/language/implicit conversion") is performed on the other operand. For built-in equality operators, if one of the operands is a pointer or a [null pointer constant](pointer.html#Null_pointers "cpp/language/pointer"), the array-to-pointer conversion is performed on the other operand.  | (since C++26)  
  
For built-in two-way comparison operators, the result is a bool prvalue. 

#### Built-in arithmetic comparison

If the converted operands both have arithmetic or enumeration type (scoped or unscoped), [usual arithmetic conversions](usual_arithmetic_conversions.html "cpp/language/usual arithmetic conversions") are performed on both operands. The values are compared after conversions: 

Run this code
    
    
    #include <iostream>
     
    int main()
    {
        static_assert(sizeof(unsigned char) < sizeof(int),
                      "Cannot compare signed and smaller unsigned properly");
        int a = -1;
        int b = 1;
        unsigned int c = 1;
        unsigned char d = 1;
     
        [std::cout](../io/cout.html) << [std::boolalpha](../io/manip/boolalpha.html)
                  << "Comparing two signed values:\n"
                     " -1 == 1 ? " << (a == b) << "\n"
                     " -1 <  1 ? " << (a <  b) << "\n"
                     " -1 >  1 ? " << (a >  b) << "\n"
                     "Comparing signed and unsigned:\n"
                     // may issue different-signedness warning:
                     " -1 == 1 ? " << (a == c) << "\n"
                     // may issue different-signedness warning:
                     " -1 <  1 ? " << (a <  c) << "\n"
                     // may issue different-signedness warning:
                     " -1 >  1 ? " << (a >  c) << "\n"
                     "Comparing signed and smaller unsigned:\n"
                     " -1 == 1 ? " << (a == d) << "\n"
                     " -1 <  1 ? " << (a <  d) << "\n"
                     " -1 >  1 ? " << (a >  d) << '\n';
    }

Output: 
    
    
    Comparing two signed values:
     -1 == 1 ? false
     -1 <  1 ? true
     -1 >  1 ? false
    Comparing signed and unsigned:
     -1 == 1 ? false
     -1 <  1 ? false
     -1 >  1 ? true
    Comparing signed and smaller unsigned:
     -1 == 1 ? false
     -1 <  1 ? true
     -1 >  1 ? false

#### Built-in pointer equality comparison

The converted operands of equality operators `==` and `!=` can also have the type [std::nullptr_t](../types/nullptr_t.html "cpp/types/nullptr t"),(since C++11) pointer type or pointer-to-member type. 

Built-in pointer equality comparison has three possible results: equal, unequal and unspecified. The values yielded by equality operators for built-in pointer equality comparison is listed below: 

Comparison result   
of p and q | Value yielded by   
---|---  
p == q | p != q  
equal  | true | false  
unequal  | false | true  
unspecified  |  unspecified bool value   
  
If at least one of converted lhs and rhs is a pointer, [pointer conversions](implicit_cast.html#Pointer_conversions "cpp/language/implicit conversion"), [function pointer conversions](implicit_cast.html#Function_pointer_conversions "cpp/language/implicit conversion")(since C++17) and [qualification conversions](implicit_cast.html#Qualification_conversions "cpp/language/implicit conversion") are performed on both converted operands to bring them to their [composite pointer type](pointer.html#Composite_pointer_type "cpp/language/pointer"). The two pointers of the composite pointer type are compared as follows: 

  * If one pointer [represents the address](pointer.html#Pointers "cpp/language/pointer") of a complete object, and another pointer 



    

  * represents the address past the end of a different complete non-array object, or 
  * represents the address one past the last element of a different complete array object, 


     the result of the comparison is unspecified. 

  * Otherwise, if the pointers are both null, both point to the same function, or both represent the same address (i.e., they point to or are past the end of the same object), they compare equal. 
  * Otherwise, the pointers compare unequal. 



If at least one of converted lhs and rhs is a pointer to member, [pointer-to-member conversions](implicit_cast.html#Pointer-to-member_conversions "cpp/language/implicit conversion"), [function pointer conversions](implicit_cast.html#Function_pointer_conversions "cpp/language/implicit conversion")(since C++17) and [qualification conversions](implicit_cast.html#Qualification_conversions "cpp/language/implicit conversion") are performed on both converted operands to bring them to their [composite pointer type](pointer.html#Composite_pointer_type "cpp/language/pointer"). The two pointers to members of the composite pointer type are compared as follows: 

  * If two pointers to members are both the null member pointer value, they compare equal. 
  * If only one of two pointers to members is the null member pointer value, they compare unequal. 
  * If either is a pointer to a [virtual member function](virtual.html "cpp/language/virtual"), the result is unspecified. 
  * If one refers to a member of class `C1` and the other refers to a member of a different class `C2`, where neither is a base class of the other, the result is unspecified. 
  * If both refer to (possibly different) members of the same [union](union.html "cpp/language/union"), they compare equal. 
  * Otherwise, two pointers to members compare equal if they would refer to the same member of the same [most derived object](objects.html#Subobjects "cpp/language/object") or the same subobject if indirection with a hypothetical object of the associated class type were performed, otherwise they compare unequal. 


    
    
    struct P {};
    struct Q : P { int x; };
    struct R : P { int x; };
     
    int P::*bx = (int(P::*)) &Q::x;
    int P::*cx = (int(P::*)) &R::x;
     
    bool b1 = (bx == cx); // unspecified
     
    struct B
    {
        int f();
    };
    struct L : B {};
    struct R : B {};
    struct D : L, R {};
     
    int (B::*pb)() = &B::f;
    int (L::*pl)() = pb;
    int (R::*pr)() = pb;
    int (D::*pdl)() = pl;
    int (D::*pdr)() = pr;
     
    bool x = (pdl == pdr); // false
    bool y = (pb == pl);   // true

Two operands of type [std::nullptr_t](../types/nullptr_t.html "cpp/types/nullptr t") or one operand of type [std::nullptr_t](../types/nullptr_t.html "cpp/types/nullptr t") and the other a null pointer constant compare equal.  | (since C++11)  
---|---  
  
#### Built-in pointer relational comparison

The converted operands of relational operators `>`, `<`, `>=` and `<=` can also have pointer type. 

Built-in pointer relational comparison on unequal pointers p and q has three possible results: p is greater, q is greater and unspecified. The values yielded by relational operators for built-in pointer relational comparison is listed below: 

Comparison result   
of p and q | Value yielded by   
---|---  
p > q |  p < q |  p >= q |  p <= q  
equal  | false | false | true | true  
p is greater  | true | false | true | false  
q is greater  | false | true | false | true  
unspecified  | unspecified bool value   
  
If converted lhs and rhs are both pointers, [pointer conversions](implicit_cast.html#Pointer_conversions "cpp/language/implicit conversion"), [function pointer conversions](implicit_cast.html#Function_pointer_conversions "cpp/language/implicit conversion")(since C++17) and [qualification conversions](implicit_cast.html#Qualification_conversions "cpp/language/implicit conversion") are performed on both converted operands to bring them to their [composite pointer type](pointer.html#Composite_pointer_type "cpp/language/pointer"). The two pointers of the composite pointer type are compared as follows: 

  * If the pointers compare equal or the equality comparison result is unspecified, the relational comparison result falls into the same category. 
  * Otherwise (the pointers compare unequal), if any of the pointers is not a pointer to object, the result is unspecified. 
  * Otherwise (both pointers point to objects), the result is defined in terms of a partial order consistent with the following rules: 



    

  * Given two different elements high and low of an array such than high has higher subscript than low, if one pointer points to high (or a subobject of high) and the other pointer points to low (or a subobject of low), the former compares greater than the latter. 
  * If one pointer points to an element elem (or to a subobject of elem) of an array, and the other pointer is past the end of the same array, the past-the-end pointer compares greater than the other pointer. 
  * If one pointer points to a complete object, a base class subobject or a member subobject obj (or to a subobject of obj), and the other pointer is past the end of obj, the past-the-end pointer compares greater than the other pointer. 



    

  * If the pointers point to different [non-zero-sized](attributes/no_unique_address.html "cpp/language/attributes/no unique address")(since C++20) non-static data members with the same [member access](access.html "cpp/language/access")(until C++23) of the same object of a non-union class type, or to subobjects of such members, recursively, the pointer to the later declared member compares greater than the other pointer. 
  * Otherwise, the result is unspecified. 



#### Pointer total order

There exists an _implementation-defined strict total order over pointers_ in each program. The strict total order is consistent with the partial order described above: unspecified results become implementation-defined, while other results stay the same. 

Pointer comparison with the strict total order is applied in the following cases: 

  * Calling the operator() of the pointer type specializations of [std::less](../utility/functional/less.html "cpp/utility/functional/less"), [std::greater](../utility/functional/greater.html "cpp/utility/functional/greater"), [std::less_equal](../utility/functional/less_equal.html "cpp/utility/functional/less equal"), and [std::greater_equal](../utility/functional/greater_equal.html "cpp/utility/functional/greater equal"). 



  * Calling built-in operators comparing pointers from the operator() of specializations [`std::less<void>`](../utility/functional/less_void.html "cpp/utility/functional/less void"), [`std::greater<void>`](../utility/functional/greater_void.html "cpp/utility/functional/greater void"), [`std::less_equal<void>`](../utility/functional/less_equal_void.html "cpp/utility/functional/less equal void"), and [`std::greater_equal<void>`](../utility/functional/greater_equal_void.html "cpp/utility/functional/greater equal void"). 

| (since C++14)  
---|---  
  
  * Calling built-in operator<=> comparing pointers from the operator() of [std::compare_three_way](../utility/compare/compare_three_way.html "cpp/utility/compare/compare three way"). 
  * Calling built-in operator== comparing pointers from the operator() of [`std::ranges::equal_to`](../utility/functional/ranges/equal_to.html "cpp/utility/functional/ranges/equal to") and [`std::ranges::not_equal_to`](../utility/functional/ranges/not_equal_to.html "cpp/utility/functional/ranges/not equal to"). 
  * Calling built-in operator< comparing pointers from the operator() of [`std::ranges::less`](../utility/functional/ranges/less.html "cpp/utility/functional/ranges/less"), [`std::ranges::greater`](../utility/functional/ranges/greater.html "cpp/utility/functional/ranges/greater"), [`std::ranges::less_equal`](../utility/functional/ranges/less_equal.html "cpp/utility/functional/ranges/less equal"), and [`std::ranges::greater_equal`](../utility/functional/ranges/greater_equal.html "cpp/utility/functional/ranges/greater equal"). 

| (since C++20)  
  
#### Overloads

In [overload resolution against user-defined operators](overload_resolution.html#Call_to_an_overloaded_operator "cpp/language/overload resolution"), for every pair of promoted arithmetic types `L` and `R`, including enumeration types, the following function signatures participate in overload resolution: 

bool operator<(L, R); |  |   
---|---|---  
bool operator>(L, R); |  |   
bool operator<=(L, R); |  |   
bool operator>=(L, R); |  |   
bool operator==(L, R); |  |   
bool operator!=(L, R); |  |   
| |   
  
For every type `P` which is either pointer to object or pointer to function, the following function signatures participate in overload resolution: 

bool operator<(P, P); |  |   
---|---|---  
bool operator>(P, P); |  |   
bool operator<=(P, P); |  |   
bool operator>=(P, P); |  |   
bool operator==(P, P); |  |   
bool operator!=(P, P); |  |   
| |   
  
For every type `MP` that is a pointer to member object or pointer to member function or [std::nullptr_t](../types/nullptr_t.html "cpp/types/nullptr t")(since C++11), the following function signatures participate in overload resolution: 

bool operator==(MP, MP); |  |   
---|---|---  
bool operator!=(MP, MP); |  |   
| |   
  
Run this code
    
    
    #include <iostream>
     
    struct Foo
    {
        int n1;
        int n2;
    };
     
    union Union
    {
        int n;
        double d;
    };
     
    int main()
    {
        [std::cout](../io/cout.html) << [std::boolalpha](../io/manip/boolalpha.html);
     
        char a[4] = "abc";
        char* p1 = &a[1];
        char* p2 = &a[2];
        [std::cout](../io/cout.html) << "Pointers to array elements:\n"
                  << "p1 == p2? " << (p1 == p2) << '\n'
                  << "p1 <  p2? " << (p1 <  p2) << '\n';
     
        Foo f;
        int* p3 = &f.n1;
        int* p4 = &f.n2;
        [std::cout](../io/cout.html) << "Pointers to members of a class:\n"
                  << "p3 == p4? " << (p3 == p4) << '\n'
                  << "p3 <  p4? " << (p3 <  p4) << '\n';
     
        Union u;
        int* p5 = &u.n;
        double* p6 = &u.d;
        [std::cout](../io/cout.html) << "Pointers to members of a union:\n"
                  << "p5 == (void*)p6? " << (p5 == (void*)p6) << '\n'
                  << "p5 <  (void*)p6? " << (p5 <  (void*)p6) << '\n';
    }

Output: 
    
    
    Pointers to array elements:
    p1 == p2? false
    p1 <  p2? true
    Pointers to members of a class:
    p3 == p4? false
    p3 <  p4? true
    Pointers to members of a union:
    p5 == (void*)p6? true
    p5 <  (void*)p6? false

###  Three-way comparison

The three-way comparison operator expressions have the form  |   
---  
a `**< =>**` b |  |   
  
The expression returns an object such that 

  * (a <=> b) < 0 if a < b, 
  * (a <=> b) > 0 if a > b, 
  * (a <=> b) == 0 if a and b are equal/equivalent. 



If one of the operands is of type bool and the other is not, the program is ill-formed. 

If both operands have arithmetic types, or if one operand has unscoped enumeration type and the other has integral type, the usual arithmetic conversions are applied to the operands, and then 

  * If a narrowing conversion is required, other than from an integral type to a floating point type, the program is ill-formed. 
  * Otherwise, if the operands have integral type, the operator yields a prvalue of type [`std::strong_ordering`](../utility/compare/strong_ordering.html "cpp/utility/compare/strong ordering"): 



    

  * std::strong_ordering::equal if both operands are arithmetically equal, 
  * std::strong_ordering::less if the first operand is arithmetically less than the second, 
  * std::strong_ordering::greater otherwise. 



  * Otherwise, the operands have floating-point type, and the operator yields a prvalue of type [`std::partial_ordering`](../utility/compare/partial_ordering.html "cpp/utility/compare/partial ordering"). The expression a <=> b yields 



    

  * std::partial_ordering::less if a is less than b, 
  * std::partial_ordering::greater if a is greater than b, 
  * std::partial_ordering::equivalent if a is equivalent to b (-0 <=> +0 is equivalent), 
  * std::partial_ordering::unordered (NaN <=> anything is unordered). 



If both operands have the same enumeration type `E`, the operator yields the result of converting the operands to the underlying type of E and applying <=> to the converted operands. 

If at least one of the operands is a pointer to object or pointer to member, [array-to-pointer conversions](implicit_cast.html#Array-to-pointer_conversion "cpp/language/implicit conversion"), [pointer conversions](implicit_cast.html#Pointer_conversions "cpp/language/implicit conversion") and [qualification conversions](implicit_cast.html#Qualification_conversions "cpp/language/implicit conversion") are applied to both operands to bring them to their [composite pointer type](pointer.html#Composite_pointer_type "cpp/language/pointer"). 

For converted pointer operands p and q, p <=> q returns a prvalue of type [`std::strong_ordering`](../utility/compare/strong_ordering.html "cpp/utility/compare/strong ordering"): 

  * std::strong_ordering::equal if they [compare equal](operator_comparison.html#Built-in_pointer_equality_comparison), 
  * std::strong_ordering::less if q [compares greater than](operator_comparison.html#Built-in_pointer_relational_comparison) p, 
  * std::strong_ordering::greater if p compares greater than q, 
  * unspecified result if the two-way comparison result is unspecified. 



Otherwise, the program is ill-formed. 

####  Overloads

In [overload resolution against user-defined operators](overload_resolution.html#Call_to_an_overloaded_operator "cpp/language/overload resolution"), for pointer or enumeration type `T`, the following function signature participates in overload resolution: 

R operator<=>(T, T); |  |   
---|---|---  
| |   
  
Where `R` is the ordering category type defined above. 

Run this code
    
    
    #include <compare>
    #include <iostream>
     
    int main()
    {
        double foo = -0.0;
        double bar = 0.0;
     
        auto res = foo <=> bar;
     
        if (res < 0)
            [std::cout](../io/cout.html) << "-0 is less than 0";
        else if (res > 0)
            [std::cout](../io/cout.html) << "-0 is greater than 0";
        else if (res == 0)
            [std::cout](../io/cout.html) << "-0 and 0 are equal";
        else
            [std::cout](../io/cout.html) << "-0 and 0 are unordered";
    }

Output: 
    
    
    -0 and 0 are equal

(since C++20)  
  
### Notes

Because comparison operators group left-to-right, the expression a < b < c is parsed (a < b) < c, and not a < (b < c) or (a < b) && (b < c). 

Run this code
    
    
    #include <iostream>
     
    int main()
    {
        int a = 3, b = 2, c = 1;
     
        [std::cout](../io/cout.html) << [std::boolalpha](../io/manip/boolalpha.html)
            << (a < b < c) << '\n' // true; maybe warning
            << ((a < b) < c) << '\n' // true
            << (a < (b < c)) << '\n' // false
            << ((a < b) && (b < c)) << '\n'; // false
    }

A common requirement for [user-defined operator<](operators.html#Comparison_operators "cpp/language/operators") is [strict weak ordering](https://en.wikipedia.org/wiki/Strict_weak_ordering "enwiki:Strict weak ordering"). In particular, this is required by the standard algorithms and containers that work with [Compare](../named_req/Compare.html "cpp/named req/Compare") types: [std::sort](../algorithm/sort.html "cpp/algorithm/sort"), [std::max_element](../algorithm/max_element.html "cpp/algorithm/max element"), [std::map](../container/map.html "cpp/container/map"), etc. 

The [comparison result](operator_comparison.html#Member_layout) of pointers to different non-static data members of the same class implies that non-static data members in each of the three [member access modes](access.html "cpp/language/access")(until C++23) are positioned in memory in order of declaration. 

Although the results of comparing pointers of random origin (e.g. not all pointing to members of the same array) is unspecified, many implementations provide [strict total ordering](https://en.wikipedia.org/wiki/Total_order#Strict_total_order "enwiki:Total order") of pointers, e.g. if they are implemented as addresses within continuous virtual address space. Those implementations that do not (e.g. where not all bits of the pointer are part of a memory address and have to be ignored for comparison, or an additional calculation is required or otherwise pointer and integer is not a 1 to 1 relationship), provide a specialization of [std::less](../utility/functional/less.html "cpp/utility/functional/less") for pointers that has that guarantee. This makes it possible to use all pointers of random origin as keys in standard associative containers such as [std::set](../container/set.html "cpp/container/set") or [std::map](../container/map.html "cpp/container/map"). 

For the types that are both [EqualityComparable](../named_req/EqualityComparable.html "cpp/named req/EqualityComparable") and [LessThanComparable](../named_req/LessThanComparable.html "cpp/named req/LessThanComparable"), the C++ standard library makes a distinction between _equality_ , which is the value of the expression a == b and _equivalence_ , which is the value of the expression !(a < b) && !(b < a). 

Comparison between pointers and null pointer constants was removed by the resolution of [CWG issue 583](https://cplusplus.github.io/CWG/issues/583.html) included in [N3624](https://wg21.link/N3624): 

Run this code
    
    
    void f(char* p)
    {
        if (p > 0) { /*...*/ } // Error with N3624, compiled before N3624
        if (p > nullptr) { /*...*/ } // Error with N3624, compiled before N3624
    }
     
    int main() {}

Three-way comparison can be automatically generated for class types, see [default comparisons](default_comparisons.html "cpp/language/default comparisons"). 

If both of the operands are arrays, three-way comparison is ill-formed. 
    
    
    unsigned int i = 1;
    auto r = -1 < i;    // existing pitfall: returns ‘false’
    auto r2 = -1 <=> i; // Error: narrowing conversion required

[Feature-test](../utility/feature_test.html "cpp/utility/feature test") macro  | Value | Std | Feature   
---|---|---|---  
[`__cpp_impl_three_way_comparison`](../experimental/feature_test.html#cpp_impl_three_way_comparison "cpp/feature test") | [`201907L`](../compiler_support/20.html#cpp_impl_three_way_comparison_201907L "cpp/compiler support/20") | (C++20) | Three-way comparison (compiler support)   
[`__cpp_lib_three_way_comparison`](../experimental/feature_test.html#cpp_lib_three_way_comparison "cpp/feature test") | [`201907L`](../compiler_support/20.html#cpp_lib_three_way_comparison_201907L "cpp/compiler support/20") | (C++20) | Three-way comparison (library support); adding three-way comparison to the library   
  
### Standard library

Comparison operators are overloaded for many classes in the standard library. 

[ operator==operator!=](../types/type_info/operator_cmp.html "cpp/types/type info/operator cmp")(removed in C++20) |  checks whether the objects refer to the same type   
(public member function of `std::type_info`)   
---|---  
[ operator==operator!=operator<operator<=>](../error/error_code/operator_cmp.html "cpp/error/error code/operator cmp")(removed in C++20)(removed in C++20)(C++20) |  compares two `error_code`s   
(function)   
[ operator==operator!=operator<operator<=>](../error/error_condition/operator_cmp.html "cpp/error/error condition/operator cmp")(removed in C++20)(removed in C++20)(C++20) |  compares `error_condition`s and `error_code`s   
(function)   
[ operator==operator!=operator<operator<=operator>operator>=operator<=>](../utility/pair/operator_cmp.html "cpp/utility/pair/operator cmp")(removed in C++20)(removed in C++20)(removed in C++20)(removed in C++20)(removed in C++20)(C++20) |  lexicographically compares the values in the `pair`   
(function template)   
[ operator==operator!=operator<operator<=operator>operator>=operator<=>](../utility/tuple/operator_cmp.html "cpp/utility/tuple/operator cmp")(removed in C++20)(removed in C++20)(removed in C++20)(removed in C++20)(removed in C++20)(C++20) |  lexicographically compares the values in the tuple   
(function template)   
[ operator==operator!=](../utility/bitset/operator_cmp.html "cpp/utility/bitset/operator cmp")(removed in C++20) |  compares the contents   
(public member function of `std::bitset<N>`)   
[ operator==operator!=](../memory/allocator/operator_cmp.html "cpp/memory/allocator/operator cmp")(removed in C++20) |  compares two allocator instances   
(public member function of `std::allocator<T>`)   
[ operator==operator!=operator<operator<=operator>operator>=operator<=>](../memory/unique_ptr/operator_cmp.html "cpp/memory/unique ptr/operator cmp")(removed in C++20)(C++20) |  compares to another `unique_ptr` or with nullptr   
(function template)   
[ operator==operator!=operator<operator<=operator>operator>=operator<=>](../memory/shared_ptr/operator_cmp.html "cpp/memory/shared ptr/operator cmp")(removed in C++20)(removed in C++20)(removed in C++20)(removed in C++20)(removed in C++20)(C++20) |  compares with another `shared_ptr` or with nullptr   
(function template)   
[ operator==operator!=](../utility/functional/function/operator_cmp.html "cpp/utility/functional/function/operator cmp")(removed in C++20) |  compares a [std::function](../utility/functional/function.html "cpp/utility/functional/function") with nullptr   
(function template)   
[ operator==operator!=operator<operator<=operator>operator>=operator<=>](../chrono/duration/operator_cmp.html "cpp/chrono/duration/operator cmp")(C++11)(C++11)(removed in C++20)(C++11)(C++11)(C++11)(C++11)(C++20) |  compares two durations   
(function template)   
[ operator==operator!=operator<operator<=operator>operator>=operator<=>](../chrono/time_point/operator_cmp.html "cpp/chrono/time point/operator cmp")(C++11)(C++11)(removed in C++20)(C++11)(C++11)(C++11)(C++11)(C++20) |  compares two time points   
(function template)   
[ operator==operator!=](../memory/scoped_allocator_adaptor/operator_cmp.html "cpp/memory/scoped allocator adaptor/operator cmp")(removed in C++20) |  compares two `scoped_allocator_adaptor` objects   
(function template)   
[ operator==operator!=operator<operator<=operator>operator>=operator<=>](../types/type_index/operator_cmp.html "cpp/types/type index/operator cmp")(removed in C++20)(C++20) |  compares the underlying [std::type_index](../types/type_index.html "cpp/types/type index") objects   
(public member function of `std::type_index`)   
[ operator==operator!=operator<operator>operator<=operator>=operator<=>](../string/basic_string/operator_cmp.html "cpp/string/basic string/operator cmp")(removed in C++20)(removed in C++20)(removed in C++20)(removed in C++20)(removed in C++20)(C++20) |  lexicographically compares two strings   
(function template)   
[ operator==operator!=](../locale/locale/operator_cmp.html "cpp/locale/locale/operator cmp")(removed in C++20) |  equality comparison between locale objects   
(public member function of `std::locale`)   
[ operator==operator!=operator<operator<=operator>operator>=operator<=>](../container/array/operator_cmp.html "cpp/container/array/operator cmp")(C++11)(C++11)(removed in C++20)(C++11)(removed in C++20)(C++11)(removed in C++20)(C++11)(removed in C++20)(C++11)(removed in C++20)(C++20) |  lexicographically compares the values of two `array`s   
(function template)   
[ operator==operator!=operator<operator<=operator>operator>=operator<=>](../container/deque/operator_cmp.html "cpp/container/deque/operator cmp")(removed in C++20)(removed in C++20)(removed in C++20)(removed in C++20)(removed in C++20)(C++20) |  lexicographically compares the values of two `deque`s   
(function template)   
[ operator==operator!=operator<operator<=operator>operator>=operator<=>](../container/forward_list/operator_cmp.html "cpp/container/forward list/operator cmp")(C++11)(C++11)(removed in C++20)(C++11)(removed in C++20)(C++11)(removed in C++20)(C++11)(removed in C++20)(C++11)(removed in C++20)(C++20) |  lexicographically compares the values of two `forward_list`s   
(function template)   
[ operator==operator!=operator<operator<=operator>operator>=operator<=>](../container/list/operator_cmp.html "cpp/container/list/operator cmp")(removed in C++20)(removed in C++20)(removed in C++20)(removed in C++20)(removed in C++20)(C++20) |  lexicographically compares the values of two `list`s   
(function template)   
[ operator==operator!=operator<operator<=operator>operator>=operator<=>](../container/vector/operator_cmp.html "cpp/container/vector/operator cmp")(removed in C++20)(removed in C++20)(removed in C++20)(removed in C++20)(removed in C++20)(C++20) |  lexicographically compares the values of two `vector`s   
(function template)   
[ operator==operator!=operator<operator<=operator>operator>=operator<=>](../container/map/operator_cmp.html "cpp/container/map/operator cmp")(removed in C++20)(removed in C++20)(removed in C++20)(removed in C++20)(removed in C++20)(C++20) |  lexicographically compares the values of two `map`s   
(function template)   
[ operator==operator!=operator<operator<=operator>operator>=operator<=>](../container/multimap/operator_cmp.html "cpp/container/multimap/operator cmp")(removed in C++20)(removed in C++20)(removed in C++20)(removed in C++20)(removed in C++20)(C++20) |  lexicographically compares the values of two `multimap`s   
(function template)   
[ operator==operator!=operator<operator<=operator>operator>=operator<=>](../container/set/operator_cmp.html "cpp/container/set/operator cmp")(removed in C++20)(removed in C++20)(removed in C++20)(removed in C++20)(removed in C++20)(C++20) |  lexicographically compares the values of two `set`s   
(function template)   
[ operator==operator!=operator<operator<=operator>operator>=operator<=>](../container/multiset/operator_cmp.html "cpp/container/multiset/operator cmp")(removed in C++20)(removed in C++20)(removed in C++20)(removed in C++20)(removed in C++20)(C++20) |  lexicographically compares the values of two `multiset`s   
(function template)   
[ operator==operator!=](../container/unordered_map/operator_cmp.html "cpp/container/unordered map/operator cmp")(C++11)(C++11)(removed in C++20) |  compares the values in the unordered_map   
(function template)   
[ operator==operator!=](../container/unordered_multimap/operator_cmp.html "cpp/container/unordered multimap/operator cmp")(C++11)(C++11)(removed in C++20) |  compares the values in the unordered_multimap   
(function template)   
[ operator==operator!=](../container/unordered_set/operator_cmp.html "cpp/container/unordered set/operator cmp")(C++11)(C++11)(removed in C++20) |  compares the values in the unordered_set   
(function template)   
[ operator==operator!=](../container/unordered_multiset/operator_cmp.html "cpp/container/unordered multiset/operator cmp")(C++11)(C++11)(removed in C++20) |  compares the values in the unordered_multiset   
(function template)   
[ operator==operator!=operator<operator<=operator>operator>=operator<=>](../container/queue/operator_cmp.html "cpp/container/queue/operator cmp")(C++20) |  lexicographically compares the values of two `queue`s   
(function template)   
[ operator==operator!=operator<operator<=operator>operator>=operator<=>](../container/stack/operator_cmp.html "cpp/container/stack/operator cmp")(C++20) |  lexicographically compares the values of two `stack`s   
(function template)   
[ operator==operator!=operator<operator<=operator>operator>=operator<=>](../iterator/reverse_iterator/operator_cmp.html "cpp/iterator/reverse iterator/operator cmp")(C++20) |  compares the underlying iterators   
(function template)   
[ operator==operator!=operator<operator<=operator>operator>=operator<=>](../iterator/move_iterator/operator_cmp.html "cpp/iterator/move iterator/operator cmp")(C++11)(C++11)(removed in C++20)(C++11)(C++11)(C++11)(C++11)(C++20) |  compares the underlying iterators   
(function template)   
[ operator==operator!=](../iterator/istream_iterator/operator_cmp.html "cpp/iterator/istream iterator/operator cmp")(removed in C++20) |  compares two `istream_iterator`s   
(function template)   
[ operator==operator!=](../iterator/istreambuf_iterator/operator_cmp.html "cpp/iterator/istreambuf iterator/operator cmp")(removed in C++20) |  compares two `istreambuf_iterator`s   
(function template)   
[ operator==operator!=](../numeric/complex/operator_cmp.html "cpp/numeric/complex/operator cmp")(removed in C++20) |  compares two complex numbers or a complex and a scalar   
(function template)   
[ operator==operator!=operator<operator<=operator>operator>=](../numeric/valarray/operator_cmp.html "cpp/numeric/valarray/operator cmp") |  compares two valarrays or a valarray with a value   
(function template)   
[ operator==operator!=](../numeric/random/linear_congruential_engine/operator_cmp.html "cpp/numeric/random/linear congruential engine/operator cmp")(C++11)(C++11)(removed in C++20) |  compares the internal states of two pseudo-random number engines   
(function)   
[ operator==operator!=](../numeric/random/poisson_distribution/operator_cmp.html "cpp/numeric/random/poisson distribution/operator cmp")(C++11)(C++11)(removed in C++20) |  compares two distribution objects   
(function)   
[ operator==operator!=operator<operator<=operator>operator>=operator<=>](../regex/sub_match/operator_cmp.html "cpp/regex/sub match/operator cmp")(removed in C++20)(removed in C++20)(removed in C++20)(removed in C++20)(removed in C++20)(C++20) |  compares a `sub_match` with another `sub_match`, a string, or a character   
(function template)   
[ operator==operator!=](../regex/match_results/operator_cmp.html "cpp/regex/match results/operator cmp")(removed in C++20) |  lexicographically compares the values in the two match result   
(function template)   
[ operator==operator!=](../regex/regex_iterator/operator_cmp.html "cpp/regex/regex iterator/operator cmp")(removed in C++20) |  compares two `regex_iterator`s   
(public member function of `std::regex_iterator<BidirIt,CharT,Traits>`)   
[ operator==operator!=](../regex/regex_token_iterator/operator_cmp.html "cpp/regex/regex token iterator/operator cmp")(removed in C++20) |  compares two `regex_token_iterator`s   
(public member function of `std::regex_token_iterator<BidirIt,CharT,Traits>`)   
[ operator==operator!=operator<operator<=operator>operator>=operator<=>](../thread/thread/id/operator_cmp.html "cpp/thread/thread/id/operator cmp")(removed in C++20)(removed in C++20)(removed in C++20)(removed in C++20)(removed in C++20)(C++20) |  compares two `thread::id` objects   
(function)   
  
The namespace [`std::rel_ops`](../utility/rel_ops/operator_cmp.html "cpp/utility/rel ops/operator cmp") provides generic operators !=, >, <=, and >=: 

Defined in header `[<utility>](../header/utility.html "cpp/header/utility")`  
---  
Defined in namespace `std::rel_ops`  
[ operator!=operator>operator<=operator>=](../utility/rel_ops/operator_cmp.html "cpp/utility/rel ops/operator cmp")(deprecated in C++20) |  automatically generates comparison operators based on user-defined operator== and operator<   
(function template)   
  
### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[CWG 583](https://cplusplus.github.io/CWG/issues/583.html)  
([N3624](https://wg21.link/N3624))  | C++98  | all six comparison operators could be used to  
compare a pointer with a null pointer constant  | only equality operators  
are allowed   
[CWG 661](https://cplusplus.github.io/CWG/issues/661.html) | C++98  | the actual semantics of arithmetic comparisons (e.g.  
whether 1 < 2 yields true or false) were unspecified  | specification added   
[CWG 879](https://cplusplus.github.io/CWG/issues/879.html) | C++98  | pointers to function types and pointers  
to void did not have built-in comparisons  | added comparison  
specification for these pointers   
[CWG 1596](https://cplusplus.github.io/CWG/issues/1596.html) | C++98  | non-array objects were considered to belong to arrays with  
one element only for the purpose of pointer arithmetic  | the rule is also  
applied to comparison   
[CWG 1598](https://cplusplus.github.io/CWG/issues/1598.html) | C++98  | two pointers to members of classes that are different and  
neither is the base class of the other did not compare equal  
even if the offsets of the pointed members can be the same  | the result is  
unspecified  
in this case   
[CWG 1858](https://cplusplus.github.io/CWG/issues/1858.html) | C++98  | it was not clear whether two pointers to members  
that refer to different members of the same union  
compare equal as if they refer to the same member  | they compare  
equal in this case   
[CWG 2419](https://cplusplus.github.io/CWG/issues/2419.html) | C++98  | a pointer to non-array object was only treated as a  
pointer to the first element of an array with size 1  
in pointer comparison if the pointer is obtained by `&` | applies to all pointers  
to non-array objects   
[CWG 2526](https://cplusplus.github.io/CWG/issues/2526.html) | C++98  | the definition of relational comparison (`>`, `>=`, `<` and `<=`) of  
pointers to void and function pointers were removed by [N3624](https://wg21.link/N3624) | restored   
[CWG 2796](https://cplusplus.github.io/CWG/issues/2796.html) | C++17  | function pointer conversions were not performed on the converted  
pointer operands during built-in pointer relational comparisons  | performs these  
conversions in this case   
  
### See also

  * [Operator precedence](operator_precedence.html "cpp/language/operator precedence")
  * [Operator overloading](operators.html "cpp/language/operators")
  * [Compare](../named_req/Compare.html "cpp/named req/Compare") (named requirements) 

Common operators   
---  
[assignment](operator_assignment.html "cpp/language/operator assignment") | [increment  
decrement](operator_incdec.html "cpp/language/operator incdec") | [arithmetic](operator_arithmetic.html "cpp/language/operator arithmetic") | [logical](operator_logical.html "cpp/language/operator logical") | **comparison** | [member  
access](operator_member_access.html "cpp/language/operator member access") | [other](operator_other.html "cpp/language/operator other")  
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
[C documentation](../../c/language/operator_comparison.html "c/language/operator comparison") for Comparison operators  
---
  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
