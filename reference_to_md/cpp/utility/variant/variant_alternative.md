 
  


  
  
  
  
  
  
  
  
  
  
  
  


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
**variant_alternative**  
[hash<std::variant>](hash.html "cpp/utility/variant/hash")  
[Helper objects](../variant.html#Helper_objects "cpp/utility/variant")  
[variant_npos](variant_npos.html "cpp/utility/variant/variant npos")  
  


Defined in header `[<variant>](../../header/variant.html "cpp/header/variant")` |  |   
---|---|---  
template <[std::size_t](../../types/size_t.html) I, class T>  
struct variant_alternative; /* undefined */ |  (1)  |  (since C++17)  
template <[std::size_t](../../types/size_t.html) I, class... Types>  
struct variant_alternative<I, variant<Types...>>; |  (2)  |  (since C++17)  
template <[std::size_t](../../types/size_t.html) I, class T> class variant_alternative<I, const T>; |  (3)  |  (since C++17)  
template <[std::size_t](../../types/size_t.html) I, class T>  
class variant_alternative<I, volatile T>;  
template <[std::size_t](../../types/size_t.html) I, class T>  
class variant_alternative<I, const volatile T>; |  (3)  |  (since C++17)   
(deprecated in C++20)  
| |   
  
Provides compile-time indexed access to the types of the alternatives of the possibly cv-qualified variant, combining cv-qualifications of the variant (if any) with the cv-qualifications of the alternative. 

Formally, 

2) meets the [TransformationTrait](../../named_req/TransformationTrait.html "cpp/named req/TransformationTrait") requirements with a member typedef `type` equal to the type of the alternative with index `I`

3) meets the [TransformationTrait](../../named_req/TransformationTrait.html "cpp/named req/TransformationTrait") requirements with a member typedef `type` that names, respectively, [std::add_const_t](../../types/add_cv.html)<std::variant_alternative_t<I,T>>, [std::add_volatile_t](../../types/add_cv.html)<std::variant_alternative_t<I,T>>, and [std::add_cv_t](../../types/add_cv.html)<std::variant_alternative_t<I,T>>

## Contents

  * [1 Member types](variant_alternative.html#Member_types)
  * [2 Helper template alias](variant_alternative.html#Helper_template_alias)
  * [3 Example](variant_alternative.html#Example)
  * [4 Defect reports](variant_alternative.html#Defect_reports)
  * [5 See also](variant_alternative.html#See_also)

  
---  
  
### Member types

Member type  |  Definition   
---|---  
type  |  the type of `I`th alternative of the variant, where `I` must be in `[0, sizeof...(Types))`, otherwise the program is ill-formed.   
  
### Helper template alias

template <size_t I, class T>  
using variant_alternative_t = typename variant_alternative<I, T>::type; |  |  (since C++17)  
---|---|---  
| |   
  
### Example

Run this code
    
    
    #include <variant>
    #include <iostream>
     
    using my_variant = [std::variant](../variant.html)<int, float>;
    static_assert([std::is_same_v](../../types/is_same.html)
        <int,   std::variant_alternative_t<0, my_variant>>);
    static_assert([std::is_same_v](../../types/is_same.html)
        <float, std::variant_alternative_t<1, my_variant>>);
    // cv-qualification on the variant type propagates to the extracted alternative type.
    static_assert([std::is_same_v](../../types/is_same.html)
        <const int, std::variant_alternative_t<0, const my_variant>>);
     
    int main()
    {
        [std::cout](../../io/cout.html) << "All static assertions passed.\n";
    }

Output: 
    
    
    All static assertions passed.

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 2974](https://cplusplus.github.io/LWG/issue2974) | C++17  | out-of-bounds index resulted in undefined behavior  | made ill-formed   
  
### See also

[ variant_sizevariant_size_v](variant_size.html "cpp/utility/variant/variant size")(C++17) |  obtains the size of the `variant`'s list of alternatives at compile time  
(class template) (variable template)  
---|---  
[ std::tuple_element<std::tuple>](../tuple/tuple_element.html "cpp/utility/tuple/tuple element")(C++11) |  obtains the type of the specified element   
(class template specialization) 
