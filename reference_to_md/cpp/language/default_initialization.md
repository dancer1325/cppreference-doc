

  
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
| **Default-initialization**  
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
  
  
  

---  
  

---  
  


[ Initialization](initialization.html "cpp/language/initialization")

[Initializer](initialization.html "cpp/language/initialization")  
---  
**Default initialization**  
[Value initialization](value_initialization.html "cpp/language/value initialization")  
[Direct initialization](direct_initialization.html "cpp/language/direct initialization")  
[Copy-initialization](copy_initialization.html "cpp/language/copy initialization")  
[List initialization](list_initialization.html "cpp/language/list initialization") (C++11)  
[Aggregate initialization](aggregate_initialization.html "cpp/language/aggregate initialization")  
[Reference initialization](reference_initialization.html "cpp/language/reference initialization")  
[Copy elision](copy_elision.html "cpp/language/copy elision")  
[Static initialization](initialization.html#Static_initialization "cpp/language/initialization")  
[Zero initialization](zero_initialization.html "cpp/language/zero initialization")  
[Constant initialization](constant_initialization.html "cpp/language/constant initialization")  
[Dynamic non-local initialization](initialization.html#Dynamic_initialization "cpp/language/initialization")  
[Ordered dynamic initialization](initialization.html#Dynamic_initialization "cpp/language/initialization")  
[Unordered dynamic initialization](initialization.html#Dynamic_initialization "cpp/language/initialization")  
[Class member initialization](initialization.html#Class_member_initialization "cpp/language/initialization")  
[Member initializer list](initializer_list.html "cpp/language/initializer list")  
[Default member initializer](data_members.html#Member_initialization "cpp/language/data members") (C++11)  
  


This is the initialization performed when an object is constructed with no initializer. 

## Contents

  * [1 Syntax](default_initialization.html#Syntax)
  * [2 Explanation](default_initialization.html#Explanation)
  * [3 Default-initialization of a const object](default_initialization.html#Default-initialization_of_a_const_object)
  * [4 Indeterminate and erroneous values](default_initialization.html#Indeterminate_and_erroneous_values)
    * [4.1 Special cases](default_initialization.html#Special_cases)
  * [5 Notes](default_initialization.html#Notes)
  * [6 Example](default_initialization.html#Example)
  * [7 Defect reports](default_initialization.html#Defect_reports)
  * [8 See also](default_initialization.html#See_also)

  
---  
  
### Syntax  
  
---  
T object ﻿`**;**` |  (1)  |   
`**new**` T |  (2)  |   
  
### Explanation

Default-initialization is performed in three situations: 

1) when a variable with automatic, static, or thread-local [storage duration](storage_duration.html "cpp/language/storage duration") is declared with no initializer;

2) when an object with dynamic storage duration is created by a [new-expression](new.html "cpp/language/new") with no initializer;

3) when a base class or a non-static data member is not mentioned in a [constructor initializer list](initializer_list.html "cpp/language/constructor") and that constructor is called.

The effects of default-initialization are: 

  * if `T` is a (possibly cv-qualified) non-POD(until C++11) class type, the constructors are considered and subjected to [overload resolution](overload_resolution.html "cpp/language/overload resolution") against the empty argument list. The constructor selected (which is one of the [default constructors](default_constructor.html "cpp/language/default constructor")) is called to provide the initial value for the new object; 
  * if `T` is an array type, every element of the array is default-initialized; 
  * otherwise, no initialization is performed (see [notes](default_initialization.html#Notes)). 

Only (possibly cv-qualified) non-POD class types (or arrays thereof) with automatic storage duration were considered to be default-initialized when no initializer is used. Scalars and POD types with dynamic storage duration were considered to be not initialized (since C++11, this situation was reclassified as a form of default-initialization).  | (until C++11)  
---|---  
  
### Default-initialization of a const object

If a program calls for the default-initialization of an object of a [const](cv.html "cpp/language/cv")-qualified type `T`, T shall be a _const-default-constructible_ class type or array thereof. 

A class type `T` is const-default-constructible if default-initialization of `T` would invoke a user-provided constructor of `T` (not inherited from a base class)(since C++11) or if 

  * each direct non-static data member `M` of `T` is of class type `X` (or array thereof), `X` is const-default-constructible, and 
  * `T` has no direct [variant members](union.html#Union-like_classes "cpp/language/union"), and 

| (until C++11)  
---|---  
  
  * each direct non-variant non-static data member `M` of `T` has a [default member initializer](data_members.html#Member_initialization "cpp/language/data members") or, if `M` is of class type `X` (or array thereof), `X` is const-default-constructible, 
  * if `T` is a union with at least one non-static data member, exactly one [variant member](union.html#Union-like_classes "cpp/language/union") has a default member initializer, 
  * if `T` is not a union, for each anonymous union member with at least one non-static data member (if any), exactly one non-static data member has a default member initializer, and 

| (since C++11)  
  
each [potentially constructed](objects.html#Potentially_constructed_subobjects "cpp/language/object") base class of `T` is const-default-constructible. 

### Indeterminate and erroneous values

When storage for an object with automatic or dynamic storage duration is obtained, the object has an _indeterminate value_. If no initialization is performed for an object, that object retains an indeterminate value until that value is replaced.  | (until C++26)  
---|---  
When storage for an object with automatic or dynamic storage duration is obtained, the bytes comprising the storage for the object have the following initial value: 

  * If the object has dynamic storage duration, or is the object associated with a variable or [function parameter](function.html "cpp/language/function") whose first declaration is marked with `[[[indeterminate](attributes/indeterminate.html "cpp/language/attributes/indeterminate")]]`, the bytes have _indeterminate values_. 
  * Otherwise, the bytes have _erroneous values_ , where each value is determined by the implementation independently of the state of the program. 

If no initialization is performed for an object (including [subobjects](objects.html#Subobjects "cpp/language/object")), such a byte retains its initial value until that value is replaced. 

  * If any bit in the [value representation](objects.html#Object_representation_and_value_representation "cpp/language/object") has an indeterminate value, the object has an _indeterminate value_. 
  * Otherwise, if any bit in the value representation has an erroneous value, the object has an _erroneous value_. 

| (since C++26)  
  
If an evaluation produces an indeterminate value, the behavior is [undefined](ub.html "cpp/language/ub"). 

If an evaluation produces an erroneous value, the behavior is [erroneous](ub.html "cpp/language/ub").  | (since C++26)  
---|---  
  
#### Special cases

The following types are _uninitialized-friendly_ : 

  * [`std::byte`](../types/byte.html "cpp/types/byte")

| (since C++17)  
---|---  
  
  * unsigned char
  * char, if its underlying type is unsigned char



Given an indeterminate or erroneous(since C++26) value value, the _uninitialized result value_ of value is: 

  * An indeterminate value, if value is also an indeterminate value. 



  * value, if value is an erroneous value. 

| (since C++26)  
---|---  
  
If an evaluation eval produces an indeterminate or erroneous(since C++26) value value of an uninitialized-friendly type, the behavior is well-defined in the following cases: 

  * eval is the evaluation of one of the following expressions and operands: 



    

  * The second or third operand of a [conditional expression](operator_other.html#Conditional_operator "cpp/language/operator other"). 
  * The right operand of a [comma expression](operator_other.html#Built-in_comma_operator "cpp/language/operator other"). 
  * The operand of an [integral conversion](implicit_cast.html#Integral_conversions "cpp/language/implicit conversion"), [explicit cast](explicit_cast.html "cpp/language/explicit cast") or [`static_cast`](static_cast.html "cpp/language/static cast") to an uninitialized-friendly type. 
  * A [discarded-value expression](expressions.html#Discarded-value_expressions "cpp/language/expressions"). 


     In this case, the result of the operation is the uninitialized result value of value. 

  * eval is an evaluation of the right operand of a [simple assignment operator](operator_assignment.html#Built-in_simple_assignment_operator "cpp/language/operator assignment") whose left operand is an lvalue of an uninitialized-friendly type. 



     In this case, the value of the object referred to by the left operand is replaced by the uninitialized result value of value. 

  * eval is the evaluation of the initialization expression when initializing an object of an uninitialized-friendly type. 



    

  * value cannot be of type [`std::byte`](../types/byte.html "cpp/types/byte") if the object being initialized is not of type [`std::byte`](../types/byte.html "cpp/types/byte"). 


| (since C++17)  
---|---  
  
     In this case, that object is initialized to the uninitialized result value of value. 

Converting an indeterminate value of an uninitialized-friendly type produces an indeterminate value. 

Converting an erroneous value of an uninitialized-friendly type produces an erroneous value, the result of the conversion is the value of the converted operand.  | (since C++26)  
---|---  
      
    
    // Case 1: Uninitialized objects with dynamic storage duration
    // All C++ versions: indeterminate value + undefined behavior
    int f(bool b)
    {
        unsigned char* c = new unsigned char;
        unsigned char d = *c; // OK, “d” has an indeterminate value
        int e = d;            // undefined behavior
        return b ? d : 0;     // undefined behavior if “b” is true
    }
     
    // Case 2: Uninitialized objects with automatic storage duration
    // until C++26: indeterminate value + undefined behavior
    // since C++26: erroneous value + erroneous behavior
    int g(bool b)
    {
        unsigned char c;     // “c” has an indeterminate/erroneous value
     
        unsigned char d = c; // no undefined/erroneous behavior,
                             // but “d” has an indeterminate/erroneous value
     
        [assert](../error/assert.html)(c == d);      // holds, but both integral promotions have
                             // undefined/erroneous behavior
     
        int e = d;           // undefined/erroneous behavior
        return b ? d : 0;    // undefined/erroneous behavior if “b” is true
    }
     
    // Same as case 2
    void h()
    {
        int d1, d2;  // “d1” and “d2” have indeterminate/erroneous values
        int e1 = d1; // undefined/erroneous behavior
        int e2 = d1; // undefined/erroneous behavior
     
        [assert](../error/assert.html)(e1 == e2); // holds
        [assert](../error/assert.html)(e1 == d1); // holds, undefined/erroneous behavior
        [assert](../error/assert.html)(e2 == d1); // holds, undefined/erroneous behavior
     
        // no undefined/erroneous behavior,
        // but “d2” has an indeterminate/erroneous value
        [std::memcpy](../string/byte/memcpy.html)(&d2, &d1, sizeof(int));
     
        [assert](../error/assert.html)(e1 == d2); // holds, undefined/erroneous behavior
        [assert](../error/assert.html)(e2 == d2); // holds, undefined/erroneous behavior
    }

### Notes

References and const scalar objects cannot be default-initialized. 

Feature-test macro | Value | Std | Feature   
---|---|---|---  
[`__cpp_constexpr`](../experimental/feature_test.html#cpp_constexpr "cpp/feature test") | [`201907L`](../compiler_support/20.html#cpp_constexpr_201907L "cpp/compiler support/20") | (C++20) | Trivial default-initialization and [asm-declaration](asm.html "cpp/language/asm") in constexpr functions   
  
### Example

Run this code
    
    
    #include <string>
     
    struct T1 { int mem; };
     
    struct T2
    {
        int mem;
        T2() {} // “mem” is not in the initializer list
    };
     
    int n; // static non-class, a two-phase initialization is done:
           // 1) zero-initialization initializes n to zero
           // 2) default-initialization does nothing, leaving n being zero
     
    int main()
    {
        [[maybe_unused]]
        int n;            // non-class, the value is indeterminate
        [std::string](../string/basic_string.html) s;    // class, calls default constructor, the value is ""
        [std::string](../string/basic_string.html) a[2]; // array, default-initializes the elements, the value is {"", ""}
    //  int& r;           // Error: a reference
    //  const int n;      // Error: a const non-class
    //  const T1 t1;      // Error: const class with implicit default constructor
        [[maybe_unused]]
        T1 t1;            // class, calls implicit default constructor
        const T2 t2;      // const class, calls the user-provided default constructor
                          // t2.mem is default-initialized
    }

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[CWG 178](https://cplusplus.github.io/CWG/issues/178.html) | C++98  | there was no value-initialization;  
empty initializer invoked default-initialization  
(though new T() also performs zero-initialization)  | empty initializer invokes  
value-initialization   
[CWG 253](https://cplusplus.github.io/CWG/issues/253.html) | C++98  | default-initialization of a const object could not  
call an implicitly declared default constructor  | allowed if all subobjects are initialized   
[CWG 616](https://cplusplus.github.io/CWG/issues/616.html) | C++98  | lvalue to rvalue conversion of any  
uninitialized object was always UB  | indeterminate unsigned char is allowed   
[CWG 1787](https://cplusplus.github.io/CWG/issues/1787.html) | C++98  | read from an indeterminate unsigned char  
cached in a register was UB  | made well-defined   
  
### See also

  * [converting constructor](converting_constructor.html "cpp/language/converting constructor")
  * [default constructor](default_constructor.html "cpp/language/default constructor")
  * [`explicit`](explicit.html "cpp/language/explicit")
  * [initialization](initialization.html "cpp/language/initialization")
    * [aggregate initialization](aggregate_initialization.html "cpp/language/aggregate initialization")
    * [constant initialization](constant_initialization.html "cpp/language/constant initialization")
    * [copy-initialization](copy_initialization.html "cpp/language/copy initialization")
    * [direct-initialization](direct_initialization.html "cpp/language/direct initialization")
    * [list-initialization](list_initialization.html "cpp/language/list initialization")
    * [reference initialization](reference_initialization.html "cpp/language/reference initialization")
    * [value-initialization](value_initialization.html "cpp/language/value initialization")
    * [zero-initialization](zero_initialization.html "cpp/language/zero initialization")
  * [`new`](new.html "cpp/language/new")


  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
