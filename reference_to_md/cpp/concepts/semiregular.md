
  


[Concepts library](../concepts.html "cpp/concepts")

| [Core language concepts](../concepts.html#Core_language_concepts "cpp/concepts")  
---  
[same_as](same_as.html "cpp/concepts/same as")(C++20)  
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
**semiregular**(C++20)  
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
template< class T >  
concept semiregular = [std::copyable](copyable.html)<T> && [std::default_initializable](default_initializable.html)<T>; |  |  (since C++20)  
| |   
  
The `semiregular` concept specifies that a type is both copyable and default constructible. It is satisfied by types that behave similarly to built-in types like int, except that they need not support comparison with `==`. 

### Example

Run this code
    
    
    #include <concepts>
    #include <iostream>
     
    template<std::semiregular T>
    // Credit Alexander Stepanov
    // concepts are requirements on T
    // Requirement on T: T is semiregular
    // T a(b); or T a = b; => copy constructor
    // T a; => default constructor
    // a = b; => assignment
    struct Single
    {
        T value;
        // Aggregation initialization for Single behaves like following constructor:
        // explicit Single(const T& x) : value(x) {}
     
        // Implicitly declared special member functions behave like following definitions,
        // except that they may have additional properties:
        // Single(const Single& x) : value(x.value) {}
        // Single() {}
        // ~Single() {}
        // Single& operator=(const Single& x) { value = x.value; return *this; }
        // comparison operator is not defined; it is not required by `semiregular` concept
        // bool operator==(Single const& other) const = delete;
    };
     
    void print(std::semiregular auto x)
    {
        [std::cout](../io/cout.html) << x.value << '\n';
    }
     
    int main()
    {
        Single<int> myInt1{4};      // aggregate initialization: myInt1.value = 4
        Single<int> myInt2(myInt1); // copy constructor
        Single<int> myInt3;         // default constructor
        myInt3 = myInt2;            // copy assignment operator
    //  myInt1 == myInt2;           // Error: operator== is not defined
     
        print(myInt1); // ok: Single<int> is a `semiregular` type
        print(myInt2);
        print(myInt3);
     
    }   // Single<int> variables are destroyed here

Output: 
    
    
    4
    4
    4

### References

  * C++23 standard (ISO/IEC 14882:2024): 



    

  * 18.6 Object concepts [concepts.object] 



  * C++20 standard (ISO/IEC 14882:2020): 



    

  * 18.6 Object concepts [concepts.object] 



### See also

[ regular](regular.html "cpp/concepts/regular")(C++20) |  specifies that a type is regular, that is, it is both **`semiregular`** and [`equality_comparable`](equality_comparable.html "cpp/concepts/equality comparable")   
(concept)   
---|---
