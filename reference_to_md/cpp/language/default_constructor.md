

  
  
  
  
  

  
  
  

---  
  
  
  
  
Special member functions  
| **Default constructor**  
---  
[Copy constructor](copy_constructor.html "cpp/language/copy constructor")  
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
**Default constructor**  
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
  


A default constructor is a [constructor](initializer_list.html "cpp/language/constructor") which can be called with no arguments. 

## Contents

  * [1 Syntax](default_constructor.html#Syntax)
  * [2 Explanation](default_constructor.html#Explanation)
  * [3 Implicitly-declared default constructor](default_constructor.html#Implicitly-declared_default_constructor)
  * [4 Implicitly-defined default constructor](default_constructor.html#Implicitly-defined_default_constructor)
  * [5 Deleted default constructor](default_constructor.html#Deleted_default_constructor)
  * [6 Trivial default constructor](default_constructor.html#Trivial_default_constructor)
  * [7 Eligible default constructor](default_constructor.html#Eligible_default_constructor)
  * [8 Notes](default_constructor.html#Notes)
  * [9 Example](default_constructor.html#Example)
  * [10 Defect reports](default_constructor.html#Defect_reports)
  * [11 See also](default_constructor.html#See_also)

  
---  
  
### Syntax  
  
---  
class-name ﻿`**(**` parameter-list ﻿(optional)`**);**` |  (1)  |   
class-name ﻿`**(**` parameter-list ﻿(optional)`**)**` function-body |  (2)  |   
class-name ﻿`**() = default;**` |  (3)  |  (since C++11)  
class-name ﻿`**(**` parameter-list ﻿(optional)`**) = delete;**` |  (4)  |  (since C++11)  
class-name ﻿`**::**` class-name ﻿`**(**` parameter-list ﻿(optional)`**)**` function-body |  (5)  |   
class-name ﻿`**::**` class-name ﻿`**() = default;**` |  (6)  |  (since C++11)  
class-name |  \-  |  the class whose default constructor is being declared   
---|---|---  
parameter-list |  \-  |  a [parameter list](function.html#Parameter_list "cpp/language/function") where all parameters (except [parameter packs](parameter_pack.html "cpp/language/parameter pack"))(since C++11) have [default arguments](default_arguments.html "cpp/language/default arguments")  
function-body |  \-  |  the [function body](initializer_list.html "cpp/language/constructor") of the default constructor   
  
### Explanation

1) Declaration of a default constructor inside of class definition.

2-4) Definition of a default constructor inside of class definition.

3) The default constructor is explicitly-defaulted.

4) The default constructor is deleted.

5,6) Definition of a default constructor outside of class definition (the class must contain a declaration (1)).

6) The default constructor is explicitly-defaulted.

Default constructors are called during [default initializations](default_initialization.html "cpp/language/default initialization") and [value initializations](value_initialization.html "cpp/language/value initialization"). 

### Implicitly-declared default constructor

If there is no user-declared constructor or constructor template for a class type, the compiler will implicitly declare a default constructor as an inline public member of its class. 

The implicitly-declared (or defaulted on its first declaration) default constructor has an exception specification as described in [dynamic exception specification](except_spec.html "cpp/language/except spec")(until C++17) [noexcept specification](noexcept_spec.html "cpp/language/noexcept spec")(since C++17). 

### Implicitly-defined default constructor

If the constructor is implicitly-declared(until C++11)the implicitly-declared or explicitly-defaulted default constructor is not defined as deleted(since C++11), it is implicitly-defined by the compiler when [odr-used](definition.html#ODR-use "cpp/language/definition") or [needed for constant evaluation](constant_expression.html#Functions_and_variables_needed_for_constant_evaluation "cpp/language/constant expression") or when it is explicitly defaulted after its first declaration(since C++11). 

If a default constructor of a [union-like class](union.html#Union-like_classes "cpp/language/union") `T` is trivial, then for each union `U` that is either `T` or an anonymous union member of `T`, if the first variant member (if any) of `U` has [implicit-lifetime type](type-id.html#Implicit-lifetime_type "cpp/language/type"), the default constructor of `T` begins the lifetime of that member if it is not the active member of its union.  | (since C++26)  
---|---  
  
An(until C++26)Otherwise, an(since C++26) implicitly-defined default constructor has the same effect as a user-defined constructor with empty body and empty initializer list. That is, it calls the default constructors of the bases and of the non-static members of this class. Class types with an empty user-provided constructor may get treated differently than those with an implicitly-defined default constructor during [value initialization](value_initialization.html "cpp/language/value initialization"). 

If this satisfies the requirements of a [constexpr constructor](constexpr.html#constexpr_constructor "cpp/language/constexpr")(until C++23)[constexpr function](constexpr.html#constexpr_funtcion "cpp/language/constexpr")(since C++23), the generated constructor is constexpr. If some user-defined constructors are present, the user may still force the automatic generation of a default constructor by the compiler that would be implicitly-declared otherwise with the keyword default.  | (since C++11)  
---|---  
  
  


###  Deleted default constructor

The implicitly-declared or explicitly-defaulted default constructor for class `T` is defined as deleted if any of the following conditions is satisfied: 

  * `T` has a non-static data member of reference type without a default initializer. 
  * `T` is a non-[union](union.html "cpp/language/union") class and(since C++26) has a non-variant non-static non-[const-default-constructible](default_initialization.html#Default-initialization_of_a_const_object "cpp/language/default initialization") data member of const-qualified type (or possibly multidimensional array thereof) without a default member initializer. 

| 

  * `T` is a [union](union.html "cpp/language/union") and all of its variant members are of const-qualified type (or possibly multidimensional array thereof). 
  * `T` is a non-union class and all members of any [anonymous union](union.html#Anonymous_unions "cpp/language/union") member are of const-qualified type (or possibly multidimensional array thereof). 

| (until C++26)  
---|---  
  
  * Given a class type `M`, `T` has a [potentially constructed subobject](objects.html#Potentially_constructed_subobject "cpp/language/object") obj of type `M` (or possibly multidimensional array thereof), and any of the following conditions is satisfied: 



    

  * `M` has a destructor that is deleted or inaccessible from the default constructor, and either obj is non-variant or obj has a default member initializer(since C++26). 
  * All following conditions are satisfied: 



    

  * obj is not a non-static data member with a default initializer. 
  * obj is not a variant member of a union where another non-static data member has a default initializer(until C++26). 
  * The overload resolution as applied to find `M`'s default constructor does not result in a usable candidate, or in the case of obj being a variant member, selects a non-trivial function(until C++26). 



If no user-defined constructors are present and the implicitly-declared default constructor is not trivial, the user may still inhibit the automatic generation of an implicitly-defined default constructor by the compiler with the keyword delete. 

(since C++11)  
  
### Trivial default constructor

The default constructor for class `T` is trivial if all following conditions are satisfied: 

  * The constructor is implicitly-declared(until C++11)not [user-provided](function.html#User-provided_functions "cpp/language/function")(since C++11). 
  * `T` has no virtual member functions. 
  * `T` has no virtual base classes. 



  * `T` has no non-static members with default initializers. 

| (since C++11)  
---|---  
  
  * Every direct base of `T` has a trivial default constructor. 



  * Every non-static member of class type (or array thereof) has a trivial default constructor. 

| (until C++26)  
---|---  
  
  * Either `T` is a union, or every non-variant non-static member of class type (or array thereof) has a trivial default constructor. 

| (since C++26)  
  
A trivial default constructor is a constructor that performs no action. All data types compatible with the C language (POD types) are trivially default-constructible. 

### Eligible default constructor

A default constructor is eligible if it is either user-declared or both implicitly-declared and definable.  | (until C++11)  
---|---  
A default constructor is eligible if it is not deleted.  | (since C++11)  
(until C++20)  
A default constructor is eligible if all following conditions are satisfied: 

  * It is not deleted. 
  * Its [associated constraints](constraints.html "cpp/language/constraints") (if any) are satisfied. 
  * No default constructor whose associated constraints are satisfied is [more constrained](constraints.html#Partial_ordering_of_constraints "cpp/language/constraints"). 

| (since C++20)  
  
Triviality of eligible default constructors determines whether the class is an [implicit-lifetime type](lifetime.html#Implicit-lifetime_type "cpp/language/lifetime"), and whether the class is a [trivially copyable type](type-id.html#Trivially_copyable_type "cpp/language/type"). 

### Notes

Feature-test macro | Value | Std | Feature   
---|---|---|---  
[`__cpp_trivial_union`](../experimental/feature_test.html#cpp_trivial_union "cpp/feature test") | [`202502L`](../compiler_support/26.html#cpp_trivial_union_202502L "cpp/compiler support/26") | (C++26) | Relaxing the triviality requirements for special member functions of unions   
  
### Example

Run this code
    
    
    struct A
    {
        int x;
        A(int x = 1): x(x) {} // user-defined default constructor
    };
     
    struct B : A
    {
        // B::B() is implicitly-defined, calls A::A()
    };
     
    struct C
    {
        A a;
        // C::C() is implicitly-defined, calls A::A()
    };
     
    struct D : A
    {
        D(int y) : A(y) {}
        // D::D() is not declared because another constructor exists
    };
     
    struct E : A
    {
        E(int y) : A(y) {}
        E() = default; // explicitly defaulted, calls A::A()
    };
     
    struct F
    {
        int& ref; // reference member
        const int c; // const member
        // F::F() is implicitly defined as deleted
    };
     
    // user declared copy constructor (either user-provided, deleted or defaulted)
    // prevents the implicit generation of a default constructor
     
    struct G
    {
        G(const G&) {}
        // G::G() is implicitly defined as deleted
    };
     
    struct H
    {
        H(const H&) = delete;
        // H::H() is implicitly defined as deleted
    };
     
    struct I
    {
        I(const I&) = default;
        // I::I() is implicitly defined as deleted
    };
     
    int main()
    {
        A a;
        B b;
        C c;
    //  D d; // compile error
        E e;
    //  F f; // compile error
    //  G g; // compile error
    //  H h; // compile error
    //  I i; // compile error
    }

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[CWG 1353](https://cplusplus.github.io/CWG/issues/1353.html) | C++11  | the conditions where implicitly-declared default constructors are  
defined as deleted did not consider multidimensional array types  | consider these types   
[CWG 2084](https://cplusplus.github.io/CWG/issues/2084.html) | C++11  | default member initializers had no effect on whether  
a defaulted default constructor of a union is deleted  | they prevent the defaulted default  
constructor from being deleted   
[CWG 2595](https://cplusplus.github.io/CWG/issues/2595.html) | C++20  | a default constructor was not eligible if there is  
another default constructor which is more constrained  
but does not satisfy its associated constraints  | it can be eligible in this case   
[CWG 2871](https://cplusplus.github.io/CWG/issues/2871.html) | C++98  | a default constructor would be implicitly declared  
even if there is a user-declared constructor template  | no implicit declaration  
in this case   
  
### See also

  * [constructor](initializer_list.html "cpp/language/constructor")
  * [initialization](initialization.html "cpp/language/initialization")
    * [aggregate initialization](aggregate_initialization.html "cpp/language/aggregate initialization")
    * [constant initialization](constant_initialization.html "cpp/language/constant initialization")
    * [copy initialization](copy_initialization.html "cpp/language/copy initialization")
    * [default initialization](default_initialization.html "cpp/language/default initialization")
    * [direct initialization](direct_initialization.html "cpp/language/direct initialization")
    * [list initialization](list_initialization.html "cpp/language/list initialization")
    * [reference initialization](reference_initialization.html "cpp/language/reference initialization")
    * [value initialization](value_initialization.html "cpp/language/value initialization")
    * [zero initialization](zero_initialization.html "cpp/language/zero initialization")
  * [`new`](new.html "cpp/language/new")


  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
