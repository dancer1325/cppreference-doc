

  
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
**Converting constructor**  
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
  


A constructor that is not declared with the specifier [explicit](explicit.html "cpp/language/explicit") and which can be called with a single parameter(until C++11) is called a _converting constructor_. 

Unlike explicit constructors, which are only considered during [direct initialization](direct_initialization.html "cpp/language/direct initialization") (which includes [explicit conversions](explicit_cast.html "cpp/language/explicit cast") such as [static_cast](static_cast.html "cpp/language/static cast")), converting constructors are also considered during [copy initialization](copy_initialization.html "cpp/language/copy initialization"), as part of [user-defined conversion sequence](implicit_cast.html "cpp/language/implicit cast"). 

It is said that a converting constructor specifies an implicit conversion from the types of its arguments (if any) to the type of its class. Note that non-explicit [user-defined conversion function](cast_operator.html "cpp/language/cast operator") also specifies an implicit conversion. 

Implicitly-declared and user-defined non-explicit [copy constructors](copy_constructor.html "cpp/language/copy constructor") and [move constructors](move_constructor.html "cpp/language/move constructor") are converting constructors. 

### Example

Run this code
    
    
    struct A
    {
        A() { }         // converting constructor (since C++11)  
        A(int) { }      // converting constructor
        A(int, int) { } // converting constructor (since C++11)
    };
     
    struct B
    {
        explicit B() { }
        explicit B(int) { }
        explicit B(int, int) { }
    };
     
    int main()
    {
        A a1 = 1;      // OK: copy-initialization selects A::A(int)
        A a2(2);       // OK: direct-initialization selects A::A(int)
        A a3{4, 5};    // OK: direct-list-initialization selects A::A(int, int)
        A a4 = {4, 5}; // OK: copy-list-initialization selects A::A(int, int)
        A a5 = (A)1;   // OK: explicit cast performs static_cast, direct-initialization
     
    //  B b1 = 1;      // error: copy-initialization does not consider B::B(int)
        B b2(2);       // OK: direct-initialization selects B::B(int)
        B b3{4, 5};    // OK: direct-list-initialization selects B::B(int, int)
    //  B b4 = {4, 5}; // error: copy-list-initialization selected an explicit constructor
                       //        B::B(int, int)
        B b5 = (B)1;   // OK: explicit cast performs static_cast, direct-initialization
        B b6;          // OK, default-initialization
        B b7{};        // OK, direct-list-initialization
    //  B b8 = {};     // error: copy-list-initialization selected an explicit constructor
                       //        B::B()
     
        [](...){}(a1, a4, a4, a5, b5); // may suppress "unused variable" warnings
    }

### See also

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
  * [move constructor](move_constructor.html "cpp/language/move constructor")
  * [new](new.html "cpp/language/new")


