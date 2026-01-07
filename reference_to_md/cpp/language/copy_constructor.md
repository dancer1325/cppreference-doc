

  
  
  
  
  

  
  
  

---  
  
  
  
  
Special member functions  
| [Default constructor](default_constructor.html "cpp/language/default constructor")  
---  
**Copy constructor**  
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
[Member functions](member_functions.html "cpp/language/member functions")  
[Member access specifiers](access.html "cpp/language/access")  
[Constructors and member initializer lists](initializer_list.html "cpp/language/constructor")  
[Default member initializer](data_members.html#Member_initialization "cpp/language/data members") (C++11)  
[`friend` specifier](friend.html "cpp/language/friend")  
[`explicit` specifier](explicit.html "cpp/language/explicit")  
[Converting constructor](converting_constructor.html "cpp/language/converting constructor")  
Special member functions  
[Default constructor](default_constructor.html "cpp/language/default constructor")  
**Copy constructor**  
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
  


A copy constructor is a [constructor](initializer_list.html "cpp/language/constructor") which can be called with an argument of the same class type and copies the content of the argument without mutating the argument. 

## Contents

  * [1 Syntax](copy_constructor.html#Syntax)
  * [2 Explanation](copy_constructor.html#Explanation)
  * [3 Implicitly-declared copy constructor](copy_constructor.html#Implicitly-declared_copy_constructor)
  * [4 Implicitly-defined copy constructor](copy_constructor.html#Implicitly-defined_copy_constructor)
  * [5 Deleted copy constructor](copy_constructor.html#Deleted_copy_constructor)
  * [6 Trivial copy constructor](copy_constructor.html#Trivial_copy_constructor)
  * [7 Eligible copy constructor](copy_constructor.html#Eligible_copy_constructor)
  * [8 Notes](copy_constructor.html#Notes)
  * [9 Example](copy_constructor.html#Example)
  * [10 Defect reports](copy_constructor.html#Defect_reports)
  * [11 See also](copy_constructor.html#See_also)

  
---  
  
### Syntax  
  
---  
class-name ﻿`**(**` parameter-list ﻿`**);**` |  (1)  |   
class-name ﻿`**(**` parameter-list ﻿`**)**` function-body |  (2)  |   
class-name ﻿`**(**` single-parameter-list ﻿`**) = default;**` |  (3)  |  (since C++11)  
class-name ﻿`**(**` parameter-list ﻿`**) = delete;**` |  (4)  |  (since C++11)  
class-name ﻿`**::**` class-name ﻿`**(**` parameter-list ﻿`**)**` function-body |  (5)  |   
class-name ﻿`**::**` class-name ﻿`**(**` single-parameter-list ﻿`**) = default;**` |  (6)  |  (since C++11)  
class-name |  \-  |  the class whose copy constructor is being declared   
---|---|---  
parameter-list |  \-  |  a non-empty [parameter list](function.html#Parameter_list "cpp/language/function") satisfying all following conditions: 

  * given the class type as `T`, the first parameter is of type T&, const T&, volatile T& or const volatile T&, and 
  * either there are no other parameters, or all other parameters have [default arguments](default_arguments.html "cpp/language/default arguments"). 

  
single-parameter-list |  \-  |  a [parameter list](function.html#Parameter_list "cpp/language/function") of only one parameter, which is of type T&, const T&, volatile T& or const volatile T& and does not have a default argument   
function-body |  \-  |  the [function body](initializer_list.html "cpp/language/constructor") of the copy constructor   
  
### Explanation

1) Declaration of a copy constructor inside of class definition.

2-4) Definition of a copy constructor inside of class definition.

3) The copy constructor is explicitly-defaulted.

4) The copy constructor is deleted.

5,6) Definition of a copy constructor outside of class definition (the class must contain a declaration (1)).

6) The copy constructor is explicitly-defaulted.
    
    
    struct X
    {
        X(X& other); // copy constructor
    //  X(X other);  // Error: incorrect parameter type
    };
     
    union Y
    {
        Y(Y& other, int num = 1); // copy constructor with multiple parameters
    //  Y(Y& other, int num);     // Error: `num` has no default argument
    };

The copy constructor is called whenever an object is [initialized](initialization.html "cpp/language/initialization") (by [direct-initialization](direct_initialization.html "cpp/language/direct initialization") or [copy-initialization](copy_initialization.html "cpp/language/copy initialization")) from another object of the same type (unless [overload resolution](overload_resolution.html "cpp/language/overload resolution") selects a better match or the call is [elided](copy_elision.html "cpp/language/copy elision")), which includes 

  * initialization: T a = b; or T a(b);, where b is of type `T`; 
  * function argument passing: f(a);, where a is of type `T` and f is void f(T t); 
  * function return: return a; inside a function such as T f(), where a is of type `T`, which has no [move constructor](move_constructor.html "cpp/language/move constructor"). 



### Implicitly-declared copy constructor

If no user-defined copy constructors are provided for a class type, the compiler will always declare a copy constructor as a non-[explicit](explicit.html "cpp/language/explicit") inline public member of its class. This implicitly-declared copy constructor has the form T::T(const T&) if all of the following are true: 

  * each direct and virtual base `B` of `T` has a copy constructor whose parameters are of type const B& or const volatile B&; 
  * each non-static data member `M` of `T` of class type or array of class type has a copy constructor whose parameters are of type const M& or const volatile M&. 



Otherwise, the implicitly-declared copy constructor is T::T(T&). 

Due to these rules, the implicitly-declared copy constructor cannot bind to a volatile lvalue argument. 

A class can have multiple copy constructors, e.g. both T::T(const T&) and T::T(T&). 

Even if some user-defined copy constructors are present, the user may still force the implicit copy constructor declaration with the keyword default.  | (since C++11)  
---|---  
  
The implicitly-declared (or defaulted on its first declaration) copy constructor has an exception specification as described in [dynamic exception specification](except_spec.html "cpp/language/except spec")(until C++17)[noexcept specification](noexcept_spec.html "cpp/language/noexcept spec")(since C++17). 

### Implicitly-defined copy constructor

If the implicitly-declared copy constructor is not deleted, it is defined (that is, a function body is generated and compiled) by the compiler if [odr-used](definition.html#ODR-use "cpp/language/definition") or [needed for constant evaluation](constant_expression.html#Functions_and_variables_needed_for_constant_evaluation "cpp/language/constant expression")(since C++11). For union types, the implicitly-defined copy constructor copies the object representation (as by [std::memmove](../string/byte/memmove.html "cpp/string/byte/memmove")). For non-union class types, the constructor performs full member-wise copy of the object's direct base subobjects and member subobjects, in their initialization order, using direct initialization. For each non-static data member of a reference type, the copy constructor binds the reference to the same object or function to which the source reference is bound. 

If this satisfies the requirements of a [constexpr constructor](constexpr.html#constexpr_constructor "cpp/language/constexpr")(until C++23)[constexpr function](constexpr.html#constexpr_function "cpp/language/constexpr")(since C++23), the generated copy constructor is constexpr. The generation of the implicitly-defined copy constructor is deprecated if `T` has a user-defined destructor or user-defined copy assignment operator.  | (since C++11)  
---|---  
  
### Deleted copy constructor

The implicitly-declared or explicitly-defaulted(since C++11) copy constructor for class `T` is undefined(until C++11)defined as deleted(since C++11) if any of the following conditions is satisfied: 

  * `T` has a non-static data member of rvalue reference type. 

| (since C++11)  
---|---  
  
  * `T` has a [potentially constructed subobject](objects.html#Potentially_constructed_subobject "cpp/language/object") of class type `M` (or possibly multi-dimensional array thereof) such that 



    

  * `M` has a destructor that is deleted or(since C++11) inaccessible from the copy constructor, or 
  * the overload resolution as applied to find `M`'s copy constructor 



    

  * does not result in a usable candidate, or 
  * in the case of the subobject being a [variant member](union.html#Union-like_classes "cpp/language/union"), selects a non-trivial function. 


The implicitly-declared copy constructor for class `T` is defined as deleted if `T` declares a [move constructor](move_constructor.html "cpp/language/move constructor") or [move assignment operator](move_operator.html "cpp/language/move assignment").  | (since C++11)  
---|---  
  
### Trivial copy constructor

The copy constructor for class `T` is trivial if all of the following are true: 

  * it is not user-provided (that is, it is implicitly-defined or defaulted); 
  * `T` has no virtual member functions; 
  * `T` has no virtual base classes; 
  * the copy constructor selected for every direct base of `T` is trivial; 
  * the copy constructor selected for every non-static class type (or array of class type) member of `T` is trivial; 



A trivial copy constructor for a non-union class effectively copies every scalar subobject (including, recursively, subobject of subobjects and so forth) of the argument and performs no other action. However, padding bytes need not be copied, and even the object representations of the copied subobjects need not be the same as long as their values are identical. 

[TriviallyCopyable](../named_req/TriviallyCopyable.html "cpp/named req/TriviallyCopyable") objects can be copied by copying their object representations manually, e.g. with [std::memmove](../string/byte/memmove.html "cpp/string/byte/memmove"). All data types compatible with the C language (POD types) are trivially copyable. 

### Eligible copy constructor

A copy constructor is eligible if it is either user-declared or both implicitly-declared and definable.  | (until C++11)  
---|---  
A copy constructor is eligible if it is not deleted.  | (since C++11)  
(until C++20)  
A copy constructor is eligible if all following conditions are satisfied: 

  * It is not deleted. 
  * Its [associated constraints](constraints.html "cpp/language/constraints") (if any) are satisfied. 
  * No copy constructor whose associated constraints are satisfied is [more constrained](constraints.html#Partial_ordering_of_constraints "cpp/language/constraints"). 

| (since C++20)  
  
Triviality of eligible copy constructors determines whether the class is an [implicit-lifetime type](lifetime.html#Implicit-lifetime_types "cpp/language/lifetime"), and whether the class is a [trivially copyable type](../named_req/TriviallyCopyable.html "cpp/named req/TriviallyCopyable"). 

### Notes

In many situations, copy constructors are optimized out even if they would produce observable side-effects, see [copy elision](copy_elision.html "cpp/language/copy elision"). 

### Example
    
    
    struct A
    {
        int n;
        A(int n = 1) : n(n) {}
        A(const A& a) : n(a.n) {} // user-defined copy constructor
    };
     
    struct B : A
    {
        // implicit default constructor B::B()
        // implicit copy constructor B::B(const B&)
    };
     
    struct C : B
    {
        C() : B() {}
    private:
        C(const C&); // non-copyable, C++98 style
    };
     
    int main()
    {
        A a1(7);
        A a2(a1); // calls the copy constructor
     
        B b;
        B b2 = b;
        A a3 = b; // conversion to A& and copy constructor
     
        volatile A va(10);
        // A a4 = va; // compile error
     
        C c;
        // C c2 = c; // compile error
    }

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[CWG 1353](https://cplusplus.github.io/CWG/issues/1353.html) | C++98  | the conditions where implicitly-declared copy constructors  
are undefined did not consider multi-dimensional array types  | consider these types   
[CWG 2094](https://cplusplus.github.io/CWG/issues/2094.html) | C++11  | volatile members make copy non-trivial ([CWG issue 496](https://cplusplus.github.io/CWG/issues/496.html))  | triviality not affected   
[CWG 2171](https://cplusplus.github.io/CWG/issues/2171.html) | C++11  | X(X&) = default was non-trivial  | made trivial   
[CWG 2595](https://cplusplus.github.io/CWG/issues/2595.html) | C++20  | a copy constructor was not eligible if there is  
another copy constructor which is more constrained  
but does not satisfy its associated constraints  | it can be eligible in this case   
  
### See also

  * [converting constructor](converting_constructor.html "cpp/language/converting constructor")
  * [copy assignment](as_operator.html "cpp/language/copy assignment")
  * [copy elision](copy_elision.html "cpp/language/copy elision")
  * [default constructor](default_constructor.html "cpp/language/default constructor")
  * [destructor](destructor.html "cpp/language/destructor")
  * [`explicit`](explicit.html "cpp/language/explicit")
  * [initialization](initialization.html "cpp/language/initialization")
    * [aggregate initialization](aggregate_initialization.html "cpp/language/aggregate initialization")
    * [constant initialization](constant_initialization.html "cpp/language/constant initialization")
    * [copy initialization](copy_initialization.html "cpp/language/copy initialization")
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


