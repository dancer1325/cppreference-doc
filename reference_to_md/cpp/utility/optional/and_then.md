 
  


  
  
  
  
  
  
  
  
  
  
  
  


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
**optional::and_then**(C++23)  
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
  


template< class F >  
constexpr auto and_then( F&& f ) &; |  (1)  |  (since C++23)  
---|---|---  
template< class F >  
constexpr auto and_then( F&& f ) const&; |  (2)  |  (since C++23)  
template< class F >  
constexpr auto and_then( F&& f ) &&; |  (3)  |  (since C++23)  
template< class F >  
constexpr auto and_then( F&& f ) const&&; |  (4)  |  (since C++23)  
| |   
  
If *this contains a value, invokes f with the contained value as an argument, and returns the result of that invocation; otherwise, returns an empty `std::optional`. 

The return type (see below) must be a specialization of [std::optional](../optional.html "cpp/utility/optional") (unlike [`transform()`](transform.html "cpp/utility/optional/transform")). Otherwise, the program is ill-formed. 

1) Equivalent to  

    
    
    if (*this)
        return [std::invoke](../functional/invoke.html)([std::forward](../forward.html)<F>(f), value());
    else
        return [std::remove_cvref_t](../../types/remove_cvref.html)<[std::invoke_result_t](../../types/result_of.html)<F, T&>>{};

2) Equivalent to  

    
    
    if (*this)
        return [std::invoke](../functional/invoke.html)([std::forward](../forward.html)<F>(f), value());
    else
        return [std::remove_cvref_t](../../types/remove_cvref.html)<[std::invoke_result_t](../../types/result_of.html)<F, const T&>>{};

3) Equivalent to  

    
    
    if (*this)
        return [std::invoke](../functional/invoke.html)([std::forward](../forward.html)<F>(f), std::move(value()));
    else
        return [std::remove_cvref_t](../../types/remove_cvref.html)<[std::invoke_result_t](../../types/result_of.html)<F, T>>{};

4) Equivalent to  

    
    
    if (*this)
        return [std::invoke](../functional/invoke.html)([std::forward](../forward.html)<F>(f), std::move(value());
    else
        return [std::remove_cvref_t](../../types/remove_cvref.html)<[std::invoke_result_t](../../types/result_of.html)<F, const T>>{};

## Contents

  * [1 Parameters](and_then.html#Parameters)
  * [2 Return value](and_then.html#Return_value)
  * [3 Notes](and_then.html#Notes)
  * [4 Example](and_then.html#Example)
  * [5 See also](and_then.html#See_also)

  
---  
  
### Parameters

f  |  \-  |  a suitable function or [Callable](../../named_req/Callable.html "cpp/named req/Callable") object that returns an [std::optional](../optional.html "cpp/utility/optional")  
---|---|---  
  
### Return value

The result of f or an empty [std::optional](../optional.html "cpp/utility/optional"), as described above. 

### Notes

Some languages call this operation _flatmap_. 

[Feature-test](../feature_test.html "cpp/utility/feature test") macro | Value | Std | Feature   
---|---|---|---  
[`__cpp_lib_optional`](../../experimental/feature_test.html#cpp_lib_optional "cpp/feature test") | [`202110L`](../../compiler_support/23.html#cpp_lib_optional_202110L "cpp/compiler support/23") | (C++23) | [Monadic operations](../optional.html#Monadic_operations "cpp/utility/optional") in [std::optional](../optional.html "cpp/utility/optional")  
  
### Example

Run this code
    
    
    #include <charconv>
    #include <iomanip>
    #include <iostream>
    #include <optional>
    #include <ranges>
    #include <string>
    #include <string_view>
    #include <vector>
     
    [std::optional](../optional.html)<int> to_int([std::string_view](../../string/basic_string_view.html) sv)
    {
        int r{};
        auto [ptr, ec]{[std::from_chars](../from_chars.html)(sv.data(), sv.data() + sv.size(), r)};
        if (ec == [std::errc](../../error/errc.html)())
            return r;
        else
            return [std::nullopt](nullopt.html);
    }
     
    int main()
    {
        using namespace std::literals;
     
        const [std::vector](../../container/vector.html)<[std::optional](../optional.html)<[std::string](../../string/basic_string.html)>> v
        {
            "1234", "15 foo", "bar", "42", "5000000000", " 5", [std::nullopt](nullopt.html), "-43"
        };
     
        for (auto&& x : v | std::[views::transform](../../ranges/transform_view.html)(
            [](auto&& o)
            {
                // debug print the content of input optional<string>
                [std::cout](../../io/cout.html) << [std::left](../../io/manip/left.html) << [std::setw](../../io/manip/setw.html)(13)
                          << [std::quoted](../../io/manip/quoted.html)(o.value_or("nullopt")) << " -> ";
     
                return o
                    // if optional is nullopt convert it to optional with "" string
                    .or_else([]{ return [std::optional](../optional.html){""s}; })
                    // flatmap from strings to ints (making empty optionals where it fails)
                    .and_then(to_int)
                    // map int to int + 1
                    .transform([](int n) { return n + 1; })
                    // convert back to strings
                    .transform([](int n) { return [std::to_string](../../string/basic_string/to_string.html)(n); })
                    // replace all empty optionals that were left by
                    // and_then and ignored by transforms with "NaN"
                    .value_or("NaN"s);
            }))
            [std::cout](../../io/cout.html) << x << '\n';
    }

Output: 
    
    
    "1234"        -> 1235
    "15 foo"      -> 16
    "bar"         -> NaN
    "42"          -> 43
    "5000000000"  -> NaN
    " 5"          -> NaN
    "nullopt"     -> NaN
    "-43"         -> -42

### See also

[ value_or](value_or.html "cpp/utility/optional/value or") |  returns the contained value if available, another value otherwise   
(public member function)   
---|---  
[ transform](transform.html "cpp/utility/optional/transform")(C++23) |  returns an `optional` containing the transformed contained value if it exists, or an empty `optional` otherwise   
(public member function)   
[ or_else](or_else.html "cpp/utility/optional/or else")(C++23) |  returns the `optional` itself if it contains a value, or the result of the given function otherwise   
(public member function) 
  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
