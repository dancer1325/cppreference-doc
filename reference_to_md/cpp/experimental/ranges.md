[C++](../../cpp.html "cpp")

[Compiler support](../compiler_support.html "cpp/compiler support")  
---  
[Freestanding and hosted](../freestanding.html "cpp/freestanding")  
[Language](../language.html "cpp/language")  
[Standard library](../standard_library.html "cpp/standard library")  
[Standard library headers](../headers.html "cpp/header")  
[Named requirements](../iterator/concepts.html "cpp/named req")  
[Feature test macros](feature_test.html "cpp/feature test") (C++20)  
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
  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/navbar_content&action=edit)

[Experimental](../experimental.html "cpp/experimental")

[Technical Specification](../experimental.html#Technical_Specification "cpp/experimental")  
---  
[Filesystem library](fs.html "cpp/experimental/fs") (filesystem TS)  
[Library fundamentals](memory.html "cpp/experimental/lib extensions") (library fundamentals TS)  
[Library fundamentals 2](lib_extensions_2.html "cpp/experimental/lib extensions 2") (library fundamentals TS v2)  
[Library fundamentals 3](lib_extensions_3.html "cpp/experimental/lib extensions 3") (library fundamentals TS v3)  
[Extensions for parallelism](parallelism.html "cpp/experimental/parallelism") (parallelism TS)  
[Extensions for parallelism 2](parallelism_2.html "cpp/experimental/parallelism 2") (parallelism TS v2)  
[Extensions for concurrency](concurrency.html "cpp/experimental/concurrency") (concurrency TS)  
[Extensions for concurrency 2](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/concurrency_2&action=edit&redlink=1 "cpp/experimental/concurrency 2 \(page does not exist\)") (concurrency TS v2)  
[Concepts](constraints.html "cpp/experimental/constraints") (concepts TS)  
**Ranges** (ranges TS)  
[Reflection](reflect.html "cpp/experimental/reflect") (reflection TS)  
[Mathematical special functions](special_math.html "cpp/experimental/special functions") (special functions TR)  
[Experimental Non-TS](../experimental.html#Experimental_Non-TS "cpp/experimental")  
[Pattern Matching](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/pm&action=edit&redlink=1 "cpp/experimental/pm \(page does not exist\)")  
[Linear Algebra](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/la&action=edit&redlink=1 "cpp/experimental/la \(page does not exist\)")  
[std::execution](execution.html "cpp/experimental/execution")  
[Contracts](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/contracts&action=edit&redlink=1 "cpp/experimental/contracts \(page does not exist\)")  
[2D Graphics](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/2dgraphics&action=edit&redlink=1 "cpp/experimental/2dgraphics \(page does not exist\)")  
  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/navbar_content&action=edit)

**Ranges**

[Concepts](ranges.html#Concepts "cpp/experimental/ranges")  
---  
[General utilities](ranges.html#General_utilities "cpp/experimental/ranges")  
[Iterators](ranges.html#Iterators "cpp/experimental/ranges")  
[Ranges](ranges.html#Ranges "cpp/experimental/ranges")  
[Algorithms](ranges.html#Algorithms "cpp/experimental/ranges")  
  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/ranges/navbar_content&action=edit)

The C++ Extensions for Ranges, ISO/IEC TS 21425:2017, specifies one modification to the core language and defines new components for the C++ standard library listed on this page. 

The Ranges TS is based on the C++14 standard as modified by the [Concepts TS](constraints.html "cpp/experimental/constraints"). 

![](https://upload.cppreference.com/mwiki/images/3/31/Imbox_notice.png) |  **Merged into ISO C++** The functionality described on this page was merged into the mainline ISO C++ standard as of 10/2018; see [the ranges library](../ranges.html "cpp/ranges"), [the constrained algorithms library](../algorithm/ranges.html "cpp/algorithm/ranges"), and [the core concepts library](../concepts.html "cpp/concepts") (since C++20)  
---|---  
  
## Contents

  * [1 Core language changes](ranges.html#Core_language_changes)
  * [2 Concepts](ranges.html#Concepts)
    * [2.1 Core language concepts](ranges.html#Core_language_concepts)
    * [2.2 Comparison concepts](ranges.html#Comparison_concepts)
    * [2.3 Object concepts](ranges.html#Object_concepts)
    * [2.4 Callable concepts](ranges.html#Callable_concepts)
    * [2.5 Random number generator concept](ranges.html#Random_number_generator_concept)
  * [3 General utilities](ranges.html#General_utilities)
    * [3.1 Utility components](ranges.html#Utility_components)
    * [3.2 Function objects](ranges.html#Function_objects)
    * [3.3 Metaprogramming and type traits](ranges.html#Metaprogramming_and_type_traits)
    * [3.4 Tagged pairs and tuples](ranges.html#Tagged_pairs_and_tuples)
  * [4 Iterators](ranges.html#Iterators)
    * [4.1 Iterator-related concepts](ranges.html#Iterator-related_concepts)
      * [4.1.1 Iterator concepts](ranges.html#Iterator_concepts)
      * [4.1.2 Indirect callable concepts](ranges.html#Indirect_callable_concepts)
      * [4.1.3 Common algorithm requirements](ranges.html#Common_algorithm_requirements)
      * [4.1.4 Concept utilities](ranges.html#Concept_utilities)
    * [4.2 Iterator primitives](ranges.html#Iterator_primitives)
      * [4.2.1 Iterator utilities](ranges.html#Iterator_utilities)
      * [4.2.2 Iterator traits](ranges.html#Iterator_traits)
      * [4.2.3 Iterator category tags](ranges.html#Iterator_category_tags)
      * [4.2.4 std::iterator_traits specializations](ranges.html#std::iterator_traits_specializations)
      * [4.2.5 Iterator operations](ranges.html#Iterator_operations)
    * [4.3 Iterator adaptors](ranges.html#Iterator_adaptors)
    * [4.4 Stream iterators](ranges.html#Stream_iterators)
  * [5 Ranges](ranges.html#Ranges)
    * [5.1 Range concepts](ranges.html#Range_concepts)
    * [5.2 Range access](ranges.html#Range_access)
    * [5.3 Range primitives](ranges.html#Range_primitives)
  * [6 Algorithms](ranges.html#Algorithms)
    * [6.1 Non-modifying sequence operations](ranges.html#Non-modifying_sequence_operations)
    * [6.2 Modifying sequence operations](ranges.html#Modifying_sequence_operations)
    * [6.3 Partitioning operations](ranges.html#Partitioning_operations)
    * [6.4 Sorting operations](ranges.html#Sorting_operations)
    * [6.5 Binary search operations (on sorted ranges)](ranges.html#Binary_search_operations_.28on_sorted_ranges.29)
    * [6.6 Set operations (on sorted ranges)](ranges.html#Set_operations_.28on_sorted_ranges.29)
    * [6.7 Heap operations](ranges.html#Heap_operations)
    * [6.8 Minimum/maximum operations](ranges.html#Minimum.2Fmaximum_operations)
    * [6.9 Permutation operations](ranges.html#Permutation_operations)

  
---  
  
#### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/ranges&action=edit&section=1 "Edit section: Core language changes")] Core language changes

The Ranges TS modifies the specification of [the range-based for loop](../language/range-for.html "cpp/language/range-for") to permit differently typed begin and end iterators. This change permits the use of sentinels and is also present in C++17. 

#### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/ranges&action=edit&section=2 "Edit section: Concepts")] Concepts

#####  Core language concepts   
  
---  
Defined in header `[<experimental/ranges/concepts>](../header/experimental/ranges/concepts.html "cpp/header/experimental/ranges/concepts")`  
Defined in namespace `std::experimental::ranges`  
[ Same](ranges/concepts/Same.html "cpp/experimental/ranges/concepts/Same") |  specifies that a type is the same as another type   
(concept) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/ranges/concepts/dsc_Same&action=edit)  
[ DerivedFrom](ranges/concepts/DerivedFrom.html "cpp/experimental/ranges/concepts/DerivedFrom") |  specifies that a type is derived from another type   
(concept) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/ranges/concepts/dsc_DerivedFrom&action=edit)  
[ ConvertibleTo](ranges/concepts/ConvertibleTo.html "cpp/experimental/ranges/concepts/ConvertibleTo") |  specifies that a type is implicitly convertible to another type   
(concept) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/ranges/concepts/dsc_ConvertibleTo&action=edit)  
[ CommonReference](ranges/concepts/CommonReference.html "cpp/experimental/ranges/concepts/CommonReference") |  specifies that two types share a common reference type   
(concept) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/ranges/concepts/dsc_CommonReference&action=edit)  
[ Common](ranges/concepts/Common.html "cpp/experimental/ranges/concepts/Common") |  specifies that two types share a common type   
(concept) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/ranges/concepts/dsc_Common&action=edit)  
[ Integral](ranges/concepts/Integral.html "cpp/experimental/ranges/concepts/Integral") |  specifies that a type is an integral type   
(concept) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/ranges/concepts/dsc_Integral&action=edit)  
[ SignedIntegral](ranges/concepts/SignedIntegral.html "cpp/experimental/ranges/concepts/SignedIntegral") |  specifies that a type is an integral type that is signed   
(concept) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/ranges/concepts/dsc_SignedIntegral&action=edit)  
[ UnsignedIntegral](ranges/concepts/UnsignedIntegral.html "cpp/experimental/ranges/concepts/UnsignedIntegral") |  specifies that a type is an integral type that is not signed   
(concept) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/ranges/concepts/dsc_UnsignedIntegral&action=edit)  
[ Assignable](ranges/concepts/Assignable.html "cpp/experimental/ranges/concepts/Assignable") |  specifies that a type is assignable from another type   
(concept) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/ranges/concepts/dsc_Assignable&action=edit)  
[ SwappableSwappableWith](ranges/concepts/Swappable.html "cpp/experimental/ranges/concepts/Swappable") |  specifies that a type can be swapped or that two types can be swapped with each other   
(concept) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/ranges/concepts/dsc_Swappable&action=edit)  
  
#####  Comparison concepts   
  
Defined in header `[<experimental/ranges/concepts>](../header/experimental/ranges/concepts.html "cpp/header/experimental/ranges/concepts")`  
Defined in namespace `std::experimental::ranges`  
[ Boolean](ranges/concepts/Boolean.html "cpp/experimental/ranges/concepts/Boolean") |  specifies that a type can be used in Boolean contexts   
(concept) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/ranges/concepts/dsc_Boolean&action=edit)  
[ WeaklyEqualityComparableWith](ranges/concepts/WeaklyEqualityComparableWith.html "cpp/experimental/ranges/concepts/WeaklyEqualityComparableWith") |  specifies that two types can be compared for equality using operators == and !=   
(concept) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/ranges/concepts/dsc_WeaklyEqualityComparableWith&action=edit)  
[ EqualityComparableEqualityComparableWith](ranges/concepts/EqualityComparable.html "cpp/experimental/ranges/concepts/EqualityComparable") |  specifies that operator == is an equivalence relation   
(concept) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/ranges/concepts/dsc_EqualityComparable&action=edit)  
[ StrictTotallyOrderedStrictTotallyOrderedWith](ranges/concepts/StrictTotallyOrdered.html "cpp/experimental/ranges/concepts/StrictTotallyOrdered") |  specifies that the comparison operators on the type yield a total order   
(concept) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/ranges/concepts/dsc_StrictTotallyOrdered&action=edit)  
  
#####  Object concepts   
  
Defined in header `[<experimental/ranges/concepts>](../header/experimental/ranges/concepts.html "cpp/header/experimental/ranges/concepts")`  
Defined in namespace `std::experimental::ranges`  
[ Destructible](ranges/concepts/Destructible.html "cpp/experimental/ranges/concepts/Destructible") |  specifies that an object of the type can be destroyed   
(concept) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/ranges/concepts/dsc_Destructible&action=edit)  
[ Constructible](ranges/concepts/Constructible.html "cpp/experimental/ranges/concepts/Constructible") |  specifies that a variable of the type can be constructed from or bound to a set of argument types   
(concept) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/ranges/concepts/dsc_Constructible&action=edit)  
[ DefaultConstructible](ranges/concepts/DefaultConstructible.html "cpp/experimental/ranges/concepts/DefaultConstructible") |  specifies that an object of a type can be default constructed   
(concept) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/ranges/concepts/dsc_DefaultConstructible&action=edit)  
[ MoveConstructible](ranges/concepts/MoveConstructible.html "cpp/experimental/ranges/concepts/MoveConstructible") |  specifies that an object of a type can be move constructed   
(concept) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/ranges/concepts/dsc_MoveConstructible&action=edit)  
[ CopyConstructible](ranges/concepts/CopyConstructible.html "cpp/experimental/ranges/concepts/CopyConstructible") |  specifies that an object of a type can be copy constructed and move constructed   
(concept) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/ranges/concepts/dsc_CopyConstructible&action=edit)  
[ Movable](ranges/concepts/Movable.html "cpp/experimental/ranges/concepts/Movable") |  specifies that an object of a type can be moved and swapped   
(concept) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/ranges/concepts/dsc_Movable&action=edit)  
[ Copyable](ranges/concepts/Copyable.html "cpp/experimental/ranges/concepts/Copyable") |  specifies that an object of a type can be copied, moved, and swapped   
(concept) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/ranges/concepts/dsc_Copyable&action=edit)  
[ Semiregular](ranges/concepts/Semiregular.html "cpp/experimental/ranges/concepts/Semiregular") |  specifies that an object of a type can be copied, moved, swapped, and default constructed   
(concept) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/ranges/concepts/dsc_Semiregular&action=edit)  
[ Regular](ranges/concepts/Regular.html "cpp/experimental/ranges/concepts/Regular") |  specifies that a type is regular, that is, it is both [`Semiregular`](ranges/concepts/Semiregular.html "cpp/experimental/ranges/concepts/Semiregular") and [`EqualityComparable`](ranges/concepts/EqualityComparable.html "cpp/experimental/ranges/concepts/EqualityComparable")   
(concept) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/ranges/concepts/dsc_Regular&action=edit)  
  
#####  Callable concepts   
  
Defined in header `[<experimental/ranges/concepts>](../header/experimental/ranges/concepts.html "cpp/header/experimental/ranges/concepts")`  
Defined in namespace `std::experimental::ranges`  
[ InvocableRegularInvocable](ranges/concepts/Invocable.html "cpp/experimental/ranges/concepts/Invocable") |  specifies that a callable type can be invoked with a given set of argument types   
(concept) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/ranges/concepts/dsc_Invocable&action=edit)  
[ Predicate](ranges/concepts/Predicate.html "cpp/experimental/ranges/concepts/Predicate") |  specifies that a callable type is a Boolean predicate   
(concept) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/ranges/concepts/dsc_Predicate&action=edit)  
[ Relation](ranges/concepts/Relation.html "cpp/experimental/ranges/concepts/Relation") |  specifies that a callable type is a binary relation   
(concept) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/ranges/concepts/dsc_Relation&action=edit)  
[ StrictWeakOrder](ranges/concepts/StrictWeakOrder.html "cpp/experimental/ranges/concepts/StrictWeakOrder") |  specifies that a [`Relation`](ranges/concepts/Relation.html "cpp/experimental/ranges/concepts/Relation") imposes a strict weak ordering   
(concept) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/ranges/concepts/dsc_StrictWeakOrder&action=edit)  
  
#####  Random number generator concept   
  
Defined in header `[<experimental/ranges/random>](../header/experimental/ranges/random.html "cpp/header/experimental/ranges/random")`  
Defined in namespace `std::experimental::ranges`  
[ UniformRandomNumberGenerator](ranges/concepts/UniformRandomNumberGenerator.html "cpp/experimental/ranges/concepts/UniformRandomNumberGenerator") |  specifies that a type qualifies as a uniform random number generator   
(concept) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/ranges/concepts/dsc_UniformRandomNumberGenerator&action=edit)  
  
#### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/ranges&action=edit&section=3 "Edit section: General utilities")] General utilities

#####  Utility components   
  
---  
Defined in header `[<experimental/ranges/utility>](../header/experimental/ranges/utility.html "cpp/header/experimental/ranges/utility")`  
Defined in namespace `std::experimental::ranges`  
[ swap](ranges/utility/swap.html "cpp/experimental/ranges/utility/swap") |  swaps the value of two objects  
(customization point object)[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/ranges/utility/dsc_swap&action=edit)  
[ exchange](ranges/utility/exchange.html "cpp/experimental/ranges/utility/exchange") |  replaces the argument with a new value and returns its previous value   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/ranges/utility/dsc_exchange&action=edit)  
  
#####  Function objects   
  
Defined in header `[<experimental/ranges/functional>](../header/experimental/ranges/functional.html "cpp/header/experimental/ranges/functional")`  
Defined in namespace `std::experimental::ranges`  
[ invoke](ranges/functional/invoke.html "cpp/experimental/ranges/functional/invoke") |  invokes a [Callable](../named_req/Callable.html "cpp/named req/Callable") object with the given arguments   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/ranges/functional/dsc_invoke&action=edit)  
[ equal_to](ranges/functional/equal_to.html "cpp/experimental/ranges/functional/equal to") |  function object implementing x == y   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/ranges/functional/dsc_equal_to&action=edit)  
[ not_equal_to](ranges/functional/not_equal_to.html "cpp/experimental/ranges/functional/not equal to") |  function object implementing x != y   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/ranges/functional/dsc_not_equal_to&action=edit)  
[ greater](ranges/functional/greater.html "cpp/experimental/ranges/functional/greater") |  function object implementing x > y   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/ranges/functional/dsc_greater&action=edit)  
[ less](ranges/functional/less.html "cpp/experimental/ranges/functional/less") |  function object implementing x < y   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/ranges/functional/dsc_less&action=edit)  
[ greater_equal](ranges/functional/greater_equal.html "cpp/experimental/ranges/functional/greater equal") |  function object implementing x >= y   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/ranges/functional/dsc_greater_equal&action=edit)  
[ less_equal](ranges/functional/less_equal.html "cpp/experimental/ranges/functional/less equal") |  function object implementing x <= y   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/ranges/functional/dsc_less_equal&action=edit)  
[ identity](ranges/functional/identity.html "cpp/experimental/ranges/functional/identity") |  function object that returns its argument unchanged   
(class) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/ranges/functional/dsc_identity&action=edit)  
  
#####  Metaprogramming and type traits   
  
Defined in header `[<experimental/ranges/type_traits>](../header/experimental/ranges/type_traits.html "cpp/header/experimental/ranges/type traits")`  
Defined in namespace `std::experimental::ranges`  
[ is_swappable_withis_swappableis_nothrow_swappable_withis_nothrow_swappable](ranges/type_traits/is_swappable.html "cpp/experimental/ranges/type traits/is swappable") |  checks if objects of a type can be swapped with objects of same or different type   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/ranges/type_traits/dsc_is_swappable&action=edit)  
[ common_reference](ranges/type_traits/common_reference.html "cpp/experimental/ranges/type traits/common reference") |  determine the common reference type of a set of types   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/ranges/type_traits/dsc_common_reference&action=edit)  
[ common_type](ranges/type_traits/common_type.html "cpp/experimental/ranges/type traits/common type") |  determine the common type of a set of types   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/ranges/type_traits/dsc_common_type&action=edit)  
  
#####  Tagged pairs and tuples   
  
Defined in header `[<experimental/ranges/utility>](../header/experimental/ranges/utility.html "cpp/header/experimental/ranges/utility")`  
Defined in namespace `std::experimental::ranges`  
[ TagSpecifier](ranges/utility/TagSpecifier.html "cpp/experimental/ranges/utility/TagSpecifier") |  specifies that a type is a tag specifier   
(concept) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/ranges/utility/dsc_TagSpecifier&action=edit)  
[ TaggedType](ranges/utility/TaggedType.html "cpp/experimental/ranges/utility/TaggedType") |  specifies that a type represents a tag specifier and its element type   
(concept) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/ranges/utility/dsc_TaggedType&action=edit)  
[ tagged](ranges/utility/tagged.html "cpp/experimental/ranges/utility/tagged") |  augument a tuple-like type with named accessors   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/ranges/utility/dsc_tagged&action=edit)  
[ tagged_pair](ranges/utility/tagged_pair.html "cpp/experimental/ranges/utility/tagged pair") |  alias template for a tagged [std::pair](../utility/pair.html "cpp/utility/pair")  
(alias template)[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/ranges/utility/dsc_tagged_pair&action=edit)  
[ make_tagged_pair](ranges/utility/make_tagged_pair.html "cpp/experimental/ranges/utility/make tagged pair") |  convenience function for creating a `tagged_pair`   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/ranges/utility/dsc_make_tagged_pair&action=edit)  
Defined in header `[<experimental/ranges/tuple>](../header/experimental/ranges/tuple.html "cpp/header/experimental/ranges/tuple")`  
[ tagged_tuple](ranges/utility/tagged_tuple.html "cpp/experimental/ranges/utility/tagged tuple") |  alias template for a tagged [std::tuple](../utility/tuple.html "cpp/utility/tuple")  
(alias template)[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/ranges/utility/dsc_tagged_tuple&action=edit)  
[ make_tagged_tuple](ranges/utility/make_tagged_tuple.html "cpp/experimental/ranges/utility/make tagged tuple") |  convenience function for creating a `tagged_tuple`   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/ranges/utility/dsc_make_tagged_tuple&action=edit)  
Defined in header `[<experimental/ranges/algorithm>](../header/experimental/ranges/algorithm.html "cpp/header/experimental/ranges/algorithm")`  
Defined in namespace `std::experimental::ranges::tag`  
[ inin1in2outout1out2funminmaxbeginend](ranges/algorithm/tags.html "cpp/experimental/ranges/algorithm/tags") |  tag specifiers for use with ranges::tagged   
(class) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/ranges/algorithm/dsc_tags&action=edit)  
  
#### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/ranges&action=edit&section=4 "Edit section: Iterators")] Iterators

Defined in header `[<experimental/ranges/iterator>](../header/experimental/ranges/iterator.html "cpp/header/experimental/ranges/iterator")`  
---  
  
#####  Iterator-related concepts   
  
Defined in namespace `std::experimental::ranges`  
  
######  Iterator concepts  
  
[ Readable](ranges/iterator/Readable.html "cpp/experimental/ranges/iterator/Readable") |  specifies that a type is readable by applying operator `*`   
(concept) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/ranges/iterator/dsc_Readable&action=edit)  
[ Writable](ranges/iterator/Writable.html "cpp/experimental/ranges/iterator/Writable") |  specifies that a value can be written to an iterator's referenced object   
(concept) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/ranges/iterator/dsc_Writable&action=edit)  
[ WeaklyIncrementable](ranges/iterator/WeaklyIncrementable.html "cpp/experimental/ranges/iterator/WeaklyIncrementable") |  specifies that a [`Semiregular`](ranges/concepts/Semiregular.html "cpp/experimental/ranges/concepts/Semiregular") type can be incremented with pre- and post-increment operators   
(concept) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/ranges/iterator/dsc_WeaklyIncrementable&action=edit)  
[ Incrementable](ranges/iterator/Incrementable.html "cpp/experimental/ranges/iterator/Incrementable") |  specifies that the increment operation on a [`WeaklyIncrementable`](ranges/iterator/WeaklyIncrementable.html "cpp/experimental/ranges/iterator/WeaklyIncrementable") type is equality-preserving and that the type is [`EqualityComparable`](ranges/concepts/EqualityComparable.html "cpp/experimental/ranges/concepts/EqualityComparable")   
(concept) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/ranges/iterator/dsc_Incrementable&action=edit)  
[ Iterator](ranges/iterator/Iterator.html "cpp/experimental/ranges/iterator/Iterator") |  specifies that objects of a type can be incremented and dereferenced   
(concept) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/ranges/iterator/dsc_Iterator&action=edit)  
[ Sentinel](ranges/iterator/Sentinel.html "cpp/experimental/ranges/iterator/Sentinel") |  specifies that objects of a type is a sentinel for an [`Iterator`](ranges/iterator/Iterator.html "cpp/experimental/ranges/iterator/Iterator") type   
(concept) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/ranges/iterator/dsc_Sentinel&action=edit)  
[ SizedSentinel](ranges/iterator/SizedSentinel.html "cpp/experimental/ranges/iterator/SizedSentinel") |  specifies that the `-` operator can be applied to an iterator and a sentinel to calculate their difference in constant time   
(concept) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/ranges/iterator/dsc_SizedSentinel&action=edit)  
[ InputIterator](ranges/iterator/InputIterator.html "cpp/experimental/ranges/iterator/InputIterator") |  specifies that a type is an input iterator, that is, its referenced values can be read and it can be both pre- and post-incremented   
(concept) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/ranges/iterator/dsc_InputIterator&action=edit)  
[ OutputIterator](ranges/iterator/OutputIterator.html "cpp/experimental/ranges/iterator/OutputIterator") |  specifies that a type is an output iterator for a given value type, that is, values of that type can be written to it and it can be both pre- and post-incremented   
(concept) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/ranges/iterator/dsc_OutputIterator&action=edit)  
[ ForwardIterator](ranges/iterator/ForwardIterator.html "cpp/experimental/ranges/iterator/ForwardIterator") |  specifies that an [`InputIterator`](ranges/iterator/InputIterator.html "cpp/experimental/ranges/iterator/InputIterator") is a forward iterator, supporting equality comparison and multi-pass   
(concept) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/ranges/iterator/dsc_ForwardIterator&action=edit)  
[ BidirectionalIterator](ranges/iterator/BidirectionalIterator.html "cpp/experimental/ranges/iterator/BidirectionalIterator") |  specifies that a [`ForwardIterator`](ranges/iterator/ForwardIterator.html "cpp/experimental/ranges/iterator/ForwardIterator") is a bidirectional iterator, supporting movement backwards   
(concept) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/ranges/iterator/dsc_BidirectionalIterator&action=edit)  
[ RandomAccessIterator](ranges/iterator/RandomAccessIterator.html "cpp/experimental/ranges/iterator/RandomAccessIterator") |  specifies that a [`BidirectionalIterator`](ranges/iterator/BidirectionalIterator.html "cpp/experimental/ranges/iterator/BidirectionalIterator") is a random-access iterator, supporting advancement in constant time and subscripting   
(concept) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/ranges/iterator/dsc_RandomAccessIterator&action=edit)  
  
