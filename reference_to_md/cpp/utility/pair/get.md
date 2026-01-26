 
  


  
  
  
  
  
  
  
  
  
  
  
  


[`std::pair`](../pair.html "cpp/utility/pair")

[Member functions](../pair.html#Member_functions "cpp/utility/pair")  
---  
[pair::pair](pair.html "cpp/utility/pair/pair")  
[pair::operator=](operator=.html "cpp/utility/pair/operator=")  
[pair::swap](swap.html "cpp/utility/pair/swap")(C++11)  
[Non-member functions](../pair.html#Non-member_functions "cpp/utility/pair")  
[make_pair](make_pair.html "cpp/utility/pair/make pair")  
[operator==operator!=operator<operator<=operator>operator>=operator<=>](operator_cmp.html "cpp/utility/pair/operator cmp")(until C++20)(until C++20)(until C++20)(until C++20)(until C++20)(C++20)  
[swap(std::pair)](swap2.html "cpp/utility/pair/swap2")(C++11)  
**get(std::pair)**(C++11)  
[Helper classes](../pair.html#Helper_classes "cpp/utility/pair")  
[tuple_size<std::pair>](tuple_size.html "cpp/utility/pair/tuple size")(C++11)  
[tuple_element<std::pair>](tuple_element.html "cpp/utility/pair/tuple element")(C++11)  
[basic_common_reference<std::pair>](basic_common_reference.html "cpp/utility/pair/basic common reference")(C++23)  
[common_type<std::pair>](common_type.html "cpp/utility/pair/common type")(C++23)  
[formatter<std::pair>](../format/tuple_formatter.html "cpp/utility/format/tuple formatter")(C++23)  
[piecewise_construct_t](../piecewise_construct.html "cpp/utility/piecewise construct")(C++11)  
[Deduction guides](deduction_guides.html "cpp/utility/pair/deduction guides")(C++17)  
  


Defined in header `[<utility>](../../header/utility.html "cpp/header/utility")` |  |   
---|---|---  
template< [std::size_t](../../types/size_t.html) I, class T1, class T2 >  
typename [std::tuple_element](../tuple_element.html)<I, [std::pair](../pair.html)<T1,T2> >::type&  
get( [std::pair](../pair.html)<T1, T2>& p ) noexcept; |  (1) | (since C++11)   
(constexpr since C++14)  
template< [std::size_t](../../types/size_t.html) I, class T1, class T2 >  
const typename [std::tuple_element](../tuple_element.html)<I, [std::pair](../pair.html)<T1,T2> >::type&  
get( const [std::pair](../pair.html)<T1,T2>& p ) noexcept; |  (2) | (since C++11)   
(constexpr since C++14)  
template< [std::size_t](../../types/size_t.html) I, class T1, class T2 >  
typename [std::tuple_element](../tuple_element.html)<I, [std::pair](../pair.html)<T1,T2> >::type&&  
get( [std::pair](../pair.html)<T1,T2>&& p ) noexcept; |  (3) | (since C++11)   
(constexpr since C++14)  
template< [std::size_t](../../types/size_t.html) I, class T1, class T2 >  
const typename [std::tuple_element](../tuple_element.html)<I, [std::pair](../pair.html)<T1,T2> >::type&&  
get( const [std::pair](../pair.html)<T1,T2>&& p ) noexcept; |  (4) | (since C++11)   
(constexpr since C++14)  
template< class T, class U >  
constexpr T& get( [std::pair](../pair.html)<T, U>& p ) noexcept; |  (5)  |  (since C++14)  
template< class T, class U >  
constexpr const T& get( const [std::pair](../pair.html)<T, U>& p ) noexcept; |  (6)  |  (since C++14)  
template< class T, class U >  
constexpr T&& get( [std::pair](../pair.html)<T, U>&& p ) noexcept; |  (7)  |  (since C++14)  
template< class T, class U >  
constexpr const T&& get( const [std::pair](../pair.html)<T, U>&& p ) noexcept; |  (8)  |  (since C++14)  
template< class T, class U >  
constexpr T& get( [std::pair](../pair.html)<U, T>& p ) noexcept; |  (9)  |  (since C++14)  
template< class T, class U >  
constexpr const T& get( const [std::pair](../pair.html)<U, T>& p ) noexcept; |  (10)  |  (since C++14)  
template< class T, class U >  
constexpr T&& get( [std::pair](../pair.html)<U, T>&& p ) noexcept; |  (11)  |  (since C++14)  
template< class T, class U >  
constexpr const T&& get( const [std::pair](../pair.html)<U, T>&& p ) noexcept; |  (12)  |  (since C++14)  
| |   
  
Extracts an element from the pair using [tuple-like](../tuple/tuple-like.html "cpp/utility/tuple/tuple-like") interface. 

1-4) The index-based overloads fail to compile if the index `I` is neither ​0​ nor 1.

5-12) The type-based overloads fail to compile if the types `T` and `U` are the same.

## Contents

  * [1 Parameters](get.html#Parameters)
  * [2 Return value](get.html#Return_value)
  * [3 Example](get.html#Example)
  * [4 Defect reports](get.html#Defect_reports)
  * [5 See also](get.html#See_also)

  
---  
  
### Parameters

p  |  \-  |  pair whose contents to extract   
---|---|---  
  
### Return value

1-4) Returns a reference to p.first if I == 0 and a reference to p.second if I == 1.

5-8) Returns a reference to p.first.

9-12) Returns a reference to p.second.

### Example

Run this code
    
    
    #include <iostream>
    #include <utility>
     
    int main()
    {
        auto p = [std::make_pair](make_pair.html)(1, 3.14);
        [std::cout](../../io/cout.html) << '(' << std::get<0>(p) << ", " << std::get<1>(p) << ")\n";
        [std::cout](../../io/cout.html) << '(' << std::get<int>(p) << ", " << std::get<double>(p) << ")\n";
    }

Output: 
    
    
    (1, 3.14)
    (1, 3.14)

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 2485](https://cplusplus.github.io/LWG/issue2485) | C++11 (by index)  
C++14 (by type)  | there are no overloads for const pair&& | the overloads are added   
  
### See also

[Structured binding](../../language/structured_binding.html "cpp/language/structured binding") (C++17) |  binds the specified names to sub-objects or tuple elements of the initializer  
---|---  
[ get(std::tuple)](../tuple/get.html "cpp/utility/tuple/get")(C++11) |  tuple accesses specified element   
(function template)   
[ get(std::array)](../../container/array/get.html "cpp/container/array/get")(C++11) |  accesses an element of an `array`   
(function template)   
[ get(std::variant)](../variant/get.html "cpp/utility/variant/get")(C++17) |  reads the value of the variant given the index or the type (if the type is unique), throws on error   
(function template)   
[ get(std::ranges::subrange)](../../ranges/subrange/get.html "cpp/ranges/subrange/get")(C++20) |  obtains iterator or sentinel from a [std::ranges::subrange](../../ranges/subrange.html "cpp/ranges/subrange")   
(function template)   
[ get(std::complex)](../../numeric/complex/get.html "cpp/numeric/complex/get")(C++26) |  obtains a reference to real or imaginary part from a [std::complex](../../numeric/complex.html "cpp/numeric/complex")   
(function template) 
