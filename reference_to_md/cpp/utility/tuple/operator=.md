 
  


  
  
  
  
  
  
  
  
  
  
  
  


[`std::tuple`](../tuple.html "cpp/utility/tuple")

[Member functions](../tuple.html#Member_functions "cpp/utility/tuple")  
---  
[tuple::tuple](tuple.html "cpp/utility/tuple/tuple")  
**tuple::operator=**  
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
[ignore](ignore.html "cpp/utility/tuple/ignore")  
[Deduction guides](deduction_guides.html "cpp/utility/tuple/deduction guides")(C++17)  
  


tuple& operator=( const tuple& other ); |  (1) | (since C++11)   
(constexpr since C++20)  
---|---|---  
constexpr const tuple& operator=( const tuple& other ) const; |  (2)  |  (since C++23)  
tuple& operator=( tuple&& other ) noexcept(/* see below */); |  (3) | (since C++11)   
(constexpr since C++20)  
constexpr const tuple& operator=( tuple&& other ) const; |  (4)  |  (since C++23)  
template< class... UTypes >  
tuple& operator=( const tuple<UTypes...>& other ); |  (5) | (since C++11)   
(constexpr since C++20)  
template< class... UTypes >  
constexpr const tuple& operator=( const tuple<UTypes...>& other ) const; |  (6)  |  (since C++23)  
template< class... UTypes >  
tuple& operator=( tuple<UTypes...>&& other ); |  (7) | (since C++11)   
(constexpr since C++20)  
template< class... UTypes >  
constexpr const tuple& operator=( tuple<UTypes...>&& other ) const; |  (8)  |  (since C++23)  
template< class E1, class E2 >  
tuple& operator=( const [std::pair](../pair.html)<E1, E2>& p ); |  (9) | (since C++11)   
(constexpr since C++20)  
template< class E1, class E2 >  
constexpr const tuple& operator=( const [std::pair](../pair.html)<E1, E2>& p ) const; |  (10)  |  (since C++23)  
template< class E1, class E2 >  
tuple& operator=( [std::pair](../pair.html)<E1, E2>&& p ); |  (11) | (since C++11)   
(constexpr since C++20)  
template< class E1, class E2 >  
constexpr const tuple& operator=( [std::pair](../pair.html)<E1, E2>&& p ) const; |  (12)  |  (since C++23)  
template< tuple-like UTuple >  
constexpr tuple& operator=( UTuple&& u ); |  (13)  |  (since C++23)  
template< tuple-like UTuple >  
constexpr const tuple& operator=( UTuple&& u ) const; |  (14)  |  (since C++23)  
| |   
  
Replaces the contents of the tuple with the contents of another tuple-like object. 

In the descriptions that follow, let 

  * i be in the range `[`​0​`, `sizeof...(Types)`)` in order, 
  * `Ti` be the `i`th type in the class template parameter pack `Types`, and 
  * `Ui` be the `i`th type in a function template parameter pack named `UTypes`, 



where indexing is zero-based. 

1) Copy assignment operator. Assigns each element of other to the corresponding element of *this.

This overload is defined as deleted unless [std::is_copy_assignable](../../types/is_copy_assignable.html)<Ti>::value is true for all `Ti`.

2) Copy assignment operator for const-qualified operand. Assigns each element of other to the corresponding element of *this.

This overload participates in overload resolution only if [std::is_copy_assignable_v](../../types/is_copy_assignable.html)<const Ti> is true for all `Ti`.

3) Move assignment operator. For all i, assigns [std::forward](../forward.html)<Ti>(std::get<i>(other)) to std::get<i>(*this).

This overload participates in overload resolution only if [std::is_move_assignable](../../types/is_move_assignable.html)<Ti>::value is true for all `Ti`.

4) Move assignment operator for const-qualified operand. For all i, assigns [std::forward](../forward.html)<Ti>(std::get<i>(other)) to std::get<i>(*this).

This overload participates in overload resolution only if [std::is_assignable_v](../../types/is_assignable.html)<const Ti&, Ti> is true for all `Ti`.

5) For all i, assigns std::get<i>(other) to std::get<i>(*this).

This overload participates in overload resolution only if sizeof...(Types) == sizeof...(UTypes), and [std::is_assignable](../../types/is_assignable.html)<Ti&, const Ui&>::value is true for all corresponding pairs of types `Ti` and `Ui`.

6) For all i, assigns std::get<i>(other) to std::get<i>(*this).

This overload participates in overload resolution only if sizeof...(Types) == sizeof...(UTypes), and [std::is_assignable_v](../../types/is_assignable.html)<const Ti&, const Ui&> is true for all corresponding pairs of types `Ti` and `Ui`.

7) For all i, assigns [std::forward](../forward.html)<Ui>(std::get<i>(other)) to std::get<i>(*this).

This overload participates in overload resolution only if sizeof...(Types) == sizeof...(UTypes), and [std::is_assignable](../../types/is_assignable.html)<Ti&, Ui>::value is true for all corresponding pairs of types `Ti`and `Ui`.

8) For all i, assigns [std::forward](../forward.html)<Ui>(std::get<i>(other)) to std::get<i>(*this).