######  Indirect callable concepts  
  
[ IndirectUnaryInvocableIndirectRegularUnaryInvocable](ranges/iterator/IndirectUnaryInvocable.html "cpp/experimental/ranges/iterator/IndirectUnaryInvocable") |  specifies that a callable type can be invoked with the result of dereferencing a [`Readable`](ranges/iterator/Readable.html "cpp/experimental/ranges/iterator/Readable") type   
(concept) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/ranges/iterator/dsc_IndirectUnaryInvocable&action=edit)  
[ IndirectUnaryPredicate](ranges/iterator/IndirectUnaryPredicate.html "cpp/experimental/ranges/iterator/IndirectUnaryPredicate") |  specifies that a callable object, when invoked with the result of dereferencing a [`Readable`](ranges/iterator/Readable.html "cpp/experimental/ranges/iterator/Readable") type, satisfies [`Predicate`](ranges/concepts/Predicate.html "cpp/experimental/ranges/concepts/Predicate")   
(concept) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/ranges/iterator/dsc_IndirectUnaryPredicate&action=edit)  
[ IndirectRelation](ranges/iterator/IndirectRelation.html "cpp/experimental/ranges/iterator/IndirectRelation") |  specifies that a callable object, when invoked with the result of dereferencing some [`Readable`](ranges/iterator/Readable.html "cpp/experimental/ranges/iterator/Readable") types, satisfies [`Relation`](ranges/concepts/Relation.html "cpp/experimental/ranges/concepts/Relation")   
(concept) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/ranges/iterator/dsc_IndirectRelation&action=edit)  
[ IndirectStrictWeakOrder](ranges/iterator/IndirectStrictWeakOrder.html "cpp/experimental/ranges/iterator/IndirectStrictWeakOrder") |  specifies that a callable object, when invoked with the result of dereferencing some [`Readable`](ranges/iterator/Readable.html "cpp/experimental/ranges/iterator/Readable") types, satisfies [`StrictWeakOrder`](ranges/concepts/StrictWeakOrder.html "cpp/experimental/ranges/concepts/StrictWeakOrder")   
(concept) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/ranges/iterator/dsc_IndirectStrictWeakOrder&action=edit)  
  
