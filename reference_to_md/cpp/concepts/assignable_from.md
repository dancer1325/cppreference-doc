
  


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
**assignable_from**(C++20)  
  
  
| Exposition-only concepts  
---  
[_boolean-testable_](boolean-testable.html "cpp/concepts/boolean-testable") ﻿(C++20)  
  


Defined in header `[<concepts>](../header/concepts.html "cpp/header/concepts")` |  |   
---|---|---  
template< class LHS, class RHS >  
concept assignable_from =  
[std::is_lvalue_reference_v](../types/is_lvalue_reference.html)<LHS> &&  
[std::common_reference_with](common_reference_with.html)<  
const [std::remove_reference_t](../types/remove_reference.html)<LHS>&,  
const [std::remove_reference_t](../types/remove_reference.html)<RHS>&> &&  
requires(LHS lhs, RHS&& rhs) {  
{ lhs = [std::forward](../utility/forward.html)<RHS>(rhs) } -> [std::same_as](same_as.html)<LHS>;  
}; |  |  (since C++20)  
| |   
  
The concept `assignable_from<LHS, RHS>` specifies that an expression of the type and value category specified by `RHS` can be assigned to an lvalue expression whose type is specified by `LHS`. 

## Contents

  * [1 Semantic requirements](assignable_from.html#Semantic_requirements)
  * [2 Equality preservation](assignable_from.html#Equality_preservation)
  * [3 Notes](assignable_from.html#Notes)
  * [4 Example](assignable_from.html#Example)
  * [5 References](assignable_from.html#References)
  * [6 See also](assignable_from.html#See_also)

  
---  
  
### Semantic requirements

Given 

  * `lhs`, an lvalue that refers to an object `lcopy` such that decltype((lhs)) is `LHS`, 
  * `rhs`, an expression such that decltype((rhs)) is `RHS`, 
  * `rcopy`, a distinct object that is equal to `rhs`, 



`assignable_from<LHS, RHS>` is modeled only if 

  * [std::addressof](../memory/addressof.html)(lhs = rhs) == [std::addressof](../memory/addressof.html)(lcopy) (i.e., the assignment expression yields an lvalue referring to the left operand); 
  * After evaluating lhs = rhs: 
    * `lhs` is equal to `rcopy`, unless `rhs` is a non-const xvalue that refers to `lcopy` (i.e., the assignment is a self-move-assignment), 
    * if `rhs` is a glvalue: 
      * If it is a non-const xvalue, the object to which it refers is in a valid but unspecified state; 
      * Otherwise, the object it refers to is not modified; 



### Equality preservation

Expressions declared in [requires expressions](../language/requires.html "cpp/language/requires") of the standard library concepts are required to be [equality-preserving](../concepts.html#Equality_preservation "cpp/concepts") (except where stated otherwise). 

### Notes

Assignment need not be a total function. In particular, if assigning to some object `x` can cause some other object `y` to be modified, then x = y is likely not in the domain of `**=**`. This typically happens if the right operand is owned directly or indirectly by the left operand (e.g., with smart pointers to nodes in a node-based data structure, or with something like [std::vector](../container/vector.html)<[std::any](../utility/any.html)>). 

### Example

Run this code
    
    
    #include <atomic>
    #include <concepts>
    #include <string>
     
    int main()
    {
        // Normal basic usage, checks lvalue reference assignment
        static_assert([std::is_assignable_v](../types/is_assignable.html)<int&, int>);
        static_assert(std::assignable_from<int&, int>);
     
        static_assert([std::is_assignable_v](../types/is_assignable.html)<[std::string](../string/basic_string.html)&, [std::string](../string/basic_string.html)>);
        static_assert(std::assignable_from<[std::string](../string/basic_string.html)&, [std::string](../string/basic_string.html)>);
     
        // Fundamental types don't support assignment to an rvalue
        static_assert(![std::is_assignable_v](../types/is_assignable.html)<int, int>);
        static_assert(!std::assignable_from<int, int>);
     
        // std::assignable_from doesn't accept all valid assignment expressions:
     
        // rvalue reference assignment
        static_assert([std::is_assignable_v](../types/is_assignable.html)<[std::string](../string/basic_string.html)&&, [std::string](../string/basic_string.html)>);
        static_assert(!std::assignable_from<[std::string](../string/basic_string.html)&&, [std::string](../string/basic_string.html)>);
     
        // rvalue assignment
        static_assert([std::is_assignable_v](../types/is_assignable.html)<[std::string](../string/basic_string.html), [std::string](../string/basic_string.html)>);
        static_assert(!std::assignable_from<[std::string](../string/basic_string.html), [std::string](../string/basic_string.html)>);
     
        // std::atomic::operator= returns by value
        static_assert([std::is_assignable_v](../types/is_assignable.html)<[std::atomic](../atomic/atomic.html)<int>&, int>);
        static_assert(!std::assignable_from<[std::atomic](../atomic/atomic.html)<int>&, int>);
    }

### References

  * C++23 standard (ISO/IEC 14882:2024): 



    

  * 18.4.8 Concept `assignable_from` [concept.assignable] 



  * C++20 standard (ISO/IEC 14882:2020): 



    

  * 18.4.8 Concept `assignable_from` [concept.assignable] 



### See also

[ is_assignableis_trivially_assignableis_nothrow_assignable](../types/is_assignable.html "cpp/types/is assignable")(C++11)(C++11)(C++11) |  checks if a type has an assignment operator for a specific argument   
(class template)   
---|---
