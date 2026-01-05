

  
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
  
| **`explicit`** (C++11)  
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
**`explicit` specifier**  
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
  


## Contents

  * [1 Syntax](explicit.html#Syntax)
  * [2 Notes](explicit.html#Notes)
  * [3 Keywords](explicit.html#Keywords)
  * [4 Example](explicit.html#Example)
  * [5 See also](explicit.html#See_also)

  
---  
  
### Syntax  
  
---  
`**explicit**` |  (1)  |   
`**explicit (**` expression `**)**` |  (2)  |  (since C++20)  
expression |  \-  |  [contextually converted constant expression of type bool](constant_expression.html#Converted_constant_expression "cpp/language/constant expression")  
---|---|---  
  
  


1) Specifies that a constructor or conversion function(since C++11)or [deduction guide](ctad.html "cpp/language/ctad")(since C++17) is explicit, that is, it cannot be used for [implicit conversions](implicit_cast.html "cpp/language/implicit conversion") and [copy-initialization](copy_initialization.html "cpp/language/copy initialization").

2) The explicit specifier may be used with a constant expression. The function is explicit if and only if that constant expression evaluates to true. | (since C++20)  
---|---  
  
The explicit specifier may only appear within the decl-specifier-seq of the declaration of a constructor or conversion function(since C++11) within its class definition. 

### Notes

A constructor with a single non-default parameter(until C++11) that is declared without the function specifier explicit is called a [converting constructor](converting_constructor.html "cpp/language/converting constructor"). 

Both constructors (other than [copy](copy_constructor.html "cpp/language/copy constructor")/[move](move_constructor.html "cpp/language/move constructor")) and user-defined conversion functions may be function templates; the meaning of explicit does not change. 

A `**(**` token that follows explicit is always parsed as part of the explicit specifier: 
    
    
    struct S
    {
        explicit (S)(const S&);    // error in C++20, OK in C++17
        explicit (operator int)(); // error in C++20, OK in C++17
    };

| (since C++20)  
---|---  
Feature-test macro | Value | Std | Feature   
---|---|---|---  
[`__cpp_conditional_explicit`](../experimental/feature_test.html#cpp_conditional_explicit "cpp/feature test") | [`201806L`](../compiler_support/20.html#cpp_conditional_explicit_201806L "cpp/compiler support/20") | (C++20) | conditional explicit  
  
### Keywords

[`explicit`](../keyword/explicit.html "cpp/keyword/explicit")

### Example

Run this code
    
    
    struct A
    {
        A(int) {}      // converting constructor
        A(int, int) {} // converting constructor (C++11)
        operator bool() const { return true; }
    };
     
    struct B
    {
        explicit B(int) {}
        explicit B(int, int) {}
        explicit operator bool() const { return true; }
    };
     
    int main()
    {
        A a1 = 1;      // OK: copy-initialization selects A::A(int)
        A a2(2);       // OK: direct-initialization selects A::A(int)
        A a3 {4, 5};   // OK: direct-list-initialization selects A::A(int, int)
        A a4 = {4, 5}; // OK: copy-list-initialization selects A::A(int, int)
        A a5 = (A)1;   // OK: explicit cast performs static_cast
        if (a1) { }    // OK: A::operator bool()
        bool na1 = a1; // OK: copy-initialization selects A::operator bool()
        bool na2 = static_cast<bool>(a1); // OK: static_cast performs direct-initialization
     
    //  B b1 = 1;      // error: copy-initialization does not consider B::B(int)
        B b2(2);       // OK: direct-initialization selects B::B(int)
        B b3 {4, 5};   // OK: direct-list-initialization selects B::B(int, int)
    //  B b4 = {4, 5}; // error: copy-list-initialization does not consider B::B(int, int)
        B b5 = (B)1;   // OK: explicit cast performs static_cast
        if (b2) { }    // OK: B::operator bool()
    //  bool nb1 = b2; // error: copy-initialization does not consider B::operator bool()
        bool nb2 = static_cast<bool>(b2); // OK: static_cast performs direct-initialization
     
        [](...){}(a4, a5, na1, na2, b5, nb2); // suppresses “unused variable” warnings
    }

### See also

  * [converting constructor](converting_constructor.html "cpp/language/converting constructor")
  * [initialization](initialization.html "cpp/language/initialization")
  * [copy initialization](copy_initialization.html "cpp/language/copy initialization")
  * [direct initialization](direct_initialization.html "cpp/language/direct initialization")


  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
