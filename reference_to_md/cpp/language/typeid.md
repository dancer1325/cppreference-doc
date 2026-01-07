

  
  
  
  
  

  
  
  

---  
  

---  
  


  
  
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
**`typeid`**  
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
  
  


Queries information of a type. 

Used where the [dynamic type](type-id.html#Dynamic_type "cpp/language/type") of a [polymorphic object](objects.html#Polymorphic_objects "cpp/language/object") must be known and for static type identification. 

## Contents

  * [1 Syntax](typeid.html#Syntax)
  * [2 Explanation](typeid.html#Explanation)
  * [3 Notes](typeid.html#Notes)
  * [4 Keywords](typeid.html#Keywords)
  * [5 Example](typeid.html#Example)
  * [6 Defect reports](typeid.html#Defect_reports)
  * [7 See also](typeid.html#See_also)

  
---  
  
### Syntax  
  
---  
`**typeid (**` type `**)**` |  (1)  |   
`**typeid (**` expression `**)**` |  (2)  |   
  
The typeid expression is an [lvalue expression](value_category.html "cpp/language/value category") which refers to an object with [static storage duration](static.html "cpp/language/static"), of const-qualified version of the polymorphic type [std::type_info](../types/type_info.html "cpp/types/type info") or some type derived from it. 

If the standard library definition of [std::type_info](../types/type_info.html "cpp/types/type info") is not visible when using typeid, the program is ill-formed. 

### Explanation

If type or the type of expression is a class type or a reference to a class type, then that class type cannot be an [incomplete type](incomplete_type.html "cpp/language/incomplete type"). 

1) Refers to a [std::type_info](../types/type_info.html "cpp/types/type info") object representing type. If type is a reference type, the result refers to a [std::type_info](../types/type_info.html "cpp/types/type info") object representing the cv-unqualified version of the referenced type.

2) Examines expression ﻿: 

  * If expression is an [lvalue](value_category.html#lvalue "cpp/language/value category")(until C++11)a [glvalue](value_category.html#glvalue "cpp/language/value category")(since C++11) expression that identifies an [object of a polymorphic type](objects.html#Polymorphic_objects "cpp/language/object") (that is, a class that declares or inherits at least one [virtual function](virtual.html "cpp/language/virtual")), the typeid expression evaluates the expression and then refers to the [std::type_info](../types/type_info.html "cpp/types/type info") object that represents the dynamic type of the expression. 



    

  * If expression is an [indirection expression](operator_member_access.html#Built-in_indirection_operator "cpp/language/operator member access") and its operand evaluates to a [null pointer value](pointer.html#Null_pointers "cpp/language/pointer"), an exception of a type matching handlers of type [std::bad_typeid](../types/bad_typeid.html "cpp/types/bad typeid") is thrown[[1]](typeid.html#cite_note-1). 



  * Otherwise, typeid does [not evaluate the expression](expressions.html#Potentially-evaluated_expressions "cpp/language/expressions"), and the [std::type_info](../types/type_info.html "cpp/types/type info") object it identifies represents the static type of the expression. Lvalue-to-rvalue, array-to-pointer, or function-to-pointer conversions are not performed. 



    

  * [Temporary materialization](implicit_cast.html#Temporary_materialization "cpp/language/implicit conversion"), however, is (formally) performed for prvalue arguments: the argument must be destructible in the context in which the typeid expression appears. 


| (since C++17)  
---|---  
  
If type or the type of expression is cv-qualified, the result of the typeid refers to a [std::type_info](../types/type_info.html "cpp/types/type info") object representing the cv-unqualified type (that is, typeid(const T) == typeid(T)). 

If typeid is used on an object under construction or destruction (in a destructor or in a constructor, including constructor's [initializer list](initializer_list.html "cpp/language/initializer list") or [default member initializers](data_members.html#Member_initialization "cpp/language/data members")), then the [std::type_info](../types/type_info.html "cpp/types/type info") object referred to by this typeid represents the class that is being constructed or destroyed even if it is not the most-derived class. 

  1. [↑](typeid.html#cite_ref-1) In other contexts, evaluating such an expression results in undefined behavior.



### Notes

When applied to an expression of polymorphic type, evaluation of a typeid expression may involve runtime overhead (a virtual table lookup), otherwise typeid expression is resolved at compile time. 

It is unspecified whether the destructor for the object referred to by typeid is executed at the end of the program. 

There is no guarantee that the same [std::type_info](../types/type_info.html "cpp/types/type info") object will be referred to by all evaluations of the typeid expression on the same type, although they would compare equal, [std::type_info::hash_code](../types/type_info/hash_code.html "cpp/types/type info/hash code") of those `type_info` objects would be identical, as would be their [std::type_index](../types/type_index.html "cpp/types/type index"). 
    
    
    const [std::type_info](../types/type_info.html)& ti1 = typeid(A);
    const [std::type_info](../types/type_info.html)& ti2 = typeid(A);
     
    [assert](../error/assert.html)(&ti1 == &ti2); // not guaranteed
    [assert](../error/assert.html)(ti1 == ti2); // guaranteed
    [assert](../error/assert.html)(ti1.hash_code() == ti2.hash_code()); // guaranteed
    [assert](../error/assert.html)([std::type_index](../types/type_index.html)(ti1) == [std::type_index](../types/type_index.html)(ti2)); // guaranteed

### Keywords

[`typeid`](../keyword/typeid.html "cpp/keyword/typeid")

### Example

The example showing output using one of the implementations where type_info::name returns full type names; filter through c++filt -t if using gcc or similar.

Run this code
    
    
    #include <iostream>
    #include <string>
    #include <typeinfo>
     
    struct Base {}; // non-polymorphic
    struct Derived : Base {};
     
    struct Base2 { virtual void foo() {} }; // polymorphic
    struct Derived2 : Base2 {};
     
    int main()
    {
        int myint = 50;
        [std::string](../string/basic_string.html) mystr = "string";
        double *mydoubleptr = nullptr;
     
        [std::cout](../io/cout.html) << "myint has type: " << typeid(myint).name() << '\n'
                  << "mystr has type: " << typeid(mystr).name() << '\n'
                  << "mydoubleptr has type: " << typeid(mydoubleptr).name() << '\n';
     
        // std::cout << myint is a glvalue expression of polymorphic type; it is evaluated
        const [std::type_info](../types/type_info.html)& r1 = typeid([std::cout](../io/cout.html) << myint); // side-effect: prints 50
        [std::cout](../io/cout.html) << '\n' << "std::cout<<myint has type : " << r1.name() << '\n';
     
        // std::printf() is not a glvalue expression of polymorphic type; NOT evaluated
        const [std::type_info](../types/type_info.html)& r2 = typeid([std::printf](../io/c/fprintf.html)("%d\n", myint));
        [std::cout](../io/cout.html) << "printf(\"%d\\n\",myint) has type : " << r2.name() << '\n';
     
        // Non-polymorphic lvalue is a static type
        Derived d1;
        Base& b1 = d1;
        [std::cout](../io/cout.html) << "reference to non-polymorphic base: " << typeid(b1).name() << '\n';
     
        Derived2 d2;
        Base2& b2 = d2;
        [std::cout](../io/cout.html) << "reference to polymorphic base: " << typeid(b2).name() << '\n';
     
        try
        {
            // dereferencing a null pointer: okay for a non-polymorphic expression
            [std::cout](../io/cout.html) << "mydoubleptr points to " << typeid(*mydoubleptr).name() << '\n'; 
            // dereferencing a null pointer: not okay for a polymorphic lvalue
            Derived2* bad_ptr = nullptr;
            [std::cout](../io/cout.html) << "bad_ptr points to... ";
            [std::cout](../io/cout.html) << typeid(*bad_ptr).name() << '\n';
        }
        catch (const [std::bad_typeid](../types/bad_typeid.html)& e)
        {
            [std::cout](../io/cout.html) << " caught " << e.what() << '\n';
        }
    }

Possible output: 
    
    
    ======== output from Clang ========
    myint has type: i
    mystr has type: NSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE
    mydoubleptr has type: Pd
    50
    std::cout<<myint has type : NSt3__113basic_ostreamIcNS_11char_traitsIcEEEE
    printf("%d\n",myint) has type : i
    reference to non-polymorphic base: 4Base
    reference to polymorphic base: 8Derived2
    mydoubleptr points to d
    bad_ptr points to...  caught std::bad_typeid
     
    ======== output from MSVC ========
    myint has type: int
    mystr has type: class std::basic_string<char,struct std::char_traits<char>,⮠
    class std::allocator<char> >
    mydoubleptr has type: double * __ptr64
    50
    std::cout<<myint has type : class std::basic_ostream<char,struct std::char_traits<char> >
    printf("%d\n",myint) has type : int
    reference to non-polymorphic base: struct Base
    reference to polymorphic base: struct Derived2
    mydoubleptr points to double
    bad_ptr points to...  caught Attempted a typeid of nullptr pointer!

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[CWG 492](https://cplusplus.github.io/CWG/issues/492.html) | C++98  | when typeid is applied to a reference to cv-qualified  
type, the result represented the referenced type  | the result represents the  
cv-unqualified referenced type   
[CWG 1416](https://cplusplus.github.io/CWG/issues/1416.html) | C++98  | the wording regarding top-level  
cv-qualification might be misinterpreted  | improved the wording   
[CWG 1431](https://cplusplus.github.io/CWG/issues/1431.html) | C++98  | typeid was only allowed to throw [std::bad_typeid](../types/bad_typeid.html "cpp/types/bad typeid") | allowed to throw  
matchable derived classes   
[CWG 1954](https://cplusplus.github.io/CWG/issues/1954.html) | C++98  | it was unclear whether null pointer dereference  
can be checked in subexpressions of expression | only checked at top level   
  
### See also

[ type_info](../types/type_info.html "cpp/types/type info") |  contains some type’s information, the class returned by the typeid operator   
(class)   
---|---
