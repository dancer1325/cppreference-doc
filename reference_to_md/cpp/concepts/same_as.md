
  


[Concepts library](../concepts.html "cpp/concepts")

| [Core language concepts](../concepts.html#Core_language_concepts "cpp/concepts")  
---  
**same_as**(C++20)  
[derived_from](derived_from.html "cpp/concepts/derived from")(C++20)  
[convertible_to](convertible_to.html "cpp/concepts/convertible to")(C++20)  
[common_reference_with](common_reference_with.html "cpp/concepts/common reference with")(C++20)  
[common_with](common_with.html "cpp/concepts/common with")(C++20)  
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
  


Defined in header `[<concepts>](../header/concepts.html "cpp/header/concepts")` |  |   
---|---|---  
template< class T, class U >  
concept same_as = /* see below */; |  |  (since C++20)  
| |   
  
The concept `same_as<T, U>` is satisfied if and only if `T` and `U` denote the same type. 

std::same_as<T, U> [subsumes](../language/constraints.html#Partial_ordering_of_constraints "cpp/language/constraints") std::same_as<U, T> and vice versa. 

## Contents

  * [1 Possible implementation](same_as.html#Possible_implementation)
  * [2 Example](same_as.html#Example)
  * [3 References](same_as.html#References)
  * [4 See also](same_as.html#See_also)

  
---  
  
### Possible implementation
    
    
    namespace detail
    {
        template< class T, class U >
        concept SameHelper = [std::is_same_v](../types/is_same.html)<T, U>;
    }
     
    template< class T, class U >
    concept same_as = detail::SameHelper<T, U> && detail::SameHelper<U, T>;  
  
---  
  
### Example

Run this code
    
    
    #include <concepts>
    #include <iostream>
     
    template<typename T, typename ... U>
    concept either = (std::same_as<T, U> || ...);
     
    template<typename T>
    concept is_printable = [std::integral](integral.html)<T> || [std::floating_point](floating_point.html)<T> ||
        either<[std::remove_cvref_t](../types/remove_cvref.html)<[std::remove_pointer_t](../types/remove_pointer.html)<[std::decay_t](../types/decay.html)<T>>>, char, wchar_t>;
     
    void println(is_printable auto const ... arguments)
    {
        ([std::wcout](../io/cout.html) << ... << arguments) << '\n';
    }
     
    int main()
    {
        println("Example: ", 3.14, " : ", 42, " : [", 'a', L'-', L"Z]");
    }

Output: 
    
    
    Example: 3.14 : 42 : [a-Z]

### References

  * C++23 standard (ISO/IEC 14882:2024): 



    

  * 18.4.2 Concept `same_as` [concept.same] 



  * C++20 standard (ISO/IEC 14882:2020): 



    

  * 18.4.2 Concept `same_as` [concept.same] 



### See also

[ is_same](../types/is_same.html "cpp/types/is same")(C++11) |  checks if two types are the same   
(class template)   
---|---
