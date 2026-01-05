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
[Fold expressions](fold.html "cpp/language/fold") (C++17)  
**Pack indexing** (C++26)  
[SFINAE](sfinae.html "cpp/language/sfinae")  
[Constraints and concepts](constraints.html "cpp/language/constraints") (C++20)  
[requires expression](requires.html "cpp/language/requires") (C++20)  
  


Accesses the element of a [pack](parameter_pack.html "cpp/language/pack") at a specified index. 

## Contents

  * [1 Syntax](pack_indexing.html#Syntax)
  * [2 Explanation](pack_indexing.html#Explanation)
  * [3 Pack indexing expression](pack_indexing.html#Pack_indexing_expression)
  * [4 Pack indexing specifier](pack_indexing.html#Pack_indexing_specifier)
  * [5 Notes](pack_indexing.html#Notes)
  * [6 Example](pack_indexing.html#Example)

  
---  
  
### Syntax  
  
---  
id-expression `**...[**` expression `**]**` |  (1)  |   
typedef-name `**...[**` expression `**]**` |  (2)  |   
  
1) Pack indexing expression

2) Pack indexing specifier

typedef-name |  \-  |  an [identifier](name.html "cpp/language/identifiers") or a [simple-template-id](templates.html#template-id "cpp/language/templates") that names a pack   
---|---|---  
id-expression |  \-  |  an [id-expression](expressions.html#Primary_expressions "cpp/language/expressions") that names a pack   
expression |  \-  |  a [converted constant expression](constant_expression.html "cpp/language/constant expression") I of type [std::size_t](../types/size_t.html) designated as index where I is within the range `[`​0​`, `sizeof...(P)`)` for some pack P in pack indexing   
  
### Explanation

Pack indexing is a _pack expansion_ of the unexpanded pack followed by an ellipsis and index inside the subscript. There are two kinds of pack indexing: pack indexing expression and pack indexing specifier. 

Let `P` be a non-empty pack containing `P0, P1, ..., Pn-1` and `I` be a valid index, the instantiation of the expansion `P...[I]` yields the pack element `PI` of `P`. 

Indexing a pack with non-constant expression index `I` is not allowed. 
    
    
    int runtime_idx();
     
    void bar(auto... args)
    {
        auto a = args...[0];
        const int n = 1;
        auto b = args...[n];
        int m = 2;
        auto c = args...[m]; // error: 'm' is not a constant expression
        auto d = args...[runtime_idx()]; // error: 'runtime_idx()' is not a constant expression
    }

Indexing a pack of template template parameters is not possible. 
    
    
    template <template <typename...> typename... Temps>
    using A = Temps...[0]<>; // error: 'Temps' is a pack of template template parameters
     
    template <template <typename...> typename... Temps>
    using B = Temps<>...[0]; // error: 'Temps<>' doesn't denote pack name 
                             // although it is a simple-template-id

### Pack indexing expression  
  
---  
id-expression `**...[**` expression `**]**` |  |   
  
Pack indexing expression denotes the _id-expression_ , the expression of pack element `PI`. The id-expression shall be introduced by the declaration of: 

  * [constant template parameter pack](parameter_pack.html "cpp/language/pack"), 
  * [function parameter pack](parameter_pack.html "cpp/language/pack"), 
  * [lambda init-capture pack](lambda.html#Lambda_capture "cpp/language/lambda"), or 
  * [structured binding pack](structured_binding.html "cpp/language/structured binding"). 


    
    
    template <[std::size_t](../types/size_t.html) I, typename... Ts>
    constexpr auto element_at(Ts... args)
    {
        // 'args' introduced in function parameter pack declaration
        return args...[I];
    }
     
    static_assert(element_at<0>(3, 5, 9) == 3);
    static_assert(element_at<2>(3, 5, 9) == 9);
    static_assert(element_at<3>(3, 5, 9) == 4); // error:  out of bounds
    static_assert(element_at<0>() == 1); // error: out of bounds, empty pack
     
    template <[std::size_t](../types/size_t.html) I, typename Tup>
    constexpr auto structured_binding_element_at(Tup tup)
    {
        auto [...elems] = tup;
        // 'elems' introduced in structured binding pack declaration
        return elems...[I];
    }
     
    struct A { bool a; int b; };
     
    static_assert(structured_binding_element_at<0>(A {true, 4}) == true);
    static_assert(structured_binding_element_at<1>(A {true, 4}) == 4);
     
    // 'Vals' introduced in constant template parameter pack declaration
    template <[std::size_t](../types/size_t.html) I, [std::size_t](../types/size_t.html)... Vals>
    constexpr [std::size_t](../types/size_t.html) double_at = Vals...[I] * 2; // OK
     
    template <[std::size_t](../types/size_t.html) I, typename... Args>
    constexpr auto foo(Args... args)
    {
        return [...members = args](Args...[I] op)
        {
            // 'members' introduced in lambda init-capture pack
            return members...[I] + op;
        };
    }
     
    static_assert(foo<0>(4, "Hello", true)(5) == 9);
    static_assert(foo<1>(3, [std::string](../string/basic_string.html)("C++"))("26") == "C++26");

Indexing pack of complex expressions other than id-expression is not allowed. 
    
    
    template <[std::size_t](../types/size_t.html) I, auto... Vals>
    constexpr auto identity_at = (Vals)...[I]; // error
    // use 'Vals...[I]' instead
     
    template <[std::size_t](../types/size_t.html) I, [std::size_t](../types/size_t.html)... Vals>
    constexpr [std::size_t](../types/size_t.html) triple_at = (Vals * 3)...[I]; // error
    // use 'Vals...[I] * 3' instead
     
    template <[std::size_t](../types/size_t.html) I, typename... Args>
    constexpr decltype(auto) get(Args&&... args) noexcept
    {
        return [std::forward](../utility/forward.html)<Args>(args)...[I]; // error
        // use 'std::forward<Args...[I]>(args...[I])' instead
    }

Applying [`decltype`](decltype.html "cpp/language/decltype") to pack indexing expression is the same as applying [`decltype`](decltype.html "cpp/language/decltype") to id-expression. 
    
    
    void f() 
    {
        [](auto... args)
        {
            using T0 = decltype(args...[0]);   // 'T0' is 'double'
            using T1 = decltype((args...[0])); // 'T1' is 'double&'
        }(3.14);
    }

### Pack indexing specifier  
  
---  
typedef-name `**...[**` expression `**]**` |  |   
  
Pack indexing specifier denotes the _computed-type-specifier_ , the type of pack element `PI`. The typedef-name shall be introduced by the declaration of [type template parameter pack](parameter_pack.html "cpp/language/pack"). 
    
    
    template <typename... Ts>
    using last_type_t = Ts...[sizeof...(Ts) - 1];
     
    static_assert([std::is_same_v](../types/is_same.html)<last_type_t<>, int>); // error: out of bounds
    static_assert([std::is_same_v](../types/is_same.html)<last_type_t<int>, int>);
    static_assert([std::is_same_v](../types/is_same.html)<last_type_t<bool, char>, char>);
    static_assert([std::is_same_v](../types/is_same.html)<last_type_t<float, int, bool*>, bool*>);

Pack indexing specifier can appear as: 

  * a [simple type specifier](declarations.html#Specifiers "cpp/language/declarations"), 
  * a [base class specifier](derived_class.html "cpp/language/derived class"), 
  * a [nested name specifier](name.html#Qualified_identifiers "cpp/language/identifiers"), or 
  * the [type of an explicit destructor call](name.html#Unqualified_identifiers "cpp/language/identifiers"). 



Pack indexing specifier can be used in function or constructor parameter list to establish [non-deduced contexts](template_argument_deduction.html#Non-deduced_contexts "cpp/language/template argument deduction") in template argument deduction. 
    
    
    template <typename...>
    struct type_seq {};
     
    template <typename... Ts>
    auto f(Ts...[0] arg, type_seq<Ts...>)
    {
        return arg;
    }
     
    // OK: "Hello" is implicitly converted to 'std::string_view'
    [std::same_as](../concepts/same_as.html)<[std::string_view](../string/basic_string_view.html)> auto a = f("Hello", type_seq<[std::string_view](../string/basic_string_view.html)>{});
     
    // Error: "Ok" is not convertible to 'int'
    [std::same_as](../concepts/same_as.html)<int> auto b = f("Ok", type_seq<int, const char*>{});

### Notes

Before C++26, Ts...[N] was a valid syntax for declaring function parameter pack of unnamed arrays of size N, where the parameter types were further adjusted to pointers. Since C++26, Ts...[1] is interpreted as a pack indexing specifier which would change the behavior below to #2. To preserve the first behavior, the function parameter pack must be named, or manually adjusted to a pack of pointer types. 
    
    
    template <typename... Ts>
    void f(Ts... [1]);
     
    template <typename... Ts>
    void g(Ts... args[1]);
     
    template <typename... Ts>
    void h(Ts*...); // clearer but more permissive: Ts... can contain cv void or function types
     
    void foo() 
    {
        f<char, bool>(nullptr, nullptr);
        // behavior #1 (before C++26):
        //  calls void 'f<char, bool>(char*, bool*)' (aka 'f<char, bool>(char[1], bool[1])')
        // behavior #2 (since C++26): 
        //  error: supposedly called 'void f<char, bool>(bool)'
        //  but provided with 2 arguments instead of 1
     
        g<char, bool>(nullptr, nullptr);
        // calls 'g<char, bool>(char*, bool*)' (aka 'g<char, bool>(char[1], bool[1])')
     
        h<char, bool>(nullptr, nullptr);
        // calls 'h<char, bool>(char*, bool*)'
    }

Feature-test macro | Value | Std | Feature   
---|---|---|---  
[`__cpp_pack_indexing`](../experimental/feature_test.html#cpp_pack_indexing "cpp/feature test") | [`202311L`](../compiler_support/26.html#cpp_pack_indexing_202311L "cpp/compiler support/26") | (C++26) | [Pack indexing](pack_indexing.html#top)  
  
### Example

Run this code
    
    
    #include <tuple>
     
    template <[std::size_t](../types/size_t.html)... Indices, typename Decomposable>
    constexpr auto splice(Decomposable d)
    {
        auto [...elems] = d;
        return [std::make_tuple](../utility/tuple/make_tuple.html)(elems...[Indices]...);
    }
     
    struct Point
    {
        int x;
        int y;
        int z;
    };
     
    int main() 
    {
        constexpr Point p { .x = 1, .y = 4, .z = 3 };
        static_assert(splice<2, 1, 0>(p) == [std::make_tuple](../utility/tuple/make_tuple.html)(3, 4, 1));
        static_assert(splice<1, 1, 0, 0>(p) == [std::make_tuple](../utility/tuple/make_tuple.html)(4, 4, 1, 1));
    }
  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
