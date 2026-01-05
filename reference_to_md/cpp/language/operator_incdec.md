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
**Increment and decrement**  
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
[`sizeof`](sizeof.html "cpp/language/sizeof")  
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
  


Increment/decrement operators increment or decrement the value of the object. 

Operator name  | Syntax  | [Over​load​able](operators.html "cpp/language/operators") | Prototype examples (for class T)   
---|---|---|---  
Inside class definition  | Outside class definition   
pre-increment  | `++a` | Yes  | T& T::operator++(); | T& operator++(T& a);  
pre-decrement  | `--a` | Yes  | T& T::operator\--(); | T& operator\--(T& a);  
post-increment  | `a++` | Yes  | T T::operator++(int); | T operator++(T& a, int);  
post-decrement  | `a--` | Yes  | T T::operator\--(int); | T operator\--(T& a, int);  
  
    **Notes**  


  * Prefix versions of the built-in operators return _references_ and postfix versions return _values_ , and typical [user-defined overloads](operators.html "cpp/language/operators") follow the pattern so that the user-defined operators can be used in the same manner as the built-ins. However, in a user-defined operator overload, any type can be used as return type (including void). 
  * The int parameter is a dummy parameter used to differentiate between prefix and postfix versions of the operators. When the user-defined postfix operator is called, the value passed in that parameter is always zero, although it may be changed by calling the operator using function call notation (e.g., a.operator++(2) or operator++(a, 2)). 

  
  
