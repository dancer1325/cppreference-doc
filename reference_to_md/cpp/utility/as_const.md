
  


  
  
  
  
  
| General utilities  
---  
| [Function objects](../functional.html "cpp/utility/functional")  
---  
[Bit manipulation](bit.html "cpp/utility/bit") (C++20)  
[C-style bit manipulation](https://en.cppreference.com/mwiki/index.php?title=cpp/utility/stdbit&action=edit&redlink=1 "cpp/utility/stdbit \(page does not exist\)") (C++26)  
[bitset](bitset.html "cpp/utility/bitset")  
[hash](hash.html "cpp/utility/hash")(C++11)  
  
[Relational operators](../utility.html#Relational_operators "cpp/utility") (deprecated in C++20)  
|  | [rel_ops::operator!=rel_ops::operator>](rel_ops/operator_cmp.html "cpp/utility/rel ops/operator cmp")` `  
---  
  
| [rel_ops::operator<=rel_ops::operator>=](rel_ops/operator_cmp.html "cpp/utility/rel ops/operator cmp")  
---  
  
[Integer comparison functions](../utility.html#Integer_comparison_functions "cpp/utility")  
| [cmp_equalcmp_lesscmp_less_than](intcmp.html "cpp/utility/intcmp")(C++20)(C++20)(C++20)` `  
---  
  
| [cmp_not_equalcmp_greatercmp_greater_than](intcmp.html "cpp/utility/intcmp")(C++20)(C++20)(C++20)  
---  
  
[in_range](in_range.html "cpp/utility/in range")(C++20)  
[Swap](../utility.html#Swap "cpp/utility") and [type operations](../utility.html#Type_operations "cpp/utility")  
| [swap](swap.html "cpp/algorithm/swap")  
---  
[ranges::swap](ranges/swap.html "cpp/utility/ranges/swap")(C++20)  
[exchange](exchange.html "cpp/utility/exchange")(C++14)  
[declval](declval.html "cpp/utility/declval")(C++11)  
[to_underlying](to_underlying.html "cpp/utility/to underlying")(C++23)  
  
| [forward](forward.html "cpp/utility/forward")(C++11)  
---  
[forward_like](forward_like.html "cpp/utility/forward like")(C++23)  
[move](move.html "cpp/utility/move")(C++11)  
[move_if_noexcept](move_if_noexcept.html "cpp/utility/move if noexcept")(C++11)  
**as_const**(C++17)  
  
Common vocabulary types  
| [pair](pair.html "cpp/utility/pair")  
---  
[tuple](tuple.html "cpp/utility/tuple")(C++11)  
[optional](optional.html "cpp/utility/optional")(C++17)  
[any](any.html "cpp/utility/any")(C++17)  
[variant](variant.html "cpp/utility/variant")(C++17)  
  
| [tuple_size](tuple_size.html "cpp/utility/tuple size")(C++11)  
---  
[tuple_element](tuple_element.html "cpp/utility/tuple element")(C++11)  
[apply](apply.html "cpp/utility/apply")(C++17)  
[make_from_tuple](make_from_tuple.html "cpp/utility/make from tuple")(C++17)  
[expected](expected.html "cpp/utility/expected")(C++23)  
  
  
  
  
  
  


Defined in header `[<utility>](../header/utility.html "cpp/header/utility")` |  |   
---|---|---  
template< class T >  
constexpr [std::add_const_t](../types/add_cv.html)<T>& as_const( T& t ) noexcept; |  (1)  |  (since C++17)  
template< class T >  
void as_const( const T&& ) = delete; |  (2)  |  (since C++17)  
| |   
  
1) Forms lvalue reference to const type of t.

2) const rvalue reference overload is deleted to disallow rvalue arguments.

## Contents

  * [1 Possible implementation](as_const.html#Possible_implementation)
  * [2 Notes](as_const.html#Notes)
  * [3 Example](as_const.html#Example)
  * [4 See also](as_const.html#See_also)

  
---  
  
### Possible implementation
    
    
    template<class T>
    constexpr [std::add_const_t](../types/add_cv.html)<T>& as_const(T& t) noexcept
    {
        return t;
    }  
  
---  
  
### Notes

[Feature-test](feature_test.html "cpp/utility/feature test") macro | Value | Std | Feature   
---|---|---|---  
[`__cpp_lib_as_const`](../experimental/feature_test.html#cpp_lib_as_const "cpp/feature test") | [`201510L`](../compiler_support/17.html#cpp_lib_as_const_201510L "cpp/compiler support/17") | (C++17) | [`std::as_const`](as_const.html#Top)  
  
### Example

Run this code
    
    
    #include <cassert>
    #include <string>
    #include <type_traits>
    #include <utility>
     
    int main()
    {
        [std::string](../string/basic_string.html) mutableString = "Hello World!";
        auto&& constRef = std::as_const(mutableString);
     
        mutableString.clear(); // OK
    //  constRef.clear(); // Error: 'constRef' is 'const' qualified,
                          //        but 'clear' is not marked const
     
        [assert](../error/assert.html)(&constRef == &mutableString);
        [assert](../error/assert.html)(&std::as_const(mutableString) == &mutableString);
     
        using ExprType = [std::remove_reference_t](../types/remove_reference.html)<decltype(std::as_const(mutableString))>;
     
        static_assert([std::is_same_v](../types/is_same.html)<[std::remove_const_t](../types/remove_cv.html)<ExprType>, [std::string](../string/basic_string.html)>,
                      "ExprType should be some kind of string.");
        static_assert(![std::is_same_v](../types/is_same.html)<ExprType, [std::string](../string/basic_string.html)>,
                      "ExprType shouldn't be a mutable string.");
    }

### See also

[ is_const](../types/is_const.html "cpp/types/is const")(C++11) |  checks if a type is const-qualified   
(class template)   
---|---  
[ add_cvadd_constadd_volatile](../types/add_cv.html "cpp/types/add cv")(C++11)(C++11)(C++11) |  adds const and/or volatile specifiers to the given type   
(class template)   
[ remove_cvremove_constremove_volatile](../types/remove_cv.html "cpp/types/remove cv")(C++11)(C++11)(C++11) |  removes const and/or volatile specifiers from the given type   
(class template)   
[ ranges::as_const_viewviews::as_const](../ranges/as_const_view.html "cpp/ranges/as const view")(C++23) |  converts a [`view`](../ranges/view.html "cpp/ranges/view") into a [`constant_range`](../ranges/constant_range.html "cpp/ranges/constant range")  
(class template) (range adaptor object)
  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
