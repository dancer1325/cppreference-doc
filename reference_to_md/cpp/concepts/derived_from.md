
  


[Concepts library](../concepts.html "cpp/concepts")

| [Core language concepts](../concepts.html#Core_language_concepts "cpp/concepts")  
---  
[same_as](same_as.html "cpp/concepts/same as")(C++20)  
**derived_from**(C++20)  
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
template< class Derived, class Base >  
concept derived_from =  
[std::is_base_of_v](../types/is_base_of.html)<Base, Derived> &&  
[std::is_convertible_v](../types/is_convertible.html)<const volatile Derived*, const volatile Base*>; |  |  (since C++20)  
| |   
  
The concept derived_from<Derived, Base> is satisfied if and only if `Base` is a class type that is either `Derived` or a public and unambiguous base of `Derived`, ignoring cv-qualifiers. 

Note that this behavior is different to `std::is_base_of` when `Base` is a private or protected base of `Derived`. 

### Example

Run this code
    
    
    #include <concepts>
     
    class A {};
     
    class B : public A {};
     
    class C : private A {};
     
    // std::derived_from == true only for public inheritance or exact same class
    static_assert(std::derived_from<B, B> == true);      // same class: true
    static_assert(std::derived_from<int, int> == false); // same primitive type: false
    static_assert(std::derived_from<B, A> == true);      // public inheritance: true
    static_assert(std::derived_from<C, A> == false);     // private inheritance: false
     
    // std::is_base_of == true also for private inheritance
    static_assert([std::is_base_of_v](../types/is_base_of.html)<B, B> == true);      // same class: true
    static_assert([std::is_base_of_v](../types/is_base_of.html)<int, int> == false); // same primitive type: false
    static_assert([std::is_base_of_v](../types/is_base_of.html)<A, B> == true);      // public inheritance: true
    static_assert([std::is_base_of_v](../types/is_base_of.html)<A, C> == true);      // private inheritance: true
     
    int main() {}

### References

  * C++23 standard (ISO/IEC 14882:2024): 



    

  * 18.4.3 Concept `derived_from` [concept.derived] 



  * C++20 standard (ISO/IEC 14882:2020): 



    

  * 18.4.3 Concept `derived_from` [concept.derived] 



### See also

[ is_base_of](../types/is_base_of.html "cpp/types/is base of")(C++11) |  checks if a type is a base of the other type   
(class template)   
---|---  
[ is_convertibleis_nothrow_convertible](../types/is_convertible.html "cpp/types/is convertible")(C++11)(C++20) |  checks if a type can be converted to the other type   
(class template) 
