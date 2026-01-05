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
**User-defined** (C++11)  
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
**User-defined literal** (C++11)  
  
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
[Usual arithmetic conversions](usual_arithmetic_conversions.html "cpp/language/usual arithmetic conversions")  
[User-defined conversion](cast_operator.html "cpp/language/cast operator")  
  
| [`const_cast`](const_cast.html "cpp/language/const cast")  
---  
[`static_cast`](static_cast.html "cpp/language/static cast")  
[`dynamic_cast`](dynamic_cast.html "cpp/language/dynamic cast")  
[`reinterpret_cast`](reinterpret_cast.html "cpp/language/reinterpret cast")  
  


Allows integer, floating-point, character, and string literals to produce objects of user-defined type by defining a user-defined suffix. 

## Contents

  * [1 Syntax](user_literal.html#Syntax)
  * [2 Literal operators](user_literal.html#Literal_operators)
  * [3 Notes](user_literal.html#Notes)
  * [4 Keywords](user_literal.html#Keywords)
  * [5 Examples](user_literal.html#Examples)
  * [6 Standard library](user_literal.html#Standard_library)
  * [7 Defect reports](user_literal.html#Defect_reports)

  
---  
  
### Syntax

A user-defined literal is an expression of any of the following forms   
  
---  
decimal-literal ud-suffix |  (1)  |   
octal-literal ud-suffix |  (2)  |   
hex-literal ud-suffix |  (3)  |   
binary-literal ud-suffix |  (4)  |   
fractional-constant exponent-part ﻿(optional) ud-suffix |  (5)  |   
digit-sequence exponent-part ud-suffix |  (6)  |   
character-literal ud-suffix |  (7)  |   
string-literal ud-suffix |  (8)  |   
  
1-4) user-defined integer literals, such as 12_km

5-6) user-defined floating-point literals, such as 0.5_Pa

7) user-defined character literal, such as 'c'_X

8) user-defined string literal, such as "abd"_L or u"xyz"_M

decimal-literal |  \-  |  same as in [integer literal](integer_literal.html "cpp/language/integer literal"), a non-zero decimal digit followed by zero or more decimal digits   
---|---|---  
octal-literal |  \-  |  same as in [integer literal](integer_literal.html "cpp/language/integer literal"), a zero followed by zero or more octal digits   
hex-literal |  \-  |  same as in [integer literal](integer_literal.html "cpp/language/integer literal"), `0x` or `0X` followed by one or more hexadecimal digits   
binary-literal |  \-  |  same as in [integer literal](integer_literal.html "cpp/language/integer literal"), `0b` or `0B` followed by one or more binary digits   
digit-sequence |  \-  |  same as in [floating literal](floating_literal.html "cpp/language/floating literal"), a sequence of decimal digits   
fractional-constant |  \-  |  same as in [floating literal](floating_literal.html "cpp/language/floating literal"), either a digit-sequence followed by a dot (123.) or an optional digit-sequence followed by a dot and another digit-sequence (1.0 or .12)   
exponent-part |  \-  |  same as in [floating literal](floating_literal.html "cpp/language/floating literal"), the letter `e` or the letter `E` followed by optional sign, followed by digit-sequence  
character-literal |  \-  |  same as in [character literal](character_literal.html "cpp/language/character literal")  
string-literal |  \-  |  same as in [string literal](string_literal.html "cpp/language/string literal"), including raw string literals   
ud-suffix |  \-  |  an identifier, introduced by a _literal operator_ or a _literal operator template_ declaration (see [below](user_literal.html#Literal_operators))   
In the [integer](integer_literal.html#Single_quote "cpp/language/integer literal") and [floating-point](floating_literal.html#Single_quote "cpp/language/floating literal") digit sequences, optional separators `**'**` are allowed between any two digits.  | (since C++14)  
---|---  
  
If a token matches a user-defined literal syntax and a regular literal syntax, it is assumed to be a regular literal (that is, it's impossible to overload `LL` in 123LL). 

When the compiler encounters a user-defined literal with ud-suffix `X`, it performs [unqualified name lookup](lookup.html#Unqualified_name_lookup "cpp/language/lookup"), looking for a function with the name operator""X. If the lookup does not find a declaration, the program is ill-formed. Otherwise, 

1) For user-defined integer literals,

a) if the overload set includes a literal operator with the parameter type unsigned long long, the user-defined literal expression is treated as a function call operator ""X(n ﻿ULL), where n is the literal without ud-suffix;

b) otherwise, the overload set must include either, but not both, a raw literal operator or a numeric literal operator template. If the overload set includes a raw literal operator, the user-defined literal expression is treated as a function call operator""X("n ﻿");

c) otherwise, if the overload set includes a numeric literal operator template, the user-defined literal expression is treated as a function call operator""X<'c1 ﻿', 'c2 ﻿', 'c3 ﻿'..., 'ck ﻿'>(), where c1..ck are the individual characters of n and all of them are from the [basic character set](charset.html#Basic_character_set "cpp/language/charset").

2) For user-defined floating-point literals,

a) If the overload set includes a literal operator with the parameter type long double, the user-defined literal expression is treated as a function call operator ""X(f ﻿ ﻿L), where f is the literal without ud-suffix;

b) otherwise, the overload set must include either, but not both, a raw literal operator or a numeric literal operator template. If the overload set includes a raw literal operator, the user-defined literal expression is treated as a function call operator ""X("f ﻿ ﻿");

c) otherwise, if the overload set includes a numeric literal operator template, the user-defined literal expression is treated as a function call operator""X<'c1 ﻿', 'c2 ﻿', 'c3 ﻿'..., 'ck ﻿'>(), where c1..ck are the individual characters of f and all of them are from the [basic character set](charset.html#Basic_character_set "cpp/language/charset").

3) For user-defined string literals, let str be the literal without ud-suffix:

a) If the overload set includes a string literal operator template with a constant template parameter for which str is a well-formed template argument, then the user-defined literal expression is treated as a function call operator ""X<str>();  | (since C++20)  
---|---  
  
