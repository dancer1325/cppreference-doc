

  
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
  
| [`delete` expression](delete.html "cpp/language/delete")  
---  
  
[Classes](classes.html "cpp/language/classes")  
| [Class declaration](class.html "cpp/language/class")  
---  
[Constructors](initializer_list.html "cpp/language/constructor")  
[`this` pointer](this.html "cpp/language/this")  
  
| [Access specifiers](access.html "cpp/language/access")  
---  
[`friend` specifier](friend.html "cpp/language/friend")  
  
  
  
Class-specific function properties  
| [Virtual function](virtual.html "cpp/language/virtual")  
---  
[`override` specifier](override.html "cpp/language/override") (C++11)` `  
[`final` specifier](final.html "cpp/language/final") (C++11)  
  
| [`explicit`](explicit.html "cpp/language/explicit") (C++11)  
---  
[`static`](static.html "cpp/language/static")  
  
  
  
Special member functions  
| [Default constructor](default_constructor.html "cpp/language/default constructor")  
---  
[Copy constructor](copy_constructor.html "cpp/language/copy constructor")  
**Move constructor** (C++11)  
  
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
[Copy constructor](copy_constructor.html "cpp/language/copy constructor")  
**Move constructor** (C++11)  
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
  


A move constructor is a [constructor](initializer_list.html "cpp/language/constructor") which can be called with an argument of the same class type and copies the content of the argument, possibly mutating the argument. 

