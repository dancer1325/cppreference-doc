 
  


  
  
  
  
  
  
  
  
  
  
  
  


[`std::pair`](../pair.html "cpp/utility/pair")

[Member functions](../pair.html#Member_functions "cpp/utility/pair")  
---  
[pair::pair](pair.html "cpp/utility/pair/pair")  
[pair::operator=](operator=.html "cpp/utility/pair/operator=")  
[pair::swap](swap.html "cpp/utility/pair/swap")(C++11)  
[Non-member functions](../pair.html#Non-member_functions "cpp/utility/pair")  
**make_pair**  
[operator==operator!=operator<operator<=operator>operator>=operator<=>](operator_cmp.html "cpp/utility/pair/operator cmp")(until C++20)(until C++20)(until C++20)(until C++20)(until C++20)(C++20)  
[swap(std::pair)](swap2.html "cpp/utility/pair/swap2")(C++11)  
[get(std::pair)](get.html "cpp/utility/pair/get")(C++11)  
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
template< class T1, class T2 >  
[std::pair](../pair.html)<T1, T2> make_pair( T1 x, T2 y ); |  |  (until C++11)  
template< class T1, class T2 >  
[std::pair](../pair.html)</*V1*/, /*V2*/> make_pair( T1&& x, T2&& y ); |  | (since C++11)   
(constexpr since C++14)   
(until C++20)  
template< class T1, class T2 >  
constexpr [std::pair](../pair.html)<[std::unwrap_ref_decay_t](../functional/unwrap_reference.html)<T1>,  
[std::unwrap_ref_decay_t](../functional/unwrap_reference.html)<T2>>  
make_pair( T1&& x, T2&& y ); |  |  (since C++20)  
| |   
  
Creates a [std::pair](../pair.html "cpp/utility/pair") object, deducing the target type from the types of arguments. 

Given types [std::decay](../../types/decay.html)<T1>::type as `U1` and [std::decay](../../types/decay.html)<T2>::type as `U2`, the types /*V1*/ and /*V2*/ are defined as follows: 

  * If `U1` is [std::reference_wrapper](../functional/reference_wrapper.html)<X>, /*V1*/ is `X&`; otherwise /*V1*/ is `U1`. 
  * If `U2` is [std::reference_wrapper](../functional/reference_wrapper.html)<Y>, /*V2*/ is `Y&`; otherwise /*V2*/ is `U2`. 

| (since C++11)  
(until C++20)  
---|---  
  
## Contents

  * [1 Parameters](make_pair.html#Parameters)
  * [2 Return value](make_pair.html#Return_value)
  * [3 Example](make_pair.html#Example)
  * [4 Defect reports](make_pair.html#Defect_reports)

  
---  
  
### Parameters

x, y  |  \-  |  the values to construct the pair from   
---|---|---  
  
### Return value

[std::pair](../pair.html)<T1, T2>(x, y) | (until C++11)  
---|---  
[std::pair](../pair.html)</*V1*/, /*V2*/>([std::forward](../forward.html)<T1>(x), [std::forward](../forward.html)<T2>(y)) | (since C++11)  
(until C++20)  
[std::pair](../pair.html)<[std::unwrap_ref_decay_t](../functional/unwrap_reference.html)<T1>, [std::unwrap_ref_decay_t](../functional/unwrap_reference.html)<T2>>  
([std::forward](../forward.html)<T1>(x), [std::forward](../forward.html)<T2>(y)) | (since C++20)  
  
### Example

Run this code
    
    
    #include <functional>
    #include <iostream>
    #include <utility>
     
    int main()
    {
        int n = 1;
        int a[5] = {1, 2, 3, 4, 5};
     
        // build a pair from two ints
        auto p1 = std::make_pair(n, a[1]);
        [std::cout](../../io/cout.html) << "The value of p1 is "
                  << '(' << p1.first << ", " << p1.second << ")\n";
     
        // build a pair from a reference to int and an array (decayed to pointer)
        auto p2 = std::make_pair([std::ref](../functional/ref.html)(n), a);
        n = 7;
        [std::cout](../../io/cout.html) << "The value of p2 is "
                  << '(' << p2.first << ", " << *(p2.second + 2) << ")\n";
    }

Output: 
    
    
    The value of p1 is (1, 2)
    The value of p2 is (7, 3)

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 181](https://cplusplus.github.io/LWG/issue181) | C++98  | the parameter types were const-reference  
types, which made passing arrays impossible  | changed these  
types to value types 
