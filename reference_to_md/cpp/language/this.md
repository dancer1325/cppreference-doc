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
**`this` pointer**  
  
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
**The`this` pointer**  
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
  


## Contents

  * [1 Syntax](this.html#Syntax)
  * [2 Explanation](this.html#Explanation)
  * [3 Keywords](this.html#Keywords)
  * [4 Example](this.html#Example)
  * [5 Defect reports](this.html#Defect_reports)

  
---  
  
### Syntax  
  
---  
`**this**` |  |   
  
The expression this is a [prvalue](value_category.html#prvalue "cpp/language/value category") [expression](expressions.html "cpp/language/expressions") whose value is the address of the [implicit object parameter](overload_resolution.html#Implicit_object_parameter "cpp/language/overload resolution") (object on which the implicit object member function is being called). It can appear in the following contexts: 

1) Within the body of any [implicit object member function](member_functions.html "cpp/language/member functions"), including [member initializer list](initializer_list.html "cpp/language/initializer list"), and [lambda expression body](lambda.html#closure_type_fun_operator "cpp/language/lambda")(since C++11).

2) Within the [declaration](function.html "cpp/language/function") of any implicit object member function anywhere after the (optional) cv-qualifier sequence, including the [exception specification](exceptions.html "cpp/language/exceptions") and the trailing return type(since C++11).

3) Within [default member initializer](data_members.html#Member_initialization "cpp/language/data members"). 4) Within [capture list](lambda.html#Lambda_capture "cpp/language/lambda") of a lambda expression. | (since C++11)  
---|---  
  
### Explanation

this can only associate with the innermost enclosing class of its appearance, even if the appearance is invalid in the context: 
    
    
    class Outer
    {
        int a[sizeof(*this)];            // Error: not inside a member function
        unsigned int sz = sizeof(*this); // OK: in default member initializer
     
        void f()
        {
            int b[sizeof(*this)];     // OK
     
            struct Inner
            {
                int c[sizeof(*this)]; // Error: not inside a member function of Inner
                                      // “this” is not associated with Outer
                                      // even if it is inside a member function of Outer
            };
        }
    };

The type of this in a member function of class `X` is `X*` (pointer to X). If the member function is [declared with a cv-qualifier sequence](member_functions.html#member_functions_with_cv-qualifiers "cpp/language/member functions") _cv_ , the type of this is `_cv_ X*` (pointer to identically cv-qualified X). Since constructors and destructors cannot be declared with cv-qualifiers, the type of this in them is always `X*`, even when constructing or destroying a const object. 

In class templates, this is a [dependent expression](dependent_name.html "cpp/language/dependent name"), and explicit this-> may be used to force another expression to become dependent. 
    
    
    template<typename T>
    struct B
    {
        int var;
    };
     
    template<typename T>
    struct D : B<T>
    {
        D()
        {
            // var = 1;    // Error: “var” was not declared in this scope
            this->var = 1; // OK
        }
    };

[During construction](initializer_list.html "cpp/language/constructor") of an object, if the value of the object or any of its subobjects is accessed through a glvalue that is not obtained, directly or indirectly, from the constructor's this pointer, the value of the object or subobject thus obtained is unspecified. In other words, the this pointer cannot be aliased in a constructor: 
    
    
    extern struct D d;
     
    struct D
    {
        D(int a) : a(a), b(d.a) {} // b(a) or b(this->a) would be correct
        int a, b;
    };
     
    D d = D(1); // because b(d.a) did not obtain a through this, d.b is now unspecified

It is possible to execute delete this;, if the program can guarantee that the object was allocated by new, however, this renders every pointer to the deallocated object invalid, including the this pointer itself: after delete this; returns, such member function cannot refer to a member of a class (since this involves an implicit dereference of `this`) and no other member function may be called. 

This can be used in the member function of the reference-counting pointer (for example, [std::shared_ptr](../memory/shared_ptr.html "cpp/memory/shared ptr"))(since C++11) responsible for decrementing the reference count, when the last reference to the managed object goes out of scope. 
    
    
    class ref
    {
        // ...
        void incRef() { ++mnRef; }
        void decRef() { if (--mnRef == 0) delete this; }
    };

### Keywords

[`this`](../keyword/this.html "cpp/keyword/this")

### Example
    
    
    class T
    {
        int x;
     
        void foo()
        {
            x = 6;       // same as this->x = 6;
            this->x = 5; // explicit use of this->
        }
     
        void foo() const
        {
        //  x = 7; // Error: *this is constant
        }
     
        void foo(int x) // parameter x shadows the member with the same name
        {
            this->x = x; // unqualified x refers to the parameter
                         // “this->” is required for disambiguation
        }
     
        int y;
        T(int x) : x(x),      // uses parameter x to initialize member x
                   y(this->x) // uses member x to initialize member y
        {}
     
        T& operator=(const T& b)
        {
            x = b.x;
            return *this; // many overloaded operators return *this
        }
    };

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[CWG 760](https://cplusplus.github.io/CWG/issues/760.html) | C++98  | when this is used in a nested class, it was  
unspecified whether it is associated with  
the nested class or the enclosing class  | this always associates with  
the innermost nested class,  
regardless of whether it is in  
a non-static member function   
[CWG 2271](https://cplusplus.github.io/CWG/issues/2271.html) | C++98  | this could be aliased when  
constructing a non-const object  | alias is also  
prohibited in this case   
[CWG 2869](https://cplusplus.github.io/CWG/issues/2869.html) | C++98  | it was unclear whether this could be used in a  
static member function of a non-associated class  | made clear 
