[C++](../cpp.html "cpp")

[Compiler support](compiler_support.html "cpp/compiler support")  
---  
[Freestanding and hosted](freestanding.html "cpp/freestanding")  
[Language](language.html "cpp/language")  
[Standard library](standard_library.html "cpp/standard library")  
[Standard library headers](headers.html "cpp/header")  
[Named requirements](iterator/concepts.html "cpp/named req")  
[Feature test macros](experimental/feature_test.html "cpp/feature test") (C++20)  
[Language support library](utility.html#Language_support "cpp/utility")  
**Concepts library** (C++20)  
[Diagnostics library](error.html "cpp/error")  
[Memory management library](memory.html "cpp/memory")  
[Metaprogramming library](meta.html "cpp/meta") (C++11)  
[General utilities library](utility.html "cpp/utility")  
[Containers library](container.html "cpp/container")  
[Iterators library](iterator.html "cpp/iterator")  
[Ranges library](ranges.html "cpp/ranges") (C++20)  
[Algorithms library](algorithm.html "cpp/algorithm")  
[Strings library](string.html "cpp/string")  
[Text processing library](text.html "cpp/text")  
[Numerics library](numeric.html "cpp/numeric")  
[Date and time library](chrono.html "cpp/chrono")  
[Input/output library](io.html "cpp/io")  
[Filesystem library](filesystem.html "cpp/filesystem") (C++17)  
[Concurrency support library](atomic.html "cpp/thread") (C++11)  
[Execution control library](experimental/execution.html "cpp/execution") (C++26)  
[Technical specifications](experimental.html "cpp/experimental")  
[Symbols index](symbol_index.html "cpp/symbol index")  
[External libraries](links/libs.html "cpp/links/libs")  
  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/navbar_content&action=edit)

**Concepts library**

