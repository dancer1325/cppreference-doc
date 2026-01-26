
  


  
  
  
  
  
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
**any**(C++17)  
[variant](variant.html "cpp/utility/variant")(C++17)  
  
| [tuple_size](tuple_size.html "cpp/utility/tuple size")(C++11)  
---  
[tuple_element](tuple_element.html "cpp/utility/tuple element")(C++11)  
[apply](apply.html "cpp/utility/apply")(C++17)  
[make_from_tuple](make_from_tuple.html "cpp/utility/make from tuple")(C++17)  
[expected](expected.html "cpp/utility/expected")(C++23)  
  
  
  
  
  
  


**`std::any`**

[Member functions](any.html#Member_functions "cpp/utility/any")  
---  
[any::any](any/any.html "cpp/utility/any/any")  
[any::~any](any/~any.html "cpp/utility/any/~any")  
[any::operator=](any/operator=.html "cpp/utility/any/operator=")  
[Modifiers](any.html#Modifiers "cpp/utility/any")  
[any::emplace](any/emplace.html "cpp/utility/any/emplace")  
[any::reset](any/reset.html "cpp/utility/any/reset")  
[any::swap](any/swap.html "cpp/utility/any/swap")  
[Observers](any.html#Observers "cpp/utility/any")  
[any::has_value](any/has_value.html "cpp/utility/any/has value")  
[any::type](any/type.html "cpp/utility/any/type")  
[Non-member functions](any.html#Non-member_functions "cpp/utility/any")  
[swap(std::any)](any/swap2.html "cpp/utility/any/swap2")  
[any_cast](any/any_cast.html "cpp/utility/any/any cast")  
[make_any](any/make_any.html "cpp/utility/any/make any")  
[Helper classes](any.html#Helper_classes "cpp/utility/any")  
[bad_any_cast](any/bad_any_cast.html "cpp/utility/any/bad any cast")  
  


Defined in header `[<any>](../header/any.html "cpp/header/any")` |  |   
---|---|---  
class any; |  |  (since C++17)  
| |   
  
The class `any` describes a type-safe container for single values of any [copy constructible](../types/is_copy_constructible.html "cpp/types/is copy constructible") type. 

1) An object of class `any` stores an instance of any type that satisfies the constructor requirements or is empty, and this is referred to as the _state_ of the class `any` object. The stored instance is called the contained object. Two states are equivalent if they are either both empty or if both are not empty and if the contained objects are equivalent.

2) The non-member `any_cast` functions provide type-safe access to the contained object.

Typically, implementations apply small objects optimization (avoid dynamic allocations) to types for which [std::is_nothrow_move_constructible](../types/is_move_constructible.html "cpp/types/is move constructible") is true. 

## Contents

  * [1 Member functions](any.html#Member_functions)
    * [1.1 Modifiers](any.html#Modifiers)
    * [1.2 Observers](any.html#Observers)
  * [2 Non-member functions](any.html#Non-member_functions)
  * [3 Helper classes](any.html#Helper_classes)
  * [4 Notes](any.html#Notes)
  * [5 Example](any.html#Example)
  * [6 See also](any.html#See_also)

  
---  
  
### Member functions

[ (constructor)](any/any.html "cpp/utility/any/any") |  constructs an `any` object   
(public member function)   
---|---  
[ operator=](any/operator=.html "cpp/utility/any/operator=") |  assigns an `any` object   
(public member function)   
[ (destructor)](any/~any.html "cpp/utility/any/~any") |  destroys an `any` object   
(public member function)   
  
#####  Modifiers   
  
[ emplace](any/emplace.html "cpp/utility/any/emplace") |  change the contained object, constructing the new object directly   
(public member function)   
[ reset](any/reset.html "cpp/utility/any/reset") |  destroys contained object   
(public member function)   
[ swap](any/swap.html "cpp/utility/any/swap") |  swaps two `any` objects   
(public member function)   
  
#####  Observers   
  
[ has_value](any/has_value.html "cpp/utility/any/has value") |  checks if object holds a value   
(public member function)   
[ type](any/type.html "cpp/utility/any/type") |  returns the `typeid` of the contained value   
(public member function)   
  
### Non-member functions

[ std::swap(std::any)](any/swap2.html "cpp/utility/any/swap2")(C++17) |  specializes the [std::swap](swap.html "cpp/algorithm/swap") algorithm   
(function)   
---|---  
[ any_cast](any/any_cast.html "cpp/utility/any/any cast")(C++17) |  type-safe access to the contained object   
(function template)   
[ make_any](any/make_any.html "cpp/utility/any/make any")(C++17) |  creates an `any` object   
(function template)   
  
### Helper classes

[ bad_any_cast](any/bad_any_cast.html "cpp/utility/any/bad any cast")(C++17) |  exception thrown by the value-returning forms of `any_cast` on a type mismatch   
(class)   
---|---  
  
### Notes

[Feature-test](feature_test.html "cpp/utility/feature test") macro | Value | Std | Feature   
---|---|---|---  
[`__cpp_lib_any`](../experimental/feature_test.html#cpp_lib_any "cpp/feature test") | [`201606L`](../compiler_support/17.html#cpp_lib_any_201606L "cpp/compiler support/17") | (C++17) | [`std::any`](any.html#top)  
  
### Example

Run this code
    
    
    #include <any>
    #include <iostream>
     
    int main()
    {
        [std::cout](../io/cout.html) << [std::boolalpha](../io/manip/boolalpha.html);
     
        // any type
        std::any a = 1;
        [std::cout](../io/cout.html) << a.type().name() << ": " << [std::any_cast](any/any_cast.html)<int>(a) << '\n';
        a = 3.14;
        [std::cout](../io/cout.html) << a.type().name() << ": " << [std::any_cast](any/any_cast.html)<double>(a) << '\n';
        a = true;
        [std::cout](../io/cout.html) << a.type().name() << ": " << [std::any_cast](any/any_cast.html)<bool>(a) << '\n';
     
        // bad cast
        try
        {
            a = 1;
            [std::cout](../io/cout.html) << [std::any_cast](any/any_cast.html)<float>(a) << '\n';
        }
        catch (const [std::bad_any_cast](any/bad_any_cast.html)& e)
        {
            [std::cout](../io/cout.html) << e.what() << '\n';
        }
     
        // has value
        a = 2;
        if (a.has_value())
            [std::cout](../io/cout.html) << a.type().name() << ": " << [std::any_cast](any/any_cast.html)<int>(a) << '\n';
     
        // reset
        a.reset();
        if (!a.has_value())
            [std::cout](../io/cout.html) << "no value\n";
     
        // pointer to contained data
        a = 3;
        int* i = [std::any_cast](any/any_cast.html)<int>(&a);
        [std::cout](../io/cout.html) << *i << '\n';
    }

Possible output: 
    
    
    int: 1
    double: 3.14
    bool: true
    bad any_cast
    int: 2
    no value
    3

### See also

[ function](functional/function.html "cpp/utility/functional/function")(C++11) |  copyable wrapper of any copy constructible callable object   
(class template)   
---|---  
[ move_only_function](functional/move_only_function.html "cpp/utility/functional/move only function")(C++23) |  move-only wrapper of any callable object that supports qualifiers in a given call signature   
(class template)   
[ variant](variant.html "cpp/utility/variant")(C++17) |  a type-safe discriminated union   
(class template)   
[ optional](optional.html "cpp/utility/optional")(C++17) |  a wrapper that may or may not hold an object   
(class template)   
[ unique_ptr](../memory/unique_ptr.html "cpp/memory/unique ptr")(C++11) |  smart pointer with unique object ownership semantics   
(class template)   
[ indirect](../memory/indirect.html "cpp/memory/indirect")(C++26) |  a wrapper containing dynamically-allocated object with value-like semantics   
(class template)   
[ polymorphic](../memory/polymorphic.html "cpp/memory/polymorphic")(C++26) |  a polymorphic wrapper containing dynamically-allocated object with value-like semantics   
(class template) 
  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
