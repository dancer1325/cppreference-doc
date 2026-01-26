 
  


  
  
  
  
  
  
  
  
  
  
  
  


[`std::variant`](../variant.html "cpp/utility/variant")

[Member functions](../variant.html#Member_functions "cpp/utility/variant")  
---  
[variant::variant](variant.html "cpp/utility/variant/variant")  
[variant::~variant](~variant.html "cpp/utility/variant/~variant")  
[variant::operator=](operator=.html "cpp/utility/variant/operator=")  
[Observers](../variant.html#Observers "cpp/utility/variant")  
**variant::index**  
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
  


constexpr [std::size_t](../../types/size_t.html) index() const noexcept; |  |  (since C++17)  
---|---|---  
| |   
  
Returns the zero-based index of the alternative that is currently held by the variant. 

If the variant is [`valueless_by_exception`](valueless_by_exception.html "cpp/utility/variant/valueless by exception"), returns [`variant_npos`](variant_npos.html "cpp/utility/variant/variant npos"). 

### Example

Run this code
    
    
    #include <iostream>
    #include <string>
    #include <variant>
     
    int main()
    {
        [std::variant](../variant.html)<int, [std::string](../../string/basic_string.html)> v = "abc";
        [std::cout](../../io/cout.html) << "v.index = " << v.index() << '\n';
        v = {};
        [std::cout](../../io/cout.html) << "v.index = " << v.index() << '\n';
    }

Output: 
    
    
    v.index = 1
    v.index = 0

### See also

[ holds_alternative](holds_alternative.html "cpp/utility/variant/holds alternative")(C++17) |  checks if a `variant` currently holds a given type   
(function template)   
---|---  
[ get(std::variant)](get.html "cpp/utility/variant/get")(C++17) |  reads the value of the variant given the index or the type (if the type is unique), throws on error   
(function template) 