b) otherwise, the user-defined literal expression is treated as a function call operator ""X (str, len), where len is the length of the string literal, excluding the terminating null character.

4) For user-defined character literals, the user-defined literal expression is treated as a function call operator ""X(ch), where ch is the literal without ud-suffix.
    
    
    long double operator ""_w(long double);
    [std::string](../string/basic_string.html) operator ""_w(const char16_t*, size_t);
    unsigned    operator ""_w(const char*);
     
    int main()
    {
        1.2_w;    // calls operator ""_w(1.2L)
        u"one"_w; // calls operator ""_w(u"one", 3)
        12_w;     // calls operator ""_w("12")
        "two"_w;  // error: no applicable literal operator
    }

When string literal concatenation takes place in [translation phase 6](translation_phases.html#Phase_6 "cpp/language/translation phases"), user-defined string literals are concatenated as well, and their ud-suffixes are ignored for the purpose of concatenation, except that only one suffix may appear on all concatenated literals: 
    
    
    int main()
    {
        L"A" "B" "C"_x;  // OK: same as L"ABC"_x
        "P"_x "Q" "R"_y; // error: two different ud-suffixes (_x and _y)
    }

### Literal operators

The function called by a user-defined literal is known as _literal operator_ (or, if it's a template, _literal operator template_). It is declared just like any other [function](function.html "cpp/language/function") or [function template](function_template.html "cpp/language/function template") at namespace scope (it may also be a friend function, an explicit instantiation or specialization of a function template, or introduced by a using-declaration), except for the following restrictions: 

The name of this function can have one of the two forms:   
  
---  
`**operator ""**` identifier |  (1)  |  (deprecated)  
`**operator**` user-defined-string-literal |  (2)  |   
identifier |  \-  |  the [identifier](name.html "cpp/language/identifiers") to use as the ud-suffix for the user-defined literals that will call this function   
---|---|---  
user-defined-string-literal |  \-  |  the character sequence `**""**` followed, without a space, by the character sequence that becomes the ud-suffix  
  
1) Declares a literal operator.

2) Declares a literal operator. This syntax makes it possible to use language keywords and [reserved identifiers](../keywords.html "cpp/keywords") as ud-suffix ﻿es, for example, operator ""if from the header [`<complex>`](../header/complex.html "cpp/header/complex").

ud-suffix must begin with the underscore `**_**`: the suffixes that do not begin with the underscore are reserved for the literal operators provided by the standard library. It cannot contain double underscores `**__**` as well: such suffixes are also reserved. 

If the literal operator is a template, it must have an empty parameter list and can have only one template parameter, which must be a constant template parameter pack with element type char (in which case it is known as a _numeric literal operator template_): 
    
    
    template<char...>
    double operator ""_x();

or a constant template parameter of class type (in which case it is known as a _string literal operator template_): 
    
    
    struct A { constexpr A(const char*); };
     
    template<A a>
    A operator ""_a();

| (since C++20)  
---|---  
  
Only the following parameter lists are allowed on literal operators:   
  