## Contents

  * [1 Prefix operators](operator_incdec.html#Prefix_operators)
    * [1.1 Built-in prefix operators](operator_incdec.html#Built-in_prefix_operators)
    * [1.2 Overloads](operator_incdec.html#Overloads)
  * [2 Postfix operators](operator_incdec.html#Postfix_operators)
    * [2.1 Built-in postfix operators](operator_incdec.html#Built-in_postfix_operators)
    * [2.2 Overloads](operator_incdec.html#Overloads_2)
    * [2.3 Example](operator_incdec.html#Example)
  * [3 Notes](operator_incdec.html#Notes)
  * [4 Standard library](operator_incdec.html#Standard_library)
    * [4.1 overloads for arithmetic types](operator_incdec.html#overloads_for_arithmetic_types)
    * [4.2 overloads for iterator types](operator_incdec.html#overloads_for_iterator_types)
  * [5 Defect reports](operator_incdec.html#Defect_reports)
  * [6 See also](operator_incdec.html#See_also)

  
---  
  
### Prefix operators

The prefix increment and decrement expressions have the form   
  
---  
`**++**` expression |  |   
`**--**` expression |  |   
  
1) prefix increment (pre-increment)

2) prefix decrement (pre-decrement)

#### Built-in prefix operators

1) The expression ++x is equivalent to x += 1, with the following exceptions: 

  * If the type of expression is (possibly volatile-qualified) bool, expression is set to true. Such a increment is deprecated. 

| (until C++17)  
---|---  
  
  * If the type of expression is (possibly cv-qualified) bool, the program is ill-formed. 

| (since C++17)  
  
  * If the type of expression is volatile-qualified, the increment is deprecated. 

| (since C++20)  
  
2) The expression \--x is equivalent to x -= 1, with the following exceptions: 

  * If the type of expression is (possibly cv-qualified) bool, the program is ill-formed. 



  * If the type of expression is volatile-qualified, the decrement is deprecated. 

| (since C++20)  
---|---  
  
#### Overloads

In [overload resolution against user-defined operators](overload_resolution.html#Call_to_an_overloaded_operator "cpp/language/overload resolution"), for every optionally volatile-qualified arithmetic type `A` other than bool, and for every optionally volatile-qualified pointer `P` to optionally cv-qualified object type, the following function signatures participate in overload resolution: 

A& operator++(A&) |  |   
---|---|---  
bool& operator++(bool&) |  |  (deprecated)(until C++17)  
P& operator++(P&) |  |   
A& operator\--(A&) |  |   
P& operator\--(P&) |  |   
| |   
  
### Postfix operators

The postfix increment and decrement expressions have the form   
  
---  
expression `**++**` |  |   
expression `**--**` |  |   
  
1) postfix increment (post-increment)

2) postfix decrement (post-decrement)

#### Built-in postfix operators

The result of postfix increment or decrement is the value obtained by applying the [lvalue-to-rvalue conversion](implicit_cast.html#Lvalue-to-rvalue_conversion "cpp/language/implicit conversion") to expression (before modification). The type of the result is the cv-unqualified version of the type of expression. 

If expression is not a modifiable lvalue of an arithmetic type other than (possibly cv-qualified) bool(since C++17), or a pointer to a complete object type, the program is ill-formed. 

If the type of expression is volatile-qualified, the increment or decrement is deprecated.  | (since C++20)  
---|---  
  
1) The value of expression is modified as if it were the operand of the prefix `++` operator.

2) The value of expression is modified as if it were the operand of the prefix `--` operator.

The value computation of a postfix increment or decrement is [sequenced before](eval_order.html "cpp/language/eval order") the modification of expression. With respect to an indeterminately-sequenced function call, the operation of a postfix increment or decrement is a single evaluation. 

#### Overloads

In [overload resolution against user-defined operators](overload_resolution.html#Call_to_an_overloaded_operator "cpp/language/overload resolution"), for every optionally volatile-qualified arithmetic type `A` other than bool, and for every optionally volatile-qualified pointer `P` to optionally cv-qualified object type, the following function signatures participate in overload resolution: 

A operator++(A&, int) |  |   
---|---|---  
bool operator++(bool&, int) |  |  (deprecated)(until C++17)  
P operator++(P&, int) |  |   
A operator\--(A&, int) |  |   
P operator\--(P&, int) |  |   
| |   
  
#### Example

Run this code
    
    
    #include <iostream>
     
    int main()
    {
        int n1 = 1;
        int n2 = ++n1;
        int n3 = ++ ++n1;
        int n4 = n1++;
    //  int n5 = n1++ ++;   // error
    //  int n6 = n1 + ++n1; // undefined behavior
        [std::cout](../io/cout.html) << "n1 = " << n1 << '\n'
                  << "n2 = " << n2 << '\n'
                  << "n3 = " << n3 << '\n'
                  << "n4 = " << n4 << '\n';
    }

Output: 
    
    
    n1 = 5
    n2 = 2
    n3 = 4
    n4 = 4

### Notes

Because of the side-effects involved, built-in increment and decrement operators must be used with care to avoid undefined behavior due to violations of [sequencing rules](eval_order.html "cpp/language/eval order"). 

Because a temporary copy of the object is constructed during post-increment and post-decrement, pre-increment or pre-decrement operators are usually more efficient in contexts where the returned value is not used. 

### Standard library

Increment and decrement operators are overloaded for many standard library types. In particular, every [LegacyIterator](../named_req/Iterator.html "cpp/named req/Iterator") overloads operator++ and every [LegacyBidirectionalIterator](../named_req/BidirectionalIterator.html "cpp/named req/BidirectionalIterator") overloads operator\--, even if those operators are no-ops for the particular iterator. 

#####  overloads for arithmetic types   
  
---  
[ operator++operator++(int)operator--operator--(int)](../atomic/atomic/operator_arith.html "cpp/atomic/atomic/operator arith") |  increments or decrements the atomic value by one   
(public member function of `std::atomic<T>`)   
[ operator++operator++(int)operator--operator--(int)](../chrono/duration/operator_arith2.html "cpp/chrono/duration/operator arith2") |  increments or decrements the tick count   
(public member function of `std::chrono::duration<Rep,Period>`)   
  
#####  overloads for iterator types   
  
[ operator++operator++(int)](../memory/raw_storage_iterator/operator_arith.html "cpp/memory/raw storage iterator/operator arith") |  advances the iterator   
(public member function of `std::raw_storage_iterator<OutputIt,T>`)   
[ operator++operator++(int)operator+=operator+operator--operator--(int)operator-=operator-](../iterator/reverse_iterator/operator++.html "cpp/iterator/reverse iterator/operator arith") |  advances or decrements the `reverse_iterator`   
(public member function of `std::reverse_iterator<Iter>`)   
[ operator++operator++(int)operator+=operator+operator--operator--(int)operator-=operator-](../iterator/move_iterator/operator_arith.html "cpp/iterator/move iterator/operator arith") |  advances or decrements the `move_iterator`   
(public member function of `std::move_iterator<Iter>`)   
[ operator++operator++(int)](../iterator/front_insert_iterator/operator++.html "cpp/iterator/front insert iterator/operator++") |  no-op   
(public member function of `std::front_insert_iterator<Container>`)   
[ operator++operator++(int)](../iterator/back_insert_iterator/operator++.html "cpp/iterator/back insert iterator/operator++") |  no-op   
(public member function of `std::back_insert_iterator<Container>`)   
[ operator++operator++(int)](../iterator/insert_iterator/operator++.html "cpp/iterator/insert iterator/operator++") |  no-op   
(public member function of `std::insert_iterator<Container>`)   
[ operator++operator++(int)](../iterator/istream_iterator/operator_arith.html "cpp/iterator/istream iterator/operator arith") |  advances the iterator   
(public member function of `std::istream_iterator<T,CharT,Traits,Distance>`)   
[ operator++operator++(int)](../iterator/ostream_iterator/operator_arith.html "cpp/iterator/ostream iterator/operator arith") |  no-op   
(public member function of `std::ostream_iterator<T,CharT,Traits>`)   
[ operator++operator++(int)](../iterator/istreambuf_iterator/operator_arith.html "cpp/iterator/istreambuf iterator/operator arith") |  advances the iterator   
(public member function of `std::istreambuf_iterator<CharT,Traits>`)   
[ operator++operator++(int)](../iterator/ostreambuf_iterator/operator_arith.html "cpp/iterator/ostreambuf iterator/operator arith") |  no-op   
(public member function of `std::ostreambuf_iterator<CharT,Traits>`)   
[ operator++operator++(int)](../regex/regex_iterator/operator_arith.html "cpp/regex/regex iterator/operator arith") |  advances the iterator to the next match   
(public member function of `std::regex_iterator<BidirIt,CharT,Traits>`)   
[ operator++operator++(int)](../regex/regex_token_iterator/operator_arith.html "cpp/regex/regex token iterator/operator arith") |  advances the iterator to the next submatch   
(public member function of `std::regex_token_iterator<BidirIt,CharT,Traits>`)   
  
### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[CWG 2855](https://cplusplus.github.io/CWG/issues/2855.html) | C++98  | usual arithmetic conversions are applied for built-in pre-increment and  
pre-decrement, but were not applied for their postfix counterparts[[1]](operator_incdec.html#cite_note-1) | also applied   
[CWG 2901](https://cplusplus.github.io/CWG/issues/2901.html) | C++98  | lvalue-to-rvalue conversions were not applied  
for built-in post-increment and post-decrement  | applied   
  
  1. [↑](operator_incdec.html#cite_ref-1) The prefix ++x is equivalent to x += 1, and the latter is applicable for usual arithmetic conversions (i.e. yield a common type between decltype(x) and int). However, the effect of the postfix x++ is simply “adding one to x”, there is no binary operator present, so no usual arithmetic conversions will take place.



### See also

[Operator precedence](operator_precedence.html "cpp/language/operator precedence")

[Operator overloading](operators.html "cpp/language/operators")

Common operators   
---  
[assignment](operator_assignment.html "cpp/language/operator assignment") | **increment  
decrement** | [arithmetic](operator_arithmetic.html "cpp/language/operator arithmetic") | [logical](operator_logical.html "cpp/language/operator logical") | [comparison](operator_comparison.html "cpp/language/operator comparison") | [member  
access](operator_member_access.html "cpp/language/operator member access") | [other](operator_other.html "cpp/language/operator other")  
a = b  
a += b  
a -= b  
a *= b  
a /= b  
a %= b  
a &= b  
a |= b  
a ^= b  
a <<= b  
a >>= b |  ++a  
\--a  
a++  
a\-- |  +a  
-a  
a + b  
a - b  
a * b  
a / b  
a % b  
~a  
a & b  
a | b  
a ^ b  
a << b  
a >> b |  !a  
a && b  
a || b |  a == b  
a != b  
a < b  
a > b  
a <= b  
a >= b  
a <=> b |  a[...]  
*a  
&a  
a->b  
a.b  
a->*b  
a.*b | function call  
  
a(...)  
comma  
  
a, b  
conditional  
  
a ? b : c  
Special operators   
[`static_cast`](static_cast.html "cpp/language/static cast") converts one type to another related type  
[`dynamic_cast`](dynamic_cast.html "cpp/language/dynamic cast") converts within inheritance hierarchies  
[`const_cast`](const_cast.html "cpp/language/const cast") adds or removes [cv](cv.html "cpp/language/cv")-qualifiers  
[`reinterpret_cast`](reinterpret_cast.html "cpp/language/reinterpret cast") converts type to unrelated type  
[C-style cast](explicit_cast.html "cpp/language/explicit cast") converts one type to another by a mix of static_cast, const_cast, and reinterpret_cast  
[`new`](new.html "cpp/language/new") creates objects with dynamic storage duration  
[`delete`](delete.html "cpp/language/delete") destructs objects previously created by the new expression and releases obtained memory area  
[`sizeof`](sizeof.html "cpp/language/sizeof") queries the size of a type  
[`sizeof...`](sizeof....html "cpp/language/sizeof...") queries the size of a [pack](parameter_pack.html "cpp/language/pack") (since C++11)  
[`typeid`](typeid.html "cpp/language/typeid") queries the type information of a type  
[`noexcept`](noexcept.html "cpp/language/noexcept") checks if an expression can throw an exception (since C++11)  
[`alignof`](alignof.html "cpp/language/alignof") queries alignment requirements of a type (since C++11)  
[C documentation](../../c/language/operator_incdec.html "c/language/operator incdec") for Increment/decrement operators  
---
