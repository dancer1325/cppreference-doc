
  


[Concepts library](../concepts.html "cpp/concepts")

| [Core language concepts](../concepts.html#Core_language_concepts "cpp/concepts")  
---  
[same_as](same_as.html "cpp/concepts/same as")(C++20)  
[derived_from](derived_from.html "cpp/concepts/derived from")(C++20)  
[convertible_to](convertible_to.html "cpp/concepts/convertible to")(C++20)  
[common_reference_with](common_reference_with.html "cpp/concepts/common reference with")(C++20)  
[common_with](common_with.html "cpp/concepts/common with")(C++20)  
[integral](integral.html "cpp/concepts/integral")(C++20)  
**signed_integral**(C++20)  
[unsigned_integral](unsigned_integral.html "cpp/concepts/unsigned integral")(C++20)  
[floating_point](floating_point.html "cpp/concepts/floating point")(C++20)  
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
concept signed_integral = [std::integral](integral.html)<T> && [std::is_signed_v](../types/is_signed.html)<T>; |  |  (since C++20)  
| |   
  
The concept `signed_integral<T>` is satisfied if and only if `T` is an integral type and [std::is_signed_v](../types/is_signed.html)<T> is true. 

## Contents

  * [1 Notes](signed_integral.html#Notes)
  * [2 Example](signed_integral.html#Example)
  * [3 References](signed_integral.html#References)
  * [4 See also](signed_integral.html#See_also)

  
---  
  
### Notes

`signed_integral<T>` may be satisfied by a type that is not a [signed integer type](../language/type-id.html#Type_classification "cpp/language/type"), for example, char (on a system where char is signed). 

### Example

Run this code
    
    
    #include <concepts>
    #include <iostream>
    #include <string_view>
     
    void test(std::signed_integral auto x, [std::string_view](../string/basic_string_view.html) text = "")
    {
        [std::cout](../io/cout.html) << text << " (" + (text == "") << x << ") is a signed integral\n";
    }
     
    void test([std::unsigned_integral](unsigned_integral.html) auto x, [std::string_view](../string/basic_string_view.html) text = "")
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
