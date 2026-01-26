 
  


  
  
  
  
  
  
  
  
  
  
  
  


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
[get(std::tuple)](get.html "cpp/utility/tuple/get")  
[Helper concepts](../tuple.html#Helper_concepts "cpp/utility/tuple")  
[`_tuple-like_`](tuple-like.html "cpp/utility/tuple/tuple-like")(C++23)  
[Helper classes](../tuple.html#Helper_classes "cpp/utility/tuple")  
[tuple_size<std::tuple>](tuple_size.html "cpp/utility/tuple/tuple size")  
[tuple_element<std::tuple>](tuple_element.html "cpp/utility/tuple/tuple element")  
[uses_allocator<std::tuple>](uses_allocator.html "cpp/utility/tuple/uses allocator")  
[basic_common_reference<std::tuple>](basic_common_reference.html "cpp/utility/tuple/basic common reference")(C++23)  
[common_type<std::tuple>](common_type.html "cpp/utility/tuple/common type")(C++23)  
[formatter<std::tuple>](../format/tuple_formatter.html "cpp/utility/format/tuple formatter")(C++23)  
**ignore**  
[Deduction guides](deduction_guides.html "cpp/utility/tuple/deduction guides")(C++17)  
  


Defined in header `[<tuple>](../../header/tuple.html "cpp/header/tuple")` |  |   
---|---|---  
Defined in header `[<utility>](../../header/utility.html "cpp/header/utility")` |  |   
| (1) |   
const /*ignore-type*/ ignore; |  | (since C++11)   
(until C++14)  
constexpr /*ignore-type*/ ignore; |  |  (since C++14)   
(inline since c++17)  
| (2) |   
struct /*ignore-type*/  
{  
template< class T >  
const /*ignore-type*/& operator=( const T& ) const noexcept  
{  
return *this;  
}  
}; |  | (since C++11)   
(until C++14)   
(exposition only*)  
struct /*ignore-type*/  
{  
template< class T >  
constexpr const /*ignore-type*/& operator=( const T& ) const noexcept  
{  
return *this;  
}  
}; |  |  (since C++14)   
(exposition only*)  
| |   
  
1) An object such that any value can be assigned to it with no effect.

2) The type of `std::ignore`.

## Contents

  * [1 Notes](ignore.html#Notes)
  * [2 Example](ignore.html#Example)
  * [3 Defect reports](ignore.html#Defect_reports)
  * [4 See also](ignore.html#See_also)

  
---  
  
### Notes

A void expression or a volatile bit-field value cannot be assigned to `std::ignore`. 

`std::ignore` is intended for use with [std::tie](tie.html "cpp/utility/tuple/tie") when unpacking a [std::tuple](../tuple.html "cpp/utility/tuple"), as a placeholder for the arguments that are not used, but can be used for any unwanted assignment. 

Some code guides recommend using `std::ignore` to avoid warnings from unused return values of `[[[nodiscard](../../language/attributes/nodiscard.html "cpp/language/attributes/nodiscard")]]` functions, even though an assignment isn't required. 

For ignoring values not requiring assignment, one may cast to void. For variables that have names, but whose value is unused, one may cast those to void or declare those variables with `[[[maybe_unused](../../language/attributes/maybe_unused.html "cpp/language/attributes/maybe unused")]]`. 

### Example

  1. Demonstrates the use of `std::ignore` together with a `[[[nodiscard](../../language/attributes/nodiscard.html "cpp/language/attributes/nodiscard")]]` function. 
  2. Unpacks a [std::pair](../pair.html)<iterator, bool> returned by [std::set](../../container/set.html)::[`insert`](../../container/set/insert.html "cpp/container/set/insert")(), but only saves the boolean. 



Run this code
    
    
    #include <iostream>
    #include <set>
    #include <string>
    #include <tuple>
     
    [[nodiscard]] int dontIgnoreMe()
    {
        return 42;
    }
     
    int main()
    {
        std::ignore = dontIgnoreMe();
     
        [std::set](../../container/set.html)<[std::string](../../string/basic_string.html)> set_of_str;
        if (bool inserted{false};
            [std::tie](tie.html)(std::ignore, inserted) = set_of_str.insert("Test"),
            inserted)
            [std::cout](../../io/cout.html) << "Value was inserted successfully.\n";
    }

Output: 
    
    
    Value was inserted successfully.

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 2773](https://cplusplus.github.io/LWG/issue2773) | C++14  | [std::tuple](../tuple.html "cpp/utility/tuple") was made constexpr but `std::ignore` was not yet  | made constexpr  
[P2968R2](https://wg21.link/P2968R2) | C++11  | the behavior of `std::ignore` outside of [std::tie](tie.html "cpp/utility/tuple/tie") was not formally specified  | made fully specified   
  
### See also

[ tie](tie.html "cpp/utility/tuple/tie")(C++11) |  creates a [tuple](../tuple.html "cpp/utility/tuple") of lvalue references or unpacks a tuple into individual objects   
(function template)   
---|---
