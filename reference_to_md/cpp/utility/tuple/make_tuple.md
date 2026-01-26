 
  


  
  
  
  
  
  
  
  
  
  
  
  


[`std::tuple`](../tuple.html "cpp/utility/tuple")

[Member functions](../tuple.html#Member_functions "cpp/utility/tuple")  
---  
[tuple::tuple](tuple.html "cpp/utility/tuple/tuple")  
[tuple::operator=](operator=.html "cpp/utility/tuple/operator=")  
[tuple::swap](swap.html "cpp/utility/tuple/swap")  
[Non-member functions](../tuple.html#Non-member_functions "cpp/utility/tuple")  
**make_tuple**  
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
[ignore](ignore.html "cpp/utility/tuple/ignore")  
[Deduction guides](deduction_guides.html "cpp/utility/tuple/deduction guides")(C++17)  
  


Defined in header `[<tuple>](../../header/tuple.html "cpp/header/tuple")` |  |   
---|---|---  
template< class... Types >  
[std::tuple](../tuple.html)<VTypes...> make_tuple( Types&&... args ); |  |  (since C++11)   
(constexpr since C++14)  
| |   
  
Creates a tuple object, deducing the target type from the types of arguments. 

For each `Ti` in `Types...`, the corresponding type `Vi` in `VTypes...` is [std::decay](../../types/decay.html)<Ti>::type unless application of [std::decay](../../types/decay.html "cpp/types/decay") results in [std::reference_wrapper](../functional/reference_wrapper.html)<X> for some type `X`, in which case the deduced type is `X&`. 

## Contents

  * [1 Parameters](make_tuple.html#Parameters)
  * [2 Return value](make_tuple.html#Return_value)
  * [3 Possible implementation](make_tuple.html#Possible_implementation)
  * [4 Example](make_tuple.html#Example)
  * [5 See also](make_tuple.html#See_also)

  
---  
  
### Parameters

args  |  \-  |  zero or more arguments to construct the tuple from   
---|---|---  
  
### Return value

A [std::tuple](../tuple.html "cpp/utility/tuple") object containing the given values, created as if by [std::tuple](../tuple.html)<VTypes...>([std::forward](../forward.html)<Types>(t)...).

### Possible implementation
    
    
    template <class T>
    struct unwrap_refwrapper
    {
        using type = T;
    };
     
    template <class T>
    struct unwrap_refwrapper<[std::reference_wrapper](../functional/reference_wrapper.html)<T>>
    {
        using type = T&;
    };
     
    template <class T>
    using unwrap_decay_t = typename unwrap_refwrapper<typename [std::decay](../../types/decay.html)<T>::type>::type;
    // or use std::unwrap_ref_decay_t (since C++20)
     
    template <class... Types>
    constexpr // since C++14
    [std::tuple](../tuple.html)<unwrap_decay_t<Types>...> make_tuple(Types&&... args)
    {
        return [std::tuple](../tuple.html)<unwrap_decay_t<Types>...>([std::forward](../forward.html)<Types>(args)...);
    }  
  
---  
  
### Example

Run this code
    
    
    #include <iostream>
    #include <tuple>
    #include <functional>
     
    [std::tuple](../tuple.html)<int, int> f() // this function returns multiple values
    {
        int x = 5;
        return std::make_tuple(x, 7); // return {x,7}; in C++17
    }
     
    int main()
    {
        // heterogeneous tuple construction
        int n = 1;
        auto t = std::make_tuple(10, "Test", 3.14, [std::ref](../functional/ref.html)(n), n);
        n = 7;
        [std::cout](../../io/cout.html) << "The value of t is ("
                  << std::get<0>(t) << ", "
                  << std::get<1>(t) << ", "
                  << std::get<2>(t) << ", "
                  << std::get<3>(t) << ", "
                  << std::get<4>(t) << ")\n";
     
        // function returning multiple values
        int a, b;
        [std::tie](tie.html)(a, b) = f();
        [std::cout](../../io/cout.html) << a << ' ' << b << '\n';
    }

Output: 
    
    
    The value of t is (10, Test, 3.14, 7, 1)
    5 7

### See also

[ tie](tie.html "cpp/utility/tuple/tie")(C++11) |  creates a [tuple](../tuple.html "cpp/utility/tuple") of lvalue references or unpacks a tuple into individual objects   
(function template)   
---|---  
[ forward_as_tuple](forward_as_tuple.html "cpp/utility/tuple/forward as tuple")(C++11) |  creates a `tuple` of [forwarding references](../../language/reference.html#Forwarding_references "cpp/language/reference")   
(function template)   
[ tuple_cat](tuple_cat.html "cpp/utility/tuple/tuple cat")(C++11) |  creates a `tuple` by concatenating any number of tuples   
(function template)   
[ apply](../apply.html "cpp/utility/apply")(C++17) |  calls a function with a tuple of arguments   
(function template) 
