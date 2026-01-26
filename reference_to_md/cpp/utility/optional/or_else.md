 
  


  
  
  
  
  
  
  
  
  
  
  
  


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
[optional::transform](transform.html "cpp/utility/optional/transform")(C++23)  
**optional::or_else**(C++23)  
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
constexpr optional or_else( F&& f ) const&; |  (1)  |  (since C++23)  
---|---|---  
template< class F >  
constexpr optional or_else( F&& f ) &&; |  (2)  |  (since C++23)  
| |   
  
Returns *this if it contains a value. Otherwise, returns the result of f. 

The program is ill-formed if [std::remove_cvref_t](../../types/remove_cvref.html)<[std::invoke_result_t](../../types/result_of.html)<F>> is not same as [std::optional](../optional.html)<T>. 

1) Equivalent to return *this ? *this : [std::forward](../forward.html)<F>(f)();. This overload participates in overload resolution only if both [std::copy_constructible](../../concepts/copy_constructible.html)<T> and [std::invocable](../../concepts/invocable.html)<F> are modeled.

2) Equivalent to return *this ? std::move(*this) : [std::forward](../forward.html)<F>(f)();. This overload participates in overload resolution only if both [std::move_constructible](../../concepts/move_constructible.html)<T> and [std::invocable](../../concepts/invocable.html)<F> are modeled.

## Contents

  * [1 Parameters](or_else.html#Parameters)
  * [2 Return value](or_else.html#Return_value)
  * [3 Notes](or_else.html#Notes)
  * [4 Example](or_else.html#Example)
  * [5 See also](or_else.html#See_also)

  
---  
  
### Parameters

f  |  \-  |  a function or [Callable](../../named_req/Callable.html "cpp/named req/Callable") object that returns an [std::optional](../optional.html)<T>  
---|---|---  
  
### Return value

*this or the result of f, as described above. 

### Notes

[Feature-test](../feature_test.html "cpp/utility/feature test") macro | Value | Std | Feature   
---|---|---|---  
[`__cpp_lib_optional`](../../experimental/feature_test.html#cpp_lib_optional "cpp/feature test") | [`202110L`](../../compiler_support/23.html#cpp_lib_optional_202110L "cpp/compiler support/23") | (C++23) | [Monadic operations](../optional.html#Monadic_operations "cpp/utility/optional") in [std::optional](../optional.html "cpp/utility/optional")  
  
### Example

Run this code
    
    
    #include <iostream>
    #include <optional>
    #include <string>
     
    int main()
    {
        using maybe_int = [std::optional](../optional.html)<int>;
     
        auto valueless = []
        {
            [std::cout](../../io/cout.html) << "Valueless: ";
            return maybe_int{0};
        };
     
        maybe_int x;
        [std::cout](../../io/cout.html) << x.or_else(valueless).value() << '\n';
     
        x = 42;
        [std::cout](../../io/cout.html) << "Has value: ";
        [std::cout](../../io/cout.html) << x.or_else(valueless).value() << '\n';
     
        x.reset();
        [std::cout](../../io/cout.html) << x.or_else(valueless).value() << '\n';
    }

Output: 
    
    
    Valueless: 0
    Has value: 42
    Valueless: 0

### See also

[ value_or](value_or.html "cpp/utility/optional/value or") |  returns the contained value if available, another value otherwise   
(public member function)   
---|---  
[ and_then](and_then.html "cpp/utility/optional/and then")(C++23) |  returns the result of the given function on the contained value if it exists, or an empty `optional` otherwise   
(public member function)   
[ transform](transform.html "cpp/utility/optional/transform")(C++23) |  returns an `optional` containing the transformed contained value if it exists, or an empty `optional` otherwise   
(public member function) 
  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