######  Common algorithm requirements  
  
[ IndirectlyMovable](ranges/iterator/IndirectlyMovable.html "cpp/experimental/ranges/iterator/IndirectlyMovable") |  specifies that values may be moved from a [`Readable`](ranges/iterator/Readable.html "cpp/experimental/ranges/iterator/Readable") type to a [`Writable`](ranges/iterator/Writable.html "cpp/experimental/ranges/iterator/Writable") type   
(concept) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/ranges/iterator/dsc_IndirectlyMovable&action=edit)  
[ IndirectlyMovableStorable](ranges/iterator/IndirectlyMovableStorable.html "cpp/experimental/ranges/iterator/IndirectlyMovableStorable") |  specifies that values may be moved from a [`Readable`](ranges/iterator/Readable.html "cpp/experimental/ranges/iterator/Readable") type to a [`Writable`](ranges/iterator/Writable.html "cpp/experimental/ranges/iterator/Writable") type and that the move may be performed via an intermediate object   
(concept) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/ranges/iterator/dsc_IndirectlyMovableStorable&action=edit)  
[ IndirectlyCopyable](ranges/iterator/IndirectlyCopyable.html "cpp/experimental/ranges/iterator/IndirectlyCopyable") |  specifies that values may be copied from a [`Readable`](ranges/iterator/Readable.html "cpp/experimental/ranges/iterator/Readable") type to a [`Writable`](ranges/iterator/Writable.html "cpp/experimental/ranges/iterator/Writable") type   
(concept) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/ranges/iterator/dsc_IndirectlyCopyable&action=edit)  
[ IndirectlyCopyableStorable](ranges/iterator/IndirectlyCopyableStorable.html "cpp/experimental/ranges/iterator/IndirectlyCopyableStorable") |  specifies that values may be copied from a [`Readable`](ranges/iterator/Readable.html "cpp/experimental/ranges/iterator/Readable") type to a [`Writable`](ranges/iterator/Writable.html "cpp/experimental/ranges/iterator/Writable") type and that the copy may be performed via an intermediate object   
(concept) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/ranges/iterator/dsc_IndirectlyCopyableStorable&action=edit)  
[ IndirectlySwappable](ranges/iterator/IndirectlySwappable.html "cpp/experimental/ranges/iterator/IndirectlySwappable") |  specifies that the values referenced by two [`Readable`](ranges/iterator/Readable.html "cpp/experimental/ranges/iterator/Readable") types can be swapped   
(concept) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/ranges/iterator/dsc_IndirectlySwappable&action=edit)  
[ IndirectlyComparable](ranges/iterator/IndirectlyComparable.html "cpp/experimental/ranges/iterator/IndirectlyComparable") |  specifies that the values referenced by two [`Readable`](ranges/iterator/Readable.html "cpp/experimental/ranges/iterator/Readable") types can be compared   
(concept) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/ranges/iterator/dsc_IndirectlyComparable&action=edit)  
[ Permutable](ranges/iterator/Permutable.html "cpp/experimental/ranges/iterator/Permutable") |  specifies the common requirements of algorithms that reorder elements in place   
(concept) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/ranges/iterator/dsc_Permutable&action=edit)  
[ Mergeable](ranges/iterator/Mergeable.html "cpp/experimental/ranges/iterator/Mergeable") |  specifies the requirements of algorithms that merge sorted sequences into an output sequence by copying elements   
(concept) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/ranges/iterator/dsc_Mergeable&action=edit)  
[ Sortable](ranges/iterator/Sortable.html "cpp/experimental/ranges/iterator/Sortable") |  specifies the common requirements of algorithms that permute sequences into ordered sequences   
(concept) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/ranges/iterator/dsc_Sortable&action=edit)  
  
######  Concept utilities  
  
[ indirect_result_of](ranges/iterator/indirect_result_of.html "cpp/experimental/ranges/iterator/indirect result of") |  compute the result of invoking a callable object on the result of dereferencing some set of [`Readable`](ranges/iterator/Readable.html "cpp/experimental/ranges/iterator/Readable") types   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/ranges/iterator/dsc_indirect_result_of&action=edit)  
[ projected](ranges/iterator/projected.html "cpp/experimental/ranges/iterator/projected") |  helper template for specifying the constraints on algorithms that accept projections   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/ranges/iterator/dsc_projected&action=edit)  
  
#####  Iterator primitives   
  
######  Iterator utilities  
  
Defined in namespace `std::experimental::ranges`  
[ iter_move](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/ranges/iterator/iter_move&action=edit&redlink=1 "cpp/experimental/ranges/iterator/iter move \(page does not exist\)") |  casts the result of dereferencing an object to its associated rvalue reference type  
(customization point object)[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/ranges/iterator/dsc_iter_move&action=edit)  
[ iter_swap](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/ranges/iterator/iter_swap&action=edit&redlink=1 "cpp/experimental/ranges/iterator/iter swap \(page does not exist\)") |  swap the values referenced by two dereferenceable objects  
(customization point object)[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/ranges/iterator/dsc_iter_swap&action=edit)  
  
