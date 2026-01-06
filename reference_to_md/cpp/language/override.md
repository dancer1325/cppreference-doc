

  
  
  
  
  

  
  
  

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
**`override` specifier** (C++11)` `  
[`final` specifier](final.html "cpp/language/final") (C++11)  
  
| [`explicit`](explicit.html "cpp/language/explicit") (C++11)  
---  
[`static`](static.html "cpp/language/static")  
  
  
  
Special member functions  
| [Default constructor](default_constructor.html "cpp/language/default constructor")  
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
**`override` specifier** (C++11)  
[`final` specifier](final.html "cpp/language/final") (C++11)  
  


Specifies that a [virtual function](virtual.html "cpp/language/virtual") overrides another virtual function. 

## Contents

  * [1 Syntax](override.html#Syntax)
  * [2 Explanation](override.html#Explanation)
  * [3 Keywords](override.html#Keywords)
  * [4 Example](override.html#Example)
  * [5 See also](override.html#See_also)

  
---  
  
### Syntax

The identifier `override`, if used, appears immediately after the [declarator](function.html "cpp/language/function") in the syntax of a member function declaration or a member function definition inside a class definition.   
  
---  
declarator virt-specifier-seq ﻿(optional) pure-specifier ﻿(optional) |  (1)  |   
declarator virt-specifier-seq ﻿(optional) function-body |  (2)  |   
  
1) In a member function declaration, `override` may appear in virt-specifier-seq immediately after the declarator, and before the [pure-specifier](abstract_class.html "cpp/language/abstract class"), if used.

2) In a member function definition inside a class definition, `override` may appear in virt-specifier-seq immediately after the declarator and just before function-body.

In both cases, virt-specifier-seq, if used, is either `override` or [`final`](final.html "cpp/language/final"), or final override or override final. 

### Explanation

In a member function declaration or definition, override specifier ensures that the function is virtual and is overriding a virtual function from a base class. The program is ill-formed (a compile-time error is generated) if this is not true. 

`override` is an _identifier with a special meaning_ when used after member function declarators; it is not a reserved [keyword](../keywords.html "cpp/keyword") otherwise. 

### Keywords

[`override`](../identifier_with_special_meaning/override.html "cpp/identifier with special meaning/override")

### Example

Run this code
    
    
    #include <iostream>
     
    struct A
    {
        virtual void foo();
        void bar();
        virtual ~A();
    };
     
    // member functions definitions of struct A:
    void A::foo() { [std::cout](../io/cout.html) << "A::foo();\n"; }
    A::~A() { [std::cout](../io/cout.html) << "A::~A();\n"; }
     
    struct B : A
    {
    //  void foo() const override; // Error: B::foo does not override A::foo
                                   // (signature mismatch)
        void foo() override; // OK: B::foo overrides A::foo
    //  void bar() override; // Error: A::bar is not virtual
        ~B() override; // OK: `override` can also be applied to virtual
                       // special member functions, e.g. destructors
        void override(); // OK, member function name, not a reserved keyword
    };
     
    // member functions definitions of struct B:
    void B::foo() { [std::cout](../io/cout.html) << "B::foo();\n"; }
    B::~B() { [std::cout](../io/cout.html) << "B::~B();\n"; }
    void B::override() { [std::cout](../io/cout.html) << "B::override();\n"; }
     
    int main()
    {
        B b;
        b.foo();
        b.override(); // OK, invokes the member function `override()`
        int override{42}; // OK, defines an integer variable
        [std::cout](../io/cout.html) << "override: " << override << '\n';
    }

Output: 
    
    
    B::foo();
    B::override();
    override: 42
    B::~B();
    A::~A();

### See also

[`final` specifier](final.html "cpp/language/final") (C++11) |  declares that a method cannot be overridden or a class be derived from  
---|---
