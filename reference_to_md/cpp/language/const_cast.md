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
**`const_cast`**  
  
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
[Usual arithmetic conversions](usual_arithmetic_conversions.html "cpp/language/usual arithmetic conversions")  
[User-defined conversion](cast_operator.html "cpp/language/cast operator")  
  
| **`const_cast`**  
---  
[`static_cast`](static_cast.html "cpp/language/static cast")  
[`dynamic_cast`](dynamic_cast.html "cpp/language/dynamic cast")  
[`reinterpret_cast`](reinterpret_cast.html "cpp/language/reinterpret cast")  
  


Converts between types with different cv-qualification. 

## Contents

  * [1 Syntax](const_cast.html#Syntax)
  * [2 Explanation](const_cast.html#Explanation)
  * [3 Casting away constness](const_cast.html#Casting_away_constness)
  * [4 Notes](const_cast.html#Notes)
  * [5 Keywords](const_cast.html#Keywords)
  * [6 Example](const_cast.html#Example)
  * [7 Defect reports](const_cast.html#Defect_reports)
  * [8 References](const_cast.html#References)
  * [9 See also](const_cast.html#See_also)

  
---  
  
### Syntax  
  
---  
`**const_cast <**` target-type `**>(**` expression `**)**` |  |   
  
Returns a value of type target-type. 

### Explanation

Only the following conversions can be done with const_cast: 

1) For two [similar](implicit_cast.html#Similar_types "cpp/language/implicit conversion") object pointer or pointer to data member types `T1` and `T2`, a prvalue of type `T1` can be converted to `T2` if `T1` and `T2` differ only in cv-qualification (formally, if, considering the [qualification-decompositions](implicit_cast.html#Similar_types "cpp/language/implicit conversion") of both types, each `P1_i` is the same as `P2_i` for all i). 

  * If expression is a null pointer value, the result is also a null pointer value. 
  * If expression is a null member pointer value, the result is also a null member pointer value. 
  * If expression points to an object, the result points to the same object. 
  * If expression points past an object, the result points past the same object. 
  * If expression points to a data member, the result points to the same data member. 

Even if expression is a prvalue, [temporary materialization](implicit_cast.html#Temporary_materialization "cpp/language/implicit conversion") is not performed.  | (since C++17)  
---|---  
  
2) For two [object types](type-id.html#Object_type "cpp/language/type") `T1` and `T2`, if a pointer to `T1` can be explicitly converted to the type “pointer to `T2`” using const_cast<T2*>, then the following conversions can also be made: 

  * An lvalue of type `T1` can be explicitly converted to an lvalue of type `T2` using const_cast<T2&>. 



  * A glvalue of type `T1` can be explicitly converted to an xvalue of type `T2` using const_cast<T2&&>. 
  * If `T1` is a class or array type, a prvalue of type `T1` can be explicitly converted to an xvalue of type `T2` using const_cast<T2&&>. 

| (since C++11)  
---|---  
The result reference refers to the original object.  | (until C++17)  
---|---  
If expression is a glvalue, the result reference refers to the original object. Otherwise, the result reference refers to the [materialized temporary](implicit_cast.html#Temporary_materialization "cpp/language/implicit conversion").  | (since C++17)  
  
As with all cast expressions, the result is: 

  * an lvalue if target-type is an lvalue reference type or an rvalue reference to function type(since C++11); 



  * an xvalue if target-type is an rvalue reference to object type; 

| (since C++11)  
---|---  
  
  * a prvalue otherwise. 



### Casting away constness

For two different types `T1` and `T2`, a conversion from `T1` to `T2` _casts away constness_ if there exists a [qualification-decomposition](implicit_cast.html#Similar_types "cpp/language/implicit conversion") of `T2` of the form “cv2_0 P2_0 cv2_1 P2_1 ... cv2_n−1 P2_n−1 cv2_n U2”, and there is no [qualification conversions](implicit_cast.html#Qualification_conversions "cpp/language/implicit conversion") that converts `T1` to “cv2_0 P1_0 cv2_1 P1_1 ... cv2_n−1 P1_n−1 cv2_n U1” (same cv-components, different P-components and U-components). 

If a cast from a prvalue of type `T1*` to the type `T2*` casts away constness, casting from an expression of type `T1` to a reference to `T2` will also cast away constness. 

Only const_cast may be used to cast away constness. 

“Casting away constness” implies “casting away volatility”, as qualification conversions cannot cast away volatility as well. 

### Notes

Pointers to functions and pointers to member functions are not subject to const_cast. 

const_cast makes it possible to form a reference or pointer to non-const type that is actually referring to a [const object](cv.html "cpp/language/cv") or a reference or pointer to non-volatile type that is actually referring to a [volatile object](cv.html "cpp/language/cv"). Modifying a const object through a non-const access path and referring to a volatile object through a non-volatile [glvalue](value_category.html#glvalue "cpp/language/value category") results in undefined behavior. 

### Keywords

[`const_cast`](../keyword/const_cast.html "cpp/keyword/const cast")

### Example

Run this code
    
    
    #include <iostream>
     
    struct type
    {
        int i;
     
        type(): i(3) {}
     
        void f(int v) const
        {
            // this->i = v;                 // compile error: this is a pointer to const
            const_cast<type*>(this)->i = v; // OK as long as the type object isn't const
        }
    };
     
    int main()
    {
        int i = 3;                 // i is not declared const
        const int& rci = i;
        const_cast<int&>(rci) = 4; // OK: modifies i
        [std::cout](../io/cout.html) << "i = " << i << '\n';
     
        type t; // if this was const type t, then t.f(4) would be undefined behavior
        t.f(4);
        [std::cout](../io/cout.html) << "type::i = " << t.i << '\n';
     
        const int j = 3; // j is declared const
        [[maybe_unused]]
        int* pj = const_cast<int*>(&j);
        // *pj = 4;      // undefined behavior
     
        [[maybe_unused]]
        void (type::* pmf)(int) const = &type::f; // pointer to member function
        // const_cast<void(type::*)(int)>(pmf);   // compile error: const_cast does
                                                  // not work on function pointers
    }

Output: 
    
    
    i = 4
    type::i = 4

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[CWG 1965](https://cplusplus.github.io/CWG/issues/1965.html) | C++11  | const_cast could not bind rvalue references to array prvalues  | allowed to bind such references   
[CWG 2879](https://cplusplus.github.io/CWG/issues/2879.html) | C++17  | pointer pvalue operands were materialized  | they are not materialized   
  
### References

  * C++23 standard (ISO/IEC 14882:2024): 



    

  * 7.6.1.11 Const cast [expr.const.cast] 



  * C++20 standard (ISO/IEC 14882:2020): 



    

  * 7.6.1.10 Const cast [expr.const.cast] 



  * C++17 standard (ISO/IEC 14882:2017): 



    

  * 8.2.11 Const cast [expr.const.cast] 



  * C++14 standard (ISO/IEC 14882:2014): 



    

  * 5.2.11 Const cast [expr.const.cast] 



  * C++11 standard (ISO/IEC 14882:2011): 



    

  * 5.2.11 Const cast [expr.const.cast] 



  * C++98 standard (ISO/IEC 14882:1998): 



    

  * 5.2.11 Const cast [expr.const.cast] 



  * C++03 standard (ISO/IEC 14882:2003): 



    

  * 5.2.11 Const cast [expr.const.cast] 



### See also

  * [`static_cast`](static_cast.html "cpp/language/static cast")
  * [`dynamic_cast`](dynamic_cast.html "cpp/language/dynamic cast")
  * [`reinterpret_cast`](reinterpret_cast.html "cpp/language/reinterpret cast")
  * [explicit cast](explicit_cast.html "cpp/language/explicit cast")
  * [implicit conversions](implicit_cast.html "cpp/language/implicit cast")