---  
`**(**` const char* `**)**` |  (1)  |   
`**(**` unsigned long long int `**)**` |  (2)  |   
`**(**` long double `**)**` |  (3)  |   
`**(**` char `**)**` |  (4)  |   
`**(**` wchar_t `**)**` |  (5)  |   
`**(**` char8_t `**)**` |  (6)  |  (since C++20)  
`**(**` char16_t `**)**` |  (7)  |   
`**(**` char32_t `**)**` |  (8)  |   
`**(**` const char*` **,**` [std::size_t](../types/size_t.html "cpp/types/size t") `**)**` |  (9)  |   
`**(**` const wchar_t*` **,**` [std::size_t](../types/size_t.html "cpp/types/size t") `**)**` |  (10)  |   
`**(**` const char8_t*` **,**` [std::size_t](../types/size_t.html "cpp/types/size t") `**)**` |  (11)  |  (since C++20)  
`**(**` const char16_t*` **,**` [std::size_t](../types/size_t.html "cpp/types/size t") `**)**` |  (12)  |   
`**(**` const char32_t*` **,**` [std::size_t](../types/size_t.html "cpp/types/size t") `**)**` |  (13)  |   
  
1) Literal operators with this parameter list are the _raw literal operators_ , used as fallbacks for integer and floating-point user-defined literals (see above)

2) Literal operators with these parameter lists are the first-choice literal operator for user-defined integer literals

3) Literal operators with these parameter lists are the first-choice literal operator for user-defined floating-point literals

4-8) Literal operators with these parameter lists are called by user-defined character literals

9-13) Literal operators with these parameter lists are called by user-defined string literals

[Default arguments](default_arguments.html "cpp/language/default arguments") are not allowed. 

C [language linkage](language_linkage.html "cpp/language/language linkage") is not allowed. 

Other than the restrictions above, literal operators and literal operator templates are normal functions (and function templates), they can be declared inline or constexpr, they may have internal or external linkage, they can be called explicitly, their addresses can be taken, etc. 

Run this code
    
    
    #include <string>
     
    void        operator ""_km(long double); // OK, will be called for 1.0_km
    void        operator "" _km(long double); // same as above, deprecated
    [std::string](../string/basic_string.html) operator ""_i18n(const char*, [std::size_t](../types/size_t.html)); // OK
     
    template<char...>
    double operator ""_pi(); // OK
    float  operator ""_e(const char*); // OK
     
    // error: suffix must begin with underscore
    float operator ""Z(const char*);
     
    // error: all names that begin with underscore followed by uppercase
    // letter are reserved (NOTE: a space between "" and _).
    double operator"" _Z(long double);
     
    // OK. NOTE: no space between "" and _.
    double operator""_Z(long double);
     
    // OK: literal operators can be overloaded
    double operator ""_Z(const char* args);
     
    int main() {}

### Notes

Since the introduction of user-defined literals, the code that uses [format macro constants for fixed-width integer types](../../c/types/integer.html "c/types/integer") with no space after the preceding string literal became invalid: [std::printf](../io/c/fprintf.html)("%"[PRId64](../types/integer.html)"\n",[INT64_MIN](../types/integer.html)); has to be replaced by [std::printf](../io/c/fprintf.html)("%" [PRId64](../types/integer.html)"\n",[INT64_MIN](../types/integer.html));. 

