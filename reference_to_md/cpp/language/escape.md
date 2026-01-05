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
**Escape sequences**  
  
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
  
| **Escape sequences**  
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
[Usual arithmetic conversions](usual_arithmetic_conversions.html "cpp/language/usual arithmetic conversions")  
[User-defined conversion](cast_operator.html "cpp/language/cast operator")  
  
| [`const_cast`](const_cast.html "cpp/language/const cast")  
---  
[`static_cast`](static_cast.html "cpp/language/static cast")  
[`dynamic_cast`](dynamic_cast.html "cpp/language/dynamic cast")  
[`reinterpret_cast`](reinterpret_cast.html "cpp/language/reinterpret cast")  
  


Escape sequences are used to represent certain special characters within [string literals](string_literal.html "cpp/language/string literal") and [character literals](character_literal.html "cpp/language/character literal"). 

The following escape sequences are available: 

Escape  
sequence  |  Description  |  Representation   
---|---|---  
Simple escape sequences   
`**\'**` |  single quote  |  byte `0x27` in ASCII encoding   
`**\"**` |  double quote  |  byte `0x22` in ASCII encoding   
`**\?**` |  question mark  |  byte `0x3f` in ASCII encoding   
`**\\**` |  backslash  |  byte `0x5c` in ASCII encoding   
`**\a**` |  audible bell  |  byte `0x07` in ASCII encoding   
`**\b**` |  backspace  |  byte `0x08` in ASCII encoding   
`**\f**` |  form feed - new page  |  byte `0x0c` in ASCII encoding   
`**\n**` |  line feed - new line  |  byte `0x0a` in ASCII encoding   
`**\r**` |  carriage return  |  byte `0x0d` in ASCII encoding   
`**\t**` |  horizontal tab  |  byte `0x09` in ASCII encoding   
`**\v**` |  vertical tab  |  byte `0x0b` in ASCII encoding   
Numeric escape sequences   
`**\_nnn_**` |  arbitrary octal value  |  code unit `_nnn_` (1~3 octal digits)   
`**\o{_n..._}**` (since C++23) |  code unit `_n..._` (arbitrary number of octal digits)   
`**\x _n..._**` |  arbitrary hexadecimal value  |  code unit `_n..._` (arbitrary number of hexadecimal digits)   
`**\x{_n..._}**` (since C++23)  
Conditional escape sequences[[1]](escape.html#cite_note-1)  
`**\_c_**` |  Implementation-defined  |  Implementation-defined   
Universal character names   
`**\u _nnnn_**` |  arbitrary [Unicode](https://en.wikipedia.org/wiki/Unicode "enwiki:Unicode") value;  
may result in several code units  |  code point `U+_nnnn_` (4 hexadecimal digits)   
`**\u{_n..._}**` (since C++23) |  code point `U+_n..._` (arbitrary number of hexadecimal digits)   
`**\U _nnnnnnnn_**` |  code point `U+_nnnnnnnn_` (8 hexadecimal digits)   
`**\N{_NAME_}**` (since C++23) |  arbitrary Unicode character  |  character named by `_NAME_` (see [below](escape.html#Named_universal_character_escapes))   
  
  1. [↑](escape.html#cite_ref-1) Conditional escape sequences are conditionally-supported. The character `**_c_**` in each conditional escape sequence is a member of [basic source character set](charset.html#Basic_source_character_set "cpp/language/charset")(until C++23)[basic character set](charset.html#Basic_character_set "cpp/language/charset")(since C++23) that is not the character following the `**\**` in any other escape sequence.



## Contents

  * [1 Range of universal character names](escape.html#Range_of_universal_character_names)
    * [1.1 Named universal character escapes](escape.html#Named_universal_character_escapes)
  * [2 Notes](escape.html#Notes)
  * [3 Example](escape.html#Example)
  * [4 Defect reports](escape.html#Defect_reports)
  * [5 See also](escape.html#See_also)

  
---  
  
### Range of universal character names

If a universal character name corresponds to a code point that is not 0x24 (`$`), 0x40 (`@`), nor 0x60 (```) and less than 0xA0, the program is ill-formed. In other words, members of [basic source character set](charset.html#Basic_source_character_set "cpp/language/charset") and control characters (in ranges 0x0-0x1F and 0x7F-0x9F) cannot be expressed in universal character names.  | (until C++11)  
---|---  
If a universal character name corresponding to a code point of a member of [basic source character set](charset.html#Basic_source_character_set "cpp/language/charset") or control characters appear outside a [character](character_literal.html "cpp/language/character literal") or [string literal](string_literal.html "cpp/language/string literal"), the program is ill-formed. If a universal character name corresponds surrogate code point (the range 0xD800-0xDFFF, inclusive), the program is ill-formed. If a universal character name used in a UTF-16/32 string literal does not correspond to a code point in [ISO/IEC 10646](https://www.iso.org/standard/76835.html) (the range 0x0-0x10FFFF, inclusive), the program is ill-formed.  | (since C++11)  
(until C++20)  
If a universal character name corresponding to a code point of a member of [basic source character set](charset.html#Basic_source_character_set "cpp/language/charset") or control characters appear outside a [character](character_literal.html "cpp/language/character literal") or [string literal](string_literal.html "cpp/language/string literal"), the program is ill-formed. If a universal character name does not correspond to a code point in [ISO/IEC 10646](https://www.iso.org/standard/76835.html) (the range 0x0-0x10FFFF, inclusive) or corresponds to a surrogate code point (the range 0xD800-0xDFFF, inclusive), the program is ill-formed.  | (since C++20)  
(until C++23)  
If a universal character name corresponding to a scalar value of a character in the [basic character set](charset.html#Basic_character_set "cpp/language/charset") or a control character appear outside a [character](character_literal.html "cpp/language/character literal") or [string literal](string_literal.html "cpp/language/string literal"), the program is ill-formed. If a universal character name does not correspond to a scalar value of a character in the [translation character set](charset.html#Translation_character_set "cpp/language/charset"), the program is ill-formed.  | (since C++23)  
  
  


####  Named universal character escapes

|   
---  
`**\N{**` n-char-sequence `**}**` |  |   
n-char-sequence |  \-  |  one or more n-chars   
---|---|---  
n-char |  \-  |  a character from the [translation character set](charset.html#Translation_character_set "cpp/language/charset"), except the right curly bracket } or new-line character   
  
A universal character name of the syntax above is a _named universal character_. It designates the corresponding character in the [Unicode Standard](https://www.unicode.org/versions/latest/) ([chapter 4.8 Name](https://www.unicode.org/versions/latest/ch04.pdf)) if the n-char-sequence is equal to its character name or to one of its character name aliases of type “control”, “correction”, or “alternate”; otherwise, the program is ill-formed. 

These aliases are listed in the [Unicode Character Database](https://www.unicode.org/reports/tr44/)’s [NameAliases.txt](https://www.unicode.org/Public/UCD/latest/ucd/NameAliases.txt). None of these names or aliases have leading or trailing spaces. 

A valid n-char-sequence must contain only uppercase Latin letters A through Z, digits, space, and hyphen-minus. Other characters never occur in a Unicode character name, and thus their appearance in a n-char-sequence always renders the program ill-formed. 

(since C++23)  
  
### Notes

\0 is the most commonly used octal escape sequence, because it represents the terminating null character in [null-terminated strings](../string.html#Null-terminated_strings "cpp/string"). 

The new-line character \n has special meaning when used in [text mode I/O](../io/c.html "cpp/io/c"): it is converted to the OS-specific newline representation, usually a byte or byte sequence. Some systems mark their lines with length fields instead. 

Octal escape sequences have a limit of three octal digits, but terminate at the first character that is not a valid octal digit if encountered sooner. 

Hexadecimal escape sequences have no length limit and terminate at the first character that is not a valid hexadecimal digit. If the value represented by a single hexadecimal escape sequence does not fit the range of values represented by the character type used in this string literal (char, char8_t, (since C++20)char16_t, char32_t, (since C++11)or wchar_t), the result is unspecified. 

A universal character name in a narrow string literal or a 16-bit string literal may map to more than one code unit, e.g. \U0001f34c is 4 char code units in UTF-8 (\xF0\x9F\x8D\x8C) and 2 char16_t code units in UTF-16 (\xD83C\xDF4C).  | (since C++11)  
---|---  
  
The question mark escape sequence \? is used to prevent [trigraphs](operator_alternative.html "cpp/language/operator alternative") from being interpreted inside string literals: a string such as "??/" is compiled as "\", but if the second question mark is escaped, as in "?\?/", it becomes "??/". As trigraphs have been removed from C++, the question mark escape sequence is no longer necessary. It is preserved for compatibility with C++14 (and former revisions) and C.(since C++17)

Feature-test macro | Value | Std | Feature   
---|---|---|---  
[`__cpp_named_character_escapes`](../experimental/feature_test.html#cpp_named_character_escapes "cpp/feature test") | [`202207L`](../compiler_support/23.html#cpp_named_character_escapes_202207L "cpp/compiler support/23") | (C++23) | Named universal character escapes   
  
### Example

Run this code
    
    
    #include <iostream>
     
    int main()
    {
        [std::cout](../io/cout.html) << "This\nis\na\ntest\n\n";
        [std::cout](../io/cout.html) << "She said, \"Sells she seashells on the seashore?\"\n";
    }

Output: 
    
    
    This
    is
    a
    test
     
    She said, "Sells she seashells on the seashore?"

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[CWG 505](https://cplusplus.github.io/CWG/issues/505.html) | C++98  | the behavior was undefined if the character following  
a backslash was not one of those specified in the table  | made conditionally supported  
(semantic is implementation-defined)   
  
### See also

  * [ASCII chart](ascii.html "cpp/language/ascii")

[C documentation](../../c/language/escape.html "c/language/escape") for Escape sequence  
---
  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
