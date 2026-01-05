[C++](../../cpp.html "cpp")

[Compiler support](../compiler_support.html "cpp/compiler support")  
---  
[Freestanding and hosted](../freestanding.html "cpp/freestanding")  
[Language](../language.html "cpp/language")  
[Standard library](../standard_library.html "cpp/standard library")  
[Standard library headers](../headers.html "cpp/header")  
[Named requirements](../iterator/concepts.html "cpp/named req")  
[Feature test macros](../experimental/feature_test.html "cpp/feature test") (C++20)  
[Language support library](../utility.html#Language_support "cpp/utility")  
[Concepts library](../concepts.html "cpp/concepts") (C++20)  
[Diagnostics library](../error.html "cpp/error")  
[Memory management library](../memory.html "cpp/memory")  
[Metaprogramming library](../meta.html "cpp/meta") (C++11)  
[General utilities library](../utility.html "cpp/utility")  
[Containers library](../container.html "cpp/container")  
[Iterators library](../iterator.html "cpp/iterator")  
[Ranges library](../ranges.html "cpp/ranges") (C++20)  
[Algorithms library](../algorithm.html "cpp/algorithm")  
[Strings library](../string.html "cpp/string")  
[Text processing library](../text.html "cpp/text")  
[Numerics library](../numeric.html "cpp/numeric")  
[Date and time library](../chrono.html "cpp/chrono")  
[Input/output library](../io.html "cpp/io")  
[Filesystem library](../filesystem.html "cpp/filesystem") (C++17)  
[Concurrency support library](../atomic.html "cpp/thread") (C++11)  
[Execution control library](../experimental/execution.html "cpp/execution") (C++26)  
[Technical specifications](../experimental.html "cpp/experimental")  
[Symbols index](../symbol_index.html "cpp/symbol index")  
[External libraries](../links/libs.html "cpp/links/libs")  
  


[C++ language](../language.html "cpp/language")

General topics  
---  
| [Preprocessor](../preprocessor.html "cpp/preprocessor")  
---  
[Comments](../comments.html "cpp/comment")  
  
| [Keywords](../keywords.html "cpp/keyword")  
---  
[Escape sequences](escape.html "cpp/language/escape")  
  
[Flow control](statements.html "cpp/language/statements")  
Conditional execution statements  
| [`if`](if.html "cpp/language/if")  
---  
  
| [`switch`](switch.html "cpp/language/switch")  
---  
  
Iteration statements (loops)  
| [`for`](for.html "cpp/language/for")  
---  
[range-`for`](range-for.html "cpp/language/range-for") (C++11)  
  
| [`while`](while.html "cpp/language/while")  
---  
[`do-while`](do.html "cpp/language/do")  
  
Jump statements  
| [`continue`](continue.html "cpp/language/continue") \- [`break`](break.html "cpp/language/break")  
---  
  
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
  
  
  
Specifiers  
| [`const`/`volatile`](cv.html "cpp/language/cv")  
---  
[`decltype`](decltype.html "cpp/language/decltype") (C++11)  
[`auto`](auto.html "cpp/language/auto") (C++11)  
  
| [`constexpr`](constexpr.html "cpp/language/constexpr") (C++11)  
---  
[`consteval`](consteval.html "cpp/language/consteval") (C++20)  
[`constinit`](constinit.html "cpp/language/constinit") (C++20)  
  
[Storage duration specifiers](storage_duration.html "cpp/language/storage duration")  
[Initialization](initialization.html "cpp/language/initialization")  
| [Default-initialization](default_initialization.html "cpp/language/default initialization")  
---  
[Value-initialization](value_initialization.html "cpp/language/value initialization")  
[Zero-initialization](zero_initialization.html "cpp/language/zero initialization")  
[Copy-initialization](copy_initialization.html "cpp/language/copy initialization")  
[Direct-initialization](direct_initialization.html "cpp/language/direct initialization")  
  
| [Aggregate initialization](aggregate_initialization.html "cpp/language/aggregate initialization")  
---  
[List-initialization](list_initialization.html "cpp/language/list initialization") (C++11)` `  
[Constant initialization](constant_initialization.html "cpp/language/constant initialization")  
[Reference initialization](reference_initialization.html "cpp/language/reference initialization")  
  
  
  
[Expressions](expressions.html "cpp/language/expressions")  
---  
| [Value categories](value_category.html "cpp/language/value category")  
---  
[Order of evaluation](eval_order.html "cpp/language/eval order")  
  
| [Operators](operators.html "cpp/language/operators")  
---  
[Operator precedence](operator_precedence.html "cpp/language/operator precedence")  
  
[Alternative representations](operator_alternative.html "cpp/language/operator alternative")  
[Literals](expressions.html#Literals "cpp/language/expressions")  
[Boolean](bool_literal.html "cpp/language/bool literal") \- [Integer](integer_literal.html "cpp/language/integer literal") \- [Floating-point](floating_literal.html "cpp/language/floating literal")  
[Character](character_literal.html "cpp/language/character literal") \- [String](string_literal.html "cpp/language/string literal") \- [`nullptr`](nullptr.html "cpp/language/nullptr") (C++11)  
[User-defined](user_literal.html "cpp/language/user literal") (C++11)  
Utilities  
[Attributes](attributes.html "cpp/language/attributes") (C++11)  
Types  
[`typedef` declaration](typedef.html "cpp/language/typedef")  
[Type alias declaration](type_alias.html "cpp/language/type alias") (C++11)  
Casts  
| [Implicit conversions](implicit_cast.html "cpp/language/implicit conversion")  
---  
[`static_cast`](static_cast.html "cpp/language/static cast")  
[`const_cast`](const_cast.html "cpp/language/const cast")  
  
| [Explicit conversions](explicit_cast.html "cpp/language/explicit cast")  
---  
[`dynamic_cast`](dynamic_cast.html "cpp/language/dynamic cast")  
[`reinterpret_cast`](reinterpret_cast.html "cpp/language/reinterpret cast")  
  
Memory allocation  
| [`new` expression](new.html "cpp/language/new")  
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
**`final` specifier** (C++11)  
  
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
[`override` specifier](override.html "cpp/language/override") (C++11)  
**`final` specifier** (C++11)  
  


Specifies that a [virtual function](virtual.html "cpp/language/virtual") cannot be overridden in a derived class, or that a class cannot be [derived from](derived_class.html "cpp/language/derived class"). 

## Contents

  * [1 Syntax](final.html#Syntax)
  * [2 Explanation](final.html#Explanation)
  * [3 Note](final.html#Note)
  * [4 Keywords](final.html#Keywords)
  * [5 Example](final.html#Example)
  * [6 References](final.html#References)
  * [7 Defect reports](final.html#Defect_reports)
  * [8 See also](final.html#See_also)

  
---  
  
### Syntax

When applied to a member function, the identifier `final` appears immediately after the [declarator](function.html "cpp/language/function") in the syntax of a member function declaration or a member function definition inside a class definition. 

When applied to a class (including struct and union), the identifier `final` appears at the beginning of the class definition, immediately after the name of the class, and cannot appear in a class declaration.   
  
---  
declarator virt-specifier-seq ﻿(optional) pure-specifier ﻿(optional) |  (1)  |   
declarator virt-specifier-seq ﻿(optional) function-body |  (2)  |   
class-key attr ﻿(optional) class-head-name class-virt-specifier ﻿(optional) base-clause ﻿(optional) |  (3)  |  (until C++26)  
class-key attr ﻿(optional) class-head-name class-prop-specifier-seq ﻿(optional) base-clause ﻿(optional) |  (4)  |  (since C++26)  
  
1) In a member function declaration, `final` may appear in virt-specifier-seq immediately after the declarator, and before the [pure-specifier](abstract_class.html "cpp/language/abstract class"), if used.

2) In a member function definition inside a class definition, `final` may appear in virt-specifier-seq immediately after the declarator and just before function-body.

3) In a class definition, `final` may appear as class-virt-specifier immediately after the name of the class, just before the colon that begins the base-clause, if used.

4) In a class definition, `final` may appear in class-prop-specifier-seq, if used, but only once.

In the cases (1,2), virt-specifier-seq, if used, is either [`override`](override.html "cpp/language/override") or `final`, or `final override` or `override final`. In the case (3), the only allowed value of class-virt-specifier, if used, is `final`. In the case (4), the class-prop-specifier-seq, if used, can have any number of [class property specifiers](class_property_specifiers.html "cpp/language/class property specifiers") (since C++26), but each can appear at most once. 

### Explanation

When used in a virtual function declaration or definition, final specifier ensures that the function is virtual and specifies that it may not be overridden by derived classes. The program is ill-formed (a compile-time error is generated) otherwise. 

When used in a class definition, final specifies that this class may not appear in the base-specifier-list of another class definition (in other words, cannot be derived from). The program is ill-formed otherwise (a compile-time error is generated). final can also be used with a [union](union.html "cpp/language/union") definition, in which case it has no effect (other than on the outcome of [std::is_final](../types/is_final.html "cpp/types/is final"))(since C++14), since unions cannot be derived from. 

final is an identifier with a special meaning when used in a member function declaration or class head. In other contexts, it is not reserved and may be used to name objects and functions. 

### Note

In a sequence of the following tokens: 

  1. one of class, struct and union
  2. a possibly qualified [identifier](name.html "cpp/language/identifiers")
  3. final
  4. one of : and {



the third token final in the sequence is always considered as a specifier instead of an identifier. 

Run this code
    
    
    struct A;
    struct A final {}; // OK, definition of struct A,
                       // not value-initialization of variable final
     
    struct X
    {
        struct C { constexpr operator int() { return 5; } };
        struct B final : C{}; // OK, definition of nested class B,
                              // not declaration of a bit-field member final
    };
     
    // Abnormal final usage.
     
    struct final final // OK, definition of a struct named `final` from which
    {                  // you cannot inherit
    };
     
    // struct final final {}; // Error: redefinition of `struct final`, NOT a
                              // definition of a variable `final` using an elaborated
                              // type specifier `struct final` followed by an
                              // aggregate initialization
     
    // struct override : final {}; // Error: cannot derive from final base type;
                                   // `override` in given context is a normal name
    void foo()
    {
        [[maybe_unused]]
        final final; // OK, declaration of a variable named `final` of type
                     // `struct final` 
    }
     
    struct final final; // OK, declaration of a variable named `final` of type
                        // `struct final` using an elaborated type specifier
    int main()
    {
    }

### Keywords

[`final`](../identifier_with_special_meaning/final.html "cpp/identifier with special meaning/final")

### Example

Run this code
    
    
    struct Base
    {
        virtual void foo();
    };
     
    struct A : Base
    {
        void foo() final; // Base::foo is overridden and A::foo is the final override
        void bar() final; // Error: bar cannot be final as it is non-virtual
    };
     
    struct B final : A // struct B is final
    {
        void foo() override; // Error: foo cannot be overridden as it is final in A
    };
     
    struct C : B {}; // Error: B is final

Possible output: 
    
    
    main.cpp:9:10: error: 'void A::bar()' marked 'final', but is not virtual
        9 |     void bar() final; // Error: bar cannot be final as it is non-virtual
          |          ^~~
    main.cpp:14:10: error: virtual function 'virtual void B::foo()' overriding final function
       14 |     void foo() override; // Error: foo cannot be overridden as it is final in A
          |          ^~~
    main.cpp:8:10: note: overridden function is 'virtual void A::foo()'
        8 |     void foo() final; // Base::foo is overridden and A::foo is the final override
          |          ^~~
    main.cpp:17:8: error: cannot derive from 'final' base 'B' in derived type 'C'
       17 | struct C : B // Error: B is final
          |

### References

  * C++23 standard (ISO/IEC 14882:2024): 



    

  * 11 Classes [class] 



    

  * 11.7.3 Virtual functions [class.virtual] 



  * C++20 standard (ISO/IEC 14882:2020): 



    

  * 11 Classes [class] 



    

  * 11.7.2 Virtual functions [class.virtual] 



  * C++17 standard (ISO/IEC 14882:2017): 



    

  * 12 Classes [class] 



    

  * 13.3 Virtual functions [class.virtual] 



  * C++14 standard (ISO/IEC 14882:2014): 



    

  * 9 Classes [class] 



    

  * 10.3 Virtual functions [class.virtual] 



  * C++11 standard (ISO/IEC 14882:2011): 



    

  * 9 Classes [class] 



    

  * 10.3 Virtual functions [class.virtual] 



### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[CWG 1318](https://cplusplus.github.io/CWG/issues/1318.html) | C++11  | a class definition which has final after the class name and an  
empty member specification list might make final an identifier  | final is always a  
specifier in this case   
  
### See also

[`override` specifier](override.html "cpp/language/override") (C++11) |  explicitly declares that a method overrides another method  
---|---  
[class property specifiers](class_property_specifiers.html "cpp/language/class property specifiers") (C++26) |  **`final`** specifier (C++11), [replaceability](class_property_specifiers.html#Replaceability "cpp/language/class property specifiers") (C++26), [trivial relocatability](class_property_specifiers.html#Trivial_relocatability "cpp/language/class property specifiers") (C++26)
