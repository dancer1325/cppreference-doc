
  


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
**unsigned_integral**(C++20)  
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
template< class T >  
concept unsigned_integral = [std::integral](integral.html)<T> && ![std::signed_integral](signed_integral.html)<T>; |  |  (since C++20)  
| |   
  
The concept `unsigned_integral<T>` is satisfied if and only if `T` is an integral type and [std::is_signed_v](../types/is_signed.html)<T> is false. 

## Contents

  * [1 Notes](unsigned_integral.html#Notes)
  * [2 Example](unsigned_integral.html#Example)
  * [3 References](unsigned_integral.html#References)
  * [4 See also](unsigned_integral.html#See_also)

  
---  
  
### Notes

`unsigned_integral<T>` may be satisfied by a type that is not an [unsigned integer type](../language/type-id.html#Type_classification "cpp/language/type"), for example, bool. 

### Example

Run this code
    
    
    #include <concepts>
    #include <iostream>
    #include <string_view>
     
    void test([std::signed_integral](signed_integral.html) auto x, [std::string_view](../string/basic_string_view.html) text = "")
    {
        [std::cout](../io/cout.html) << text << " (" + (text == "") << x << ") is a signed integral\n";
    }
     
    void test(std::unsigned_integral auto x, [std::string_view](../string/basic_string_view.html) text = "")
    {
        [std::cout](../io/cout.html) << text << " (" + (text == "") << x << ") is an unsigned integral\n";
    }
     
    void test(auto x, [std::string_view](../string/basic_string_view.html) text = "")
    {
        [std::cout](../io/cout.html) << text << " (" + (text == "") << x << ") is non-integral\n";
    }
     
    int main()
    {
        test(42);               // signed
        test(0xFULL, "0xFULL"); // unsigned
        test('A');              // platform-dependent
        test(true, "true");     // unsigned
        test(4e-2, "4e-2");     // non-integral (hex-float)
        test("∫∫");             // non-integral
    }

Possible output: 
    
    
    (42) is a signed integral
    0xFULL (15) is an unsigned integral
    (A) is a signed integral
    true (1) is an unsigned integral
    4e-2 (0.04) is non-integral
    (∫∫) is non-integral

### References

  * C++23 standard (ISO/IEC 14882:2024): 



    

  * 18.4.7 Arithmetic concepts [concepts.arithmetic] 



  * C++20 standard (ISO/IEC 14882:2020): 



    

  * 18.4.7 Arithmetic concepts [concepts.arithmetic] 



### See also

[ is_integral](../types/is_integral.html "cpp/types/is integral")(C++11) |  checks if a type is an integral type   
(class template)   
---|---  
[ is_signed](../types/is_signed.html "cpp/types/is signed")(C++11) |  checks if a type is a signed arithmetic type   
(class template) 
