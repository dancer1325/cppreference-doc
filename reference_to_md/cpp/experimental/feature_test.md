[C++](../../cpp.html "cpp")

[Compiler support](../compiler_support.html "cpp/compiler support")  
---  
[Freestanding and hosted](../freestanding.html "cpp/freestanding")  
[Language](../language.html "cpp/language")  
[Standard library](../standard_library.html "cpp/standard library")  
[Standard library headers](../headers.html "cpp/header")  
[Named requirements](../iterator/concepts.html "cpp/named req")  
**Feature test macros** (C++20)  
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
[Execution control library](execution.html "cpp/execution") (C++26)  
[Technical specifications](../experimental.html "cpp/experimental")  
[Symbols index](../symbol_index.html "cpp/symbol index")  
[External libraries](../links/libs.html "cpp/links/libs")  
  


**Feature testing**

The standard defines a set of [preprocessor macros](../preprocessor/replace.html "cpp/preprocessor/replace") corresponding to C++ language and library features introduced in C++11 or later. They are intended as a simple and portable way to detect the presence of said features. 

## Contents

  * [1 Attributes](feature_test.html#Attributes)
  * [2 Language features](feature_test.html#Language_features)
  * [3 Library features](feature_test.html#Library_features)
  * [4 Example](feature_test.html#Example)
    * [4.1 Normal usage](feature_test.html#Normal_usage)
    * [4.2 Compiler Features Dump](feature_test.html#Compiler_Features_Dump)
  * [5 Defect reports](feature_test.html#Defect_reports)
  * [6 See also](feature_test.html#See_also)
  * [7 External links](feature_test.html#External_links)

  
---  
  
### Attributes  
  
---  
`**__has_cpp_attribute(**` attribute-token `**)**` |  |   
  
Checks for the support of an [attribute](../language/attributes.html "cpp/language/attributes") named by attribute-token (after macro expansion). 

For each standard attribute, it is implementation-defined whether `__has_cpp_attribute` expands to the value given in the table below (which is the year and month in which the attribute was added to the working draft) or ​0​. It will expand to given value in the table if and only if the standard attribute causes the implementation to behave as recommended (issuing diagnostic messages, affecting class layout, etc.). 

The presence of vendor-specific attributes is determined by a non-zero value. 

`__has_cpp_attribute` can be expanded in the expression of [` #if`](../preprocessor/conditional.html "cpp/preprocessor/conditional") and [` #elif`](../preprocessor/conditional.html "cpp/preprocessor/conditional"). It is treated as a defined macro by [` #ifdef`](../preprocessor/conditional.html "cpp/preprocessor/conditional"), [` #ifndef`](../preprocessor/conditional.html "cpp/preprocessor/conditional"), [` #elifdef`](../preprocessor/conditional.html "cpp/preprocessor/conditional"), [` #elifndef`](../preprocessor/conditional.html "cpp/preprocessor/conditional")(since C++23) and [`defined`](../preprocessor/conditional.html "cpp/preprocessor/conditional") but cannot be used anywhere else. 

attribute-token | Attribute  | Value | Std | Paper(s)   
---|---|---|---|---  
`assume` | `[[[assume](../language/attributes/assume.html "cpp/language/attributes/assume")]]` | [`202207L`](../compiler_support/23.html#assume "cpp/compiler support/23") | (C++23) | [P1774R8](https://wg21.link/P1774R8)  
`carries_dependency` | `[[[carries_dependency](../language/attributes/carries_dependency.html "cpp/language/attributes/carries dependency")]]` | [`200809L`](../compiler_support/11.html#carries_dependency "cpp/compiler support/11") | (C++11)  
(until C++26) | [N2556](https://wg21.link/N2556)  
[N2643](https://wg21.link/N2643)  
[P3475R2](https://wg21.link/P3475R2)  
`deprecated` | `[[[deprecated](../language/attributes/deprecated.html "cpp/language/attributes/deprecated")]]` | [`201309L`](../compiler_support/14.html#deprecated "cpp/compiler support/14") | (C++14) | [N3760](https://wg21.link/N3760)  
`fallthrough` | `[[[fallthrough](../language/attributes/fallthrough.html "cpp/language/attributes/fallthrough")]]` | [`201603L`](../compiler_support/17.html#fallthrough "cpp/compiler support/17") | (C++17) | [P0188R1](https://wg21.link/P0188R1)  
`indeterminate` | `[[[indeterminate](../language/attributes/indeterminate.html "cpp/language/attributes/indeterminate")]]` | [`202403L`](../compiler_support/26.html#indeterminate "cpp/compiler support/26") | (C++26) | [P2795R5](https://wg21.link/P2795R5)  
`likely` | `[[[likely](../language/attributes/likely.html "cpp/language/attributes/likely")]]` | [`201803L`](../compiler_support/20.html#likely "cpp/compiler support/20") | (C++20) | [P0479R5](https://wg21.link/P0479R5)  
`maybe_unused` | `[[[maybe_unused](../language/attributes/maybe_unused.html "cpp/language/attributes/maybe unused")]]` | [`201603L`](../compiler_support/17.html#maybe_unused "cpp/compiler support/17") | (C++17) | [P0212R1](https://wg21.link/P0212R1)  
`no_unique_address` | `[[[no_unique_address](../language/attributes/no_unique_address.html "cpp/language/attributes/no unique address")]]` | [`201803L`](../compiler_support/20.html#no_unique_address "cpp/compiler support/20") | (C++20) | [P0840R2](https://wg21.link/P0840R2)  
`nodiscard` | `[[[nodiscard](../language/attributes/nodiscard.html "cpp/language/attributes/nodiscard")]]` | [`201603L`](../compiler_support/17.html#nodiscard "cpp/compiler support/17") | (C++17) | [P0189R1](https://wg21.link/P0189R1)  
`[[[nodiscard](../language/attributes/nodiscard.html "cpp/language/attributes/nodiscard")]]` with reason  | [`201907L`](../compiler_support/20.html#nodiscard "cpp/compiler support/20") | (C++20) | [P1301R4](https://wg21.link/P1301R4)  
`noreturn` | `[[[noreturn](../language/attributes/noreturn.html "cpp/language/attributes/noreturn")]]` | [`200809L`](../compiler_support/11.html#noreturn "cpp/compiler support/11") | (C++11) | [N2761](https://wg21.link/N2761)  
`unlikely` | `[[[unlikely](../language/attributes/likely.html "cpp/language/attributes/likely")]]` | [`201803L`](../compiler_support/20.html#likely "cpp/compiler support/20") | (C++20) | [P0479R5](https://wg21.link/P0479R5)  
Total number of attributes: 11   
  
### Language features

The following macros can be used to detect whether a language feature is implemented by the current implementation. They are [predefined](../preprocessor/replace.html#Predefined_macros "cpp/preprocessor/replace") in every translation unit. 

Each macro expands to an integer literal corresponding to the year and month when the corresponding feature has been included in the working draft. When a feature changes significantly, the macro will be updated accordingly. 



Macro name  | Feature  | Value | Std | Paper(s)   
---|---|---|---|---  
`__cpp_aggregate_bases` | [Aggregate classes](../language/aggregate_initialization.html "cpp/language/aggregate initialization") with base classes  | [`201603L`](../compiler_support/17.html#cpp_aggregate_bases_201603L "cpp/compiler support/17") | (C++17) | [P0017R1](https://wg21.link/P0017R1)  
`__cpp_aggregate_nsdmi` | [Aggregate classes](../language/aggregate_initialization.html "cpp/language/aggregate initialization") with [default member initializers](../language/data_members.html#Member_initialization "cpp/language/data members") | [`201304L`](../compiler_support/14.html#cpp_aggregate_nsdmi_201304L "cpp/compiler support/14") | (C++14) | [N3653](https://wg21.link/N3653)  
`__cpp_aggregate_paren_init` | [Aggregate initialization](../language/aggregate_initialization.html "cpp/language/aggregate initialization") in the form of [direct initialization](../language/direct_initialization.html "cpp/language/direct initialization") | [`201902L`](../compiler_support/20.html#cpp_aggregate_paren_init_201902L "cpp/compiler support/20") | (C++20) | [P0960R3](https://wg21.link/P0960R3)  
`__cpp_alias_templates` | [Alias templates](../language/type_alias.html "cpp/language/type alias") | [`200704L`](../compiler_support/11.html#cpp_alias_templates_200704L "cpp/compiler support/11") | (C++11) | [N2258](https://wg21.link/N2258)  
`__cpp_aligned_new` | [Dynamic memory allocation for over-aligned data](../memory/new/align_val_t.html "cpp/memory/new/align val t") | [`201606L`](../compiler_support/17.html#cpp_aligned_new_201606L "cpp/compiler support/17") | (C++17) | [P0035R4](https://wg21.link/P0035R4)  
`__cpp_attributes` | [Attributes](../language/attributes.html "cpp/language/attributes") | [`200809L`](../compiler_support/11.html#cpp_attributes_200809L "cpp/compiler support/11") | (C++11) | [N2761](https://wg21.link/N2761)  
`__cpp_auto_cast` | [auto(x) and auto{x}](../language/explicit_cast.html "cpp/language/explicit cast") | [`202110L`](../compiler_support/23.html#cpp_auto_cast_202110L "cpp/compiler support/23") | (C++23) | [P0849R8](https://wg21.link/P0849R8)  
`__cpp_binary_literals` | [Binary literals](../language/integer_literal.html "cpp/language/integer literal") | [`201304L`](../compiler_support/14.html#cpp_binary_literals_201304L "cpp/compiler support/14") | (C++14) | [N3472](https://wg21.link/N3472)  
`__cpp_capture_star_this` | [Lambda capture of *this by value as [=,*this]](../language/lambda.html#Lambda_capture "cpp/language/lambda") | [`201603L`](../compiler_support/17.html#cpp_capture_star_this_201603L "cpp/compiler support/17") | (C++17) | [P0018R3](https://wg21.link/P0018R3)  
`__cpp_char8_t` | [`char8_t`](../keyword/char8_t.html "cpp/keyword/char8 t") | [`201811L`](../compiler_support/20.html#cpp_char8_t_201811L "cpp/compiler support/20") | (C++20) | [P0482R6](https://wg21.link/P0482R6)  
char8_t compatibility and portability fix (allow [initialization of (unsigned) char arrays](../language/aggregate_initialization.html#Character_arrays "cpp/language/aggregate initialization") from [UTF-8 string literals](../language/string_literal.html "cpp/language/string literal"))  | [`202207L`](../compiler_support/23.html#cpp_char8_t_202207L "cpp/compiler support/23") | (C++23)  
(DR20) | [P2513R4](https://wg21.link/P2513R4)  
`__cpp_concepts` | [Concepts](../language/constraints.html "cpp/language/constraints") | [`201907L`](../compiler_support/20.html#cpp_concepts_201907L "cpp/compiler support/20") | (C++20) | [P0734R0](https://wg21.link/P0734R0)  
[P1084R2](https://wg21.link/P1084R2)  
[P1452R2](https://wg21.link/P1452R2)  
Conditional trivial special member functions  | [`202002L`](../compiler_support/20.html#cpp_concepts_202002L "cpp/compiler support/20") | [P0848R3](https://wg21.link/P0848R3)  
[P2493R0](https://wg21.link/P2493R0)  
`__cpp_conditional_explicit` | [`explicit(bool)`](../language/explicit.html "cpp/language/explicit") | [`201806L`](../compiler_support/20.html#cpp_conditional_explicit_201806L "cpp/compiler support/20") | (C++20) | [P0892R2](https://wg21.link/P0892R2)  
`__cpp_consteval` | [Immediate functions](../language/consteval.html "cpp/language/consteval") | [`201811L`](../compiler_support/20.html#cpp_consteval_201811L "cpp/compiler support/20") | (C++20) | [P1073R3](https://wg21.link/P1073R3)  
Making [`consteval`](../language/consteval.html "cpp/language/consteval") propagate up  | [`202211L`](../compiler_support/23.html#cpp_consteval_202211L "cpp/compiler support/23") | (C++23)  
(DR20) | [P2564R3](https://wg21.link/P2564R3)  
`__cpp_constexpr` | [`constexpr`](../language/constexpr.html "cpp/language/constexpr") | [`200704L`](../compiler_support/11.html#cpp_constexpr_200704L "cpp/compiler support/11") | (C++11) | [N2235](https://wg21.link/N2235)  
[Relaxed constexpr](../language/constexpr.html#relaxed-constexpr "cpp/language/constexpr"), [non-`const` `constexpr` methods](../language/constexpr.html#constexpr-method-is-const "cpp/language/constexpr") | [`201304L`](../compiler_support/14.html#cpp_constexpr_201304L "cpp/compiler support/14") | (C++14) | [N3652](https://wg21.link/N3652)  
[Constexpr lambda](../language/lambda.html "cpp/language/lambda") | [`201603L`](../compiler_support/17.html#cpp_constexpr_201603L "cpp/compiler support/17") | (C++17) | [P0170R1](https://wg21.link/P0170R1)  
[Virtual function](../language/virtual.html "cpp/language/virtual") calls in constant expressions; [`try` blocks](../language/try.html "cpp/language/try") in constexpr functions, [`dynamic_cast`](../language/dynamic_cast.html "cpp/language/dynamic cast") and polymorphic [`typeid`](../language/typeid.html "cpp/language/typeid") in constant expressions; trivial [default initialization](../language/default_initialization.html "cpp/language/default initialization") and [asm-declaration](../language/asm.html "cpp/language/asm") in constexpr functions  | [`201907L`](../compiler_support/20.html#cpp_constexpr_201907L "cpp/compiler support/20") | (C++20) | [P1064R0](https://wg21.link/P1064R0)  
[P1002R1](https://wg21.link/P1002R1)  
[P1327R1](https://wg21.link/P1327R1)  
[P1331R2](https://wg21.link/P1331R2)  
[P1668R1](https://wg21.link/P1668R1)  
Changing the active member of a union in constant evaluation  | [`202002L`](../compiler_support/20.html#cpp_constexpr_202002L "cpp/compiler support/20") | [P1330R0](https://wg21.link/P1330R0)  
[P2493R0](https://wg21.link/P2493R0)  
Non-[literal](../named_req/LiteralType.html "cpp/named req/LiteralType") variables, labels, and [`goto`](../language.html "cpp/language") statements in constexpr functions  | [`202110L`](../compiler_support/23.html#cpp_constexpr_202110L "cpp/compiler support/23") | (C++23) | [P2242R3](https://wg21.link/P2242R3)  
Relaxing some restrictions on [constexpr](../language/constexpr.html "cpp/language/constexpr") functions and function templates  | [`202207L`](../compiler_support/23.html#cpp_constexpr_202207L "cpp/compiler support/23") | [P2448R2](https://wg21.link/P2448R2)  
Permitting static constexpr variables in constexpr functions  | [`202211L`](../compiler_support/23.html#cpp_constexpr_202211L "cpp/compiler support/23") | [P2647R1](https://wg21.link/P2647R1)  
Constexpr cast from void*: towards constexpr type-erasure  | [`202306L`](../compiler_support/26.html#cpp_constexpr_202306L "cpp/compiler support/26") | (C++26) | [P2738R1](https://wg21.link/P2738R1)  
constexpr placement new | [`202406L`](../compiler_support/26.html#cpp_constexpr_202406L "cpp/compiler support/26") | [P2747R2](https://wg21.link/P2747R2)  
`__cpp_constexpr_dynamic_alloc` | Operations for dynamic storage duration in constexpr functions  | [`201907L`](../compiler_support/20.html#cpp_constexpr_dynamic_alloc_201907L "cpp/compiler support/20") | (C++20) | [P0784R7](https://wg21.link/P0784R7)  
`__cpp_constexpr_exceptions` | constexpr exceptions: [[1]](../language/constant_expression.html#P3068_1 "cpp/language/constant expression"), [[2]](../language/constant_expression.html#P3068_2 "cpp/language/constant expression") | [`202411L`](../compiler_support/26.html#cpp_constexpr_exceptions_202411L "cpp/compiler support/26") | (C++26) | [P3068R6](https://wg21.link/P3068R6)  
`__cpp_constexpr_in_decltype` | Generation of function and variable definitions when [needed for constant evaluation](../language/constant_expression.html#Functions_and_variables_needed_for_constant_evaluation "cpp/language/constant expression") | [`201711L`](../compiler_support/20.html#cpp_constexpr_in_decltype_201711L "cpp/compiler support/20") | (C++20)  
(DR11) | [P0859R0](https://wg21.link/P0859R0)  
`__cpp_constinit` | [`constinit`](../language/constinit.html "cpp/language/constinit") | [`201907L`](../compiler_support/20.html#cpp_constinit_201907L "cpp/compiler support/20") | (C++20) | [P1143R2](https://wg21.link/P1143R2)  
`__cpp_contracts` | [Contracts](../language/contracts.html "cpp/language/contracts") | [`202502L`](../compiler_support/26.html#cpp_contracts_202502L "cpp/compiler support/26") | (C++26) | [P2900R14](https://wg21.link/P2900R14)  
`__cpp_decltype` | [`decltype`](../language/decltype.html "cpp/language/decltype") | [`200707L`](../compiler_support/11.html#cpp_decltype_200707L "cpp/compiler support/11") | (C++11) | [N2343](https://wg21.link/N2343)  
`__cpp_decltype_auto` | [Return type deduction for normal functions](../language/auto.html "cpp/language/auto") | [`201304L`](../compiler_support/14.html#cpp_decltype_auto_201304L "cpp/compiler support/14") | (C++14) | [N3638](https://wg21.link/N3638)  
`__cpp_deduction_guides` | [Template argument deduction for class templates](../language/ctad.html "cpp/language/class template argument deduction") (CTAD)  | [`201703L`](../compiler_support/17.html#cpp_deduction_guides_201703L "cpp/compiler support/17") | (C++17) | [P0091R3](https://wg21.link/P0091R3)  
[P0512R0](https://wg21.link/P0512R0)  
[P0620R0](https://wg21.link/P0620R0)  
CTAD for aggregates and aliases  | [`201907L`](../compiler_support/20.html#cpp_deduction_guides_201907L "cpp/compiler support/20") | (C++20) | [P1814R0](https://wg21.link/P1814R0)  
[P1816R0](https://wg21.link/P1816R0)  
`__cpp_delegating_constructors` | [Delegating constructors](../language/initializer_list.html#Delegating_constructor "cpp/language/constructor") | [`200604L`](../compiler_support/11.html#cpp_delegating_constructors_200604L "cpp/compiler support/11") | (C++11) | [N1986](https://wg21.link/N1986)  
`__cpp_deleted_function` | Deleted [function definitions](../language/function.html "cpp/language/function") with messages (= delete("should have a reason");)  | [`202403L`](../compiler_support/26.html#cpp_deleted_function_202403L "cpp/compiler support/26") | (C++26) | [P2573R2](https://wg21.link/P2573R2)  
`__cpp_designated_initializers` | [Designated initializers](../language/aggregate_initialization.html#Designated_initializer "cpp/language/aggregate initialization") | [`201707L`](../compiler_support/20.html#cpp_designated_initializers_201707L "cpp/compiler support/20") | (C++20) | [P0329R4](https://wg21.link/P0329R4)  
`__cpp_enumerator_attributes` | Attributes for [enumerators](../language/enum.html "cpp/language/enum") | [`201411L`](../compiler_support/17.html#cpp_enumerator_attributes_201411L "cpp/compiler support/17") | (C++17) | [N4266](https://wg21.link/N4266)  
`__cpp_explicit_this_parameter` | [Explicit object parameter](../language/member_functions.html#Explicit_object_member_functions "cpp/language/member functions") | [`202110L`](../compiler_support/23.html#cpp_explicit_this_parameter_202110L "cpp/compiler support/23") | (C++23) | [P0847R7](https://wg21.link/P0847R7)  
`__cpp_fold_expressions` | [Fold expressions](../language/fold.html "cpp/language/fold") | [`201603L`](../compiler_support/17.html#cpp_fold_expressions_201603L "cpp/compiler support/17") | (C++17) | [N4295](https://wg21.link/N4295)  
[P0036R0](https://wg21.link/P0036R0)  
Ordering of [constraints](../language/constraints.html "cpp/language/constraints") involving [fold expressions](../language/fold.html "cpp/language/fold") | [`202406L`](../compiler_support/26.html#cpp_fold_expressions_202406L "cpp/compiler support/26") | (C++26) | [P2963R3](https://wg21.link/P2963R3)  
`__cpp_generic_lambdas` | [Generic lambda expressions](../language/lambda.html "cpp/language/lambda") | [`201304L`](../compiler_support/14.html#cpp_generic_lambdas_201304L "cpp/compiler support/14") | (C++14) | [N3649](https://wg21.link/N3649)  
Explicit template parameter list for [generic lambdas](../language/lambda.html "cpp/language/lambda") | [`201707L`](../compiler_support/20.html#cpp_generic_lambdas_201707L "cpp/compiler support/20") | (C++20) | [P0428R2](https://wg21.link/P0428R2)  
`__cpp_guaranteed_copy_elision` | Guaranteed copy elision through simplified [value categories](../language/value_category.html "cpp/language/value category") | [`201606L`](../compiler_support/17.html#cpp_guaranteed_copy_elision_201606L "cpp/compiler support/17") | (C++17) | [P0135R1](https://wg21.link/P0135R1)  
`__cpp_hex_float` | [Hexadecimal floating literals](../language/floating_literal.html "cpp/language/floating literal") | [`201603L`](../compiler_support/17.html#cpp_hex_float_201603L "cpp/compiler support/17") | (C++17) | [P0245R1](https://wg21.link/P0245R1)  
`__cpp_if_consteval` | [`if consteval`](../language/if.html "cpp/language/if") | [`202106L`](../compiler_support/23.html#cpp_if_consteval_202106L "cpp/compiler support/23") | (C++23) | [P1938R3](https://wg21.link/P1938R3)  
`__cpp_if_constexpr` | [`if constexpr`](../language/if.html "cpp/language/if") | [`201606L`](../compiler_support/17.html#cpp_if_constexpr_201606L "cpp/compiler support/17") | (C++17) | [P0292R2](https://wg21.link/P0292R2)  
`__cpp_impl_coroutine` | [Coroutines](../language/coroutines.html "cpp/language/coroutines") (compiler support)  | [`201902L`](../compiler_support/20.html#cpp_impl_coroutine_201902L "cpp/compiler support/20") | (C++20) | [P0912R5](https://wg21.link/P0912R5)  
[LWG3393](https://wg21.link/LWG3393)  
`__cpp_impl_destroying_delete` | Destroying [`operator delete`](../memory/new/operator_delete.html "cpp/memory/new/operator delete") (compiler support)  | [`201806L`](../compiler_support/20.html#cpp_impl_destroying_delete_201806L "cpp/compiler support/20") | (C++20) | [P0722R3](https://wg21.link/P0722R3)  
`__cpp_impl_three_way_comparison` | [Three-way comparison](../language/operator_comparison.html#Three-way_comparison "cpp/language/operator comparison") (compiler support)  | [`201907L`](../compiler_support/20.html#cpp_impl_three_way_comparison_201907L "cpp/compiler support/20") | (C++20) | [P0515R3](https://wg21.link/P0515R3)  
[P0768R1](https://wg21.link/P0768R1)  
[P1185R2](https://wg21.link/P1185R2)  
[P1630R1](https://wg21.link/P1630R1)  
`__cpp_implicit_move` | Simpler [implicit move](../language/return.html#Automatic_move_from_local_variables_and_parameters "cpp/language/return") | [`202207L`](../compiler_support/23.html#cpp_implicit_move_202207L "cpp/compiler support/23") | (C++23) | [P2266R3](https://wg21.link/P2266R3)  
`__cpp_inheriting_constructors` | [Inheriting constructors](../language/using_declaration.html#Inheriting_constructors "cpp/language/using declaration") | [`200802L`](../compiler_support/11.html#cpp_inheriting_constructors_200802L "cpp/compiler support/11") | (C++11) | [N2540](https://wg21.link/N2540)  
Rewording inheriting constructors: New specification for [inheriting constructors](../language/using_declaration.html#Inheriting_constructors "cpp/language/using declaration") ([DR1941](https://wg21.link/DR1941) et al)  | [`201511L`](../compiler_support/17.html#cpp_inheriting_constructors_201511L "cpp/compiler support/17") | (C++17)  
(DR11) | [P0136R1](https://wg21.link/P0136R1)  
`__cpp_init_captures` | [Lambda init-capture](../language/lambda.html "cpp/language/lambda") | [`201304L`](../compiler_support/14.html#cpp_init_captures_201304L "cpp/compiler support/14") | (C++14) | [N3648](https://wg21.link/N3648)  
Allow pack expansion in [lambda](../language/lambda.html "cpp/language/lambda") init-capture  | [`201803L`](../compiler_support/20.html#cpp_init_captures_201803L "cpp/compiler support/20") | (C++20) | [P0780R2](https://wg21.link/P0780R2)  
`__cpp_initializer_lists` | [List-initialization](../language/list_initialization.html "cpp/language/list initialization") and [std::initializer_list](../utility/initializer_list.html "cpp/utility/initializer list") | [`200806L`](../compiler_support/11.html#cpp_initializer_lists_200806L "cpp/compiler support/11") | (C++11) | [N2672](https://wg21.link/N2672)  
`__cpp_inline_variables` | [Inline variables](../language/inline.html "cpp/language/inline") | [`201606L`](../compiler_support/17.html#cpp_inline_variables_201606L "cpp/compiler support/17") | (C++17) | [P0386R2](https://wg21.link/P0386R2)  
`__cpp_lambdas` | [Lambda expressions](../language/lambda.html "cpp/language/lambda") | [`200907L`](../compiler_support/11.html#cpp_lambdas_200907L "cpp/compiler support/11") | (C++11) | [N2927](https://wg21.link/N2927)  
`__cpp_modules` | [Modules](../language/modules.html "cpp/language/modules") | [`201907L`](../compiler_support/20.html#cpp_modules_201907L "cpp/compiler support/20") | (C++20) | [P1103R3](https://wg21.link/P1103R3)  
[P1811R0](https://wg21.link/P1811R0)  
`__cpp_multidimensional_subscript` | Multidimensional [subscript operator](../language/operator_member_access.html "cpp/language/operator member access") | [`202110L`](../compiler_support/23.html#cpp_multidimensional_subscript_202110L "cpp/compiler support/23") | (C++23) | [P2128R6](https://wg21.link/P2128R6)  
Static [`operator[]`](../language/operators.html "cpp/language/operators") | [`202211L`](../compiler_support/23.html#cpp_multidimensional_subscript_202211L "cpp/compiler support/23") | [P2589R1](https://wg21.link/P2589R1)  
`__cpp_named_character_escapes` | Named [universal character escapes](../language/escape.html "cpp/language/escape") | [`202207L`](../compiler_support/23.html#cpp_named_character_escapes_202207L "cpp/compiler support/23") | (C++23) | [P2071R2](https://wg21.link/P2071R2)  
`__cpp_namespace_attributes` | Attributes for [namespaces](../language/namespace.html "cpp/language/namespace") | [`201411L`](../compiler_support/17.html#cpp_namespace_attributes_201411L "cpp/compiler support/17") | (C++17) | [N4266](https://wg21.link/N4266)  
`__cpp_noexcept_function_type` | Make [exception specifications](../language/noexcept_spec.html "cpp/language/noexcept spec") be part of the type system  | [`201510L`](../compiler_support/17.html#cpp_noexcept_function_type_201510L "cpp/compiler support/17") | (C++17) | [P0012R1](https://wg21.link/P0012R1)  
`__cpp_nontype_template_args` | Allow constant evaluation for all [constant template arguments](../language/template_parameters.html#Template_constant_arguments "cpp/language/template parameters") | [`201411L`](../compiler_support/17.html#cpp_nontype_template_args_201411L "cpp/compiler support/17") | (C++17) | [N4268](https://wg21.link/N4268)  
Class types and floating-point types in [constant template parameters](../language/template_parameters.html#Constant_template_parameter "cpp/language/template parameters") | [`201911L`](../compiler_support/20.html#cpp_nontype_template_args_201911L "cpp/compiler support/20") | (C++20) | [P1907R1](https://wg21.link/P1907R1)  
`__cpp_nontype_template_parameter_auto` | Declaring [constant template parameter](../language/template_parameters.html#Constant_template_parameter "cpp/language/template parameters") with auto | [`201606L`](../compiler_support/17.html#cpp_nontype_template_parameter_auto_201606L "cpp/compiler support/17") | (C++17) | [P0127R2](https://wg21.link/P0127R2)  
`__cpp_nsdmi` | [Non-static data member initializers](../language/data_members.html#Member_initialization "cpp/language/data members") | [`200809L`](../compiler_support/11.html#cpp_nsdmi_200809L "cpp/compiler support/11") | (C++11) | [N2756](https://wg21.link/N2756)  
`__cpp_pack_indexing` | [Pack indexing](../language/pack_indexing.html "cpp/language/pack indexing") | [`202311L`](../compiler_support/26.html#cpp_pack_indexing_202311L "cpp/compiler support/26") | (C++26) | [P2662R3](https://wg21.link/P2662R3)  
`__cpp_placeholder_variables` | A nice placeholder with no name  | [`202306L`](../compiler_support/26.html#cpp_placeholder_variables_202306L "cpp/compiler support/26") | (C++26) | [P2169R4](https://wg21.link/P2169R4)  
`__cpp_pp_embed` | [` #embed`](../preprocessor/embed.html "cpp/preprocessor/embed") | [`202502L`](../compiler_support/26.html#cpp_pp_embed_202502L "cpp/compiler support/26") | (C++26) | [P1967R14](https://wg21.link/P1967R14)  
`__cpp_range_based_for` | [Range-based `for` loop](../language/range-for.html "cpp/language/range-for") | [`200907L`](../compiler_support/11.html#cpp_range_based_for_200907L "cpp/compiler support/11") | (C++11) | [N2930](https://wg21.link/N2930)  
[Range-based `for` loop](../language/range-for.html#Explanation "cpp/language/range-for") with different `begin`/`end` types  | [`201603L`](../compiler_support/17.html#cpp_range_based_for_201603L "cpp/compiler support/17") | (C++17) | [P0184R0](https://wg21.link/P0184R0)  
Lifetime extension in range-based for | [`202211L`](../compiler_support/23.html#cpp_range_based_for_202211L "cpp/compiler support/23") | (C++23) | [P2644R1](https://wg21.link/P2644R1)  
[P2718R0](https://wg21.link/P2718R0)  
[CWG2659](https://wg21.link/CWG2659)  
`__cpp_raw_strings` | [Raw string literals](../language/string_literal.html "cpp/language/string literal") | [`200710L`](../compiler_support/11.html#cpp_raw_strings_200710L "cpp/compiler support/11") | (C++11) | [N2442](https://wg21.link/N2442)  
`__cpp_ref_qualifiers` | [ref-qualifiers](../language/member_functions.html "cpp/language/member functions") | [`200710L`](../compiler_support/11.html#cpp_ref_qualifiers_200710L "cpp/compiler support/11") | (C++11) | [N2439](https://wg21.link/N2439)  
`__cpp_return_type_deduction` | [Return type deduction for normal functions](../language/auto.html "cpp/language/auto") | [`201304L`](../compiler_support/14.html#cpp_return_type_deduction_201304L "cpp/compiler support/14") | (C++14) | [N3638](https://wg21.link/N3638)  
`__cpp_rvalue_references` | [Rvalue reference](../language/reference.html "cpp/language/reference") | [`200610L`](../compiler_support/11.html#cpp_rvalue_references_200610L "cpp/compiler support/11") | (C++11) | [N2118](https://wg21.link/N2118)  
`__cpp_size_t_suffix` | [Literal suffixes for `std::size_t` and its signed version](../language/integer_literal.html "cpp/language/integer literal") | [`202011L`](../compiler_support/23.html#cpp_size_t_suffix_202011L "cpp/compiler support/23") | (C++23) | [P0330R8](https://wg21.link/P0330R8)  
`__cpp_sized_deallocation` | [Sized deallocation](../memory/new/operator_delete.html "cpp/memory/new/operator delete") | [`201309L`](../compiler_support/14.html#cpp_sized_deallocation_201309L "cpp/compiler support/14") | (C++14) | [N3778](https://wg21.link/N3778)  
`__cpp_static_assert` | [`static_assert`](../language/static_assert.html "cpp/language/static assert") | [`200410L`](../compiler_support/11.html#cpp_static_assert_200410L "cpp/compiler support/11") | (C++11) | [N1720](https://wg21.link/N1720)  
[Single-argument `static_assert`](../language/static_assert.html "cpp/language/static assert") | [`201411L`](../compiler_support/17.html#cpp_static_assert_201411L "cpp/compiler support/17") | (C++17) | [N3928](https://wg21.link/N3928)  
[User-generated `static_assert` messages](../language/static_assert.html "cpp/language/static assert") | [`202306L`](../compiler_support/26.html#cpp_static_assert_202306L "cpp/compiler support/26") | (C++26) | [P2741R3](https://wg21.link/P2741R3)  
`__cpp_static_call_operator` | Static [`operator()`](../language/operators.html "cpp/language/operators") | [`202207L`](../compiler_support/23.html#cpp_static_call_operator_202207L "cpp/compiler support/23") | (C++23) | [P1169R4](https://wg21.link/P1169R4)  
`__cpp_structured_bindings` | [Structured bindings](../language/structured_binding.html "cpp/language/structured binding") | [`201606L`](../compiler_support/17.html#cpp_structured_bindings_201606L "cpp/compiler support/17") | (C++17) | [P0217R3](https://wg21.link/P0217R3)  
[Attributes](../language/attributes.html "cpp/language/attributes") for [structured binding](../language/structured_binding.html "cpp/language/structured binding") | [`202403L`](../compiler_support/26.html#cpp_structured_bindings_202403L "cpp/compiler support/26") | (C++26) | [P0609R3](https://wg21.link/P0609R3)  
[Structured bindings](../language/structured_binding.html "cpp/language/structured binding") declaration [as a condition](https://en.cppreference.com/w/Template:cpp/language/condition "Template:cpp/language/condition") | [`202406L`](../compiler_support/26.html#cpp_structured_bindings_202406L "cpp/compiler support/26") | [P0963R3](https://wg21.link/P0963R3)  
[Structured bindings](../language/structured_binding.html "cpp/language/structured binding") can introduce a [pack](../language/parameter_pack.html "cpp/language/pack") | [`202411L`](../compiler_support/26.html#cpp_structured_bindings_202411L "cpp/compiler support/26") | [P1061R10](https://wg21.link/P1061R10)  
`__cpp_template_parameters` | Concept and variable-template template-parameters  | [`202502L`](../compiler_support/26.html#cpp_template_parameters_202502L "cpp/compiler support/26") | (C++26) | [P2841R7](https://wg21.link/P2841R7)  
`__cpp_template_template_args` | Matching of [template template arguments](../language/template_parameters.html#Template_template_arguments "cpp/language/template parameters") | [`201611L`](../compiler_support/17.html#cpp_template_template_args_201611L "cpp/compiler support/17") | (C++17) | [P0522R0](https://wg21.link/P0522R0)  
`__cpp_threadsafe_static_init` | [Dynamic initialization and destruction with concurrency](../language/storage_duration.html#Static_local_variables "cpp/language/storage duration") | [`200806L`](../compiler_support/11.html#cpp_threadsafe_static_init_200806L "cpp/compiler support/11") | (C++11) | [N2660](https://wg21.link/N2660)  
`__cpp_trivial_relocatability` | [Trivial relocatability](../language/class_property_specifiers.html#Trivial_relocatability "cpp/language/class property specifiers") | [`202502L`](../compiler_support/26.html#cpp_trivial_relocatability_202502L "cpp/compiler support/26") | (C++26) | [P2786R13](https://wg21.link/P2786R13)  
`__cpp_trivial_union` | Trivial unions  | [`202502L`](../compiler_support/26.html#cpp_trivial_union_202502L "cpp/compiler support/26") | (C++26) | [P3074R7](https://wg21.link/P3074R7)  
`__cpp_unicode_characters` | [New character types](../language/types.html "cpp/language/types") (char16_t and char32_t)  | [`200704L`](../compiler_support/11.html#cpp_unicode_characters_200704L "cpp/compiler support/11") | (C++11) | [N2249](https://wg21.link/N2249)  
`__cpp_unicode_literals` | [Unicode string literals](../language/string_literal.html "cpp/language/string literal") | [`200710L`](../compiler_support/11.html#cpp_unicode_literals_200710L "cpp/compiler support/11") | (C++11) | [N2442](https://wg21.link/N2442)  
`__cpp_user_defined_literals` | [User-defined literals](../language/user_literal.html "cpp/language/user literal") | [`200809L`](../compiler_support/11.html#cpp_user_defined_literals_200809L "cpp/compiler support/11") | (C++11) | [N2765](https://wg21.link/N2765)  
`__cpp_using_enum` | [`using enum`](../language/enum.html#Using-enum-declaration "cpp/language/enum") | [`201907L`](../compiler_support/20.html#cpp_using_enum_201907L "cpp/compiler support/20") | (C++20) | [P1099R5](https://wg21.link/P1099R5)  
`__cpp_variable_templates` | [Variable templates](../language/variable_template.html "cpp/language/variable template") | [`201304L`](../compiler_support/14.html#cpp_variable_templates_201304L "cpp/compiler support/14") | (C++14) | [N3651](https://wg21.link/N3651)  
`__cpp_variadic_friend` | Variadic [friend declarations](../language/friend.html "cpp/language/friend") | [`202403L`](../compiler_support/26.html#cpp_variadic_friend_202403L "cpp/compiler support/26") | (C++26) | [P2893R3](https://wg21.link/P2893R3)  
`__cpp_variadic_templates` | [Variadic templates](../language/parameter_pack.html "cpp/language/parameter pack") | [`200704L`](../compiler_support/11.html#cpp_variadic_templates_200704L "cpp/compiler support/11") | (C++11) | [N2242](https://wg21.link/N2242)  
`__cpp_variadic_using` | Pack expansions in [`using`-declarations](../language/using_declaration.html "cpp/language/using declaration") | [`201611L`](../compiler_support/17.html#cpp_variadic_using_201611L "cpp/compiler support/17") | (C++17) | [P0195R2](https://wg21.link/P0195R2)  
Total number of macros: 76   
  
### Library features

The following macros can be used to detect whether a standard library feature is implemented by the current implementation. Unlike the language feature test macros, they are not predefined. Instead, they are provided by the header [`<version>`](../header/version.html "cpp/header/version"). 

For each library feature test macro, it is also provided by the headers that provide the relevant standard library components. See [library feature test macros](../utility/feature_test.html "cpp/utility/feature test") for a complete list of headers providing these macros. 

Each macro expands to an integer literal corresponding to the year and month when the corresponding feature has been included in the working draft. When a feature changes significantly, the macro will be updated accordingly. 



Macro name  | Feature  | Value | Std | Paper(s)   
---|---|---|---|---  
`__cpp_lib_adaptor_iterator_pair_constructor` | Iterator pair constructors for [std::stack](../container/stack.html "cpp/container/stack") and [std::queue](../container/queue.html "cpp/container/queue") | [`202106L`](../compiler_support/23.html#cpp_lib_adaptor_iterator_pair_constructor_202106L "cpp/compiler support/23") | (C++23) | [P1425R4](https://wg21.link/P1425R4)  
`__cpp_lib_addressof_constexpr` | Constexpr [std::addressof](../memory/addressof.html "cpp/memory/addressof") | [`201603L`](../compiler_support/17.html#cpp_lib_addressof_constexpr_201603L "cpp/compiler support/17") | (C++17) | [LWG2296](https://wg21.link/LWG2296)  
`__cpp_lib_algorithm_default_value_type` | Enabling [list-initialization](../language/list_initialization.html "cpp/language/list initialization") for [algorithms](../algorithm.html "cpp/algorithm") | [`202403L`](../compiler_support/26.html#cpp_lib_algorithm_default_value_type_202403L "cpp/compiler support/26") | (C++26) | [P2248R8](https://wg21.link/P2248R8)  
[P3217R0](https://wg21.link/P3217R0)  
`__cpp_lib_algorithm_iterator_requirements` | Ranges iterators as inputs to non-Ranges [algorithms](../algorithm.html "cpp/algorithm") | [`202207L`](../compiler_support/23.html#cpp_lib_algorithm_iterator_requirements_202207L "cpp/compiler support/23") | (C++23) | [P2408R5](https://wg21.link/P2408R5)  
`__cpp_lib_aligned_accessor` | std::aligned_accessor: an std::mdspan accessor expressing pointer over-alignment  | [`202411L`](../compiler_support/26.html#cpp_lib_aligned_accessor_202411L "cpp/compiler support/26") | (C++26) | [P2897R7](https://wg21.link/P2897R7)  
`__cpp_lib_allocate_at_least` | Size-feedback in the allocator interface, e.g.: [`std::allocator::allocate_at_least`](../memory/allocator/allocate_at_least.html "cpp/memory/allocator/allocate at least"), [`std::allocator_traits::allocate_at_least`](../memory/allocator_traits/allocate_at_least.html "cpp/memory/allocator traits/allocate at least") | [`202302L`](../compiler_support/23.html#cpp_lib_allocate_at_least_202302L "cpp/compiler support/23") | (C++23) | [P0401R6](https://wg21.link/P0401R6)  
[P2652R2](https://wg21.link/P2652R2)  
[LWG3887](https://wg21.link/LWG3887)  
`__cpp_lib_allocator_traits_is_always_equal` | [`std::allocator_traits::is_always_equal`](../memory/allocator_traits.html "cpp/memory/allocator traits"), noexcept cleanups  | [`201411L`](../compiler_support/17.html#cpp_lib_allocator_traits_is_always_equal_201411L "cpp/compiler support/17") | (C++17) | [N4258](https://wg21.link/N4258)  
`__cpp_lib_any` | [std::any](../utility/any.html "cpp/utility/any") | [`201606L`](../compiler_support/17.html#cpp_lib_any_201606L "cpp/compiler support/17") | (C++17) | [P0220R1](https://wg21.link/P0220R1)  
[P0032R3](https://wg21.link/P0032R3)  
`__cpp_lib_apply` | [std::apply](../utility/apply.html "cpp/utility/apply") | [`201603L`](../compiler_support/17.html#cpp_lib_apply_201603L "cpp/compiler support/17") | (C++17) | [P0220R1](https://wg21.link/P0220R1)  
`__cpp_lib_array_constexpr` | Constexpr for [std::reverse_iterator](../iterator/reverse_iterator.html "cpp/iterator/reverse iterator"), [std::move_iterator](../iterator/move_iterator.html "cpp/iterator/move iterator"), [std::array](../container/array.html "cpp/container/array") and [range access](../iterator.html#Range_access "cpp/iterator") | [`201603L`](../compiler_support/17.html#cpp_lib_array_constexpr_201603L "cpp/compiler support/17") | (C++17) | [P0031R0](https://wg21.link/P0031R0)  
[ConstexprIterator](../named_req/ConstexprIterator.html "cpp/named req/ConstexprIterator"); constexpr comparison for [std::array](../container/array.html "cpp/container/array"); misc constexpr bits ([std::array::fill](../container/array/fill.html "cpp/container/array/fill") et al.)  | [`201811L`](../compiler_support/20.html#cpp_lib_array_constexpr_201811L "cpp/compiler support/20") | (C++20) | [P0858R0](https://wg21.link/P0858R0)  
[LWG3257](https://wg21.link/LWG3257)  
[P1023R0](https://wg21.link/P1023R0)  
[P1032R1](https://wg21.link/P1032R1)  
`__cpp_lib_as_const` | [std::as_const](../utility/as_const.html "cpp/utility/as const") | [`201510L`](../compiler_support/17.html#cpp_lib_as_const_201510L "cpp/compiler support/17") | (C++17) | [P0007R1](https://wg21.link/P0007R1)  
`__cpp_lib_associative_heterogeneous_erasure` | Heterogeneous erasure in [associative containers](../container.html#Associative_containers "cpp/container") and [unordered associative containers](../container.html#Unordered_associative_containers "cpp/container") | [`202110L`](../compiler_support/23.html#cpp_lib_associative_heterogeneous_erasure_202110L "cpp/compiler support/23") | (C++23) | [P2077R3](https://wg21.link/P2077R3)  
`__cpp_lib_associative_heterogeneous_insertion` | Heterogeneous overloads for the remaining member functions in [ordered](../container.html#Associative_containers "cpp/container") and [unordered associative containers](../container.html#Unordered_associative_containers "cpp/container") | [`202306L`](../compiler_support/26.html#cpp_lib_associative_heterogeneous_insertion_202306L "cpp/compiler support/26") | (C++26) | [P2363R5](https://wg21.link/P2363R5)  
`__cpp_lib_assume_aligned` | [std::assume_aligned](../memory/assume_aligned.html "cpp/memory/assume aligned") | [`201811L`](../compiler_support/20.html#cpp_lib_assume_aligned_201811L "cpp/compiler support/20") | (C++20) | [P1007R3](https://wg21.link/P1007R3)  
`__cpp_lib_atomic_flag_test` | std::atomic_flag::test | [`201907L`](../compiler_support/20.html#cpp_lib_atomic_flag_test_201907L "cpp/compiler support/20") | (C++20) | [P1135R6](https://wg21.link/P1135R6)  
`__cpp_lib_atomic_float` | [Floating-point atomic](../atomic/atomic.html "cpp/atomic/atomic") | [`201711L`](../compiler_support/20.html#cpp_lib_atomic_float_201711L "cpp/compiler support/20") | (C++20) | [P0020R6](https://wg21.link/P0020R6)  
`__cpp_lib_atomic_is_always_lock_free` | Constexpr [`std::atomic<T>::is_always_lock_free`](../atomic/atomic/is_always_lock_free.html "cpp/atomic/atomic/is always lock free") | [`201603L`](../compiler_support/17.html#cpp_lib_atomic_is_always_lock_free_201603L "cpp/compiler support/17") | (C++17) | [P0152R1](https://wg21.link/P0152R1)  
`__cpp_lib_atomic_lock_free_type_aliases` | Atomic lockfree integral types ([std::atomic_signed_lock_free](../atomic/atomic.html "cpp/atomic/atomic"), [std::atomic_unsigned_lock_free](../atomic/atomic.html "cpp/atomic/atomic"))  | [`201907L`](../compiler_support/20.html#cpp_lib_atomic_lock_free_type_aliases_201907L "cpp/compiler support/20") | (C++20) | [P1135R6](https://wg21.link/P1135R6)  
`__cpp_lib_atomic_min_max` | Atomic minimum/maximum ([`std::atomic::fetch_min`](../atomic/atomic/fetch_min.html "cpp/atomic/atomic/fetch min"), [`std::atomic::fetch_max`](../atomic/atomic/fetch_max.html "cpp/atomic/atomic/fetch max"), etc)  | [`202403L`](../compiler_support/26.html#cpp_lib_atomic_min_max_202403L "cpp/compiler support/26") | (C++26) | [P0493R5](https://wg21.link/P0493R5)  
`__cpp_lib_atomic_ref` | [`std::atomic_ref`](../atomic/atomic_ref.html "cpp/atomic/atomic ref") | [`201806L`](../compiler_support/20.html#cpp_lib_atomic_ref_201806L "cpp/compiler support/20") | (C++20) | [P0019R8](https://wg21.link/P0019R8)  
[`std::atomic_ref::address()`](../atomic/atomic_ref/address.html "cpp/atomic/atomic ref/address") | [`202411L`](../compiler_support/26.html#cpp_lib_atomic_ref_202411L "cpp/compiler support/26") | (C++26) | [P2835R7](https://wg21.link/P2835R7)  
`__cpp_lib_atomic_shared_ptr` | [`std::atomic<std::shared_ptr>`](../memory/shared_ptr/atomic2.html "cpp/memory/shared ptr/atomic2") | [`201711L`](../compiler_support/20.html#cpp_lib_atomic_shared_ptr_201711L "cpp/compiler support/20") | (C++20) | [P0718R2](https://wg21.link/P0718R2)  
`__cpp_lib_atomic_value_initialization` | Fixing atomic initialization (value-initialize [std::atomic](../atomic/atomic.html "cpp/atomic/atomic") by default)  | [`201911L`](../compiler_support/20.html#cpp_lib_atomic_value_initialization_201911L "cpp/compiler support/20") | (C++20) | [P0883R2](https://wg21.link/P0883R2)  
`__cpp_lib_atomic_wait` | Efficient [std::atomic](../atomic/atomic.html "cpp/atomic/atomic") waiting  | [`201907L`](../compiler_support/20.html#cpp_lib_atomic_wait_201907L "cpp/compiler support/20") | (C++20) | [P1135R6](https://wg21.link/P1135R6)  
`__cpp_lib_barrier` | [`std::barrier`](../thread/barrier.html "cpp/thread/barrier") | [`201907L`](../compiler_support/20.html#cpp_lib_barrier_201907L "cpp/compiler support/20") | (C++20) | [P1135R6](https://wg21.link/P1135R6)  
[`std::barrier`](../thread/barrier.html "cpp/thread/barrier")'s phase completion guarantees  | [`202302L`](../compiler_support/23.html#cpp_lib_barrier_202302L "cpp/compiler support/23") | (C++23) | [P2588R3](https://wg21.link/P2588R3)  
`__cpp_lib_bind_back` | std::bind_back | [`202202L`](../compiler_support/23.html#cpp_lib_bind_back_202202L "cpp/compiler support/23") | (C++23) | [P2387R3](https://wg21.link/P2387R3)  
Allow passing callable objects as constant template arguments to std::bind_back | [`202306L`](../compiler_support/26.html#cpp_lib_bind_back_202306L "cpp/compiler support/26") | (C++26) | [P2714R1](https://wg21.link/P2714R1)  
`__cpp_lib_bind_front` | [`std::bind_front`](../utility/functional/bind_front.html "cpp/utility/functional/bind front") | [`201907L`](../compiler_support/20.html#cpp_lib_bind_front_201907L "cpp/compiler support/20") | (C++20) | [P0356R5](https://wg21.link/P0356R5)  
[P1651R0](https://wg21.link/P1651R0)  
Allow passing callable objects as constant template arguments to [std::bind_front](../utility/functional/bind_front.html "cpp/utility/functional/bind front") | [`202306L`](../compiler_support/26.html#cpp_lib_bind_front_202306L "cpp/compiler support/26") | (C++26) | [P2714R1](https://wg21.link/P2714R1)  
`__cpp_lib_bit_cast` | [`std::bit_cast`](../numeric/bit_cast.html "cpp/numeric/bit cast") | [`201806L`](../compiler_support/20.html#cpp_lib_bit_cast_201806L "cpp/compiler support/20") | (C++20) | [P0476R2](https://wg21.link/P0476R2)  
`__cpp_lib_bitops` | [Bit operations](../utility/bit.html "cpp/utility/bit") | [`201907L`](../compiler_support/20.html#cpp_lib_bitops_201907L "cpp/compiler support/20") | (C++20) | [P0553R4](https://wg21.link/P0553R4)  
`__cpp_lib_bitset` | Interfacing [std::bitset](../utility/bitset.html "cpp/utility/bitset") with [std::string_view](../string/basic_string_view.html "cpp/string/basic string view") | [`202306L`](../compiler_support/26.html#cpp_lib_bitset_202306L "cpp/compiler support/26") | (C++26) | [P2697R1](https://wg21.link/P2697R1)  
`__cpp_lib_bool_constant` | [std::bool_constant](../types/integral_constant.html "cpp/types/integral constant") | [`201505L`](../compiler_support/17.html#cpp_lib_bool_constant_201505L "cpp/compiler support/17") | (C++17) | [N4389](https://wg21.link/N4389)  
`__cpp_lib_bounded_array_traits` | [`std::is_bounded_array`](../types/is_bounded_array.html "cpp/types/is bounded array"), [`std::is_unbounded_array`](../types/is_unbounded_array.html "cpp/types/is unbounded array") | [`201902L`](../compiler_support/20.html#cpp_lib_bounded_array_traits_201902L "cpp/compiler support/20") | (C++20) | [P1357R1](https://wg21.link/P1357R1)  
`__cpp_lib_boyer_moore_searcher` | [Searchers](../functional.html#Searchers "cpp/utility/functional") | [`201603L`](../compiler_support/17.html#cpp_lib_boyer_moore_searcher_201603L "cpp/compiler support/17") | (C++17) | [P0220R1](https://wg21.link/P0220R1)  
`__cpp_lib_byte` | [`std::byte`](../types/byte.html "cpp/types/byte") | [`201603L`](../compiler_support/17.html#cpp_lib_byte_201603L "cpp/compiler support/17") | (C++17) | [P0298R3](https://wg21.link/P0298R3)  
`__cpp_lib_byteswap` | [`std::byteswap`](../numeric/byteswap.html "cpp/numeric/byteswap") | [`202110L`](../compiler_support/23.html#cpp_lib_byteswap_202110L "cpp/compiler support/23") | (C++23) | [P1272R4](https://wg21.link/P1272R4)  
`__cpp_lib_char8_t` | Library support for `[char8_t](../language/types.html#char8_t "cpp/language/types")` | [`201907L`](../compiler_support/20.html#cpp_lib_char8_t_201907L "cpp/compiler support/20") | (C++20) | [P0482R6](https://wg21.link/P0482R6)  
[P1423R3](https://wg21.link/P1423R3)  
`__cpp_lib_chrono` | Rounding functions for [std::chrono::duration](../chrono/duration.html "cpp/chrono/duration") and [std::chrono::time_point](../chrono/time_point.html "cpp/chrono/time point") | [`201510L`](../compiler_support/17.html#cpp_lib_chrono_201510L "cpp/compiler support/17") | (C++17) | [P0092R1](https://wg21.link/P0092R1)  
Constexpr for all the member functions of [std::chrono::duration](../chrono/duration.html "cpp/chrono/duration") and [std::chrono::time_point](../chrono/time_point.html "cpp/chrono/time point") | [`201611L`](../compiler_support/17.html#cpp_lib_chrono_201611L "cpp/compiler support/17") | [P0505R0](https://wg21.link/P0505R0)  
[Calendars](../chrono.html#Calendar "cpp/chrono") and [Time zones](../chrono.html#Time_zone "cpp/chrono") | [`201907L`](../compiler_support/20.html#cpp_lib_chrono_201907L "cpp/compiler support/20") | (C++20) | [P0355R7](https://wg21.link/P0355R7)  
[P1466R3](https://wg21.link/P1466R3)  
[Hashing](../utility/hash.html "cpp/utility/hash") support for [`std::chrono`](../chrono.html "cpp/chrono") value classes  | [`202306L`](../compiler_support/26.html#cpp_lib_chrono_202306L "cpp/compiler support/26") | (C++26) | [P2592R3](https://wg21.link/P2592R3)  
`__cpp_lib_chrono_udls` | [User-defined literals for time types](../chrono/duration.html#Literals "cpp/chrono/duration") | [`201304L`](../compiler_support/14.html#cpp_lib_chrono_udls_201304L "cpp/compiler support/14") | (C++14) | [N3642](https://wg21.link/N3642)  
`__cpp_lib_clamp` | [std::clamp](../algorithm/clamp.html "cpp/algorithm/clamp") | [`201603L`](../compiler_support/17.html#cpp_lib_clamp_201603L "cpp/compiler support/17") | (C++17) | [P0025R1](https://wg21.link/P0025R1)  
`__cpp_lib_common_reference` | Make std::common_reference_t of [std::reference_wrapper](../utility/functional/reference_wrapper.html "cpp/utility/functional/reference wrapper") a reference type  | [`202302L`](../compiler_support/23.html#cpp_lib_common_reference_202302L "cpp/compiler support/23") | (C++23) | [P2655R3](https://wg21.link/P2655R3)  
`__cpp_lib_common_reference_wrapper` | Make std::common_reference_t of [std::reference_wrapper](../utility/functional/reference_wrapper.html "cpp/utility/functional/reference wrapper") a reference type  | [`202302L`](../compiler_support/23.html#cpp_lib_common_reference_wrapper_202302L "cpp/compiler support/23") | (C++23) | [P2655R3](https://wg21.link/P2655R3)  
`__cpp_lib_complex_udls` | [User-defined Literals for `std::complex`](../numeric/complex/operator""i.html "cpp/numeric/complex/operator""i") | [`201309L`](../compiler_support/14.html#cpp_lib_complex_udls_201309L "cpp/compiler support/14") | (C++14) | [N3779](https://wg21.link/N3779)  
`__cpp_lib_concepts` | [Standard library concepts](../concepts.html "cpp/concepts") | [`202002L`](../compiler_support/20.html#cpp_lib_concepts_202002L "cpp/compiler support/20") | (C++20) | [P0898R3](https://wg21.link/P0898R3)  
[P1754R1](https://wg21.link/P1754R1)  
[P1964R2](https://wg21.link/P1964R2)  
Move-only types for [`equality_comparable_with`](../concepts/equality_comparable.html "cpp/concepts/equality comparable"), [`totally_ordered_with`](../concepts/totally_ordered.html "cpp/concepts/totally ordered"), and [`three_way_comparable_with`](../utility/compare/three_way_comparable.html "cpp/utility/compare/three way comparable") | [`202207L`](../compiler_support/23.html#cpp_lib_concepts_202207L "cpp/compiler support/23") | (C++23) | [P2404R3](https://wg21.link/P2404R3)  
`__cpp_lib_constexpr_algorithms` | Constexpr for [algorithms](../algorithm.html "cpp/algorithm") | [`201806L`](../compiler_support/20.html#cpp_lib_constexpr_algorithms_201806L "cpp/compiler support/20") | (C++20) | [P0202R3](https://wg21.link/P0202R3)  
[P0879R0](https://wg21.link/P0879R0)  
[LWG3256](https://wg21.link/LWG3256)  
[LWG3792](https://wg21.link/LWG3792)  
Constexpr stable sorting  | [`202306L`](../compiler_support/26.html#cpp_lib_constexpr_algorithms_202306L "cpp/compiler support/26") | (C++26) | [P2562R1](https://wg21.link/P2562R1)  
`__cpp_lib_constexpr_atomic` | constexpr [std::atomic](../atomic/atomic.html "cpp/atomic/atomic") and std::atomic_ref | [`202411L`](../compiler_support/26.html#cpp_lib_constexpr_atomic_202411L "cpp/compiler support/26") | (C++26) | [P3309R3](https://wg21.link/P3309R3)  
`__cpp_lib_constexpr_bitset` | A more constexpr [std::bitset](../utility/bitset.html "cpp/utility/bitset") | [`202207L`](../compiler_support/23.html#cpp_lib_constexpr_bitset_202207L "cpp/compiler support/23") | (C++23) | [P2417R2](https://wg21.link/P2417R2)  
`__cpp_lib_constexpr_charconv` | Constexpr for std::to_chars and std::from_chars for integral types  | [`202207L`](../compiler_support/23.html#cpp_lib_constexpr_charconv_202207L "cpp/compiler support/23") | (C++23) | [P2291R3](https://wg21.link/P2291R3)  
`__cpp_lib_constexpr_cmath` | Constexpr for mathematical functions in [`<cmath>`](../header/cmath.html "cpp/header/cmath") and [`<cstdlib>`](../header/cstdlib.html "cpp/header/cstdlib") | [`202202L`](../compiler_support/23.html#cpp_lib_constexpr_cmath_202202L "cpp/compiler support/23") | (C++23) | [P0533R9](https://wg21.link/P0533R9)  
More constexpr for [`<cmath>`](../header/cmath.html "cpp/header/cmath") | [`202306L`](../compiler_support/26.html#cpp_lib_constexpr_cmath_202306L "cpp/compiler support/26") | (C++26) | [P1383R2](https://wg21.link/P1383R2)  
`__cpp_lib_constexpr_complex` | Constexpr for [std::complex](../numeric/complex.html "cpp/numeric/complex") | [`201711L`](../compiler_support/20.html#cpp_lib_constexpr_complex_201711L "cpp/compiler support/20") | (C++20) | [P0415R1](https://wg21.link/P0415R1)  
More constexpr for [`<complex>`](../header/complex.html "cpp/header/complex") | [`202306L`](../compiler_support/26.html#cpp_lib_constexpr_complex_202306L "cpp/compiler support/26") | (C++26) | [P1383R2](https://wg21.link/P1383R2)  
`__cpp_lib_constexpr_deque` | constexpr [std::deque](../container/deque.html "cpp/container/deque") | [`202502L`](../compiler_support/26.html#cpp_lib_constexpr_deque_202502L "cpp/compiler support/26") | (C++26) | [P3372R3](https://wg21.link/P3372R3)  
`__cpp_lib_constexpr_dynamic_alloc` | Constexpr for [std::allocator](../memory/allocator.html "cpp/memory/allocator") and related utilities  | [`201907L`](../compiler_support/20.html#cpp_lib_constexpr_dynamic_alloc_201907L "cpp/compiler support/20") | (C++20) | [P0784R7](https://wg21.link/P0784R7)  
`__cpp_lib_constexpr_exceptions` | constexpr for exception types, e.g. [std::bad_alloc](../memory/new/bad_alloc.html "cpp/memory/new/bad alloc"), [std::bad_cast](../types/bad_cast.html "cpp/types/bad cast") etc.  | [`202411L`](../compiler_support/26.html#cpp_lib_constexpr_exceptions_202411L "cpp/compiler support/26") | (C++26) | [P3068R6](https://wg21.link/P3068R6)  
More constexpr for exception types  | [`202502L`](../compiler_support/26.html#cpp_lib_constexpr_exceptions_202502L "cpp/compiler support/26") | [P3378R2](https://wg21.link/P3378R2)  
`__cpp_lib_constexpr_flat_map` | constexpr std::flat_map and std::flat_multimap | [`202502L`](../compiler_support/26.html#cpp_lib_constexpr_flat_map_202502L "cpp/compiler support/26") | (C++26) | [P3372R3](https://wg21.link/P3372R3)  
`__cpp_lib_constexpr_flat_set` | constexpr std::flat_set and std::flat_multiset | [`202502L`](../compiler_support/26.html#cpp_lib_constexpr_flat_set_202502L "cpp/compiler support/26") | (C++26) | [P3372R3](https://wg21.link/P3372R3)  
`__cpp_lib_constexpr_forward_list` | constexpr [std::forward_list](../container/forward_list.html "cpp/container/forward list") | [`202502L`](../compiler_support/26.html#cpp_lib_constexpr_forward_list_202502L "cpp/compiler support/26") | (C++26) | [P3372R3](https://wg21.link/P3372R3)  
`__cpp_lib_constexpr_functional` | Misc constexpr bits ([std::default_searcher](../utility/functional/default_searcher.html "cpp/utility/functional/default searcher")); constexpr `INVOKE` | [`201907L`](../compiler_support/20.html#cpp_lib_constexpr_functional_201907L "cpp/compiler support/20") | (C++20) | [P1032R1](https://wg21.link/P1032R1)  
[P1065R2](https://wg21.link/P1065R2)  
`__cpp_lib_constexpr_inplace_vector` | constexpr std::inplace_vector for non-trivial types  | [`202502L`](../compiler_support/26.html#cpp_lib_constexpr_inplace_vector_202502L "cpp/compiler support/26") | (C++26) | [P3074R7](https://wg21.link/P3074R7)  
`__cpp_lib_constexpr_iterator` | Misc constexpr bits ([std::insert_iterator](../iterator/insert_iterator.html "cpp/iterator/insert iterator") et al.)  | [`201811L`](../compiler_support/20.html#cpp_lib_constexpr_iterator_201811L "cpp/compiler support/20") | (C++20) | [P1032R1](https://wg21.link/P1032R1)  
`__cpp_lib_constexpr_list` | constexpr [std::list](../container/list.html "cpp/container/list") | [`202502L`](../compiler_support/26.html#cpp_lib_constexpr_list_202502L "cpp/compiler support/26") | (C++26) | [P3372R3](https://wg21.link/P3372R3)  
`__cpp_lib_constexpr_map` | constexpr [std::map](../container/map.html "cpp/container/map") and [std::multimap](../container/multimap.html "cpp/container/multimap") | [`202502L`](../compiler_support/26.html#cpp_lib_constexpr_map_202502L "cpp/compiler support/26") | (C++26) | [P3372R3](https://wg21.link/P3372R3)  
`__cpp_lib_constexpr_memory` | Constexpr in [std::pointer_traits](../memory/pointer_traits.html "cpp/memory/pointer traits") | [`201811L`](../compiler_support/20.html#cpp_lib_constexpr_memory_201811L "cpp/compiler support/20") | (C++20) | [P1006R1](https://wg21.link/P1006R1)  
Constexpr [std::unique_ptr](../memory/unique_ptr.html "cpp/memory/unique ptr") | [`202202L`](../compiler_support/23.html#cpp_lib_constexpr_memory_202202L "cpp/compiler support/23") | (C++23) | [P2273R3](https://wg21.link/P2273R3)  
`__cpp_lib_constexpr_new` | Constexpr [placement new](../language/new.html#Placement_new "cpp/language/new") | [`202406L`](../compiler_support/26.html#cpp_lib_constexpr_new_202406L "cpp/compiler support/26") | (C++26) | [P2747R2](https://wg21.link/P2747R2)  
`__cpp_lib_constexpr_numeric` | Constexpr for [algorithms](../algorithm.html#Numeric_operations "cpp/algorithm") in [`<numeric>`](../header/numeric.html "cpp/header/numeric") | [`201911L`](../compiler_support/20.html#cpp_lib_constexpr_numeric_201911L "cpp/compiler support/20") | (C++20) | [P1645R1](https://wg21.link/P1645R1)  
`__cpp_lib_constexpr_queue` | constexpr [std::queue](../container/queue.html "cpp/container/queue") | [`202502L`](../compiler_support/26.html#cpp_lib_constexpr_queue_202502L "cpp/compiler support/26") | (C++26) | [P3372R3](https://wg21.link/P3372R3)  
`__cpp_lib_constexpr_set` | constexpr [std::set](../container/set.html "cpp/container/set") and [std::multiset](../container/multiset.html "cpp/container/multiset") | [`202502L`](../compiler_support/26.html#cpp_lib_constexpr_set_202502L "cpp/compiler support/26") | (C++26) | [P3372R3](https://wg21.link/P3372R3)  
`__cpp_lib_constexpr_stack` | constexpr [std::stack](../container/stack.html "cpp/container/stack") | [`202502L`](../compiler_support/26.html#cpp_lib_constexpr_stack_202502L "cpp/compiler support/26") | (C++26) | [P3372R3](https://wg21.link/P3372R3)  
`__cpp_lib_constexpr_string` | constexpr [std::char_traits](../string/char_traits.html "cpp/string/char traits") | [`201611L`](../compiler_support/17.html#cpp_lib_constexpr_string_201611L "cpp/compiler support/17") | (C++17) | [P0426R1](https://wg21.link/P0426R1)  
constexpr [std::string](../string/basic_string.html "cpp/string/basic string") | [`201907L`](../compiler_support/20.html#cpp_lib_constexpr_string_201907L "cpp/compiler support/20") | (C++20) | [P0980R1](https://wg21.link/P0980R1)  
`__cpp_lib_constexpr_string_view` | Misc constexpr bits ([std::string_view::copy](../string/basic_string_view/copy.html "cpp/string/basic string view/copy"))  | [`201811L`](../compiler_support/20.html#cpp_lib_constexpr_string_view_201811L "cpp/compiler support/20") | (C++20) | [P1032R1](https://wg21.link/P1032R1)  
`__cpp_lib_constexpr_tuple` | Misc constexpr bits ([std::tuple::operator=](../utility/tuple/operator=.html "cpp/utility/tuple/operator=") et al.)  | [`201811L`](../compiler_support/20.html#cpp_lib_constexpr_tuple_201811L "cpp/compiler support/20") | (C++20) | [P1032R1](https://wg21.link/P1032R1)  
`__cpp_lib_constexpr_typeinfo` | Constexpr for [std::type_info::operator==](../types/type_info/operator_cmp.html "cpp/types/type info/operator cmp") | [`202106L`](../compiler_support/23.html#cpp_lib_constexpr_typeinfo_202106L "cpp/compiler support/23") | (C++23) | [P1328R1](https://wg21.link/P1328R1)  
`__cpp_lib_constexpr_unordered_map` | constexpr [std::unordered_map](../container/unordered_map.html "cpp/container/unordered map") and [std::unordered_multimap](../container/unordered_multimap.html "cpp/container/unordered multimap") | [`202502L`](../compiler_support/26.html#cpp_lib_constexpr_unordered_map_202502L "cpp/compiler support/26") | (C++26) | [P3372R3](https://wg21.link/P3372R3)  
`__cpp_lib_constexpr_unordered_set` | constexpr [std::unordered_set](../container/unordered_set.html "cpp/container/unordered set") and [std::unordered_multiset](../container/unordered_multiset.html "cpp/container/unordered multiset") | [`202502L`](../compiler_support/26.html#cpp_lib_constexpr_unordered_set_202502L "cpp/compiler support/26") | (C++26) | [P3372R3](https://wg21.link/P3372R3)  
`__cpp_lib_constexpr_utility` | Misc constexpr bits ([std::pair::operator=](../utility/pair/operator=.html "cpp/utility/pair/operator=") et al.)  | [`201811L`](../compiler_support/20.html#cpp_lib_constexpr_utility_201811L "cpp/compiler support/20") | (C++20) | [P1032R1](https://wg21.link/P1032R1)  
`__cpp_lib_constexpr_vector` | Constexpr for [std::vector](../container/vector.html "cpp/container/vector") | [`201907L`](../compiler_support/20.html#cpp_lib_constexpr_vector_201907L "cpp/compiler support/20") | (C++20) | [P1004R2](https://wg21.link/P1004R2)  
`__cpp_lib_constrained_equality` | Constrained relational operators for [`std::pair`](../utility/pair/operator_cmp.html "cpp/utility/pair/operator cmp"), [`std::tuple`](../utility/tuple/operator_cmp.html "cpp/utility/tuple/operator cmp"), [`std::optional`](../utility/optional/operator_cmp.html "cpp/utility/optional/operator cmp"), and [`std::variant`](../utility/variant/operator_cmp.html "cpp/utility/variant/operator cmp") | [`202403L`](../compiler_support/26.html#cpp_lib_constrained_equality_202403L "cpp/compiler support/26") | (C++26) | [P2944R3](https://wg21.link/P2944R3)  
Constraining std::expected [equality operators](../utility/expected/operator_cmp.html "cpp/utility/expected/operator cmp") | [`202411L`](../compiler_support/26.html#cpp_lib_constrained_equality_202411L "cpp/compiler support/26") | [P3379R0](https://wg21.link/P3379R0)  
`__cpp_lib_containers_ranges` | [Ranges-aware](../ranges/to.html#container_compatible_range "cpp/ranges/to") construction and insertion for containers and strings  | [`202202L`](../compiler_support/23.html#cpp_lib_containers_ranges_202202L "cpp/compiler support/23") | (C++23) | [P1206R7](https://wg21.link/P1206R7)  
`__cpp_lib_contracts` | [`<contracts>`](../header/contracts.html "cpp/header/contracts"): Contracts support  | [`202502L`](../compiler_support/26.html#cpp_lib_contracts_202502L "cpp/compiler support/26") | (C++26) | [P2900R14](https://wg21.link/P2900R14)  
`__cpp_lib_copyable_function` | std::copyable_function | [`202306L`](../compiler_support/26.html#cpp_lib_copyable_function_202306L "cpp/compiler support/26") | (C++26) | [P2548R6](https://wg21.link/P2548R6)  
`__cpp_lib_coroutine` | [Coroutines](../language/coroutines.html "cpp/language/coroutines") (library support)  | [`201902L`](../compiler_support/20.html#cpp_lib_coroutine_201902L "cpp/compiler support/20") | (C++20) | [P0912R5](https://wg21.link/P0912R5)  
[LWG3393](https://wg21.link/LWG3393)  
`__cpp_lib_debugging` | [`<debugging>`](../header/debugging.html "cpp/header/debugging"): [Debugging support](../utility.html#Debugging_support "cpp/utility") | [`202311L`](../compiler_support/26.html#cpp_lib_debugging_202311L "cpp/compiler support/26") | (C++26) | [P2546R5](https://wg21.link/P2546R5)  
Replaceable [`std::is_debugger_present`](../utility/is_debugger_present.html "cpp/utility/is debugger present") | [`202403L`](../compiler_support/26.html#cpp_lib_debugging_202403L "cpp/compiler support/26") | [P2810R4](https://wg21.link/P2810R4)  
`__cpp_lib_destroying_delete` | Destroying [[operator delete](../memory/new/operator_delete.html)](../memory/new/operator_delete.html "cpp/memory/new/operator delete") (library support)  | [`201806L`](../compiler_support/20.html#cpp_lib_destroying_delete_201806L "cpp/compiler support/20") | (C++20) | [P0722R3](https://wg21.link/P0722R3)  
`__cpp_lib_enable_shared_from_this` | [std::enable_shared_from_this::weak_from_this](../memory/enable_shared_from_this/weak_from_this.html "cpp/memory/enable shared from this/weak from this") | [`201603L`](../compiler_support/17.html#cpp_lib_enable_shared_from_this_201603L "cpp/compiler support/17") | (C++17) | [P0033R1](https://wg21.link/P0033R1)  
`__cpp_lib_endian` | std::endian | [`201907L`](../compiler_support/20.html#cpp_lib_endian_201907L "cpp/compiler support/20") | (C++20) | [P0463R1](https://wg21.link/P0463R1)  
[P1612R1](https://wg21.link/P1612R1)  
`__cpp_lib_erase_if` | Uniform container erasure  | [`202002L`](../compiler_support/20.html#cpp_lib_erase_if_202002L "cpp/compiler support/20") | (C++20) | [P1209R0](https://wg21.link/P1209R0)  
[P1115R3](https://wg21.link/P1115R3)  
`__cpp_lib_exchange_function` | [std::exchange](../utility/exchange.html "cpp/utility/exchange") | [`201304L`](../compiler_support/14.html#cpp_lib_exchange_function_201304L "cpp/compiler support/14") | (C++14) | [N3668](https://wg21.link/N3668)  
`__cpp_lib_execution` | [Execution policies](../algorithm.html#Execution_policies "cpp/algorithm") | [`201603L`](../compiler_support/17.html#cpp_lib_execution_201603L "cpp/compiler support/17") | (C++17) | [P0024R2](https://wg21.link/P0024R2)  
[`std::execution::unsequenced_policy`](../algorithm/execution_policy_tag_t.html "cpp/algorithm/execution policy tag t") | [`201902L`](../compiler_support/20.html#cpp_lib_execution_201902L "cpp/compiler support/20") | (C++20) | [P1001R2](https://wg21.link/P1001R2)  
`__cpp_lib_expected` | class template std::expected | [`202202L`](../compiler_support/23.html#cpp_lib_expected_202202L "cpp/compiler support/23") | (C++23) | [P0323R12](https://wg21.link/P0323R12)  
Monadic functions for std::expected | [`202211L`](../compiler_support/23.html#cpp_lib_expected_202211L "cpp/compiler support/23") | [P2505R5](https://wg21.link/P2505R5)  
`__cpp_lib_filesystem` | [Filesystem library](../filesystem.html "cpp/filesystem") | [`201703L`](../compiler_support/17.html#cpp_lib_filesystem_201703L "cpp/compiler support/17") | (C++17) | [P0218R1](https://wg21.link/P0218R1)  
[P0219R1](https://wg21.link/P0219R1)  
[P0392R0](https://wg21.link/P0392R0)  
[P0317R1](https://wg21.link/P0317R1)  
`__cpp_lib_flat_map` | [`std::flat_map`](../container/flat_map.html "cpp/container/flat map") and [`std::flat_multimap`](../container/flat_multimap.html "cpp/container/flat multimap") | [`202207L`](../compiler_support/23.html#cpp_lib_flat_map_202207L "cpp/compiler support/23") | (C++23) | [P0429R9](https://wg21.link/P0429R9)  
`__cpp_lib_flat_set` | [`std::flat_set`](../container/flat_set.html "cpp/container/flat set") and [`std::flat_multiset`](../container/flat_multiset.html "cpp/container/flat multiset") | [`202207L`](../compiler_support/23.html#cpp_lib_flat_set_202207L "cpp/compiler support/23") | (C++23) | [P1222R4](https://wg21.link/P1222R4)  
[LWG3751](https://wg21.link/LWG3751)  
`__cpp_lib_format` | [Text formatting](../utility/format.html "cpp/utility/format") | [`201907L`](../compiler_support/20.html#cpp_lib_format_201907L "cpp/compiler support/20") | (C++20) | [P0645R10](https://wg21.link/P0645R10)  
[P1361R2](https://wg21.link/P1361R2)  
[P1652R1](https://wg21.link/P1652R1)  
Compile-time format string checks; Reducing parameterization of [std::vformat_to](../utility/format/vformat_to.html "cpp/utility/format/vformat to") | [`202106L`](../compiler_support/23.html#cpp_lib_format_202106L "cpp/compiler support/23") | (C++23)  
(DR20) | [P2216R3](https://wg21.link/P2216R3)  
Fixing locale handling in chrono formatters; Supporting non-const-formattable types  | [`202110L`](../compiler_support/23.html#cpp_lib_format_202110L "cpp/compiler support/23") | [P2372R3](https://wg21.link/P2372R3)  
[P2418R2](https://wg21.link/P2418R2)  
Exposing [`std::basic_format_string`](../utility/format/basic_format_string.html "cpp/utility/format/basic format string"); clarify handling of encodings in localized formatting of chrono types  | [`202207L`](../compiler_support/23.html#cpp_lib_format_202207L "cpp/compiler support/23") | (C++23) | [P2419R2](https://wg21.link/P2419R2)  
[P2508R1](https://wg21.link/P2508R1)  
Formatting pointers  | [`202304L`](../compiler_support/26.html#cpp_lib_format_202304L "cpp/compiler support/26") | (C++26) | [P2510R3](https://wg21.link/P2510R3)  
Type-checking format args  | [`202305L`](../compiler_support/26.html#cpp_lib_format_202305L "cpp/compiler support/26") | [P2757R3](https://wg21.link/P2757R3)  
Member [`visit`](../utility/format/basic_format_arg.html "cpp/utility/format/basic format arg") | [`202306L`](../compiler_support/26.html#cpp_lib_format_202306L "cpp/compiler support/26") | [P2637R3](https://wg21.link/P2637R3)  
[Runtime format strings](../utility/format/runtime_format.html "cpp/utility/format/runtime format") | [`202311L`](../compiler_support/26.html#cpp_lib_format_202311L "cpp/compiler support/26") | [P2918R2](https://wg21.link/P2918R2)  
`__cpp_lib_format_path` | Formatting of [std::filesystem::path](../filesystem/path.html "cpp/filesystem/path") | [`202403L`](../compiler_support/26.html#cpp_lib_format_path_202403L "cpp/compiler support/26") | (C++26) | [P2845R8](https://wg21.link/P2845R8)  
`__cpp_lib_format_ranges` | Formatting ranges  | [`202207L`](../compiler_support/23.html#cpp_lib_format_ranges_202207L "cpp/compiler support/23") | (C++23) | [P2286R8](https://wg21.link/P2286R8)  
[P2585R1](https://wg21.link/P2585R1)  
[LWG3750](https://wg21.link/LWG3750)  
`__cpp_lib_format_uchar` | Fix formatting of code units as integers  | [`202311L`](../compiler_support/26.html#cpp_lib_format_uchar_202311L "cpp/compiler support/26") | (C++26) | [P2909R4](https://wg21.link/P2909R4)  
`__cpp_lib_formatters` | Formatting [std::thread::id](../thread/thread/id.html "cpp/thread/thread/id") and [`std::stacktrace`](../utility/basic_stacktrace.html "cpp/utility/basic stacktrace") | [`202302L`](../compiler_support/23.html#cpp_lib_formatters_202302L "cpp/compiler support/23") | (C++23) | [P2693R1](https://wg21.link/P2693R1)  
`__cpp_lib_forward_like` | [`std::forward_like`](../utility/forward_like.html "cpp/utility/forward like") | [`202207L`](../compiler_support/23.html#cpp_lib_forward_like_202207L "cpp/compiler support/23") | (C++23) | [P2445R1](https://wg21.link/P2445R1)  
`__cpp_lib_freestanding_algorithm` | Freestanding facilities in [`<algorithm>`](../header/algorithm.html "cpp/header/algorithm") | [`202311L`](../compiler_support/26.html#cpp_lib_freestanding_algorithm_202311L "cpp/compiler support/26") | (C++26) | [P2407R5](https://wg21.link/P2407R5)  
Freestanding library: [`<algorithm>`](../header/algorithm.html "cpp/header/algorithm") | [`202502L`](../compiler_support/26.html#cpp_lib_freestanding_algorithm_202502L "cpp/compiler support/26") | [P2976R1](https://wg21.link/P2976R1)  
`__cpp_lib_freestanding_array` | Make parts of [std::array](../container/array.html "cpp/container/array") freestanding  | [`202311L`](../compiler_support/26.html#cpp_lib_freestanding_array_202311L "cpp/compiler support/26") | (C++26) | [P2407R5](https://wg21.link/P2407R5)  
`__cpp_lib_freestanding_char_traits` | Freestanding [std::char_traits](../string/char_traits.html "cpp/string/char traits") | [`202306L`](../compiler_support/26.html#cpp_lib_freestanding_char_traits_202306L "cpp/compiler support/26") | (C++26) | [P2338R4](https://wg21.link/P2338R4)  
`__cpp_lib_freestanding_charconv` | Freestanding facilities in [`<charconv>`](../header/charconv.html "cpp/header/charconv") | [`202306L`](../compiler_support/26.html#cpp_lib_freestanding_charconv_202306L "cpp/compiler support/26") | (C++26) | [P2338R4](https://wg21.link/P2338R4)  
`__cpp_lib_freestanding_cstdlib` | Freestanding facilities in [`<cstdlib>`](../header/cstdlib.html "cpp/header/cstdlib") | [`202306L`](../compiler_support/26.html#cpp_lib_freestanding_cstdlib_202306L "cpp/compiler support/26") | (C++26) | [P2338R4](https://wg21.link/P2338R4)  
`__cpp_lib_freestanding_cstring` | Freestanding facilities in [`<cstring>`](../header/cstring.html "cpp/header/cstring") | [`202306L`](../compiler_support/26.html#cpp_lib_freestanding_cstring_202306L "cpp/compiler support/26") | (C++26) | [P2338R4](https://wg21.link/P2338R4)  
Removing [std::strtok](../string/byte/strtok.html "cpp/string/byte/strtok") from freestanding facilities  | [`202311L`](../compiler_support/26.html#cpp_lib_freestanding_cstring_202311L "cpp/compiler support/26") | [P2937R0](https://wg21.link/P2937R0)  
`__cpp_lib_freestanding_cwchar` | Freestanding facilities in [`<cwchar>`](../header/cwchar.html "cpp/header/cwchar") | [`202306L`](../compiler_support/26.html#cpp_lib_freestanding_cwchar_202306L "cpp/compiler support/26") | (C++26) | [P2338R4](https://wg21.link/P2338R4)  
`__cpp_lib_freestanding_errc` | Freestanding [std::errc](../error/errc.html "cpp/error/errc") | [`202306L`](../compiler_support/26.html#cpp_lib_freestanding_errc_202306L "cpp/compiler support/26") | (C++26) | [P2338R4](https://wg21.link/P2338R4)  
`__cpp_lib_freestanding_execution` | Freestanding library: [`<execution>`](../header/execution.html "cpp/header/execution") | [`202502L`](../compiler_support/26.html#cpp_lib_freestanding_execution_202502L "cpp/compiler support/26") | (C++26) | [P2976R1](https://wg21.link/P2976R1)  
`__cpp_lib_freestanding_expected` | Make parts of std::expected freestanding  | [`202311L`](../compiler_support/26.html#cpp_lib_freestanding_expected_202311L "cpp/compiler support/26") | (C++26) | [P2833R2](https://wg21.link/P2833R2)  
`__cpp_lib_freestanding_feature_test_macros` | Support for freestanding feature-test macros  | [`202306L`](../compiler_support/26.html#cpp_lib_freestanding_feature_test_macros_202306L "cpp/compiler support/26") | (C++26) | [P2198R7](https://wg21.link/P2198R7)  
`__cpp_lib_freestanding_functional` | Freestanding facilities in [`<functional>`](../header/functional.html "cpp/header/functional") | [`202306L`](../compiler_support/26.html#cpp_lib_freestanding_functional_202306L "cpp/compiler support/26") | (C++26) | [P2198R7](https://wg21.link/P2198R7)  
`__cpp_lib_freestanding_iterator` | Freestanding facilities in [`<iterator>`](../header/iterator.html "cpp/header/iterator") | [`202306L`](../compiler_support/26.html#cpp_lib_freestanding_iterator_202306L "cpp/compiler support/26") | (C++26) | [P2198R7](https://wg21.link/P2198R7)  
`__cpp_lib_freestanding_mdspan` | Freestanding std::mdspan | [`202311L`](../compiler_support/26.html#cpp_lib_freestanding_mdspan_202311L "cpp/compiler support/26") | (C++26) | [P2833R2](https://wg21.link/P2833R2)  
`__cpp_lib_freestanding_memory` | Freestanding facilities in [`<memory>`](../header/memory.html "cpp/header/memory") | [`202306L`](../compiler_support/26.html#cpp_lib_freestanding_memory_202306L "cpp/compiler support/26") | (C++26) | [P2198R7](https://wg21.link/P2198R7)  
Freestanding Library: [`<memory>`](../header/memory.html "cpp/header/memory") | [`202502L`](../compiler_support/26.html#cpp_lib_freestanding_memory_202502L "cpp/compiler support/26") | [P2976R1](https://wg21.link/P2976R1)  
`__cpp_lib_freestanding_numeric` | Freestanding facilities in [`<numeric>`](../header/numeric.html "cpp/header/numeric") (saturation arithmetic)  | [`202311L`](../compiler_support/26.html#cpp_lib_freestanding_numeric_202311L "cpp/compiler support/26") | (C++26) | [P0543R3](https://wg21.link/P0543R3)  
Freestanding library: [`<numeric>`](../header/numeric.html "cpp/header/numeric") | [`202502L`](../compiler_support/26.html#cpp_lib_freestanding_numeric_202502L "cpp/compiler support/26") | [P2976R1](https://wg21.link/P2976R1)  
`__cpp_lib_freestanding_operator_new` | Definition of [operator new](../memory/new/operator_new.html "cpp/memory/new/operator new") (optional in freestanding implementations)  | [`202306L`](../compiler_support/26.html#cpp_lib_freestanding_operator_new_202306L "cpp/compiler support/26") | (C++26) | [P2198R7](https://wg21.link/P2198R7)  
`__cpp_lib_freestanding_optional` | Making parts of [std::optional](../utility/optional.html "cpp/utility/optional") freestanding  | [`202311L`](../compiler_support/26.html#cpp_lib_freestanding_optional_202311L "cpp/compiler support/26") | (C++26) | [P2407R5](https://wg21.link/P2407R5)  
`__cpp_lib_freestanding_random` | Freestanding library: [`<random>`](../header/random.html "cpp/header/random") | [`202502L`](../compiler_support/26.html#cpp_lib_freestanding_random_202502L "cpp/compiler support/26") | (C++26) | [P2976R1](https://wg21.link/P2976R1)  
`__cpp_lib_freestanding_ranges` | Freestanding facilities in [`<ranges>`](../header/ranges.html "cpp/header/ranges") | [`202306L`](../compiler_support/26.html#cpp_lib_freestanding_ranges_202306L "cpp/compiler support/26") | (C++26) | [P2198R7](https://wg21.link/P2198R7)  
`__cpp_lib_freestanding_ratio` | Freestanding facilities in [`<ratio>`](../header/ratio.html "cpp/header/ratio") | [`202306L`](../compiler_support/26.html#cpp_lib_freestanding_ratio_202306L "cpp/compiler support/26") | (C++26) | [P2198R7](https://wg21.link/P2198R7)  
`__cpp_lib_freestanding_string_view` | Making parts of [std::string_view](../string/basic_string_view.html "cpp/string/basic string view") freestanding  | [`202311L`](../compiler_support/26.html#cpp_lib_freestanding_string_view_202311L "cpp/compiler support/26") | (C++26) | [P2407R5](https://wg21.link/P2407R5)  
`__cpp_lib_freestanding_tuple` | Freestanding facilities in [`<tuple>`](../header/tuple.html "cpp/header/tuple") | [`202306L`](../compiler_support/26.html#cpp_lib_freestanding_tuple_202306L "cpp/compiler support/26") | (C++26) | [P2198R7](https://wg21.link/P2198R7)  
`__cpp_lib_freestanding_utility` | Freestanding facilities in [`<utility>`](../header/utility.html "cpp/header/utility") | [`202306L`](../compiler_support/26.html#cpp_lib_freestanding_utility_202306L "cpp/compiler support/26") | (C++26) | [P2198R7](https://wg21.link/P2198R7)  
`__cpp_lib_freestanding_variant` | Making parts of [std::variant](../utility/variant.html "cpp/utility/variant") freestanding  | [`202311L`](../compiler_support/26.html#cpp_lib_freestanding_variant_202311L "cpp/compiler support/26") | (C++26) | [P2407R5](https://wg21.link/P2407R5)  
`__cpp_lib_fstream_native_handle` | Obtaining native handles from file streams  | [`202306L`](../compiler_support/26.html#cpp_lib_fstream_native_handle_202306L "cpp/compiler support/26") | (C++26) | [P1759R6](https://wg21.link/P1759R6)  
`__cpp_lib_function_ref` | std::function_ref: A type-erased callable reference  | [`202306L`](../compiler_support/26.html#cpp_lib_function_ref_202306L "cpp/compiler support/26") | (C++26) | [P0792R14](https://wg21.link/P0792R14)  
`__cpp_lib_gcd_lcm` | [std::gcd](../numeric/gcd.html "cpp/numeric/gcd"), [std::lcm](../numeric/lcm.html "cpp/numeric/lcm") | [`201606L`](../compiler_support/17.html#cpp_lib_gcd_lcm_201606L "cpp/compiler support/17") | (C++17) | [P0295R0](https://wg21.link/P0295R0)  
`__cpp_lib_generator` | std::generator: Synchronous coroutine generator for ranges  | [`202207L`](../compiler_support/23.html#cpp_lib_generator_202207L "cpp/compiler support/23") | (C++23) | [P2502R2](https://wg21.link/P2502R2)  
`__cpp_lib_generic_associative_lookup` | Heterogeneous comparison lookup in [associative containers](../container.html#Associative_containers "cpp/container") | [`201304L`](../compiler_support/14.html#cpp_lib_generic_associative_lookup_201304L "cpp/compiler support/14") | (C++14) | [N3657](https://wg21.link/N3657)  
`__cpp_lib_generic_unordered_lookup` | Heterogeneous comparison lookup in [unordered associative containers](../container.html#Unordered_associative_containers "cpp/container") | [`201811L`](../compiler_support/20.html#cpp_lib_generic_unordered_lookup_201811L "cpp/compiler support/20") | (C++20) | [P0919R3](https://wg21.link/P0919R3)  
`__cpp_lib_hardened_array` | Standard library hardening (present only in hardened implementation) | [`202502L`](../compiler_support/26.html#cpp_lib_hardened_array_202502L "cpp/compiler support/26") | (C++26) | [P3471R4](https://wg21.link/P3471R4)  
`__cpp_lib_hardened_basic_string` | Standard library hardening (present only in hardened implementation) | [`202502L`](../compiler_support/26.html#cpp_lib_hardened_basic_string_202502L "cpp/compiler support/26") | (C++26) | [P3471R4](https://wg21.link/P3471R4)  
`__cpp_lib_hardened_basic_string_view` | Standard library hardening (present only in hardened implementation) | [`202502L`](../compiler_support/26.html#cpp_lib_hardened_basic_string_view_202502L "cpp/compiler support/26") | (C++26) | [P3471R4](https://wg21.link/P3471R4)  
`__cpp_lib_hardened_bitset` | Standard library hardening (present only in hardened implementation) | [`202502L`](../compiler_support/26.html#cpp_lib_hardened_bitset_202502L "cpp/compiler support/26") | (C++26) | [P3471R4](https://wg21.link/P3471R4)  
`__cpp_lib_hardened_deque` | Standard library hardening (present only in hardened implementation) | [`202502L`](../compiler_support/26.html#cpp_lib_hardened_deque_202502L "cpp/compiler support/26") | (C++26) | [P3471R4](https://wg21.link/P3471R4)  
`__cpp_lib_hardened_expected` | Standard library hardening (present only in hardened implementation) | [`202502L`](../compiler_support/26.html#cpp_lib_hardened_expected_202502L "cpp/compiler support/26") | (C++26) | [P3471R4](https://wg21.link/P3471R4)  
`__cpp_lib_hardened_forward_list` | Standard library hardening (present only in hardened implementation) | [`202502L`](../compiler_support/26.html#cpp_lib_hardened_forward_list_202502L "cpp/compiler support/26") | (C++26) | [P3471R4](https://wg21.link/P3471R4)  
`__cpp_lib_hardened_inplace_vector` | Standard library hardening (present only in hardened implementation) | [`202502L`](../compiler_support/26.html#cpp_lib_hardened_inplace_vector_202502L "cpp/compiler support/26") | (C++26) | [P3471R4](https://wg21.link/P3471R4)  
`__cpp_lib_hardened_list` | Standard library hardening (present only in hardened implementation) | [`202502L`](../compiler_support/26.html#cpp_lib_hardened_list_202502L "cpp/compiler support/26") | (C++26) | [P3471R4](https://wg21.link/P3471R4)  
`__cpp_lib_hardened_mdspan` | Standard library hardening (present only in hardened implementation) | [`202502L`](../compiler_support/26.html#cpp_lib_hardened_mdspan_202502L "cpp/compiler support/26") | (C++26) | [P3471R4](https://wg21.link/P3471R4)  
`__cpp_lib_hardened_optional` | Standard library hardening (present only in hardened implementation) | [`202502L`](../compiler_support/26.html#cpp_lib_hardened_optional_202502L "cpp/compiler support/26") | (C++26) | [P3471R4](https://wg21.link/P3471R4)  
`__cpp_lib_hardened_span` | Standard library hardening (present only in hardened implementation) | [`202502L`](../compiler_support/26.html#cpp_lib_hardened_span_202502L "cpp/compiler support/26") | (C++26) | [P3471R4](https://wg21.link/P3471R4)  
`__cpp_lib_hardened_valarray` | Standard library hardening (present only in hardened implementation) | [`202502L`](../compiler_support/26.html#cpp_lib_hardened_valarray_202502L "cpp/compiler support/26") | (C++26) | [P3471R4](https://wg21.link/P3471R4)  
`__cpp_lib_hardened_vector` | Standard library hardening (present only in hardened implementation) | [`202502L`](../compiler_support/26.html#cpp_lib_hardened_vector_202502L "cpp/compiler support/26") | (C++26) | [P3471R4](https://wg21.link/P3471R4)  
`__cpp_lib_hardware_interference_size` | Constexpr [`std::hardware_{constructive, destructive}_interference_size`](../thread/hardware_destructive_interference_size.html "cpp/thread/hardware destructive interference size") | [`201703L`](../compiler_support/17.html#cpp_lib_hardware_interference_size_201703L "cpp/compiler support/17") | (C++17) | [P0154R1](https://wg21.link/P0154R1)  
`__cpp_lib_hive` | [`<hive>`](../header/hive.html "cpp/header/hive"): a bucket-based container that re-uses memory locations from erased elements  | [`202502L`](../compiler_support/26.html#cpp_lib_hive_202502L "cpp/compiler support/26") | (C++26) | [P0447R28](https://wg21.link/P0447R28)  
`__cpp_lib_has_unique_object_representations` | [std::has_unique_object_representations](../types/has_unique_object_representations.html "cpp/types/has unique object representations") | [`201606L`](../compiler_support/17.html#cpp_lib_has_unique_object_representations_201606L "cpp/compiler support/17") | (C++17) | [P0258R2](https://wg21.link/P0258R2)  
`__cpp_lib_hazard_pointer` | [`<hazard_pointer>`](../header/hazard_pointer.html "cpp/header/hazard pointer"): Hazard pointers  | [`202306L`](../compiler_support/26.html#cpp_lib_hazard_pointer_202306L "cpp/compiler support/26") | (C++26) | [P2530R3](https://wg21.link/P2530R3)  
`__cpp_lib_hypot` | 3-argument overload of [std::hypot](../numeric/math/hypot.html "cpp/numeric/math/hypot") | [`201603L`](../compiler_support/17.html#cpp_lib_hypot_201603L "cpp/compiler support/17") | (C++17) | [P0030R1](https://wg21.link/P0030R1)  
`__cpp_lib_incomplete_container_elements` | Minimal incomplete type support for [`std::forward_list`](../container/forward_list.html#Template_parameters "cpp/container/forward list"), [`std::list`](../container/list.html#Template_parameters "cpp/container/list"), and [`std::vector`](../container/vector.html#Template_parameters "cpp/container/vector") | [`201505L`](../compiler_support/17.html#cpp_lib_incomplete_container_elements_201505L "cpp/compiler support/17") | (C++17) | [N4510](https://wg21.link/N4510)  
`__cpp_lib_indirect` | std::indirect | [`202502L`](../compiler_support/26.html#cpp_lib_indirect_202502L "cpp/compiler support/26") | (C++26) | [P3019R13](https://wg21.link/P3019R13)  
`__cpp_lib_inplace_vector` | std::inplace_vector: Dynamically-resizable vector with fixed capacity (inplace storage)  | [`202406L`](../compiler_support/26.html#cpp_lib_inplace_vector_202406L "cpp/compiler support/26") | (C++26) | [P0843R14](https://wg21.link/P0843R14)  
`__cpp_lib_int_pow2` | [Integral power-of-2 operations](../utility/bit.html "cpp/utility/bit") (std::has_single_bit, std::bit_ceil, std::bit_floor, std::bit_width)  | [`202002L`](../compiler_support/20.html#cpp_lib_int_pow2_202002L "cpp/compiler support/20") | (C++20) | [P0556R3](https://wg21.link/P0556R3)  
[P1956R1](https://wg21.link/P1956R1)  
`__cpp_lib_integer_comparison_functions` | [Integer comparison functions](../utility.html#Integer_comparison_functions "cpp/utility") | [`202002L`](../compiler_support/20.html#cpp_lib_integer_comparison_functions_202002L "cpp/compiler support/20") | (C++20) | [P0586R2](https://wg21.link/P0586R2)  
`__cpp_lib_integer_sequence` | [Compile-time integer sequences](../utility/integer_sequence.html "cpp/utility/integer sequence") | [`201304L`](../compiler_support/14.html#cpp_lib_integer_sequence_201304L "cpp/compiler support/14") | (C++14) | [N3658](https://wg21.link/N3658)  
`__cpp_lib_integral_constant_callable` | [std::integral_constant::operator()](../types/integral_constant.html "cpp/types/integral constant") | [`201304L`](../compiler_support/14.html#cpp_lib_integral_constant_callable_201304L "cpp/compiler support/14") | (C++14) | [N3545](https://wg21.link/N3545)  
`__cpp_lib_interpolate` | [`std::lerp`](../numeric/lerp.html "cpp/numeric/lerp"), [`std::midpoint`](../numeric/midpoint.html "cpp/numeric/midpoint") | [`201902L`](../compiler_support/20.html#cpp_lib_interpolate_201902L "cpp/compiler support/20") | (C++20) | [P0811R3](https://wg21.link/P0811R3)  
`__cpp_lib_invoke` | [std::invoke](../utility/functional/invoke.html "cpp/utility/functional/invoke") | [`201411L`](../compiler_support/17.html#cpp_lib_invoke_201411L "cpp/compiler support/17") | (C++17) | [N4169](https://wg21.link/N4169)  
`__cpp_lib_invoke_r` | [`std::invoke_r`](../utility/functional/invoke.html "cpp/utility/functional/invoke") | [`202106L`](../compiler_support/23.html#cpp_lib_invoke_r_202106L "cpp/compiler support/23") | (C++23) | [P2136R3](https://wg21.link/P2136R3)  
`__cpp_lib_ios_noreplace` | Support [exclusive mode](../io/ios_base/openmode.html "cpp/io/ios base/openmode") for fstreams  | [`202207L`](../compiler_support/23.html#cpp_lib_ios_noreplace_202207L "cpp/compiler support/23") | (C++23) | [P2467R1](https://wg21.link/P2467R1)  
`__cpp_lib_is_aggregate` | [`std::is_aggregate`](../types/is_aggregate.html "cpp/types/is aggregate") | [`201703L`](../compiler_support/17.html#cpp_lib_is_aggregate_201703L "cpp/compiler support/17") | (C++17) | [LWG2911](https://wg21.link/LWG2911)  
`__cpp_lib_is_constant_evaluated` | [`std::is_constant_evaluated`](../types/is_constant_evaluated.html "cpp/types/is constant evaluated") | [`201811L`](../compiler_support/20.html#cpp_lib_is_constant_evaluated_201811L "cpp/compiler support/20") | (C++20) | [P0595R2](https://wg21.link/P0595R2)  
`__cpp_lib_is_final` | [std::is_final](../types/is_final.html "cpp/types/is final") | [`201402L`](../compiler_support/14.html#cpp_lib_is_final_201402L "cpp/compiler support/14") | (C++14) | [LWG2112](https://wg21.link/LWG2112)  
`__cpp_lib_is_implicit_lifetime` | [`std::is_implicit_lifetime`](../types/is_implicit_lifetime.html "cpp/types/is implicit lifetime") | [`202302L`](../compiler_support/23.html#cpp_lib_is_implicit_lifetime_202302L "cpp/compiler support/23") | (C++23) | [P2674R1](https://wg21.link/P2674R1)  
`__cpp_lib_is_invocable` | std::is_invocable, [std::invoke_result](../types/result_of.html "cpp/types/result of") | [`201703L`](../compiler_support/17.html#cpp_lib_is_invocable_201703L "cpp/compiler support/17") | (C++17) | [P0604R0](https://wg21.link/P0604R0)  
`__cpp_lib_is_layout_compatible` | [`std::is_layout_compatible`](../types/is_layout_compatible.html "cpp/types/is layout compatible") | [`201907L`](../compiler_support/20.html#cpp_lib_is_layout_compatible_201907L "cpp/compiler support/20") | (C++20) | [P0466R5](https://wg21.link/P0466R5)  
`__cpp_lib_is_nothrow_convertible` | [`std::is_convertible`](../types/is_convertible.html "cpp/types/is convertible") | [`201806L`](../compiler_support/20.html#cpp_lib_is_nothrow_convertible_201806L "cpp/compiler support/20") | (C++20) | [P0758R1](https://wg21.link/P0758R1)  
[LWG3356](https://wg21.link/LWG3356)  
`__cpp_lib_is_null_pointer` | [std::is_null_pointer](../types/is_null_pointer.html "cpp/types/is null pointer") | [`201309L`](../compiler_support/14.html#cpp_lib_is_null_pointer_201309L "cpp/compiler support/14") | (C++14)  
(DR11) | [LWG2247](https://wg21.link/LWG2247)  
`__cpp_lib_is_pointer_interconvertible` | Pointer-interconvertibility traits: [`std::is_pointer_interconvertible_with_class`](../types/is_pointer_interconvertible_with_class.html "cpp/types/is pointer interconvertible with class"), [`std::is_pointer_interconvertible_base_of`](../types/is_pointer_interconvertible_base_of.html "cpp/types/is pointer interconvertible base of") | [`201907L`](../compiler_support/20.html#cpp_lib_is_pointer_interconvertible_201907L "cpp/compiler support/20") | (C++20) | [P0466R5](https://wg21.link/P0466R5)  
`__cpp_lib_is_scoped_enum` | [`std::is_scoped_enum`](../types/is_scoped_enum.html "cpp/types/is scoped enum") | [`202011L`](../compiler_support/23.html#cpp_lib_is_scoped_enum_202011L "cpp/compiler support/23") | (C++23) | [P1048R1](https://wg21.link/P1048R1)  
`__cpp_lib_is_sufficiently_aligned` | std::is_sufficiently_aligned: checks a pointer’s alignment precondition  | [`202411L`](../compiler_support/26.html#cpp_lib_is_sufficiently_aligned_202411L "cpp/compiler support/26") | (C++26) | [P2897R7](https://wg21.link/P2897R7)  
`__cpp_lib_is_swappable` | [(nothrow-)swappable traits](../types/is_swappable.html "cpp/types/is swappable") | [`201603L`](../compiler_support/17.html#cpp_lib_is_swappable_201603L "cpp/compiler support/17") | (C++17) | [P0185R1](https://wg21.link/P0185R1)  
`__cpp_lib_is_virtual_base_of` | std::is_virtual_base_of: Type trait for detecting virtual base classes  | [`202406L`](../compiler_support/26.html#cpp_lib_is_virtual_base_of_202406L "cpp/compiler support/26") | (C++26) | [P2985R0](https://wg21.link/P2985R0)  
`__cpp_lib_is_within_lifetime` | Checking if a union alternative is active ([`std::is_within_lifetime`](../types/is_within_lifetime.html "cpp/types/is within lifetime"))  | [`202306L`](../compiler_support/26.html#cpp_lib_is_within_lifetime_202306L "cpp/compiler support/26") | (C++26) | [P2641R4](https://wg21.link/P2641R4)  
`__cpp_lib_jthread` | [Stop token](../thread/stop_token.html "cpp/thread/stop token") and [joining thread](../thread/jthread.html "cpp/thread/jthread") | [`201911L`](../compiler_support/20.html#cpp_lib_jthread_201911L "cpp/compiler support/20") | (C++20) | [P0660R10](https://wg21.link/P0660R10)  
[P1869R1](https://wg21.link/P1869R1)  
`__cpp_lib_latch` | [`std::latch`](../thread/latch.html "cpp/thread/latch") | [`201907L`](../compiler_support/20.html#cpp_lib_latch_201907L "cpp/compiler support/20") | (C++20) | [P1135R6](https://wg21.link/P1135R6)  
`__cpp_lib_launder` | [CWG issue 1776](https://cplusplus.github.io/CWG/issues/1776.html): Replacement of class objects containing reference members ([std::launder](../utility/launder.html "cpp/utility/launder"))  | [`201606L`](../compiler_support/17.html#cpp_lib_launder_201606L "cpp/compiler support/17") | (C++17) | [P0137R1](https://wg21.link/P0137R1)  
`__cpp_lib_linalg` | [A free function linear algebra interface based on the BLAS](../numeric/linalg.html "cpp/numeric/linalg") | [`202311L`](../compiler_support/26.html#cpp_lib_linalg_202311L "cpp/compiler support/26") | (C++26) | [P1673R13](https://wg21.link/P1673R13)  
`__cpp_lib_list_remove_return_type` | Change the return type of the `remove()`, `remove_if()` and `unique()` of [std::forward_list](../container/forward_list.html "cpp/container/forward list") and [std::list](../container/list.html "cpp/container/list") | [`201806L`](../compiler_support/20.html#cpp_lib_list_remove_return_type_201806L "cpp/compiler support/20") | (C++20) | [P0646R1](https://wg21.link/P0646R1)  
`__cpp_lib_logical_traits` | [Logical operations on type traits](../meta.html#Operations_on_traits "cpp/meta") | [`201510L`](../compiler_support/17.html#cpp_lib_logical_traits_201510L "cpp/compiler support/17") | (C++17) | [P0013R1](https://wg21.link/P0013R1)  
`__cpp_lib_make_from_tuple` | [std::make_from_tuple](../utility/make_from_tuple.html "cpp/utility/make from tuple") | [`201606L`](../compiler_support/17.html#cpp_lib_make_from_tuple_201606L "cpp/compiler support/17") | (C++17) | [P0209R2](https://wg21.link/P0209R2)  
`__cpp_lib_make_reverse_iterator` | [`std::make_reverse_iterator`](../iterator/make_reverse_iterator.html "cpp/iterator/make reverse iterator") | [`201402L`](../compiler_support/14.html#cpp_lib_make_reverse_iterator_201402L "cpp/compiler support/14") | (C++14) | [LWG2285](https://wg21.link/LWG2285)  
`__cpp_lib_make_unique` | [std::make_unique](../memory/unique_ptr/make_unique.html "cpp/memory/unique ptr/make unique") | [`201304L`](../compiler_support/14.html#cpp_lib_make_unique_201304L "cpp/compiler support/14") | (C++14) | [N3656](https://wg21.link/N3656)  
`__cpp_lib_map_try_emplace` | [std::map::try_emplace](../container/map/try_emplace.html "cpp/container/map/try emplace"), [std::map::insert_or_assign](../container/map/insert_or_assign.html "cpp/container/map/insert or assign") | [`201411L`](../compiler_support/17.html#cpp_lib_map_try_emplace_201411L "cpp/compiler support/17") | (C++17) | [N4279](https://wg21.link/N4279)  
`__cpp_lib_math_constants` | [Mathematical constants](../numeric/constants.html "cpp/numeric/constants") | [`201907L`](../compiler_support/20.html#cpp_lib_math_constants_201907L "cpp/compiler support/20") | (C++20) | [P0631R8](https://wg21.link/P0631R8)  
`__cpp_lib_math_special_functions` | [Mathematical special functions](../numeric/special_math.html "cpp/numeric/special functions") | [`201603L`](../compiler_support/17.html#cpp_lib_math_special_functions_201603L "cpp/compiler support/17") | (C++17) | [P0226R1](https://wg21.link/P0226R1)  
`__cpp_lib_mdspan` | [`std::mdspan`](../container/mdspan.html "cpp/container/mdspan") | [`202207L`](../compiler_support/23.html#cpp_lib_mdspan_202207L "cpp/compiler support/23") | (C++23) | [P0009R18](https://wg21.link/P0009R18)  
[P2599R2](https://wg21.link/P2599R2)  
[P2604R0](https://wg21.link/P2604R0)  
[P2613R1](https://wg21.link/P2613R1)  
std::dims for std::mdspan | [`202406L`](../compiler_support/26.html#cpp_lib_mdspan_202406L "cpp/compiler support/26") | (C++26) | [P2389R2](https://wg21.link/P2389R2)  
`__cpp_lib_memory_resource` | [std::pmr::memory_resource](../memory/memory_resource.html "cpp/memory/memory resource") | [`201603L`](../compiler_support/17.html#cpp_lib_memory_resource_201603L "cpp/compiler support/17") | (C++17) | [P0220R1](https://wg21.link/P0220R1)  
`__cpp_lib_modules` | [Standard library modules](../standard_library.html#Importing_modules "cpp/standard library") `std` and `std.compat` | [`202207L`](../compiler_support/23.html#cpp_lib_modules_202207L "cpp/compiler support/23") | (C++23) | [P2465R3](https://wg21.link/P2465R3)  
`__cpp_lib_move_iterator_concept` | Make [std::move_iterator<T*>](../iterator/move_iterator.html "cpp/iterator/move iterator") a random access iterator  | [`202207L`](../compiler_support/23.html#cpp_lib_move_iterator_concept_202207L "cpp/compiler support/23") | (C++23) | [P2520R0](https://wg21.link/P2520R0)  
`__cpp_lib_move_only_function` | std::move_only_function | [`202110L`](../compiler_support/23.html#cpp_lib_move_only_function_202110L "cpp/compiler support/23") | (C++23) | [P0288R9](https://wg21.link/P0288R9)  
`__cpp_lib_node_extract` | Splicing maps and sets ([std::map::extract](../container/map/extract.html "cpp/container/map/extract"), [std::map::merge](../container/map/merge.html "cpp/container/map/merge"), [`insert(node_type)`](../container/map/insert.html "cpp/container/map/insert"), etc)  | [`201606L`](../compiler_support/17.html#cpp_lib_node_extract_201606L "cpp/compiler support/17") | (C++17) | [P0083R3](https://wg21.link/P0083R3)  
`__cpp_lib_nonmember_container_access` | [std::size](../iterator/size.html "cpp/iterator/size"), [std::data](../iterator/data.html "cpp/iterator/data") and [std::empty](../iterator/empty.html "cpp/iterator/empty") | [`201411L`](../compiler_support/17.html#cpp_lib_nonmember_container_access_201411L "cpp/compiler support/17") | (C++17) | [N4280](https://wg21.link/N4280)  
`__cpp_lib_not_fn` | [std::not_fn](../utility/functional/not_fn.html "cpp/utility/functional/not fn") | [`201603L`](../compiler_support/17.html#cpp_lib_not_fn_201603L "cpp/compiler support/17") | (C++17) | [P0005R4](https://wg21.link/P0005R4)  
Allow passing callable objects as constant template arguments to [std::not_fn](../utility/functional/not_fn.html "cpp/utility/functional/not fn") | [`202306L`](../compiler_support/26.html#cpp_lib_not_fn_202306L "cpp/compiler support/26") | (C++26) | [P2714R1](https://wg21.link/P2714R1)  
`__cpp_lib_null_iterators` | Null [LegacyForwardIterators](../named_req/ForwardIterator.html "cpp/named req/ForwardIterator") | [`201304L`](../compiler_support/14.html#cpp_lib_null_iterators_201304L "cpp/compiler support/14") | (C++14) | [N3644](https://wg21.link/N3644)  
`__cpp_lib_optional` | [std::optional](../utility/optional.html "cpp/utility/optional") | [`201606L`](../compiler_support/17.html#cpp_lib_optional_201606L "cpp/compiler support/17") | (C++17) | [P0220R1](https://wg21.link/P0220R1)  
[P0032R3](https://wg21.link/P0032R3)  
[P0307R2](https://wg21.link/P0307R2)  
Fully constexpr [std::optional](../utility/optional.html "cpp/utility/optional") | [`202106L`](../compiler_support/23.html#cpp_lib_optional_202106L "cpp/compiler support/23") | (C++23)  
(DR20) | [P2231R1](https://wg21.link/P2231R1)  
[Monadic operations](../utility/optional.html#Monadic_operations "cpp/utility/optional") in [std::optional](../utility/optional.html "cpp/utility/optional") | [`202110L`](../compiler_support/23.html#cpp_lib_optional_202110L "cpp/compiler support/23") | (C++23) | [P0798R8](https://wg21.link/P0798R8)  
[LWG3621](https://wg21.link/LWG3621)  
`__cpp_lib_optional_range_support` | [std::optional](../utility/optional.html "cpp/utility/optional") range support  | [`202406L`](../compiler_support/26.html#cpp_lib_optional_range_support_202406L "cpp/compiler support/26") | (C++26) | [P3168R2](https://wg21.link/P3168R2)  
`__cpp_lib_out_ptr` | std::out_ptr, std::inout_ptr | [`202106L`](../compiler_support/23.html#cpp_lib_out_ptr_202106L "cpp/compiler support/23") | (C++23) | [P1132R8](https://wg21.link/P1132R8)  
Freestanding std::out_ptr, std::inout_ptr | [`202311L`](../compiler_support/26.html#cpp_lib_out_ptr_202311L "cpp/compiler support/26") | (C++26) | [P2833R2](https://wg21.link/P2833R2)  
`__cpp_lib_parallel_algorithm` | [Parallel algorithms](../algorithm.html#Execution_policies "cpp/algorithm") | [`201603L`](../compiler_support/17.html#cpp_lib_parallel_algorithm_201603L "cpp/compiler support/17") | (C++17) | [P0024R2](https://wg21.link/P0024R2)  
`__cpp_lib_polymorphic` | std::polymorphic | [`202502L`](../compiler_support/26.html#cpp_lib_polymorphic_202502L "cpp/compiler support/26") | (C++26) | [P3019R13](https://wg21.link/P3019R13)  
`__cpp_lib_polymorphic_allocator` | [std::pmr::polymorphic_allocator<>](../memory/polymorphic_allocator.html "cpp/memory/polymorphic allocator") as a vocabulary type  | [`201902L`](../compiler_support/20.html#cpp_lib_polymorphic_allocator_201902L "cpp/compiler support/20") | (C++20) | [P0339R6](https://wg21.link/P0339R6)  
[LWG3437](https://wg21.link/LWG3437)  
`__cpp_lib_print` | Formatted output  | [`202207L`](../compiler_support/23.html#cpp_lib_print_202207L "cpp/compiler support/23") | (C++23) | [P2093R14](https://wg21.link/P2093R14)  
Permit an efficient implementation of std::print | [`202403L`](../compiler_support/26.html#cpp_lib_print_202403L "cpp/compiler support/26") | (C++26)  
(DR23) | [P3107R5](https://wg21.link/P3107R5)  
[P3235R3](https://wg21.link/P3235R3)  
Printing Blank Lines with std::println | [`202403L`](../compiler_support/26.html#cpp_lib_print_202403L "cpp/compiler support/26") | (C++26) | [P3142R0](https://wg21.link/P3142R0)  
`__cpp_lib_quoted_string_io` | [std::quoted](../io/manip/quoted.html "cpp/io/manip/quoted") | [`201304L`](../compiler_support/14.html#cpp_lib_quoted_string_io_201304L "cpp/compiler support/14") | (C++14) | [N3654](https://wg21.link/N3654)  
`__cpp_lib_philox_engine` | std::philox_engine: Counter-based random number engine  | [`202406L`](../compiler_support/26.html#cpp_lib_philox_engine_202406L "cpp/compiler support/26") | (C++26) | [P2075R6](https://wg21.link/P2075R6)  
`__cpp_lib_ranges` | [Ranges library](../ranges.html "cpp/ranges") and [constrained algorithms](../algorithm/ranges.html "cpp/algorithm/ranges") | [`201911L`](../compiler_support/20.html#cpp_lib_ranges_201911L "cpp/compiler support/20") | (C++20) | [P0896R4](https://wg21.link/P0896R4)  
[P1035R7](https://wg21.link/P1035R7)  
[P1716R3](https://wg21.link/P1716R3)  
Non-[default-initializable](../concepts/default_initializable.html "cpp/concepts/default initializable") [views](../ranges/view.html "cpp/ranges/view") | [`202106L`](../compiler_support/23.html#cpp_lib_ranges_202106L "cpp/compiler support/23") | (C++23)  
(DR20) | [P2325R3](https://wg21.link/P2325R3)  
[Views](../ranges/view.html "cpp/ranges/view") with [ownership](../ranges/owning_view.html "cpp/ranges/owning view") | [`202110L`](../compiler_support/23.html#cpp_lib_ranges_202110L "cpp/compiler support/23") | [P2415R2](https://wg21.link/P2415R2)  
[`std::ranges::range_adaptor_closure`](../ranges/range_adaptor_closure.html "cpp/ranges/range adaptor closure") | [`202202L`](../compiler_support/23.html#cpp_lib_ranges_202202L "cpp/compiler support/23") | (C++23) | [P2387R3](https://wg21.link/P2387R3)  
Relaxing [range adaptors](../ranges.html "cpp/ranges") to allow for move-only types  | [`202207L`](../compiler_support/23.html#cpp_lib_ranges_202207L "cpp/compiler support/23") | [P2494R2](https://wg21.link/P2494R2)  
Removing “poison pill” overloads in ranges::begin, ranges::end, [ranges::rbegin](../ranges/rbegin.html "cpp/ranges/rbegin"), [ranges::rend](../ranges/rend.html "cpp/ranges/rend"), and [ranges::size](../ranges/size.html "cpp/ranges/size") | [`202211L`](../compiler_support/23.html#cpp_lib_ranges_202211L "cpp/compiler support/23") | [P2602R2](https://wg21.link/P2602R2)  
Relaxing ranges to allow certain projections  | [`202302L`](../compiler_support/23.html#cpp_lib_ranges_202302L "cpp/compiler support/23") | [P2609R3](https://wg21.link/P2609R3)  
Removing the common reference requirement from the indirectly invocable concepts  | [`202406L`](../compiler_support/26.html#cpp_lib_ranges_202406L "cpp/compiler support/26") | (C++26)  
(DR20) | [P2997R1](https://wg21.link/P2997R1)  
`__cpp_lib_ranges_as_const` | std::const_iterator, [`std::ranges::as_const_view`](../ranges/as_const_view.html "cpp/ranges/as const view") | [`202207L`](../compiler_support/23.html#cpp_lib_ranges_as_const_202207L "cpp/compiler support/23") | (C++23) | [P2278R4](https://wg21.link/P2278R4)  
Making std::basic_const_iterator follow its underlying type's convertibility  | [`202311L`](../compiler_support/26.html#cpp_lib_ranges_as_const_202311L "cpp/compiler support/26") | (C++26) | [P2836R1](https://wg21.link/P2836R1)  
`__cpp_lib_ranges_as_rvalue` | [`std::ranges::as_rvalue_view`](../ranges/as_rvalue_view.html "cpp/ranges/as rvalue view") | [`202207L`](../compiler_support/23.html#cpp_lib_ranges_as_rvalue_202207L "cpp/compiler support/23") | (C++23) | [P2446R2](https://wg21.link/P2446R2)  
`__cpp_lib_ranges_cache_latest` | [`std::ranges::cache_latest_view`](../ranges/cache_latest_view.html "cpp/ranges/cache latest view") | [`202411L`](../compiler_support/26.html#cpp_lib_ranges_cache_latest_202411L "cpp/compiler support/26") | (C++26) | [P3138R5](https://wg21.link/P3138R5)  
`__cpp_lib_ranges_cartesian_product` | [`std::ranges::cartesian_product_view`](../ranges/cartesian_product_view.html "cpp/ranges/cartesian product view") | [`202207L`](../compiler_support/23.html#cpp_lib_ranges_cartesian_product_202207L "cpp/compiler support/23") | (C++23) | [P2374R4](https://wg21.link/P2374R4)  
[P2540R1](https://wg21.link/P2540R1)  
`__cpp_lib_ranges_chunk` | [`std::ranges::chunk_view`](../ranges/chunk_view.html "cpp/ranges/chunk view") | [`202202L`](../compiler_support/23.html#cpp_lib_ranges_chunk_202202L "cpp/compiler support/23") | (C++23) | [P2442R1](https://wg21.link/P2442R1)  
`__cpp_lib_ranges_chunk_by` | [`std::ranges::chunk_by_view`](../ranges/chunk_by_view.html "cpp/ranges/chunk by view") | [`202202L`](../compiler_support/23.html#cpp_lib_ranges_chunk_by_202202L "cpp/compiler support/23") | (C++23) | [P2443R1](https://wg21.link/P2443R1)  
`__cpp_lib_ranges_concat` | [`std::ranges::concat_view`](../ranges/concat_view.html "cpp/ranges/concat view") | [`202403L`](../compiler_support/26.html#cpp_lib_ranges_concat_202403L "cpp/compiler support/26") | (C++26) | [P2542R8](https://wg21.link/P2542R8)  
`__cpp_lib_ranges_contains` | [`std::ranges::contains`](../algorithm/ranges/contains.html "cpp/algorithm/ranges/contains") | [`202207L`](../compiler_support/23.html#cpp_lib_ranges_contains_202207L "cpp/compiler support/23") | (C++23) | [P2302R4](https://wg21.link/P2302R4)  
`__cpp_lib_ranges_enumerate` | std::ranges::enumerate_view | [`202302L`](../compiler_support/23.html#cpp_lib_ranges_enumerate_202302L "cpp/compiler support/23") | (C++23) | [P2164R9](https://wg21.link/P2164R9)  
`__cpp_lib_ranges_find_last` | [`std::ranges::find_last`](../algorithm/ranges/find_last.html "cpp/algorithm/ranges/find last"), [`std::ranges::find_last_if`](../algorithm/ranges/find_last.html "cpp/algorithm/ranges/find last"), and [`std::ranges::find_last_if_not`](../algorithm/ranges/find_last.html "cpp/algorithm/ranges/find last") | [`202207L`](../compiler_support/23.html#cpp_lib_ranges_find_last_202207L "cpp/compiler support/23") | (C++23) | [P1223R5](https://wg21.link/P1223R5)  
[LWG3807](https://wg21.link/LWG3807)  
`__cpp_lib_ranges_fold` | `std::ranges` [fold algorithms](../algorithm/ranges.html#Constrained_fold_operations "cpp/algorithm/ranges") | [`202207L`](../compiler_support/23.html#cpp_lib_ranges_fold_202207L "cpp/compiler support/23") | (C++23) | [P2322R6](https://wg21.link/P2322R6)  
`__cpp_lib_ranges_generate_random` | Vector API for random number generation ([`std::ranges::generate_random`](../algorithm/ranges/generate_random.html "cpp/algorithm/ranges/generate random"))  | [`202403L`](../compiler_support/26.html#cpp_lib_ranges_generate_random_202403L "cpp/compiler support/26") | (C++26) | [P1068R11](https://wg21.link/P1068R11)  
`__cpp_lib_ranges_iota` | std::ranges::iota | [`202202L`](../compiler_support/23.html#cpp_lib_ranges_iota_202202L "cpp/compiler support/23") | (C++23) | [P2440R1](https://wg21.link/P2440R1)  
`__cpp_lib_ranges_join_with` | std::ranges::join_with_view | [`202202L`](../compiler_support/23.html#cpp_lib_ranges_join_with_202202L "cpp/compiler support/23") | (C++23) | [P2441R2](https://wg21.link/P2441R2)  
`__cpp_lib_ranges_repeat` | [`std::ranges::repeat_view`](../ranges/repeat_view.html "cpp/ranges/repeat view") | [`202207L`](../compiler_support/23.html#cpp_lib_ranges_repeat_202207L "cpp/compiler support/23") | (C++23) | [P2474R2](https://wg21.link/P2474R2)  
`__cpp_lib_ranges_reserve_hint` | [`std::ranges::approximately_sized_range`](../ranges/approximately_sized_range.html "cpp/ranges/approximately sized range") and [`std::ranges::reserve_hint`](../ranges/reserve_hint.html "cpp/ranges/reserve hint") | [`202502L`](../compiler_support/26.html#cpp_lib_ranges_reserve_hint_202502L "cpp/compiler support/26") | (C++26) | [P2846R6](https://wg21.link/P2846R6)  
`__cpp_lib_ranges_slide` | std::ranges::slide_view | [`202202L`](../compiler_support/23.html#cpp_lib_ranges_slide_202202L "cpp/compiler support/23") | (C++23) | [P2442R1](https://wg21.link/P2442R1)  
`__cpp_lib_ranges_starts_ends_with` | std::ranges::starts_with, std::ranges::ends_with | [`202106L`](../compiler_support/23.html#cpp_lib_ranges_starts_ends_with_202106L "cpp/compiler support/23") | (C++23) | [P1659R3](https://wg21.link/P1659R3)  
`__cpp_lib_ranges_stride` | [`std::ranges::stride_view`](../ranges/stride_view.html "cpp/ranges/stride view") | [`202207L`](../compiler_support/23.html#cpp_lib_ranges_stride_202207L "cpp/compiler support/23") | (C++23) | [P1899R3](https://wg21.link/P1899R3)  
`__cpp_lib_ranges_to_container` | std::ranges::to | [`202202L`](../compiler_support/23.html#cpp_lib_ranges_to_container_202202L "cpp/compiler support/23") | (C++23) | [P1206R7](https://wg21.link/P1206R7)  
`__cpp_lib_ranges_to_input` | [`std::ranges::to_input_view`](../ranges/to_input_view.html "cpp/ranges/to input view") | [`202502L`](../compiler_support/26.html#cpp_lib_ranges_to_input_202502L "cpp/compiler support/26") | (C++26) | [P3137R3](https://wg21.link/P3137R3)  
`__cpp_lib_ranges_zip` | std::ranges::zip_view, std::ranges::zip_transform_view, std::ranges::adjacent_view, std::ranges::adjacent_transform_view | [`202110L`](../compiler_support/23.html#cpp_lib_ranges_zip_202110L "cpp/compiler support/23") | (C++23) | [P2321R2](https://wg21.link/P2321R2)  
`__cpp_lib_ratio` | Adding the new 2022 SI prefixes  | [`202306L`](../compiler_support/26.html#cpp_lib_ratio_202306L "cpp/compiler support/26") | (C++26) | [P2734R0](https://wg21.link/P2734R0)  
`__cpp_lib_raw_memory_algorithms` | [Extending memory management tools](../memory.html#Uninitialized_storage "cpp/memory") | [`201606L`](../compiler_support/17.html#cpp_lib_raw_memory_algorithms_201606L "cpp/compiler support/17") | (C++17) | [P0040R3](https://wg21.link/P0040R3)  
constexpr for [specialized memory algorithms](../memory.html#Uninitialized_memory_algorithms "cpp/memory") | [`202411L`](../compiler_support/26.html#cpp_lib_raw_memory_algorithms_202411L "cpp/compiler support/26") | (C++26) | [P3508R0](https://wg21.link/P3508R0)  
[P3369R0](https://wg21.link/P3369R0)  
`__cpp_lib_rcu` | [`<rcu>`](../header/rcu.html "cpp/header/rcu"): Read-Copy Update (RCU)  | [`202306L`](../compiler_support/26.html#cpp_lib_rcu_202306L "cpp/compiler support/26") | (C++26) | [P2545R4](https://wg21.link/P2545R4)  
`__cpp_lib_reference_from_temporary` | std::reference_constructs_from_temporary and std::reference_converts_from_temporary | [`202202L`](../compiler_support/23.html#cpp_lib_reference_from_temporary_202202L "cpp/compiler support/23") | (C++23) | [P2255R2](https://wg21.link/P2255R2)  
`__cpp_lib_reference_wrapper` | Comparisons for [`std::reference_wrapper`](../utility/functional/reference_wrapper/operator_cmp.html "cpp/utility/functional/reference wrapper/operator cmp") | [`202403L`](../compiler_support/26.html#cpp_lib_reference_wrapper_202403L "cpp/compiler support/26") | (C++26) | [P2944R3](https://wg21.link/P2944R3)  
`__cpp_lib_remove_cvref` | [`std::remove_cvref`](../types/remove_cvref.html "cpp/types/remove cvref") | [`201711L`](../compiler_support/20.html#cpp_lib_remove_cvref_201711L "cpp/compiler support/20") | (C++20) | [P0550R2](https://wg21.link/P0550R2)  
`__cpp_lib_result_of_sfinae` | [std::result_of](../types/result_of.html "cpp/types/result of") and [SFINAE](../language/sfinae.html "cpp/language/sfinae") | [`201210L`](../compiler_support/14.html#cpp_lib_result_of_sfinae_201210L "cpp/compiler support/14") | (C++14) | [N3462](https://wg21.link/N3462)  
`__cpp_lib_robust_nonmodifying_seq_ops` | Making non-modifying sequence operations more robust (two-range overloads for [std::mismatch](../algorithm/mismatch.html "cpp/algorithm/mismatch"), [std::equal](../algorithm/equal.html "cpp/algorithm/equal") and [std::is_permutation](../algorithm/is_permutation.html "cpp/algorithm/is permutation"))  | [`201304L`](../compiler_support/14.html#cpp_lib_robust_nonmodifying_seq_ops_201304L "cpp/compiler support/14") | (C++14) | [N3671](https://wg21.link/N3671)  
`__cpp_lib_sample` | [std::sample](../algorithm/sample.html "cpp/algorithm/sample") | [`201603L`](../compiler_support/17.html#cpp_lib_sample_201603L "cpp/compiler support/17") | (C++17) | [P0220R1](https://wg21.link/P0220R1)  
`__cpp_lib_saturation_arithmetic` | [Saturation arithmetic](../numeric.html#Saturation_arithmetic_.28since_C.2B.2B26.29 "cpp/numeric") | [`202311L`](../compiler_support/26.html#cpp_lib_saturation_arithmetic_202311L "cpp/compiler support/26") | (C++26) | [P0543R3](https://wg21.link/P0543R3)  
`__cpp_lib_scoped_lock` | [`std::scoped_lock`](../thread/scoped_lock.html "cpp/thread/scoped lock") | [`201703L`](../compiler_support/17.html#cpp_lib_scoped_lock_201703L "cpp/compiler support/17") | (C++17) | [P0156R2](https://wg21.link/P0156R2)  
`__cpp_lib_semaphore` | [`std::counting_semaphore`](../thread/counting_semaphore.html "cpp/thread/counting semaphore"), `std::binary_semaphore` | [`201907L`](../compiler_support/20.html#cpp_lib_semaphore_201907L "cpp/compiler support/20") | (C++20) | [P1135R6](https://wg21.link/P1135R6)  
`__cpp_lib_senders` | std::execution: Sender-receiver model of execution control  | [`202406L`](../compiler_support/26.html#cpp_lib_senders_202406L "cpp/compiler support/26") | (C++26) | [P2300R10](https://wg21.link/P2300R10)  
`__cpp_lib_shared_mutex` | [std::shared_mutex](../thread/shared_mutex.html "cpp/thread/shared mutex") (untimed)  | [`201505L`](../compiler_support/17.html#cpp_lib_shared_mutex_201505L "cpp/compiler support/17") | (C++17) | [N4508](https://wg21.link/N4508)  
`__cpp_lib_shared_ptr_arrays` | [std::shared_ptr<T[]>](../memory/shared_ptr.html "cpp/memory/shared ptr") | [`201611L`](../compiler_support/17.html#cpp_lib_shared_ptr_arrays_201611L "cpp/compiler support/17") | (C++17) | [P0497R0](https://wg21.link/P0497R0)  
Array support of [std::make_shared](../memory/shared_ptr/make_shared.html "cpp/memory/shared ptr/make shared") | [`201707L`](../compiler_support/20.html#cpp_lib_shared_ptr_arrays_201707L "cpp/compiler support/20") | (C++20) | [P0674R1](https://wg21.link/P0674R1)  
`__cpp_lib_shared_ptr_weak_type` | [`shared_ptr::weak_type`](../memory/shared_ptr.html "cpp/memory/shared ptr") | [`201606L`](../compiler_support/17.html#cpp_lib_shared_ptr_weak_type_201606L "cpp/compiler support/17") | (C++17) | [P0163R0](https://wg21.link/P0163R0)  
`__cpp_lib_shared_timed_mutex` | [std::shared_timed_mutex](../thread/shared_timed_mutex.html "cpp/thread/shared timed mutex") | [`201402L`](../compiler_support/14.html#cpp_lib_shared_timed_mutex_201402L "cpp/compiler support/14") | (C++14) | [N3891](https://wg21.link/N3891)  
`__cpp_lib_shift` | [`std::shift_left`](../algorithm/shift.html "cpp/algorithm/shift") and [`std::shift_right`](../algorithm/shift.html "cpp/algorithm/shift") | [`201806L`](../compiler_support/20.html#cpp_lib_shift_201806L "cpp/compiler support/20") | (C++20) | [P0769R2](https://wg21.link/P0769R2)  
std::ranges::shift_left and std::ranges::shift_right | [`202202L`](../compiler_support/23.html#cpp_lib_shift_202202L "cpp/compiler support/23") | (C++23) | [P2440R1](https://wg21.link/P2440R1)  
`__cpp_lib_simd` | [`<simd>`](../header/simd.html "cpp/header/simd"): [Data-parallel types](../numeric/simd.html "cpp/numeric/simd") | [`202411L`](../compiler_support/26.html#cpp_lib_simd_202411L "cpp/compiler support/26") | (C++26) | [P1928R15](https://wg21.link/P1928R15)  
[P3430R3](https://wg21.link/P3430R3)  
[P3441R2](https://wg21.link/P3441R2)  
[P3287R3](https://wg21.link/P3287R3)  
[P2933R4](https://wg21.link/P2933R4)  
`__cpp_lib_simd_complex` | Support of interleaved complex values in std::datapar::simd | [`202502L`](../compiler_support/26.html#cpp_lib_simd_complex_202502L "cpp/compiler support/26") | (C++26) | [P2663R7](https://wg21.link/P2663R7)  
`__cpp_lib_smart_ptr_for_overwrite` | Smart pointer creation with default initialization ([std::allocate_shared_for_overwrite](../memory/shared_ptr/allocate_shared.html "cpp/memory/shared ptr/allocate shared"), [std::make_shared_for_overwrite](../memory/shared_ptr/make_shared.html "cpp/memory/shared ptr/make shared"), [std::make_unique_for_overwrite](../memory/unique_ptr/make_unique.html "cpp/memory/unique ptr/make unique"))  | [`202002L`](../compiler_support/20.html#cpp_lib_smart_ptr_for_overwrite_202002L "cpp/compiler support/20") | (C++20) | [P1020R1](https://wg21.link/P1020R1)  
[P1973R1](https://wg21.link/P1973R1)  
`__cpp_lib_smart_ptr_owner_equality` | Enabling the use of [std::weak_ptr](../memory/weak_ptr.html "cpp/memory/weak ptr") as keys in [unordered associative containers](../container.html#Unordered_associative_containers "cpp/container") | [`202306L`](../compiler_support/26.html#cpp_lib_smart_ptr_owner_equality_202306L "cpp/compiler support/26") | (C++26) | [P1901R2](https://wg21.link/P1901R2)  
`__cpp_lib_source_location` | Source-code information capture ([std::source_location](../utility/source_location.html "cpp/utility/source location"))  | [`201907L`](../compiler_support/20.html#cpp_lib_source_location_201907L "cpp/compiler support/20") | (C++20) | [P1208R6](https://wg21.link/P1208R6)  
`__cpp_lib_span` | [`std::span`](../container/span.html "cpp/container/span") | [`202002L`](../compiler_support/20.html#cpp_lib_span_202002L "cpp/compiler support/20") | (C++20) | [P0122R7](https://wg21.link/P0122R7)  
[LWG3274](https://wg21.link/LWG3274)  
[P1024R3](https://wg21.link/P1024R3)  
[P1976R2](https://wg21.link/P1976R2)  
Making parts of std::span freestanding  | [`202311L`](../compiler_support/26.html#cpp_lib_span_202311L "cpp/compiler support/26") | (C++26) | [P2821R5](https://wg21.link/P2821R5)  
[P2833R2](https://wg21.link/P2833R2)  
`__cpp_lib_span_initializer_list` | Constructing std::span from an initializer list  | [`202311L`](../compiler_support/26.html#cpp_lib_span_initializer_list_202311L "cpp/compiler support/26") | (C++26) | [P2447R6](https://wg21.link/P2447R6)  
`__cpp_lib_spanstream` | [`std::spanbuf`](../io/basic_spanbuf.html "cpp/io/basic spanbuf"), [`std::spanstream`](../io/basic_spanstream.html "cpp/io/basic spanstream") | [`202106L`](../compiler_support/23.html#cpp_lib_spanstream_202106L "cpp/compiler support/23") | (C++23) | [P0448R4](https://wg21.link/P0448R4)  
`__cpp_lib_ssize` | [`std::ssize`](../iterator/size.html "cpp/iterator/size") and unsigned [`std::span::size`](../container/span/size.html "cpp/container/span/size") | [`201902L`](../compiler_support/20.html#cpp_lib_ssize_201902L "cpp/compiler support/20") | (C++20) | [P1227R2](https://wg21.link/P1227R2)  
`__cpp_lib_sstream_from_string_view` | Interfacing [std::stringstream](../io/basic_stringstream.html "cpp/io/basic stringstream")s with [std::string_view](../string/basic_string_view.html "cpp/string/basic string view") | [`202306L`](../compiler_support/26.html#cpp_lib_sstream_from_string_view_202306L "cpp/compiler support/26") | (C++26) | [P2495R3](https://wg21.link/P2495R3)  
`__cpp_lib_stacktrace` | [Stacktrace library](../error.html#Stacktrace "cpp/error") | [`202011L`](../compiler_support/23.html#cpp_lib_stacktrace_202011L "cpp/compiler support/23") | (C++23) | [P0881R7](https://wg21.link/P0881R7)  
`__cpp_lib_start_lifetime_as` | Explicit lifetime management (std::start_lifetime_as)  | [`202207L`](../compiler_support/23.html#cpp_lib_start_lifetime_as_202207L "cpp/compiler support/23") | (C++23) | [P2590R2](https://wg21.link/P2590R2)  
`__cpp_lib_starts_ends_with` | String prefix and suffix checking (`starts_with()` and `ends_with()` for [std::string](../string/basic_string.html "cpp/string/basic string") and [std::string_view](../string/basic_string_view.html "cpp/string/basic string view"))  | [`201711L`](../compiler_support/20.html#cpp_lib_starts_ends_with_201711L "cpp/compiler support/20") | (C++20) | [P0457R2](https://wg21.link/P0457R2)  
`__cpp_lib_stdatomic_h` | Compatibility header for C atomic operations  | [`202011L`](../compiler_support/23.html#cpp_lib_stdatomic_h_202011L "cpp/compiler support/23") | (C++23) | [P0943R6](https://wg21.link/P0943R6)  
`__cpp_lib_string_contains` | `contains()` for [std::basic_string](../string/basic_string.html "cpp/string/basic string") and [std::basic_string_view](../string/basic_string_view.html "cpp/string/basic string view") | [`202011L`](../compiler_support/23.html#cpp_lib_string_contains_202011L "cpp/compiler support/23") | (C++23) | [P1679R3](https://wg21.link/P1679R3)  
`__cpp_lib_string_resize_and_overwrite` | std::basic_string::resize_and_overwrite | [`202110L`](../compiler_support/23.html#cpp_lib_string_resize_and_overwrite_202110L "cpp/compiler support/23") | (C++23) | [P1072R10](https://wg21.link/P1072R10)  
`__cpp_lib_string_udls` | [User-defined literals for string types](../string/basic_string/operator""s.html "cpp/string/basic string/operator""s") | [`201304L`](../compiler_support/14.html#cpp_lib_string_udls_201304L "cpp/compiler support/14") | (C++14) | [N3642](https://wg21.link/N3642)  
`__cpp_lib_string_view` | [std::string_view](../string/basic_string_view.html "cpp/string/basic string view") | [`201606L`](../compiler_support/17.html#cpp_lib_string_view_201606L "cpp/compiler support/17") | (C++17) | [P0220R1](https://wg21.link/P0220R1)  
[P0254R2](https://wg21.link/P0254R2)  
[ConstexprIterator](../named_req/ConstexprIterator.html "cpp/named req/ConstexprIterator") | [`201803L`](../compiler_support/20.html#cpp_lib_string_view_201803L "cpp/compiler support/20") | (C++20) | [P0858R0](https://wg21.link/P0858R0)  
[LWG3257](https://wg21.link/LWG3257)  
[Concatenation](https://en.cppreference.com/w/cpp/string/basic_string/operator%2B "cpp/string/basic string/operator+") of [std::string](../string/basic_string.html "cpp/string/basic string")s and [std::string_view](../string/basic_string_view.html "cpp/string/basic string view")s  | [`202403L`](../compiler_support/26.html#cpp_lib_string_view_202403L "cpp/compiler support/26") | (C++26) | [P2591R5](https://wg21.link/P2591R5)  
`__cpp_lib_submdspan` | std::submdspan | [`202306L`](../compiler_support/26.html#cpp_lib_submdspan_202306L "cpp/compiler support/26") | (C++26) | [P2630R4](https://wg21.link/P2630R4)  
Padded mdspan layouts  | [`202403L`](../compiler_support/26.html#cpp_lib_submdspan_202403L "cpp/compiler support/26") | [P2642R6](https://wg21.link/P2642R6)  
`__cpp_lib_syncbuf` | Synchronized buffered ostream (std::syncbuf, std::osyncstream) and manipulators  | [`201803L`](../compiler_support/20.html#cpp_lib_syncbuf_201803L "cpp/compiler support/20") | (C++20) | [P0053R7](https://wg21.link/P0053R7)  
[P0753R2](https://wg21.link/P0753R2)  
`__cpp_lib_text_encoding` | std::text_encoding | [`202306L`](../compiler_support/26.html#cpp_lib_text_encoding_202306L "cpp/compiler support/26") | (C++26) | [P1885R12](https://wg21.link/P1885R12)  
`__cpp_lib_three_way_comparison` | [Three-way comparison](../language/operator_comparison.html#Three-way_comparison "cpp/language/operator comparison") (library support); adding three-way comparison to the library  | [`201907L`](../compiler_support/20.html#cpp_lib_three_way_comparison_201907L "cpp/compiler support/20") | (C++20) | [P0768R1](https://wg21.link/P0768R1)  
[P1614R2](https://wg21.link/P1614R2)  
`__cpp_lib_to_address` | Utility to convert a pointer to a raw pointer (std::to_address)  | [`201711L`](../compiler_support/20.html#cpp_lib_to_address_201711L "cpp/compiler support/20") | (C++20) | [P0653R2](https://wg21.link/P0653R2)  
`__cpp_lib_to_array` | [`std::to_array`](../container/array/to_array.html "cpp/container/array/to array") | [`201907L`](../compiler_support/20.html#cpp_lib_to_array_201907L "cpp/compiler support/20") | (C++20) | [P0325R4](https://wg21.link/P0325R4)  
`__cpp_lib_to_chars` | Elementary string conversions ([`std::to_chars`](../utility/to_chars.html "cpp/utility/to chars"), [`std::from_chars`](../utility/from_chars.html "cpp/utility/from chars"))  | [`201611L`](../compiler_support/17.html#cpp_lib_to_chars_201611L "cpp/compiler support/17") | (C++17) | [P0067R5](https://wg21.link/P0067R5)  
[P0682R1](https://wg21.link/P0682R1)  
[LWG3137](https://wg21.link/LWG3137)  
Testing for success or failure of [`<charconv>`](../header/charconv.html "cpp/header/charconv") functions  | [`202306L`](../compiler_support/26.html#cpp_lib_to_chars_202306L "cpp/compiler support/26") | (C++26) | [P2497R0](https://wg21.link/P2497R0)  
`__cpp_lib_to_string` | Redefining [std::to_string](../string/basic_string/to_string.html "cpp/string/basic string/to string") in terms of [std::format](../utility/format/format.html "cpp/utility/format/format") | [`202306L`](../compiler_support/26.html#cpp_lib_to_string_202306L "cpp/compiler support/26") | (C++26) | [P2587R3](https://wg21.link/P2587R3)  
`__cpp_lib_to_underlying` | [`std::to_underlying`](../utility/to_underlying.html "cpp/utility/to underlying") | [`202102L`](../compiler_support/23.html#cpp_lib_to_underlying_202102L "cpp/compiler support/23") | (C++23) | [P1682R3](https://wg21.link/P1682R3)  
`__cpp_lib_transformation_trait_aliases` | Alias templates for [transformation traits](../meta.html#Type_transformations "cpp/meta") | [`201304L`](../compiler_support/14.html#cpp_lib_transformation_trait_aliases_201304L "cpp/compiler support/14") | (C++14) | [N3655](https://wg21.link/N3655)  
`__cpp_lib_transparent_operators` | Transparent operator functors (std::less<> et al)  | [`201210L`](../compiler_support/14.html#cpp_lib_transparent_operators_201210L "cpp/compiler support/14") | (C++14) | [N3421](https://wg21.link/N3421)  
Transparent [std::owner_less](../memory/owner_less.html "cpp/memory/owner less") ([`std::owner_less<void>`](../memory/owner_less_void.html "cpp/memory/owner less void"))  | [`201510L`](../compiler_support/17.html#cpp_lib_transparent_operators_201510L "cpp/compiler support/17") | (C++17) | [P0074R0](https://wg21.link/P0074R0)  
`__cpp_lib_trivially_relocatable` | Trivial relocatability traits and operations  | [`202502L`](../compiler_support/26.html#cpp_lib_trivially_relocatable_202502L "cpp/compiler support/26") | (C++26) | [P2786R13](https://wg21.link/P2786R13)  
`__cpp_lib_tuple_element_t` | [`std::tuple_element_t`](../utility/tuple_element.html#Helper_types "cpp/utility/tuple element") | [`201402L`](../compiler_support/14.html#cpp_lib_tuple_element_t_201402L "cpp/compiler support/14") | (C++14) | [N3887](https://wg21.link/N3887)  
`__cpp_lib_tuple_like` | Compatibility between [std::tuple](../utility/tuple.html "cpp/utility/tuple") and tuple-like objects ([std::pair](../utility/pair.html "cpp/utility/pair"), [std::array](../container/array.html "cpp/container/array"), std::subrange)  | [`202207L`](../compiler_support/23.html#cpp_lib_tuple_like_202207L "cpp/compiler support/23") | (C++23) | [P2165R4](https://wg21.link/P2165R4)  
Add tuple protocol to [std::complex](../numeric/complex.html "cpp/numeric/complex") | [`202311L`](../compiler_support/26.html#cpp_lib_tuple_like_202311L "cpp/compiler support/26") | (C++26) | [P2819R2](https://wg21.link/P2819R2)  
`__cpp_lib_tuples_by_type` | [Addressing tuples by type](../utility/tuple/get.html "cpp/utility/tuple/get") | [`201304L`](../compiler_support/14.html#cpp_lib_tuples_by_type_201304L "cpp/compiler support/14") | (C++14) | [N3670](https://wg21.link/N3670)  
`__cpp_lib_type_identity` | std::type_identity | [`201806L`](../compiler_support/20.html#cpp_lib_type_identity_201806L "cpp/compiler support/20") | (C++20) | [P0887R1](https://wg21.link/P0887R1)  
`__cpp_lib_type_trait_variable_templates` | Type traits variable templates ([std::is_void_v](../types/is_void.html "cpp/types/is void"), etc)  | [`201510L`](../compiler_support/17.html#cpp_lib_type_trait_variable_templates_201510L "cpp/compiler support/17") | (C++17) | [P0006R0](https://wg21.link/P0006R0)  
`__cpp_lib_uncaught_exceptions` | [`std::uncaught_exceptions`](../error/exception/uncaught_exception.html "cpp/error/uncaught exception") | [`201411L`](../compiler_support/17.html#cpp_lib_uncaught_exceptions_201411L "cpp/compiler support/17") | (C++17) | [N4259](https://wg21.link/N4259)  
`__cpp_lib_unordered_map_try_emplace` | [std::unordered_map::try_emplace](../container/unordered_map/try_emplace.html "cpp/container/unordered map/try emplace"), [std::unordered_map::insert_or_assign](../container/unordered_map/insert_or_assign.html "cpp/container/unordered map/insert or assign") | [`201411L`](../compiler_support/17.html#cpp_lib_unordered_map_try_emplace_201411L "cpp/compiler support/17") | (C++17) | [N4279](https://wg21.link/N4279)  
`__cpp_lib_unreachable` | std::unreachable | [`202202L`](../compiler_support/23.html#cpp_lib_unreachable_202202L "cpp/compiler support/23") | (C++23) | [P0627R6](https://wg21.link/P0627R6)  
`__cpp_lib_unwrap_ref` | [std::unwrap_ref_decay](../utility/functional/unwrap_reference.html "cpp/utility/functional/unwrap reference") and [std::unwrap_reference](../utility/functional/unwrap_reference.html "cpp/utility/functional/unwrap reference") | [`201811L`](../compiler_support/20.html#cpp_lib_unwrap_ref_201811L "cpp/compiler support/20") | (C++20) | [P0318R1](https://wg21.link/P0318R1)  
[LWG3348](https://wg21.link/LWG3348)  
`__cpp_lib_variant` | [std::variant](../utility/variant.html "cpp/utility/variant"): A type-safe union for C++17  | [`201606L`](../compiler_support/17.html#cpp_lib_variant_201606L "cpp/compiler support/17") | (C++17) | [P0088R3](https://wg21.link/P0088R3)  
[P0393R3](https://wg21.link/P0393R3)  
[P0032R3](https://wg21.link/P0032R3)  
[`std::visit`](../utility/variant/visit2.html "cpp/utility/variant/visit2") for classes derived from [std::variant](../utility/variant.html "cpp/utility/variant") | [`202102L`](../compiler_support/23.html#cpp_lib_variant_202102L "cpp/compiler support/23") | (C++23)  
(DR17) | [P2162R2](https://wg21.link/P2162R2)  
Fully constexpr [std::variant](../utility/variant.html "cpp/utility/variant") | [`202106L`](../compiler_support/23.html#cpp_lib_variant_202106L "cpp/compiler support/23") | (C++23)  
(DR20) | [P2231R1](https://wg21.link/P2231R1)  
Member [`visit`](../utility/variant/visit.html "cpp/utility/variant/visit") | [`202306L`](../compiler_support/26.html#cpp_lib_variant_202306L "cpp/compiler support/26") | (C++26) | [P2637R3](https://wg21.link/P2637R3)  
`__cpp_lib_void_t` | [std::void_t](../types/void_t.html "cpp/types/void t") | [`201411L`](../compiler_support/17.html#cpp_lib_void_t_201411L "cpp/compiler support/17") | (C++17) | [N3911](https://wg21.link/N3911)  
Total number of macros: 282   
  
### Example

#### Normal usage

Run this code
    
    
    #ifdef __has_include                           // Check if __has_include is present
    #  if __has_include(<optional>)                // Check for a standard library
    #    include <optional>
    #  elif __has_include(<experimental/optional>) // Check for an experimental version
    #    include <experimental/optional>
    #  elif __has_include(<boost/optional.hpp>)    // Try with an external library
    #    include <boost/optional.hpp>
    #  else                                        // Not found at all
    #     error "Missing <optional>"
    #  endif
    #endif
     
    #ifdef __has_cpp_attribute                      // Check if __has_cpp_attribute is present
    #  if __has_cpp_attribute(deprecated)           // Check for an attribute
    #    define DEPRECATED(msg) [[deprecated(msg)]]
    #  endif
    #endif
    #ifndef DEPRECATED
    #    define DEPRECATED(msg)
    #endif
     
    DEPRECATED("foo() has been deprecated") void foo();
     
    #if __cpp_constexpr >= 201304                // Check for a specific version of a feature
    #  define CONSTEXPR constexpr
    #else
    #  define CONSTEXPR inline
    #endif
     
    CONSTEXPR int bar(unsigned i)
    {
    #if __cpp_binary_literals                    // Check for the presence of a feature
        unsigned mask1 = 0b11000000;
        unsigned mask2 = 0b00000111;
    #else
        unsigned mask1 = 0xC0;
        unsigned mask2 = 0x07;
    #endif
        if (i & mask1)
            return 1;
        if (i & mask2)
            return 2;
        return 0;
    }
     
    int main() {}

#### Compiler Features Dump



The following (C++11 compatible) program dumps C++ compiler features and attributes. Note that the use of __has_cpp_attribute() is not [conformant](feature_test.html#Attributes "cpp/feature test") and depends on the gcc/clang implementation.

Run this code
    
    
    static constexpr struct choose_what_and_how_to_print
    {
        constexpr static int longest_macro_name { 45 };
        constexpr static bool titles               = 1;
        constexpr static bool counters             = 1;
        constexpr static bool attributes           = 1;
        constexpr static bool standard_values      = 1;
        constexpr static bool compiler_specific    = 1;
        constexpr static bool core_features        = 1;
        constexpr static bool lib_features         = 1;
        constexpr static bool supported_features   = 1;
        constexpr static bool unsupported_features = 1;
        constexpr static bool sort_by_date         = 0;
        constexpr static bool separate_year_month  = 1;
        constexpr static bool separated_revisions  = 1;
        constexpr static bool latest_revisions     = 1;
        constexpr static bool cxx98                = 0;
        constexpr static bool cxx11                = 1;
        constexpr static bool cxx14                = 1;
        constexpr static bool cxx17                = 1;
        constexpr static bool cxx20                = 1;
        constexpr static bool cxx23                = 1;
        constexpr static bool cxx26                = 1;
        constexpr static bool cxx29                = 0;
    } print;
     
    #if __cplusplus < 201100
    #  error "C++11 or better is required"
    #endif
     
    #include <algorithm>
    #include <cstdio>
    #include <cstring>
    #include <utility>
    #include <vector>
     
    #ifdef __has_include
    # if __has_include(<version>)
    #   include <version>
    # endif
    # if __has_include(<stdfloat>)
    #   include <stdfloat>
    # endif
    #endif
     
    // Expect a string that starts with 6-decimal-digits or with '_' (if unsupported)
    #define COMPILER_VALUE_INT(n) #n [0] == '_' ? 0 : \
        (#n[5] - '0') + (#n[4] - '0') * 10 + (#n[3] - '0') * 100 + \
        (#n[2] - '0') * 1000 + (#n[1] - '0') * 10000 + (#n[0] - '0') * 100000
    #define COMPILER_FEATURE_ENTRY(expect, name) { #name, COMPILER_VALUE_INT(name), expect },
     
    #if defined(__has_cpp_attribute) && defined(__GNUG__)
    # define COMPILER_ATTRIBUTE(expect, name) { #name, __has_cpp_attribute(name), expect },
    #else
    # define COMPILER_ATTRIBUTE(expect, name) { #name, COMPILER_VALUE_INT(name), expect },
    #endif
     
    #define COMPILER_SPECIFIC_STRING(value) #value
    #define COMPILER_SPECIFIC_ENTRY(name) { #name, COMPILER_SPECIFIC_STRING(name) },
     
    class CompilerFeature
    {
        char const* name_; long data_; long std_;
    public:
        constexpr CompilerFeature(char const* name, long data, long std)
            : name_(name), data_(data), std_(std) {}
        constexpr CompilerFeature(CompilerFeature const&) = default;
        CompilerFeature& operator=(CompilerFeature const&) = default;
        bool operator<(CompilerFeature const& rhs) const
            { return [std::strcmp](../string/byte/strcmp.html)(name_, rhs.name_) < 0; }
        bool operator==(CompilerFeature const& rhs) const
            { return [std::strcmp](../string/byte/strcmp.html)(name_, rhs.name_) == 0; }
        constexpr bool supported() const { return data_ >= std_; }
        constexpr bool maybe() const { return data_ > 0; }
        constexpr char const* name() const { return name_; }
        constexpr long std() const { return std_; }
        constexpr long data() const { return data_; }
        void data(long x) { data_ = x; }
    };
     
    // Non-FTM macros, including implementation specific ones:
    static /*constexpr*/ [std::pair](../utility/pair.html)<const char*, const char*> compiler[] = {
        COMPILER_SPECIFIC_ENTRY(__cplusplus)
        COMPILER_SPECIFIC_ENTRY(__clang_major__)
        COMPILER_SPECIFIC_ENTRY(__clang_minor__)
        COMPILER_SPECIFIC_ENTRY(__clang_patchlevel__)
        COMPILER_SPECIFIC_ENTRY(__GNUG__)
        COMPILER_SPECIFIC_ENTRY(__GNUC_MINOR__)
        COMPILER_SPECIFIC_ENTRY(__GNUC_PATCHLEVEL__)
        // Optional <stdfloat> fixed width floating-point types (C++23)
        COMPILER_SPECIFIC_ENTRY(__STDCPP_FLOAT16_T__)
        COMPILER_SPECIFIC_ENTRY(__STDCPP_FLOAT32_T__)
        COMPILER_SPECIFIC_ENTRY(__STDCPP_FLOAT64_T__)
        COMPILER_SPECIFIC_ENTRY(__STDCPP_FLOAT128_T__)
        COMPILER_SPECIFIC_ENTRY(__STDCPP_BFLOAT16_T__)
        // C23 => C++26
        COMPILER_SPECIFIC_ENTRY(__STDC_ENDIAN_BIG__)
        COMPILER_SPECIFIC_ENTRY(__STDC_ENDIAN_LITTLE__)
        COMPILER_SPECIFIC_ENTRY(__STDC_ENDIAN_NATIVE__)
        COMPILER_SPECIFIC_ENTRY(__STDC_VERSION_STDBIT_H__)
        COMPILER_SPECIFIC_ENTRY(__STDC_VERSION_STDCKDINT_H__)
        // Add your favorite implementation specific macros...
        COMPILER_SPECIFIC_ENTRY(__STDCPP_DEFAULT_NEW_ALIGNMENT__)
        COMPILER_SPECIFIC_ENTRY(__STDCPP_THREADS__)
        COMPILER_SPECIFIC_ENTRY(__STDCPP_STRICT_POINTER_SAFETY__)
        COMPILER_SPECIFIC_ENTRY(__STDC_EMBED_NOT_FOUND__)
        COMPILER_SPECIFIC_ENTRY(__STDC_EMBED_FOUND__)
        COMPILER_SPECIFIC_ENTRY(__STDC_EMBED_EMPTY__)
        COMPILER_SPECIFIC_ENTRY(__STDC__)
        COMPILER_SPECIFIC_ENTRY(__STDC_VERSION__)
        COMPILER_SPECIFIC_ENTRY(__STDC_HOSTED__)
        COMPILER_SPECIFIC_ENTRY(__STDC_ISO_10646__)
        COMPILER_SPECIFIC_ENTRY(__STDC_MB_MIGHT_NEQ_WC__)
        COMPILER_SPECIFIC_ENTRY(__DATE__)
        COMPILER_SPECIFIC_ENTRY(__TIME__)
    };
     
    static constexpr CompilerFeature cxx98_core[] = {
        COMPILER_FEATURE_ENTRY(199711L, __cpp_exceptions)
        COMPILER_FEATURE_ENTRY(199711L, __cpp_rtti)
    };
     
    static constexpr CompilerFeature cxx11_core[] = {
        COMPILER_FEATURE_ENTRY(200704L, __cpp_alias_templates)
        COMPILER_FEATURE_ENTRY(200809L, __cpp_attributes)
        COMPILER_FEATURE_ENTRY(200704L, __cpp_constexpr)
        COMPILER_FEATURE_ENTRY(201711L, __cpp_constexpr_in_decltype)
        COMPILER_FEATURE_ENTRY(200707L, __cpp_decltype)
        COMPILER_FEATURE_ENTRY(200604L, __cpp_delegating_constructors)
        COMPILER_FEATURE_ENTRY(201511L, __cpp_inheriting_constructors)
        COMPILER_FEATURE_ENTRY(200806L, __cpp_initializer_lists)
        COMPILER_FEATURE_ENTRY(200907L, __cpp_lambdas)
        COMPILER_FEATURE_ENTRY(200809L, __cpp_nsdmi)
        COMPILER_FEATURE_ENTRY(200907L, __cpp_range_based_for)
        COMPILER_FEATURE_ENTRY(200710L, __cpp_raw_strings)
        COMPILER_FEATURE_ENTRY(200710L, __cpp_ref_qualifiers)
        COMPILER_FEATURE_ENTRY(200610L, __cpp_rvalue_references)
        COMPILER_FEATURE_ENTRY(200410L, __cpp_static_assert)
        COMPILER_FEATURE_ENTRY(200806L, __cpp_threadsafe_static_init)
        COMPILER_FEATURE_ENTRY(200704L, __cpp_unicode_characters)
        COMPILER_FEATURE_ENTRY(200710L, __cpp_unicode_literals)
        COMPILER_FEATURE_ENTRY(200809L, __cpp_user_defined_literals)
        COMPILER_FEATURE_ENTRY(200704L, __cpp_variadic_templates)
    };
     
    static constexpr CompilerFeature cxx14_core[] = {
        COMPILER_FEATURE_ENTRY(201304L, __cpp_aggregate_nsdmi)
        COMPILER_FEATURE_ENTRY(201304L, __cpp_binary_literals)
        COMPILER_FEATURE_ENTRY(201304L, __cpp_constexpr)
        COMPILER_FEATURE_ENTRY(201304L, __cpp_decltype_auto)
        COMPILER_FEATURE_ENTRY(201304L, __cpp_generic_lambdas)
        COMPILER_FEATURE_ENTRY(201304L, __cpp_init_captures)
        COMPILER_FEATURE_ENTRY(201304L, __cpp_return_type_deduction)
        COMPILER_FEATURE_ENTRY(201309L, __cpp_sized_deallocation)
        COMPILER_FEATURE_ENTRY(201304L, __cpp_variable_templates)
    };
    static constexpr CompilerFeature cxx14_lib[] = {
        COMPILER_FEATURE_ENTRY(201304L, __cpp_lib_chrono_udls)
        COMPILER_FEATURE_ENTRY(201309L, __cpp_lib_complex_udls)
        COMPILER_FEATURE_ENTRY(201304L, __cpp_lib_exchange_function)
        COMPILER_FEATURE_ENTRY(201304L, __cpp_lib_generic_associative_lookup)
        COMPILER_FEATURE_ENTRY(201304L, __cpp_lib_integer_sequence)
        COMPILER_FEATURE_ENTRY(201304L, __cpp_lib_integral_constant_callable)
        COMPILER_FEATURE_ENTRY(201402L, __cpp_lib_is_final)
        COMPILER_FEATURE_ENTRY(201309L, __cpp_lib_is_null_pointer)
        COMPILER_FEATURE_ENTRY(201402L, __cpp_lib_make_reverse_iterator)
        COMPILER_FEATURE_ENTRY(201304L, __cpp_lib_make_unique)
        COMPILER_FEATURE_ENTRY(201304L, __cpp_lib_null_iterators)
        COMPILER_FEATURE_ENTRY(201304L, __cpp_lib_quoted_string_io)
        COMPILER_FEATURE_ENTRY(201210L, __cpp_lib_result_of_sfinae)
        COMPILER_FEATURE_ENTRY(201304L, __cpp_lib_robust_nonmodifying_seq_ops)
        COMPILER_FEATURE_ENTRY(201402L, __cpp_lib_shared_timed_mutex)
        COMPILER_FEATURE_ENTRY(201304L, __cpp_lib_string_udls)
        COMPILER_FEATURE_ENTRY(201304L, __cpp_lib_transformation_trait_aliases)
        COMPILER_FEATURE_ENTRY(201210L, __cpp_lib_transparent_operators)
        COMPILER_FEATURE_ENTRY(201402L, __cpp_lib_tuple_element_t)
        COMPILER_FEATURE_ENTRY(201304L, __cpp_lib_tuples_by_type)
    };
     
    static constexpr CompilerFeature cxx17_core[] = {
        COMPILER_FEATURE_ENTRY(201603L, __cpp_aggregate_bases)
        COMPILER_FEATURE_ENTRY(201606L, __cpp_aligned_new)
        COMPILER_FEATURE_ENTRY(201603L, __cpp_capture_star_this)
        COMPILER_FEATURE_ENTRY(201603L, __cpp_constexpr)
        COMPILER_FEATURE_ENTRY(201703L, __cpp_deduction_guides)
        COMPILER_FEATURE_ENTRY(201411L, __cpp_enumerator_attributes)
        COMPILER_FEATURE_ENTRY(201603L, __cpp_fold_expressions)
        COMPILER_FEATURE_ENTRY(201606L, __cpp_guaranteed_copy_elision)
        COMPILER_FEATURE_ENTRY(201603L, __cpp_hex_float)
        COMPILER_FEATURE_ENTRY(201606L, __cpp_if_constexpr)
        COMPILER_FEATURE_ENTRY(201606L, __cpp_inline_variables)
        COMPILER_FEATURE_ENTRY(201411L, __cpp_namespace_attributes)
        COMPILER_FEATURE_ENTRY(201510L, __cpp_noexcept_function_type)
        COMPILER_FEATURE_ENTRY(201411L, __cpp_nontype_template_args)
        COMPILER_FEATURE_ENTRY(201606L, __cpp_nontype_template_parameter_auto)
        COMPILER_FEATURE_ENTRY(201603L, __cpp_range_based_for)
        COMPILER_FEATURE_ENTRY(201411L, __cpp_static_assert)
        COMPILER_FEATURE_ENTRY(201606L, __cpp_structured_bindings)
        COMPILER_FEATURE_ENTRY(201611L, __cpp_template_template_args)
        COMPILER_FEATURE_ENTRY(201611L, __cpp_variadic_using)
    };
    static constexpr CompilerFeature cxx17_lib[] = {
        COMPILER_FEATURE_ENTRY(201603L, __cpp_lib_addressof_constexpr)
        COMPILER_FEATURE_ENTRY(201411L, __cpp_lib_allocator_traits_is_always_equal)
        COMPILER_FEATURE_ENTRY(201606L, __cpp_lib_any)
        COMPILER_FEATURE_ENTRY(201603L, __cpp_lib_apply)
        COMPILER_FEATURE_ENTRY(201603L, __cpp_lib_array_constexpr)
        COMPILER_FEATURE_ENTRY(201510L, __cpp_lib_as_const)
        COMPILER_FEATURE_ENTRY(201603L, __cpp_lib_atomic_is_always_lock_free)
        COMPILER_FEATURE_ENTRY(201505L, __cpp_lib_bool_constant)
        COMPILER_FEATURE_ENTRY(201603L, __cpp_lib_boyer_moore_searcher)
        COMPILER_FEATURE_ENTRY(201603L, __cpp_lib_byte)
        COMPILER_FEATURE_ENTRY(201611L, __cpp_lib_chrono)
        COMPILER_FEATURE_ENTRY(201603L, __cpp_lib_clamp)
        COMPILER_FEATURE_ENTRY(201603L, __cpp_lib_enable_shared_from_this)
        COMPILER_FEATURE_ENTRY(201603L, __cpp_lib_execution)
        COMPILER_FEATURE_ENTRY(201703L, __cpp_lib_filesystem)
        COMPILER_FEATURE_ENTRY(201606L, __cpp_lib_gcd_lcm)
        COMPILER_FEATURE_ENTRY(201703L, __cpp_lib_hardware_interference_size)
        COMPILER_FEATURE_ENTRY(201606L, __cpp_lib_has_unique_object_representations)
        COMPILER_FEATURE_ENTRY(201603L, __cpp_lib_hypot)
        COMPILER_FEATURE_ENTRY(201505L, __cpp_lib_incomplete_container_elements)
        COMPILER_FEATURE_ENTRY(201411L, __cpp_lib_invoke)
        COMPILER_FEATURE_ENTRY(201703L, __cpp_lib_is_aggregate)
        COMPILER_FEATURE_ENTRY(201703L, __cpp_lib_is_invocable)
        COMPILER_FEATURE_ENTRY(201603L, __cpp_lib_is_swappable)
        COMPILER_FEATURE_ENTRY(201606L, __cpp_lib_launder)
        COMPILER_FEATURE_ENTRY(201510L, __cpp_lib_logical_traits)
        COMPILER_FEATURE_ENTRY(201606L, __cpp_lib_make_from_tuple)
        COMPILER_FEATURE_ENTRY(201411L, __cpp_lib_map_try_emplace)
        COMPILER_FEATURE_ENTRY(201603L, __cpp_lib_math_special_functions)
        COMPILER_FEATURE_ENTRY(201603L, __cpp_lib_memory_resource)
        COMPILER_FEATURE_ENTRY(201606L, __cpp_lib_node_extract)
        COMPILER_FEATURE_ENTRY(201411L, __cpp_lib_nonmember_container_access)
        COMPILER_FEATURE_ENTRY(201603L, __cpp_lib_not_fn)
        COMPILER_FEATURE_ENTRY(201606L, __cpp_lib_optional)
        COMPILER_FEATURE_ENTRY(201603L, __cpp_lib_parallel_algorithm)
        COMPILER_FEATURE_ENTRY(201606L, __cpp_lib_raw_memory_algorithms)
        COMPILER_FEATURE_ENTRY(201603L, __cpp_lib_sample)
        COMPILER_FEATURE_ENTRY(201703L, __cpp_lib_scoped_lock)
        COMPILER_FEATURE_ENTRY(201505L, __cpp_lib_shared_mutex)
        COMPILER_FEATURE_ENTRY(201611L, __cpp_lib_shared_ptr_arrays)
        COMPILER_FEATURE_ENTRY(201606L, __cpp_lib_shared_ptr_weak_type)
        COMPILER_FEATURE_ENTRY(201606L, __cpp_lib_string_view)
        COMPILER_FEATURE_ENTRY(201611L, __cpp_lib_to_chars)
        COMPILER_FEATURE_ENTRY(201510L, __cpp_lib_transparent_operators)
        COMPILER_FEATURE_ENTRY(201510L, __cpp_lib_type_trait_variable_templates)
        COMPILER_FEATURE_ENTRY(201411L, __cpp_lib_uncaught_exceptions)
        COMPILER_FEATURE_ENTRY(201411L, __cpp_lib_unordered_map_try_emplace)
        COMPILER_FEATURE_ENTRY(202102L, __cpp_lib_variant)
        COMPILER_FEATURE_ENTRY(201411L, __cpp_lib_void_t)
    };
     
    static constexpr CompilerFeature cxx20_core[] = {
        COMPILER_FEATURE_ENTRY(201902L, __cpp_aggregate_paren_init)
        COMPILER_FEATURE_ENTRY(202207L, __cpp_char8_t)
        COMPILER_FEATURE_ENTRY(202002L, __cpp_concepts)
        COMPILER_FEATURE_ENTRY(201806L, __cpp_conditional_explicit)
        COMPILER_FEATURE_ENTRY(202211L, __cpp_consteval)
        COMPILER_FEATURE_ENTRY(202002L, __cpp_constexpr)
        COMPILER_FEATURE_ENTRY(201907L, __cpp_constexpr_dynamic_alloc)
        COMPILER_FEATURE_ENTRY(201907L, __cpp_constinit)
        COMPILER_FEATURE_ENTRY(201907L, __cpp_deduction_guides)
        COMPILER_FEATURE_ENTRY(201707L, __cpp_designated_initializers)
        COMPILER_FEATURE_ENTRY(201707L, __cpp_generic_lambdas)
        COMPILER_FEATURE_ENTRY(201902L, __cpp_impl_coroutine)
        COMPILER_FEATURE_ENTRY(201806L, __cpp_impl_destroying_delete)
        COMPILER_FEATURE_ENTRY(201907L, __cpp_impl_three_way_comparison)
        COMPILER_FEATURE_ENTRY(201803L, __cpp_init_captures)
        COMPILER_FEATURE_ENTRY(201907L, __cpp_modules)
        COMPILER_FEATURE_ENTRY(201911L, __cpp_nontype_template_args)
        COMPILER_FEATURE_ENTRY(201907L, __cpp_using_enum)
    };
    static constexpr CompilerFeature cxx20_lib[] = {
        COMPILER_FEATURE_ENTRY(201811L, __cpp_lib_array_constexpr)
        COMPILER_FEATURE_ENTRY(201811L, __cpp_lib_assume_aligned)
        COMPILER_FEATURE_ENTRY(201907L, __cpp_lib_atomic_flag_test)
        COMPILER_FEATURE_ENTRY(201711L, __cpp_lib_atomic_float)
        COMPILER_FEATURE_ENTRY(201907L, __cpp_lib_atomic_lock_free_type_aliases)
        COMPILER_FEATURE_ENTRY(201806L, __cpp_lib_atomic_ref)
        COMPILER_FEATURE_ENTRY(201711L, __cpp_lib_atomic_shared_ptr)
        COMPILER_FEATURE_ENTRY(201911L, __cpp_lib_atomic_value_initialization)
        COMPILER_FEATURE_ENTRY(201907L, __cpp_lib_atomic_wait)
        COMPILER_FEATURE_ENTRY(201907L, __cpp_lib_barrier)
        COMPILER_FEATURE_ENTRY(201907L, __cpp_lib_bind_front)
        COMPILER_FEATURE_ENTRY(201806L, __cpp_lib_bit_cast)
        COMPILER_FEATURE_ENTRY(201907L, __cpp_lib_bitops)
        COMPILER_FEATURE_ENTRY(201902L, __cpp_lib_bounded_array_traits)
        COMPILER_FEATURE_ENTRY(201907L, __cpp_lib_char8_t)
        COMPILER_FEATURE_ENTRY(201907L, __cpp_lib_chrono)
        COMPILER_FEATURE_ENTRY(202002L, __cpp_lib_concepts)
        COMPILER_FEATURE_ENTRY(201806L, __cpp_lib_constexpr_algorithms)
        COMPILER_FEATURE_ENTRY(201711L, __cpp_lib_constexpr_complex)
        COMPILER_FEATURE_ENTRY(201907L, __cpp_lib_constexpr_dynamic_alloc)
        COMPILER_FEATURE_ENTRY(201907L, __cpp_lib_constexpr_functional)
        COMPILER_FEATURE_ENTRY(201811L, __cpp_lib_constexpr_iterator)
        COMPILER_FEATURE_ENTRY(201811L, __cpp_lib_constexpr_memory)
        COMPILER_FEATURE_ENTRY(201911L, __cpp_lib_constexpr_numeric)
        COMPILER_FEATURE_ENTRY(201907L, __cpp_lib_constexpr_string)
        COMPILER_FEATURE_ENTRY(201811L, __cpp_lib_constexpr_string_view)
        COMPILER_FEATURE_ENTRY(201811L, __cpp_lib_constexpr_tuple)
        COMPILER_FEATURE_ENTRY(201811L, __cpp_lib_constexpr_utility)
        COMPILER_FEATURE_ENTRY(201907L, __cpp_lib_constexpr_vector)
        COMPILER_FEATURE_ENTRY(201902L, __cpp_lib_coroutine)
        COMPILER_FEATURE_ENTRY(201806L, __cpp_lib_destroying_delete)
        COMPILER_FEATURE_ENTRY(201907L, __cpp_lib_endian)
        COMPILER_FEATURE_ENTRY(202002L, __cpp_lib_erase_if)
        COMPILER_FEATURE_ENTRY(201902L, __cpp_lib_execution)
        COMPILER_FEATURE_ENTRY(202110L, __cpp_lib_format)
        COMPILER_FEATURE_ENTRY(201811L, __cpp_lib_generic_unordered_lookup)
        COMPILER_FEATURE_ENTRY(202002L, __cpp_lib_int_pow2)
        COMPILER_FEATURE_ENTRY(202002L, __cpp_lib_integer_comparison_functions)
        COMPILER_FEATURE_ENTRY(201902L, __cpp_lib_interpolate)
        COMPILER_FEATURE_ENTRY(201811L, __cpp_lib_is_constant_evaluated)
        COMPILER_FEATURE_ENTRY(201907L, __cpp_lib_is_layout_compatible)
        COMPILER_FEATURE_ENTRY(201806L, __cpp_lib_is_nothrow_convertible)
        COMPILER_FEATURE_ENTRY(201907L, __cpp_lib_is_pointer_interconvertible)
        COMPILER_FEATURE_ENTRY(201911L, __cpp_lib_jthread)
        COMPILER_FEATURE_ENTRY(201907L, __cpp_lib_latch)
        COMPILER_FEATURE_ENTRY(201806L, __cpp_lib_list_remove_return_type)
        COMPILER_FEATURE_ENTRY(201907L, __cpp_lib_math_constants)
        COMPILER_FEATURE_ENTRY(202106L, __cpp_lib_optional)
        COMPILER_FEATURE_ENTRY(201902L, __cpp_lib_polymorphic_allocator)
        COMPILER_FEATURE_ENTRY(202110L, __cpp_lib_ranges)
        COMPILER_FEATURE_ENTRY(201711L, __cpp_lib_remove_cvref)
        COMPILER_FEATURE_ENTRY(201907L, __cpp_lib_semaphore)
        COMPILER_FEATURE_ENTRY(201707L, __cpp_lib_shared_ptr_arrays)
        COMPILER_FEATURE_ENTRY(201806L, __cpp_lib_shift)
        COMPILER_FEATURE_ENTRY(202002L, __cpp_lib_smart_ptr_for_overwrite)
        COMPILER_FEATURE_ENTRY(201907L, __cpp_lib_source_location)
        COMPILER_FEATURE_ENTRY(202002L, __cpp_lib_span)
        COMPILER_FEATURE_ENTRY(201902L, __cpp_lib_ssize)
        COMPILER_FEATURE_ENTRY(201711L, __cpp_lib_starts_ends_with)
        COMPILER_FEATURE_ENTRY(201803L, __cpp_lib_string_view)
        COMPILER_FEATURE_ENTRY(201803L, __cpp_lib_syncbuf)
        COMPILER_FEATURE_ENTRY(201907L, __cpp_lib_three_way_comparison)
        COMPILER_FEATURE_ENTRY(201711L, __cpp_lib_to_address)
        COMPILER_FEATURE_ENTRY(201907L, __cpp_lib_to_array)
        COMPILER_FEATURE_ENTRY(201806L, __cpp_lib_type_identity)
        COMPILER_FEATURE_ENTRY(201811L, __cpp_lib_unwrap_ref)
        COMPILER_FEATURE_ENTRY(202106L, __cpp_lib_variant)
    };
     
    static constexpr CompilerFeature cxx23_core[] = {
        COMPILER_FEATURE_ENTRY(202110L, __cpp_auto_cast)
        COMPILER_FEATURE_ENTRY(202211L, __cpp_constexpr)
        COMPILER_FEATURE_ENTRY(202110L, __cpp_explicit_this_parameter)
        COMPILER_FEATURE_ENTRY(202106L, __cpp_if_consteval)
        COMPILER_FEATURE_ENTRY(202207L, __cpp_implicit_move)
        COMPILER_FEATURE_ENTRY(202211L, __cpp_multidimensional_subscript)
        COMPILER_FEATURE_ENTRY(202207L, __cpp_named_character_escapes)
        COMPILER_FEATURE_ENTRY(202211L, __cpp_range_based_for)
        COMPILER_FEATURE_ENTRY(202011L, __cpp_size_t_suffix)
        COMPILER_FEATURE_ENTRY(202207L, __cpp_static_call_operator)
    };
    static constexpr CompilerFeature cxx23_lib[] = {
        COMPILER_FEATURE_ENTRY(202106L, __cpp_lib_adaptor_iterator_pair_constructor)
        COMPILER_FEATURE_ENTRY(202207L, __cpp_lib_algorithm_iterator_requirements)
        COMPILER_FEATURE_ENTRY(202302L, __cpp_lib_allocate_at_least)
        COMPILER_FEATURE_ENTRY(202110L, __cpp_lib_associative_heterogeneous_erasure)
        COMPILER_FEATURE_ENTRY(202302L, __cpp_lib_barrier)
        COMPILER_FEATURE_ENTRY(202202L, __cpp_lib_bind_back)
        COMPILER_FEATURE_ENTRY(202110L, __cpp_lib_byteswap)
        COMPILER_FEATURE_ENTRY(202302L, __cpp_lib_common_reference)
        COMPILER_FEATURE_ENTRY(202302L, __cpp_lib_common_reference_wrapper)
        COMPILER_FEATURE_ENTRY(202207L, __cpp_lib_concepts)
        COMPILER_FEATURE_ENTRY(202207L, __cpp_lib_constexpr_bitset)
        COMPILER_FEATURE_ENTRY(202207L, __cpp_lib_constexpr_charconv)
        COMPILER_FEATURE_ENTRY(202202L, __cpp_lib_constexpr_cmath)
        COMPILER_FEATURE_ENTRY(202202L, __cpp_lib_constexpr_memory)
        COMPILER_FEATURE_ENTRY(202106L, __cpp_lib_constexpr_typeinfo)
        COMPILER_FEATURE_ENTRY(202202L, __cpp_lib_containers_ranges)
        COMPILER_FEATURE_ENTRY(202211L, __cpp_lib_expected)
        COMPILER_FEATURE_ENTRY(202207L, __cpp_lib_flat_map)
        COMPILER_FEATURE_ENTRY(202207L, __cpp_lib_flat_set)
        COMPILER_FEATURE_ENTRY(202207L, __cpp_lib_format)
        COMPILER_FEATURE_ENTRY(202207L, __cpp_lib_format_ranges)
        COMPILER_FEATURE_ENTRY(202302L, __cpp_lib_formatters)
        COMPILER_FEATURE_ENTRY(202207L, __cpp_lib_forward_like)
        COMPILER_FEATURE_ENTRY(202207L, __cpp_lib_generator)
        COMPILER_FEATURE_ENTRY(202106L, __cpp_lib_invoke_r)
        COMPILER_FEATURE_ENTRY(202207L, __cpp_lib_ios_noreplace)
        COMPILER_FEATURE_ENTRY(202302L, __cpp_lib_is_implicit_lifetime)
        COMPILER_FEATURE_ENTRY(202011L, __cpp_lib_is_scoped_enum)
        COMPILER_FEATURE_ENTRY(202207L, __cpp_lib_mdspan)
        COMPILER_FEATURE_ENTRY(202207L, __cpp_lib_modules)
        COMPILER_FEATURE_ENTRY(202207L, __cpp_lib_move_iterator_concept)
        COMPILER_FEATURE_ENTRY(202110L, __cpp_lib_move_only_function)
        COMPILER_FEATURE_ENTRY(202110L, __cpp_lib_optional)
        COMPILER_FEATURE_ENTRY(202106L, __cpp_lib_out_ptr)
        COMPILER_FEATURE_ENTRY(202207L, __cpp_lib_print)
        COMPILER_FEATURE_ENTRY(202302L, __cpp_lib_ranges)
        COMPILER_FEATURE_ENTRY(202207L, __cpp_lib_ranges_as_const)
        COMPILER_FEATURE_ENTRY(202207L, __cpp_lib_ranges_as_rvalue)
        COMPILER_FEATURE_ENTRY(202207L, __cpp_lib_ranges_cartesian_product)
        COMPILER_FEATURE_ENTRY(202202L, __cpp_lib_ranges_chunk)
        COMPILER_FEATURE_ENTRY(202202L, __cpp_lib_ranges_chunk_by)
        COMPILER_FEATURE_ENTRY(202207L, __cpp_lib_ranges_contains)
        COMPILER_FEATURE_ENTRY(202302L, __cpp_lib_ranges_enumerate)
        COMPILER_FEATURE_ENTRY(202207L, __cpp_lib_ranges_find_last)
        COMPILER_FEATURE_ENTRY(202207L, __cpp_lib_ranges_fold)
        COMPILER_FEATURE_ENTRY(202202L, __cpp_lib_ranges_iota)
        COMPILER_FEATURE_ENTRY(202202L, __cpp_lib_ranges_join_with)
        COMPILER_FEATURE_ENTRY(202207L, __cpp_lib_ranges_repeat)
        COMPILER_FEATURE_ENTRY(202202L, __cpp_lib_ranges_slide)
        COMPILER_FEATURE_ENTRY(202106L, __cpp_lib_ranges_starts_ends_with)
        COMPILER_FEATURE_ENTRY(202207L, __cpp_lib_ranges_stride)
        COMPILER_FEATURE_ENTRY(202202L, __cpp_lib_ranges_to_container)
        COMPILER_FEATURE_ENTRY(202110L, __cpp_lib_ranges_zip)
        COMPILER_FEATURE_ENTRY(202202L, __cpp_lib_reference_from_temporary)
        COMPILER_FEATURE_ENTRY(202202L, __cpp_lib_shift)
        COMPILER_FEATURE_ENTRY(202106L, __cpp_lib_spanstream)
        COMPILER_FEATURE_ENTRY(202011L, __cpp_lib_stacktrace)
        COMPILER_FEATURE_ENTRY(202207L, __cpp_lib_start_lifetime_as)
        COMPILER_FEATURE_ENTRY(202011L, __cpp_lib_stdatomic_h)
        COMPILER_FEATURE_ENTRY(202011L, __cpp_lib_string_contains)
        COMPILER_FEATURE_ENTRY(202110L, __cpp_lib_string_resize_and_overwrite)
        COMPILER_FEATURE_ENTRY(202102L, __cpp_lib_to_underlying)
        COMPILER_FEATURE_ENTRY(202207L, __cpp_lib_tuple_like)
        COMPILER_FEATURE_ENTRY(202202L, __cpp_lib_unreachable)
    };
     
    static constexpr CompilerFeature cxx26_core[] = {
        //< Continue to Populate
        COMPILER_FEATURE_ENTRY(202406L, __cpp_constexpr)
        COMPILER_FEATURE_ENTRY(202411L, __cpp_constexpr_exceptions)
        COMPILER_FEATURE_ENTRY(202502L, __cpp_contracts)
        COMPILER_FEATURE_ENTRY(202403L, __cpp_deleted_function)
        COMPILER_FEATURE_ENTRY(202406L, __cpp_fold_expressions)
        COMPILER_FEATURE_ENTRY(202311L, __cpp_pack_indexing)
        COMPILER_FEATURE_ENTRY(202306L, __cpp_placeholder_variables)
        COMPILER_FEATURE_ENTRY(202502L, __cpp_pp_embed)
        COMPILER_FEATURE_ENTRY(202306L, __cpp_static_assert)
        COMPILER_FEATURE_ENTRY(202411L, __cpp_structured_bindings)
        COMPILER_FEATURE_ENTRY(202502L, __cpp_template_parameters)
        COMPILER_FEATURE_ENTRY(202502L, __cpp_trivial_relocatability)
        COMPILER_FEATURE_ENTRY(202502L, __cpp_trivial_union)
        COMPILER_FEATURE_ENTRY(202403L, __cpp_variadic_friend)
    };
    static constexpr CompilerFeature cxx26_lib[] = {
        //< Continue to Populate
        COMPILER_FEATURE_ENTRY(202403L, __cpp_lib_algorithm_default_value_type)
        COMPILER_FEATURE_ENTRY(202411L, __cpp_lib_aligned_accessor)
        COMPILER_FEATURE_ENTRY(202311L, __cpp_lib_associative_heterogeneous_insertion)
        COMPILER_FEATURE_ENTRY(202403L, __cpp_lib_atomic_min_max)
        COMPILER_FEATURE_ENTRY(202411L, __cpp_lib_atomic_ref)
        COMPILER_FEATURE_ENTRY(202306L, __cpp_lib_bind_back)
        COMPILER_FEATURE_ENTRY(202306L, __cpp_lib_bind_front)
        COMPILER_FEATURE_ENTRY(202306L, __cpp_lib_bitset)
        COMPILER_FEATURE_ENTRY(202306L, __cpp_lib_chrono)
        COMPILER_FEATURE_ENTRY(202306L, __cpp_lib_constexpr_algorithms)
        COMPILER_FEATURE_ENTRY(202411L, __cpp_lib_constexpr_atomic)
        COMPILER_FEATURE_ENTRY(202306L, __cpp_lib_constexpr_cmath)
        COMPILER_FEATURE_ENTRY(202306L, __cpp_lib_constexpr_complex)
        COMPILER_FEATURE_ENTRY(202502L, __cpp_lib_constexpr_deque)
        COMPILER_FEATURE_ENTRY(202502L, __cpp_lib_constexpr_exceptions)
        COMPILER_FEATURE_ENTRY(202502L, __cpp_lib_constexpr_flat_map)
        COMPILER_FEATURE_ENTRY(202502L, __cpp_lib_constexpr_flat_set)
        COMPILER_FEATURE_ENTRY(202502L, __cpp_lib_constexpr_forward_list)
        COMPILER_FEATURE_ENTRY(202502L, __cpp_lib_constexpr_inplace_vector)
        COMPILER_FEATURE_ENTRY(202502L, __cpp_lib_constexpr_list)
        COMPILER_FEATURE_ENTRY(202502L, __cpp_lib_constexpr_map)
        COMPILER_FEATURE_ENTRY(202406L, __cpp_lib_constexpr_new)
        COMPILER_FEATURE_ENTRY(202502L, __cpp_lib_constexpr_queue)
        COMPILER_FEATURE_ENTRY(202502L, __cpp_lib_constexpr_set)
        COMPILER_FEATURE_ENTRY(202502L, __cpp_lib_constexpr_stack)
        COMPILER_FEATURE_ENTRY(202502L, __cpp_lib_constexpr_unordered_map)
        COMPILER_FEATURE_ENTRY(202502L, __cpp_lib_constexpr_unordered_set)
        COMPILER_FEATURE_ENTRY(202411L, __cpp_lib_constrained_equality)
        COMPILER_FEATURE_ENTRY(202502L, __cpp_lib_contracts)
        COMPILER_FEATURE_ENTRY(202306L, __cpp_lib_copyable_function)
        COMPILER_FEATURE_ENTRY(202403L, __cpp_lib_debugging)
        COMPILER_FEATURE_ENTRY(202311L, __cpp_lib_format)
        COMPILER_FEATURE_ENTRY(202403L, __cpp_lib_format_path)
        COMPILER_FEATURE_ENTRY(202311L, __cpp_lib_format_uchar)
        COMPILER_FEATURE_ENTRY(202502L, __cpp_lib_freestanding_algorithm)
        COMPILER_FEATURE_ENTRY(202311L, __cpp_lib_freestanding_array)
        COMPILER_FEATURE_ENTRY(202306L, __cpp_lib_freestanding_char_traits)
        COMPILER_FEATURE_ENTRY(202306L, __cpp_lib_freestanding_charconv)
        COMPILER_FEATURE_ENTRY(202306L, __cpp_lib_freestanding_cstdlib)
        COMPILER_FEATURE_ENTRY(202311L, __cpp_lib_freestanding_cstring)
        COMPILER_FEATURE_ENTRY(202306L, __cpp_lib_freestanding_cwchar)
        COMPILER_FEATURE_ENTRY(202306L, __cpp_lib_freestanding_errc)
        COMPILER_FEATURE_ENTRY(202502L, __cpp_lib_freestanding_execution)
        COMPILER_FEATURE_ENTRY(202311L, __cpp_lib_freestanding_expected)
        COMPILER_FEATURE_ENTRY(202306L, __cpp_lib_freestanding_feature_test_macros)
        COMPILER_FEATURE_ENTRY(202306L, __cpp_lib_freestanding_functional)
        COMPILER_FEATURE_ENTRY(202306L, __cpp_lib_freestanding_iterator)
        COMPILER_FEATURE_ENTRY(202311L, __cpp_lib_freestanding_mdspan)
        COMPILER_FEATURE_ENTRY(202502L, __cpp_lib_freestanding_memory)
        COMPILER_FEATURE_ENTRY(202502L, __cpp_lib_freestanding_numeric)
        COMPILER_FEATURE_ENTRY(202306L, __cpp_lib_freestanding_operator_new)
        COMPILER_FEATURE_ENTRY(202311L, __cpp_lib_freestanding_optional)
        COMPILER_FEATURE_ENTRY(202502L, __cpp_lib_freestanding_random)
        COMPILER_FEATURE_ENTRY(202306L, __cpp_lib_freestanding_ranges)
        COMPILER_FEATURE_ENTRY(202306L, __cpp_lib_freestanding_ratio)
        COMPILER_FEATURE_ENTRY(202311L, __cpp_lib_freestanding_string_view)
        COMPILER_FEATURE_ENTRY(202306L, __cpp_lib_freestanding_tuple)
        COMPILER_FEATURE_ENTRY(202306L, __cpp_lib_freestanding_utility)
        COMPILER_FEATURE_ENTRY(202311L, __cpp_lib_freestanding_variant)
        COMPILER_FEATURE_ENTRY(202306L, __cpp_lib_fstream_native_handle)
        COMPILER_FEATURE_ENTRY(202306L, __cpp_lib_function_ref)
        COMPILER_FEATURE_ENTRY(202502L, __cpp_lib_hardened_array)
        COMPILER_FEATURE_ENTRY(202502L, __cpp_lib_hardened_basic_string)
        COMPILER_FEATURE_ENTRY(202502L, __cpp_lib_hardened_basic_string_view)
        COMPILER_FEATURE_ENTRY(202502L, __cpp_lib_hardened_bitset)
        COMPILER_FEATURE_ENTRY(202502L, __cpp_lib_hardened_deque)
        COMPILER_FEATURE_ENTRY(202502L, __cpp_lib_hardened_expected)
        COMPILER_FEATURE_ENTRY(202502L, __cpp_lib_hardened_forward_list)
        COMPILER_FEATURE_ENTRY(202502L, __cpp_lib_hardened_inplace_vector)
        COMPILER_FEATURE_ENTRY(202502L, __cpp_lib_hardened_list)
        COMPILER_FEATURE_ENTRY(202502L, __cpp_lib_hardened_mdspan)
        COMPILER_FEATURE_ENTRY(202502L, __cpp_lib_hardened_optional)
        COMPILER_FEATURE_ENTRY(202502L, __cpp_lib_hardened_span)
        COMPILER_FEATURE_ENTRY(202502L, __cpp_lib_hardened_valarray)
        COMPILER_FEATURE_ENTRY(202502L, __cpp_lib_hardened_vector)
        COMPILER_FEATURE_ENTRY(202306L, __cpp_lib_hazard_pointer)
        COMPILER_FEATURE_ENTRY(202502L, __cpp_lib_hive)
        COMPILER_FEATURE_ENTRY(202502L, __cpp_lib_indirect)
        COMPILER_FEATURE_ENTRY(202406L, __cpp_lib_inplace_vector)
        COMPILER_FEATURE_ENTRY(202411L, __cpp_lib_is_sufficiently_aligned)
        COMPILER_FEATURE_ENTRY(202406L, __cpp_lib_is_virtual_base_of)
        COMPILER_FEATURE_ENTRY(202306L, __cpp_lib_is_within_lifetime)
        COMPILER_FEATURE_ENTRY(202311L, __cpp_lib_linalg)
        COMPILER_FEATURE_ENTRY(202406L, __cpp_lib_mdspan)
        COMPILER_FEATURE_ENTRY(202306L, __cpp_lib_not_fn)
        COMPILER_FEATURE_ENTRY(202406L, __cpp_lib_optional_range_support)
        COMPILER_FEATURE_ENTRY(202311L, __cpp_lib_out_ptr)
        COMPILER_FEATURE_ENTRY(202406L, __cpp_lib_philox_engine)
        COMPILER_FEATURE_ENTRY(202502L, __cpp_lib_polymorphic)
        COMPILER_FEATURE_ENTRY(202403L, __cpp_lib_print)
        COMPILER_FEATURE_ENTRY(202406L, __cpp_lib_ranges)
        COMPILER_FEATURE_ENTRY(202311L, __cpp_lib_ranges_as_const)
        COMPILER_FEATURE_ENTRY(202411L, __cpp_lib_ranges_cache_latest)
        COMPILER_FEATURE_ENTRY(202403L, __cpp_lib_ranges_concat)
        COMPILER_FEATURE_ENTRY(202403L, __cpp_lib_ranges_generate_random)
        COMPILER_FEATURE_ENTRY(202502L, __cpp_lib_ranges_reserve_hint)
        COMPILER_FEATURE_ENTRY(202502L, __cpp_lib_ranges_to_input)
        COMPILER_FEATURE_ENTRY(202306L, __cpp_lib_ratio)
        COMPILER_FEATURE_ENTRY(202411L, __cpp_lib_raw_memory_algorithms)
        COMPILER_FEATURE_ENTRY(202306L, __cpp_lib_rcu)
        COMPILER_FEATURE_ENTRY(202403L, __cpp_lib_reference_wrapper)
        COMPILER_FEATURE_ENTRY(202311L, __cpp_lib_saturation_arithmetic)
        COMPILER_FEATURE_ENTRY(202406L, __cpp_lib_senders)
        COMPILER_FEATURE_ENTRY(202411L, __cpp_lib_simd)
        COMPILER_FEATURE_ENTRY(202502L, __cpp_lib_simd_complex)
        COMPILER_FEATURE_ENTRY(202306L, __cpp_lib_smart_ptr_owner_equality)
        COMPILER_FEATURE_ENTRY(202311L, __cpp_lib_span)
        COMPILER_FEATURE_ENTRY(202311L, __cpp_lib_span_initializer_list)
        COMPILER_FEATURE_ENTRY(202306L, __cpp_lib_sstream_from_string_view)
        COMPILER_FEATURE_ENTRY(202403L, __cpp_lib_string_view)
        COMPILER_FEATURE_ENTRY(202403L, __cpp_lib_submdspan)
        COMPILER_FEATURE_ENTRY(202306L, __cpp_lib_text_encoding)
        COMPILER_FEATURE_ENTRY(202306L, __cpp_lib_to_chars)
        COMPILER_FEATURE_ENTRY(202306L, __cpp_lib_to_string)
        COMPILER_FEATURE_ENTRY(202502L, __cpp_lib_trivially_relocatable)
        COMPILER_FEATURE_ENTRY(202311L, __cpp_lib_tuple_like)
        COMPILER_FEATURE_ENTRY(202306L, __cpp_lib_variant)
    };
     
    static constexpr CompilerFeature cxx29_core[] = {
        //< Continue to Populate
        COMPILER_FEATURE_ENTRY(202604L, __cpp_core_TODO)
    };
    static constexpr CompilerFeature cxx29_lib[] = {
        //< Continue to Populate
        COMPILER_FEATURE_ENTRY(202604L, __cpp_lib_TODO)
    };
     
    static constexpr CompilerFeature attributes[] = {
        COMPILER_ATTRIBUTE(202207L, assume)
        COMPILER_ATTRIBUTE(200809L, carries_dependency)
        COMPILER_ATTRIBUTE(201309L, deprecated)
        COMPILER_ATTRIBUTE(201603L, fallthrough)
        COMPILER_ATTRIBUTE(202403L, indeterminate)
        COMPILER_ATTRIBUTE(201803L, likely)
        COMPILER_ATTRIBUTE(201603L, maybe_unused)
        COMPILER_ATTRIBUTE(201803L, no_unique_address)
        COMPILER_ATTRIBUTE(201907L, nodiscard)
        COMPILER_ATTRIBUTE(200809L, noreturn)
        COMPILER_ATTRIBUTE(201803L, unlikely)
    };
     
    inline void show_compiler_specific_info()
    {
        [std::printf](../io/c/fprintf.html)("OTHER MACROS:\n");
        for (auto co : compiler)
            if ([std::strcmp](../string/byte/strcmp.html)(co.first, co.second))
                [std::printf](../io/c/fprintf.html)("%*s %s\n", -print.longest_macro_name, co.first, co.second);
    }
     
    inline void print_compiler_feature(const CompilerFeature& x)
    {
        if (not ((print.supported_features and x.maybe()) or
                (print.unsupported_features and not x.maybe())))
            return;
        auto print_year_month = [](long n)
        {
            return [std::printf](../io/c/fprintf.html)("%ld%s%02ld",
                n / 100, print.separate_year_month ? "-" : "", n % 100);
        };
        [std::printf](../io/c/fprintf.html)("%*s ", -print.longest_macro_name, x.name());
        x.maybe() ? print_year_month(x.data()) :
                        [std::printf](../io/c/fprintf.html)("------%s", print.separate_year_month ? "-" : "");
        if (print.standard_values)
            [std::printf](../io/c/fprintf.html)("  %c  ", (x.supported() ? (x.data() > x.std() ? '>' : '=') : '<')),
                print_year_month(x.std());
        [std::puts](../io/c/puts.html)("");
    }
     
    template<class Container>
    inline void show(char const* const title, Container const& co)
    {
        if (print.titles)
        {
            [std::printf](../io/c/fprintf.html)("%-s (", title);
            if (print.counters)
            {
                [std::printf](../io/c/fprintf.html)("%zd/", [std::count_if](../algorithm/count.html)([std::begin](../iterator/begin.html)(co), [std::end](../iterator/end.html)(co),
                    [](CompilerFeature x)
                    {
                        return x.supported();
                    }));
            }
            [std::printf](../io/c/fprintf.html)("%td)\n", [std::distance](../iterator/distance.html)([std::begin](../iterator/begin.html)(co), [std::end](../iterator/end.html)(co)));
        }
        if (print.sort_by_date)
        {
            [std::vector](../container/vector.html)<CompilerFeature> v([std::begin](../iterator/begin.html)(co), [std::end](../iterator/end.html)(co));
            [std::stable_sort](../algorithm/stable_sort.html)(v.begin(), v.end(),
                [](CompilerFeature const& lhs, CompilerFeature const& rhs)
                {
                    return lhs.data() < rhs.data();
                });
            [std::for_each](../algorithm/for_each.html)(v.cbegin(), v.cend(), print_compiler_feature);
        }
        else
            [std::for_each](../algorithm/for_each.html)([std::begin](../iterator/begin.html)(co), [std::end](../iterator/end.html)(co), print_compiler_feature);
        [std::puts](../io/c/puts.html)("");
    }
     
    inline void show_latest()
    {
        auto latest_rev = []() -> int
        {
            return print.cxx29 ? 29 : print.cxx26 ? 26 : print.cxx23 ? 23 : print.cxx20 ? 20 :
                   print.cxx17 ? 17 : print.cxx14 ? 14 : print.cxx11 ? 11 : 98;
        };
        [std::vector](../container/vector.html)<CompilerFeature> latest;
        auto add = [&latest](CompilerFeature x)
        {
            auto i = [std::lower_bound](../algorithm/lower_bound.html)(latest.begin(), latest.end(), x);
            if (i == latest.end() or not (*i == x))
                latest.insert(i, x);
            else if (i->data() < x.data())
                i->data(x.data());
        };
        char text[64];
        latest.reserve(512); // max macros
        if (print.core_features)
        {   // preserve reverse revision insertion order!
            if (print.cxx29) [std::for_each](../algorithm/for_each.html)([std::begin](../iterator/begin.html)(cxx29_core), [std::end](../iterator/end.html)(cxx29_core), add);
            if (print.cxx26) [std::for_each](../algorithm/for_each.html)([std::begin](../iterator/begin.html)(cxx26_core), [std::end](../iterator/end.html)(cxx26_core), add);
            if (print.cxx23) [std::for_each](../algorithm/for_each.html)([std::begin](../iterator/begin.html)(cxx23_core), [std::end](../iterator/end.html)(cxx23_core), add);
            if (print.cxx20) [std::for_each](../algorithm/for_each.html)([std::begin](../iterator/begin.html)(cxx20_core), [std::end](../iterator/end.html)(cxx20_core), add);
            if (print.cxx17) [std::for_each](../algorithm/for_each.html)([std::begin](../iterator/begin.html)(cxx17_core), [std::end](../iterator/end.html)(cxx17_core), add);
            if (print.cxx14) [std::for_each](../algorithm/for_each.html)([std::begin](../iterator/begin.html)(cxx14_core), [std::end](../iterator/end.html)(cxx14_core), add);
            if (print.cxx11) [std::for_each](../algorithm/for_each.html)([std::begin](../iterator/begin.html)(cxx11_core), [std::end](../iterator/end.html)(cxx11_core), add);
            if (print.cxx98) [std::for_each](../algorithm/for_each.html)([std::begin](../iterator/begin.html)(cxx98_core), [std::end](../iterator/end.html)(cxx98_core), add);
            [std::snprintf](../io/c/fprintf.html)(text, sizeof text, "ALL CORE MACROS UP TO C++%02i", latest_rev());
            show(text, latest);
        }
        latest.clear();
        if (print.lib_features)
        {   // preserve reverse revision insertion order!
            if (print.cxx29) [std::for_each](../algorithm/for_each.html)([std::begin](../iterator/begin.html)(cxx29_lib), [std::end](../iterator/end.html)(cxx29_lib), add);
            if (print.cxx26) [std::for_each](../algorithm/for_each.html)([std::begin](../iterator/begin.html)(cxx26_lib), [std::end](../iterator/end.html)(cxx26_lib), add);
            if (print.cxx23) [std::for_each](../algorithm/for_each.html)([std::begin](../iterator/begin.html)(cxx23_lib), [std::end](../iterator/end.html)(cxx23_lib), add);
            if (print.cxx20) [std::for_each](../algorithm/for_each.html)([std::begin](../iterator/begin.html)(cxx20_lib), [std::end](../iterator/end.html)(cxx20_lib), add);
            if (print.cxx17) [std::for_each](../algorithm/for_each.html)([std::begin](../iterator/begin.html)(cxx17_lib), [std::end](../iterator/end.html)(cxx17_lib), add);
            if (print.cxx14) [std::for_each](../algorithm/for_each.html)([std::begin](../iterator/begin.html)(cxx14_lib), [std::end](../iterator/end.html)(cxx14_lib), add);
            [std::snprintf](../io/c/fprintf.html)(text, sizeof text, "ALL LIB MACROS UP TO C++%02i", latest_rev());
            show(text, latest);
        }
    }
     
    int main()
    {
        if (print.separated_revisions)
        {
            if (print.cxx98 and print.core_features) show("C++98 CORE", cxx98_core);
            if (print.cxx11 and print.core_features) show("C++11 CORE", cxx11_core);
            if (print.cxx14 and print.core_features) show("C++14 CORE", cxx14_core);
            if (print.cxx14 and print.lib_features ) show("C++14 LIB" , cxx14_lib);
            if (print.cxx17 and print.core_features) show("C++17 CORE", cxx17_core);
            if (print.cxx17 and print.lib_features ) show("C++17 LIB" , cxx17_lib);
            if (print.cxx20 and print.core_features) show("C++20 CORE", cxx20_core);
            if (print.cxx20 and print.lib_features ) show("C++20 LIB" , cxx20_lib);
            if (print.cxx23 and print.core_features) show("C++23 CORE", cxx23_core);
            if (print.cxx23 and print.lib_features ) show("C++23 LIB" , cxx23_lib);
            if (print.cxx26 and print.core_features) show("C++26 CORE", cxx26_core);
            if (print.cxx26 and print.lib_features ) show("C++26 LIB" , cxx26_lib);
            if (print.cxx29 and print.core_features) show("C++29 CORE", cxx29_core);
            if (print.cxx29 and print.lib_features ) show("C++29 LIB" , cxx29_lib);
        }
        if (print.latest_revisions) show_latest();
        if (print.attributes) show("ATTRIBUTES", attributes);
        if (print.compiler_specific) show_compiler_specific_info();
    }

Possible output: 
    
    
    C++11 CORE (20/20)
    __cpp_alias_templates                         2007-04  =  2007-04
    __cpp_attributes                              2008-09  =  2008-09
    __cpp_constexpr                               2022-11  >  2007-04
    __cpp_constexpr_in_decltype                   2017-11  =  2017-11
    ... truncated ...
     
    C++14 CORE (9/9)
    __cpp_aggregate_nsdmi                         2013-04  =  2013-04
    __cpp_binary_literals                         2013-04  =  2013-04
    __cpp_constexpr                               2022-11  >  2013-04
    ... truncated ...
     
    C++14 LIB (20/20)
    __cpp_lib_chrono_udls                         2013-04  =  2013-04
    __cpp_lib_complex_udls                        2013-09  =  2013-09
    __cpp_lib_exchange_function                   2013-04  =  2013-04
    ... truncated ...
     
    ... truncated ...
     
    C++23 LIB (43/64)
    __cpp_lib_adaptor_iterator_pair_constructor   2021-06  =  2021-06
    __cpp_lib_algorithm_iterator_requirements     -------  <  2022-07
    __cpp_lib_allocate_at_least                   -------  <  2023-02
    __cpp_lib_associative_heterogeneous_erasure   -------  <  2021-10
    __cpp_lib_barrier                             2019-07  <  2023-02
    ... truncated ...
     
    ALL CORE MACROS UP TO C++26 (60/76)
    __cpp_aggregate_bases                         2016-03  =  2016-03
    __cpp_aggregate_nsdmi                         2013-04  =  2013-04
    __cpp_aggregate_paren_init                    2019-02  =  2019-02
    __cpp_alias_templates                         2007-04  =  2007-04
    ... truncated ...
     
    ALL LIB MACROS UP TO C++26 (158/282)
    __cpp_lib_adaptor_iterator_pair_constructor   2021-06  =  2021-06
    __cpp_lib_addressof_constexpr                 2016-03  =  2016-03
    __cpp_lib_algorithm_iterator_requirements     -------  <  2022-07
    __cpp_lib_allocate_at_least                   -------  <  2023-02
    __cpp_lib_allocator_traits_is_always_equal    2014-11  =  2014-11
    ... truncated ...
     
    ATTRIBUTES (9/11)
    assume                                        2022-07  =  2022-07
    carries_dependency                            -------  <  2008-09
    deprecated                                    2013-09  =  2013-09
    fallthrough                                   2016-03  =  2016-03
    ... truncated ...
     
    OTHER MACROS:
    __cplusplus                                   202302L
    __GNUG__                                      14
    __GNUC_MINOR__                                2
    __GNUC_PATCHLEVEL__                           0
    __STDCPP_FLOAT16_T__                          1
    __STDCPP_FLOAT32_T__                          1
    ... truncated ...

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[P2552R3](https://wg21.link/P2552R3) | C++20  | `__has_cpp_attribute` must expand to a non-zero value for standard attributes  | can expand to ​0​  
  
### See also

[**Library feature-test macros**](../utility/feature_test.html "cpp/utility/feature test") (C++20) |  defined in the header [`<version>`](../header/version.html "cpp/header/version")  
---|---  
**[Predefined Macro Symbols](../preprocessor/replace.html#Predefined_macros "cpp/preprocessor/replace")**  
**[Macro Symbol Index](../symbol_index/macro.html "cpp/symbol index/macro")**  
  
### External links

1\.  | [The official document on Feature-Test Recommendations](https://isocpp.org/std/standing-documents/sd-6-sg10-feature-test-recommendations)  
---|---  
2\.  | [Source code to dump compiler features](https://github.com/makelinux/examples/blob/develop/cpp/features.cpp)
  *[Value]: The year/month in which this feature was adopted. The hyperlink under each value opens a compiler support page with an entry for that feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
