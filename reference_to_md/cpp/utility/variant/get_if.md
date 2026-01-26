 
  


  
  
  
  
  
  
  
  
  
  
  
  


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
**get_if**  
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
| (1) | (since C++17)  
template< [std::size_t](../../types/size_t.html) I, class... Types >  
constexpr [std::add_pointer_t](../../types/add_pointer.html)<[std::variant_alternative_t](variant_alternative.html)<I, [std::variant](../variant.html)<Types...>>>  
get_if( [std::variant](../variant.html)<Types...>* pv ) noexcept; |  |   
template< [std::size_t](../../types/size_t.html) I, class... Types >  
constexpr [std::add_pointer_t](../../types/add_pointer.html)<const [std::variant_alternative_t](variant_alternative.html)<I, [std::variant](../variant.html)<Types...>>>  
get_if( const [std::variant](../variant.html)<Types...>* pv ) noexcept; |  |   
| (2) | (since C++17)  
template< class T, class... Types >  
constexpr [std::add_pointer_t](../../types/add_pointer.html)<T>  
get_if( [std::variant](../variant.html)<Types...>* pv ) noexcept; |  |   
template< class T, class... Types >  
constexpr [std::add_pointer_t](../../types/add_pointer.html)<const T>  
get_if( const [std::variant](../variant.html)<Types...>* pv ) noexcept; |  |   
| |   
  
1) Index-based non-throwing accessor: If pv is not a null pointer and pv->index() == I, returns a pointer to the value stored in the variant pointed to by pv. Otherwise, returns a null pointer value. The call is ill-formed if `I` is not a valid index in the variant.

2) Type-based non-throwing accessor: Equivalent to (1) with `I` being the zero-based index of `T` in Types.... The call is ill-formed if `T` is not a unique element of Types....

## Contents

  * [1 Template parameters](get_if.html#Template_parameters)
  * [2 Parameters](get_if.html#Parameters)
  * [3 Return value](get_if.html#Return_value)
  * [4 Example](get_if.html#Example)
  * [5 See also](get_if.html#See_also)

  
---  
  
### Template parameters

I  |  \-  |  index to look up   
---|---|---  
Type  |  \-  |  unique type to look up   
  
### Parameters

pv  |  \-  |  pointer to a variant   
---|---|---  
  
### Return value

Pointer to the value stored in the pointed-to variant or null pointer on error. 

### Example

Run this code
    
    
    #include <iostream>
    #include <variant>
     
    int main()
    {
        auto check_value = [](const [std::variant](../variant.html)<int, float>& v)
        {
            if (const int* pval = std::get_if<int>(&v))
                [std::cout](../../io/cout.html) << "variant value: " << *pval << '\n';
            else
                [std::cout](../../io/cout.html) << "failed to get value!" << '\n';
        };
     
        [std::variant](../variant.html)<int, float> v{12}, w{3.f};
        check_value(v);
        check_value(w);
    }

Output: 
    
    
    variant value: 12
    failed to get value!

### See also

[ get(std::variant)](get.html "cpp/utility/variant/get")(C++17) |  reads the value of the variant given the index or the type (if the type is unique), throws on error   
(function template)   
---|---
