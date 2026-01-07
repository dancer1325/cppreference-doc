* operator precedence
  * 💡== order | operators are bound -- to -- their arguments💡

| Precedence | Operator                                                                                      | Description                                                                                                                                                                 | Associativity   |
|------------|-----------------------------------------------------------------------------------------------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------|-----------------|
| 1          | `a::b`                                                                                        | [Scope resolution](name.html#Qualified_identifiers "cpp/language/identifiers")                                                                                              | Left-to-right → |
| 2          | `a++` `a--`                                                                                   | Suffix/postfix [increment and decrement](operator_incdec.html "cpp/language/operator incdec")                                                                               | Left-to-right → |
|            | `type(a)` `type{a}`                                                                           | [Functional cast](explicit_cast.html "cpp/language/explicit cast")                                                                                                          |                 |
|            | `a()`                                                                                         | [Function call](operator_other.html#Built-in_function_call_operator "cpp/language/operator other")                                                                          |                 |
|            | `a[]`                                                                                         | [Subscript](operator_member_access.html#Built-in_subscript_operator "cpp/language/operator member access")                                                                  |                 |
|            | `a.b` `a->b`                                                                                  | [Member access](operator_member_access.html#Built-in_member_access_operators "cpp/language/operator member access")                                                         |                 |
| 3          | `++a` `--a`                                                                                   | Prefix [increment and decrement](operator_incdec.html "cpp/language/operator incdec")                                                                                       | Right-to-left ← |
|            | `+a` `-a`                                                                                     | Unary [plus and minus](operator_arithmetic.html#Unary_arithmetic_operators "cpp/language/operator arithmetic")                                                              |                 |
|            | `!a` `~a`                                                                                     | [Logical NOT](operator_logical.html "cpp/language/operator logical") and [bitwise NOT](operator_arithmetic.html#Bitwise_logic_operators "cpp/language/operator arithmetic") |                 |
|            | `(type)a`                                                                                     | [C-style cast](explicit_cast.html "cpp/language/explicit cast")                                                                                                             |                 |
|            | `*a`                                                                                          | [Indirection](operator_member_access.html#Built-in_indirection_operator "cpp/language/operator member access") (dereference)                                                |                 |
|            | `&a`                                                                                          | [Address-of](operator_member_access.html#Built-in_address-of_operator "cpp/language/operator member access")                                                                |                 |
|            | [`sizeof`](sizeof.html "cpp/language/sizeof")                                                 | [Size-of](sizeof.html "cpp/language/sizeof")[[note 1]](operator_precedence.html#cite_note-1)                                                                                |                 |
|            | [`co_await`](../keyword/co_await.html "cpp/keyword/co await")                                 | [await-expression](coroutines.html "cpp/language/coroutines") (C++20)                                                                                                       |                 |
|            | [`new`](new.html "cpp/language/new") [`new[]`](new.html "cpp/language/new")                   | [Dynamic memory allocation](new.html "cpp/language/new")                                                                                                                    |                 |
|            | [`delete`](delete.html "cpp/language/delete") [`delete[]`](delete.html "cpp/language/delete") | [Dynamic memory deallocation](delete.html "cpp/language/delete")                                                                                                            |                 |
| 4          | `a.*b` `a->*b`                                                                                | [Pointer-to-member](operator_member_access.html#Built-in_pointer-to-member_access_operators "cpp/language/operator member access")                                          | Left-to-right → |
| 5          | `a*b` `a/b` `a%b`                                                                             | [Multiplication, division, and remainder](operator_arithmetic.html#Multiplicative_operators "cpp/language/operator arithmetic")                                             | Left-to-right → |
| 6          | `a+b` `a-b`                                                                                   | [Addition and subtraction](operator_arithmetic.html#Additive_operators "cpp/language/operator arithmetic")                                                                  | Left-to-right → |
| 7          | `a<<b` `a>>b`                                                                                 | Bitwise [left shift and right shift](operator_arithmetic.html#Bitwise_shift_operators "cpp/language/operator arithmetic")                                                   | Left-to-right → |
| 8          | `a<=>b`                                                                                       | [Three-way comparison operator](operator_comparison.html#Three-way_comparison "cpp/language/operator comparison") (since C++20)                                             | Left-to-right → |
| 9          | `a<b` `a<=b` `a>b` `a>=b`                                                                     | For [relational operators](operator_comparison.html "cpp/language/operator comparison") `<` and `<=` and `>` and `>=` respectively                                          | Left-to-right → |
| 10         | `a==b` `a!=b`                                                                                 | For [equality operators](operator_comparison.html "cpp/language/operator comparison") `==` and `!=` respectively                                                            | Left-to-right → |
| 11         | `a&b`                                                                                         | [Bitwise AND](operator_arithmetic.html#Bitwise_logic_operators "cpp/language/operator arithmetic")                                                                          | Left-to-right → |
| 12         | `a^b`                                                                                         | [Bitwise XOR](operator_arithmetic.html#Bitwise_logic_operators "cpp/language/operator arithmetic") (exclusive or)                                                           | Left-to-right → |
| 13         | `a\|b`                                                                                        | [Bitwise OR](operator_arithmetic.html#Bitwise_logic_operators "cpp/language/operator arithmetic") (inclusive or)                                                            | Left-to-right → |
| 14         | `a&&b`                                                                                        | [Logical AND](operator_logical.html "cpp/language/operator logical")                                                                                                        | Left-to-right → |
| 15         | `a\|\|b`                                                                                      | [Logical OR](operator_logical.html "cpp/language/operator logical")                                                                                                         | Left-to-right → |
| 16         | `a?b:c`                                                                                       | [Ternary conditional](operator_other.html#Conditional_operator "cpp/language/operator other")[[note 2]](operator_precedence.html#cite_note-2)                               | Right-to-left ← |
|            | [`throw`](throw.html "cpp/language/throw")                                                    | [throw operator](throw.html "cpp/language/throw")                                                                                                                           |                 |
|            | [`co_yield`](../keyword/co_yield.html "cpp/keyword/co yield")                                 | [yield-expression](coroutines.html "cpp/language/coroutines") (C++20)                                                                                                       |                 |
|            | `a=b`                                                                                         | [Direct assignment](operator_assignment.html#Builtin_direct_assignment "cpp/language/operator assignment") (provided by default for C++ classes)                            |                 |
|            | `a+=b` `a-=b`                                                                                 | [Compound assignment](operator_assignment.html#Builtin_compound_assignment "cpp/language/operator assignment") by sum and difference                                        |                 |
|            | `a*=b` `a/=b` `a%=b`                                                                          | [Compound assignment](operator_assignment.html#Builtin_compound_assignment "cpp/language/operator assignment") by product, quotient, and remainder                          |                 |
|            | `a<<=b` `a>>=b`                                                                               | [Compound assignment](operator_assignment.html#Builtin_compound_assignment "cpp/language/operator assignment") by bitwise left shift and right shift                        |                 |
|            | `a&=b` `a^=b` `a\|=b`                                                                         | [Compound assignment](operator_assignment.html#Builtin_compound_assignment "cpp/language/operator assignment") by bitwise AND, XOR, and OR                                  |                 |
| 17         | `a,b`                                                                                         | [Comma](operator_other.html#Built-in_comma_operator "cpp/language/operator other")                                                                                          | Left-to-right → |   

* a, b and c
  * operands

1. [↑](operator_precedence.html#cite_ref-1) The operand of sizeof cannot be a C-style type cast: the expression sizeof (int) * p is unambiguously interpreted as (sizeof(int)) * p, but not sizeof((int)*p).
2. [↑](operator_precedence.html#cite_ref-2) The expression in the middle of the conditional operator (between `**?**` and `**:**`) is parsed as if parenthesized: its precedence relative to `**?:**` is ignored.



When parsing an expression, an operator which is listed on some row of the table above with a precedence will be bound tighter (as if by parentheses) to its arguments than any operator that is listed on a row further below it with a lower precedence
* For example, the expressions [std::cout](../io/cout.html) << a & b and *p++ are parsed as ([std::cout](../io/cout.html) << a) & b and *(p++), and not as [std::cout](../io/cout.html) << (a & b) or (*p)++. 

Operators that have the same precedence are bound to their arguments in the direction of their associativity
* For example, the expression a = b = c is parsed as a = (b = c), and not as (a = b) = c because of right-to-left associativity of assignment, but a + b - c is parsed (a + b) - c and not a + (b - c) because of left-to-right associativity of addition and subtraction. 

Associativity specification is redundant for unary operators and is only shown for completeness: unary prefix operators always associate right-to-left (delete ++*p is delete(++(*p))) and unary postfix operators always associate left-to-right (a[1][2]++ is ((a[1])[2])++)
* Note that the associativity is meaningful for member access operators, even though they are grouped with unary postfix operators: a.b++ is parsed (a.b)++ and not a.(b++). 

Operator precedence is unaffected by [operator overloading](operators.html "cpp/language/operators")
* For example, [std::cout](../io/cout.html) << a ? b : c; parses as ([std::cout](../io/cout.html) << a) ? b : c; because the precedence of arithmetic left shift is higher than the conditional operator. 

### Notes

Precedence and associativity are compile-time concepts and are independent from [order of evaluation](eval_order.html "cpp/language/eval order"), which is a runtime concept. 

The standard itself doesn't specify precedence levels. They are derived from the grammar. 

[`const_cast`](const_cast.html "cpp/language/const cast"), [`static_cast`](static_cast.html "cpp/language/static cast"), [`dynamic_cast`](dynamic_cast.html "cpp/language/dynamic cast"), [`reinterpret_cast`](reinterpret_cast.html "cpp/language/reinterpret cast"), [`typeid`](typeid.html "cpp/language/typeid"), [`sizeof...`](sizeof....html "cpp/language/sizeof..."), [`noexcept`](noexcept.html "cpp/language/noexcept") and [`alignof`](alignof.html "cpp/language/alignof") are not included since they are never ambiguous. 

Some of the operators have [alternate spellings](operator_alternative.html "cpp/language/operator alternative") (e.g., and for &&, or for ||, not for !, etc.). 

In C, the ternary conditional operator has higher precedence than assignment operators. Therefore, the expression e = a < d ? a++ : a = d, which is parsed in C++ as e = ((a < d) ? (a++) : (a = d)), will fail to compile in C due to grammatical or semantic constraints in C. See the corresponding C page for details. 

### See also

Common operators   
---  
[assignment](operator_assignment.html "cpp/language/operator assignment") | [increment  
decrement](operator_incdec.html "cpp/language/operator incdec") | [arithmetic](operator_arithmetic.html "cpp/language/operator arithmetic") | [logical](operator_logical.html "cpp/language/operator logical") | [comparison](operator_comparison.html "cpp/language/operator comparison") | [member  
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
[C documentation](../../c/language/operator_precedence.html "c/language/operator precedence") for C operator precedence  
---