| [Core language concepts](concepts.html#Core_language_concepts "cpp/concepts")  
---  
[same_as](concepts/same_as.html "cpp/concepts/same as")(C++20)  
[derived_from](concepts/derived_from.html "cpp/concepts/derived from")(C++20)  
[convertible_to](concepts/convertible_to.html "cpp/concepts/convertible to")(C++20)  
[common_reference_with](concepts/common_reference_with.html "cpp/concepts/common reference with")(C++20)  
[common_with](concepts/common_with.html "cpp/concepts/common with")(C++20)  
[integral](concepts/integral.html "cpp/concepts/integral")(C++20)  
[signed_integral](concepts/signed_integral.html "cpp/concepts/signed integral")(C++20)  
[unsigned_integral](concepts/unsigned_integral.html "cpp/concepts/unsigned integral")(C++20)  
[floating_point](concepts/floating_point.html "cpp/concepts/floating point")(C++20)  
[swappableswappable_with](concepts/swappable.html "cpp/concepts/swappable")(C++20)(C++20)  
[destructible](concepts/destructible.html "cpp/concepts/destructible")(C++20)  
[constructible_from](concepts/constructible_from.html "cpp/concepts/constructible from")(C++20)  
[default_initializable](concepts/default_initializable.html "cpp/concepts/default initializable")(C++20)` `  
[move_constructible](concepts/move_constructible.html "cpp/concepts/move constructible")(C++20)  
[copy_constructible](concepts/copy_constructible.html "cpp/concepts/copy constructible")(C++20)  
[assignable_from](concepts/assignable_from.html "cpp/concepts/assignable from")(C++20)  
  
| [Comparison concepts](concepts.html#Comparison_concepts "cpp/concepts")  
---  
[equality_comparableequality_comparable_with](concepts/equality_comparable.html "cpp/concepts/equality comparable")(C++20)(C++20)  
[totally_orderedtotally_ordered_with](concepts/totally_ordered.html "cpp/concepts/totally ordered")(C++20)(C++20)  
[Object concepts](concepts.html#Object_concepts "cpp/concepts")  
[movable](concepts/movable.html "cpp/concepts/movable")(C++20)  
[copyable](concepts/copyable.html "cpp/concepts/copyable")(C++20)  
[semiregular](concepts/semiregular.html "cpp/concepts/semiregular")(C++20)  
[regular](concepts/regular.html "cpp/concepts/regular")(C++20)  
[Callable concepts](concepts.html#Callable_concepts "cpp/concepts")  
[invocableregular_invocable](concepts/invocable.html "cpp/concepts/invocable")(C++20)(C++20)  
[predicate](concepts/predicate.html "cpp/concepts/predicate")(C++20)  
[relation](concepts/relation.html "cpp/concepts/relation")(C++20)  
[equivalence_relation](concepts/equivalence_relation.html "cpp/concepts/equivalence relation")(C++20)  
[strict_weak_order](concepts/strict_weak_order.html "cpp/concepts/strict weak order")(C++20)  
  
| Exposition-only concepts  
---  
[_boolean-testable_](concepts/boolean-testable.html "cpp/concepts/boolean-testable") ﻿(C++20)  
  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/concepts/navbar_content&action=edit)

The concepts library provides definitions of fundamental library concepts that can be used to perform compile-time validation of template arguments and perform function dispatch based on properties of types. These concepts provide a foundation for equational reasoning in programs. 

Most concepts in the standard library impose both syntactic and semantic requirements. It is said that a standard concept is _satisfied_ if its syntactic requirements are met, and is _modeled_ if it is satisfied and its semantic requirements (if any) are also met. 

In general, only the syntactic requirements can be checked by the compiler. If the validity or meaning of a program depends whether a sequence of template arguments models a concept, and the concept is satisfied but not modeled, or if a semantic requirement is not met at the point of use, the program is ill-formed, [no diagnostic required](ndr.html "cpp/language/ndr"). 

## Contents

  * [1 Equality preservation](concepts.html#Equality_preservation)
  * [2 Implicit expression variations](concepts.html#Implicit_expression_variations)
  * [3 Standard library concepts](concepts.html#Standard_library_concepts)
    * [3.1 Core language concepts](concepts.html#Core_language_concepts)
    * [3.2 Comparison concepts](concepts.html#Comparison_concepts)
    * [3.3 Object concepts](concepts.html#Object_concepts)
    * [3.4 Callable concepts](concepts.html#Callable_concepts)
  * [4 See also](concepts.html#See_also)

  
---  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/concepts&action=edit&section=1 "Edit section: Equality preservation")] Equality preservation

An expression is _equality-preserving_ if it results in equal outputs given equal inputs, where 

  * the inputs consist of its operands (not neccessarily making the expression semantically valid), and 
  * the outputs consist of its result and all modifications to the operands by the expression, if any 



where, for convenience of wording, its "operands" refer to its largest sub-expressions that consist of an [id-expression](language/expressions.html#Primary_expressions "cpp/language/expressions") or invocations of [`std::move`](utility/move.html "cpp/utility/move"), [std::forward](utility/forward.html "cpp/utility/forward"), and [std::declval](utility/declval.html "cpp/utility/declval"). 

The cv-qualification and value category of each operand is determined by assuming that each template type parameter in its type denotes a cv-unqualified complete non-array object type. 

Every expression required to be equality preserving is further required to be stable, that is, two evaluations of it with the same input objects must have equal outputs without any explicit intervening modification of those input objects. 

Unless noted otherwise, every expression used in a [requires expression](language/requires.html "cpp/language/requires") of the [standard library concepts](concepts.html#Standard_library_concepts) is required to be equality preserving, and the evaluation of the expression may modify only its non-constant operands. Operands that are constant must not be modified. 

In the standard library, the following concepts are allowed to have non equality-preserving requires expressions: 

  * [`output_iterator`](iterator/output_iterator.html "cpp/iterator/output iterator")
  * [`indirectly_writable`](iterator/indirectly_writable.html "cpp/iterator/indirectly writable")
  * [`invocable`](concepts/invocable.html "cpp/concepts/invocable")
  * [`weakly_incrementable`](iterator/weakly_incrementable.html "cpp/iterator/weakly incrementable")
  * [`range`](ranges/range.html "cpp/ranges/range")



### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/concepts&action=edit&section=2 "Edit section: Implicit expression variations")] Implicit expression variations

A [requires expression](language/requires.html "cpp/language/requires") that uses an expression that is non-modifying for some constant lvalue operand also implicitly requires additional variations of that expression that accept a non-constant lvalue or (possibly constant) rvalue for the given operand unless such an expression variation is explicitly required with differing semantics. 

These _implicit expression variations_ must meet the same semantic requirements of the declared expression. The extent to which an implementation validates the syntax of the variations is unspecified. 
    
    
    template<class T>
    concept C = requires(T a, T b, const T c, const T d)
    {
        c == d;           // expression #1: does not modify the operands
        a = std::move(b); // expression #2: modifies both operands
        a = c;            // expression #3: modifies the left operand `a`
    };
     
    // Expression #1 implicitly requires additional expression variations that
    // meet the requirements for c == d (including non-modification),
    // as if the following expressions had been declared as well:
     
    // ------ const == const ------- ------ const == non-const ---
    //                                         c  ==           b;
    //            c == std::move(d);           c  == std::move(b);
    // std::move(c) ==           d;  std::move(c) ==           b;
    // std::move(c) == std::move(d); std::move(c) == std::move(b);
     
    // -- non-const == const ------- -- non-const == non-const ---
    //           a  ==           d;            a  ==           b;
    //           a  == std::move(d);           a  == std::move(b);
    // std::move(a) ==           d;  std::move(a) ==           b;
    // std::move(a) == std::move(d); std::move(a) == std::move(b);
     
    // Expression #3 implicitly requires additional expression variations that
    // meet the requirements for a = c
    // (including non-modification of the second operand),
    // as if the expressions a = b (non-constant lvalue variation)
    // and a = std::move(c) (const rvalue variation) had been declared.
     
    // Note: Since expression #2 already requires the non-constant rvalue variation
    // (a == std::move(b)) explicitly, expression #3 does not implicitly require it anymore.
     
    // The type T meets the explicitly stated syntactic requirements of
    // concept C above, but does not meet the additional implicit requirements
    // (i.e., T satisfies but does not model C):
    // a program requires C<T> is ill-formed (no diagnostic required).
    struct T
    {
        bool operator==(const T&) const { return true; }
        bool operator==(T&) = delete;
    };

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/concepts&action=edit&section=3 "Edit section: Standard library concepts")] Standard library concepts

Defined in namespace `std`  
---  
  
#####  Core language concepts   
  
Defined in header `[<concepts>](header/concepts.html "cpp/header/concepts")`  
[ same_as](concepts/same_as.html "cpp/concepts/same as")(C++20) |  specifies that a type is the same as another type   
(concept) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/concepts/dsc_same_as&action=edit)  
[ derived_from](concepts/derived_from.html "cpp/concepts/derived from")(C++20) |  specifies that a type is derived from another type   
(concept) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/concepts/dsc_derived_from&action=edit)  
[ convertible_to](concepts/convertible_to.html "cpp/concepts/convertible to")(C++20) |  specifies that a type is implicitly convertible to another type   
(concept) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/concepts/dsc_convertible_to&action=edit)  
[ common_reference_with](concepts/common_reference_with.html "cpp/concepts/common reference with")(C++20) |  specifies that two types share a common reference type   
(concept) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/concepts/dsc_common_reference_with&action=edit)  
[ common_with](concepts/common_with.html "cpp/concepts/common with")(C++20) |  specifies that two types share a common type   
(concept) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/concepts/dsc_common_with&action=edit)  
[ integral](concepts/integral.html "cpp/concepts/integral")(C++20) |  specifies that a type is an integral type   
(concept) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/concepts/dsc_integral&action=edit)  
[ signed_integral](concepts/signed_integral.html "cpp/concepts/signed integral")(C++20) |  specifies that a type is an integral type that is signed   
(concept) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/concepts/dsc_signed_integral&action=edit)  
[ unsigned_integral](concepts/unsigned_integral.html "cpp/concepts/unsigned integral")(C++20) |  specifies that a type is an integral type that is unsigned   
(concept) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/concepts/dsc_unsigned_integral&action=edit)  
[ floating_point](concepts/floating_point.html "cpp/concepts/floating point")(C++20) |  specifies that a type is a floating-point type   
(concept) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/concepts/dsc_floating_point&action=edit)  
[ assignable_from](concepts/assignable_from.html "cpp/concepts/assignable from")(C++20) |  specifies that a type is assignable from another type   
(concept) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/concepts/dsc_assignable_from&action=edit)  
[ swappableswappable_with](concepts/swappable.html "cpp/concepts/swappable")(C++20) |  specifies that a type can be swapped or that two types can be swapped with each other   
(concept) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/concepts/dsc_swappable&action=edit)  
[ destructible](concepts/destructible.html "cpp/concepts/destructible")(C++20) |  specifies that an object of the type can be destroyed   
(concept) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/concepts/dsc_destructible&action=edit)  
[ constructible_from](concepts/constructible_from.html "cpp/concepts/constructible from")(C++20) |  specifies that a variable of the type can be constructed from or bound to a set of argument types   
(concept) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/concepts/dsc_constructible_from&action=edit)  
[ default_initializable](concepts/default_initializable.html "cpp/concepts/default initializable")(C++20) |  specifies that an object of a type can be default constructed   
(concept) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/concepts/dsc_default_initializable&action=edit)  
[ move_constructible](concepts/move_constructible.html "cpp/concepts/move constructible")(C++20) |  specifies that an object of a type can be move constructed   
(concept) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/concepts/dsc_move_constructible&action=edit)  
[ copy_constructible](concepts/copy_constructible.html "cpp/concepts/copy constructible")(C++20) |  specifies that an object of a type can be copy constructed and move constructed   
(concept) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/concepts/dsc_copy_constructible&action=edit)  
  
