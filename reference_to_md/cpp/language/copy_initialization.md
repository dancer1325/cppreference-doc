

  
  
  
  
  
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
**Copy-initialization**  
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
[Default initialization](default_initialization.html "cpp/language/default initialization")  
[Value initialization](value_initialization.html "cpp/language/value initialization")  
[Direct initialization](direct_initialization.html "cpp/language/direct initialization")  
**Copy-initialization**  
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
  


Initializes an object from another object. 

## Contents

  * [1 Syntax](copy_initialization.html#Syntax)
  * [2 Explanation](copy_initialization.html#Explanation)
  * [3 Notes](copy_initialization.html#Notes)
  * [4 Example](copy_initialization.html#Example)
  * [5 Defect reports](copy_initialization.html#Defect_reports)
  * [6 See also](copy_initialization.html#See_also)

  
---  
  
### Syntax  
  
---  
T object `**=**` other`**;**` |  (1)  |   
T object `**=**` `**{**` other`**};**` |  (2)  |  (until C++11)  
f`**(**` other`**)**` |  (3)  |   
`**return**` other`**;**` |  (4)  |   
`**throw**` object`**;**` `**catch (**` T object`**)**` |  (5)  |   
T array`**[**` N`**] = {**` other-sequence`**};**` |  (6)  |   
  
### Explanation

Copy-initialization is performed in the following situations: 

1) When a named variable (automatic, static, or thread-local) of a non-reference type `T` is declared with the initializer consisting of an equals sign followed by an expression.

2) (until C++11) When a named variable of a scalar type `T` is declared with the initializer consisting of an equals sign followed by a brace-enclosed expression (Note: as of C++11, this is classified as [list initialization](list_initialization.html "cpp/language/list initialization"), and narrowing conversion is not allowed).

3) When [passing an argument](operator_other.html#Built-in_function_call_operator "cpp/language/operator other") to a function by value.

4) When [returning](return.html "cpp/language/return") from a function that returns by value.

5) When [throwing](throw.html "cpp/language/throw") or [catching](catch.html "cpp/language/catch") an exception by value.

6) As part of [aggregate initialization](aggregate_initialization.html "cpp/language/aggregate initialization"), to initialize each element for which an initializer is provided.

The effects of copy-initialization are: 

  * First, if `T` is a class type and the initializer is a [prvalue](value_category.html "cpp/language/value category") expression whose cv-unqualified type is the same class as `T`, the initializer expression itself, rather than a temporary materialized from it, is used to initialize the destination object: see [copy elision](copy_elision.html "cpp/language/copy elision"). 

| (since C++17)  
---|---  
  
  * First(until C++17)Otherwise(since C++17), if `T` is a class type and the cv-unqualified version of the type of other is `T` or a class derived from `T`, the [non-explicit constructors](converting_constructor.html "cpp/language/converting constructor") of `T` are examined and the best match is selected by overload resolution. That constructor is then called to initialize the object. 


  * Otherwise, if `T` is a class type, and the cv-unqualified version of the type of other is not `T` or derived from `T`, or if `T` is non-class type, but the type of other is a class type, [user-defined conversion sequences](implicit_cast.html "cpp/language/implicit cast") that can convert from the type of other to `T` (or to a type derived from `T` if `T` is a class type and a conversion function is available) are examined and the best one is selected through overload resolution. The result of the conversion, which is a rvalue temporary(until C++11)prvalue temporary(since C++11)(until C++17)prvalue expression(since C++17) of the cv-unqualified version of `T` if a [converting constructor](converting_constructor.html "cpp/language/converting constructor") was used, is then used to [direct-initialize](direct_initialization.html "cpp/language/direct initialization") the object. The last step is usually [optimized out](copy_elision.html "cpp/language/copy elision") and the result of the conversion is constructed directly in the memory allocated for the target object, but the appropriate constructor (move or copy) is required to be accessible even though it's not used.(until C++17)


  * Otherwise (if neither `T` nor the type of other are class types), [standard conversions](implicit_cast.html "cpp/language/implicit cast") are used, if necessary, to convert the value of other to the cv-unqualified version of `T`. 



### Notes

Copy-initialization is less permissive than direct-initialization: [explicit constructors](explicit.html "cpp/language/explicit") are not [converting constructors](converting_constructor.html "cpp/language/converting constructor") and are not considered for copy-initialization. 
    
    
    struct Exp { explicit Exp(const char*) {} }; // not convertible from const char*
    Exp e1("abc");  // OK
    Exp e2 = "abc"; // Error, copy-initialization does not consider explicit constructor
     
    struct Imp { Imp(const char*) {} }; // convertible from const char*
    Imp i1("abc");  // OK
    Imp i2 = "abc"; // OK

In addition, the implicit conversion in copy-initialization must produce `T` directly from the initializer, while, e.g. direct-initialization expects an implicit conversion from the initializer to an argument of `T`'s constructor. 
    
    
    struct S { S([std::string](../string/basic_string.html)) {} }; // implicitly convertible from std::string
    S s("abc");   // OK: conversion from const char[4] to std::string
    S s = "abc";  // Error: no conversion from const char[4] to S
    S s = "abc"s; // OK: conversion from std::string to S

If other is an rvalue expression, a [move constructor](move_constructor.html "cpp/language/move constructor") will be selected by overload resolution and called during copy-initialization. This is still considered copy-initialization; there is no special term (e.g., move-initialization) for this case. 

[Implicit conversion](implicit_cast.html "cpp/language/implicit cast") is defined in terms of copy-initialization: if an object of type `T` can be copy-initialized with expression `E`, then `E` is implicitly convertible to `T`. 

The equals sign, `**=**`, in copy-initialization of a named variable is not related to the assignment operator. Assignment operator overloads have no effect on copy-initialization. 

### Example

Run this code
    
    
    #include <memory>
    #include <string>
    #include <utility>
     
    struct A
    {
        operator int() { return 12;}
    };
     
    struct B
    {
        B(int) {}
    };
     
    int main()
    {
        [std::string](../string/basic_string.html) s = "test";        // OK: constructor is non-explicit
        [std::string](../string/basic_string.html) s2 = std::move(s); // this copy-initialization performs a move
     
    //  std::unique_ptr<int> p = new int(1); // error: constructor is explicit
        [std::unique_ptr](../memory/unique_ptr.html)<int> p(new int(1));  // OK: direct-initialization
     
        int n = 3.14;    // floating-integral conversion
        const int b = n; // const doesn't matter
        int c = b;       // ...either way
     
        A a;
        B b0 = 12;
    //  B b1 = a;       // < error: conversion from 'A' to non-scalar type 'B' requested
        B b2{a};        // < identical, calling A::operator int(), then B::B(int)
        B b3 = {a};     // <
        auto b4 = B{a}; // <
     
    //  b0 = a;         // < error, assignment operator overload needed
     
        [](...){}(c, b0, b3, b4); // pretend these variables are used
    }

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[CWG 5](https://cplusplus.github.io/CWG/issues/5.html) | C++98  | the cv-qualification of the destination type is applied to  
the temporary initialized by a converting constructor  | the temporary is not cv-qualified   
[CWG 177](https://cplusplus.github.io/CWG/issues/177.html) | C++98  | the value category of the temporary created during  
copy-initialization of a class object is unspecified  | specified as rvalue   
  
### See also

  * [copy elision](copy_elision.html "cpp/language/copy elision")
  * [converting constructor](converting_constructor.html "cpp/language/converting constructor")
  * [copy assignment](as_operator.html "cpp/language/copy assignment")
  * [copy constructor](copy_constructor.html "cpp/language/copy constructor")
  * [default constructor](default_constructor.html "cpp/language/default constructor")
  * [destructor](destructor.html "cpp/language/destructor")
  * [`explicit`](explicit.html "cpp/language/explicit")
  * [initialization](initialization.html "cpp/language/initialization")
    * [aggregate initialization](aggregate_initialization.html "cpp/language/aggregate initialization")
    * [constant initialization](constant_initialization.html "cpp/language/constant initialization")
    * [default initialization](default_initialization.html "cpp/language/default initialization")
    * [direct initialization](direct_initialization.html "cpp/language/direct initialization")
    * [initializer list](initializer_list.html "cpp/language/initializer list")
    * [list initialization](list_initialization.html "cpp/language/list initialization")
    * [reference initialization](reference_initialization.html "cpp/language/reference initialization")
    * [value initialization](value_initialization.html "cpp/language/value initialization")
    * [zero initialization](zero_initialization.html "cpp/language/zero initialization")
  * [move assignment](move_operator.html "cpp/language/move assignment")
  * [move constructor](move_constructor.html "cpp/language/move constructor")
  * [`new`](new.html "cpp/language/new")


