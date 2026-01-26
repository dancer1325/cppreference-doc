 
  


  
  
  
  
  
| General utilities  
---  
| [Function objects](../../functional.html "cpp/utility/functional")  
---  
[Bit manipulation](../bit.html "cpp/utility/bit") (C++20)  
[C-style bit manipulation](https://en.cppreference.com/mwiki/index.php?title=cpp/utility/stdbit&action=edit&redlink=1 "cpp/utility/stdbit \(page does not exist\)") (C++26)  
[bitset](../bitset.html "cpp/utility/bitset")  
[hash](../hash.html "cpp/utility/hash")(C++11)  
  
[Relational operators](../../utility.html#Relational_operators "cpp/utility") (deprecated in C++20)  
|  | [rel_ops::operator!=rel_ops::operator>](../rel_ops/operator_cmp.html "cpp/utility/rel ops/operator cmp")` `  
---  
  
| [rel_ops::operator<=rel_ops::operator>=](../rel_ops/operator_cmp.html "cpp/utility/rel ops/operator cmp")  
---  
  
[Integer comparison functions](../../utility.html#Integer_comparison_functions "cpp/utility")  
| [cmp_equalcmp_lesscmp_less_than](../intcmp.html "cpp/utility/intcmp")(C++20)(C++20)(C++20)` `  
---  
  
| [cmp_not_equalcmp_greatercmp_greater_than](../intcmp.html "cpp/utility/intcmp")(C++20)(C++20)(C++20)  
---  
  
[in_range](../in_range.html "cpp/utility/in range")(C++20)  
[Swap](../../utility.html#Swap "cpp/utility") and [type operations](../../utility.html#Type_operations "cpp/utility")  
| [swap](../swap.html "cpp/algorithm/swap")  
---  
**ranges::swap**(C++20)  
[exchange](../exchange.html "cpp/utility/exchange")(C++14)  
[declval](../declval.html "cpp/utility/declval")(C++11)  
[to_underlying](../to_underlying.html "cpp/utility/to underlying")(C++23)  
  
| [forward](../forward.html "cpp/utility/forward")(C++11)  
---  
[forward_like](../forward_like.html "cpp/utility/forward like")(C++23)  
[move](../move.html "cpp/utility/move")(C++11)  
[move_if_noexcept](../move_if_noexcept.html "cpp/utility/move if noexcept")(C++11)  
[as_const](../as_const.html "cpp/utility/as const")(C++17)  
  
  
  
  
  
  
  


Defined in header `[<concepts>](../../header/concepts.html "cpp/header/concepts")` |  |   
---|---|---  
namespace ranges {  
inline namespace /* unspecified */ {  
inline constexpr /* unspecified */ swap = /* unspecified */;  
}  
} |  |  (since C++20)   
(customization point object)  
Call signature |  |   
template< class T, class U >  
constexpr void [ranges::swap](http://en.cppreference.com/w/cpp/ranges-utility-placeholder/swap)( T&& t, U&& u ) noexcept(/* see below */); |  |  (since C++20)  
| |   
  
Exchanges the values referenced by t and u. 

[ranges::swap](http://en.cppreference.com/w/cpp/ranges-utility-placeholder/swap)(t, u) is [expression-equivalent](../../language/expressions.html#Expression-equivalence "cpp/language/expressions") to: 

  1. (void)swap(t, u), if t or u has class or enumeration type, and that expression is valid, where the [overload resolution](../../language/overload_resolution.html "cpp/language/overload resolution") is performed within namespace `std::ranges` with the additional candidate template<class T> void swap(T&, T&) = delete;. 
     * If the function selected by overload resolution does not exchange the values referenced by t and u, the program is ill-formed; no diagnostic required. 
  2. Otherwise, (void)[ranges::swap_ranges](../../algorithm/ranges/swap_ranges.html)(t, u), if t and u are lvalue arrays of equal extent (but possibly different element types) and [ranges::swap](http://en.cppreference.com/w/cpp/ranges-utility-placeholder/swap)(*t, *u) is a valid expression, except that noexcept((void)[ranges::swap_ranges](../../algorithm/ranges/swap_ranges.html)(t, u)) is equal to noexcept([ranges::swap](http://en.cppreference.com/w/cpp/ranges-utility-placeholder/swap)(*t, *u)). 
  3. Otherwise, an expression which exchanges the referenced values of t and u, if they are both lvalues of the same type `V` that models [std::move_constructible](../../concepts/move_constructible.html)<V> and [std::assignable_from](../../concepts/assignable_from.html)<V&, V>. 
     * The result of applying the [`noexcept` operator](../../language/noexcept.html "cpp/language/noexcept") to that expression is equal to [std::is_nothrow_move_constructible_v](../../types/is_move_constructible.html)<V> && [std::is_nothrow_move_assignable_v](../../types/is_move_assignable.html)<V>. 
     * That expression is a [constant expression](../../language/constant_expression.html "cpp/language/constant expression") if 
       * `V` is a [LiteralType](../../named_req/LiteralType.html "cpp/named req/LiteralType"), 
       * both t = std::move(u)) and u = std::move(t) are [constant subexpressions](../../language/constant_expression.html#Constant_subexpression "cpp/language/constant expression"), and 
       * the [full-expressions](../../language/expressions.html#Full-expressions "cpp/language/expressions") of the initializers in the following declarations are constant subexpressions: 
         * V v1(std::move(t));
         * V v2(std::move(u));
  4. Otherwise, [ranges::swap](http://en.cppreference.com/w/cpp/ranges-utility-placeholder/swap)(t, u) is ill-formed, which can result in [substitution failure](../../language/sfinae.html "cpp/language/sfinae") when [ranges::swap](http://en.cppreference.com/w/cpp/ranges-utility-placeholder/swap)(t, u) appears in the immediate context of a template instantiation. 



###  Customization point objects

The name `ranges::swap` denotes a _customization point object_ , which is a const [function object](../../named_req/FunctionObject.html "cpp/named req/FunctionObject") of a [literal](../../named_req/LiteralType.html "cpp/named req/LiteralType") [`semiregular`](../../concepts/semiregular.html "cpp/concepts/semiregular") class type. See [CustomizationPointObject](../../named_req/CustomizationPointObject.html "cpp/named req/CustomizationPointObject") for details. 

### Example

Run this code
    
    
    #include <array>
    #include <concepts>
    #include <iostream>
    #include <ranges>
    #include <string_view>
    #include <vector>
     
    void print([std::string_view](../../string/basic_string_view.html) name, 
               std::[ranges::common_range](../../ranges/common_range.html) auto const& p, 
               std::[ranges::common_range](../../ranges/common_range.html) auto const& q)
    {
        [std::cout](../../io/cout.html) << name << "1{ ";
        for (auto const& i : p)
            [std::cout](../../io/cout.html) << i << ' ';
        [std::cout](../../io/cout.html) << "}, " << name << "2{ ";
        for (auto const& i : q)
            [std::cout](../../io/cout.html) << i << ' ';
        [std::cout](../../io/cout.html) << "}\n";
    }
     
    void print([std::string_view](../../string/basic_string_view.html) name, int p, int q)
    {
        [std::cout](../../io/cout.html) << name << "1 = " << p << ", " << name << "2 = " << q << '\n';
    }
     
    struct IntLike
    {
        int v;
    };
     
    void swap(IntLike& lhs, int& rhs)
    {
        [std::swap](../../algorithm/swap.html)(lhs.v, rhs);
    }
     
    void swap(int& lhs, IntLike& rhs)
    {
        [std::swap](../../algorithm/swap.html)(lhs, rhs.v);
    }
     
    [std::ostream](../../io/basic_ostream.html)& operator<<([std::ostream](../../io/basic_ostream.html)& out, IntLike i)
    {
        return out << i.v;
    }
     
    int main()
    {
        [std::vector](../../container/vector.html) a1{10, 11, 12}, a2{13, 14};
        std::[ranges::swap](http://en.cppreference.com/w/cpp/ranges-utility-placeholder/swap)(a1, a2);
        print("a", a1, a2);
     
        [std::array](../../container/array.html) b1{15, 16, 17}, b2{18, 19, 20};
        std::[ranges::swap](http://en.cppreference.com/w/cpp/ranges-utility-placeholder/swap)(b1, b2);
        print("b", b1, b2);
     
        // std::array c1{1, 2, 3}; std::array c2{4, 5};
        // std::ranges::swap(c1, c2); // error: no swap found by ADL
     
        int d1[]{21, 22, 23}, d2[]{24, 25, 26};
        std::[ranges::swap](http://en.cppreference.com/w/cpp/ranges-utility-placeholder/swap)(d1, d2);
        print("d", d1, d2);
     
        // int e1[]{1, 2, 3}, e2[]{4, 5};
        // std::ranges::swap(e1, e2); // error: extents mismatch
     
        // char f1[]{1, 2, 3};
        // int  f2[]{4, 5, 6};
        // std::ranges::swap(f1, f2); // error: no swap(*f1, *f2) found by ADL
     
        IntLike g1[]{1, 2, 3};
        int     g2[]{4, 5, 6};
        std::[ranges::swap](http://en.cppreference.com/w/cpp/ranges-utility-placeholder/swap)(g1, g2); // heterogeneous swap supported
        print("g", g1, g2);
     
        int h1{27}, h2{28};
        std::[ranges::swap](http://en.cppreference.com/w/cpp/ranges-utility-placeholder/swap)(h1, h2);
        print("h", h1, h2);
    }

Output: 
    
    
    a1{ 13 14 }, a2{ 10 11 12 }
    b1{ 18 19 20 }, b2{ 15 16 17 }
    d1{ 24 25 26 }, d2{ 21 22 23 }
    g1{ 4 5 6 }, g2{ 1 2 3 }
    h1 = 28, h2 = 27

### See also

[ swappableswappable_with](../../concepts/swappable.html "cpp/concepts/swappable")(C++20) |  specifies that a type can be swapped or that two types can be swapped with each other   
(concept)   
---|---  
[ swap](../swap.html "cpp/algorithm/swap") |  swaps the values of two objects   
(function template) 
