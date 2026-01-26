
  


  
  
  
  
  
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
[as_const](as_const.html "cpp/utility/as const")(C++17)  
  
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
  
  
  
  
  
  


[`std::pair`](pair.html "cpp/utility/pair")

[Member functions](pair.html#Member_functions "cpp/utility/pair")  
---  
[pair::pair](pair/pair.html "cpp/utility/pair/pair")  
[pair::operator=](pair/operator=.html "cpp/utility/pair/operator=")  
[pair::swap](pair/swap.html "cpp/utility/pair/swap")(C++11)  
[Non-member functions](pair.html#Non-member_functions "cpp/utility/pair")  
[make_pair](pair/make_pair.html "cpp/utility/pair/make pair")  
[operator==operator!=operator<operator<=operator>operator>=operator<=>](pair/operator_cmp.html "cpp/utility/pair/operator cmp")(until C++20)(until C++20)(until C++20)(until C++20)(until C++20)(C++20)  
[swap(std::pair)](pair/swap2.html "cpp/utility/pair/swap2")(C++11)  
[get(std::pair)](pair/get.html "cpp/utility/pair/get")(C++11)  
[Helper classes](pair.html#Helper_classes "cpp/utility/pair")  
[tuple_size<std::pair>](pair/tuple_size.html "cpp/utility/pair/tuple size")(C++11)  
[tuple_element<std::pair>](pair/tuple_element.html "cpp/utility/pair/tuple element")(C++11)  
[basic_common_reference<std::pair>](pair/basic_common_reference.html "cpp/utility/pair/basic common reference")(C++23)  
[common_type<std::pair>](pair/common_type.html "cpp/utility/pair/common type")(C++23)  
[formatter<std::pair>](format/tuple_formatter.html "cpp/utility/format/tuple formatter")(C++23)  
**piecewise_construct_t**(C++11)  
[Deduction guides](pair/deduction_guides.html "cpp/utility/pair/deduction guides")(C++17)  
  


Defined in header `[<utility>](../header/utility.html "cpp/header/utility")` |  |   
---|---|---  
struct piecewise_construct_t { explicit piecewise_construct_t() = default; }; |  (1)  |  (since C++11)  
constexpr [std::piecewise_construct_t](piecewise_construct_t.html) piecewise_construct{}; |  (2)  |  (since C++11)   
(inline since C++17)  
| |   
  
1) `std::piecewise_construct_t` is an empty class tag type used to disambiguate between different functions that take two tuple arguments.

2) The constant `std::piecewise_construct` is an instance of (1).

The overloads that do not use `std::piecewise_construct_t` assume that each tuple argument becomes the element of a pair. The overloads that use `std::piecewise_construct_t` assume that each tuple argument is used to construct, piecewise, a new object of specified type, which will become the element of the pair. 

## Contents

  * [1 Standard library](piecewise_construct.html#Standard_library)
  * [2 Example](piecewise_construct.html#Example)
  * [3 Defect reports](piecewise_construct.html#Defect_reports)
  * [4 See also](piecewise_construct.html#See_also)

  
---  
  
### Standard library

The following standard library types and functions use it as a disambiguation tag: 

[ pair](pair.html "cpp/utility/pair") |  implements binary tuple, i.e. a pair of values   
(class template)   
---|---  
[ uses_allocator_construction_args](../memory/uses_allocator_construction_args.html "cpp/memory/uses allocator construction args")(C++20) |  prepares the argument list matching the flavor of uses-allocator construction required by the given type   
(function template)   
[ ranges::repeat_viewviews::repeat](../ranges/repeat_view.html "cpp/ranges/repeat view")(C++23) |  a [`view`](../ranges/view.html "cpp/ranges/view") consisting of a generated sequence by repeatedly producing the same value  
(class template) (customization point object)  
  
### Example



Run this code
    
    
    #include <iostream>
    #include <tuple>
    #include <utility>
     
    struct Foo
    {
        Foo([std::tuple](tuple.html)<int, float>)
        {
            [std::cout](../io/cout.html) << "Constructed a Foo from a tuple\n";
        }
     
        Foo(int, float)
        {
            [std::cout](../io/cout.html) << "Constructed a Foo from an int and a float\n";
        }
    };
     
    int main()
    {
        [std::tuple](tuple.html)<int, float> t(1, 3.14);
     
        [std::cout](../io/cout.html) << "Creating p1...\n";
        [std::pair](pair.html)<Foo, Foo> p1(t, t);
     
        [std::cout](../io/cout.html) << "Creating p2...\n";
        [std::pair](pair.html)<Foo, Foo> p2(std::piecewise_construct, t, t);
    }

Output: 
    
    
    Creating p1...
    Constructed a Foo from a tuple
    Constructed a Foo from a tuple
    Creating p2...
    Constructed a Foo from an int and a float
    Constructed a Foo from an int and a float

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 2510](https://cplusplus.github.io/LWG/issue2510) | C++11  | the default constructor was non-explicit, which could lead to ambiguity  | made explicit   
  
### See also

[ (constructor)](pair/pair.html "cpp/utility/pair/pair") |  constructs new pair   
(public member function of `std::pair<T1,T2>`)  
---|---