## Contents

  * [1 Syntax](move_constructor.html#Syntax)
  * [2 Explanation](move_constructor.html#Explanation)
  * [3 Implicitly-declared move constructor](move_constructor.html#Implicitly-declared_move_constructor)
  * [4 Implicitly-defined move constructor](move_constructor.html#Implicitly-defined_move_constructor)
  * [5 Deleted move constructor](move_constructor.html#Deleted_move_constructor)
  * [6 Trivial move constructor](move_constructor.html#Trivial_move_constructor)
  * [7 Eligible move constructor](move_constructor.html#Eligible_move_constructor)
  * [8 Notes](move_constructor.html#Notes)
  * [9 Example](move_constructor.html#Example)
  * [10 Defect reports](move_constructor.html#Defect_reports)
  * [11 See also](move_constructor.html#See_also)

  
---  
  
### Syntax  
  
---  
class-name ﻿`**(**` parameter-list ﻿`**);**` |  (1)  |   
class-name ﻿`**(**` parameter-list ﻿`**)**` function-body |  (2)  |   
class-name ﻿`**(**` single-parameter-list ﻿`**) = default;**` |  (3)  |   
class-name ﻿`**(**` parameter-list ﻿`**) = delete;**` |  (4)  |   
class-name ﻿`**::**` class-name ﻿`**(**` parameter-list ﻿`**)**` function-body |  (5)  |   
class-name ﻿`**::**` class-name ﻿`**(**` single-parameter-list ﻿`**) = default;**` |  (6)  |   
class-name |  \-  |  the class whose move constructor is being declared   
---|---|---  
parameter-list |  \-  |  a non-empty [parameter list](function.html#Parameter_list "cpp/language/function") satisfying all following conditions: 

  * given the class type as `T`, the first parameter is of type T&&, const T&&, volatile T&& or const volatile T&&, and 
  * either there are no other parameters, or all other parameters have [default arguments](default_arguments.html "cpp/language/default arguments")

  
single-parameter-list |  \-  |  a [parameter list](function.html#Parameter_list "cpp/language/function") of only one parameter, which is of type T&&, const T&&, volatile T&& or const volatile T&& and does not have a default argument   
function-body |  \-  |  the [function body](initializer_list.html "cpp/language/constructor") of the move constructor   
  
### Explanation

1) Declaration of a move constructor inside of class definition.

2-4) Definition of a move constructor inside of class definition.

3) The move constructor is explicitly-defaulted.

4) The move constructor is deleted.

5,6) Definition of a move constructor outside of class definition (the class must contain a declaration (1)).

6) The move constructor is explicitly-defaulted.
    
    
    struct X
    {
        X(X&& other); // move constructor
    //  X(X other);   // Error: incorrect parameter type
    };
     
    union Y
    {
        Y(Y&& other, int num = 1); // move constructor with multiple parameters
    //  Y(Y&& other, int num);     // Error: `num` has no default argument
    };

The move constructor is typically called when an object is [initialized](initialization.html "cpp/language/initialization") (by [direct-initialization](direct_initialization.html "cpp/language/direct initialization") or [copy-initialization](copy_initialization.html "cpp/language/copy initialization")) from [rvalue](value_category.html#rvalue "cpp/language/value category") (xvalue or prvalue)(until C++17)xvalue(since C++17) of the same type, including 

  * initialization: T a = std::move(b); or T a(std::move(b));, where b is of type `T`; 
  * function argument passing: f(std::move(a));, where a is of type `T` and f is void f(T t); 
  * function return: return a; inside a function such as T f(), where a is of type `T` which has a move constructor. 



When the initializer is a prvalue, the move constructor call is often optimized out(until C++17)never made(since C++17), see [copy elision](copy_elision.html "cpp/language/copy elision"). 

Move constructors typically transfer the resources held by the argument (e.g. pointers to dynamically-allocated objects, file descriptors, TCP sockets, thread handles, etc.) rather than make copies of them, and leave the argument in some valid but otherwise indeterminate state. Since move constructor doesn’t change the lifetime of the argument, the destructor will typically be called on the argument at a later point. For example, moving from a [std::string](../string/basic_string.html "cpp/string/basic string") or from a [std::vector](../container/vector.html "cpp/container/vector") may result in the argument being left empty. For some types, such as [std::unique_ptr](../memory/unique_ptr.html "cpp/memory/unique ptr"), the moved-from state is fully specified. 

### Implicitly-declared move constructor

If no user-defined move constructors are provided for a class type, and all of the following is true: 

  * there are no user-declared [copy constructors](copy_constructor.html "cpp/language/copy constructor"); 
  * there are no user-declared [copy assignment operators](as_operator.html "cpp/language/copy assignment"); 
  * there are no user-declared [move assignment operators](move_operator.html "cpp/language/move assignment"); 
  * there is no user-declared [destructor](destructor.html "cpp/language/destructor"). 



Then the compiler will declare a move constructor as a non-[explicit](explicit.html "cpp/language/explicit") inline public member of its class with the signature T::T(T&&). 

A class can have multiple move constructors, e.g. both T::T(const T&&) and T::T(T&&). If some user-defined move constructors are present, the user may still force the generation of the implicitly declared move constructor with the keyword default. 

The implicitly-declared (or defaulted on its first declaration) move constructor has an exception specification as described in [dynamic exception specification](except_spec.html "cpp/language/except spec")(until C++17)[noexcept specification](noexcept_spec.html "cpp/language/noexcept spec")(since C++17). 

### Implicitly-defined move constructor

If the implicitly-declared move constructor is neither deleted nor trivial, it is defined (that is, a function body is generated and compiled) by the compiler if [ODR-use](definition.html#ODR-use "cpp/language/definition") or [needed for constant evaluation](constant_expression.html#Functions_and_variables_needed_for_constant_evaluation "cpp/language/constant expression"). For union types, the implicitly-defined move constructor copies the object representation (as by [std::memmove](../string/byte/memmove.html "cpp/string/byte/memmove")). For non-union class types, the move constructor performs full member-wise move of the object's direct base subobjects and member subobjects, in their initialization order, using direct initialization with an [xvalue](value_category.html#xvalue "cpp/language/value category") argument. For each non-static data member of a reference type, the move constructor binds the reference to the same object or function to which the source reference is bound. 

If this satisfies the requirements of a [`constexpr` constructor](constexpr.html#constexpr_constructor "cpp/language/constexpr")(until C++23)[`constexpr` function](constexpr.html#constexpr_function "cpp/language/constexpr")(since C++23), the generated move constructor is constexpr. 

### Deleted move constructor

The implicitly-declared or explicitly-defaulted move constructor for class `T` is defined as deleted if `T` has a [potentially constructed subobject](objects.html#Potentially_constructed_subobject "cpp/language/object") of class type `M` (or possibly multi-dimensional array thereof) such that 

  * `M` has a destructor that is deleted or inaccessible from the copy constructor, or 
  * the overload resolution as applied to find `M`'s move constructor 



    

  * does not result in a usable candidate, or 
  * in the case of the subobject being a [variant member](union.html#Union-like_classes "cpp/language/union"), selects a non-trivial function. 



Such a constructor is ignored by [overload resolution](overload_resolution.html "cpp/language/overload resolution") (otherwise it would prevent copy-initialization from rvalue). 

### Trivial move constructor

The move constructor for class `T` is trivial if all of the following is true: 

  * it is not user-provided (meaning, it is implicitly-defined or defaulted); 
  * `T` has no virtual member functions; 
  * `T` has no virtual base classes; 
  * the move constructor selected for every direct base of `T` is trivial; 
  * the move constructor selected for every non-static class type (or array of class type) member of `T` is trivial. 



A trivial move constructor is a constructor that performs the same action as the trivial copy constructor, that is, makes a copy of the object representation as if by [std::memmove](../string/byte/memmove.html "cpp/string/byte/memmove"). All data types compatible with the C language are trivially movable. 

### Eligible move constructor

A move constructor is eligible if it is not deleted.  | (until C++20)  
---|---  
A move constructor is eligible if all following conditions are satisfied: 

  * It is not deleted. 
  * Its [associated constraints](constraints.html "cpp/language/constraints") (if any) are satisfied. 
  * No move constructor whose associated constraints are satisfied is [more constrained](constraints.html#Partial_ordering_of_constraints "cpp/language/constraints"). 

| (since C++20)  
  
Triviality of eligible move constructors determines whether the class is an [implicit-lifetime type](lifetime.html#Implicit-lifetime_types "cpp/language/lifetime"), and whether the class is a [trivially copyable type](../named_req/TriviallyCopyable.html "cpp/named req/TriviallyCopyable"). 

### Notes

To make the [strong exception guarantee](exceptions.html#Exception_safety "cpp/language/exceptions") possible, user-defined move constructors should not throw exceptions. For example, [std::vector](../container/vector.html "cpp/container/vector") relies on [std::move_if_noexcept](../utility/move_if_noexcept.html "cpp/utility/move if noexcept") to choose between move and copy when the elements need to be relocated. 

If both copy and move constructors are provided and no other constructors are viable, overload resolution selects the move constructor if the argument is an [rvalue](value_category.html#rvalue "cpp/language/value category") of the same type (an [xvalue](value_category.html#xvalue "cpp/language/value category") such as the result of std::move or a [prvalue](value_category.html#prvalue "cpp/language/value category") such as a nameless temporary(until C++17)), and selects the copy constructor if the argument is an [lvalue](value_category.html#lvalue "cpp/language/value category") (named object or a function/operator returning lvalue reference). If only the copy constructor is provided, all argument categories select it (as long as it takes a reference to const, since rvalues can bind to const references), which makes copying the fallback for moving, when moving is unavailable. 

### Example

Run this code
    
    
    #include <iomanip>
    #include <iostream>
    #include <string>
    #include <utility>
     
    struct A
    {
        [std::string](../string/basic_string.html) s;
        int k;
     
        A() : s("test"), k(-1) {}
        A(const A& o) : s(o.s), k(o.k) { [std::cout](../io/cout.html) << "move failed!\n"; }
        A(A&& o) noexcept :
            s(std::move(o.s)),       // explicit move of a member of class type
            k([std::exchange](../utility/exchange.html)(o.k, 0)) // explicit move of a member of non-class type
        {}
    };
     
    A f(A a)
    {
        return a;
    }
     
    struct B : A
    {
        [std::string](../string/basic_string.html) s2;
        int n;
        // implicit move constructor B::(B&&)
        // calls A's move constructor
        // calls s2's move constructor
        // and makes a bitwise copy of n
    };
     
    struct C : B
    {
        ~C() {} // destructor prevents implicit move constructor C::(C&&)
    };
     
    struct D : B
    {
        D() {}
        ~D() {}           // destructor would prevent implicit move constructor D::(D&&)
        D(D&&) = default; // forces a move constructor anyway
    };
     
    int main()
    {
        [std::cout](../io/cout.html) << "Trying to move A\n";
        A a1 = f(A()); // return by value move-constructs the target
                       // from the function parameter
     
        [std::cout](../io/cout.html) << "Before move, a1.s = " << [std::quoted](../io/manip/quoted.html)(a1.s)
            << " a1.k = " << a1.k << '\n';
     
        A a2 = std::move(a1); // move-constructs from xvalue
        [std::cout](../io/cout.html) << "After move, a1.s = " << [std::quoted](../io/manip/quoted.html)(a1.s)
            << " a1.k = " << a1.k << '\n';
     
     
        [std::cout](../io/cout.html) << "\nTrying to move B\n";
        B b1;
     
        [std::cout](../io/cout.html) << "Before move, b1.s = " << [std::quoted](../io/manip/quoted.html)(b1.s) << "\n";
     
        B b2 = std::move(b1); // calls implicit move constructor
        [std::cout](../io/cout.html) << "After move, b1.s = " << [std::quoted](../io/manip/quoted.html)(b1.s) << "\n";
     
     
        [std::cout](../io/cout.html) << "\nTrying to move C\n";
        C c1;
        C c2 = std::move(c1); // calls copy constructor
     
        [std::cout](../io/cout.html) << "\nTrying to move D\n";
        D d1;
        D d2 = std::move(d1);
    }

Output: 
    
    
    Trying to move A
    Before move, a1.s = "test" a1.k = -1
    After move, a1.s = "" a1.k = 0
     
    Trying to move B
    Before move, b1.s = "test"
    After move, b1.s = ""
     
    Trying to move C
    move failed!
     
    Trying to move D

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[CWG 1353](https://cplusplus.github.io/CWG/issues/1353.html) | C++11  | the conditions where defaulted move constructors are  
defined as deleted did not consider multi-dimensional array types  | consider these types   
[CWG 1402](https://cplusplus.github.io/CWG/issues/1402.html) | C++11  | a defaulted move constructor that would call  
a non-trivial copy constructor was defined as  
deleted; a defaulted move constructor that is  
deleted still participated in overload resolution  | allows call to such copy  
constructor; made ignored  
in overload resolution   
[CWG 1491](https://cplusplus.github.io/CWG/issues/1491.html) | C++11  | a defaulted move constructor of a class with a non-static data  
member of rvalue reference type was defined as deleted  | not deleted in this case   
[CWG 2094](https://cplusplus.github.io/CWG/issues/2094.html) | C++11  | a volatile subobject made a defaulted  
move constructor non-trivial ([CWG issue 496](https://cplusplus.github.io/CWG/issues/496.html))  | triviality not affected   
[CWG 2595](https://cplusplus.github.io/CWG/issues/2595.html) | C++20  | a move constructor was not eligible if there is  
another move constructor which is more constrained  
but does not satisfy its associated constraints  | it can be eligible in this case   
  
### See also

  * [converting constructor](converting_constructor.html "cpp/language/converting constructor")
  * [copy assignment](as_operator.html "cpp/language/copy assignment")
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
  * [`new`](new.html "cpp/language/new")


