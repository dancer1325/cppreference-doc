 
  


  
  
  
  
  
  
  
  
  
  
  
  


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
**variant_npos**  
  


Defined in header `[<variant>](../../header/variant.html "cpp/header/variant")` |  |   
---|---|---  
inline constexpr [std::size_t](../../types/size_t.html) variant_npos = -1; |  |  (since C++17)  
| |   
  
This is a special value equal to the largest value representable by the type [std::size_t](../../types/size_t.html), used as the return value of [`index()`](index.html "cpp/utility/variant/index") when [`valueless_by_exception()`](valueless_by_exception.html "cpp/utility/variant/valueless by exception") is true. 

Run this code
    
    
    #include <iostream>
    #include <stdexcept>
    #include <string>
    #include <variant>
     
    struct Demon
    {
        Demon(int) {}
        Demon(const Demon&) { throw [std::domain_error](../../error/domain_error.html)("copy ctor"); }
        Demon& operator= (const Demon&) = default;
    };
     
    int main()
    {
        [std::variant](../variant.html)<int, Demon> var{42};
        [std::cout](../../io/cout.html)
            << [std::boolalpha](../../io/manip/boolalpha.html)
            << "index == npos: " << (var.index() == std::variant_npos) << '\n';
     
        try { var = Demon{666}; } catch (const [std::domain_error](../../error/domain_error.html)& ex)
        {
            [std::cout](../../io/cout.html)
                << "Exception: " << ex.what() << '\n'
                << "index == npos: " << (var.index() == std::variant_npos) << '\n'
                << "valueless: " << var.valueless_by_exception() << '\n';
        }
    }

Possible output: 
    
    
    index == npos: false
    Exception: copy ctor
    index == npos: true
    valueless: true

### See also

[ index](index.html "cpp/utility/variant/index") |  returns the zero-based index of the alternative held by the `variant`   
(public member function)   
---|---  
[ valueless_by_exception](valueless_by_exception.html "cpp/utility/variant/valueless by exception") |  checks if the `variant` is in the invalid state   
(public member function) 
