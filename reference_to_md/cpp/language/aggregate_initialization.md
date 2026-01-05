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
  
| **Aggregate initialization**  
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
  


[ Initialization](initialization.html "cpp/language/initialization")

[Initializer](initialization.html "cpp/language/initialization")  
---  
[Default initialization](default_initialization.html "cpp/language/default initialization")  
[Value initialization](value_initialization.html "cpp/language/value initialization")  
[Direct initialization](direct_initialization.html "cpp/language/direct initialization")  
[Copy-initialization](copy_initialization.html "cpp/language/copy initialization")  
[List initialization](list_initialization.html "cpp/language/list initialization") (C++11)  
**Aggregate initialization**  
[Reference initialization](reference_initialization.html "cpp/language/reference initialization")  
[Copy elision](copy_elision.html "cpp/language/copy elision")  
[Static initialization](initialization.html#Static_initialization "cpp/language/initialization")  
[Zero initialization](zero_initialization.html "cpp/language/zero initialization")  
[Constant initialization](constant_initialization.html "cpp/language/constant initialization")  
[Dynamic non-local initialization](initialization.html#Dynamic_initialization "cpp/language/initialization")  
[Ordered dynamic initialization](initialization.html#Dynamic_initialization "cpp/language/initialization")  
[Unordered dynamic initialization](initialization.html#Dynamic_initialization "cpp/language/initialization")  
[Class member initialization](initialization.html#Class_member_initialization "cpp/language/initialization")  
[Member initializer list](initializer_list.html "cpp/language/initializer list")  
[Default member initializer](data_members.html#Member_initialization "cpp/language/data members") (C++11)  
  


Initializes an aggregate from an initializer list. It is a form of [list-initialization](list_initialization.html "cpp/language/list initialization")(since C++11). 

## Contents

  * [1 Syntax](aggregate_initialization.html#Syntax)
  * [2 Definitions](aggregate_initialization.html#Definitions)
    * [2.1 Aggregate](aggregate_initialization.html#Aggregate)
    * [2.2 Element](aggregate_initialization.html#Element)
    * [2.3 Appertainment](aggregate_initialization.html#Appertainment)
  * [3 Initialization process](aggregate_initialization.html#Initialization_process)
    * [3.1 Determining element kind](aggregate_initialization.html#Determining_element_kind)
    * [3.2 Explicitly initialized elements](aggregate_initialization.html#Explicitly_initialized_elements)
    * [3.3 Implicitly initialized elements](aggregate_initialization.html#Implicitly_initialized_elements)
  * [4 Arrays with unknown bounds](aggregate_initialization.html#Arrays_with_unknown_bounds)
  * [5 Designated initializers](aggregate_initialization.html#Designated_initializers)
  * [6 Character arrays](aggregate_initialization.html#Character_arrays)
  * [7 Notes](aggregate_initialization.html#Notes)
  * [8 Example](aggregate_initialization.html#Example)
  * [9 Defect reports](aggregate_initialization.html#Defect_reports)
  * [10 See also](aggregate_initialization.html#See_also)

  
---  
  
### Syntax  
  
---  
T object` ``**= {**` arg1, arg2, ... `**};**` |  (1)  |   
T object `**{**` arg1, arg2, ... `**};**` |  (2)  |  (since C++11)  
T object` ``**= { .**` des1` ``**=**`` `arg1 `**, .**` des2 `**{**` arg2 `**}**` ... `**};**` |  (3)  |  (since C++20)  
T object `**{ .**` des1` ``**=**`` `arg1 `**, .**` des2 `**{**` arg2 `**}**` ... `**};**` |  (4)  |  (since C++20)  
  
1,2) Initializing an aggregate with an ordinary initializer list.

3,4) Initializing an aggregate with [designated initializers](aggregate_initialization.html#Designated_initializers) (aggregate class only).

### Definitions

#### Aggregate

An _aggregate_ is one of the following types: 

  * array types 
  * class types that has 



    

  * no user-declared constructors 


| (until C++11)  
---|---  
  
    

  * no [user-provided](function.html#User-provided_functions "cpp/language/function"), [inherited](using_declaration.html#Inheriting_constructors "cpp/language/using declaration"), or [explicit](explicit.html "cpp/language/explicit") constructors 


| (since C++11)  
(until C++20)  
  
    

  * no user-declared or inherited constructors 


| (since C++20)  
  
    

  * no private or protected direct non-static data members 



    

  * no [base classes](derived_class.html "cpp/language/derived class")


| (until C++17)  
---|---  
  
    

  * no [virtual base classes](derived_class.html#Virtual_base_classes "cpp/language/derived class")
  * no [private](derived_class.html#Private_inheritance "cpp/language/derived class") or [protected](derived_class.html#Protected_inheritance "cpp/language/derived class") direct base classes 


| (since C++17)  
  
    

  * no virtual member functions 



    

  * no [default member initializers](data_members.html#Member_initialization "cpp/language/data members")


| (since C++11)  
(until C++14)  
---|---  
  
#### Element

The _elements_ of an aggregate are: 

  * for an array, the array elements in increasing subscript order, or 



  * for a class, the non-static data members that are not anonymous [bit-fields](bit_field.html "cpp/language/bit field"), in declaration order. 

| (until C++17)  
---|---  
  
  * for a class, the direct base classes in declaration order, followed by the direct non-static data members that are neither anonymous [bit-fields](bit_field.html "cpp/language/bit field") nor members of an [anonymous union](union.html#Anonymous_unions "cpp/language/union"), in declaration order. 

| (since C++17)  
  
#### Appertainment

Each [initializer clause](initialization.html "cpp/language/initialization") in a brace-enclosed initializer list is said to _appertain_ to an element of the aggregate being initialized or to an element of one of its subaggregates. 

Considering the sequence of initializer clauses, and the sequence of aggregate elements initially formed as the sequence of elements of the aggregate being initialized and potentially modified as described below: 

  * For each initializer clause, if any of the following conditions is satisfied, it appertains to the corresponding aggregate element elem: 



    

  * elem is not an aggregate. 
  * The initializer clause begins with {. 
  * The initializer clause is an expression, and an [implicit conversion sequence](implicit_cast.html "cpp/language/implicit conversion") can be formed that converts the expression to the type of elem. 
  * elem is an aggregate that itself has no aggregate elements. 



  * Otherwise, elem is an aggregate and that subaggregate is replaced in the list of aggregate elements by the sequence of its own aggregate elements, and the appertainment analysis resumes with the first such element and the same initializer clause. In other words, these rules apply recursively to the aggregate’s subaggregates. 



The analysis is complete when all initializer clauses have been exhausted. If any initializer clause remains that does not appertain to an element of the aggregate or one of its subaggregates, the program is ill-formed. 
    
    
    struct S1 { long a, b; };
    struct S2 { S1 s, t; };
     
    // Each subaggregate of “x” is appertained to an initializer clause starting with {
    S2 x[2] =
    {
        // appertains to “x[0]”
        {
            {1L, 2L}, // appertains to “x[0].s”
            {3L, 4L}  // appertains to “x[0].t”
        },
        // appertains to “x[1]”
        {
            {5L, 6L}, // appertains to “x[1].s”
            {7L, 8L}  // appertains to “x[1].t”
        }
    };
     
    // “x” and “y” have the same value (see below)
    S2 y[2] = {1L, 2L, 3L, 4L, 5L, 6L, 7L, 8L};
     
    // The process of the appertainment analysis of “y”:
    // 1. Initializes the aggregate element sequence (x[0], x[1]) and
    //    the initializer clause sequence (1L, 2L, 3L, 4L, 5L, 6L, 7L, 8L).
    // 2. Starting from the first elements of each sequence,
    //    checks whether 1L appertains to x[0]:
    //    · x[0] is an aggregate.
    //    · 1L does not begin with {.
    //    · 1L is an expression, but it cannot be implicitly converted to S2.
    //    · x[0] has aggregate elements.
    // 3. 1L cannot appertain to x[0], therefore x[0] is replaced by x[0].s and x[0].t,
    //    the aggregate element sequence becomes (x[0].s, x[0].t, x[1]).
    // 4. Resumes the appertainment check, but 1L cannot appertain to x[0].s either.
    // 5. The aggregate element sequence now becomes (x[0].s.a, x[0].s.b, x[0].t, x[1]).
    // 6. Resumes the appertainment check again:
    //    1L appertains to x[0].s.a, and 2L appertains to x[0].s.b.
    // 7. The rest of the appertainment analysis works similarly.
     
    char cv[4] = {'a', 's', 'd', 'f', 0}; // Error: too many initializer clauses

### Initialization process

#### Determining element kind

The effects of aggregate initialization are: 

1) Determine the _explicitly initialized elements_ of the aggregate as follows:

    

  * If the initializer list is a [designated initializer list](aggregate_initialization.html#Designated_initializers) (the aggregate can only be of class type), the identifier in each designator shall name a direct non-static data member of the class, and the explicitly initialized elements of the aggregate are the elements that are, or contain, those members. 


| (since C++20)  
---|---  
  
    

  * Otherwise, (since C++20)if the initializer list is non-empty, the explicitly initialized elements of the aggregate are the elements with an appertained initializer clause and the elements having a subaggregate with an appertained initializer clause. 
  * Otherwise, the initializer list must be empty ({}), and there are no explicitly initialized elements. 



    The program is ill-formed if the aggregate is a union and there are two or more explicitly initialized elements: 
    
    
    union u { int a; const char* b; };
     
    u a = {1};                   // OK: explicitly initializes member `a`
    u b = {0, "asdf"};           // error: explicitly initializes two members
    u c = {"asdf"};              // error: int cannot be initialized by "asdf"
     
    // C++20 designated initializer lists
    u d = {.b = "asdf"};         // OK: can explicitly initialize a non-initial member
    u e = {.a = 1, .b = "asdf"}; // error: explicitly initializes two members

2) Initialize each element of the aggregate in the element order. That is, all value computations and side effects associated with a given element are [sequenced before](eval_order.html "cpp/language/eval order") those of any element that follows it in order(since C++11).

#### Explicitly initialized elements

For each explicitly initialized element: 

  * If the element is an anonymous union member and the initializer list is a [designated initializer list](aggregate_initialization.html#Designated_initializers), the element is initialized by the designated initializer list {D}, where `D` is the designated initializer clause naming a member of the anonymous union member. There shall be only one such designated initializer clause. 


    
    
    struct C
    {
        union
        {
            int a;
            const char* p;
        };
     
        int x;
    } c = {.a = 1, .x = 3}; // initializes c.a with 1 and c.x with 3

  * Otherwise, if the initializer list is a designated initializer list, the element is initialized with the initializer of the corresponding designated initializer clause. 



    

  * If that initializer is of [syntax (1)](initialization.html "cpp/language/initialization"), and a narrowing conversion is required to convert the expression, the program is ill-formed. 


| (since C++20)  
---|---  
  
  


  * The initializer list is a brace-enclosed initializer list: 

| (until C++20)  
---|---  
  
  * Otherwise, the initializer list is a non-designated brace-enclosed initializer list: 

| (since C++20)  
  
    

  * If an initializer clause appertains to the aggregate element, then the aggregate element is [copy-initialized](copy_initialization.html "cpp/language/copy initialization") from the initializer clause. 
  * Otherwise, the aggregate element is copy-initialized from a brace-enclosed initializer list consisting of all of the initializer clauses that appertain to subobjects of the aggregate element, in the order of appearance. 


    
    
    struct A
    {
        int x;
     
        struct B
        {
            int i;
            int j;
        } b;
    } a = {1, {2, 3}}; // initializes a.x with 1, a.b.i with 2, a.b.j with 3
     
    struct base1 { int b1, b2 = 42; };
     
    struct base2
    {
        base2()
        {
            b3 = 42;
        }
     
        int b3;
    };
     
    struct derived : base1, base2
    {
        int d;
    };
     
    derived d1{{1, 2}, {}, 4}; // initializes d1.b1 with 1, d1.b2 with 2,
                               //             d1.b3 with 42, d1.d with 4
    derived d2{{}, {}, 4};     // initializes d2.b1 with 0, d2.b2 with 42,
                               //             d2.b3 with 42, d2.d with 4

#### Implicitly initialized elements

For a non-union aggregate, each element that is not an explicitly initialized element is initialized as follows: 

  * If the element has a [default member initializer](data_members.html#Member_initialization "cpp/language/data members"), the element is initialized from that initializer. 

| (since C++11)  
---|---  
  
  * Otherwise, if the element is not a reference, the element is [copy-initialized](copy_initialization.html "cpp/language/copy initialization") from an empty initializer list. 
  * Otherwise, the program is ill-formed. 


    
    
    struct S
    {
        int a;
        const char* b;
        int c;
        int d = b[a];
    };
     
    // initializes ss.a with 1,
    //             ss.b with "asdf",
    //             ss.c with the value of an expression of the form int{} (that is, 0),
    //         and ss.d with the value of ss.b[ss.a] (that is, 's')
    S ss = {1, "asdf"};

If the aggregate is a union and the initializer list is empty, then 

  * If any variant member has a default member initializer, that member is initialized from its default member initializer. 

| (since C++11)  
---|---  
  
  * Otherwise, the first member of the union (if any) is copy-initialized from an empty initializer list. 



### Arrays with unknown bounds

The number of elements in an array of unknown bound initialized with a brace-enclosed initializer list is the number of explicitly initialized elements of the array. An array of unknown bound cannot be initialized with {}. 
    
    
    int x[] = {1, 3, 5}; // x has 3 elements
     
    struct Y { int i, j, k; };
     
    Y y[] = {1, 2, 3, 4, 5, 6}; // y has only 2 elements:
                                // 1, 2 and 3 appertain to y[0],
                                // 4, 5 and 6 appertain to y[1]
     
    int z[] = {} // Error: cannot declare an array without any element

###  Designated initializers

The syntax forms (3,4) are known as designated initializers: each designator must name a direct non-static data member of T, and all designator ﻿s used in the expression must appear in the same order as the data members of T. 
    
    
    struct A { int x; int y; int z; };
     
    A a{.x = 1, .y = 2, .z = 3}; // ok
    A b{.y = 2, .z = 3, .x = 1}; // error; designator order does not match declaration order

Each direct non-static data member named by the designated initializer is initialized from the corresponding brace-or-equals initializer that follows the designator. Narrowing conversions are prohibited. Designated initializer can be used to initialize a [union](union.html "cpp/language/union") into the state other than the first. Only one initializer may be provided for a union. 
    
    
    union u { int a; const char* b; };
     
    u f = {.b = "asdf"};         // OK, active member of the union is b
    u g = {.a = 1, .b = "asdf"}; // Error, only one initializer may be provided

For a non-union aggregate, elements for which a designated initializer is not provided are initialized the same as described above for when the number of initializer clauses is less than the number of members (default member initializers where provided, empty list-initialization otherwise): 
    
    
    struct A
    {
        string str;
        int n = 42;
        int m = -1;
    };
     
    A{.m = 21} // Initializes str with {}, which calls the default constructor
               // then initializes n with = 42
               // then initializes m with = 21
     
    struct A { int x; int y; int z; };
     
    A a{.x = 1, .z = 2}; // ok, b.y initialized to 0
    A b{.y = 2, .x = 1}; // error; designator order does not match declaration order
    A c{.y = 2}; // ok, c.x and c.z are initialized to 0
    constexpr A d{.z = 2}; // can be used with constexpr, as opposed to: constexpr A d;
    static_assert(d.x == 0 && d.y == 0); // d.x and d.y are initialized to 0

If the aggregate that is initialized with a designated initializer clause has an anonymous union member, the corresponding designated initializer must name one of the members of that anonymous union. Note: out-of-order designated initialization, nested designated initialization, mixing of designated initializers and regular initializers, and designated initialization of arrays are all supported in the [C programming language](../../c/language/struct_initialization.html "c/language/struct initialization"), but are not allowed in C++. 
    
    
    struct A { int x, y; };
    struct B { struct A a; };
     
    struct A a = {.y = 1, .x = 2}; // valid C, invalid C++ (out of order)
    int arr[3] = {[1] = 5};        // valid C, invalid C++ (array)
    struct B b = {.a.x = 0};       // valid C, invalid C++ (nested)
    struct A a = {.x = 1, 2};      // valid C, invalid C++ (mixed)

| (since C++20)  
---|---  
  
### Character arrays

Arrays of ordinary character types (char, signed char, unsigned char), char8_t(since C++20), char16_t, char32_t(since C++11), or wchar_t can be initialized from ordinary [string literals](string_literal.html "cpp/language/string literal"), UTF-8 string literals(since C++20), UTF-16 string literals, UTF-32 string literals(since C++11), or wide string literals, respectively, optionally enclosed in braces. Additionally, an array of char or unsigned char may be initialized by a UTF-8 string literal, optionally enclosed in braces(since C++20). Successive characters of the string literal (which includes the implicit terminating null character) initialize the elements of the array, with an [integral conversion](implicit_cast.html#Integral_conversions "cpp/language/implicit conversion") if necessary for the source and destination value(since C++20). If the size of the array is specified and it is larger than the number of characters in the string literal, the remaining characters are zero-initialized. 
    
    
    char a[] = "abc";
    // equivalent to char a[4] = {'a', 'b', 'c', '\0'};
     
    //  unsigned char b[3] = "abc"; // Error: initializer string too long
    unsigned char b[5]{"abc"};
    // equivalent to unsigned char b[5] = {'a', 'b', 'c', '\0', '\0'};
     
    wchar_t c[] = {L"кошка"}; // optional braces
    // equivalent to wchar_t c[6] = {L'к', L'о', L'ш', L'к', L'а', L'\0'};

### Notes

An aggregate class or array may include non-aggregate public bases(since C++17), members, or elements, which are initialized as described above (e.g. copy-initialization from the corresponding initializer clause). 

Until C++11, narrowing conversions were permitted in aggregate initialization, but they are no longer allowed. 

Until C++11, aggregate initialization could only be used in variable definition, and could not be used in a [constructor initializer list](initializer_list.html "cpp/language/constructor"), a [new-expression](new.html "cpp/language/new"), or temporary object creation due to syntax restrictions. 

In C, character array of size one less than the size of the string literal may be initialized from a string literal; the resulting array is not null-terminated. This is not allowed in C++. 

Feature-test macro  | Value | Std | Feature   
---|---|---|---  
[`__cpp_aggregate_bases`](../experimental/feature_test.html#cpp_aggregate_bases "cpp/feature test") | [`201603L`](../compiler_support/17.html#cpp_aggregate_bases_201603L "cpp/compiler support/17") | (C++17) | Aggregate classes with base classes   
[`__cpp_aggregate_nsdmi`](../experimental/feature_test.html#cpp_aggregate_nsdmi "cpp/feature test") | [`201304L`](../compiler_support/14.html#cpp_aggregate_nsdmi_201304L "cpp/compiler support/14") | (C++14) | Aggregate classes with default member initializers   
[`__cpp_aggregate_paren_init`](../experimental/feature_test.html#cpp_aggregate_paren_init "cpp/feature test") | [`201902L`](../compiler_support/20.html#cpp_aggregate_paren_init_201902L "cpp/compiler support/20") | (C++20) | Aggregate initialization in the form of [direct initialization](direct_initialization.html "cpp/language/direct initialization")  
[`__cpp_char8_t`](../experimental/feature_test.html#cpp_char8_t "cpp/feature test") | [`202207L`](../compiler_support/23.html#cpp_char8_t_202207L "cpp/compiler support/23") | (C++23)  
(DR20) | char8_t compatibility and portability fix ([allow initialization of (unsigned char arrays](aggregate_initialization.html#Character_arrays) from [UTF-8 string literals](string_literal.html "cpp/language/string literal"))   
[`__cpp_designated_initializers`](../experimental/feature_test.html#cpp_designated_initializers "cpp/feature test") | [`201707L`](../compiler_support/20.html#cpp_designated_initializers_201707L "cpp/compiler support/20") | (C++20) | [Designated initializers](aggregate_initialization.html#Designated_initializers)  
  
### Example

Run this code
    
    
    #include <array>
    #include <cstdio>
    #include <string>
     
    struct S
    {
        int x;
     
        struct Foo
        {
            int i;
            int j;
            int a[3];
        } b;
    };
     
    int main()
    {
        S s1 = {1, {2, 3, {4, 5, 6}}};
        S s2 = {1, 2, 3, 4, 5, 6}; // same, but with brace elision
        S s3{1, {2, 3, {4, 5, 6}}}; // same, using direct-list-initialization syntax
        S s4{1, 2, 3, 4, 5, 6}; // error until CWG 1270:
                                // brace elision only allowed with equals sign
     
        int ar[] = {1, 2, 3}; // ar is int[3]
    //  char cr[3] = {'a', 'b', 'c', 'd'}; // too many initializer clauses
        char cr[3] = {'a'}; // array initialized as {'a', '\0', '\0'}
     
        int ar2d1[2][2] = {{1, 2}, {3, 4}}; // fully-braced 2D array: {1, 2}
                                            //                        {3, 4}
        int ar2d2[2][2] = {1, 2, 3, 4}; // brace elision: {1, 2}
                                        //                {3, 4}
        int ar2d3[2][2] = {{1}, {2}};   // only first column: {1, 0}
                                        //                    {2, 0}
     
        [std::array](../container/array.html)<int, 3> std_ar2{{1, 2, 3}};  // std::array is an aggregate
        [std::array](../container/array.html)<int, 3> std_ar1 = {1, 2, 3}; // brace-elision okay
     
    //  int ai[] = {1, 2.0}; // narrowing conversion from double to int:
                             // error in C++11, okay in C++03
     
        [std::string](../string/basic_string.html) ars[] = {[std::string](../string/basic_string.html)("one"), // copy-initialization
                             "two",              // conversion, then copy-initialization
                             {'t', 'h', 'r', 'e', 'e'}}; // list-initialization
        union U
        {
            int a;
            const char* b;
        };
        U u1 = {1};         // OK, first member of the union
    //  U u2 = {0, "asdf"}; // error: too many initializers for union
    //  U u3 = {"asdf"};    // error: invalid conversion to int
     
        [](...) { [std::puts](../io/c/puts.html)("Garbage collecting unused variables... Done."); }
        (
            s1, s2, s3, s4, ar, cr, ar2d1, ar2d2, ar2d3, std_ar2, std_ar1, u1
        );
    }
     
    // aggregate
    struct base1 { int b1, b2 = 42; };
     
    // non-aggregate
    struct base2
    {
        base2() : b3(42) {}
     
        int b3;
    };
     
    // aggregate in C++17
    struct derived : base1, base2 { int d; };
     
    derived d1{{1, 2}, {}, 4}; // d1.b1 = 1, d1.b2 = 2,  d1.b3 = 42, d1.d = 4
    derived d2{{}, {}, 4};     // d2.b1 = 0, d2.b2 = 42, d2.b3 = 42, d2.d = 4

Output: 
    
    
    Garbage collecting unused variables... Done.

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[CWG 413](https://cplusplus.github.io/CWG/issues/413.html) | C++98  | anonymous bit-fields were initialized in aggregate initialization  | they are ignored   
[CWG 737](https://cplusplus.github.io/CWG/issues/737.html) | C++98  | when a character array is initialized with a string literal  
having fewer characters than the array size, the character  
elements after the trailing '\0' was uninitialized  | they are  
zero-initialized   
[CWG 1270](https://cplusplus.github.io/CWG/issues/1270.html) | C++11  | brace elision was only allowed to be used in copy-list-initialization  | allowed elsewhere   
[CWG 1518](https://cplusplus.github.io/CWG/issues/1518.html) | C++11  | a class that declares an explicit default constructor or  
has inherited constructors should could be an aggregate  | it is not an  
aggregate   
[CWG 1622](https://cplusplus.github.io/CWG/issues/1622.html) | C++98  | a union could not be initialized with {} | allowed   
[CWG 2149](https://cplusplus.github.io/CWG/issues/2149.html)  
([P3106R1](https://wg21.link/P3106R1))  | C++98  | it was unclear whether brace elision is  
applicable during array size deduction  | applicable   
[CWG 2272](https://cplusplus.github.io/CWG/issues/2272.html) | C++98  | a non-static reference member that is not explicitly  
initialized was copy-initialized from an empty initializer list  | the program is ill-  
formed in this case   
[CWG 2610](https://cplusplus.github.io/CWG/issues/2610.html) | C++17  | aggregate types could not have private or protected indirect base classes  | allowed   
[CWG 2619](https://cplusplus.github.io/CWG/issues/2619.html) | C++20  | the kind of the initialization from designated initializers was unclear  | it depends on the  
kind of the initializer   
[P2513R4](https://wg21.link/P2513R4) | C++20  | a UTF-8 string literal could not initialize an array of char  
or unsigned char, which was incompatible with C or C++17  | such initialization  
is valid   
  
### See also

  * [copy elision](copy_elision.html "cpp/language/copy elision")
  * [initialization](initialization.html "cpp/language/initialization")
    * [constant initialization](constant_initialization.html "cpp/language/constant initialization")
    * [list initialization](list_initialization.html "cpp/language/list initialization")
    * [reference initialization](reference_initialization.html "cpp/language/reference initialization")
    * [value initialization](value_initialization.html "cpp/language/value initialization")
    * [zero initialization](zero_initialization.html "cpp/language/zero initialization")

[C documentation](../../c/language/struct_initialization.html "c/language/struct initialization") for Struct and union initialization  
---
  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