This overload participates in overload resolution only if sizeof...(Types) == sizeof...(UTypes), and [std::is_assignable_v](../../types/is_assignable.html)<const Ti&, Ui> is true for all corresponding pairs of types `Ti` and `Ui`.

9) Assigns p.first to the first element of *this and p.second to the second element of *this.

This overload participates in overload resolution only if 

  * sizeof...(Types) == 2, 
  * [std::is_assignable](../../types/is_assignable.html)<T0&, const E1&>::value is true, and 
  * [std::is_assignable](../../types/is_assignable.html)<T1&, const E2&>::value is true.



10) Assigns p.first to the first element and p.second to the second element.

This overload participates in overload resolution only if 

  * sizeof...(Types) == 2, 
  * [std::is_assignable_v](../../types/is_assignable.html)<const T0&, const E1&> is true, and 
  * [std::is_assignable_v](../../types/is_assignable.html)<const T1&, const E2&> is true.



11) Assigns [std::forward](../forward.html)<E1>(p.first) to the first element of *this and [std::forward](../forward.html)<E2>(p.second) to the second element of *this.

This overload participates in overload resolution only if 

  * sizeof...(Types) == 2, 
  * [std::is_assignable_v](../../types/is_assignable.html)<T0&, E1> is true, and 
  * [std::is_assignable_v](../../types/is_assignable.html)<T1&, E2> is true.



12) Assigns [std::forward](../forward.html)<E1>(p.first) to the first element and [std::forward](../forward.html)<E2>(p.second) to the second element.

This overload participates in overload resolution only if 

  * sizeof...(Types) == 2, 
  * [std::is_assignable_v](../../types/is_assignable.html)<const T0&, E1> is true, and 
  * [std::is_assignable_v](../../types/is_assignable.html)<const T1&, E2> is true.



13) For all i, assigns std::get<i>([std::forward](../forward.html)<UTuple>(u)) to std::get<i>(*this).

This overload participates in overload resolution only if 

  * [std::same_as](../../concepts/same_as.html)<[std::remove_cvref_t](../../types/remove_cvref.html)<UTuple>, [std::tuple](../tuple.html)> is false, 
  * [std::remove_cvref_t](../../types/remove_cvref.html)<UTuple> is not a specialization of [std::ranges::subrange](../../ranges/subrange.html "cpp/ranges/subrange"), 
  * sizeof...(Types) equals [std::tuple_size_v](../tuple_size.html)<[std::remove_cvref_t](../../types/remove_cvref.html)<UTuple>>, and 
  * [std::is_assignable_v](../../types/is_assignable.html)<Ti&, decltype(std::get<i>([std::forward](../forward.html)<UTuple>(u)))> is true for all i.



14) For all i, assigns std::get<i>([std::forward](../forward.html)<UTuple>(u)) to std::get<i>(*this).

This overload participates in overload resolution only if 

  * [std::same_as](../../concepts/same_as.html)<[std::remove_cvref_t](../../types/remove_cvref.html)<UTuple>, [std::tuple](../tuple.html)> is false, 
  * [std::remove_cvref_t](../../types/remove_cvref.html)<UTuple> is not a specialization of [std::ranges::subrange](../../ranges/subrange.html "cpp/ranges/subrange"), 
  * sizeof...(Types) equals [std::tuple_size_v](../tuple_size.html)<[std::remove_cvref_t](../../types/remove_cvref.html)<UTuple>>, and 
  * [std::is_assignable_v](../../types/is_assignable.html)<const Ti&, decltype(std::get<i>([std::forward](../forward.html)<UTuple>(u)))> is true for all i.