Due to [maximal munch](translation_phases.html#maximal_munch "cpp/language/translation phases"), user-defined integer and floating point literals ending in `p`, `P`,(since C++17) `e` and `E`, when followed by the operators `+` or `-`, must be separated from the operator with whitespace or parentheses in the source: 
    
    
    long double operator""_E(long double);
    long double operator""_a(long double);
    int operator""_p(unsigned long long);
     
    auto x = 1.0_E+2.0;   // error
    auto y = 1.0_a+2.0;   // OK
    auto z = 1.0_E +2.0;  // OK
    auto q = (1.0_E)+2.0; // OK
    auto w = 1_p+2;       // error
    auto u = 1_p +2;      // OK

Same applies to dot operator following an integer or floating-point user-defined literal: 
    
    
    #include <chrono>
     
    using namespace std::literals;
     
    auto a = 4s.count();   // Error
    auto b = 4s .count();  // OK
    auto c = (4s).count(); // OK

Otherwise, a single invalid preprocessing number token (e.g., 1.0_E+2.0 or 4s.count) is formed, which causes compilation to fail. 

Feature-test macro | Value | Std | Feature   
---|---|---|---  
[`__cpp_user_defined_literals`](../experimental/feature_test.html#cpp_user_defined_literals "cpp/feature test") | [`200809L`](../compiler_support/11.html#cpp_user_defined_literals_200809L "cpp/compiler support/11") | (C++11) | User-defined literals   
  
### Keywords

[`operator`](../keyword/operator.html "cpp/keyword/operator")

### Examples

Run this code
    
    
    #include <algorithm>
    #include <cstddef>
    #include <iostream>
    #include <numbers>
    #include <string>
     
    // used as conversion from degrees (input param) to radians (returned output)
    constexpr long double operator""_deg_to_rad(long double deg)
    {
        long double radians = deg * [std::numbers::pi_v](../numeric/constants.html)<long double> / 180;
        return radians;
    }
     
    // used with custom type
    struct mytype
    {
        unsigned long long m;
    };
     
    constexpr mytype operator""_mytype(unsigned long long n)
    {
        return mytype{n};
    }
     
    // used for side-effects
    void operator""_print(const char* str)
    {
        [std::cout](../io/cout.html) << str << '\n';
    }
     
    #if __cpp_nontype_template_args < 201911
     
    [std::string](../string/basic_string.html) operator""_x2 (const char* str, [std::size_t](../types/size_t.html))
    {
        return [std::string](../string/basic_string.html){str} + str;
    }
     
    #else // C++20 string literal operator template
     
    template<[std::size_t](../types/size_t.html) N>
    struct DoubleString
    {
        char p[N + N - 1]{};
     
        constexpr DoubleString(char const(&pp)[N])
        {
            std::[ranges::copy](http://en.cppreference.com/w/cpp/ranges-algorithm-placeholder/copy)(pp, p);
            std::[ranges::copy](http://en.cppreference.com/w/cpp/ranges-algorithm-placeholder/copy)(pp, p + N - 1);
        }
    };
     
    template<DoubleString A>
    constexpr auto operator""_x2()
    {
        return A.p;
    }
     
    #endif // C++20
     
    int main()
    {
        double x_rad = 90.0_deg_to_rad;
        [std::cout](../io/cout.html) << [std::fixed](../io/manip/fixed.html) << x_rad << '\n';
     
        mytype y = 123_mytype;
        [std::cout](../io/cout.html) << y.m << '\n';
     
        0x123ABC_print;
        [std::cout](../io/cout.html) << "abc"_x2 << '\n';
    }

Output: 
    
    
    1.570796
    123
    0x123ABC
    abcabc

### Standard library

The following literal operators are defined in the standard library: 

Defined in inline namespace `std::literals::complex_literals`  
---  
[ operator""ifoperator""ioperator""il](../numeric/complex/operator""i.html "cpp/numeric/complex/operator""i")(C++14) |  a [std::complex](../numeric/complex.html "cpp/numeric/complex") literal representing purely imaginary number   
(function)   
Defined in inline namespace `std::literals::chrono_literals`  
[ operator""h](../chrono/operator""h.html "cpp/chrono/operator""h")(C++14) |  a [std::chrono::duration](../chrono/duration.html "cpp/chrono/duration") literal representing hours   
(function)   
[ operator""min](../chrono/operator""min.html "cpp/chrono/operator""min")(C++14) |  a [std::chrono::duration](../chrono/duration.html "cpp/chrono/duration") literal representing minutes   
(function)   
[ operator""s](../chrono/operator""s.html "cpp/chrono/operator""s")(C++14) |  a [std::chrono::duration](../chrono/duration.html "cpp/chrono/duration") literal representing seconds   
(function)   
[ operator""ms](../chrono/operator""ms.html "cpp/chrono/operator""ms")(C++14) |  a [std::chrono::duration](../chrono/duration.html "cpp/chrono/duration") literal representing milliseconds   
(function)   
[ operator""us](../chrono/operator""us.html "cpp/chrono/operator""us")(C++14) |  a [std::chrono::duration](../chrono/duration.html "cpp/chrono/duration") literal representing microseconds   
(function)   
[ operator""ns](../chrono/operator""ns.html "cpp/chrono/operator""ns")(C++14) |  a [std::chrono::duration](../chrono/duration.html "cpp/chrono/duration") literal representing nanoseconds   
(function)   
[ operator""y](../chrono/operator""y.html "cpp/chrono/operator""y")(C++20) |  a std::chrono::year literal representing a particular year   
(function)   
[ operator""d](../chrono/operator""d.html "cpp/chrono/operator""d")(C++20) |  a std::chrono::day literal representing a day of a month   
(function)   
Defined in inline namespace `std::literals::string_literals`  
[ operator""s](../string/basic_string/operator""s.html "cpp/string/basic string/operator""s")(C++14) |  converts a character array literal to `basic_string`   
(function)   
Defined in inline namespace `std::literals::string_view_literals`  
[ operator""sv](../string/basic_string_view/operator""sv.html "cpp/string/basic string view/operator""sv")(C++17) |  creates a string view of a character array literal   
(function)   
  
### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[CWG 1473](https://cplusplus.github.io/CWG/issues/1473.html) | C++11  | whitespace between "" and ud-suffix was  
required in the declaration of literal operators  | made optional   
[CWG 1479](https://cplusplus.github.io/CWG/issues/1479.html) | C++11  | literal operators could have default arguments  | prohibited   
[CWG 2521](https://cplusplus.github.io/CWG/issues/2521.html) | C++11  | operator"" _Bq was ill-formed (no diagnostic  
required) because it uses the reserved identifier `_Bq` | deprecated the literal operator syntax  
with whitespace between "" and ud-suffix
  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