#####  Comparison concepts   
  
Defined in header `[<concepts>](header/concepts.html "cpp/header/concepts")`  
[_boolean-testable_](concepts/boolean-testable.html "cpp/concepts/boolean-testable") ﻿(C++20) |  specifies that a type can be used in Boolean contexts  
(exposition-only concept*)[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/concepts/dsc_boolean-testable&action=edit)  
[ equality_comparableequality_comparable_with](concepts/equality_comparable.html "cpp/concepts/equality comparable")(C++20) |  specifies that operator == is an equivalence relation   
(concept) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/concepts/dsc_equality_comparable&action=edit)  
[ totally_orderedtotally_ordered_with](concepts/totally_ordered.html "cpp/concepts/totally ordered")(C++20) |  specifies that the comparison operators on the type yield a total order   
(concept) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/concepts/dsc_totally_ordered&action=edit)  
Defined in header `[<compare>](header/compare.html "cpp/header/compare")`  
[ three_way_comparablethree_way_comparable_with](utility/compare/three_way_comparable.html "cpp/utility/compare/three way comparable")(C++20) |  specifies that operator <=> produces consistent result on given types   
(concept) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/utility/compare/dsc_three_way_comparable&action=edit)  
  
#####  Object concepts   
  
Defined in header `[<concepts>](header/concepts.html "cpp/header/concepts")`  
[ movable](concepts/movable.html "cpp/concepts/movable")(C++20) |  specifies that an object of a type can be moved and swapped   
(concept) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/concepts/dsc_movable&action=edit)  
[ copyable](concepts/copyable.html "cpp/concepts/copyable")(C++20) |  specifies that an object of a type can be copied, moved, and swapped   
(concept) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/concepts/dsc_copyable&action=edit)  
[ semiregular](concepts/semiregular.html "cpp/concepts/semiregular")(C++20) |  specifies that an object of a type can be copied, moved, swapped, and default constructed   
(concept) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/concepts/dsc_semiregular&action=edit)  
[ regular](concepts/regular.html "cpp/concepts/regular")(C++20) |  specifies that a type is regular, that is, it is both [`semiregular`](concepts/semiregular.html "cpp/concepts/semiregular") and [`equality_comparable`](concepts/equality_comparable.html "cpp/concepts/equality comparable")   
(concept) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/concepts/dsc_regular&action=edit)  
  
