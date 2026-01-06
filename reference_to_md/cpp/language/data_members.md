

  
  
  
  
  

  
  
  

---  
  

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
**Data members**  
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
[Copy constructor](copy_constructor.html "cpp/language/copy constructor")  
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
  


Non-static data members are declared in a [member specification](class.html "cpp/language/class") of a class. 
    
    
    class S
    {
        int n;              // non-static data member
        int& r;             // non-static data member of reference type
        int a[2] = {1, 2};  // non-static data member with default member initializer (C++11)
        [std::string](../string/basic_string.html) s, *ps; // two non-static data members
     
        struct NestedS
        {
            [std::string](../string/basic_string.html) s;
        } d5;               // non-static data member of nested type
     
        char bit : 2;       // two-bit bitfield
    };

Any [simple declarations](declarations.html "cpp/language/declarations") are allowed, except 

  * [`extern`](../keyword/extern.html "cpp/keyword/extern") and [`register`](../keyword/register.html "cpp/keyword/register") storage class specifiers are not allowed; 



  * [`thread_local`](../keyword/thread_local.html "cpp/keyword/thread local") storage class specifier is not allowed (but it is allowed for [static](static.html "cpp/language/static") data members); 

| (since C++11)  
---|---  
  
  * [incomplete types](incomplete_type.html "cpp/language/incomplete type"), [abstract class types](abstract_class.html "cpp/language/abstract class"), and arrays thereof are not allowed: in particular, a class `C` cannot have a non-static data member of type `C`, although it can have a non-static data member of type `C&` (reference to C) or `C*` (pointer to `C`); 
  * a non-static data member cannot have the same name as the name of the class if at least one user-declared constructor is present; 



  * a [placeholder type specifier](auto.html "cpp/language/auto") (i.e. auto, decltype(auto)(since C++14), a class template name subject to [deduction](ctad.html "cpp/language/class template argument deduction")(since C++17), a [constrained](constraints.html "cpp/language/constraints") placeholder(since C++20)) cannot be used in a non-static data member declaration (although it is allowed for static data members that are [initialized in the class definition](static.html#Constant_static_members "cpp/language/static")). 

| (since C++11)  
---|---  
  
In addition, [bit-field](bit_field.html "cpp/language/bit field") declarations are allowed. 

## Contents

  * [1 Layout](data_members.html#Layout)
  * [2 Standard-layout](data_members.html#Standard-layout)
  * [3 Member initialization](data_members.html#Member_initialization)
  * [4 Usage](data_members.html#Usage)
  * [5 Notes](data_members.html#Notes)
  * [6 Defect reports](data_members.html#Defect_reports)
  * [7 See also](data_members.html#See_also)

  
---  
  
### Layout

When an object of some class `C` is created, each non-static data member of non-reference type is allocated in some part of the object representation of `C`. Whether reference members occupy any storage is implementation-defined, but their [storage duration](storage_duration.html "cpp/language/storage duration") is the same as that of the object in which they are members. 

For non-[union](union.html "cpp/language/union") class types, [non-zero-sized](objects.html#Subobjects "cpp/language/object")(since C++20) members not separated by an [access specifier](access.html "cpp/language/access")(until C++11)with the same [member access](access.html "cpp/language/access")(since C++11) are always allocated so that the members declared later have higher addresses within a class object. Members separated by an access specifier(until C++11)with different access control(since C++11) are allocated in unspecified order (the compiler may group them together).  | (until C++23)  
---|---  
For non-[union](union.html "cpp/language/union") class types, [non-zero-sized](objects.html#Size "cpp/language/object") members are always allocated so that the members declared later have higher addresses within a class object. Note that access control of member still affects the standard-layout property (see below).  | (since C++23)  
  
Alignment requirements may necessitate padding between members, or after the last member of a class. 

### Standard-layout

A class is considered to be _standard-layout_ and to have properties described below if and only if it is a [POD class](classes.html#POD_class "cpp/language/classes").  | (until C++11)  
---|---  
A class where all non-static data members have the same access control and certain other conditions are satisfied is known as _standard-layout class_ (see [standard-layout class](classes.html#Standard-layout_class "cpp/language/classes") for the list of requirements).  | (since C++11)  
  
The _common initial sequence_ of two standard-layout non-union class types is the longest sequence of non-static data members and bit-fields in declaration order, starting with the first such entity in each of the classes, such that 

  * if __has_cpp_attribute(no_unique_address) is not ​0​, neither entity is declared with `[[[no_unique_address](attributes/no_unique_address.html "cpp/language/attributes/no unique address")]]` attribute, 

| (since C++20)  
---|---  
  
  * corresponding entities have layout-compatible types, 
  * corresponding entities have the same [alignment requirements](objects.html#Alignment "cpp/language/object"), and 
  * either both entities are bit-fields with the same width or neither is a bit-field. 


    
    
    struct A { int a; char b; };
    struct B { const int b1; volatile char b2; }; 
    // A and B's common initial sequence is A.a, A.b and B.b1, B.b2
     
    struct C { int c; unsigned : 0; char b; };
    // A and C's common initial sequence is A.a and C.c
     
    struct D { int d; char b : 4; };
    // A and D's common initial sequence is A.a and D.d
     
    struct E { unsigned int e; char b; };
    // A and E's common initial sequence is empty

Two standard-layout non-union class types are called _layout-compatible_ if they are the same type ignoring cv-qualifiers, if any, are layout-compatible [enumerations](enum.html "cpp/language/enum") (i.e. enumerations with the same underlying type), or if their _common initial sequence_ consists of every non-static data member and bit-field (in the example above, `A` and `B` are layout-compatible). 

Two standard-layout unions are called _layout-compatible_ if they have the same number of non-static data members and corresponding non-static data members (in any order) have layout-compatible types. 

Standard-layout types have the following special properties: 

    

  * In a standard-layout union with an active member of non-union class type `T1`, it is permitted to read a non-static data member `m` of another union member of non-union class type `T2` provided `m` is part of the common initial sequence of `T1` and `T2` (except that reading a volatile member through non-volatile glvalue is undefined). 
  * A pointer to an object of standard-layout class type can be [`reinterpret_cast`](reinterpret_cast.html "cpp/language/reinterpret cast") to pointer to its first non-static non-bitfield data member (if it has non-static data members) or otherwise any of its base class subobjects (if it has any), and vice versa. In other words, padding is not allowed before the first data member of a standard-layout type. Note that [strict aliasing](reinterpret_cast.html#Type_aliasing "cpp/language/reinterpret cast") rules still apply to the result of such cast. 
  * The macro [offsetof](../types/offsetof.html "cpp/types/offsetof") may be used to determine the offset of any member from the beginning of a standard-layout class. 



### Member initialization

Non-static data members may be initialized in one of two ways: 

1) In the [member initializer list](initializer_list.html "cpp/language/constructor") of the constructor. 
    
    
    struct S
    {
        int n;
        [std::string](../string/basic_string.html) s;
        S() : n(7) {} // direct-initializes n, default-initializes s
    };

2) Through a _default member initializer_ , which is a brace or equals [initializer](initialization.html "cpp/language/initialization") included in the member declaration and is used if the member is omitted from the member initializer list of a constructor. 
    
    
    struct S
    {
        int n = 7;
        [std::string](../string/basic_string.html) s{'a', 'b', 'c'};
        S() {} // default member initializer will copy-initialize n, list-initialize s
    };

If a member has a default member initializer and also appears in the member initialization list in a constructor, the default member initializer is ignored for that constructor.  Run this code
    
    
    #include <iostream>
     
    int x = 0;
    struct S
    {
        int n = ++x;
        S() {}                 // uses default member initializer
        S(int arg) : n(arg) {} // uses member initializer 
    };
     
    int main()
    {
        [std::cout](../io/cout.html) << x << '\n'; // prints 0
        S s1;                   // default initializer ran
        [std::cout](../io/cout.html) << x << '\n'; // prints 1
        S s2(7);                // default initializer did not run
        [std::cout](../io/cout.html) << x << '\n'; // prints 1
    }

|  Default member initializers are not allowed for [bit-field](bit_field.html "cpp/language/bit field") members.  | (until C++20)  
---|---  
  
Members of array type cannot deduce their size from member initializers: 
    
    
    struct X
    {
        int a[] = {1, 2, 3};  // error
        int b[3] = {1, 2, 3}; // OK
    };

Default member initializers are not allowed to cause the implicit definition of a defaulted [default constructor](default_constructor.html "cpp/language/default constructor") for the enclosing class or the exception specification of that constructor: 
    
    
    struct node
    {
        node* p = new node; // error: use of implicit or defaulted node::node() 
    };

Reference members cannot be bound to temporaries in a default member initializer (note; same rule exists for [member initializer lists](initializer_list.html#Explanation "cpp/language/constructor")): 
    
    
    struct A
    {
        A() = default;     // OK
        A(int v) : v(v) {} // OK
        const int& v = 42; // OK
    };
     
    A a1;    // error: ill-formed binding of temporary to reference
    A a2(1); // OK (default member initializer ignored because v appears in a constructor)
             // however a2.v is a dangling reference

(since C++11)  
  
  


If a reference member is initialized from its default member initializer(until C++20)a member has a default member initializer(since C++20) and a [potentially-evaluated](expressions.html#Potentially-evaluated_expressions "cpp/language/expressions") subexpression thereof is an [aggregate initialization](aggregate_initialization.html "cpp/language/aggregate initialization") that would use that default member initializer, the program is ill-formed: 
    
    
    struct A;
    extern A a;
     
    struct A
    {
        const A& a1{A{a, a}}; // OK
        const A& a2{A{}};     // error
    };
     
    A a{a, a};                // OK

| (since C++17)  
---|---  
  
### Usage

The name of a non-static data member or a non-static member function can only appear in the following three situations: 

1) As a part of class member access expression, in which the class either has this member or is derived from a class that has this member, including the implicit this-> member access expressions that appear when a non-static member name is used in any of the contexts where [`this`](this.html "cpp/language/this") is allowed (inside member function bodies, in member initializer lists, in the in-class default member initializers). 
    
    
    struct S
    {
        int m;
        int n;
        int x = m;            // OK: implicit this-> allowed in default initializers (C++11)
     
        S(int i) : m(i), n(m) // OK: implicit this-> allowed in member initializer lists
        {
            this->f();        // explicit member access expression
            f();              // implicit this-> allowed in member function bodies
        }
     
        void f();
    };

2) To form a [pointer to non-static member](pointer.html "cpp/language/pointer"). 
    
    
    struct S
    {
        int m;
        void f();
    };
     
    int S::*p = &S::m;       // OK: use of m to make a pointer to member
    void (S::*fp)() = &S::f; // OK: use of f to make a pointer to member

3) (for data members only, not member functions) When used in [unevaluated operands](expressions.html#Unevaluated_expressions "cpp/language/expressions"). 
    
    
    struct S
    {
        int m;
        static const [std::size_t](../types/size_t.html) sz = sizeof m; // OK: m in unevaluated operand
    };
     
    [std::size_t](../types/size_t.html) j = sizeof(S::m + 42); // OK: even though there is no "this" object for m

Notes: such uses are allowed via the resolution of [CWG issue 613](https://cplusplus.github.io/CWG/issues/613.html) in [N2253](https://wg21.link/N2253), which is treated as a change in C++11 by some compilers (e.g. clang).

### Notes

Feature-test macro  | Value | Std | Feature   
---|---|---|---  
[`__cpp_nsdmi`](../experimental/feature_test.html#cpp_nsdmi "cpp/feature test") | [`200809L`](../compiler_support/11.html#cpp_nsdmi_200809L "cpp/compiler support/11") | (C++11) | [Non-static data member initializers](data_members.html#Member_initialization)  
[`__cpp_aggregate_nsdmi`](../experimental/feature_test.html#cpp_aggregate_nsdmi "cpp/feature test") | [`201304L`](../compiler_support/14.html#cpp_aggregate_nsdmi_201304L "cpp/compiler support/14") | (C++14) | [Aggregate classes](aggregate_initialization.html "cpp/language/aggregate initialization") with [default member initializers](data_members.html#Member_initialization)  
  
### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[CWG 80](https://cplusplus.github.io/CWG/issues/80.html) | C++98  | all data members cannot have the same name  
as the name of the class (breaks C compatibility)  | allow non-static data members  
share the class name if there is  
no user-declared constructor   
[CWG 190](https://cplusplus.github.io/CWG/issues/190.html) | C++98  | when determining layout compatibility,  
all members were considered  | only consider non-  
static data members   
[CWG 613](https://cplusplus.github.io/CWG/issues/613.html) | C++98  | unevaluated uses of non-static data members not allowed  | such uses are allowed   
[CWG 645](https://cplusplus.github.io/CWG/issues/645.html) | C++98  | it was unspecified whether bit-field and  
non-bit-field members are layout compatible  | not layout compatible   
[CWG 1397](https://cplusplus.github.io/CWG/issues/1397.html) | C++11  | class was regarded as complete  
in the default member initializers  | default member init cannot trigger  
definition of default constructor   
[CWG 1425](https://cplusplus.github.io/CWG/issues/1425.html) | C++98  | it was unclear whether a standard-layout object  
shares the same address with the first non-static  
data member or the first base class subobject  | non-static data member  
if present, otherwise base  
class subobject if present   
[CWG 1696](https://cplusplus.github.io/CWG/issues/1696.html) | C++98  | reference members could be initialized to temporaries  
(whose lifetime would end at the end of constructor)  | such init is ill-formed   
[CWG 1719](https://cplusplus.github.io/CWG/issues/1719.html) | C++98  | differently cv-qualified types weren't layout-compatible  | cv-quals ignored, spec improved   
[CWG 2254](https://cplusplus.github.io/CWG/issues/2254.html) | C++11  | pointer to standard-layout class with no data  
members can be reinterpret_cast to its first base class  | can be reinterpret_cast  
to any of its base classes   
[CWG 2583](https://cplusplus.github.io/CWG/issues/2583.html) | C++11  | common initial sequence did not  
consider alignment requirements  | considered   
[CWG 2759](https://cplusplus.github.io/CWG/issues/2759.html) | C++20  | common initial sequence could include  
members declared `[[[no_unique_address](attributes/no_unique_address.html "cpp/language/attributes/no unique address")]]` | they are not included   
  
### See also

[classes](classes.html "cpp/language/classes")  
---  
[static members](static.html "cpp/language/static")  
[non-static member functions](member_functions.html "cpp/language/member functions")  
[ is_standard_layout](../types/is_standard_layout.html "cpp/types/is standard layout")(C++11) |  checks if a type is a [standard-layout](data_members.html#Standard-layout "cpp/language/data members") type   
(class template)   
[ offsetof](../types/offsetof.html "cpp/types/offsetof") |  byte offset from the beginning of a [standard-layout](../named_req/StandardLayoutType.html "cpp/named req/StandardLayoutType") type to specified member   
(function macro) 
  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
