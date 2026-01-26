 
  


  
  
  
  
  
  
  
  
  
  
  
  


[`std::optional`](../optional.html "cpp/utility/optional")

[Member functions](../optional.html#Member_functions "cpp/utility/optional")  
---  
[optional::optional](optional.html "cpp/utility/optional/optional")  
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
**optional::transform**(C++23)  
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
  


template< class F >  
constexpr auto transform( F&& f ) &; |  (1)  |  (since C++23)  
---|---|---  
template< class F >  
constexpr auto transform( F&& f ) const&; |  (2)  |  (since C++23)  
template< class F >  
constexpr auto transform( F&& f ) &&; |  (3)  |  (since C++23)  
template< class F >  
constexpr auto transform( F&& f ) const&&; |  (4)  |  (since C++23)  
| |   
  
If *this contains a value, invokes `f` with the contained value as an argument, and returns an `std::optional` that contains the result of that invocation; otherwise, returns an empty `std::optional`. 

The type of contained value in the result (denoted by `U` below) must be a non-array object type, and must not be [std::in_place_t](../in_place.html "cpp/utility/in place") or [std::nullopt_t](nullopt_t.html "cpp/utility/optional/nullopt t")). Otherwise, the program is ill-formed. 

1) Let `U` be [std::remove_cv_t](../../types/remove_cv.html)<[std::invoke_result_t](../../types/result_of.html)<F, T&>>. If *this contains a value, returns a [std::optional](../optional.html)<U> whose contained value is [direct-initialized](../../language/direct_initialization.html "cpp/language/direct initialization") from [std::invoke](../functional/invoke.html)([std::forward](../forward.html)<F>(f), **this) (unlike [`and_then()`](and_then.html "cpp/utility/optional/and then"), which must return an [std::optional](../optional.html "cpp/utility/optional") directly). Otherwise, returns an empty [std::optional](../optional.html)<U>.  
The program is ill-formed if the variable definition U x([std::invoke](../functional/invoke.html)([std::forward](../forward.html)<F>(f), **this)); is ill-formed.

2) Same as (1), except that `U` is [std::remove_cv_t](../../types/remove_cv.html)<[std::invoke_result_t](../../types/result_of.html)<F, const T&>>.

3) Let `U` be [std::remove_cv_t](../../types/remove_cv.html)<[std::invoke_result_t](../../types/result_of.html)<F, T>>. If *this contains a value, returns a [std::optional](../optional.html)<U> whose contained value is direct-initialized from [std::invoke](../functional/invoke.html)([std::forward](../forward.html)<F>(f), std::move(**this)). Otherwise, returns an empty [std::optional](../optional.html)<U>.  
The program is ill-formed if the variable definition U x([std::invoke](../functional/invoke.html)([std::forward](../forward.html)<F>(f), std::move(**this))); is ill-formed.

4) Same as (3), except that `U` is [std::remove_cv_t](../../types/remove_cv.html)<[std::invoke_result_t](../../types/result_of.html)<F, const T>>.

## Contents

  * [1 Parameters](transform.html#Parameters)
  * [2 Return value](transform.html#Return_value)
  * [3 Notes](transform.html#Notes)
  * [4 Example](transform.html#Example)
  * [5 See also](transform.html#See_also)

  
---  
  
### Parameters

f  |  \-  |  a suitable function or [Callable](../../named_req/Callable.html "cpp/named req/Callable") object whose call signature returns a non-reference type   
---|---|---  
  
### Return value

An [std::optional](../optional.html "cpp/utility/optional") containing the result of `f` or an empty [std::optional](../optional.html "cpp/utility/optional"), as described above. 

### Notes

Because `transform` directly constructs a `U` object at the right location, rather than passing it to a constructor, [std::is_move_constructible_v](../../types/is_move_constructible.html)<U> can be false. 

As the callable `f` can't return a reference type, it cannot be a [pointer to data member](../../language/pointer.html#Pointers_to_data_members "cpp/language/pointer"). 

Some languages call this operation [_map_](https://en.wikipedia.org/wiki/Map_\(higher-order_function\) "enwiki:Map \(higher-order function\)"). 

[Feature-test](../feature_test.html "cpp/utility/feature test") macro | Value | Std | Feature   
---|---|---|---  
[`__cpp_lib_optional`](../../experimental/feature_test.html#cpp_lib_optional "cpp/feature test") | [`202110L`](../../compiler_support/23.html#cpp_lib_optional_202110L "cpp/compiler support/23") | (C++23) | [Monadic operations](../optional.html#Monadic_operations "cpp/utility/optional") in [std::optional](../optional.html "cpp/utility/optional")  
  
### Example

Run this code
    
    
    #include <iostream>
    #include <optional>
     
    struct A { /* ... */ };
    struct B { /* ... */ };
    struct C { /* ... */ };
    struct D { /* ... */ };
     
    auto A_to_B(A) -> B { /* ... */ [std::cout](../../io/cout.html) << "A => B \n"; return {}; }
    auto B_to_C(B) -> C { /* ... */ [std::cout](../../io/cout.html) << "B => C \n"; return {}; }
    auto C_to_D(C) -> D { /* ... */ [std::cout](../../io/cout.html) << "C => D \n"; return {}; }
     
    void try_transform_A_to_D([std::optional](../optional.html)<A> o_A)
    {
        [std::cout](../../io/cout.html) << (o_A ? "o_A has a value\n" : "o_A is empty\n");
     
        [std::optional](../optional.html)<D> o_D = o_A.transform(A_to_B)
                                  .transform(B_to_C)
                                  .transform(C_to_D);
     
        [std::cout](../../io/cout.html) << (o_D ? "o_D has a value\n\n" : "o_D is empty\n\n");
    };
     
    int main()
    {
        try_transform_A_to_D( A{} );
        try_transform_A_to_D( {} );
    }

Output: 
    
    
    o_A has a value
    A => B
    B => C
    C => D
    o_D has a value
     
    o_A is empty
    o_D is empty

### See also

[ value_or](value_or.html "cpp/utility/optional/value or") |  returns the contained value if available, another value otherwise   
(public member function)   
---|---  
[ and_then](and_then.html "cpp/utility/optional/and then")(C++23) |  returns the result of the given function on the contained value if it exists, or an empty `optional` otherwise   
(public member function)   
[ or_else](or_else.html "cpp/utility/optional/or else")(C++23) |  returns the `optional` itself if it contains a value, or the result of the given function otherwise   
(public member function) 
  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
