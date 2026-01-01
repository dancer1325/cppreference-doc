* binds a reference -- to -- an object

## Contents

  * [1 Syntax](reference_initialization.html#Syntax)
    * [1.1 Non-list-initialization](reference_initialization.html#Non-list-initialization)
    * [1.2 Ordinary list-initialization (since C++11)](reference_initialization.html#Ordinary_list-initialization_.28since_C.2B.2B11.29)
    * [1.3 Designated list-initialization (since C++20)](reference_initialization.html#Designated_list-initialization_.28since_C.2B.2B20.29)
  * [2 Explanation](reference_initialization.html#Explanation)
  * [3 Definitions](reference_initialization.html#Definitions)
  * [4 Initialization rules](reference_initialization.html#Initialization_rules)
    * [4.1 Direct binding](reference_initialization.html#Direct_binding)
    * [4.2 Indirect binding](reference_initialization.html#Indirect_binding)
  * [5 Lifetime of a temporary](reference_initialization.html#Lifetime_of_a_temporary)
  * [6 Notes](reference_initialization.html#Notes)
  * [7 Example](reference_initialization.html#Example)
  * [8 Defect reports](reference_initialization.html#Defect_reports)
  * [9 See also](reference_initialization.html#See_also)

---  
  
### Syntax

##### Non-list-initialization  

* (1)
    ```
    T& ref = target ;
    T& ref ( target );
    ```

* (2)
  * | C++11
    ```
    T&& ref = target ;
    T&& ref ( target ); 
    ```

* (3)
    ```
    func-refpar ( target )
    ```

* (4)   
  * | `func-refret` definition
    ```
    return target;
    ```

* (5)
  * | Class definition
    ```
    Class::Class(...) : ref-member ( target ) { ... }	
    ```

##### Ordinary list-initialization (| C++11)  

* (1)
    ```
    T& ref = { arg1, arg2, ... };
    T& ref { arg1, arg2, ... };
    ```

* (2)
    * | C++11
      ```
      T&& ref = { arg1, arg2, ... };
      T&& ref { arg1, arg2, ... };
      ```

* (3)
    ```
    func-refpar ({ arg1, arg2, ... });	
    ```
  
##### Designated list-initialization (| C++20)  

* (1)
    ```
    T& ref = {.des1 = arg1 , .des2 { arg2 } ... };
    T& ref {.des1 = arg1 , .des2 { arg2 } ... };
    ```

* (2)
  ```
  T&& ref = {.des1 = arg1 , .des2 { arg2 } ... };
  T&& ref {.des1 = arg1 , .des2 { arg2 } ... };
  ```

* (3)
    ```
    func-refpar ({.des1 = arg1 , .des2 { arg2 } ... });		
    ``` 
  
* ways to initialize a reference to `T`
  * object of type `T`
  * function of type `T`
  * object implicitly convertible -- to -- `T`

* reference
  * AFTER being initialized, 
    * can NOT be reseated (changed) -- to refer to -- another object 

* ways references are initialized
  1) When a named [lvalue reference](reference.html#Lvalue_references "cpp/language/reference") variable is declared with an initializer.
  2) When a named [rvalue reference](reference.html#Rvalue_references "cpp/language/reference") variable is declared with an initializer.
  3) In a function call expression, when the function parameter has reference type.
  4) In the return statement, when the function returns a reference type
     * The program is ill-formed if the returned reference is bound to the result of a [temporary expression](reference_initialization.html#Lifetime_of_a_temporary).(since C++26)
  5) When a [non-static data member](data_members.html "cpp/language/data members") of reference type is initialized using a [member initializer](initializer_list.html "cpp/language/initializer list").

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/language/reference_initialization&action=edit&section=5 "Edit section: Explanation")] Explanation

T |  \-  |  the referenced type   
---|---|---  
ref |  \-  |  the reference variable to be initialized   
target |  \-  |  the initializer expression being used   
func-refpar |  \-  |  a function with a parameter of reference type (T ﻿`&` or T ﻿`&&`(since C++11))   
func-refret |  \-  |  a function whose returns type is a reference type (T ﻿`&` or T ﻿`&&`(since C++11))   
Class |  \-  |  a class name   
ref-member |  \-  |  a non-static data member of reference type (T ﻿`&` or T ﻿`&&`(since C++11)) of Class  
des1, des2, ...  |  \-  |  designators   
arg1, arg2, ...  |  \-  |  the initializers in initializer lists   
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/language/reference_initialization&action=edit&section=6 "Edit section: Definitions")] Definitions

For two types `T1` and `T2`: 

  * Given the cv-unqualified versions of `T1` and `T2` as `U1` and `U2` respectively, if `U1` is [similar](implicit_cast.html#Similar_types "cpp/language/implicit conversion") to `U2`, or `U1` is a [base class](derived_class.html "cpp/language/derived class") of `U2`, `T1` is _reference-related_ to `T2`. 
  * If a prvalue of type “pointer to `T2`” can be converted to the type “pointer to `T1`” via a standard conversion sequence, `T1` is _reference-compatible_ with `T2`. 



### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/language/reference_initialization&action=edit&section=7 "Edit section: Initialization rules")] Initialization rules

If a reference initialization uses an ordinary or designated(since C++20) list-initialization, the rules of [list-initialization](list_initialization.html "cpp/language/list initialization") are followed.  | (since C++11)  
---|---  
  
For non-list reference initialization, given the type of target as `U`, the reference either _binds directly_ to target or binds to a value of type `T` converted from target. Direct binding is considered first, followed by indirect binding, if neither binding is available, the program is ill-formed. 

In all cases where the reference-compatible relationship of two types is used to establish the validity of a reference binding and the standard conversion sequence would be ill-formed, a program that necessitates such a binding is ill-formed. 

#### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/language/reference_initialization&action=edit&section=8 "Edit section: Direct binding")] Direct binding

If all following conditions are satisfied: 

  * The reference to be initialized is an lvalue reference. 
  * target is a non-[bit-field](bit_field.html "cpp/language/bit field") lvalue. 
  * `T` is reference-compatible with `U`. 



Then the reference binds to target, or to its appropriate base class subobject: 
    
    
    double d = 2.0;
    double& rd = d;        // rd refers to d
    const double& rcd = d; // rcd refers to d
     
    struct A {};
    struct B : A {} b;
     
    A& ra = b;             // ra refers to A subobject in b
    const A& rca = b;      // rca refers to A subobject in b

Otherwise, if all following conditions are satisfied: 

  * The reference to be initialized is an lvalue reference. 
  * `U` is a class type. 
  * `T` is not reference-related to `U`. 
  * target can be converted to an lvalue of type `V` such that `T` is reference-compatible with `V`. 



Then the reference binds to the lvalue result of the conversion, or to its appropriate base class subobject: 
    
    
    struct A {};
    struct B : A { operator int&(); };
     
    int& ir = B(); // ir refers to the result of B::operator int&

Otherwise, if the reference to be initialized is an lvalue reference, and `T` is not const-qualified or is volatile-qualified, the prorgram is ill-formed: 
    
    
    double& rd2 = 2.0; // error: not an lvalue and reference is not const
    int i = 2;
    double& rd3 = i;   // error: type mismatch and reference is not const

Otherwise, if all following conditions are satisfied: 

  * target is a value of any following category: 



    

  * rvalue 


| (until C++11)  
---|---  
  
    

  * non-bit-field xvalue 
  * class prvalue 
  * array prvalue 
  * function lvalue 


| (since C++11)  
(until C++17)  
  
    

  * non-bit-field rvalue 
  * function lvalue 


| (since C++17)  
  
  * `T` is reference-compatible with `U`. 



Then the reference binds to target, or to its appropriate base class subobject: 
    
    
    struct A {};
    struct B : A {};
    extern B f();
     
    const A& rca2 = f(); // bound to the A subobject of the B rvalue.
    A&& rra = f();       // same as above
     
    int i2 = 42;
    int&& rri = static_cast<int&&>(i2); // bound directly to i2

If target is a prvalue, [temporary materialization](implicit_cast.html#Temporary_materialization "cpp/language/implicit conversion") is applied to it, considering the type of the prvalue to be the adjusted type `P`. 

  * `P` is [adjusted](implicit_cast.html#Qualification_conversions "cpp/language/implicit conversion") from the type of target (i.e. `U`) by adding the cv-qualification of `T` to it. 

In this case, the reference binds to the result object, or to its appropriate base class subobject.  | (since C++17)  
---|---  
  
Otherwise, if all following conditions are satisfied: 

  * `U` is a class type. 
  * `T` is not reference-related to `U`. 
  * target can be converted to a value v of type `V` such that `T` is reference-compatible with `V`, where v is of any following category: 



    

  * rvalue 


| (until C++11)  
---|---  
  
    

  * xvalue 
  * class prvalue 
  * function lvalue 


| (since C++11)  
(until C++17)  
  
    

  * rvalue 
  * function lvalue 


| (since C++17)  
  
Then the reference binds to the result of the conversion, or to its appropriate base class subobject: 
    
    
    struct A {};
    struct B : A {};
    struct X { operator B(); } x;
     
    const A& r = x; // bound to the A subobject of the result of the conversion
    B&& rrb = x;    // bound directly to the result of the conversion

If the result of the conversion is a prvalue, [temporary materialization](implicit_cast.html#Temporary_materialization "cpp/language/implicit conversion") is applied to it, considering the type of the prvalue to be the adjusted type `P`. 

  * `P` is [adjusted](implicit_cast.html#Qualification_conversions "cpp/language/implicit conversion") from the type of the conversion result by adding the cv-qualification of `T` to it. 

In this case, the reference binds to the result object, or to its appropriate base class subobject.  | (since C++17)  
---|---  
  
#### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/language/reference_initialization&action=edit&section=9 "Edit section: Indirect binding")] Indirect binding

If direct binding is not available, indirect binding is considered. In this case, `T` cannot be reference-related to `U`. 

If `T` or `U` is a class type, user-defined conversions are considered using the rules for [copy-initialization](copy_initialization.html "cpp/language/copy initialization") of an object of type `T` by user-defined conversion. The program is ill-formed if the corresponding non-reference copy-initialization would be ill-formed. The result of the call to the conversion function, as described for the non-reference [copy-initialization](copy_initialization.html "cpp/language/copy initialization"), is then used to direct-initialize the reference. For this direct-initialization, user-defined conversions are not considered. 

Otherwise, a temporary of type `T` is created and copy-initialized from target. The reference is then bound to the temporary.  | (until C++17)  
---|---  
Otherwise, target is implicitly converted to a prvalue of type “cv-unqualified `T`”. The temporary materialization conversion is applied, considering the type of the prvalue to be `T`, and the reference is bound to the result object.  | (since C++17)  
      
    
    const [std::string](../string/basic_string.html)& rs = "abc"; // rs refers to temporary copy-initialized from char array
    const double& rcd2 = 2;        // rcd2 refers to temporary with value 2.0
    int i3 = 2;
    double&& rrd3 = i3;            // rrd3 refers to temporary with value 2.0

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/language/reference_initialization&action=edit&section=10 "Edit section: Lifetime of a temporary")] Lifetime of a temporary

Whenever a reference is bound to a temporary object or to a subobject thereof, the lifetime of the temporary object is extended to match the lifetime of the reference (check [temporary object lifetime exceptions](lifetime.html#Temporary_object_lifetime "cpp/language/lifetime")), where the temporary object or its subobject is denoted by one of following expression: 

  * a [prvalue](value_category.html#prvalue "cpp/language/value category") expression of an object type, 

| (until C++17)  
---|---  
  
  * a [temporary materialization conversion](implicit_cast.html#Temporary_materialization "cpp/language/implicit conversion"), 

| (since C++17)  
  
  * a parenthesized expression (e), where e is one of these expressions, 
  * a [built-in subscript expression](operator_member_access.html#Built-in_subscript_operator "cpp/language/operator member access") of form a[n] or n[a], where a is an array and is one of these expressions, 
  * a [class member access expression](operator_member_access.html#Built-in_member_access_operators "cpp/language/operator member access") of form e.m, where e is one of these expressions and m designates a non-static data member of object type, 
  * a [pointer-to-member operation](operator_member_access.html#Built-in_pointer-to-member_access_operators "cpp/language/operator member access") of form e.*mp, where e is one of these expressions and mp is a pointer to data member, 
  * a [`const_cast`](const_cast.html "cpp/language/const cast"), [`static_cast`](static_cast.html "cpp/language/static cast"), [`dynamic_cast`](dynamic_cast.html "cpp/language/dynamic cast"), or [`reinterpret_cast`](reinterpret_cast.html "cpp/language/reinterpret cast") conversion without a user-defined conversion that converts one of these expressions to the glvalue refers to the object designated by the operand, or to its complete object or a subobject thereof (an [explicit cast](explicit_cast.html "cpp/language/explicit cast") expression is interpreted as a sequence of these casts), 
  * a [conditional expression](operator_other.html#Conditional_operator "cpp/language/operator other") of form cond ? e1 : e2 that is a glvalue, where e1 or e2 is one of these expressions, or 
  * a [built-in comma expression](operator_other.html#Built-in_comma_operator "cpp/language/operator other") of form x, e that is a glvalue, where e is one of these expressions. 



There are following exceptions to this lifetime rule: 

  * a temporary bound to a return value of a function in a return statement is not extended: it is destroyed immediately at the end of the return expression. Such return statement always returns a dangling reference. 

| (until C++26)  
---|---  
  
  * a temporary bound to a reference parameter in a function call exists until the end of the full expression containing that function call: if the function returns a reference, which outlives the full expression, it becomes a dangling reference. 



  * a temporary bound to a reference in the initializer used in a new-expression exists until the end of the full expression containing that new-expression, not as long as the initialized object. If the initialized object outlives the full expression, its reference member becomes a dangling reference. 

| (since C++11)  
---|---  
  
  * a temporary bound to a reference in a reference element of an aggregate initialized using [direct-initialization](direct_initialization.html "cpp/language/direct initialization") syntax **(** parentheses**)** exists until the end of the full expression containing the initializer, as opposed to [list-initialization](list_initialization.html "cpp/language/list initialization") syntax **{** braces**}**. 


    
    
    struct A
    {
        int&& r;
    };
     
    A a1{7}; // OK, lifetime is extended
    A a2(7); // well-formed, but dangling reference

| (since C++20)  
---|---  
  
In general, the lifetime of a temporary cannot be further extended by "passing it on": a second reference, initialized from the reference variable or data member to which the temporary was bound, does not affect its lifetime. 

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/language/reference_initialization&action=edit&section=11 "Edit section: Notes")] Notes

References appear without initializers only in function parameter declaration, in function return type declaration, in the declaration of a class member, and with the [`extern`](storage_duration.html "cpp/language/storage duration") specifier. 

Until the resolution of [CWG issue 1696](https://cplusplus.github.io/CWG/issues/1696.html), a temporary is permitted to bound to a reference member in a constructor [initializer list](initializer_list.html "cpp/language/initializer list"), and it persists only until the constructor exits, not as long as the object exists. Such initialization is ill-formed since [CWG 1696](https://cplusplus.github.io/CWG/issues/1696.html), although many compilers still support it (a notable exception is clang).

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/language/reference_initialization&action=edit&section=13 "Edit section: Defect reports")] Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[CWG 391](https://cplusplus.github.io/CWG/issues/391.html) | C++98  | initialize a reference to const-qualified type with a class type  
rvalue might create a temporary, and a constructor of that class  
was required in order to copy the rvalue into that temporary  | no temporary is  
created, constructor  
is not required   
[CWG 450](https://cplusplus.github.io/CWG/issues/450.html) | C++98  | a reference to const-qualified array could not be  
initialized with a reference-compatible array rvalue  | allowed   
[CWG 589](https://cplusplus.github.io/CWG/issues/589.html) | C++98  | a reference could not bind directly to an array or class rvalue  | allowed   
[CWG 656](https://cplusplus.github.io/CWG/issues/656.html) | C++98  | a reference to const-qualified type initialized with a type which is not  
reference-compatible but has a conversion function to a reference-  
compatible type was bound to a temporary copied from the return  
value (or its base class subobject) of the conversion function  | bound to the return  
value (or its base class  
subobject) directly   
[CWG 1287](https://cplusplus.github.io/CWG/issues/1287.html) | C++11  | the conversion from target of class type to another  
reference-compatible type could only be implicit  | allow explicit  
conversions   
[CWG 1295](https://cplusplus.github.io/CWG/issues/1295.html) | C++11  | a reference could bind to a bit-field xvalue  | prohibited   
[CWG 1299](https://cplusplus.github.io/CWG/issues/1299.html) | C++98  | the definition of temporary was unclear  | made clear   
[CWG 1571](https://cplusplus.github.io/CWG/issues/1571.html) | C++98  | user-defined conversions in indirect  
binding did not consider the type of target | considered   
[CWG 1604](https://cplusplus.github.io/CWG/issues/1604.html) | C++98  | user-defined conversions were not considered in indirect binding  | considered   
[CWG 2352](https://cplusplus.github.io/CWG/issues/2352.html) | C++98  | reference compatibility did not consider qualification conversions  | considered   
[CWG 2481](https://cplusplus.github.io/CWG/issues/2481.html) | C++17  | cv-qualification was not added to the result type  
of temporary materialization in indirect binding  | added   
[CWG 2657](https://cplusplus.github.io/CWG/issues/2657.html) | C++17  | cv-qualification was not added to the result type  
of temporary materialization in direct binding  | added   
[CWG 2801](https://cplusplus.github.io/CWG/issues/2801.html) | C++98  | reference-related types were allowed for indirect binding  | prohibited   
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/language/reference_initialization&action=edit&section=14 "Edit section: See also")] See also

  * [constructor](initializer_list.html "cpp/language/constructor")
  * [converting constructor](converting_constructor.html "cpp/language/converting constructor")
  * [copy assignment](as_operator.html "cpp/language/copy assignment")
  * [copy constructor](copy_constructor.html "cpp/language/copy constructor")
  * [`explicit`](explicit.html "cpp/language/explicit")
  * [initialization](initialization.html "cpp/language/initialization")
    * [constant initialization](constant_initialization.html "cpp/language/constant initialization")
    * [copy initialization](copy_initialization.html "cpp/language/copy initialization")
    * [direct initialization](direct_initialization.html "cpp/language/direct initialization")
    * [list initialization](list_initialization.html "cpp/language/list initialization")
  * [move assignment](move_operator.html "cpp/language/move assignment")
  * [move constructor](move_constructor.html "cpp/language/move constructor")
  * [`new`](new.html "cpp/language/new")