######  Iterator traits  
  
Defined in namespace `std::experimental::ranges`  
[ difference_type](ranges/iterator/difference_type.html "cpp/experimental/ranges/iterator/difference type") |  obtains the difference type of a [`WeaklyIncrementable`](ranges/iterator/WeaklyIncrementable.html "cpp/experimental/ranges/iterator/WeaklyIncrementable") type   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/ranges/iterator/dsc_difference_type&action=edit)  
[ value_type](ranges/iterator/value_type.html "cpp/experimental/ranges/iterator/value type") |  obtains the value type of a [`Readable`](ranges/iterator/Readable.html "cpp/experimental/ranges/iterator/Readable") type   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/ranges/iterator/dsc_value_type&action=edit)  
[ iterator_category](ranges/iterator/iterator_category.html "cpp/experimental/ranges/iterator/iterator category") |  obtains the iterator category of an input iterator type   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/ranges/iterator/dsc_iterator_category&action=edit)  
[ iterator_traits](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/ranges/iterator/iterator_traits&action=edit&redlink=1 "cpp/experimental/ranges/iterator/iterator traits \(page does not exist\)") |  compatibility traits class that collects an iterator’s associated types  
(alias template)[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/ranges/iterator/dsc_iterator_traits&action=edit)  
[ reference_trvalue_reference_titer_common_reference_t](ranges/iterator/reference_t.html "cpp/experimental/ranges/iterator/reference t") |  obtains a dereferenceable object's associated reference types  
(alias template)[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/ranges/iterator/dsc_reference_t&action=edit)  
  
######  Iterator category tags  
  
Defined in namespace `std::experimental::ranges`  
[ input_iterator_tagoutput_iterator_tagforward_iterator_tagbidirectional_iterator_tagrandom_access_iterator_tag](ranges/iterator/iterator_tags.html "cpp/experimental/ranges/iterator/iterator tags") |  empty class types used to indicate iterator categories   
(class) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/ranges/iterator/dsc_iterator_tags&action=edit)  
  
######  [std::iterator_traits](../iterator/iterator_traits.html "cpp/iterator/iterator traits") specializations  
  
Defined in namespace `std`  
[ std::iterator_traits<InputIterator>std::iterator_traits<OutputIterator>](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/ranges/iterator/std_iter_traits&action=edit&redlink=1 "cpp/experimental/ranges/iterator/std iter traits \(page does not exist\)") |  specializes [std::iterator_traits](../iterator/iterator_traits.html "cpp/iterator/iterator traits") for ranges TS iterators   
(class template specialization) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/ranges/iterator/dsc_std_iter_traits&action=edit)  
  
######  Iterator operations  
  
Defined in namespace `std::experimental::ranges`  
[ advance](ranges/iterator/advance.html "cpp/experimental/ranges/iterator/advance") |  advances an iterator by given distance   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/ranges/iterator/dsc_advance&action=edit)  
[ distance](ranges/iterator/distance.html "cpp/experimental/ranges/iterator/distance") |  returns the distance between an iterator and a sentinel, or between the beginning and the end of a range   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/ranges/iterator/dsc_distance&action=edit)  
[ next](ranges/iterator/next.html "cpp/experimental/ranges/iterator/next") |  increment an iterator   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/ranges/iterator/dsc_next&action=edit)  
[ prev](ranges/iterator/prev.html "cpp/experimental/ranges/iterator/prev") |  decrement an iterator   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/ranges/iterator/dsc_prev&action=edit)  
  
#####  Iterator adaptors   
  
Defined in namespace `std::experimental::ranges`  
[ reverse_iterator](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/ranges/iterator/reverse_iterator&action=edit&redlink=1 "cpp/experimental/ranges/iterator/reverse iterator \(page does not exist\)") |  iterator adaptor for reverse-order traversal   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/ranges/iterator/dsc_reverse_iterator&action=edit)  
[ back_insert_iterator](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/ranges/iterator/back_insert_iterator&action=edit&redlink=1 "cpp/experimental/ranges/iterator/back insert iterator \(page does not exist\)") |  iterator adaptor for insertion at the end of a container   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/ranges/iterator/dsc_back_insert_iterator&action=edit)  
[ front_insert_iterator](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/ranges/iterator/front_insert_iterator&action=edit&redlink=1 "cpp/experimental/ranges/iterator/front insert iterator \(page does not exist\)") |  iterator adaptor for insertion at the front of a container   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/ranges/iterator/dsc_front_insert_iterator&action=edit)  
[ insert_iterator](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/ranges/iterator/insert_iterator&action=edit&redlink=1 "cpp/experimental/ranges/iterator/insert iterator \(page does not exist\)") |  iterator adaptor for insertion into a container   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/ranges/iterator/dsc_insert_iterator&action=edit)  
[ move_iterator](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/ranges/iterator/move_iterator&action=edit&redlink=1 "cpp/experimental/ranges/iterator/move iterator \(page does not exist\)") |  iterator adaptor which dereferences to an rvalue reference   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/ranges/iterator/dsc_move_iterator&action=edit)  
[ move_sentinel](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/ranges/iterator/move_sentinel&action=edit&redlink=1 "cpp/experimental/ranges/iterator/move sentinel \(page does not exist\)") |  sentinel adaptor for use with `move_iterator`   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/ranges/iterator/dsc_move_sentinel&action=edit)  
[ common_iterator](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/ranges/iterator/common_iterator&action=edit&redlink=1 "cpp/experimental/ranges/iterator/common iterator \(page does not exist\)") |  adapt an iterator-sentinel pair into a common iterator type for use with legacy algorithms   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/ranges/iterator/dsc_common_iterator&action=edit)  
[ counted_iterator](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/ranges/iterator/counted_iterator&action=edit&redlink=1 "cpp/experimental/ranges/iterator/counted iterator \(page does not exist\)") |  iterator adaptor that keeps track of its distance from its starting position   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/ranges/iterator/dsc_counted_iterator&action=edit)  
[ default_sentinel](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/ranges/iterator/default_sentinel&action=edit&redlink=1 "cpp/experimental/ranges/iterator/default sentinel \(page does not exist\)") |  empty sentinel type for use with iterator types that know the bound of their range   
(class) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/ranges/iterator/dsc_default_sentinel&action=edit)  
[ dangling](ranges/iterator/dangling.html "cpp/experimental/ranges/iterator/dangling") |  wrapper for a possibly dangling iterator   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/ranges/iterator/dsc_dangling&action=edit)  
[ safe_iterator_t](ranges/iterator/dangling.html "cpp/experimental/ranges/iterator/dangling") |  alias template that wraps the iterator type of an rvalue range with `dangling`  
(alias template)[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/ranges/iterator/dsc_safe_iterator_t&action=edit)  
[ unreachable](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/ranges/iterator/unreachable&action=edit&redlink=1 "cpp/experimental/ranges/iterator/unreachable \(page does not exist\)") |  sentinel type used with any iterator to denote an infinite range   
(class) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/ranges/iterator/dsc_unreachable&action=edit)  
  
#####  Stream iterators   
  
Defined in namespace `std::experimental::ranges`  
[ istream_iterator](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/ranges/iterator/istream_iterator&action=edit&redlink=1 "cpp/experimental/ranges/iterator/istream iterator \(page does not exist\)") |  input iterator that reads from [std::basic_istream](../io/basic_istream.html "cpp/io/basic istream")   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/ranges/iterator/dsc_istream_iterator&action=edit)  
[ ostream_iterator](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/ranges/iterator/ostream_iterator&action=edit&redlink=1 "cpp/experimental/ranges/iterator/ostream iterator \(page does not exist\)") |  output iterator that writes to [std::basic_ostream](../io/basic_ostream.html "cpp/io/basic ostream")   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/ranges/iterator/dsc_ostream_iterator&action=edit)  
[ istreambuf_iterator](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/ranges/iterator/istreambuf_iterator&action=edit&redlink=1 "cpp/experimental/ranges/iterator/istreambuf iterator \(page does not exist\)") |  input iterator that reads from [std::basic_streambuf](../io/basic_streambuf.html "cpp/io/basic streambuf")   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/ranges/iterator/dsc_istreambuf_iterator&action=edit)  
[ ostreambuf_iterator](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/ranges/iterator/ostreambuf_iterator&action=edit&redlink=1 "cpp/experimental/ranges/iterator/ostreambuf iterator \(page does not exist\)") |  output iterator that writes to [std::basic_streambuf](../io/basic_streambuf.html "cpp/io/basic streambuf")   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/ranges/iterator/dsc_ostreambuf_iterator&action=edit)  
  
#### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/ranges&action=edit&section=5 "Edit section: Ranges")] Ranges

Defined in header `[<experimental/ranges/range>](../header/experimental/ranges/range.html "cpp/header/experimental/ranges/range")`  
---  
  
#####  Range concepts   
  
[ Range](ranges/range/Range.html "cpp/experimental/ranges/range/Range") |  specifies that a type is a range, that is, it provides a `begin` iterator and an `end` sentinel   
(concept) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/ranges/range/dsc_Range&action=edit)  
[ SizedRange](ranges/range/SizedRange.html "cpp/experimental/ranges/range/SizedRange") |  specifies that a range knows its size in constant time   
(concept) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/ranges/range/dsc_SizedRange&action=edit)  
[ View](ranges/range/View.html "cpp/experimental/ranges/range/View") |  specifies that a range is a view, that is, it has constant time copy/move/assignment   
(concept) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/ranges/range/dsc_View&action=edit)  
[ BoundedRange](ranges/range/BoundedRange.html "cpp/experimental/ranges/range/BoundedRange") |  specifies that a range has identical iterator and sentinel types   
(concept) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/ranges/range/dsc_BoundedRange&action=edit)  
[ InputRange](ranges/range/InputRange.html "cpp/experimental/ranges/range/InputRange") |  specifies a range whose iterator type satisfies [`InputIterator`](ranges/iterator/InputIterator.html "cpp/experimental/ranges/iterator/InputIterator")   
(concept) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/ranges/range/dsc_InputRange&action=edit)  
[ OutputRange](ranges/range/OutputRange.html "cpp/experimental/ranges/range/OutputRange") |  specifies a range whose iterator type satisfies [`OutputIterator`](ranges/iterator/OutputIterator.html "cpp/experimental/ranges/iterator/OutputIterator")   
(concept) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/ranges/range/dsc_OutputRange&action=edit)  
[ ForwardRange](ranges/range/ForwardRange.html "cpp/experimental/ranges/range/ForwardRange") |  specifies a range whose iterator type satisfies [`ForwardIterator`](ranges/iterator/ForwardIterator.html "cpp/experimental/ranges/iterator/ForwardIterator")   
(concept) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/ranges/range/dsc_ForwardRange&action=edit)  
[ BidirectionalRange](ranges/range/BidirectionalRange.html "cpp/experimental/ranges/range/BidirectionalRange") |  specifies a range whose iterator type satisfies [`BidirectionalIterator`](ranges/iterator/BidirectionalIterator.html "cpp/experimental/ranges/iterator/BidirectionalIterator")   
(concept) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/ranges/range/dsc_BidirectionalRange&action=edit)  
[ RandomAccessRange](ranges/range/RandomAccessRange.html "cpp/experimental/ranges/range/RandomAccessRange") |  specifies a range whose iterator type satisfies [`RandomAccessIterator`](ranges/iterator/RandomAccessIterator.html "cpp/experimental/ranges/iterator/RandomAccessIterator")   
(concept) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/ranges/range/dsc_RandomAccessRange&action=edit)  
  
#####  Range access   
  
Defined in namespace `std::experimental::ranges`  
[ begincbegin](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/ranges/range/begin&action=edit&redlink=1 "cpp/experimental/ranges/range/begin \(page does not exist\)") |  returns an iterator to the beginning of a range  
(customization point object)[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/ranges/range/dsc_begin&action=edit)  
[ endcend](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/ranges/range/end&action=edit&redlink=1 "cpp/experimental/ranges/range/end \(page does not exist\)") |  returns an iterator to the end of a range  
(customization point object)[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/ranges/range/dsc_end&action=edit)  
[ rbegincrbegin](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/ranges/range/rbegin&action=edit&redlink=1 "cpp/experimental/ranges/range/rbegin \(page does not exist\)") |  returns a reverse iterator to a range  
(customization point object)[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/ranges/range/dsc_rbegin&action=edit)  
[ rendcrend](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/ranges/range/rend&action=edit&redlink=1 "cpp/experimental/ranges/range/rend \(page does not exist\)") |  returns a reverse end iterator to a range  
(customization point object)[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/ranges/range/dsc_rend&action=edit)  
  
#####  Range primitives   
  
Defined in namespace `std::experimental::ranges`  
[ size](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/ranges/range/size&action=edit&redlink=1 "cpp/experimental/ranges/range/size \(page does not exist\)") |  obtains the size of a range whose size can be calculated in constant time  
(customization point object)[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/ranges/range/dsc_size&action=edit)  
[ empty](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/ranges/range/empty&action=edit&redlink=1 "cpp/experimental/ranges/range/empty \(page does not exist\)") |  checks whether a range is empty  
(customization point object)[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/ranges/range/dsc_empty&action=edit)  
[ datacdata](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/ranges/range/data&action=edit&redlink=1 "cpp/experimental/ranges/range/data \(page does not exist\)") |  obtains a pointer to the beginning of a contiguous range  
(customization point object)[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/ranges/range/dsc_data&action=edit)  
[ iterator_tsentinel_t](ranges/range/iterator_t.html "cpp/experimental/ranges/range/iterator t") |  obtains the iterator and sentinel types of a range  
(alias template)[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/ranges/range/dsc_iterator_t&action=edit)  
  
#### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/ranges&action=edit&section=6 "Edit section: Algorithms")] Algorithms

Defined in header `[<experimental/ranges/algorithm>](../header/experimental/ranges/algorithm.html "cpp/header/experimental/ranges/algorithm")`  
---  
  
#####  Non-modifying sequence operations   
  
Defined in namespace `std::experimental::ranges`  
[ all_ofany_ofnone_of](ranges/algorithm/all_any_none_of.html "cpp/experimental/ranges/algorithm/all any none of") |  checks if a predicate is true for all, any or none of the elements in a range   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/ranges/algorithm/dsc_all_any_none_of&action=edit)  
[ for_each](ranges/algorithm/for_each.html "cpp/experimental/ranges/algorithm/for each") |  applies a function to a range of elements   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/ranges/algorithm/dsc_for_each&action=edit)  
[ countcount_if](ranges/algorithm/count.html "cpp/experimental/ranges/algorithm/count") |  returns the number of elements satisfying specific criteria   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/ranges/algorithm/dsc_count&action=edit)  
[ mismatch](ranges/algorithm/mismatch.html "cpp/experimental/ranges/algorithm/mismatch") |  finds the first position where two ranges differ   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/ranges/algorithm/dsc_mismatch&action=edit)  
[ equal](ranges/algorithm/equal.html "cpp/experimental/ranges/algorithm/equal") |  determines if two sets of elements are the same   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/ranges/algorithm/dsc_equal&action=edit)  
[ lexicographical_compare](ranges/algorithm/lexicographical_compare.html "cpp/experimental/ranges/algorithm/lexicographical compare") |  returns true if one range is lexicographically less than another   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/ranges/algorithm/dsc_lexicographical_compare&action=edit)  
[ findfind_iffind_if_not](ranges/algorithm/find.html "cpp/experimental/ranges/algorithm/find") |  finds the first element satisfying specific criteria   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/ranges/algorithm/dsc_find&action=edit)  
[ find_end](ranges/algorithm/find_end.html "cpp/experimental/ranges/algorithm/find end") |  finds the last sequence of elements in a certain range   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/ranges/algorithm/dsc_find_end&action=edit)  
[ find_first_of](ranges/algorithm/find_first_of.html "cpp/experimental/ranges/algorithm/find first of") |  searches for any one of a set of elements   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/ranges/algorithm/dsc_find_first_of&action=edit)  
[ adjacent_find](ranges/algorithm/adjacent_find.html "cpp/experimental/ranges/algorithm/adjacent find") |  finds the first two adjacent items that are equal (or satisfy a given predicate)   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/ranges/algorithm/dsc_adjacent_find&action=edit)  
[ search](ranges/algorithm/search.html "cpp/experimental/ranges/algorithm/search") |  searches for a range of elements   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/ranges/algorithm/dsc_search&action=edit)  
[ search_n](ranges/algorithm/search_n.html "cpp/experimental/ranges/algorithm/search n") |  searches for a number consecutive copies of an element in a range   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/ranges/algorithm/dsc_search_n&action=edit)  
  
