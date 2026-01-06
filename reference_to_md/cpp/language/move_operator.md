

  
  
  
  
  

  
  
  

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
[Copy assignment operator](as_operator.html "cpp/language/copy assignment")  
**Move assignment operator** (C++11)  
[Destructor](destructor.html "cpp/language/destructor")  
Inheritance  
[Base and derived classes](derived_class.html "cpp/language/derived class")  
[Empty base optimization (EBO)](ebo.html "cpp/language/ebo")  
[Virtual member functions](virtual.html "cpp/language/virtual")  
[Pure virtual functions and abstract classes](abstract_class.html "cpp/language/abstract class")  
[`override` specifier](override.html "cpp/language/override") (C++11)  
[`final` specifier](final.html "cpp/language/final") (C++11)  
  


A move assignment operator is a non-template [non-static member function](member_functions.html "cpp/language/member functions") with the name operator= that can be called with an argument of the same class type and copies the content of the argument, possibly mutating the argument. 

## Contents

  * [1 Syntax](move_operator.html#Syntax)
  * [2 Explanation](move_operator.html#Explanation)
  * [3 Implicitly-declared move assignment operator](move_operator.html#Implicitly-declared_move_assignment_operator)
  * [4 Implicitly-defined move assignment operator](move_operator.html#Implicitly-defined_move_assignment_operator)
  * [5 Deleted move assignment operator](move_operator.html#Deleted_move_assignment_operator)
  * [6 Trivial move assignment operator](move_operator.html#Trivial_move_assignment_operator)
  * [7 Eligible move assignment operator](move_operator.html#Eligible_move_assignment_operator)
  * [8 Notes](move_operator.html#Notes)
  * [9 Example](move_operator.html#Example)
  * [10 Defect reports](move_operator.html#Defect_reports)
  * [11 See also](move_operator.html#See_also)

  
---  
  
### Syntax

For the formal move assignment operator syntax, see [function declaration](function.html "cpp/language/function"). The syntax list below only demonstrates a subset of all valid move assignment operator syntaxes.   
  
---  
return-type `**operator=(**` parameter-list ﻿`**);**` |  (1)  |   
return-type `**operator=(**` parameter-list ﻿`**)**` function-body |  (2)  |   
return-type `**operator=(**` parameter-list-no-default ﻿`**) = default;**` |  (3)  |   
return-type `**operator=(**` parameter-list ﻿`**) = delete;**` |  (4)  |   
return-type class-name ﻿`**::**``**operator=(**` parameter-list ﻿`**)**` function-body |  (5)  |   
return-type class-name ﻿`**::**``**operator=(**` parameter-list-no-default ﻿`**) = default;**` |  (6)  |   
class-name |  \-  |  the class whose move assignment operator is being declared, the class type is given as `T` in the descriptions below   
---|---|---  
parameter-list |  \-  |  a [parameter list](function.html#Parameter_list "cpp/language/function") of only one parameter, which is of type `T&&`, const T&&, volatile T&& or const volatile T&&  
parameter-list-no-default |  \-  |  a [parameter list](function.html#Parameter_list "cpp/language/function") of only one parameter, which is of type `T&&`, const T&&, volatile T&& or const volatile T&& and does not have a default argument   
function-body |  \-  |  the [function body](initializer_list.html "cpp/language/constructor") of the move assignment operator   
return-type |  \-  |  any type, but `T&` is favored in order to be consistent with scala types   
  
### Explanation

1) Declaration of a move assignment operator inside of class definition.

2-4) Definition of a move assignment operator inside of class definition.

3) The move assignment operator is explicitly-defaulted.

4) The move assignment operator is deleted.

5,6) Definition of a move assignment operator outside of class definition (the class must contain a declaration (1)).

6) The move assignment operator is explicitly-defaulted.
    
    
    struct X
    {
        X& operator=(X&& other);    // move assignment operator
    //  X operator=(const X other); // Error: incorrect parameter type
    };
     
    union Y
    {
        // move assignment operators can have syntaxes not listed above,
        // as long as they follow the general function declaration syntax
        // and do not viloate the restrictions listed above
        auto operator=(Y&& other) -> Y&;       // OK: trailing return type
        Y& operator=(this Y&& self, Y& other); // OK: explicit object parameter
    //  Y& operator=(Y&&, int num = 1);        // Error: has other non-object parameters
    };

The move assignment operator is called whenever it is selected by [overload resolution](overload_resolution.html "cpp/language/overload resolution"), e.g. when an object appears on the left-hand side of an assignment expression, where the right-hand side is an rvalue of the same or implicitly convertible type. 

Move assignment operators typically transfer the resources held by the argument (e.g. pointers to dynamically-allocated objects, file descriptors, TCP sockets, thread handles, etc.), rather than make copies of them, and leave the argument in some valid but otherwise indeterminate state. Since move assignment doesn’t change the lifetime of the argument, the destructor will typically be called on the argument at a later point. For example, move-assigning from a [std::string](../string/basic_string.html "cpp/string/basic string") or from a [std::vector](../container/vector.html "cpp/container/vector") may result in the argument being left empty. A move assignment is less, not more restrictively defined than ordinary assignment; where ordinary assignment must leave two copies of data at completion, move assignment is required to leave only one. 

### Implicitly-declared move assignment operator

If no user-defined move assignment operators are provided for a class type, and all of the following is true: 

  * there are no user-declared [copy constructors](copy_constructor.html "cpp/language/copy constructor"); 
  * there are no user-declared [move constructors](move_constructor.html "cpp/language/move constructor"); 
  * there are no user-declared [copy assignment operators](as_operator.html "cpp/language/copy assignment"); 
  * there is no user-declared [destructor](destructor.html "cpp/language/destructor"), 



then the compiler will declare a move assignment operator as an inline public member of its class with the signature T& T::operator=(T&&). 

A class can have multiple move assignment operators, e.g. both T& T::operator=(const T&&) and T& T::operator=(T&&). If some user-defined move assignment operators are present, the user may still force the generation of the implicitly declared move assignment operator with the keyword `default`. 

The implicitly-declared move assignment operator has an exception specification as described in [dynamic exception specification](except_spec.html "cpp/language/except spec")(until C++17)[noexcept specification](noexcept_spec.html "cpp/language/noexcept spec")(since C++17). 

Because some assignment operator (move or copy) is always declared for any class, the base class assignment operator is always hidden. If a using-declaration is used to bring in the assignment operator from the base class, and its argument type could be the same as the argument type of the implicit assignment operator of the derived class, the using-declaration is also hidden by the implicit declaration. 

### Implicitly-defined move assignment operator

If the implicitly-declared move assignment operator is neither deleted nor trivial, it is defined (that is, a function body is generated and compiled) by the compiler if [odr-used](definition.html#ODR-use "cpp/language/definition") or [needed for constant evaluation](constant_expression.html#Functions_and_variables_needed_for_constant_evaluation "cpp/language/constant expression")(since C++14). 

For union types, the implicitly-defined move assignment operator copies the object representation (as by [std::memmove](../string/byte/memmove.html "cpp/string/byte/memmove")). 

For non-union class types, the move assignment operator performs full member-wise move assignment of the object's direct bases and immediate non-static members, in their declaration order, using built-in assignment for the scalars, memberwise move-assignment for arrays, and move assignment operator for class types (called non-virtually). 

The implicitly-defined move assignment operator for a class `T` is [`constexpr`](constexpr.html "cpp/language/constexpr") if 

  * `T` is a [literal type](../named_req/LiteralType.html "cpp/named req/LiteralType"), and 
  * the assignment operator selected to move each direct base class subobject is a constexpr function, and 
  * for each non-static data member of `T` that is of class type (or array thereof), the assignment operator selected to move that member is a constexpr function. 

| (since C++14)  
(until C++23)  
---|---  
The implicitly-defined move assignment operator for a class `T` is [`constexpr`](constexpr.html "cpp/language/constexpr").  | (since C++23)  
  
As with copy assignment, it is unspecified whether virtual base class subobjects that are accessible through more than one path in the inheritance lattice, are assigned more than once by the implicitly-defined move assignment operator: 
    
    
    struct V
    {
        V& operator=(V&& other)
        {
            // this may be called once or twice
            // if called twice, 'other' is the just-moved-from V subobject
            return *this;
        }
    };
     
    struct A : virtual V {}; // operator= calls V::operator=
    struct B : virtual V {}; // operator= calls V::operator=
    struct C : B, A {};      // operator= calls B::operator=, then A::operator=
                             // but they may only call V::operator= once
     
    int main()
    {
        C c1, c2;
        c2 = std::move(c1);
    }

### Deleted move assignment operator

The implicitly-declared or defaulted move assignment operator for class `T` is defined as deleted if any of the following conditions is satisfied: 

  * `T` has a non-static data member of a const-qualified non-class type (or possibly multi-dimensional array thereof). 
  * `T` has a non-static data member of a reference type. 
  * `T` has a [potentially constructed subobject](objects.html#Potentially_constructed_subobject "cpp/language/object") of class type `M` (or possibly multi-dimensional array thereof) such that the overload resolution as applied to find `M`'s move assignment operator 



    

  * does not result in a usable candidate, or 
  * in the case of the subobject being a [variant member](union.html#Union-like_classes "cpp/language/union"), selects a non-trivial function. 



A deleted implicitly-declared move assignment operator is ignored by [overload resolution](overload_resolution.html "cpp/language/overload resolution"). 

### Trivial move assignment operator

The move assignment operator for class `T` is trivial if all of the following is true: 

  * It is not user-provided (meaning, it is implicitly-defined or defaulted); 
  * `T` has no virtual member functions; 
  * `T` has no virtual base classes; 
  * the move assignment operator selected for every direct base of `T` is trivial; 
  * the move assignment operator selected for every non-static class type (or array of class type) member of `T` is trivial. 



A trivial move assignment operator performs the same action as the trivial copy assignment operator, that is, makes a copy of the object representation as if by [std::memmove](../string/byte/memmove.html "cpp/string/byte/memmove"). All data types compatible with the C language are trivially move-assignable. 

### Eligible move assignment operator

A move assignment operator is eligible if it is not deleted.  | (until C++20)  
---|---  
A move assignment operator is eligible if all following conditions are satisfied: 

  * It is not deleted. 
  * Its [associated constraints](constraints.html "cpp/language/constraints") (if any) are satisfied. 
  * No move assignment operator whose associated constraints are satisfied is [more constrained](constraints.html#Partial_ordering_of_constraints "cpp/language/constraints"). 

| (since C++20)  
  
Triviality of eligible move assignment operators determines whether the class is a [trivially copyable type](../named_req/TriviallyCopyable.html "cpp/named req/TriviallyCopyable"). 

### Notes

If both copy and move assignment operators are provided, overload resolution selects the move assignment if the argument is an [_rvalue_](value_category.html "cpp/language/value category") (either a [_prvalue_](value_category.html "cpp/language/value category") such as a nameless temporary or an [_xvalue_](value_category.html "cpp/language/value category") such as the result of std::move), and selects the copy assignment if the argument is an [_lvalue_](value_category.html "cpp/language/value category") (named object or a function/operator returning lvalue reference). If only the copy assignment is provided, all argument categories select it (as long as it takes its argument by value or as reference to const, since rvalues can bind to const references), which makes copy assignment the fallback for move assignment, when move is unavailable. 

It is unspecified whether virtual base class subobjects that are accessible through more than one path in the inheritance lattice, are assigned more than once by the implicitly-defined move assignment operator (same applies to [copy assignment](as_operator.html "cpp/language/copy assignment")). 

See [assignment operator overloading](operators.html#Assignment_operator "cpp/language/operators") for additional detail on the expected behavior of a user-defined move-assignment operator. 

### Example

Run this code
    
    
    #include <iostream>
    #include <string>
    #include <utility>
     
    struct A
    {
        [std::string](../string/basic_string.html) s;
     
        A() : s("test") {}
     
        A(const A& o) : s(o.s) { [std::cout](../io/cout.html) << "move failed!\n"; }
     
        A(A&& o) : s(std::move(o.s)) {}
     
        A& operator=(const A& other)
        {
             s = other.s;
             [std::cout](../io/cout.html) << "copy assigned\n";
             return *this;
        }
     
        A& operator=(A&& other)
        {
             s = std::move(other.s);
             [std::cout](../io/cout.html) << "move assigned\n";
             return *this;
        }
    };
     
    A f(A a) { return a; }
     
    struct B : A
    {
        [std::string](../string/basic_string.html) s2; 
        int n;
        // implicit move assignment operator B& B::operator=(B&&)
        // calls A's move assignment operator
        // calls s2's move assignment operator
        // and makes a bitwise copy of n
    };
     
    struct C : B
    {
        ~C() {} // destructor prevents implicit move assignment
    };
     
    struct D : B
    {
        D() {}
        ~D() {} // destructor would prevent implicit move assignment
        D& operator=(D&&) = default; // force a move assignment anyway 
    };
     
    int main()
    {
        A a1, a2;
        [std::cout](../io/cout.html) << "Trying to move-assign A from rvalue temporary\n";
        a1 = f(A()); // move-assignment from rvalue temporary
        [std::cout](../io/cout.html) << "Trying to move-assign A from xvalue\n";
        a2 = std::move(a1); // move-assignment from xvalue
     
        [std::cout](../io/cout.html) << "\nTrying to move-assign B\n";
        B b1, b2;
        [std::cout](../io/cout.html) << "Before move, b1.s = \"" << b1.s << "\"\n";
        b2 = std::move(b1); // calls implicit move assignment
        [std::cout](../io/cout.html) << "After move, b1.s = \"" << b1.s << "\"\n";
     
        [std::cout](../io/cout.html) << "\nTrying to move-assign C\n";
        C c1, c2;
        c2 = std::move(c1); // calls the copy assignment operator
     
        [std::cout](../io/cout.html) << "\nTrying to move-assign D\n";
        D d1, d2;
        d2 = std::move(d1);
    }

Output: 
    
    
    Trying to move-assign A from rvalue temporary
    move assigned
    Trying to move-assign A from xvalue
    move assigned
     
    Trying to move-assign B
    Before move, b1.s = "test"
    move assigned
    After move, b1.s = ""
     
    Trying to move-assign C
    copy assigned
     
    Trying to move-assign D
    move assigned

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[CWG 1353](https://cplusplus.github.io/CWG/issues/1353.html) | C++11  | the conditions where defaulted move assignment operators are  
defined as deleted did not consider multi-dimensional array types  | consider these types   
[CWG 1402](https://cplusplus.github.io/CWG/issues/1402.html) | C++11  | a defaulted move assignment operator that would  
call a non-trivial copy assignment operator was  
deleted; a defaulted move assignment operator that  
is deleted still participated in overload resolution  | allows call to such  
copy assignment  
operator; made ignored  
in overload resolution   
[CWG 1806](https://cplusplus.github.io/CWG/issues/1806.html) | C++11  | specification for a defaulted move assignment operator  
involving a virtual base class was missing  | added   
[CWG 2094](https://cplusplus.github.io/CWG/issues/2094.html) | C++11  | a volatile subobject made of a defaulted  
move assignment operator non-trivial ([CWG issue 496](https://cplusplus.github.io/CWG/issues/496.html))  | triviality not affected   
[CWG 2180](https://cplusplus.github.io/CWG/issues/2180.html) | C++11  | a defaulted move assignment operator for class `T`  
was not defined as deleted if `T` is abstract and has  
non-move-assignable direct virtual base classes  | the operator is defined  
as deleted in this case   
[CWG 2595](https://cplusplus.github.io/CWG/issues/2595.html) | C++20  | a move assignment operator was not eligible if there  
is another move assignment operator which is more  
constrained but does not satisfy its associated constraints  | it can be eligible in this case   
[CWG 2690](https://cplusplus.github.io/CWG/issues/2690.html) | C++11  | the implicitly-defined move assignment operator for  
union types did not copy the object representation  | they copy the object  
representation   
  
### See also

  * [constructor](initializer_list.html "cpp/language/constructor")
  * [converting constructor](converting_constructor.html "cpp/language/converting constructor")
  * [copy assignment](as_operator.html "cpp/language/copy assignment")
  * [copy constructor](copy_constructor.html "cpp/language/copy constructor")
  * [default constructor](default_constructor.html "cpp/language/default constructor")
  * [destructor](destructor.html "cpp/language/destructor")
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
  * [move constructor](move_constructor.html "cpp/language/move constructor")


