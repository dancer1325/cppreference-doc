
  


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
**floating_point**(C++20)  
[swappableswappable_with](swappable.html "cpp/concepts/swappable")(C++20)(C++20)  
[destructible](destructible.html "cpp/concepts/destructible")(C++20)  
[constructible_from](constructible_from.html "cpp/concepts/constructible from")(C++20)  
[default_initializable](default_initializable.html "cpp/concepts/default initializable")(C++20)` `  
[move_constructible](move_constructible.html "cpp/concepts/move constructible")(C++20)  
[copy_constructible](copy_constructible.html "cpp/concepts/copy constructible")(C++20)  
[assignable_from](assignable_from.html "cpp/concepts/assignable from")(C++20)  
  
  
| Exposition-only concepts  
---  
[_boolean-testable_](boolean-testable.html "cpp/concepts/boolean-testable") ﻿(C++20)  
  


Defined in header `[<concepts>](../header/concepts.html "cpp/header/concepts")` |  |   
---|---|---  
template< class T >  
concept floating_point = [std::is_floating_point_v](../types/is_floating_point.html)<T>; |  |  (since C++20)  
| |   
  
The concept floating_point<T> is satisfied if and only if `T` is a floating-point type. 

### Example

Run this code
    
    
    #include <concepts>
    #include <iostream>
    #include <type_traits>
     
    constexpr std::floating_point auto x2(std::floating_point auto x)
    {
        return x + x;
    }
     
    constexpr [std::integral](integral.html) auto x2([std::integral](integral.html) auto x)
    {
        return x << 1;
    }
     
    int main()
    {
        constexpr auto d = x2(1.1);
        static_assert([std::is_same_v](../types/is_same.html)<double const, decltype(d)>);
        [std::cout](../io/cout.html) << d << '\n';
     
        constexpr auto f = x2(2.2f);
        static_assert([std::is_same_v](../types/is_same.html)<float const, decltype(f)>);
        [std::cout](../io/cout.html) << f << '\n';
     
        constexpr auto i = x2(444);
        static_assert([std::is_same_v](../types/is_same.html)<int const, decltype(i)>);
        [std::cout](../io/cout.html) << i << '\n';
    }

Output: 
    
    
    2.2
    4.4
    888

### References

  * C++23 standard (ISO/IEC 14882:2024): 



    

  * 18.4.7 Arithmetic concepts [concepts.arithmetic] 



  * C++20 standard (ISO/IEC 14882:2020): 



    

  * 18.4.7 Arithmetic concepts [concepts.arithmetic] 



### See also

[ is_floating_point](../types/is_floating_point.html "cpp/types/is floating point")(C++11) |  checks if a type is a floating-point type   
(class template)   
---|---
