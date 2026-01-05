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
**`decltype`** (C++11)  
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
  


[Declarations](declarations.html "cpp/language/declarations")

| Overview  
---  
[Declaration syntax](declarations.html "cpp/language/declarations")  
[_decl-specifier-seq_](declarations.html#Specifiers "cpp/language/declarations")  
[Declarator](declarations.html#Declarators "cpp/language/declarations")  
[Conflicting declarations](conflicting_declarations.html "cpp/language/conflicting declarations")  
Specifiers  
[typedef](typedef.html "cpp/language/typedef")  
[inline](inline.html "cpp/language/inline")  
[virtual function specifier](virtual.html "cpp/language/virtual")  
[explicit function specifier](explicit.html "cpp/language/explicit")  
[friend](friend.html "cpp/language/friend")  
[constexpr](constexpr.html "cpp/language/constexpr")(C++11)  
[consteval](consteval.html "cpp/language/consteval")(C++20)  
[constinit](constinit.html "cpp/language/constinit")(C++20)  
[Storage class specifiers](storage_duration.html "cpp/language/storage duration")  
[Translation-unit-local](tu_local.html "cpp/language/tu local") (C++20)  
[class/struct](class.html "cpp/language/class")  
[union](union.html "cpp/language/union")  
[enum](enum.html "cpp/language/enum")  
**decltype**(C++11)  
[auto](auto.html "cpp/language/auto")(C++11)  
[alignas](alignas.html "cpp/language/alignas")(C++11)  
[constvolatile](cv.html "cpp/language/cv")  
[Pack indexing specifier](pack_indexing.html#Pack_indexing_specifier "cpp/language/pack indexing") (C++26)  
[Elaborated type specifier](elaborated_type_specifier.html "cpp/language/elaborated type specifier")  
[Attributes](attributes.html "cpp/language/attributes") (C++11)  
  
| Declarators  
---  
[Reference](reference.html "cpp/language/reference")  
[Pointer](pointer.html "cpp/language/pointer")  
[Array](array.html "cpp/language/array")  
Block declarations  
[Simple-declaration](declarations.html "cpp/language/declarations")  
→[Structured binding declaration](structured_binding.html "cpp/language/structured binding") (C++17)  
[Alias declaration](type_alias.html "cpp/language/type alias") (C++11)  
[Namespace alias definition](namespace_alias.html "cpp/language/namespace alias")  
[using declaration](using_declaration.html "cpp/language/using declaration")  
[`using` directive](namespace.html#Using-directives "cpp/language/namespace")  
[static_assert declaration](static_assert.html "cpp/language/static assert") (C++11)  
[asm declaration](asm.html "cpp/language/asm")  
[Opaque enum declaration](enum.html "cpp/language/enum") (C++11)  
Other declarations  
[Namespace definition](namespace.html "cpp/language/namespace")  
[Function declaration](function.html "cpp/language/function")  
[Class template declaration](class_template.html "cpp/language/class template")  
[Function template declaration](function_template.html "cpp/language/function template")  
[Explicit template instantiation](class_template.html#Explicit_instantiation "cpp/language/class template") (C++11)  
[Explicit template specialization](template_specialization.html "cpp/language/template specialization")  
[Linkage specification](language_linkage.html "cpp/language/language linkage")  
[Attribute declaration](declarations.html "cpp/language/declarations") (C++11)  
[Empty declaration](declarations.html "cpp/language/declarations")  
  
  
  


Inspects the declared type of an entity or the type and value category of an expression. 

## Contents

  * [1 Syntax](decltype.html#Syntax)
  * [2 Explanation](decltype.html#Explanation)
  * [3 Notes](decltype.html#Notes)
  * [4 Keywords](decltype.html#Keywords)
  * [5 Example](decltype.html#Example)
  * [6 References](decltype.html#References)
  * [7 See also](decltype.html#See_also)

  
---  
  
### Syntax  
  
---  
`**decltype (**` entity `**)**` |  (1)  |   
`**decltype (**` expression `**)**` |  (2)  |   
  
### Explanation

1) If the argument is an unparenthesized [id-expression](name.html "cpp/language/identifiers") or an unparenthesized [class member access](operator_member_access.html "cpp/language/operator member access") expression, then decltype yields the type of the entity named by this expression. If there is no such entity, or if the argument names a set of overloaded functions, the program is ill-formed.  If the argument is an unparenthesized [id-expression](name.html "cpp/language/identifiers") naming a [structured binding](structured_binding.html "cpp/language/structured binding"), then decltype yields the _referenced type_ (described in the specification of the structured binding declaration).  | (since C++17)  
---|---  
If the argument is an unparenthesized [id-expression](name.html "cpp/language/identifiers") naming a [constant template parameter](template_parameters.html#Constant_template_parameter "cpp/language/template parameters"), then decltype yields the type of the template parameter (after performing any necessary type deduction if the template parameter is declared with a placeholder type). The type is non-const even if the entity is a template parameter object (which is a const object).  | (since C++20)  
  
2) If the argument is any other expression of type `T`, and

a) if the [value category](value_category.html "cpp/language/value category") of expression is [_xvalue_](value_category.html#xvalue "cpp/language/value category"), then decltype yields T&&;

b) if the value category of expression is [_lvalue_](value_category.html#lvalue "cpp/language/value category"), then decltype yields T&;

c) if the value category of expression is [_prvalue_](value_category.html#prvalue "cpp/language/value category"), then decltype yields T.  If expression is a function call which returns a prvalue of class type or is a [comma expression](operator_other.html "cpp/language/operator other") whose right operand is such a function call, a temporary object is not introduced for that prvalue.  | (until C++17)  
---|---  
If expression is a prvalue other than a (possibly parenthesized) [immediate invocation](consteval.html "cpp/language/consteval")(since C++20), a temporary object is not [materialized](implicit_cast.html#Temporary_materialization "cpp/language/implicit cast") from that prvalue: such prvalue has no result object.  | (since C++17)  
Because no temporary object is created, the type need not be [complete](incomplete_type.html "cpp/language/incomplete type") or have an available [destructor](destructor.html "cpp/language/destructor"), and can be [abstract](abstract_class.html "cpp/language/abstract class"). This rule doesn't apply to sub-expressions: in decltype(f(g())), g() must have a complete type, but f() need not.

Note that if the name of an object is parenthesized, it is treated as an ordinary lvalue expression, thus decltype(x) and decltype((x)) are often different types. 

`decltype` is useful when declaring types that are difficult or impossible to declare using standard notation, like lambda-related types or types that depend on template parameters. 

### Notes

Feature-test macro | Value | Std | Feature   
---|---|---|---  
[`__cpp_decltype`](../experimental/feature_test.html#cpp_decltype "cpp/feature test") | [`200707L`](../compiler_support/11.html#cpp_decltype_200707L "cpp/compiler support/11") | (C++11) | decltype  
  
### Keywords

[`decltype`](../keywords/decltype.html "cpp/keyword/decltype")

### Example

Run this code
    
    
    #include <cassert>
    #include <iostream>
    #include <type_traits>
     
    struct A { double x; };
    const A* a;
     
    decltype(a->x) y;       // type of y is double (declared type)
    decltype((a->x)) z = y; // type of z is const double& (lvalue expression)
     
    template<typename T, typename U>
    auto add(T t, U u) -> decltype(t + u) // return type depends on template parameters
                                          // return type can be deduced since C++14
    {
        return t + u;
    }
     
    const int& getRef(const int* p) { return *p; }
    static_assert([std::is_same_v](../types/is_same.html)<decltype(getRef), const int&(const int*)>);
    auto getRefFwdBad(const int* p) { return getRef(p); }
    static_assert([std::is_same_v](../types/is_same.html)<decltype(getRefFwdBad), int(const int*)>,
        "Just returning auto isn't perfect forwarding.");
    decltype(auto) getRefFwdGood(const int* p) { return getRef(p); }
    static_assert([std::is_same_v](../types/is_same.html)<decltype(getRefFwdGood), const int&(const int*)>,
        "Returning decltype(auto) perfectly forwards the return type.");
     
    // Alternatively:
    auto getRefFwdGood1(const int* p) -> decltype(getRef(p)) { return getRef(p); }
    static_assert([std::is_same_v](../types/is_same.html)<decltype(getRefFwdGood1), const int&(const int*)>,
        "Returning decltype(return expression) also perfectly forwards the return type.");
     
    int main()
    {
        int i = 33;
        decltype(i) j = i * 2;
        static_assert([std::is_same_v](../types/is_same.html)<decltype(i), decltype(j)>);
        [assert](../error/assert.html)(i == 33 && 66 == j);
     
        auto f = [i](int av, int bv) -> int { return av * bv + i; };
        auto h = [i](int av, int bv) -> int { return av * bv + i; };
        static_assert(![std::is_same_v](../types/is_same.html)<decltype(f), decltype(h)>,
            "The type of a lambda function is unique and unnamed");
     
        decltype(f) g = f;
        [std::cout](../io/cout.html) << f(3, 3) << ' ' << g(3, 3) << '\n';
    }

Output: 
    
    
    42 42

### References

Extended content  
---  
  
  * C++23 standard (ISO/IEC 14882:2024): 



    

  * 9.2.9.5 Decltype specifiers [dcl.type.decltype] 



  * C++20 standard (ISO/IEC 14882:2020): 



    

  * 9.2.8.4 Decltype specifiers [dcl.type.decltype] 



  * C++17 standard (ISO/IEC 14882:2017): 



    

  * TBD Decltype specifiers [dcl.type.decltype] 



  * C++14 standard (ISO/IEC 14882:2014): 



    

  * TBD Decltype specifiers [dcl.type.decltype] 



  * C++11 standard (ISO/IEC 14882:2011): 



    

  * TBD Decltype specifiers [dcl.type.decltype] 

  
  
| This section is incomplete  
Reason: Requires correction. See: [Talk: Wrong References](https://en.cppreference.com/w/Talk%253Acpp/language/decltype.html#Wrong_References "Talk:cpp/language/decltype").   
---|---  
  
### See also

[ `auto` specifier ](auto.html "cpp/language/auto")(C++11) |  specifies a type deduced from an expression   
---|---  
[ declval](../utility/declval.html "cpp/utility/declval")(C++11) |  obtains a reference to an object of the template type argument for use in an unevaluated context   
(function template)   
[ is_same](../types/is_same.html "cpp/types/is same")(C++11) |  checks if two types are the same   
(class template)   
[C documentation](../../c/language/typeof_unqual.html "c/language/typeof") for typeof
  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
