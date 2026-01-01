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
  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/navbar_content&action=edit)

[Concepts library](../concepts.html "cpp/concepts")

| [Core language concepts](../concepts.html#Core_language_concepts "cpp/concepts")  
---  
[same_as](same_as.html "cpp/concepts/same as")(C++20)  
[derived_from](derived_from.html "cpp/concepts/derived from")(C++20)  
[convertible_to](convertible_to.html "cpp/concepts/convertible to")(C++20)  
[common_reference_with](common_reference_with.html "cpp/concepts/common reference with")(C++20)  
**common_with**(C++20)  
[integral](integral.html "cpp/concepts/integral")(C++20)  
[signed_integral](signed_integral.html "cpp/concepts/signed integral")(C++20)  
[unsigned_integral](unsigned_integral.html "cpp/concepts/unsigned integral")(C++20)  
[floating_point](floating_point.html "cpp/concepts/floating point")(C++20)  
[swappableswappable_with](swappable.html "cpp/concepts/swappable")(C++20)(C++20)  
[destructible](destructible.html "cpp/concepts/destructible")(C++20)  
[constructible_from](constructible_from.html "cpp/concepts/constructible from")(C++20)  
[default_initializable](default_initializable.html "cpp/concepts/default initializable")(C++20)` `  
[move_constructible](move_constructible.html "cpp/concepts/move constructible")(C++20)  
[copy_constructible](copy_constructible.html "cpp/concepts/copy constructible")(C++20)  
[assignable_from](assignable_from.html "cpp/concepts/assignable from")(C++20)  
  
| [Comparison concepts](../concepts.html#Comparison_concepts "cpp/concepts")  
---  
[equality_comparableequality_comparable_with](equality_comparable.html "cpp/concepts/equality comparable")(C++20)(C++20)  
[totally_orderedtotally_ordered_with](totally_ordered.html "cpp/concepts/totally ordered")(C++20)(C++20)  
[Object concepts](../concepts.html#Object_concepts "cpp/concepts")  
[movable](movable.html "cpp/concepts/movable")(C++20)  
[copyable](copyable.html "cpp/concepts/copyable")(C++20)  
[semiregular](semiregular.html "cpp/concepts/semiregular")(C++20)  
[regular](regular.html "cpp/concepts/regular")(C++20)  
[Callable concepts](../concepts.html#Callable_concepts "cpp/concepts")  
[invocableregular_invocable](invocable.html "cpp/concepts/invocable")(C++20)(C++20)  
[predicate](predicate.html "cpp/concepts/predicate")(C++20)  
[relation](relation.html "cpp/concepts/relation")(C++20)  
[equivalence_relation](equivalence_relation.html "cpp/concepts/equivalence relation")(C++20)  
[strict_weak_order](strict_weak_order.html "cpp/concepts/strict weak order")(C++20)  
  
| Exposition-only concepts  
---  
[_boolean-testable_](boolean-testable.html "cpp/concepts/boolean-testable") ﻿(C++20)  
  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/concepts/navbar_content&action=edit)

Defined in header `[<concepts>](../header/concepts.html "cpp/header/concepts")` |  |   
---|---|---  
template< class T, class U >  
concept common_with =  
[std::same_as](same_as.html)<[std::common_type_t](../types/common_type.html)<T, U>, [std::common_type_t](../types/common_type.html)<U, T>> &&  
requires {  
static_cast<[std::common_type_t](../types/common_type.html)<T, U>>([std::declval](../utility/declval.html)<T>());  
static_cast<[std::common_type_t](../types/common_type.html)<T, U>>([std::declval](../utility/declval.html)<U>());  
} &&  
[std::common_reference_with](common_reference_with.html)<  
[std::add_lvalue_reference_t](../types/add_reference.html)<const T>,  
[std::add_lvalue_reference_t](../types/add_reference.html)<const U>> &&  
[std::common_reference_with](common_reference_with.html)<  
[std::add_lvalue_reference_t](../types/add_reference.html)<[std::common_type_t](../types/common_type.html)<T, U>>,  
[std::common_reference_t](../types/common_reference.html)<  
[std::add_lvalue_reference_t](../types/add_reference.html)<const T>,  
[std::add_lvalue_reference_t](../types/add_reference.html)<const U>>>; |  |  (since C++20)  
| |   
  
The concept `common_with<T, U>` specifies that two types `T` and `U` share a _common type_ (as computed by [std::common_type_t](../types/common_type.html "cpp/types/common type")) to which both can be converted. 

## Contents

  * [1 Semantic requirements](common_with.html#Semantic_requirements)
  * [2 Equality preservation](common_with.html#Equality_preservation)
  * [3 References](common_with.html#References)
  * [4 See also](common_with.html#See_also)

  
---  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/concepts/common_with&action=edit&section=1 "Edit section: Semantic requirements")] Semantic requirements

T and U model std::common_with<T, U> only if, given [equality-preserving](../concepts.html#Equality_preservation "cpp/concepts") expressions `t1`, `t2`, `u1` and `u2` such that decltype((t1)) and decltype((t2)) are both `T` and decltype((u1)) and decltype((u2)) are both `U`, 

  * [std::common_type_t](../types/common_type.html)<T, U>(t1) equals [std::common_type_t](../types/common_type.html)<T, U>(t2) if and only if `t1` equals `t2`; and 
  * [std::common_type_t](../types/common_type.html)<T, U>(u1) equals [std::common_type_t](../types/common_type.html)<T, U>(u2) if and only if `u1` equals `u2`. 



In other words, the conversion to the common type must [preserve equality](../concepts.html#Equality_preservation "cpp/concepts"). 

### [[edit](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/concepts/equality_preservation&action=edit&section=T-1 "Template:cpp/concepts/equality preservation")] Equality preservation

Expressions declared in [requires expressions](../language/requires.html "cpp/language/requires") of the standard library concepts are required to be [equality-preserving](../concepts.html#Equality_preservation "cpp/concepts") (except where stated otherwise). 

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/concepts/common_with&action=edit&section=2 "Edit section: References")] References

  * C++23 standard (ISO/IEC 14882:2024): 



    

  * 18.4.6 Concept `common_with` [concept.common] 



  * C++20 standard (ISO/IEC 14882:2020): 



    

  * 18.4.6 Concept `common_with` [concept.common] 



### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/concepts/common_with&action=edit&section=3 "Edit section: See also")] See also

[ common_type](../types/common_type.html "cpp/types/common type")(C++11) |  determines the common type of a group of types   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/types/dsc_common_type&action=edit)  
---|---  
[ common_referencebasic_common_reference](../types/common_reference.html "cpp/types/common reference")(C++20) |  determines the common reference type of a group of types   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/types/dsc_common_reference&action=edit)  
[ common_reference_with](common_reference_with.html "cpp/concepts/common reference with")(C++20) |  specifies that two types share a common reference type   
(concept) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/concepts/dsc_common_reference_with&action=edit)
