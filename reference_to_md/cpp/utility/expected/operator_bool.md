 
  


  
  
  
  
  
  
  
  
  
  
  
  


[`std::expected`](../expected.html "cpp/utility/expected")

[Member functions](../expected.html#Member_functions "cpp/utility/expected")  
---  
[expected::expected](expected.html "cpp/utility/expected/expected")  
[expected::~expected](~expected.html "cpp/utility/expected/~expected")  
[expected::operator=](operator=.html "cpp/utility/expected/operator=")  
[Observers](../expected.html#Observers "cpp/utility/expected")  
[expected::operator->expected::operator*](operator*.html "cpp/utility/expected/operator*")  
**expected::operator bool expected::has_value**  
[expected::value](value.html "cpp/utility/expected/value")  
[expected::error](error.html "cpp/utility/expected/error")  
[expected::value_or](value_or.html "cpp/utility/expected/value or")  
[expected::error_or](error_or.html "cpp/utility/expected/error or")  
[Monadic operations](../expected.html#Monadic_operations "cpp/utility/expected")  
[expected::and_then](and_then.html "cpp/utility/expected/and then")  
[expected::or_else](or_else.html "cpp/utility/expected/or else")  
[expected::transform](transform.html "cpp/utility/expected/transform")  
[expected::transform_error](transform_error.html "cpp/utility/expected/transform error")  
[Modifiers](../expected.html#Modifiers "cpp/utility/expected")  
[expected::emplace](emplace.html "cpp/utility/expected/emplace")  
[expected::swap](swap.html "cpp/utility/expected/swap")  
[Non-member functions](../expected.html#Non-member_functions "cpp/utility/expected")  
[operator==(std::expected)](operator_cmp.html "cpp/utility/expected/operator cmp")  
[swap(std::expected)](swap2.html "cpp/utility/expected/swap2")  
[Helper classes](../expected.html#Helper_classes "cpp/utility/expected")  
[unexpected](unexpected.html "cpp/utility/expected/unexpected")  
[bad_expected_access](bad_expected_access.html "cpp/utility/expected/bad expected access")  
[unexpect_tunexpect](unexpect_t.html "cpp/utility/expected/unexpect t")  
  


constexpr explicit operator bool() const noexcept; |  (1)  |  (since C++23)  
---|---|---  
constexpr bool has_value() const noexcept; |  (2)  |  (since C++23)  
| |   
  
Checks whether *this represents an expected value. 

## Contents

  * [1 Return value](operator_bool.html#Return_value)
  * [2 Notes](operator_bool.html#Notes)
  * [3 Example](operator_bool.html#Example)
  * [4 See also](operator_bool.html#See_also)

  
---  
  
### Return value

[`_has_val_`](../expected.html#Data_members "cpp/utility/expected")

### Notes

A [`std::expected`](../expected.html "cpp/utility/expected") object is never valueless. If `has_value()` returns true, [`operator*()`](operator*.html "cpp/utility/expected/operator*") can be used to access the expected value; otherwise, [`error()`](error.html "cpp/utility/expected/error") can be used to access the unexpected value. 

### Example

Run this code
    
    
    #include <charconv>
    #include <concepts>
    #include <cstdint>
    #include <expected>
    #include <print>
    #include <string>
    #include <string_view>
    #include <system_error>
     
    template<[std::integral](../../concepts/integral.html) Int = int>
    constexpr [std::expected](../expected.html)<Int, [std::string](../../string/basic_string.html)> to_int([std::string_view](../../string/basic_string_view.html) str)
    {
        Int value{};
        const auto [_, ec] = [std::from_chars](../from_chars.html)(str.data(), str.data() + str.size(), value);
        if (ec == [std::errc](../../error/errc.html)())
            return value;
        return [std::unexpected](unexpected.html){std::move([std::make_error_code](../../error/errc/make_error_code.html)(ec).message())};
    }
     
    int main()
    {
        if (auto result = to_int("42"); result.has_value())
            [std::println](../../io/println.html)("{}", *result); // after the check it is safe to use operator*
        else
            [std::println](../../io/println.html)("{}", result.error());
     
        if (const auto result = to_int("not a number"); result)
            [std::println](../../io/println.html)("{}", *result);
        else
            [std::println](../../io/println.html)("{}", result.error());
     
        if (const auto result{to_int<[std::int16_t](../../types/integer.html)>("32768")}) // implicitly calls (1)
            [std::println](../../io/println.html)("{}", *result);
        else
            [std::println](../../io/println.html)("{}", result.error());
    }

Possible output: 
    
    
    42
    Invalid argument
    Numerical result out of range

### See also

[ operator->operator*](operator*.html "cpp/utility/expected/operator*") |  accesses the expected value   
(public member function)   
---|---  
[ error](error.html "cpp/utility/expected/error") |  returns the unexpected value   
(public member function)   
[ operator boolhas_value](../optional/operator_bool.html "cpp/utility/optional/operator bool") |  checks whether the object contains a value   
(public member function of `std::optional<T>`) 
