 
  


  
  
  
  
  
  
  
  
  
  
  
  


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
**tuple_cat**  
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
template< class... Tuples >  
[std::tuple](../tuple.html)</* CTypes */...> tuple_cat( Tuples&&... args ); |  | (since C++11)   
(until C++14)  
template< class... Tuples >  
constexpr [std::tuple](../tuple.html)</* CTypes */...> tuple_cat( Tuples&&... args ); |  |  (since C++14)   
(until C++23)  
template< tuple-like... Tuples >  
constexpr [std::tuple](../tuple.html)</* CTypes */...> tuple_cat( Tuples&&... args ); |  |  (since C++23)  
| |   
  
Constructs a tuple that is a concatenation of all tuples in args. The element types /* CTypes */ of the returned tuple is formed by concatenating the elements type packs of all [std::tuple](../tuple.html "cpp/utility/tuple")(until C++23)[`_tuple-like_`](tuple-like.html "cpp/utility/tuple/tuple-like")(since C++23) types in `Tuples` in order. 

The behavior is undefined if any type in [std::decay_t](../../types/decay.html)<Tuples>... is not a specialization of [std::tuple](../tuple.html "cpp/utility/tuple"). However, an implementation may choose to support types (such as [std::array](../../container/array.html "cpp/container/array") and [std::pair](../pair.html "cpp/utility/pair")) that follow the tuple-like protocol.  | (until C++23)  
---|---  
The types [std::decay_t](../../types/decay.html)<Tuples>... are constrained to be tuple-like, i.e. each type therein is required to be a specialization of [std::tuple](../tuple.html "cpp/utility/tuple") or another type (such as [std::array](../../container/array.html "cpp/container/array") and [std::pair](../pair.html "cpp/utility/pair")) that models [`_tuple-like_`](tuple-like.html "cpp/utility/tuple/tuple-like").  | (since C++23)  
  
If any type in /* CTypes */ is not constructible from the type of the corresponding element in the sequence of elements concatenated from args, the behavior is undefined(until C++23)the program is ill-formed(since C++23). 

## Contents

  * [1 Parameters](tuple_cat.html#Parameters)
  * [2 Return value](tuple_cat.html#Return_value)
  * [3 Example](tuple_cat.html#Example)
  * [4 See also](tuple_cat.html#See_also)

  
---  
  
### Parameters

args  |  \-  |  zero or more tuples to concatenate   
---|---|---  
  
### Return value

A [std::tuple](../tuple.html "cpp/utility/tuple") object composed of all elements of all argument tuples constructed from std::get<j>([std::forward](../forward.html)<Ti>(arg)) for each individual element. 

### Example

Run this code
    
    
    #include <iostream>
    #include <string>
    #include <tuple>
     
    // helper function to print a tuple of any size
    template<class Tuple, [std::size_t](../../types/size_t.html) N>
    struct TuplePrinter
    {
        static void print(const Tuple& t)
        {
            TuplePrinter<Tuple, N - 1>::print(t);
            [std::cout](../../io/cout.html) << ", " << std::get<N-1>(t);
        }
    };
     
    template<class Tuple>
    struct TuplePrinter<Tuple, 1>
    {
        static void print(const Tuple& t)
        {
            [std::cout](../../io/cout.html) << std::get<0>(t);
        }
    };
     
    template<typename... Args, [std::enable_if_t](../../types/enable_if.html)<sizeof...(Args) == 0, int> = 0>
    void print(const [std::tuple](../tuple.html)<Args...>& t)
    {
        [std::cout](../../io/cout.html) << "()\n";
    }
     
    template<typename... Args, [std::enable_if_t](../../types/enable_if.html)<sizeof...(Args) != 0, int> = 0>
    void print(const [std::tuple](../tuple.html)<Args...>& t)
    {
        [std::cout](../../io/cout.html) << "(";
        TuplePrinter<decltype(t), sizeof...(Args)>::print(t);
        [std::cout](../../io/cout.html) << ")\n";
    }
    // end helper function
     
    int main()
    {
        [std::tuple](../tuple.html)<int, [std::string](../../string/basic_string.html), float> t1(10, "Test", 3.14);
        int n = 7;
        auto t2 = std::tuple_cat(t1, [std::make_tuple](make_tuple.html)("Foo", "bar"), t1, [std::tie](tie.html)(n));
        n = 42;
        print(t2);
    }

Output: 
    
    
    (10, Test, 3.14, Foo, bar, 10, Test, 3.14, 42)

### See also

[ make_tuple](make_tuple.html "cpp/utility/tuple/make tuple")(C++11) |  creates a `tuple` object of the type defined by the argument types   
(function template)   
---|---  
[ tie](tie.html "cpp/utility/tuple/tie")(C++11) |  creates a [tuple](../tuple.html "cpp/utility/tuple") of lvalue references or unpacks a tuple into individual objects   
(function template)   
[ forward_as_tuple](forward_as_tuple.html "cpp/utility/tuple/forward as tuple")(C++11) |  creates a `tuple` of [forwarding references](../../language/reference.html#Forwarding_references "cpp/language/reference")   
(function template) 
