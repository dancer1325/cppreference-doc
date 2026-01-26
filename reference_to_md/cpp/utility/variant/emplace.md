 
  


  
  
  
  
  
  
  
  
  
  
  
  


[`std::variant`](../variant.html "cpp/utility/variant")

[Member functions](../variant.html#Member_functions "cpp/utility/variant")  
---  
[variant::variant](variant.html "cpp/utility/variant/variant")  
[variant::~variant](~variant.html "cpp/utility/variant/~variant")  
[variant::operator=](operator=.html "cpp/utility/variant/operator=")  
[Observers](../variant.html#Observers "cpp/utility/variant")  
[variant::index](index.html "cpp/utility/variant/index")  
[variant::valueless_by_exception](valueless_by_exception.html "cpp/utility/variant/valueless by exception")  
[Modifiers](../variant.html#Modifiers "cpp/utility/variant")  
**variant::emplace**  
[variant::swap](swap.html "cpp/utility/variant/swap")  
[Visitation](../variant.html#Visitation "cpp/utility/variant")  
[variant::visit](visit.html "cpp/utility/variant/visit")(C++26)  
[Non-member functions](../variant.html#Non-member_functions "cpp/utility/variant")  
[visit(std::variant)](visit2.html "cpp/utility/variant/visit2")  
[holds_alternative](holds_alternative.html "cpp/utility/variant/holds alternative")  
[get(std::variant)](get.html "cpp/utility/variant/get")  
[get_if](get_if.html "cpp/utility/variant/get if")  
[operator==operator!=operator<operator<=operator>operator>=operator<=>](operator_cmp.html "cpp/utility/variant/operator cmp")(C++20)  
[swap(std::variant)](swap2.html "cpp/utility/variant/swap2")  
[Helper classes](../variant.html#Helper_classes "cpp/utility/variant")  
[monostate](monostate.html "cpp/utility/variant/monostate")  
[bad_variant_access](bad_variant_access.html "cpp/utility/variant/bad variant access")  
[variant_size](variant_size.html "cpp/utility/variant/variant size")  
[variant_alternative](variant_alternative.html "cpp/utility/variant/variant alternative")  
[hash<std::variant>](hash.html "cpp/utility/variant/hash")  
[Helper objects](../variant.html#Helper_objects "cpp/utility/variant")  
[variant_npos](variant_npos.html "cpp/utility/variant/variant npos")  
  


template< class T, class... Args >  
T& emplace( Args&&... args ); |  (1) | (since C++17)   
(constexpr since C++20)  
---|---|---  
template< class T, class U, class... Args >  
T& emplace( [std::initializer_list](../initializer_list.html)<U> il, Args&&... args ); |  (2) | (since C++17)   
(constexpr since C++20)  
template< [std::size_t](../../types/size_t.html) I, class... Args >  
[std::variant_alternative_t](variant_alternative.html)<I, variant>& emplace( Args&&... args ); |  (3) | (since C++17)   
(constexpr since C++20)  
template< [std::size_t](../../types/size_t.html) I, class U, class... Args >  
[std::variant_alternative_t](variant_alternative.html)<I, variant>&  
emplace( [std::initializer_list](../initializer_list.html)<U> il, Args&&... args ); |  (4) | (since C++17)   
(constexpr since C++20)  
| |   
  
Creates a new value in-place, in an existing `variant` object 

1) Equivalent to emplace<I>([std::forward](../forward.html)<Args>(args)...), where `I` is the zero-based index of `T` in `Types...`. 

  * This overload participates in overload resolution only if [std::is_constructible_v](../../types/is_constructible.html)<T, Args...> is true, and `T` occurs exactly once in `Types...`.



2) Equivalent to emplace<I>(il, [std::forward](../forward.html)<Args>(args)...), where `I` is the zero-based index of `T` in `Types...`. 

  * This overload participates in overload resolution only if [std::is_constructible_v](../../types/is_constructible.html)<T, [std::initializer_list](../initializer_list.html)<U>&, Args...> is true, and `T` occurs exactly once in `Types...`.



3) First, destroys the currently contained value (if any). Then [direct-initializes](../../language/direct_initialization.html "cpp/language/direct initialization") the contained value as if constructing a value of type `T_I` with the arguments [std::forward](../forward.html)<Args>(args).... If an exception is thrown, *this may become [`valueless_by_exception`](valueless_by_exception.html "cpp/utility/variant/valueless by exception"). 

  * This overload participates in overload resolution only if [std::is_constructible_v](../../types/is_constructible.html)<T_I, Args...> is true. 
  * It is a compile-time error if `I` is not less than sizeof...(Types).



4) First, destroys the currently contained value (if any). Then [direct-initializes](../../language/direct_initialization.html "cpp/language/direct initialization") the contained value as if constructing a value of type `T_I` with the arguments il, [std::forward](../forward.html)<Args>(args).... If an exception is thrown, *this may become [`valueless_by_exception`](valueless_by_exception.html "cpp/utility/variant/valueless by exception"). 

  * This overload participates in overload resolution only if [std::is_constructible_v](../../types/is_constructible.html)<T_I, [std::initializer_list](../initializer_list.html)<U>&, Args...> is true. 
  * It is a compile-time error if `I` is not less than sizeof...(Types).



## Contents

  * [1 Parameters](emplace.html#Parameters)
  * [2 Return value](emplace.html#Return_value)
  * [3 Exceptions](emplace.html#Exceptions)
  * [4 Notes](emplace.html#Notes)
  * [5 Example](emplace.html#Example)
  * [6 Defect reports](emplace.html#Defect_reports)
  * [7 See also](emplace.html#See_also)

  
---  
  
### Parameters

args  |  \-  |  constructor arguments to use when constructing the new value   
---|---|---  
il  |  \-  |  initializer_list argument to use when constructing the new value   
  
### Return value

A reference to the new contained value. 

### Exceptions

1-4) Any exception thrown during the initialization of the contained value.

### Notes

[Feature-test](../feature_test.html "cpp/utility/feature test") macro  | Value | Std | Feature   
---|---|---|---  
[`__cpp_lib_variant`](../../experimental/feature_test.html#cpp_lib_variant "cpp/feature test") | [`202106L`](../../compiler_support/20.html#cpp_lib_variant_202106L "cpp/compiler support/20") | (C++20)  
(DR) | Fully constexpr `std::variant` ([1-4](emplace.html#Version_1))  
  
### Example

Run this code
    
    
    #include <iostream>
    #include <string>
    #include <variant>
     
    int main()
    {
        [std::variant](../variant.html)<[std::string](../../string/basic_string.html)> v1;
        v1.emplace<0>("abc"); // OK
        [std::cout](../../io/cout.html) << std::get<0>(v1) << '\n';
        v1.emplace<[std::string](../../string/basic_string.html)>("def"); // OK
        [std::cout](../../io/cout.html) << std::get<0>(v1) << '\n';
     
        [std::variant](../variant.html)<[std::string](../../string/basic_string.html), [std::string](../../string/basic_string.html)> v2;
        v2.emplace<1>("ghi"); // OK
        [std::cout](../../io/cout.html) << std::get<1>(v2) << '\n';
        // v2.emplace<std::string>("abc"); -> Error
    }

Output: 
    
    
    abc
    def
    ghi

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[P2231R1](https://wg21.link/P2231R1) | C++20  | `emplace` was not constexpr while the required operations can be constexpr in C++20  | made constexpr  
  
### See also

[ operator=](operator=.html "cpp/utility/variant/operator=") |  assigns a `variant`   
(public member function)   
---|---
  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
