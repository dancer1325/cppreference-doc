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
**Usual arithmetic conversions**  
[User-defined conversion](cast_operator.html "cpp/language/cast operator")  
  
| [`const_cast`](const_cast.html "cpp/language/const cast")  
---  
[`static_cast`](static_cast.html "cpp/language/static cast")  
[`dynamic_cast`](dynamic_cast.html "cpp/language/dynamic cast")  
[`reinterpret_cast`](reinterpret_cast.html "cpp/language/reinterpret cast")  
  


Many binary operators that expect operands of [arithmetic](type-id.html "cpp/language/type") or [enumeration](enum.html "cpp/language/enum") type cause conversions and yield result types in a similar way. The purpose is to yield a common type, which is also the type of the result. This pattern is called the _usual arithmetic conversions_. 

## Contents

  * [1 Definition](usual_arithmetic_conversions.html#Definition)
    * [1.1 Stage 1](usual_arithmetic_conversions.html#Stage_1)
    * [1.2 Stage 2](usual_arithmetic_conversions.html#Stage_2)
    * [1.3 Stage 3](usual_arithmetic_conversions.html#Stage_3)
    * [1.4 Stage 4](usual_arithmetic_conversions.html#Stage_4)
    * [1.5 Stage 5](usual_arithmetic_conversions.html#Stage_5)
  * [2 Integer conversion rank](usual_arithmetic_conversions.html#Integer_conversion_rank)
  * [3 Floating-point conversion rank and subrank](usual_arithmetic_conversions.html#Floating-point_conversion_rank_and_subrank)
    * [3.1 Floating-point conversion rank](usual_arithmetic_conversions.html#Floating-point_conversion_rank)
    * [3.2 Floating-point conversion subrank](usual_arithmetic_conversions.html#Floating-point_conversion_subrank)
    * [3.3 Usage](usual_arithmetic_conversions.html#Usage)
  * [4 Defect reports](usual_arithmetic_conversions.html#Defect_reports)

  
---  
  
### Definition

Usual arithmetic conversions are defined as follows: 

#### Stage 1

Applies [lvalue-to-rvalue conversion](implicit_cast.html#Lvalue-to-rvalue_conversion "cpp/language/implicit conversion") to both operands, the resulting prvalues are used in place of the original operands for the remaining process. 

#### Stage 2

  * If either operand is of [scoped enumeration type](enum.html#Scoped_enumerations "cpp/language/enum"), no conversions are performed; if the other operand does not have the same type, the expression is ill-formed. 
  * Otherwise, proceed to the next stage. 

| (since C++11)  
---|---  
  
#### Stage 3

  * If either operand is of [enumeration type](enum.html "cpp/language/enum"), and the other operand is of a different enumeration type or a floating-point type, the expression is ill-formed. 
  * Otherwise, proceed to the next stage. 

| (since C++26)  
---|---  
  
#### Stage 4

  * If either operand is of [floating-point type](types.html#Floating-point_types "cpp/language/types"), the following rules are applied: 



    

  * If both operands have the same type, no further conversion will be performed. 
  * Otherwise, if one of the operands is of a non-floating-point type, that operand is converted to the type of the other operand. 
  * Otherwise, if the [floating-point conversion ranks](usual_arithmetic_conversions.html#Floating-point_conversion_rank) of the types of the operands are ordered but(since C++23) not equal, then the operand of the type with the lesser floating-point conversion rank is converted to the type of the other operand. 



    

  * Otherwise, if the floating-point conversion ranks of the types of the operands are equal, then the operand with the lesser [floating-point conversion subrank](usual_arithmetic_conversions.html#Floating-point_conversion_subrank) is converted to the type of the other operand. 
  * Otherwise, the expression is ill-formed. 


| (since C++23)  
---|---  
  
  * Otherwise, both operands are of integer types, proceed to the next stage. 



#### Stage 5

Both operands are converted to a common type `C`. Given the types `T1` and `T2` as the promoted type ([under the rules of integral promotions](implicit_cast.html#Integral_promotion "cpp/language/implicit conversion")) of the operands, the following rules are applied to determine `C`: 

  * If `T1` and `T2` are the same type, `C` is that type. 
  * Otherwise, if `T1` and `T2` are both signed integer types or both unsigned integer types, `C` is the type of greater [integer conversion rank](usual_arithmetic_conversions.html#Integer_conversion_rank). 
  * Otherwise, one type between `T1` and `T2` is an signed integer type `S`, the other type is an unsigned integer type `U`. Apply the following rules: 



    

  * If the integer conversion rank of `U` is greater than or equal to the integer conversion rank of `S`, `C` is `U`. 
  * Otherwise, if `S` can represent all of the values of `U`, `C` is `S`. 
  * Otherwise, `C` is the unsigned integer type corresponding to `S`. 


If one operand is of enumeration type and the other operand is of a different enumeration type or a floating-point type, this behavior is deprecated.  | (since C++20)  
(until C++26)  
---|---  
  
### Integer conversion rank

Every [integer type](types.html#Integer_types "cpp/language/types") has an _integer conversion rank_ defined as follows: 

  * No two signed integer types other than char and signed char (if char is signed) have the same rank, even if they have the same representation. 
  * The rank of a signed integer type is greater than the rank of any signed integer type with a smaller width. 
  * The ranks of the following integer types decrease in order: 



    

  * long long


| (since C++11)  
---|---  
  
    

  * long
  * int
  * short
  * signed char



  * The rank of any unsigned integer type equals the rank of the corresponding signed integer type. 



  * The rank of any standard integer type is greater than the rank of any extended integer type with the same width. 

| (since C++11)  
---|---  
  
  * The rank of bool is less than the rank of all standard integer types. 
  * The ranks of encoding character types (char , char8_t(since C++20), char16_t, char32_t,(since C++11) and wchar_t) equal the ranks of their [underlying types](types.html#Character_types "cpp/language/types"), which means: 



    

  * The rank of char equals the rank of signed char and unsigned char. 



    

  * The rank of char8_t equals the rank of unsigned char. 


| (since C++20)  
---|---  
  
    

  * The rank of char16_t equals the rank of [std::uint_least16_t](../types/integer.html "cpp/types/integer"). 
  * The rank of char32_t equals the rank of [std::uint_least32_t](../types/integer.html "cpp/types/integer"). 


| (since C++11)  
  
    

  * The rank of wchar_t equals the rank of its implementation-defined underlying type. 



  * The rank of any extended signed integer type relative to another extended signed integer type with the same width is implementation-defined, but still subject to the other rules for determining the integer conversion rank. 

| (since C++11)  
---|---  
  
  * For all integer types `T1`, `T2`, and `T3`, if `T1` has greater rank than `T2` and `T2` has greater rank than `T3`, then `T1` has greater rank than `T3`. 



The integer conversion rank is also used in the definition of [integral promotion](implicit_cast.html#Integral_promotion "cpp/language/implicit conversion"). 

### Floating-point conversion rank and subrank

#### Floating-point conversion rank

Every [floating-point type](types.html#Floating-point_types "cpp/language/types") has a _floating-point conversion rank_ defined as follows: 

  * The ranks of the standard floating-point types decrease in order: 
    * long double
    * double
    * float



  * The rank of a floating-point type `T` is greater than the rank of any floating-point type whose set of values is a proper subset of the set of values of `T`. 
  * Two extended floating-point types with the same set of values have equal ranks. 
  * An extended floating-point type with the same set of values as exactly one cv-unqualified standard floating-point type has a rank equal to the rank of that standard floating-point type. 
  * An extended floating-point type with the same set of values as more than one cv-unqualified standard floating-point type has a rank equal to the rank of double. 

| (since C++23)  
---|---  
  
  


####  Floating-point conversion subrank

Floating-point types that have equal floating-point conversion ranks are ordered by _floating-point conversion subrank_. The subrank forms a total order among types with equal ranks. The types `std::float16_t`, `std::float32_t`, `std::float64_t`, and `std::float128_t` ([fixed width floating-point types](../types/floating-point.html "cpp/types/floating-point")) have a greater conversion subrank than any standard floating-point type with equal conversion rank. Otherwise, the conversion subrank order is implementation-defined.  | (since C++23)  
---|---  
  
#### Usage

The floating-point conversion rank and subrank are also used to 

  * determine whether a conversion between different floating-point types [can be implicit](implicit_cast.html#Floating-point_conversions "cpp/language/implicit conversion") or is a [narrowing conversion](list_initialization.html#Narrowing_conversions "cpp/language/list initialization"), 
  * [distinguish the conversion sequences](overload_resolution.html#Ranking_of_implicit_conversion_sequences "cpp/language/overload resolution") in overload resolution, 



  * determine the actual type extracted by [`std::num_get::get()`](../locale/num_get/get.html "cpp/locale/num get/get") for the extraction of an extended floating-point type using [`std::basic_istream::operator>>`](../io/basic_istream/operator_gtgt.html "cpp/io/basic istream/operator gtgt"), 
  * determinte the actual type inserted by [`std::num_put::put()`](../locale/num_put/put.html "cpp/locale/num put/put") for the insertion of an extended floating-point type using [`std::basic_ostream::operator<<`](../io/basic_ostream/operator_ltlt.html "cpp/io/basic ostream/operator ltlt"), 

| (since C++23)  
---|---  
  
  * determine whether [std::complex](../numeric/complex.html "cpp/numeric/complex")'s [converting constructor](../numeric/complex/complex.html "cpp/numeric/complex/complex") is explicit, or 
  * determine the common floating-point type if the arguments of different floating-point types are passed to [common](../numeric/math.html "cpp/numeric/math") or [special](../numeric/special_math.html "cpp/numeric/special functions") math functions. 



### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[CWG 1642](https://cplusplus.github.io/CWG/issues/1642.html) | C++98  | usual arithmetic conversions might involve lvalues  | applies lvalue-to-rvalue conversions first   
[CWG 2528](https://cplusplus.github.io/CWG/issues/2528.html) | C++20  | the three-way comparison between unsigned char  
and unsigned int is ill-formed because  
of the intermediate integral promotion[[1]](usual_arithmetic_conversions.html#cite_note-1) | determines the common type based  
on the promoted types, without  
actually promoting the operands[[2]](usual_arithmetic_conversions.html#cite_note-2)  
[CWG 2892](https://cplusplus.github.io/CWG/issues/2892.html) | C++98  | when both operands are of the same  
floating-point type, the meaning of “no  
further conversion is needed” was unclear  | changed to “no further  
conversion will be performed”   
  
  1. [↑](usual_arithmetic_conversions.html#cite_ref-1) Before the resolution, unsigned char is promoted to int at the beginning of stage 5, then it is converted to unsigned int. However, the latter conversion is narrowing, which makes the three-way comparison ill-formed.
  2. [↑](usual_arithmetic_conversions.html#cite_ref-2) After the resolution, the common type is still unsigned int. The difference is that unsigned char is directly converted to unsigned int without the intermediate integral promotion. The conversion is not narrowing and hence the three-way comparison is well-formed.