#####  Modifying sequence operations   
  
Defined in namespace `std::experimental::ranges`  
[ copycopy_if](ranges/algorithm/copy.html "cpp/experimental/ranges/algorithm/copy") |  copies a range of elements to a new location   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/ranges/algorithm/dsc_copy&action=edit)  
[ copy_n](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/ranges/algorithm/copy_n&action=edit&redlink=1 "cpp/experimental/ranges/algorithm/copy n \(page does not exist\)") |  copies a number of elements to a new location   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/ranges/algorithm/dsc_copy_n&action=edit)  
[ copy_backward](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/ranges/algorithm/copy_backward&action=edit&redlink=1 "cpp/experimental/ranges/algorithm/copy backward \(page does not exist\)") |  copies a range of elements in backwards order   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/ranges/algorithm/dsc_copy_backward&action=edit)  
[ move](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/ranges/algorithm/move&action=edit&redlink=1 "cpp/experimental/ranges/algorithm/move \(page does not exist\)") |  moves a range of elements to a new location   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/ranges/algorithm/dsc_move&action=edit)  
[ move_backward](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/ranges/algorithm/move_backward&action=edit&redlink=1 "cpp/experimental/ranges/algorithm/move backward \(page does not exist\)") |  moves a range of elements to a new location in backwards order   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/ranges/algorithm/dsc_move_backward&action=edit)  
[ fill](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/ranges/algorithm/fill&action=edit&redlink=1 "cpp/experimental/ranges/algorithm/fill \(page does not exist\)") |  assigns a range of elements a certain value   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/ranges/algorithm/dsc_fill&action=edit)  
[ fill_n](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/ranges/algorithm/fill_n&action=edit&redlink=1 "cpp/experimental/ranges/algorithm/fill n \(page does not exist\)") |  assigns a value to a number of elements   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/ranges/algorithm/dsc_fill_n&action=edit)  
[ transform](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/ranges/algorithm/transform&action=edit&redlink=1 "cpp/experimental/ranges/algorithm/transform \(page does not exist\)") |  applies a function to a range of elements   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/ranges/algorithm/dsc_transform&action=edit)  
[ generate](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/ranges/algorithm/generate&action=edit&redlink=1 "cpp/experimental/ranges/algorithm/generate \(page does not exist\)") |  saves the result of a function in a range   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/ranges/algorithm/dsc_generate&action=edit)  
[ generate_n](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/ranges/algorithm/generate_n&action=edit&redlink=1 "cpp/experimental/ranges/algorithm/generate n \(page does not exist\)") |  saves the result of N applications of a function   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/ranges/algorithm/dsc_generate_n&action=edit)  
[ removeremove_if](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/ranges/algorithm/remove&action=edit&redlink=1 "cpp/experimental/ranges/algorithm/remove \(page does not exist\)") |  removes elements satisfying specific criteria   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/ranges/algorithm/dsc_remove&action=edit)  
[ remove_copyremove_copy_if](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/ranges/algorithm/remove_copy&action=edit&redlink=1 "cpp/experimental/ranges/algorithm/remove copy \(page does not exist\)") |  copies a range of elements omitting those that satisfy specific criteria   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/ranges/algorithm/dsc_remove_copy&action=edit)  
[ replacereplace_if](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/ranges/algorithm/replace&action=edit&redlink=1 "cpp/experimental/ranges/algorithm/replace \(page does not exist\)") |  replaces all values satisfying specific criteria with another value   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/ranges/algorithm/dsc_replace&action=edit)  
[ replace_copyreplace_copy_if](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/ranges/algorithm/replace_copy&action=edit&redlink=1 "cpp/experimental/ranges/algorithm/replace copy \(page does not exist\)") |  copies a range, replacing elements satisfying specific criteria with another value   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/ranges/algorithm/dsc_replace_copy&action=edit)  
[ swap_ranges](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/ranges/algorithm/swap_ranges&action=edit&redlink=1 "cpp/experimental/ranges/algorithm/swap ranges \(page does not exist\)") |  swaps two ranges of elements   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/ranges/algorithm/dsc_swap_ranges&action=edit)  
[ reverse](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/ranges/algorithm/reverse&action=edit&redlink=1 "cpp/experimental/ranges/algorithm/reverse \(page does not exist\)") |  reverses the order of elements in a range   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/ranges/algorithm/dsc_reverse&action=edit)  
[ reverse_copy](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/ranges/algorithm/reverse_copy&action=edit&redlink=1 "cpp/experimental/ranges/algorithm/reverse copy \(page does not exist\)") |  creates a copy of a range that is reversed   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/ranges/algorithm/dsc_reverse_copy&action=edit)  
[ rotate](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/ranges/algorithm/rotate&action=edit&redlink=1 "cpp/experimental/ranges/algorithm/rotate \(page does not exist\)") |  rotates the order of elements in a range   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/ranges/algorithm/dsc_rotate&action=edit)  
[ rotate_copy](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/ranges/algorithm/rotate_copy&action=edit&redlink=1 "cpp/experimental/ranges/algorithm/rotate copy \(page does not exist\)") |  copies and rotate a range of elements   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/ranges/algorithm/dsc_rotate_copy&action=edit)  
[ shuffle](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/ranges/algorithm/shuffle&action=edit&redlink=1 "cpp/experimental/ranges/algorithm/shuffle \(page does not exist\)") |  randomly re-orders elements in a range   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/ranges/algorithm/dsc_shuffle&action=edit)  
[ unique](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/ranges/algorithm/unique&action=edit&redlink=1 "cpp/experimental/ranges/algorithm/unique \(page does not exist\)") |  removes consecutive duplicate elements in a range   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/ranges/algorithm/dsc_unique&action=edit)  
[ unique_copy](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/ranges/algorithm/unique_copy&action=edit&redlink=1 "cpp/experimental/ranges/algorithm/unique copy \(page does not exist\)") |  creates a copy of some range of elements that contains no consecutive duplicates   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/ranges/algorithm/dsc_unique_copy&action=edit)  
  
#####  Partitioning operations   
  
Defined in namespace `std::experimental::ranges`  
[ is_partitioned](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/ranges/algorithm/is_partitioned&action=edit&redlink=1 "cpp/experimental/ranges/algorithm/is partitioned \(page does not exist\)") |  determines if the range is partitioned by the given predicate   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/ranges/algorithm/dsc_is_partitioned&action=edit)  
[ partition](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/ranges/algorithm/partition&action=edit&redlink=1 "cpp/experimental/ranges/algorithm/partition \(page does not exist\)") |  divides a range of elements into two groups   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/ranges/algorithm/dsc_partition&action=edit)  
[ partition_copy](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/ranges/algorithm/partition_copy&action=edit&redlink=1 "cpp/experimental/ranges/algorithm/partition copy \(page does not exist\)") |  copies a range dividing the elements into two groups   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/ranges/algorithm/dsc_partition_copy&action=edit)  
[ stable_partition](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/ranges/algorithm/stable_partition&action=edit&redlink=1 "cpp/experimental/ranges/algorithm/stable partition \(page does not exist\)") |  divides elements into two groups while preserving their relative order   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/ranges/algorithm/dsc_stable_partition&action=edit)  
[ partition_point](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/ranges/algorithm/partition_point&action=edit&redlink=1 "cpp/experimental/ranges/algorithm/partition point \(page does not exist\)") |  locates the partition point of a partitioned range   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/ranges/algorithm/dsc_partition_point&action=edit)  
  
#####  Sorting operations   
  
