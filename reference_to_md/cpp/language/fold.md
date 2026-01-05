

  
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
**Fold expressions** (C++17)  
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
  


[ Templates](templates.html "cpp/language/templates")

[Template parameters](template_parameters.html "cpp/language/template parameters")  
---  
[Template arguments](template_arguments.html "cpp/language/template arguments")  
[Class templates](class_template.html "cpp/language/class template")  
[Function templates](function_template.html "cpp/language/function template")  
[Class member templates](member_template.html "cpp/language/member template")  
[Variable templates](variable_template.html "cpp/language/variable template") (C++14)  
[Template argument deduction](template_argument_deduction.html "cpp/language/template argument deduction")  
[Class template argument deduction](ctad.html "cpp/language/class template argument deduction") (C++17)  
[Explicit (full) specialization](template_specialization.html "cpp/language/template specialization")  
[Partial specialization](partial_specialization.html "cpp/language/partial specialization")  
[Dependent names](dependent_name.html "cpp/language/dependent name")  
[Packs](parameter_pack.html "cpp/language/pack") (C++11)  
[sizeof...](sizeof....html "cpp/language/sizeof...") (C++11)  
**Fold expressions** (C++17)  
[Pack indexing](pack_indexing.html "cpp/language/pack indexing") (C++26)  
[SFINAE](sfinae.html "cpp/language/sfinae")  
[Constraints and concepts](constraints.html "cpp/language/constraints") (C++20)  
[requires expression](requires.html "cpp/language/requires") (C++20)  
  


Reduces ([folds](https://en.wikipedia.org/wiki/Fold_\(higher-order_function\) "enwiki:Fold \(higher-order function\)")) a [pack](parameter_pack.html "cpp/language/pack") over a binary operator. 

## Contents

  * [1 Syntax](fold.html#Syntax)
  * [2 Explanation](fold.html#Explanation)
  * [3 Notes](fold.html#Notes)
  * [4 Example](fold.html#Example)
  * [5 References](fold.html#References)
  * [6 Defect reports](fold.html#Defect_reports)

  
---  
  
### Syntax  
  
---  
`**(**` pack op `**... )**` |  (1)  |   
`**( ...**` op pack `**)**` |  (2)  |   
`**(**` pack op `**...**` op init `**)**` |  (3)  |   
`**(**` init op `**...**` op pack `**)**` |  (4)  |   
  
1) Unary right fold.

2) Unary left fold.

3) Binary right fold.

4) Binary left fold.

op |  \-  |  any of the following 32 _binary_ operators: + - * / % ^ & | = < > << >> += -= *= /= %= ^= &= |= <<= >>= == != <= >= && || , .* ->*. In a binary fold, both ops must be the same.   
---|---|---  
pack |  \-  |  an expression that contains an unexpanded [pack](parameter_pack.html "cpp/language/pack") and does not contain an operator with [precedence](operator_precedence.html "cpp/language/operator precedence") lower than cast at the top level (formally, a cast-expression)   
init |  \-  |  an expression that does not contain an unexpanded [pack](parameter_pack.html "cpp/language/pack") and does not contain an operator with [precedence](operator_precedence.html "cpp/language/operator precedence") lower than cast at the top level (formally, a cast-expression)   
  
Note that the opening and closing parentheses are a required part of the fold expression. 

### Explanation

The instantiation of a _fold expression_ expands the expression e as follows: 

1) Unary right fold `(E` op `...)` becomes `(E1` op `(`... op `(EN-1` op `EN)))`

2) Unary left fold `(...` op `E)` becomes `(((E1` op `E2)` op ...`)` op `EN)`

3) Binary right fold `(E` op `...` op `I)` becomes `(E1` op `(`... op `(EN−1` op `(EN` op `I))))`

4) Binary left fold `(I` op `...` op `E)` becomes `((((I` op `E1)` op `E2)` op ...`)` op `EN)`

(where `N` is the number of elements in the pack expansion) 

For example, 
    
    
    template<typename... Args>
    bool all(Args... args) { return (... && args); }
     
    bool b = all(true, true, true, false);
    // within all(), the unary left fold expands as
    //  return ((true && true) && true) && false;
    // b is false

When a unary fold is used with a pack expansion of length zero, only the following operators are allowed: 

1) Logical AND (&&). The value for the empty pack is true.

