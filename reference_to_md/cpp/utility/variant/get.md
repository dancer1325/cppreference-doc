 
  


  
  
  
  
  
  
  
  
  
  
  
  


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
**get(std::variant)**  
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
| (1) | (since C++17)  
template< [std::size_t](../../types/size_t.html) I, class... Types >  
constexpr [std::variant_alternative_t](variant_alternative.html)<I, [std::variant](../variant.html)<Types...>>&  
get( [std::variant](../variant.html)<Types...>& v ); |  |   
template< [std::size_t](../../types/size_t.html) I, class... Types >  
constexpr [std::variant_alternative_t](variant_alternative.html)<I, [std::variant](../variant.html)<Types...>>&&  
get( [std::variant](../variant.html)<Types...>&& v ); |  |   
template< [std::size_t](../../types/size_t.html) I, class... Types >  
constexpr const [std::variant_alternative_t](variant_alternative.html)<I, [std::variant](../variant.html)<Types...>>&  
get( const [std::variant](../variant.html)<Types...>& v ); |  |   
template< [std::size_t](../../types/size_t.html) I, class... Types >  
constexpr const [std::variant_alternative_t](variant_alternative.html)<I, [std::variant](../variant.html)<Types...>>&&  
get( const [std::variant](../variant.html)<Types...>&& v ); |  |   
| (2) | (since C++17)  
template< class T, class... Types >  
constexpr T& get( [std::variant](../variant.html)<Types...>& v ); |  |   
template< class T, class... Types >  
constexpr T&& get( [std::variant](../variant.html)<Types...>&& v ); |  |   
template< class T, class... Types >  
constexpr const T& get( const [std::variant](../variant.html)<Types...>& v ); |  |   
template< class T, class... Types >  
constexpr const T&& get( const [std::variant](../variant.html)<Types...>&& v ); |  |   
| |   
  
1) Index-based value accessor: If v.index() == I, returns a reference to the value stored in v. Otherwise, throws [std::bad_variant_access](bad_variant_access.html "cpp/utility/variant/bad variant access"). The call is ill-formed if `I` is not a valid index in the variant.

2) Type-based value accessor: If v holds the alternative `T`, returns a reference to the value stored in v. Otherwise, throws [std::bad_variant_access](bad_variant_access.html "cpp/utility/variant/bad variant access"). The call is ill-formed if `T` is not a unique element of Types....

## Contents

  * [1 Template parameters](get.html#Template_parameters)
  * [2 Parameters](get.html#Parameters)
  * [3 Return value](get.html#Return_value)
  * [4 Exceptions](get.html#Exceptions)
  * [5 Example](get.html#Example)
  * [6 See also](get.html#See_also)

  
---  
  
### Template parameters

I  |  \-  |  index to look up   
---|---|---  
T  |  \-  |  unique type to look up   
Types...  |  \-  |  types forming the `variant`  
  
### Parameters

v  |  \-  |  a `variant`  
---|---|---  
  
### Return value

Reference to the value stored in the variant. 

### Exceptions

1,2) Throws [std::bad_variant_access](bad_variant_access.html "cpp/utility/variant/bad variant access") on errors.

### Example

Run this code
    
    
    #include <iostream>
    #include <string>
    #include <variant>
     
    int main()
    {
        [std::variant](../variant.html)<int, float> v{12}, w;
        [std::cout](../../io/cout.html) << std::get<int>(v) << '\n';
        w = std::get<int>(v);
        w = std::get<0>(v); // same effect as the previous line
     
    //  std::get<double>(v); // error: no double in [int, float]
    //  std::get<3>(v);      // error: valid index values are 0 and 1
     
        try
        {
            w = 42.0f;
            [std::cout](../../io/cout.html) << std::get<float>(w) << '\n'; // ok, prints 42
            w = 42;
            [std::cout](../../io/cout.html) << std::get<float>(w) << '\n'; // throws
        }
        catch ([std::bad_variant_access](bad_variant_access.html) const& ex)
        {
            [std::cout](../../io/cout.html) << ex.what() << ": w contained int, not float\n";
        }
    }

Possible output: 
    
    
    12
    42
    Unexpected index: w contained int, not float

### See also

[ get_if](get_if.html "cpp/utility/variant/get if")(C++17) |  obtains a pointer to the value of a pointed-to `variant` given the index or the type (if unique), returns null on error   
(function template)   
---|---  
[ get(std::tuple)](../tuple/get.html "cpp/utility/tuple/get")(C++11) |  tuple accesses specified element   
(function template)   
[ get(std::array)](../../container/array/get.html "cpp/container/array/get")(C++11) |  accesses an element of an `array`   
(function template)   
[ get(std::pair)](../pair/get.html "cpp/utility/pair/get")(C++11) |  accesses an element of a `pair`   
(function template)   
[ get(std::ranges::subrange)](../../ranges/subrange/get.html "cpp/ranges/subrange/get")(C++20) |  obtains iterator or sentinel from a [std::ranges::subrange](../../ranges/subrange.html "cpp/ranges/subrange")   
(function template)   
[ get(std::complex)](../../numeric/complex/get.html "cpp/numeric/complex/get")(C++26) |  obtains a reference to real or imaginary part from a [std::complex](../../numeric/complex.html "cpp/numeric/complex")   
(function template) 