Defined in namespace `std::experimental::ranges`  
[ is_sorted](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/ranges/algorithm/is_sorted&action=edit&redlink=1 "cpp/experimental/ranges/algorithm/is sorted \(page does not exist\)") |  checks whether a range is sorted into ascending order   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/ranges/algorithm/dsc_is_sorted&action=edit)  
[ is_sorted_until](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/ranges/algorithm/is_sorted_until&action=edit&redlink=1 "cpp/experimental/ranges/algorithm/is sorted until \(page does not exist\)") |  finds the largest sorted subrange   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/ranges/algorithm/dsc_is_sorted_until&action=edit)  
[ sort](ranges/algorithm/sort.html "cpp/experimental/ranges/algorithm/sort") |  sorts a range into ascending order   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/ranges/algorithm/dsc_sort&action=edit)  
[ partial_sort](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/ranges/algorithm/partial_sort&action=edit&redlink=1 "cpp/experimental/ranges/algorithm/partial sort \(page does not exist\)") |  sorts the first N elements of a range   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/ranges/algorithm/dsc_partial_sort&action=edit)  
[ partial_sort_copy](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/ranges/algorithm/partial_sort_copy&action=edit&redlink=1 "cpp/experimental/ranges/algorithm/partial sort copy \(page does not exist\)") |  copies and partially sorts a range of elements   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/ranges/algorithm/dsc_partial_sort_copy&action=edit)  
[ stable_sort](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/ranges/algorithm/stable_sort&action=edit&redlink=1 "cpp/experimental/ranges/algorithm/stable sort \(page does not exist\)") |  sorts a range of elements while preserving order between equal elements   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/ranges/algorithm/dsc_stable_sort&action=edit)  
[ nth_element](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/ranges/algorithm/nth_element&action=edit&redlink=1 "cpp/experimental/ranges/algorithm/nth element \(page does not exist\)") |  partially sorts the given range making sure that it is partitioned by the given element   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/ranges/algorithm/dsc_nth_element&action=edit)  
  
#####  Binary search operations (on sorted ranges)   
  
Defined in namespace `std::experimental::ranges`  
[ lower_bound](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/ranges/algorithm/lower_bound&action=edit&redlink=1 "cpp/experimental/ranges/algorithm/lower bound \(page does not exist\)") |  returns an iterator to the first element _not less_ than the given value   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/ranges/algorithm/dsc_lower_bound&action=edit)  
[ upper_bound](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/ranges/algorithm/upper_bound&action=edit&redlink=1 "cpp/experimental/ranges/algorithm/upper bound \(page does not exist\)") |  returns an iterator to the first element _greater_ than a certain value   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/ranges/algorithm/dsc_upper_bound&action=edit)  
[ binary_search](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/ranges/algorithm/binary_search&action=edit&redlink=1 "cpp/experimental/ranges/algorithm/binary search \(page does not exist\)") |  determines if an element exists in a certain range   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/ranges/algorithm/dsc_binary_search&action=edit)  
[ equal_range](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/ranges/algorithm/equal_range&action=edit&redlink=1 "cpp/experimental/ranges/algorithm/equal range \(page does not exist\)") |  returns range of elements matching a specific key   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/ranges/algorithm/dsc_equal_range&action=edit)  
  
#####  Set operations (on sorted ranges)   
  
Defined in namespace `std::experimental::ranges`  
[ merge](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/ranges/algorithm/merge&action=edit&redlink=1 "cpp/experimental/ranges/algorithm/merge \(page does not exist\)") |  merges two sorted ranges   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/ranges/algorithm/dsc_merge&action=edit)  
[ inplace_merge](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/ranges/algorithm/inplace_merge&action=edit&redlink=1 "cpp/experimental/ranges/algorithm/inplace merge \(page does not exist\)") |  merges two ordered ranges in-place   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/ranges/algorithm/dsc_inplace_merge&action=edit)  
[ includes](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/ranges/algorithm/includes&action=edit&redlink=1 "cpp/experimental/ranges/algorithm/includes \(page does not exist\)") |  returns true if one set is a subset of another   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/ranges/algorithm/dsc_includes&action=edit)  
[ set_difference](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/ranges/algorithm/set_difference&action=edit&redlink=1 "cpp/experimental/ranges/algorithm/set difference \(page does not exist\)") |  computes the difference between two sets   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/ranges/algorithm/dsc_set_difference&action=edit)  
[ set_intersection](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/ranges/algorithm/set_intersection&action=edit&redlink=1 "cpp/experimental/ranges/algorithm/set intersection \(page does not exist\)") |  computes the intersection of two sets   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/ranges/algorithm/dsc_set_intersection&action=edit)  
[ set_symmetric_difference](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/ranges/algorithm/set_symmetric_difference&action=edit&redlink=1 "cpp/experimental/ranges/algorithm/set symmetric difference \(page does not exist\)") |  computes the symmetric difference between two sets   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/ranges/algorithm/dsc_set_symmetric_difference&action=edit)  
[ set_union](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/ranges/algorithm/set_union&action=edit&redlink=1 "cpp/experimental/ranges/algorithm/set union \(page does not exist\)") |  computes the union of two sets   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/ranges/algorithm/dsc_set_union&action=edit)  
  
#####  Heap operations   
  
Defined in namespace `std::experimental::ranges`  
[ is_heap](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/ranges/algorithm/is_heap&action=edit&redlink=1 "cpp/experimental/ranges/algorithm/is heap \(page does not exist\)") |  checks if the given range is a max heap   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/ranges/algorithm/dsc_is_heap&action=edit)  
[ is_heap_until](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/ranges/algorithm/is_heap_until&action=edit&redlink=1 "cpp/experimental/ranges/algorithm/is heap until \(page does not exist\)") |  finds the largest subrange that is a max heap   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/ranges/algorithm/dsc_is_heap_until&action=edit)  
[ make_heap](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/ranges/algorithm/make_heap&action=edit&redlink=1 "cpp/experimental/ranges/algorithm/make heap \(page does not exist\)") |  creates a max heap out of a range of elements   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/ranges/algorithm/dsc_make_heap&action=edit)  
[ push_heap](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/ranges/algorithm/push_heap&action=edit&redlink=1 "cpp/experimental/ranges/algorithm/push heap \(page does not exist\)") |  adds an element to a max heap   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/ranges/algorithm/dsc_push_heap&action=edit)  
[ pop_heap](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/ranges/algorithm/pop_heap&action=edit&redlink=1 "cpp/experimental/ranges/algorithm/pop heap \(page does not exist\)") |  removes the largest element from a max heap   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/ranges/algorithm/dsc_pop_heap&action=edit)  
[ sort_heap](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/ranges/algorithm/sort_heap&action=edit&redlink=1 "cpp/experimental/ranges/algorithm/sort heap \(page does not exist\)") |  turns a max heap into a range of elements sorted in ascending order   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/ranges/algorithm/dsc_sort_heap&action=edit)  
  
#####  Minimum/maximum operations   
  
Defined in namespace `std::experimental::ranges`  
[ max](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/ranges/algorithm/max&action=edit&redlink=1 "cpp/experimental/ranges/algorithm/max \(page does not exist\)") |  returns the greater of the given values   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/ranges/algorithm/dsc_max&action=edit)  
[ max_element](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/ranges/algorithm/max_element&action=edit&redlink=1 "cpp/experimental/ranges/algorithm/max element \(page does not exist\)") |  returns the largest element in a range   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/ranges/algorithm/dsc_max_element&action=edit)  
[ min](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/ranges/algorithm/min&action=edit&redlink=1 "cpp/experimental/ranges/algorithm/min \(page does not exist\)") |  returns the smaller of the given values   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/ranges/algorithm/dsc_min&action=edit)  
[ min_element](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/ranges/algorithm/min_element&action=edit&redlink=1 "cpp/experimental/ranges/algorithm/min element \(page does not exist\)") |  returns the smallest element in a range   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/ranges/algorithm/dsc_min_element&action=edit)  
[ minmax](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/ranges/algorithm/minmax&action=edit&redlink=1 "cpp/experimental/ranges/algorithm/minmax \(page does not exist\)") |  returns the smaller and larger of two elements   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/ranges/algorithm/dsc_minmax&action=edit)  
[ minmax_element](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/ranges/algorithm/minmax_element&action=edit&redlink=1 "cpp/experimental/ranges/algorithm/minmax element \(page does not exist\)") |  returns the smallest and the largest elements in a range   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/ranges/algorithm/dsc_minmax_element&action=edit)  
  
#####  Permutation operations   
  
Defined in namespace `std::experimental::ranges`  
[ is_permutation](ranges/algorithm/is_permutation.html "cpp/experimental/ranges/algorithm/is permutation") |  determines if a sequence is a permutation of another sequence   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/ranges/algorithm/dsc_is_permutation&action=edit)  
[ next_permutation](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/ranges/algorithm/next_permutation&action=edit&redlink=1 "cpp/experimental/ranges/algorithm/next permutation \(page does not exist\)") |  generates the next greater lexicographic permutation of a range of elements   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/ranges/algorithm/dsc_next_permutation&action=edit)  
[ prev_permutation](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/ranges/algorithm/prev_permutation&action=edit&redlink=1 "cpp/experimental/ranges/algorithm/prev permutation \(page does not exist\)") |  generates the next smaller lexicographic permutation of a range of elements   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/ranges/algorithm/dsc_prev_permutation&action=edit)
