

  
  
  
  
  

  
  
  

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
**Nested classes**  
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
  


A declaration of a [class/struct](class.html "cpp/language/class") or [union](union.html "cpp/language/union") may appear within another class. Such declaration declares a _nested class_. 

### Explanation

The name of the nested class exists in the scope of the enclosing class, and name lookup from a member function of a nested class visits the scope of the enclosing class after examining the scope of the nested class. Like any member of its enclosing class, the nested class has access to all names (private, protected, etc) to which the enclosing class has access, but it is otherwise independent and has no special access to the [`this` pointer](this.html "cpp/language/this") of the enclosing class. Declarations in a nested class can use any members of the enclosing class, following the [usual usage rules](data_members.html#Usage "cpp/language/data members") for the non-static members. 
    
    
    int x, y; // globals
    class enclose // enclosing class
    {
        // note: private members
        int x;
        static int s;
    public:
        struct inner // nested class
        {
            void f(int i)
            {
                x = i; // Error: can't write to non-static enclose::x without instance
                int a = sizeof x; // Error until C++11,
                                  // OK in C++11: operand of sizeof is unevaluated,
                                  // this use of the non-static enclose::x is allowed.
                s = i;   // OK: can assign to the static enclose::s
                ::x = i; // OK: can assign to global x
                y = i;   // OK: can assign to global y
            }
     
            void g(enclose* p, int i)
            {
                p->x = i; // OK: assign to enclose::x
            }
        };
    };

[Friend](friend.html "cpp/language/friend") functions defined within a nested class have no special access to the members of the enclosing class even if lookup from the body of a member function that is defined within a nested class can find the private members of the enclosing class. 

Out-of-class definitions of the members of a nested class appear in the namespace of the enclosing class: 
    
    
    struct enclose
    {
        struct inner
        {
            static int x;
            void f(int i);
        };
    };
     
    int enclose::inner::x = 1;       // definition
    void enclose::inner::f(int i) {} // definition

Nested classes can be forward-declared and later defined, either within the same enclosing class body, or outside of it: 
    
    
    class enclose
    {
        class nested1;    // forward declaration
        class nested2;    // forward declaration
        class nested1 {}; // definition of nested class
    };
     
    class enclose::nested2 {}; // definition of nested class

Nested class declarations obey [member access](access.html "cpp/language/access") specifiers, a private member class cannot be named outside the scope of the enclosing class, although objects of that class may be manipulated: 
    
    
    class enclose
    {
        struct nested // private member
        {
            void g() {}
        };
    public:
        static nested f() { return nested{}; }
    };
     
    int main()
    {
        //enclose::nested n1 = enclose::f(); // error: 'nested' is private
     
        enclose::f().g();       // OK: does not name 'nested'
        auto n2 = enclose::f(); // OK: does not name 'nested'
        n2.g();
    }

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[CWG 45](https://cplusplus.github.io/CWG/issues/45.html) | C++98  | the members of a nested class cannot  
access the enclosing class and its friends  | they have the same access rights as  
other members of the enclosing class  
(also resolves CWG issues #8 and #10)   
  
### References

  * C++23 standard (ISO/IEC 14882:2024): 



    

  * 11.4.12 Nested class declarations [class.nest] 



  * C++20 standard (ISO/IEC 14882:2020): 



    

  * 11.4.10 Nested class declarations [class.nest] 



  * C++17 standard (ISO/IEC 14882:2017): 



    

  * 12.2.5 Nested class declarations [class.nest] 



  * C++14 standard (ISO/IEC 14882:2014): 



    

  * 9.7 Nested class declarations [class.nest] 



  * C++11 standard (ISO/IEC 14882:2011): 



    

  * 9.7 Nested class declarations [class.nest] 



  * C++98 standard (ISO/IEC 14882:1998): 



    

  * 9.7 Nested class declarations [class.nest] 