#####  Callable concepts   
  
Defined in header `[<concepts>](header/concepts.html "cpp/header/concepts")`  
[ invocableregular_invocable](concepts/invocable.html "cpp/concepts/invocable")(C++20) |  specifies that a callable type can be invoked with a given set of argument types   
(concept) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/concepts/dsc_invocable&action=edit)  
[ predicate](concepts/predicate.html "cpp/concepts/predicate")(C++20) |  specifies that a callable type is a Boolean predicate   
(concept) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/concepts/dsc_predicate&action=edit)  
[ relation](concepts/relation.html "cpp/concepts/relation")(C++20) |  specifies that a callable type is a binary relation   
(concept) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/concepts/dsc_relation&action=edit)  
[ equivalence_relation](concepts/equivalence_relation.html "cpp/concepts/equivalence relation")(C++20) |  specifies that a [`relation`](concepts/relation.html "cpp/concepts/relation") imposes an equivalence relation   
(concept) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/concepts/dsc_equivalence_relation&action=edit)  
[ strict_weak_order](concepts/strict_weak_order.html "cpp/concepts/strict weak order")(C++20) |  specifies that a [`relation`](concepts/relation.html "cpp/concepts/relation") imposes a strict weak ordering   
(concept) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/concepts/dsc_strict_weak_order&action=edit)  
  
Additional concepts can be found in [the iterators library](iterator.html#C.2B.2B20_iterator_concepts "cpp/iterator"), [the algorithms library](iterator.html#Algorithm_concepts_and_utilities "cpp/iterator"), and [the ranges library](ranges.html#Range_concepts "cpp/ranges"). 

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/concepts&action=edit&section=4 "Edit section: See also")] See also

  * [Named Requirements](iterator/concepts.html "cpp/named req")


