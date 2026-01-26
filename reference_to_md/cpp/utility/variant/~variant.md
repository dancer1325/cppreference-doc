 
  


  
  
  
  
  
  
  
  
  
  
  
  


[`std::variant`](../variant.html "cpp/utility/variant")

[Member functions](../variant.html#Member_functions "cpp/utility/variant")  
---  
[variant::variant](variant.html "cpp/utility/variant/variant")  
**variant::~variant**  
[variant::operator=](operator=.html "cpp/utility/variant/operator=")  
[Observers](../variant.html#Observers "cpp/utility/variant")  
[variant::index](index.html "cpp/utility/variant/index")  
[variant::valueless_by_exception](valueless_by_exception.html "cpp/utility/variant/valueless by exception")  
[Modifiers](../variant.html#Modifiers "cpp/utility/variant")  
[variant::emplace](emplace.html "cpp/utility/variant/emplace")  
[variant::swap](swap.html "cpp/utility/variant/swap")  
[Visitation](../variant.html#Visitation "cpp/utility/variant")  
[variant::visit](visit.html "cpp/utility/variant/visit")(C++26)  
[Non-member functions](../variant.html#Non-member_functions "cpp/utility/variant")  
[visit(std::variant)](visit2.html "cpp/utility/variant/visit2")  
[holds_alternative](holds_alternative.html "cpp/utility/variant/holds alternative")  
[get(std::variant)](get.html "cpp/utility/variant/get")  
[get_if](get_if.html "cpp/utility/variant/get if")  
[operator==operator!=operator<operator<=operator>operator>=operator<=>](operator_cmp.html "cpp/utility/variant/operator cmp")(C++20)  
[swap(std::variant)](swap2.html "cpp/utility/variant/swap2")  
[Helper classes](../variant.html#Helper_classes "cpp/utility/variant")  
[monostate](monostate.html "cpp/utility/variant/monostate")  
[bad_variant_access](bad_variant_access.html "cpp/utility/variant/bad variant access")  
[variant_size](variant_size.html "cpp/utility/variant/variant size")  
[variant_alternative](variant_alternative.html "cpp/utility/variant/variant alternative")  
[hash<std::variant>](hash.html "cpp/utility/variant/hash")  
[Helper objects](../variant.html#Helper_objects "cpp/utility/variant")  
[variant_npos](variant_npos.html "cpp/utility/variant/variant npos")  
  


~variant(); |  | (since C++17)   
(constexpr since C++20)  
---|---|---  
| |   
  
If [`valueless_by_exception()`](valueless_by_exception.html "cpp/utility/variant/valueless by exception") is true, does nothing. Otherwise, destroys the currently contained object. 

This destructor is trivial if [std::is_trivially_destructible_v](../../types/is_destructible.html)<T_i> is true for all `T_i` in `Types...`. 

### Notes

[Feature-test](../feature_test.html "cpp/utility/feature test") macro  | Value | Std | Feature   
---|---|---|---  
[`__cpp_lib_variant`](../../experimental/feature_test.html#cpp_lib_variant "cpp/feature test") | [`202106L`](../../compiler_support/20.html#cpp_lib_variant_202106L "cpp/compiler support/20") | (C++20)  
(DR) | Fully constexpr `std::variant`  
  
### Example

Run this code
    
    
    #include <cstdio>
    #include <variant>
     
    int main()
    {
        struct X { ~X() { puts("X::~X();"); } };
        struct Y { ~Y() { puts("Y::~Y();"); } };
     
        {
            puts("entering block #1");
            [std::variant](../variant.html)<X,Y> var;
            puts("leaving block #1");
        }
     
        {
            puts("entering block #2");
            [std::variant](../variant.html)<X,Y> var{ [std::in_place_index_t](../in_place.html)<1>{} }; // constructs var(Y)
            puts("leaving block #2");
        }
    }

Output: 
    
    
    entering block #1
    leaving block #1
    X::~X();
    entering block #2
    leaving block #2
    Y::~Y();

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[P2231R1](https://wg21.link/P2231R1) | C++20  | the destructor was not constexpr while non-trivial destructors can be constexpr in C++20  | made constexpr
  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
