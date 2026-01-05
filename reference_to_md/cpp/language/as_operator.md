

  
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
[Copy constructor](copy_constructor.html "cpp/language/copy constructor")  
[Move constructor](move_constructor.html "cpp/language/move constructor") (C++11)  
**Copy assignment operator**  
[Move assignment operator](move_operator.html "cpp/language/move assignment") (C++11)  
[Destructor](destructor.html "cpp/language/destructor")  
Inheritance  
[Base and derived classes](derived_class.html "cpp/language/derived class")  
[Empty base optimization (EBO)](ebo.html "cpp/language/ebo")  
[Virtual member functions](virtual.html "cpp/language/virtual")  
[Pure virtual functions and abstract classes](abstract_class.html "cpp/language/abstract class")  
[`override` specifier](override.html "cpp/language/override") (C++11)  
[`final` specifier](final.html "cpp/language/final") (C++11)  
  


A copy assignment operator is a non-template [non-static member function](member_functions.html "cpp/language/member functions") with the name operator= that can be called with an argument of the same class type and copies the content of the argument without mutating the argument. 

## Contents

  * [1 Syntax](as_operator.html#Syntax)
  * [2 Explanation](as_operator.html#Explanation)
  * [3 Implicitly-declared copy assignment operator](as_operator.html#Implicitly-declared_copy_assignment_operator)
  * [4 Implicitly-defined copy assignment operator](as_operator.html#Implicitly-defined_copy_assignment_operator)
  * [5 Deleted copy assignment operator](as_operator.html#Deleted_copy_assignment_operator)
  * [6 Trivial copy assignment operator](as_operator.html#Trivial_copy_assignment_operator)
  * [7 Eligible copy assignment operator](as_operator.html#Eligible_copy_assignment_operator)
  * [8 Notes](as_operator.html#Notes)
  * [9 Example](as_operator.html#Example)
  * [10 Defect reports](as_operator.html#Defect_reports)
  * [11 See also](as_operator.html#See_also)

  
---  
  
### Syntax

For the formal copy assignment operator syntax, see [function declaration](function.html "cpp/language/function"). The syntax list below only demonstrates a subset of all valid copy assignment operator syntaxes.   
  
---  
return-type `**operator=(**` parameter-list ﻿`**);**` |  (1)  |   
return-type `**operator=(**` parameter-list ﻿`**)**` function-body |  (2)  |   
return-type `**operator=(**` parameter-list-no-default ﻿`**) = default;**` |  (3)  |  (since C++11)  
return-type `**operator=(**` parameter-list ﻿`**) = delete;**` |  (4)  |  (since C++11)  
return-type class-name ﻿`**::**``**operator=(**` parameter-list ﻿`**)**` function-body |  (5)  |   
return-type class-name ﻿`**::**``**operator=(**` parameter-list-no-default ﻿`**) = default;**` |  (6)  |  (since C++11)  
class-name |  \-  |  the class whose copy assignment operator is being declared, the class type is given as `T` in the descriptions below   
---|---|---  
parameter-list |  \-  |  a [parameter list](function.html#Parameter_list "cpp/language/function") of only one parameter, which is of type `T`, `T&`, const T&, volatile T& or const volatile T&  
parameter-list-no-default |  \-  |  a [parameter list](function.html#Parameter_list "cpp/language/function") of only one parameter, which is of type `T`, `T&`, const T&, volatile T& or const volatile T& and does not have a default argument   
function-body |  \-  |  the [function body](initializer_list.html "cpp/language/constructor") of the copy assignment operator   
return-type |  \-  |  any type, but `T&` is favored in order to allow chaining asssignments   
  
### Explanation

1) Declaration of a copy assignment operator inside of class definition.

2-4) Definition of a copy assignment operator inside of class definition.

3) The copy assignment operator is explicitly-defaulted.

4) The copy assignment operator is deleted.

5,6) Definition of a copy assignment operator outside of class definition (the class must contain a declaration (1)).

6) The copy assignment operator is explicitly-defaulted.
    
    
    struct X
    {
        X& operator=(X& other);     // copy assignment operator
        X operator=(X other);       // pass-by-value is allowed
    //  X operator=(const X other); // Error: incorrect parameter type
    };
     
    union Y
    {
        // copy assignment operators can have syntaxes not listed above,
        // as long as they follow the general function declaration syntax
        // and do not viloate the restrictions listed above
        auto operator=(Y& other) -> Y&;       // OK: trailing return type
        Y& operator=(this Y& self, Y& other); // OK: explicit object parameter
    //  Y& operator=(Y&, int num = 1);        // Error: has other non-object parameters
    };

The copy assignment operator is called whenever selected by [overload resolution](overload_resolution.html "cpp/language/overload resolution"), e.g. when an object appears on the left side of an assignment expression. 

### Implicitly-declared copy assignment operator

If no user-defined copy assignment operators are provided for a class type, the compiler will always declare one as an inline public member of the class. This implicitly-declared copy assignment operator has the form T& T::operator=(const T&) if all of the following is true: 

  * each direct base `B` of `T` has a copy assignment operator whose parameters are `B` or const B& or const volatile B&; 
  * each non-static data member `M` of `T` of class type or array of class type has a copy assignment operator whose parameters are `M` or const M& or const volatile M&. 



Otherwise the implicitly-declared copy assignment operator is declared as T& T::operator=(T&). 

Due to these rules, the implicitly-declared copy assignment operator cannot bind to a volatile lvalue argument. 

A class can have multiple copy assignment operators, e.g. both T& T::operator=(T&) and T& T::operator=(T). If some user-defined copy assignment operators are present, the user may still force the generation of the implicitly declared copy assignment operator with the keyword default.(since C++11)

The implicitly-declared (or defaulted on its first declaration) copy assignment operator has an exception specification as described in [dynamic exception specification](except_spec.html "cpp/language/except spec")(until C++17)[noexcept specification](noexcept_spec.html "cpp/language/noexcept spec")(since C++17)

Because the copy assignment operator is always declared for any class, the base class assignment operator is always hidden. If a [using-declaration](using_declaration.html#In_class_definition "cpp/language/using declaration") is used to bring in the assignment operator from the base class, and its argument type could be the same as the argument type of the implicit assignment operator of the derived class, the using-declaration is also hidden by the implicit declaration. 

### Implicitly-defined copy assignment operator

If the implicitly-declared copy assignment operator is neither deleted nor trivial, it is defined (that is, a function body is generated and compiled) by the compiler if [odr-used](definition.html#ODR-use "cpp/language/definition") or [needed for constant evaluation](constant_expression.html#Functions_and_variables_needed_for_constant_evaluation "cpp/language/constant expression")(since C++14). For union types, the implicitly-defined copy assignment copies the object representation (as by [std::memmove](../string/byte/memmove.html "cpp/string/byte/memmove")). For non-union class types, the operator performs member-wise copy assignment of the object's direct bases and non-static data members, in their initialization order, using built-in assignment for the scalars, memberwise copy-assignment for arrays, and copy assignment operator for class types (called non-virtually). 

The implicitly-defined copy assignment operator for a class `T` is [`constexpr`](constexpr.html "cpp/language/constexpr") if 

  * `T` is a [literal type](../named_req/LiteralType.html "cpp/named req/LiteralType"), and 
  * the assignment operator selected to copy each direct base class subobject is a constexpr function, and 
  * for each non-static data member of `T` that is of class type (or array thereof), the assignment operator selected to copy that member is a constexpr function. 

| (since C++14)  
(until C++23)  
---|---  
The implicitly-defined copy assignment operator for a class `T` is [`constexpr`](constexpr.html "cpp/language/constexpr").  | (since C++23)  
  
  


The generation of the implicitly-defined copy assignment operator is deprecated if `T` has a user-declared destructor or user-declared copy constructor.  | (since C++11)  
---|---  
  
### Deleted copy assignment operator

An implicitly-declared or explicitly-defaulted(since C++11) copy assignment operator for class `T` is undefined(until C++11)defined as deleted(since C++11) if any of the following conditions is satisfied: 

  * `T` has a non-static data member of a const-qualified non-class type (or possibly multi-dimensional array thereof). 
  * `T` has a non-static data member of a reference type. 
  * `T` has a [potentially constructed subobject](objects.html#Potentially_constructed_subobject "cpp/language/object") of class type `M` (or possibly multi-dimensional array thereof) such that the overload resolution as applied to find `M`'s copy assignment operator 



    

  * does not result in a usable candidate, or 
  * in the case of the subobject being a [variant member](union.html#Union-like_classes "cpp/language/union"), selects a non-trivial function. 


The implicitly-declared copy assignment operator for class `T` is defined as deleted if `T` declares a [move constructor](move_constructor.html "cpp/language/move constructor") or [move assignment operator](move_operator.html "cpp/language/move assignment").  | (since C++11)  
---|---  
  
### Trivial copy assignment operator

The copy assignment operator for class `T` is trivial if all of the following is true: 

  * it is not user-provided (meaning, it is implicitly-defined or defaulted); 
  * `T` has no virtual member functions; 
  * `T` has no virtual base classes; 
  * the copy assignment operator selected for every direct base of `T` is trivial; 
  * the copy assignment operator selected for every non-static class type (or array of class type) member of `T` is trivial. 



A trivial copy assignment operator makes a copy of the object representation as if by [std::memmove](../string/byte/memmove.html "cpp/string/byte/memmove"). All data types compatible with the C language (POD types) are trivially copy-assignable. 

### Eligible copy assignment operator

A copy assignment operator is eligible if it is either user-declared or both implicitly-declared and definable.  | (until C++11)  
---|---  
A copy assignment operator is eligible if it is not deleted.  | (since C++11)  
(until C++20)  
A copy assignment operator is eligible if all following conditions are satisfied: 

  * It is not deleted. 
  * Its [associated constraints](constraints.html "cpp/language/constraints") (if any) are satisfied. 
  * No copy assignment operator whose associated constraints are satisfied is [more constrained](constraints.html#Partial_ordering_of_constraints "cpp/language/constraints"). 

| (since C++20)  
  
Triviality of eligible copy assignment operators determines whether the class is a [trivially copyable type](../named_req/TriviallyCopyable.html "cpp/named req/TriviallyCopyable"). 

### Notes

If both copy and move assignment operators are provided, overload resolution selects the move assignment if the argument is an [rvalue](value_category.html "cpp/language/value category") (either a [prvalue](value_category.html "cpp/language/value category") such as a nameless temporary or an [xvalue](value_category.html "cpp/language/value category") such as the result of [`std::move`](../utility/move.html "cpp/utility/move")), and selects the copy assignment if the argument is an [lvalue](value_category.html "cpp/language/value category") (named object or a function/operator returning lvalue reference). If only the copy assignment is provided, all argument categories select it (as long as it takes its argument by value or as reference to const, since rvalues can bind to const references), which makes copy assignment the fallback for move assignment, when move is unavailable. 

It is unspecified whether virtual base class subobjects that are accessible through more than one path in the inheritance lattice, are assigned more than once by the implicitly-defined copy assignment operator (same applies to [move assignment](move_operator.html "cpp/language/move assignment")). 

See [assignment operator overloading](operators.html#Assignment_operator "cpp/language/operators") for additional detail on the expected behavior of a user-defined copy-assignment operator. 

### Example

Run this code
    
    
    #include <algorithm>
    #include <iostream>
    #include <memory>
    #include <string>
     
    struct A
    {
        int n;
        [std::string](../string/basic_string.html) s1;
     
        A() = default;
        A(A const&) = default;
     
        // user-defined copy assignment (copy-and-swap idiom)
        A& operator=(A other)
        {
            [std::cout](../io/cout.html) << "copy assignment of A\n";
            [std::swap](../algorithm/swap.html)(n, other.n);
            [std::swap](../algorithm/swap.html)(s1, other.s1);
            return *this;
        }
    };
     
    struct B : A
    {
        [std::string](../string/basic_string.html) s2;
        // implicitly-defined copy assignment
    };
     
    struct C
    {
        [std::unique_ptr](../memory/unique_ptr.html)<int[]> data;
        [std::size_t](../types/size_t.html) size;
     
        // user-defined copy assignment (non copy-and-swap idiom)
        // note: copy-and-swap would always reallocate resources
        C& operator=(const C& other)
        {
            if (this != &other) // not a self-assignment
            {
                if (size != other.size) // resource cannot be reused
                {
                    data.reset(new int[other.size]);
                    size = other.size;
                }
                [std::copy](../algorithm/copy.html)(&other.data[0], &other.data[0] + size, &data[0]);
            }
            return *this;
        }
    };
     
    int main()
    {
        A a1, a2;
        [std::cout](../io/cout.html) << "a1 = a2 calls ";
        a1 = a2; // user-defined copy assignment
     
        B b1, b2;
        b2.s1 = "foo";
        b2.s2 = "bar";
        [std::cout](../io/cout.html) << "b1 = b2 calls ";
        b1 = b2; // implicitly-defined copy assignment
     
        [std::cout](../io/cout.html) << "b1.s1 = " << b1.s1 << "; b1.s2 = " << b1.s2 << '\n';
    }

Output: 
    
    
    a1 = a2 calls copy assignment of A
    b1 = b2 calls copy assignment of A
    b1.s1 = foo; b1.s2 = bar

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[CWG 1353](https://cplusplus.github.io/CWG/issues/1353.html) | C++98  | the conditions where implicitly-declared copy assignment operators  
are undefined did not consider multi-dimensional array types  | consider these types   
[CWG 2094](https://cplusplus.github.io/CWG/issues/2094.html) | C++11  | a volatile subobject made defaulted copy  
assignment operators non-trivial ([CWG issue 496](https://cplusplus.github.io/CWG/issues/496.html))  | triviality not affected   
[CWG 2171](https://cplusplus.github.io/CWG/issues/2171.html) | C++11  | operator=(X&) = default was non-trivial  | made trivial   
[CWG 2180](https://cplusplus.github.io/CWG/issues/2180.html) | C++11  | a defaulted copy assignment operator for class `T` was not defined as deleted  
if `T` is abstract and has non-copy-assignable direct virtual base classes  | the operator is defined  
as deleted in this case   
[CWG 2595](https://cplusplus.github.io/CWG/issues/2595.html) | C++20  | a copy assignment operator was not eligible if there  
is another copy assignment operator which is more  
constrained but does not satisfy its associated constraints  | it can be eligible  
in this case   
  
### See also

  * [converting constructor](converting_constructor.html "cpp/language/converting constructor")
  * [copy constructor](copy_constructor.html "cpp/language/copy constructor")
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


