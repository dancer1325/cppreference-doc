 
  


  
  
  
  
  
  
  
  
  
  
  
  


[`std::optional`](../optional.html "cpp/utility/optional")

[Member functions](../optional.html#Member_functions "cpp/utility/optional")  
---  
[optional::optional](optional.html "cpp/utility/optional/optional")  
[optional::~optional](~optional.html "cpp/utility/optional/~optional")  
**optional::operator=**  
[Observers](../optional.html#Observers "cpp/utility/optional")  
[optional::operator->optional::operator*](operator*.html "cpp/utility/optional/operator*")  
[optional::operator booloptional::has_value](operator_bool.html "cpp/utility/optional/operator bool")  
[optional::value](value.html "cpp/utility/optional/value")  
[optional::value_or](value_or.html "cpp/utility/optional/value or")  
[Iterators](../optional.html#Iterators "cpp/utility/optional")  
[optional::begin](begin.html "cpp/utility/optional/begin")(C++26)  
[optional::end](end.html "cpp/utility/optional/end")(C++26)  
[Monadic operations](../optional.html#Monadic_operations "cpp/utility/optional")  
[optional::and_then](and_then.html "cpp/utility/optional/and then")(C++23)  
[optional::transform](transform.html "cpp/utility/optional/transform")(C++23)  
[optional::or_else](or_else.html "cpp/utility/optional/or else")(C++23)  
[Modifiers](../optional.html#Modifiers "cpp/utility/optional")  
[optional::emplace](emplace.html "cpp/utility/optional/emplace")  
[optional::swap](swap.html "cpp/utility/optional/swap")  
[optional::reset](reset.html "cpp/utility/optional/reset")  
[Non-member functions](../optional.html#Non-member_functions "cpp/utility/optional")  
[operator==operator!=operator<operator<=operator>operator>=operator<=>](operator_cmp.html "cpp/utility/optional/operator cmp")(C++20)  
[make_optional](make_optional.html "cpp/utility/optional/make optional")  
[swap(std::optional)](swap2.html "cpp/utility/optional/swap2")  
[Deduction guides](deduction_guides.html "cpp/utility/optional/deduction guides")  
[Helper classes](../optional.html#Helper_classes "cpp/utility/optional")  
[hash<std::optional>](hash.html "cpp/utility/optional/hash")  
[nullopt_t](nullopt_t.html "cpp/utility/optional/nullopt t")  
[in_place_t](../in_place.html "cpp/utility/in place")  
[bad_optional_access](../bad_optional_access.html "cpp/utility/optional/bad optional access")  
[Helper objects](../optional.html#Helpers "cpp/utility/optional")  
[nullopt](nullopt.html "cpp/utility/optional/nullopt")  
[in_place](../in_place.html "cpp/utility/in place")  
  


optional& operator=( [std::nullopt_t](nullopt_t.html) ) noexcept; |  (1) | (since C++17)   
(constexpr since C++20)  
---|---|---  
constexpr optional& operator=( const optional& other ); |  (2) | (since C++17)  
constexpr optional& operator=  
( optional&& other ) noexcept(/* see below */); |  (3) | (since C++17)  
template< class U >  
optional& operator=( const optional<U>& other ); |  (4) | (since C++17)   
(constexpr since C++20)  
template< class U >  
optional& operator=( optional<U>&& other ); |  (5) | (since C++17)   
(constexpr since C++20)  
template< class U = [std::remove_cv_t](../../types/remove_cv.html)<T> >  
optional& operator=( U&& value ); |  (6) | (since C++17)   
(constexpr since C++20)  
| |   
  
Replaces contents of *this with the contents of other. 

1) If *this contains a value, calls `_[val](../optional.html#val "cpp/utility/optional")_` ﻿->T::~T() to destroy the contained value; otherwise no effect. *this does not contain a value after this call.

2-5) Assigns the state of other. [has_value()](operator_bool.html "cpp/utility/optional/operator bool") returns other.has_value() after this call.  Effect  | *this contains a value  | *this does not contain a value   
---|---|---  
other contains a value  | 

  * for overloads (2,4), assigns *other to the contained value 
  * for overloads (3,5), assigns std::move(*other) to the contained value 

| 

  * for overloads (2,4), [direct-non-list-initializes](../../language/direct_initialization.html "cpp/language/direct initialization") the contained value with *other
  * for overloads (3,5), direct-non-list-initializes the contained value with std::move(*other)

  
other does not contain a value  | destroys the contained value by calling `_[val](../optional.html#val "cpp/utility/optional")_` ﻿->T::~T() | no effect   
  
2) If [std::is_copy_constructible_v](../../types/is_copy_constructible.html)<T> or [std::is_copy_assignable_v](../../types/is_copy_assignable.html)<T> is false, the assignment operator is defined as deleted.

If [std::is_trivially_copy_constructible_v](../../types/is_copy_constructible.html)<T>, [std::is_trivially_copy_assignable_v](../../types/is_copy_assignable.html)<T> and [std::is_trivially_destructible_v](../../types/is_destructible.html)<T> are all true, the assignment operator is trivial.

3) This overload participates in overload resolution only if [std::is_move_constructible_v](../../types/is_move_constructible.html)<T> and [std::is_move_assignable_v](../../types/is_move_assignable.html)<T> are both true.

If [std::is_trivially_move_constructible_v](../../types/is_move_constructible.html)<T>, [std::is_trivially_move_assignable_v](../../types/is_move_assignable.html)<T> and [std::is_trivially_destructible_v](../../types/is_destructible.html)<T> are all true, the assignment operator is trivial.

4,5) These overloads participate in overload resolution only if all following conditions are satisfied: 

  * The following 12 values are all false[[1]](operator=.html#cite_note-1): 
    * [std::is_constructible_v](../../types/is_constructible.html)<T, [std::optional](../optional.html)<U>&>
    * [std::is_constructible_v](../../types/is_constructible.html)<T, const [std::optional](../optional.html)<U>&>
    * [std::is_constructible_v](../../types/is_constructible.html)<T, [std::optional](../optional.html)<U>&&>
    * [std::is_constructible_v](../../types/is_constructible.html)<T, const [std::optional](../optional.html)<U>&&>
    * [std::is_convertible_v](../../types/is_convertible.html)<[std::optional](../optional.html)<U>&, T>
    * [std::is_convertible_v](../../types/is_convertible.html)<const [std::optional](../optional.html)<U>&, T>
    * [std::is_convertible_v](../../types/is_convertible.html)<[std::optional](../optional.html)<U>&&, T>
    * [std::is_convertible_v](../../types/is_convertible.html)<const [std::optional](../optional.html)<U>&&, T>
    * [std::is_assignable_v](../../types/is_assignable.html)<T&, [std::optional](../optional.html)<U>&>
    * [std::is_assignable_v](../../types/is_assignable.html)<T&, const [std::optional](../optional.html)<U>&>
    * [std::is_assignable_v](../../types/is_assignable.html)<T&, [std::optional](../optional.html)<U>&&>
    * [std::is_assignable_v](../../types/is_assignable.html)<T&, const [std::optional](../optional.html)<U>&&>
  * For overload (4), [std::is_constructible_v](../../types/is_constructible.html)<T, const U&> and [std::is_assignable_v](../../types/is_assignable.html)<T&, const U&> are both true. 
  * For overload (5), [std::is_constructible_v](../../types/is_constructible.html)<T, U> and [std::is_assignable_v](../../types/is_assignable.html)<T&, U> are both true.



6) If *this contains a value, assigns [std::forward](../forward.html)<U>(value) to the contained value; otherwise direct-non-list-initializes the contained value with [std::forward](../forward.html)<U>(value). *this contains a value after this call.

This overload participates in overload resolution only if all following conditions are satisfied: 

  * [std::decay_t](../../types/decay.html)<U>(until C++20)[std::remove_cvref_t](../../types/remove_cvref.html)<U>(since C++20) is not [std::optional](../optional.html)<T>. 
  * [std::is_constructible_v](../../types/is_constructible.html)<T, U> is true. 
  * [std::is_assignable_v](../../types/is_assignable.html)<T&, U> is true. 
  * Any of the following conditions is satisfied: 
    * `T` is not a [scalar type](../../language/type-id.html#Scalar_type "cpp/language/type"). 
    * [std::decay_t](../../types/decay.html)<U> is not `T`.



  1. [↑](operator=.html#cite_ref-1) In other words, `T` is not constructible, convertible, or assignable from any expression of type (possibly const-qualified) [std::optional](../optional.html)<U>



## Contents

  * [1 Parameters](operator=.html#Parameters)
  * [2 Return value](operator=.html#Return_value)
  * [3 Exceptions](operator=.html#Exceptions)
  * [4 Notes](operator=.html#Notes)
  * [5 Example](operator=.html#Example)
  * [6 Defect reports](operator=.html#Defect_reports)
  * [7 See also](operator=.html#See_also)

  
---  
  
### Parameters

other  |  \-  |  another `optional` object whose contained value to assign   
---|---|---  
value  |  \-  |  value to assign to the contained value   
  
### Return value

*this

### Exceptions

2-6) Throws any exception thrown by the constructor or assignment operator of `T`. If an exception is thrown, the initialization state of *this (and of other in case of ([2-5](operator=.html#Version_2))) is unchanged, i.e. if the object contained a value, it still contains a value, and the other way round. The contents of value and the contained values of *this and other depend on the exception safety guarantees of the operation from which the exception originates (copy-constructor, move-assignment, etc.).

3) Has following 

[`noexcept`](../../language/noexcept_spec.html "cpp/language/noexcept spec") specification: 

noexcept([std::is_nothrow_move_assignable_v](../../types/is_move_assignable.html)<T> &&  
[std::is_nothrow_move_constructible_v](../../types/is_move_constructible.html)<T>)

### Notes

An optional object op may be turned into an empty optional with both op = {}; and op = nullopt;. The first expression constructs an empty `optional` object with {} and assigns it to op. 

[Feature-test](../feature_test.html "cpp/utility/feature test") macro  | Value | Std | Feature   
---|---|---|---  
[`__cpp_lib_optional`](../../experimental/feature_test.html#cpp_lib_optional "cpp/feature test") | [`202106L`](../../compiler_support/20.html#cpp_lib_optional_202106L "cpp/compiler support/20") | (C++20)  
(DR20) | Fully constexpr ([1](operator=.html#Version_1)), ([4-6](operator=.html#Version_4))  
  
### Example

Run this code
    
    
    #include <iostream>
    #include <optional>
     
    int main()
    {
        [std::optional](../optional.html)<const char*> s1 = "abc", s2; // constructor
        s2 = s1; // assignment
        s1 = "def"; // decaying assignment (U = char[4], T = const char*)
        [std::cout](../../io/cout.html) << *s2 << ' ' << *s1 << '\n';
    }

Output: 
    
    
    abc def

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 3886](https://cplusplus.github.io/LWG/issue3886) | C++17  | the default template argument of overload ([6](operator=.html#Version_6)) was `T` | changed to [std::remove_cv_t](../../types/remove_cv.html)<T>  
[P0602R4](https://wg21.link/P0602R4) | C++17  | copy/move assignment operator may not be trivial  
even if underlying operations are trivial  | required to propagate triviality   
[P2231R1](https://wg21.link/P2231R1) | C++20  | overloads ([1,4-6](operator=.html#Version_1)) were not constexpr | made constexpr  
  
### See also

[ emplace](emplace.html "cpp/utility/optional/emplace") |  constructs the contained value in-place   
(public member function)   
---|---
  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
