 
  


  
  
  
  
  
  
  
  
  
  
  
  


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
**hash <std::variant>**  
[Helper objects](../variant.html#Helper_objects "cpp/utility/variant")  
[variant_npos](variant_npos.html "cpp/utility/variant/variant npos")  
  


Defined in header `[<variant>](../../header/variant.html "cpp/header/variant")` |  |   
---|---|---  
template< class... Types >  
struct hash<[std::variant](../variant.html)<Types...>>; |  |  (since C++17)  
| |   
  
The template specialization of [std::hash](../hash.html "cpp/utility/hash") for the [std::variant](../variant.html "cpp/utility/variant") template allows users to obtain hashes of `variant` objects. 

The specialization `std::hash`<[std::variant](../variant.html)<Types...>> is enabled (see [std::hash](../hash.html "cpp/utility/hash")) if every specialization in `std::hash`<[std::remove_const_t](../../types/remove_cv.html)<Types>>... is enabled, and is disabled otherwise. 

The member functions of this specialization are not guaranteed to be noexcept. 

## Contents

  * [1 Template parameters](hash.html#Template_parameters)
  * [2 Notes](hash.html#Notes)
  * [3 Example](hash.html#Example)
  * [4 See also](hash.html#See_also)

  
---  
  
### Template parameters

Types  |  \-  |  the types of the alternatives supported by the `variant` object   
---|---|---  
  
### Notes

Unlike [`std::hash<std::optional>`](../optional/hash.html "cpp/utility/optional/hash"), hash of a variant does not typically equal the hash of the contained value; this makes it possible to distinguish [std::variant](../variant.html)<int, int> holding the same value as different alternatives. 

### Example

Run this code
    
    
    #include <iostream>
    #include <string>
    #include <variant>
     
    using Var = [std::variant](../variant.html)<int, int, int, [std::string](../../string/basic_string.html)>;
     
    template<unsigned I>
    void print(Var const& var)
    {
        [std::cout](../../io/cout.html) << "get<" << var.index() << "> = "
                  << std::get<I>(var)
                  << "\t" "# = "
                  << [std::hash](../hash.html)<Var>{}(var) << '\n';
    }
     
    int main()
    {
        Var var;
        std::get<0>(var) = 2020;
        print<0>(var);
        var.emplace<1>(2023);
        print<1>(var);
        var.emplace<2>(2026);
        print<2>(var);
        var = "C++";
        print<3>(var);
    }

Possible output: 
    
    
    get<0> = 2020   # = 2020
    get<1> = 2023   # = 2024
    get<2> = 2026   # = 2028
    get<3> = C++    # = 15518724754199266859

### See also

[ hash](../hash.html "cpp/utility/hash")(C++11) |  hash function object   
(class template)   
---|---
