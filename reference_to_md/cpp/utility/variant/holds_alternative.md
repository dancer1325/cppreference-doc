 
  


  
  
  
  
  
  
  
  
  
  
  
  


[`std::variant`](../variant.html "cpp/utility/variant")

[Member functions](../variant.html#Member_functions "cpp/utility/variant")  
---  
[variant::variant](variant.html "cpp/utility/variant/variant")  
[variant::~variant](~variant.html "cpp/utility/variant/~variant")  
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
**holds_alternative**  
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
  


Defined in header `[<variant>](../../header/variant.html "cpp/header/variant")` |  |   
---|---|---  
template< class T, class... Types >  
constexpr bool holds_alternative( const [std::variant](../variant.html)<Types...>& v ) noexcept; |  |  (since C++17)  
| |   
  
Checks if the variant v holds the alternative `T`. The call is ill-formed if `T` does not appear exactly once in `Types...`

## Contents

  * [1 Parameters](holds_alternative.html#Parameters)
  * [2 Return value](holds_alternative.html#Return_value)
  * [3 Example](holds_alternative.html#Example)
  * [4 See also](holds_alternative.html#See_also)

  
---  
  
### Parameters

v  |  \-  |  variant to examine   
---|---|---  
  
### Return value

true if the variant currently holds the alternative `T`, false otherwise. 

### Example

Run this code
    
    
    #include <cassert>
    #include <string>
    #include <variant>
     
    int main()
    {
        [std::variant](../variant.html)<int, [std::string](../../string/basic_string.html)> v = "abc";
        [assert](../../error/assert.html)(not std::holds_alternative<int>(v));
        [assert](../../error/assert.html)(std::holds_alternative<[std::string](../../string/basic_string.html)>(v));
    }

### See also

[ index](index.html "cpp/utility/variant/index") |  returns the zero-based index of the alternative held by the `variant`   
(public member function)   
---|---  
[ get(std::variant)](get.html "cpp/utility/variant/get")(C++17) |  reads the value of the variant given the index or the type (if the type is unique), throws on error   
(function template) 
