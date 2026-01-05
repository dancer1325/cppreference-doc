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
[decltype](decltype.html "cpp/language/decltype")(C++11)  
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
**static_assert declaration** (C++11)  
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
  
  
  


Performs compile-time assertion checking. 

## Contents

  * [1 Syntax](static_assert.html#Syntax)
  * [2 Explanation](static_assert.html#Explanation)
  * [3 Notes](static_assert.html#Notes)
  * [4 Keywords](static_assert.html#Keywords)
  * [5 Example](static_assert.html#Example)
  * [6 Defect reports](static_assert.html#Defect_reports)
  * [7 References](static_assert.html#References)
  * [8 See also](static_assert.html#See_also)

  
---  
  
### Syntax  
  
---  
`**static_assert(**` bool-constexpr `**,**` unevaluated-string `**)**` |  (1)  |   
`**static_assert(**` bool-constexpr `**)**` |  (2)  |  (since C++17)  
`**static_assert(**` bool-constexpr `**,**` constant-expression `**)**` |  (3)  |  (since C++26)  
  
Declares a static assertion. If the assertion fails, the program is ill-formed, and a diagnostic error message may be generated. 

1) A static assertion with fixed error message.

2) A static assertion without error message.

3) A static assertion with user-generated error message.

This syntax can only be matched if syntax ([1](static_assert.html#Version_1)) does not match.

### Explanation

bool-constexpr |  \-  |  |  a [contextually converted constant expression of type bool](constant_expression.html#Converted_constant_expression "cpp/language/constant expression"). Built-in conversions are not allowed, except for non-[narrowing](list_initialization.html#Narrowing_conversions "cpp/language/list initialization") [integral conversions](implicit_cast.html#Integral_conversions "cpp/language/implicit conversion") to bool.  | (until C++23)  
---|---  
an expression [contextually converted to bool](implicit_cast.html#Contextual_conversions "cpp/language/implicit conversion") where the conversion is a [constant expression](constant_expression.html "cpp/language/constant expression") | (since C++23)  
unevaluated-string |  \-  |  an [unevaluated string literal](string_literal.html#Unevaluated_strings "cpp/language/string literal") that will appear as the error message   
constant-expression |  \-  |  a [constant expression](constant_expression.html "cpp/language/constant expression") msg satisfying all following conditions: 

  * msg.size() is implicitly convertible to [std::size_t](../types/size_t.html "cpp/types/size t"). 
  * msg.data() is implicitly convertible to const char*. 

  
  
A static_assert declaration may appear at namespace and block [scope](scope.html "cpp/language/scope") (as a [block declaration](declarations.html "cpp/language/declarations")) and inside a class body (as a [member declaration](class.html "cpp/language/class")). 

If bool-constexpr is well-formed and evaluates to true, or is evaluated in the context of a template definition and the template is uninstantiated, this declaration has no effect. Otherwise a compile-time error is issued, and the user-provided message, if any, is included in the diagnostic message. 

The text of the user-provided message is determined as follows: 

  * If the message matches the syntactic requirements of unevaluated-string, the text of the message is the text of the unevaluated-string. 



  * Otherwise, given the following values: 



    

  * Let msg denote the value of constant-expression. 
  * Let len denote the value of msg.size(), which must be a [converted constant expression](constant_expression.html#Converted_constant_expression "cpp/language/constant expression") of type [std::size_t](../types/size_t.html "cpp/types/size t"). 
  * Let ptr denote the expression msg.data(), [implicitly converted](implicit_cast.html "cpp/language/implicit conversion") to const char*. ptr must be a [core constant expression](constant_expression.html#Core_constant_expression "cpp/language/constant expression"). 


     The text of the message is formed by the sequence of len [code units](charset.html#Code_unit_and_literal_encoding "cpp/language/charset"), starting at ptr, of the [ordinary literal encoding](charset.html#Code_unit_and_literal_encoding "cpp/language/charset"). For each integer i in `[`​0​`, `len`)`, ptr[i] must be an [integral constant expression](constant_expression.html#Integral_constant_expression "cpp/language/constant expression"). 
| (since C++26)  
---|---  
  
### Notes

The standard does not require a compiler to print the verbatim text of [error message](static_assert.html#error_message), though compilers generally do so as much as possible. 

Since the error message has to be a string literal, it cannot contain dynamic information or even a [constant expression](constant_expression.html "cpp/language/constant expression") that is not a string literal itself. In particular, it cannot contain the [name](name.html "cpp/language/name") of the [template type argument](template_parameters.html "cpp/language/template parameters").  | (until C++26)  
---|---  
Feature-test macro  | Value | Std | Feature   
---|---|---|---  
[`__cpp_static_assert`](../experimental/feature_test.html#cpp_static_assert "cpp/feature test") | [`200410L`](../compiler_support/11.html#cpp_static_assert_200410L "cpp/compiler support/11") | (C++11) | static_assert (syntax ([1](static_assert.html#Version_1)))   
[`201411L`](../compiler_support/17.html#cpp_static_assert_201411L "cpp/compiler support/17") | (C++17) | Single-argument static_assert (syntax ([2](static_assert.html#Version_2)))   
[`202306L`](../compiler_support/26.html#cpp_static_assert_202306L "cpp/compiler support/26") | (C++26) | User-generated error messages (syntax ([3](static_assert.html#Version_3)))   
  
### Keywords

[`static_assert`](../keyword/static_assert.html "cpp/keyword/static assert")

### Example

Run this code
    
    
    #include <format>
    #include <type_traits>
     
    static_assert(03301 == 1729); // since C++17 the message string is optional
     
    template<class T>
    void swap(T& a, T& b) noexcept
    {
        static_assert([std::is_copy_constructible_v](../types/is_copy_constructible.html)<T>,
                      "Swap requires copying");
        static_assert([std::is_nothrow_copy_constructible_v](../types/is_copy_constructible.html)<T> &&
                      [std::is_nothrow_copy_assignable_v](../types/is_copy_assignable.html)<T>,
                      "Swap requires nothrow copy/assign");
        auto c = b;
        b = a;
        a = c;
    }
     
    template<class T>
    struct data_structure
    {
        static_assert([std::is_default_constructible_v](../types/is_default_constructible.html)<T>,
                      "Data structure requires default-constructible elements");
    };
     
    template<class>
    constexpr bool dependent_false = false; // workaround before CWG2518/P2593R1
     
    template<class T>
    struct bad_type
    {
        static_assert(dependent_false<T>, "error on instantiation, workaround");
        static_assert(false, "error on instantiation"); // OK because of CWG2518/P2593R1
    };
     
    struct no_copy
    {
        no_copy(const no_copy&) = delete;
        no_copy() = default;
    };
     
    struct no_default
    {
        no_default() = delete;
    };
     
    #if __cpp_static_assert >= 202306L
    // Not real C++ yet (std::format should be constexpr to work):
    static_assert(sizeof(int) == 4, [std::format](../utility/format/format.html)("Expected 4, got {}", sizeof(int)));
    #endif
     
    int main()
    {
        int a, b;
        swap(a, b);
     
        no_copy nc_a, nc_b;
        swap(nc_a, nc_b); // 1
     
        [[maybe_unused]] data_structure<int> ds_ok;
        [[maybe_unused]] data_structure<no_default> ds_error; // 2
    }

Possible output: 
    
    
    1: error: static assertion failed: Swap requires copying
    2: error: static assertion failed: Data structure requires default-constructible elements
    3: error: static assertion failed: Expected 4, got 2

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[CWG 2039](https://cplusplus.github.io/CWG/issues/2039.html) | C++11  | only the expression before conversion is required to be constant  | the conversion must also be  
valid in a constant expression   
[CWG 2518](https://cplusplus.github.io/CWG/issues/2518.html)  
([P2593R1](https://wg21.link/P2593R1))  | C++11  | uninstantiated static_assert(false, ""); was ill-formed  | made well-formed   
  
### References

  * C++23 standard (ISO/IEC 14882:2024): 



    

  * 9.1 Preamble [dcl.pre] (p: 10) 



  * C++20 standard (ISO/IEC 14882:2020): 



    

  * 9.1 Preamble [dcl.pre] (p: 6) 



  * C++17 standard (ISO/IEC 14882:2017): 



    

  * 10 Declarations [dcl.dcl] (p: 6) 



  * C++14 standard (ISO/IEC 14882:2014): 



    

  * 7 Declarations [dcl.dcl] (p: 4) 



  * C++11 standard (ISO/IEC 14882:2011): 



    

  * 7 Declarations [dcl.dcl] (p: 4) 



### See also

[ #error](../preprocessor/warning.html "cpp/preprocessor/error") |  shows the given error message and renders the program ill-formed  
(preprocessing directive)  
---|---  
[ assert](../error/assert.html "cpp/error/assert") |  aborts the program if the user-specified condition is not true. May be disabled for release builds.   
(function macro)   
[`contract_assert` statement](contract_assert.html "cpp/language/contract assert") (C++26) |  verifies an internal condition during execution  
[ enable_if](../types/enable_if.html "cpp/types/enable if")(C++11) |  conditionally [removes](sfinae.html "cpp/language/sfinae") a function overload or template specialization from overload resolution   
(class template)   
[**Type traits**](../meta.html#Type_traits "cpp/meta") (C++11) |  define compile-time template-based interfaces to query the properties of types   
[C documentation](../../c/language/static_assert.html "c/language/ Static assert") for Static assertion
  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
