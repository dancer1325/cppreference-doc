 
  


  
  
  
  
  
  
  
  
  
  
  
  


[`std::optional`](../optional.html "cpp/utility/optional")

[Member functions](../optional.html#Member_functions "cpp/utility/optional")  
---  
**optional::optional**  
[optional::~optional](~optional.html "cpp/utility/optional/~optional")  
[optional::operator=](operator=.html "cpp/utility/optional/operator=")  
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
  


constexpr optional() noexcept; |  (1) | (since C++17)  
---|---|---  
constexpr optional( [std::nullopt_t](nullopt_t.html) ) noexcept; |  (2) | (since C++17)  
constexpr optional( const optional& other ); |  (3) | (since C++17)  
constexpr optional( optional&& other ) noexcept(/* see below */); |  (4) | (since C++17)  
template< class U >  
optional( const optional<U>& other ); |  (5) | (since C++17)   
(constexpr since C++20)   
(conditionally explicit)  
template< class U >  
optional( optional<U>&& other ); |  (6) | (since C++17)   
(constexpr since C++20)   
(conditionally explicit)  
template< class... Args >  
constexpr explicit optional( [std::in_place_t](../in_place.html), Args&&... args ); |  (7) | (since C++17)  
template< class U, class... Args >  
constexpr explicit optional( [std::in_place_t](../in_place.html),  
[std::initializer_list](../initializer_list.html)<U> ilist,  
Args&&... args ); |  (8) | (since C++17)  
template< class U = [std::remove_cv_t](../../types/remove_cv.html)<T> >  
constexpr optional( U&& value ); |  (9) | (since C++17)   
(conditionally explicit)  
| |   
  
Constructs a new `optional` object. 

## Contents

  * [1 Parameters](optional.html#Parameters)
  * [2 Effects](optional.html#Effects)
  * [3 Constraints and supplement information](optional.html#Constraints_and_supplement_information)
  * [4 Exceptions](optional.html#Exceptions)
  * [5 Deduction guides](optional.html#Deduction_guides)
  * [6 Notes](optional.html#Notes)
  * [7 Example](optional.html#Example)
  * [8 Defect reports](optional.html#Defect_reports)
  * [9 See also](optional.html#See_also)

  
---  
  
### Parameters

other  |  \-  |  another `optional` object whose contained value is copied   
---|---|---  
value  |  \-  |  value with which to initialize the contained value   
args...  |  \-  |  arguments with which to initialize the contained value   
ilist  |  \-  |  initializer list with which to initialize the contained value   
  
### Effects

Overload  | Initialization method  | Initializer for the contained value  | [`has_value()`](operator_bool.html "cpp/utility/optional/operator bool") after construction   
---|---|---|---  
([1](optional.html#Version_1)) |  N/A |  - | false  
([2](optional.html#Version_2))  
([3](optional.html#Version_3)) | [Direct](../../language/direct_initialization.html "cpp/language/direct initialization") (non-list)  | *other | other.has_value()

  * If false, the contained value is not initialized. 

  
([4](optional.html#Version_4)) | std::move(*other)  
([5](optional.html#Version_5)) | *other  
([6](optional.html#Version_6)) | std::move(*other)  
([7](optional.html#Version_7)) | [std::forward](../forward.html)<Args>(args)... | true  
([8](optional.html#Version_8)) | ilist, [std::forward](../forward.html)<Args>(args)...  
([9](optional.html#Version_9)) | [std::forward](../forward.html)<U>(value)  
  
### Constraints and supplement information

3) If [std::is_copy_constructible_v](../../types/is_copy_constructible.html)<T> is false, the constructor is defined as deleted.

If [std::is_trivially_copy_constructible_v](../../types/is_copy_constructible.html)<T> is true, the constructor is trivial.

4) This overload participates in overload resolution only if [std::is_move_constructible_v](../../types/is_move_constructible.html)<T> is true.

If [std::is_trivially_move_constructible_v](../../types/is_move_constructible.html)<T> is true, the constructor is trivial.

5) This overload participates in overload resolution only if all following conditions are satisfied: 

  * [std::is_constructible_v](../../types/is_constructible.html)<T, const U&> is true. 
  * If `T` is not (possibly cv-qualified) bool, the following 8 values are all false[[1]](optional.html#cite_note-no-convert-1): 
    * [std::is_constructible_v](../../types/is_constructible.html)<T, [std::optional](../optional.html)<U>&>
    * [std::is_constructible_v](../../types/is_constructible.html)<T, const [std::optional](../optional.html)<U>&>
    * [std::is_constructible_v](../../types/is_constructible.html)<T, [std::optional](../optional.html)<U>&&>
    * [std::is_constructible_v](../../types/is_constructible.html)<T, const [std::optional](../optional.html)<U>&&>
    * [std::is_convertible_v](../../types/is_convertible.html)<[std::optional](../optional.html)<U>&, T>
    * [std::is_convertible_v](../../types/is_convertible.html)<const [std::optional](../optional.html)<U>&, T>
    * [std::is_convertible_v](../../types/is_convertible.html)<[std::optional](../optional.html)<U>&&, T>
    * [std::is_convertible_v](../../types/is_convertible.html)<const [std::optional](../optional.html)<U>&&, T>



This overload is declared as if with explicit(![std::is_convertible_v](../../types/is_convertible.html)<const U&, T>).

6) This overload participates in overload resolution only if all following conditions are satisfied: 

  * [std::is_constructible_v](../../types/is_constructible.html)<T, U> is true. 
  * If `T` is not (possibly cv-qualified) bool, the following 8 values are all false[[1]](optional.html#cite_note-no-convert-1): 
    * [std::is_constructible_v](../../types/is_constructible.html)<T, [std::optional](../optional.html)<U>&>
    * [std::is_constructible_v](../../types/is_constructible.html)<T, const [std::optional](../optional.html)<U>&>
    * [std::is_constructible_v](../../types/is_constructible.html)<T, [std::optional](../optional.html)<U>&&>
    * [std::is_constructible_v](../../types/is_constructible.html)<T, const [std::optional](../optional.html)<U>&&>
    * [std::is_convertible_v](../../types/is_convertible.html)<[std::optional](../optional.html)<U>&, T>
    * [std::is_convertible_v](../../types/is_convertible.html)<const [std::optional](../optional.html)<U>&, T>
    * [std::is_convertible_v](../../types/is_convertible.html)<[std::optional](../optional.html)<U>&&, T>
    * [std::is_convertible_v](../../types/is_convertible.html)<const [std::optional](../optional.html)<U>&&, T>



This overload is declared as if with explicit(![std::is_convertible_v](../../types/is_convertible.html)<U, T>).

7) This overload participates in overload resolution only if [std::is_constructible_v](../../types/is_constructible.html)<T, Args...> is true.

If `T`’s constructor selected for the initialization is a constexpr constructor, this constructor is also a constexpr constructor.

8) This overload participates in overload resolution only if [std::is_constructible_v](../../types/is_constructible.html)<T, [std::initializer_list](../initializer_list.html)<U>&, Args...> is true.

If `T`’s constructor selected for the initialization is a constexpr constructor, this constructor is also a constexpr constructor.

9) This overload participates in overload resolution only if all following conditions are satisfied: 

  * [std::is_constructible_v](../../types/is_constructible.html)<T, U> is true. 
  * [std::decay_t](../../types/decay.html)<U>(until C++20)[std::remove_cvref_t](../../types/remove_cvref.html)<U>(since C++20) is neither [std::in_place_t](../in_place.html "cpp/utility/in place") nor [std::optional](../optional.html)<T>. 
  * If `T` is (possibly cv-qualified) bool, [std::decay_t](../../types/decay.html)<U>(until C++20)[std::remove_cvref_t](../../types/remove_cvref.html)<U>(since C++20) is not a specialization of `std::optional`.



This overload is declared as if with explicit(![std::is_convertible_v](../../types/is_convertible.html)<U, T>).

If `T`’s constructor selected for the initialization is a constexpr constructor, this constructor is also a constexpr constructor.

  1. ↑ [1.0](optional.html#cite_ref-no-convert_1-0) [1.1](optional.html#cite_ref-no-convert_1-1) In other words, `T` is neither constructible nor convertible from any expression of type (possibly const-qualified) [std::optional](../optional.html)<U>



### Exceptions

3) Throws any exception thrown by the constructor of `T`.

4) Throws any exception thrown by the constructor of `T`. Has the following 

[`noexcept`](../../language/noexcept_spec.html "cpp/language/noexcept spec") specification: 

noexcept([std::is_nothrow_move_constructible](../../types/is_move_constructible.html)<T>::value)

5-9) Throws any exception thrown by the constructor of `T`.

### [Deduction guides](deduction_guides.html "cpp/utility/optional/deduction guides")

### Notes

Before the resolution of [LWG issue 3836](https://cplusplus.github.io/LWG/issue3836), constructing an [std::optional](../optional.html)<bool> from [std::optional](../optional.html)<U> would select overload ([9](optional.html#Version_9)) instead of overloads ([5,6](optional.html#Version_5)) if `U` is not bool. This is because overloads ([5,6](optional.html#Version_5)) did not participate in overload resolution if `T` (bool in this case) can be constructed or converted from [std::optional](../optional.html)<U>, but [`std::optional::operator bool`](operator_bool.html "cpp/utility/optional/operator bool") makes the conversion possible for any `U`. 

As a result, the constructed [std::optional](../optional.html)<bool> always contains a value. That value is determined by whether the provided [std::optional](../optional.html)<U> object contains a value, rather than the bool value direct-initialized from the contained value: 
    
    
    [std::optional](../optional.html)<bool> op_false(false);
    [std::optional](../optional.html)<int> op_zero(0);
     
    [std::optional](../optional.html)<int> from_bool(op_false); // OK: contains 0 (initialized from false)
    [std::optional](../optional.html)<bool> from_int(op_zero);  // DEFECT (LWG 3836): contains true because
                                            // op_zero contains a value, even if initializing
                                            // bool from that value gives false

[Feature-test](../feature_test.html "cpp/utility/feature test") macro  | Value | Std | Feature   
---|---|---|---  
[`__cpp_lib_optional`](../../experimental/feature_test.html#cpp_lib_optional "cpp/feature test") | [`202106L`](../../compiler_support/20.html#cpp_lib_optional_202106L "cpp/compiler support/20") | (C++20)  
(DR20) | Fully constexpr ([5,6](optional.html#Version_5))  
  
### Example

Run this code
    
    
    #include <iostream>
    #include <optional>
    #include <string>
     
    int main()
    {
        [std::optional](../optional.html)<int> o1, // empty
                           o2 = 1, // init from rvalue
                           o3 = o2; // copy-constructor
     
        // calls std::string( initializer_list<CharT> ) constructor
        [std::optional](../optional.html)<[std::string](../../string/basic_string.html)> o4([std::in_place](../in_place.html), {'a', 'b', 'c'});
     
        // calls std::string( size_type count, CharT ch ) constructor
        [std::optional](../optional.html)<[std::string](../../string/basic_string.html)> o5([std::in_place](../in_place.html), 3, 'A');
     
        // Move-constructed from std::string using deduction guide to pick the type
     
        [std::optional](../optional.html) o6([std::string](../../string/basic_string.html){"deduction"});
     
        [std::cout](../../io/cout.html) << *o2 << ' ' << *o3 << ' ' << *o4 << ' ' << *o5  << ' ' << *o6 << '\n';
    }

Output: 
    
    
    1 1 abc AAA deduction

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 3836](https://cplusplus.github.io/LWG/issue3836) | C++17  | when constructing an [std::optional](../optional.html)<bool>  
from [std::optional](../optional.html)<U>, the overload resolution  
would select overload ([9](optional.html#Version_9)) if `U` is not bool | always selects the  
converting copy/move  
constructor in this case   
[LWG 3886](https://cplusplus.github.io/LWG/issue3886) | C++17  | the default template argument of overload ([9](optional.html#Version_9)) was `T` | changed to [std::remove_cv_t](../../types/remove_cv.html)<T>  
[P0602R4](https://wg21.link/P0602R4) | C++17  | copy/move constructors might not be trivial  
even if underlying constructor is trivial  | required to  
propagate triviality   
[P2231R1](https://wg21.link/P2231R1) | C++20  | overloads ([5,6](optional.html#Version_5)) from another `std::optional` was not constexpr | made constexpr  
  
### See also

[ make_optional](make_optional.html "cpp/utility/optional/make optional")(C++17) |  creates an `optional` object   
(function template)   
---|---
  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