2) Logical OR (||). The value for the empty pack is false.

3) The comma operator (,). The value for the empty pack is void().

### Notes

If the expression used as init or as pack has an operator with [precedence](operator_precedence.html "cpp/language/operator precedence") below cast at the top level, it must be parenthesized: 
    
    
    template<typename... Args>
    int sum(Args&&... args)
    {
    //  return (args + ... + 1 * 2);   // Error: operator with precedence below cast
        return (args + ... + (1 * 2)); // OK
    }

Feature-test macro | Value | Std | Feature   
---|---|---|---  
[`__cpp_fold_expressions`](../experimental/feature_test.html#cpp_fold_expressions "cpp/feature test") | [`201603L`](../compiler_support/17.html#cpp_fold_expressions_201603L "cpp/compiler support/17") | (C++17) | [Fold expressions](fold.html#top)  
  
### Example

Run this code
    
    
    #include <climits>
    #include <concepts>
    #include <cstdint>
    #include <iostream>
    #include <limits>
    #include <type_traits>
    #include <utility>
    #include <vector>
     
    // Basic usage, folding variadic arguments over operator<< 
    template<typename... Args>
    void printer(Args&&... args)
    {
        ([std::cout](../io/cout.html) << ... << args) << '\n';
    }
     
    // Folding an expression that uses the pack directly over operator,
    template<typename... Ts>
    void print_limits()
    {
        (([std::cout](../io/cout.html) << +[std::numeric_limits](../types/numeric_limits.html)<Ts>::max() << ' '), ...) << '\n';
    }
     
    // Both a fold over operator&& using the pack
    // and over operator, using the variadic arguments
    template<typename T, typename... Args>
    void push_back_vec([std::vector](../container/vector.html)<T>& v, Args&&... args)
    {
        static_assert(([std::is_constructible_v](../types/is_constructible.html)<T, Args&&> && ...));
        (v.push_back([std::forward](../utility/forward.html)<Args>(args)), ...);
    }
     
    // Using an integer sequence to execute an expression
    // N times by folding a lambda over operator,
    template<class T, [std::size_t](../types/size_t.html)... dummy_pack>
    constexpr T bswap_impl(T i, [std::index_sequence](../utility/integer_sequence.html)<dummy_pack...>)
    {
        T low_byte_mask = static_cast<unsigned char>(-1);
        T ret{};
        ([&]
        {
            (void)dummy_pack;
            ret <<= [CHAR_BIT](../types/climits.html);
            ret |= i & low_byte_mask;
            i >>= [CHAR_BIT](../types/climits.html);
        }(), ...);
        return ret;
    }
     
    constexpr auto bswap([std::unsigned_integral](../concepts/unsigned_integral.html) auto i)
    {
        return bswap_impl(i, [std::make_index_sequence](../utility/integer_sequence.html)<sizeof(i)>{});
    }
     
    int main()
    {
        printer(1, 2, 3, "abc");
        print_limits<uint8_t, uint16_t, uint32_t>();
     
        [std::vector](../container/vector.html)<int> v;
        push_back_vec(v, 6, 2, 45, 12);
        push_back_vec(v, 1, 2, 9);
        for (int i : v)
            [std::cout](../io/cout.html) << i << ' ';
        [std::cout](../io/cout.html) << '\n';
     
        static_assert(bswap<[std::uint16_t](../types/integer.html)>(0x1234u) == 0x3412u);
        static_assert(bswap<[std::uint64_t](../types/integer.html)>(0x0123456789abcdefull) == 0xefcdab8967452301ULL);
    }

Output: 
    
    
    123abc
    255 65535 4294967295 
    6 2 45 12 1 2 9

### References

  * C++23 standard (ISO/IEC 14882:2024): 



    

  * 7.5.6 Fold expressions [expr.prim.fold] 



  * C++20 standard (ISO/IEC 14882:2020): 



    

  * 7.5.6 Fold expressions [expr.prim.fold] 



  * C++17 standard (ISO/IEC 14882:2017): 



    

  * 8.1.6 Fold expressions [expr.prim.fold] 



### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[CWG 2611](https://cplusplus.github.io/CWG/issues/2611.html) | C++17  | the expansion results of fold expressions were not enclosed with parentheses  | enclosed with parentheses 
  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
