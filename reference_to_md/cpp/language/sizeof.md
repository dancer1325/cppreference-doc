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
  


[ Expressions](expressions.html "cpp/language/expressions")

General  
---  
| [Value categories](value_category.html "cpp/language/value category")  
---  
[Order of evaluation](eval_order.html "cpp/language/eval order")  
[Constant expressions](constant_expression.html "cpp/language/constant expression")  
[Primary expressions](expressions.html#Primary_expressions "cpp/language/expressions")  
  
| [Lambda expressions](lambda.html "cpp/language/lambda") (C++11)  
---  
[Requires expressions](requires.html "cpp/language/requires") (C++20)  
[Pack indexing expression](pack_indexing.html#Pack_indexing_expression "cpp/language/pack indexing") (C++26)  
[Potentially-evaluated expressions](expressions.html#Potentially-evaluated_expressions "cpp/language/expressions")  
  
Literals  
| [Integer literals](integer_literal.html "cpp/language/integer literal")  
---  
[Floating-point literals](floating_literal.html "cpp/language/floating literal")  
[Boolean literals](bool_literal.html "cpp/language/bool literal")  
[Character literals](character_literal.html "cpp/language/character literal")  
  
| [Escape sequences](escape.html "cpp/language/escape")  
---  
[String literals](string_literal.html "cpp/language/string literal")  
[Null pointer literal](nullptr.html "cpp/language/nullptr") (C++11)  
[User-defined literal](user_literal.html "cpp/language/user literal") (C++11)  
  
Operators  
| [Assignment operators](operator_assignment.html "cpp/language/operator assignment")  
---  
[Increment and decrement](operator_incdec.html "cpp/language/operator incdec")  
[Arithmetic operators](operator_arithmetic.html "cpp/language/operator arithmetic")  
[Logical operators](operator_logical.html "cpp/language/operator logical")  
[Comparison operators](operator_comparison.html "cpp/language/operator comparison")  
[Member access operators](operator_member_access.html "cpp/language/operator member access")  
[Other operators](operator_other.html "cpp/language/operator other")  
[`new`-expression](new.html "cpp/language/new")  
[`delete`-expression](delete.html "cpp/language/delete")  
[`throw`-expression](throw.html "cpp/language/throw")  
  
| [`alignof`](alignof.html "cpp/language/alignof")  
---  
**`sizeof`**  
[`sizeof...`](sizeof....html "cpp/language/sizeof...") (C++11)  
[`typeid`](typeid.html "cpp/language/typeid")  
[`noexcept`](noexcept.html "cpp/language/noexcept") (C++11)  
[Fold expressions](fold.html "cpp/language/fold") (C++17)  
[Alternative representations of operators](operator_alternative.html "cpp/language/operator alternative")  
[Precedence and associativity](operator_precedence.html "cpp/language/operator precedence")  
[Operator overloading](operators.html "cpp/language/operators")  
[Default comparisons](default_comparisons.html "cpp/language/default comparisons") (C++20)  
  
Conversions  
| [Implicit conversions](implicit_cast.html "cpp/language/implicit conversion")  
---  
[Explicit conversions](explicit_cast.html "cpp/language/explicit cast")  
[Usual arithmetic conversions](usual_arithmetic_conversions.html "cpp/language/usual arithmetic conversions")  
[User-defined conversion](cast_operator.html "cpp/language/cast operator")  
  
| [`const_cast`](const_cast.html "cpp/language/const cast")  
---  
[`static_cast`](static_cast.html "cpp/language/static cast")  
[`dynamic_cast`](dynamic_cast.html "cpp/language/dynamic cast")  
[`reinterpret_cast`](reinterpret_cast.html "cpp/language/reinterpret cast")  
  


Queries size of the object or type. 

Used when actual size of the object must be known. 

## Contents

  * [1 Syntax](sizeof.html#Syntax)
  * [2 Notes](sizeof.html#Notes)
  * [3 Keywords](sizeof.html#Keywords)
  * [4 Example](sizeof.html#Example)
  * [5 Defect reports](sizeof.html#Defect_reports)
  * [6 See also](sizeof.html#See_also)

  
---  
  
### Syntax  
  
---  
`**sizeof(**` type `**)**` |  (1)  |   
`**sizeof**` expression `` |  (2)  |   
  
1) Yields the size in bytes of the [object representation](objects.html "cpp/language/object") of type.

2) Yields the size in bytes of the object representation of the type of expression, if that expression is evaluated.

type |  \-  |  a type-id (see [type naming](type-id.html#Type_naming "cpp/language/type"))   
---|---|---  
expression |  \-  |  an expression whose [operator precedence](operator_precedence.html "cpp/language/operator precedence") is not lower than `sizeof` (e.g. sizeof a + b is parsed as (sizeof a) + b instead of sizeof (a + b))   
  
The result of a `sizeof` expression is a [constant expression](constant_expression.html "cpp/language/constant expression") of type [std::size_t](../types/size_t.html "cpp/types/size t"). 

### Notes

Depending on the computer architecture, a [byte](https://en.wikipedia.org/wiki/byte "enwiki:byte") may consist of 8 or more bits, the exact number being recorded in [CHAR_BIT](../types/climits.html "cpp/types/climits"). 

The following `sizeof` expressions always evaluate to 1: 

  * sizeof(char)
  * sizeof(signed char)
  * sizeof(unsigned char)



  * sizeof([std::byte](../types/byte.html))

| (since C++17)  
---|---  
  
  * sizeof(char8_t)

| (since C++20)  
  
`sizeof` cannot be used with function types, incomplete types, or bit-field lvalues(until C++11)glvalues(since C++11). 

When applied to a reference type, the result is the size of the referenced type. 

When applied to a class type, the result is the number of bytes occupied by a complete object of that class, including any additional padding required to place such object in an array. The number of bytes occupied by a [potentially-overlapping subobject](objects.html#Subobjects "cpp/language/object") may be less than the size of that object. 

The result of `sizeof` is always nonzero, even if applied to an empty class type. 

When applied to an expression, `sizeof` does [not evaluate the expression](expressions.html#Potentially-evaluated_expressions "cpp/language/expressions") (i.e. the expression is an unevaluated operand)(since C++11), and even if the expression designates a polymorphic object, the result is the size of the static type of the expression. Lvalue-to-rvalue, array-to-pointer, or function-to-pointer conversions are not performed. [Temporary materialization](implicit_cast.html#Temporary_materialization "cpp/language/implicit conversion"), however, is (formally) performed for prvalue arguments: the program is ill-formed if the argument is not destructible.(since C++17)

### Keywords

[`sizeof`](../keyword/sizeof.html "cpp/keyword/sizeof")

### Example

The example output corresponds to a system with 64-bit pointers and 32-bit int (a.k.a. [**LP64** or **LLP64**](types.html#Data_models "cpp/language/types")).

Run this code
    
    
    #include <cstdlib>
    #include <iostream>
     
    struct Empty          { };
    struct Base           { int a; };
    struct Derived : Base { int b; };
    struct Bit            { unsigned bit: 1; };
    struct CharChar       { char c; char c2; };
    struct CharCharInt    { char c; char c2; int i; };
    struct IntCharChar    { int i;  char c;  char c2; };
    struct CharIntChar    { char c; int i;   char c2; };
    struct CharShortChar  { char c; short s; char c2; };
     
    int main()
    {
        Empty e;
        Derived d;
        Base& b = d;
        [[maybe_unused]] Bit bit;
        int a[10];
     
        auto f = [&]() { return sizeof(int[10]) == sizeof a ? throw 1 : e; };
    //  f(); // the return type is Empty, but always throws 1
     
        auto println = [](auto rem, [std::size_t](../types/size_t.html) size) { [std::cout](../io/cout.html) << rem << size << '\n'; };
     
        println( "1) sizeof empty class:              ", sizeof e                     );
        println( "2) sizeof pointer:                  ", sizeof &e                    );
        println( "3) sizeof(Bit) class:               ", sizeof(Bit)                  );
        println( "4) sizeof(int[10]) array of 10 int: ", sizeof(int[10])              );
        println( "5) sizeof a        array of 10 int: ", sizeof a                     );
        println( "6) length of array of 10 int:       ", ((sizeof a) / (sizeof *a))   );
        println( "7) length of array of 10 int (2):   ", ((sizeof a) / (sizeof a[0])) );
        println( "8) sizeof the Derived class:        ", sizeof d                     );
        println( "9) sizeof the Derived through Base: ", sizeof b                     );
        println( "A) sizeof(unsigned):                ", sizeof(unsigned)             );
        println( "B) sizeof(int):                     ", sizeof(int)                  );
        println( "C) sizeof(short):                   ", sizeof(short)                );
        println( "D) sizeof(char):                    ", sizeof(char)                 );
        println( "E) sizeof(CharChar):                ", sizeof(CharChar)             );
        println( "F) sizeof(CharCharInt):             ", sizeof(CharCharInt)          );
        println( "G) sizeof(IntCharChar):             ", sizeof(IntCharChar)          );
        println( "H) sizeof(CharIntChar):             ", sizeof(CharIntChar)          );
        println( "I) sizeof(CharShortChar):           ", sizeof(CharShortChar)        );
        println( "J) sizeof f():                      ", sizeof f()                   );
        println( "K) sizeof Base::a:                  ", sizeof Base::a               );
     
    //  println( "sizeof function:        ", sizeof(void()) ); // error
    //  println( "sizeof incomplete type: ", sizeof(int[])  ); // error
    //  println( "sizeof bit-field:       ", sizeof bit.bit ); // error
    }

Possible output: 
    
    
    1) sizeof empty class:              1
    2) sizeof pointer:                  8
    3) sizeof(Bit) class:               4
    4) sizeof(int[10]) array of 10 int: 40
    5) sizeof a        array of 10 int: 40
    6) length of array of 10 int:       10
    7) length of array of 10 int (2):   10
    8) sizeof the Derived class:        8
    9) sizeof the Derived through Base: 4
    A) sizeof(unsigned):                4
    B) sizeof(int):                     4
    C) sizeof(short):                   2
    D) sizeof(char):                    1
    E) sizeof(CharChar):                2
    F) sizeof(CharCharInt):             8
    G) sizeof(IntCharChar):             8
    H) sizeof(CharIntChar):             12
    I) sizeof(CharShortChar):           6
    J) sizeof f():                      1
    K) sizeof Base::a:                  4

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[CWG 1553](https://cplusplus.github.io/CWG/issues/1553.html) | C++11  | `sizeof` could be used with bit-field xvalues  | prohibited   
  
### See also

`**[alignof](alignof.html "cpp/language/alignof")**` (C++11) |  queries alignment requirements of a type  
(operator)  
---|---  
[`sizeof...` operator](sizeof....html "cpp/language/sizeof...") (C++11) |  queries the number of elements in a [pack](parameter_pack.html "cpp/language/pack")  
[ numeric_limits](../types/numeric_limits.html "cpp/types/numeric limits") |  provides an interface to query properties of all fundamental numeric types   
(class template)   
[C documentation](../../c/language/sizeof.html "c/language/sizeof") for sizeof
