 
  


  
  
  
  
  
  
  
  
  
  
  
  


[`std::tuple`](../tuple.html "cpp/utility/tuple")

[Member functions](../tuple.html#Member_functions "cpp/utility/tuple")  
---  
[tuple::tuple](tuple.html "cpp/utility/tuple/tuple")  
[tuple::operator=](operator=.html "cpp/utility/tuple/operator=")  
[tuple::swap](swap.html "cpp/utility/tuple/swap")  
[Non-member functions](../tuple.html#Non-member_functions "cpp/utility/tuple")  
[make_tuple](make_tuple.html "cpp/utility/tuple/make tuple")  
[tie](tie.html "cpp/utility/tuple/tie")  
[forward_as_tuple](forward_as_tuple.html "cpp/utility/tuple/forward as tuple")  
[tuple_cat](tuple_cat.html "cpp/utility/tuple/tuple cat")  
[operator==operator!=operator<operator<=operator>operator>=operator<=>](operator_cmp.html "cpp/utility/tuple/operator cmp")(until C++20)(until C++20)(until C++20)(until C++20)(until C++20)(C++20)  
[swap(std::tuple)](swap2.html "cpp/utility/tuple/swap2")  
**get(std::tuple)**  
[Helper concepts](../tuple.html#Helper_concepts "cpp/utility/tuple")  
[`_tuple-like_`](tuple-like.html "cpp/utility/tuple/tuple-like")(C++23)  
[Helper classes](../tuple.html#Helper_classes "cpp/utility/tuple")  
[tuple_size<std::tuple>](tuple_size.html "cpp/utility/tuple/tuple size")  
[tuple_element<std::tuple>](tuple_element.html "cpp/utility/tuple/tuple element")  
[uses_allocator<std::tuple>](uses_allocator.html "cpp/utility/tuple/uses allocator")  
[basic_common_reference<std::tuple>](basic_common_reference.html "cpp/utility/tuple/basic common reference")(C++23)  
[common_type<std::tuple>](common_type.html "cpp/utility/tuple/common type")(C++23)  
[formatter<std::tuple>](../format/tuple_formatter.html "cpp/utility/format/tuple formatter")(C++23)  
[ignore](ignore.html "cpp/utility/tuple/ignore")  
[Deduction guides](deduction_guides.html "cpp/utility/tuple/deduction guides")(C++17)  
  


Defined in header `[<tuple>](../../header/tuple.html "cpp/header/tuple")` |  |   
---|---|---  
template< [std::size_t](../../types/size_t.html) I, class... Types >  
typename [std::tuple_element](../tuple_element.html)<I, [std::tuple](../tuple.html)<Types...>>::type&  
get( [std::tuple](../tuple.html)<Types...>& t ) noexcept; |  (1) | (since C++11)   
(constexpr since C++14)  
template< [std::size_t](../../types/size_t.html) I, class... Types >  
typename [std::tuple_element](../tuple_element.html)<I, [std::tuple](../tuple.html)<Types...>>::type&&  
get( [std::tuple](../tuple.html)<Types...>&& t ) noexcept; |  (2) | (since C++11)   
(constexpr since C++14)  
template< [std::size_t](../../types/size_t.html) I, class... Types >  
const typename [std::tuple_element](../tuple_element.html)<I, [std::tuple](../tuple.html)<Types...>>::type&  
get( const [std::tuple](../tuple.html)<Types...>& t ) noexcept; |  (3) | (since C++11)   
(constexpr since C++14)  
template< [std::size_t](../../types/size_t.html) I, class... Types >  
const typename [std::tuple_element](../tuple_element.html)<I, [std::tuple](../tuple.html)<Types...>>::type&&  
get( const [std::tuple](../tuple.html)<Types...>&& t ) noexcept; |  (4) | (since C++11)   
(constexpr since C++14)  
template< class T, class... Types >  
constexpr T& get( [std::tuple](../tuple.html)<Types...>& t ) noexcept; |  (5) | (since C++14)  
template< class T, class... Types >  
constexpr T&& get( [std::tuple](../tuple.html)<Types...>&& t ) noexcept; |  (6)  |  (since C++14)  
template< class T, class... Types >  
constexpr const T& get( const [std::tuple](../tuple.html)<Types...>& t ) noexcept; |  (7)  |  (since C++14)  
template< class T, class... Types >  
constexpr const T&& get( const [std::tuple](../tuple.html)<Types...>&& t ) noexcept; |  (8) | (since C++14)  
| |   
  
1-4) Extracts the Ith element from the tuple. I must be an integer value in `[`​0​`, `sizeof...(Types)`)`.

5-8) Extracts the element of the tuple t whose type is `T`. Fails to compile unless the tuple has exactly one element of that type.

## Contents

  * [1 Parameters](get.html#Parameters)
  * [2 Return value](get.html#Return_value)
  * [3 Notes](get.html#Notes)
  * [4 Example](get.html#Example)
  * [5 Defect reports](get.html#Defect_reports)
  * [6 See also](get.html#See_also)

  
---  
  
### Parameters

t  |  \-  |  tuple whose contents to extract   
---|---|---  
  
### Return value

A reference to the selected element of t. 

### Notes

[Feature-test](../feature_test.html "cpp/utility/feature test") macro | Value | Std | Feature   
---|---|---|---  
[`__cpp_lib_tuples_by_type`](../../experimental/feature_test.html#cpp_lib_tuples_by_type "cpp/feature test") | [`201304L`](../../compiler_support/14.html#cpp_lib_tuples_by_type_201304L "cpp/compiler support/14") | (C++14) | Addressing tuples by type ([5-8](get.html#Version_5))  
  
### Example

Run this code
    
    
    #include <cassert>
    #include <iostream>
    #include <string>
    #include <tuple>
     
    int main()
    {
        auto x = [std::make_tuple](make_tuple.html)(1, "Foo", 3.14);
     
        // Index-based access
        [std::cout](../../io/cout.html) << "( " << std::get<0>(x)
                  << ", " << std::get<1>(x)
                  << ", " << std::get<2>(x)
                  << " )\n";
     
        // Type-based access (since C++14)
        [std::cout](../../io/cout.html) << "( " << std::get<int>(x)
                  << ", " << std::get<const char*>(x)
                  << ", " << std::get<double>(x)
                  << " )\n";
     
        const [std::tuple](../tuple.html)<int, const int, double, double> y(1, 2, 6.9, 9.6);
        const int& i1 = std::get<int>(y); // OK: not ambiguous
        [assert](../../error/assert.html)(i1 == 1);
        const int& i2 = std::get<const int>(y); // OK: not ambiguous
        [assert](../../error/assert.html)(i2 == 2);
        // const double& d = std::get<double>(y); // Error: ill-formed (ambiguous)
     
        // Note: std::tie and structured binding can be
        // used to unpack a tuple into individual objects.
    }

Output: 
    
    
    ( 1, Foo, 3.14 )
    ( 1, Foo, 3.14 )

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 2485](https://cplusplus.github.io/LWG/issue2485) | C++11 (by index)  
C++14 (by type)  | there are no overloads for const tuple&& | added these overloads (([4](get.html#Version_4)) and ([8](get.html#Version_8)))   
  
### See also

[ get(std::array)](../../container/array/get.html "cpp/container/array/get")(C++11) |  accesses an element of an `array`   
(function template)   
---|---  
[ get(std::pair)](../pair/get.html "cpp/utility/pair/get")(C++11) |  accesses an element of a `pair`   
(function template)   
[ get(std::variant)](../variant/get.html "cpp/utility/variant/get")(C++17) |  reads the value of the variant given the index or the type (if the type is unique), throws on error   
(function template)   
[ get(std::ranges::subrange)](../../ranges/subrange/get.html "cpp/ranges/subrange/get")(C++20) |  obtains iterator or sentinel from a [std::ranges::subrange](../../ranges/subrange.html "cpp/ranges/subrange")   
(function template)   
[ get(std::complex)](../../numeric/complex/get.html "cpp/numeric/complex/get")(C++26) |  obtains a reference to real or imaginary part from a [std::complex](../../numeric/complex.html "cpp/numeric/complex")   
(function template)   
[ tie](tie.html "cpp/utility/tuple/tie")(C++11) |  creates a [tuple](../tuple.html "cpp/utility/tuple") of lvalue references or unpacks a tuple into individual objects   
(function template)   
[Structured binding](../../language/structured_binding.html "cpp/language/structured binding") (C++17) |  binds the specified names to sub-objects or tuple elements of the initializer
  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
