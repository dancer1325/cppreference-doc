 
  


  
  
  
  
  
  
  
  
  
  
  
  


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
**monostate**  
[bad_variant_access](bad_variant_access.html "cpp/utility/variant/bad variant access")  
[variant_size](variant_size.html "cpp/utility/variant/variant size")  
[variant_alternative](variant_alternative.html "cpp/utility/variant/variant alternative")  
[hash<std::variant>](hash.html "cpp/utility/variant/hash")  
[Helper objects](../variant.html#Helper_objects "cpp/utility/variant")  
[variant_npos](variant_npos.html "cpp/utility/variant/variant npos")  
  


Defined in header `[<variant>](../../header/variant.html "cpp/header/variant")` |  |   
---|---|---  
Defined in header `[<utility>](../../header/utility.html "cpp/header/utility")` |  | (since C++26)  
struct monostate { }; |  |  (since C++17)  
| |   
  
Unit type intended for use as a well-behaved empty alternative in [std::variant](../variant.html "cpp/utility/variant"). In particular, a variant of non-default-constructible types may list `std::monostate` as its first alternative: this makes the variant itself default-constructible. 

## Contents

  * [1 Member functions](monostate.html#Member_functions)
  * [2 Non-member functions](monostate.html#Non-member_functions)
  * [3 std::operator==, !=, <, <=, >, >=, <=>(std::monostate)](monostate.html#std::operator.3D.3D.2C_.21.3D.2C_.3C.2C_.3C.3D.2C_.3E.2C_.3E.3D.2C_.3C.3D.3E.28std::monostate.29)
    * [3.1 Helper classes](monostate.html#Helper_classes)
  * [4 std::hash<std::monostate>](monostate.html#std::hash.3Cstd::monostate.3E)
    * [4.1 Example](monostate.html#Example)
    * [4.2 See also](monostate.html#See_also)

  
---  
  
### Member functions

(constructor)(implicitly declared) |  trivial implicit default/copy/move constructor   
(public member function)  
---|---  
(destructor)(implicitly declared) |  trivial implicit destructor   
(public member function)  
operator=(implicitly declared) |  trivial implicit copy/move assignment   
(public member function)  
  
### Non-member functions

##  std::operator==, !=, <, <=, >, >=, <=>(std::monostate)

constexpr bool operator==( monostate, monostate ) noexcept { return true; } |  (1)  |  (since C++17)  
---|---|---  
| (2) |   
constexpr bool operator!=( monostate, monostate ) noexcept { return false; }  
constexpr bool operator< ( monostate, monostate ) noexcept { return false; }  
constexpr bool operator> ( monostate, monostate ) noexcept { return false; }  
constexpr bool operator<=( monostate, monostate ) noexcept { return true; }  
constexpr bool operator>=( monostate, monostate ) noexcept { return true; } |  | (since C++17)   
(until C++20)  
constexpr [std::strong_ordering](../compare/strong_ordering.html) operator<=>( monostate, monostate ) noexcept  
{  
return std::strong_ordering::equal;  
} |  |  (since C++20)  
| |   
  
All instances of `std::monostate` compare equal. 

The `<`, `<=`, `>`, `>=`, and `!=` operators are [synthesized](../../language/operators.html#Comparison_operators "cpp/language/operators") from operator<=> and operator== respectively.  | (since C++20)  
---|---  
  
### Helper classes

##  std::hash<std::monostate>

template <>  
struct [std::hash](../hash.html)<monostate>; |  |  (since C++17)  
---|---|---  
| |   
  
Specializes the [std::hash](../hash.html "cpp/utility/hash") algorithm for `std::monostate`. 

### Example

Run this code
    
    
    #include <cassert>
    #include <iostream>
    #include <variant>
     
    struct S
    {
        S(int i) : i(i) {}
        int i;
    };
     
    int main()
    {
        // Without the monostate type this declaration will fail.
        // This is because S is not default-constructible.
        [std::variant](../variant.html)<std::monostate, S> var;
        [assert](../../error/assert.html)(var.index() == 0);
     
        try
        {
            std::get<S>(var); // throws! We need to assign a value
        }
        catch(const [std::bad_variant_access](bad_variant_access.html)& e)
        {
            [std::cout](../../io/cout.html) << e.what() << '\n';
        }
     
        var = 42;
        [std::cout](../../io/cout.html) << "std::get: " << std::get<S>(var).i << '\n'
                  << "std::hash: " << [std::hex](../../io/manip/hex.html) << [std::showbase](../../io/manip/showbase.html)
                  << [std::hash](../hash.html)<std::monostate>{}(std::monostate{}) << '\n';
    }

Possible output: 
    
    
    std::get: wrong index for variant
    std::get: 42
    std::hash: 0xffffffffffffe19f

### See also

[ (constructor)](variant.html "cpp/utility/variant/variant") |  constructs the `variant` object   
(public member function)   
---|---