## Contents

  * [1 Parameters](operator=.html#Parameters)
  * [2 Return value](operator=.html#Return_value)
  * [3 Exceptions](operator=.html#Exceptions)
  * [4 Example](operator=.html#Example)
  * [5 Defect reports](operator=.html#Defect_reports)
  * [6 See also](operator=.html#See_also)

  
---  
  
### Parameters

other  |  \-  |  tuple to replace the contents of this tuple   
---|---|---  
p  |  \-  |  pair to replace the contents of this 2-tuple   
u  |  \-  |  [`_tuple-like_`](tuple-like.html "cpp/utility/tuple/tuple-like") object to replace the contents of this tuple   
  
### Return value

*this

### Exceptions

1,2) May throw implementation-defined exceptionsif the assignment of one of the types in `Types` throws an exception.

3)

[`noexcept`](../../language/noexcept_spec.html "cpp/language/noexcept spec") specification: 

noexcept(  


[std::is_nothrow_move_assignable](../../types/is_move_assignable.html)<T0>::value &&  
[std::is_nothrow_move_assignable](../../types/is_move_assignable.html)<T1>::value &&  
[std::is_nothrow_move_assignable](../../types/is_move_assignable.html)<T2>::value &&  
...  


)

4-14) May throw implementation-defined exceptionsif the assignment of one of the types in `Types` throws an exception.

### Example

Run this code
    
    
    #include <iostream>
    #include <string>
    #include <string_view>
    #include <tuple>
    #include <utility>
    #include <vector>
     
    // helper function to print std::vector<int>
    [std::ostream](../../io/basic_ostream.html)& operator<<([std::ostream](../../io/basic_ostream.html)& os, [std::vector](../../container/vector.html)<int> const& v)
    {
        os << '{';
        for ([std::size_t](../../types/size_t.html) t = 0; t != v.size(); ++t)
            os << v[t] << (t + 1 < v.size() ? ", " : "");
        return os << '}';
    }
     
    // helpers to print a tuple of any size
    template<class... Args>
    void print_tuple([std::string_view](../../string/basic_string_view.html) name, const [std::tuple](../tuple.html)<Args...>& t)
    {
        [std::cout](../../io/cout.html) << name << " = {";
        [std::apply](../apply.html)([&](auto&& arg, auto&&... args)
        {
            [std::cout](../../io/cout.html) << arg;
            (([std::cout](../../io/cout.html) << ", " << args), ...);
        }, t);
        [std::cout](../../io/cout.html) << '}';
    }
     
    template<class Tuple1, class Tuple2>
    void print_tuples([std::string_view](../../string/basic_string_view.html) name1, const Tuple1& t1,
                      [std::string_view](../../string/basic_string_view.html) name2, const Tuple2& t2)
    {
        print_tuple(name1, t1);
        [std::cout](../../io/cout.html) << ", ";
        print_tuple(name2, [std::tuple](../tuple.html)(t2));
        [std::cout](../../io/cout.html) << "\n\n";
    }
     
    int main()
    {
        // Tuple to tuple examples //
        [std::tuple](../tuple.html)<int, [std::string](../../string/basic_string.html), [std::vector](../../container/vector.html)<int>>
            t1{1, "alpha", {1, 2, 3}},
            t2{2, "beta", {4, 5}};
        print_tuples("1) t1", t1, "t2", t2);
     
        // Normal copy assignment
        // operator=( const tuple& other );
        t1 = t2;
        print_tuples("2) t1 = t2;\n   t1", t1, "t2", t2);
     
        // Normal move assignment
        // operator=( tuple&& other );
        t1 = std::move(t2);
        print_tuples("3) t1 = std::move(t2);\n   t1", t1, "t2", t2);
     
        // Converting copy assignment
        // operator=( const tuple<UTypes...>& other );
        [std::tuple](../tuple.html)<short, const char*, [std::vector](../../container/vector.html)<int>> t3{3, "gamma", {6, 7, 8}};
        t1 = t3;
        print_tuples("4) t1 = t3;\n   t1", t1, "t3", t3);
     
        // Converting move assignment
        // operator=( tuple<UTypes...>&& other );
        t1 = std::move(t3);
        print_tuples("5) t1 = std::move(t3);\n   t1", t1, "t3", t3);
     
        // Pair to tuple examples //
        [std::tuple](../tuple.html)<[std::string](../../string/basic_string.html), [std::vector](../../container/vector.html)<int>> t4{"delta", {10, 11, 12}};
        [std::pair](../pair.html)<const char*, [std::vector](../../container/vector.html)<int>> p1{"epsilon", {14, 15, 16}};
        print_tuples("6) t4", t4, "p1", p1);
     
        // Converting copy assignment from std::pair
        // operator=( const std::pair<U1, U2>& p );
        t4 = p1;
        print_tuples("7) t4 = p1;\n   t4", t4, "p1", p1);
     
        // Converting move assignment from std::pair
        // operator=( std::pair<U1, U2>&& p );
        t4 = std::move(p1);
        print_tuples("8) t4 = std::move(p1);\n   t4", t4, "p1", p1);
    }

Possible output: 
    
    
    1) t1 = {1, alpha, {1, 2, 3}}, t2 = {2, beta, {4, 5}}
     
    2) t1 = t2;
       t1 = {2, beta, {4, 5}}, t2 = {2, beta, {4, 5}}
     
    3) t1 = std::move(t2);
       t1 = {2, beta, {4, 5}}, t2 = {2, , {}}
     
    4) t1 = t3;
       t1 = {3, gamma, {6, 7, 8}}, t3 = {3, gamma, {6, 7, 8}}
     
    5) t1 = std::move(t3);
       t1 = {3, gamma, {6, 7, 8}}, t3 = {3, gamma, {}}
     
    6) t4 = {delta, {10, 11, 12}}, p1 = {epsilon, {14, 15, 16}}
     
    7) t4 = p1;
       t4 = {epsilon, {14, 15, 16}}, p1 = {epsilon, {14, 15, 16}}
     
    8) t4 = std::move(p1);
       t4 = {epsilon, {14, 15, 16}}, p1 = {epsilon, {}}

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 2729](https://cplusplus.github.io/LWG/issue2729) | C++11  | operator= was unconstrained and might  
result in unnecessary undefined behavior  | constrained   
  
### See also

[ (constructor)](tuple.html "cpp/utility/tuple/tuple") |  constructs a new `tuple`   
(public member function)   
---|---  
[ operator=](../pair/operator=.html "cpp/utility/pair/operator=") |  assigns the contents   
(public member function of `std::pair<T1,T2>`) 
