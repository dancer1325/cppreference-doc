 
  


  
  
  
  
  
  
  
  
  
  
  
  


[`std::pair`](../pair.html "cpp/utility/pair")

[Member functions](../pair.html#Member_functions "cpp/utility/pair")  
---  
**pair::pair**  
[pair::operator=](operator=.html "cpp/utility/pair/operator=")  
[pair::swap](swap.html "cpp/utility/pair/swap")(C++11)  
[Non-member functions](../pair.html#Non-member_functions "cpp/utility/pair")  
[make_pair](make_pair.html "cpp/utility/pair/make pair")  
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
  


pair(); |  (1) | (constexpr since C++11)   
(conditionally explicit since C++11)  
---|---|---  
pair( const T1& x, const T2& y ); |  (2)  |  (conditionally explicit since C++11)  
(constexpr since C++14)  
| (3) |   
template< class U1, class U2 >  
pair( U1&& x, U2&& y ); |  | (since C++11)   
(until C++23)   
(constexpr since C++14)  
(conditionally explicit)  
template< class U1 = T1, class U2 = T2 >  
constexpr pair( U1&& x, U2&& y ); |  |  (since C++23)   
(conditionally explicit)  
template< class U1, class U2 >  
constexpr pair( pair<U1, U2>& p ); |  (4)  |  (since C++23)   
(conditionally explicit)  
template< class U1, class U2 >  
pair( const pair<U1, U2>& p ); |  (5)  |  (conditionally explicit since C++11)  
(constexpr since C++14)  
template< class U1, class U2 >  
pair( pair<U1, U2>&& p ); |  (6) | (constexpr since C++14)   
(conditionally explicit since C++11)  
template< class U1, class U2 >  
constexpr pair( const pair<U1, U2>&& p ); |  (7)  |  (since C++23)   
(conditionally explicit)  
template< pair-like P >  
constexpr pair ( P&& u ); |  (8)  |  (since C++23)   
(conditionally explicit)  
template< class... Args1, class... Args2 >  
pair( [std::piecewise_construct_t](../piecewise_construct_t.html),  
[std::tuple](../tuple.html)<Args1...> first_args,  
[std::tuple](../tuple.html)<Args2...> second_args ); |  (9) | (since C++11)   
(constexpr since C++20)  
pair( const pair& p ) = default; |  (10)  |   
pair( pair&& p ) = default; |  (11)  |  (since C++11)  
| |   
  
Constructs a new pair. 

1) Default constructor. Value-initializes both elements of the pair, `first` and `second`.  This constructor participates in overload resolution if and only if [std::is_default_constructible_v](../../types/is_default_constructible.html)<T1> and [std::is_default_constructible_v](../../types/is_default_constructible.html)<T2> are both true. This constructor is explicit if and only if either `T1` or `T2` is not implicitly default-constructible.  | (since C++11)  
---|---  
  
2) Initializes `first` with x and `second` with y.  This constructor participates in overload resolution if and only if [std::is_copy_constructible_v](../../types/is_copy_constructible.html)<T1> and [std::is_copy_constructible_v](../../types/is_copy_constructible.html)<T2> are both true. This constructor is explicit if and only if [std::is_convertible_v](../../types/is_convertible.html)<const T1&, T1> is false or [std::is_convertible_v](../../types/is_convertible.html)<const T2&, T2> is false.  | (since C++11)  
---|---  
  
3) Initializes `first` with [std::forward](../forward.html)<U1>(x) and `second` with [std::forward](../forward.html)<U2>(y). 

This constructor participates in overload resolution if and only if [std::is_constructible_v](../../types/is_constructible.html)<T1, U1> and [std::is_constructible_v](../../types/is_constructible.html)<T2, U2> are both true.

This constructor is explicit if and only if [std::is_convertible_v](../../types/is_convertible.html)<U1, T1> is false or [std::is_convertible_v](../../types/is_convertible.html)<U2, T2> is false.  This constructor is defined as deleted if the initialization of `first` or `second` would [bind a reference to temporary object](../../language/reference_initialization.html#Lifetime_of_a_temporary_object "cpp/language/reference initialization").  | (since C++23)  
---|---  
  
4) Initializes `first` with p.first and `second` with p.second.

This constructor participates in overload resolution if and only if [std::is_constructible_v](../../types/is_constructible.html)<T1, U1&> and [std::is_constructible_v](../../types/is_constructible.html)<T2, U2&> are both true.

This constructor is explicit if and only if [std::is_convertible_v](../../types/is_convertible.html)<U1&, T1> is false or [std::is_convertible_v](../../types/is_convertible.html)<U2&, T2> is false.

This constructor is defined as deleted if the initialization of `first` or `second` would bind a reference to temporary object.

5) Initializes `first` with p.first and `second` with p.second.  This constructor participates in overload resolution if and only if [std::is_constructible_v](../../types/is_constructible.html)<T1, const U1&> and [std::is_constructible_v](../../types/is_constructible.html)<T2, const U2&> are both true. This constructor is explicit if and only if [std::is_convertible_v](../../types/is_convertible.html)<const U1&, T1> is false or [std::is_convertible_v](../../types/is_convertible.html)<const U2&, T2> is false.  | (since C++11)  
---|---  
This constructor is defined as deleted if the initialization of `first` or `second` would bind a reference to temporary object.  | (since C++23)  
---|---  
  
6) Initializes `first` with [std::forward](../forward.html)<U1>(p.first) and `second` with [std::forward](../forward.html)<U2>(p.second).

This constructor participates in overload resolution if and only if [std::is_constructible_v](../../types/is_constructible.html)<T1, U1> and [std::is_constructible_v](../../types/is_constructible.html)<T2, U2> are both true.

This constructor is explicit if and only if [std::is_convertible_v](../../types/is_convertible.html)<U1, T1> is false or [std::is_convertible_v](../../types/is_convertible.html)<U2, T2> is false.  This constructor is defined as deleted if the initialization of `first` or `second` would bind a reference to temporary object.  | (since C++23)  
---|---  
  
7) Initializes `first` with [std::forward](../forward.html)<const U1>(p.first) and `second` with [std::forward](../forward.html)<const U2>(p.second).

This constructor participates in overload resolution if and only if [std::is_constructible_v](../../types/is_constructible.html)<T1, U1> and [std::is_constructible_v](../../types/is_constructible.html)<T2, U2> are both true.

This constructor is explicit if and only if [std::is_convertible_v](../../types/is_convertible.html)<const U1, T1> is false or [std::is_convertible_v](../../types/is_convertible.html)<const U2, T2> is false.

This constructor is defined as deleted if the initialization of `first` or `second` would bind a reference to temporary object.

8) Given u1 as std::get<0>([std::forward](../forward.html)(u)) and u2 as std::get<1>([std::forward](../forward.html)(u)), denote their types as `U1` and `U2` respectively. Initializes `first` with u1 and `second` with u2.

This constructor participates in overload resolution if and only if 

  * [std::remove_cvref](../../types/remove_cvref.html)(P) is not a specialization of [std::ranges::subrange](../../ranges/subrange.html "cpp/ranges/subrange"), 
  * [std::is_constructible_v](../../types/is_constructible.html)<T1, U1> is true, and 
  * [std::is_constructible_v](../../types/is_constructible.html)<T2, U2 is true. 



This constructor is explicit if and only if [std::is_convertible_v](../../types/is_convertible.html)<U1, T1> is false or [std::is_convertible_v](../../types/is_convertible.html)<U2, T2> is false.

This constructor is defined as deleted if the initialization of `first` or `second` would bind a reference to temporary object.

9) Forwards the elements of first_args to the constructor of `first` and forwards the elements of second_args to the constructor of `second`. This is the only non-default constructor that can be used to create a pair of non-copyable non-movable types. The program is ill-formed if `first` or `second` is a reference and bound to a temporary object.

10) Copy constructor is implicitly declared(until C++11)defaulted, and is constexpr if copying of both elements satisfies the requirements on constexpr functions(since C++11).

11) Move constructor is defaulted, and is constexpr if moving of both elements satisfies the requirements on constexpr functions.

## Contents

  * [1 Parameters](pair.html#Parameters)
  * [2 Exceptions](pair.html#Exceptions)
  * [3 Example](pair.html#Example)
  * [4 Defect reports](pair.html#Defect_reports)
  * [5 See also](pair.html#See_also)

  
---  
  
### Parameters

x  |  \-  |  value to initialize the first element of this pair   
---|---|---  
y  |  \-  |  value to initialize the second element of this pair   
p  |  \-  |  pair of values used to initialize both elements of this pair   
u  |  \-  |  [`_pair-like_`](../tuple/tuple-like.html "cpp/utility/tuple/tuple-like") object of values used to initialize both elements of this pair   
first_args  |  \-  |  tuple of constructor arguments to initialize the first element of this pair   
second_args  |  \-  |  tuple of constructor arguments to initialize the second element of this pair   
  
### Exceptions

Does not throw exceptions unless one of the specified operations (e.g. constructor of an element) throws. 

### Example

Run this code
    
    
    #include <complex>
    #include <iostream>
    #include <string>
    #include <tuple>
    #include <utility>
     
    int main()
    {
        auto print = [](auto rem, auto const& pair)
        {
            [std::cout](../../io/cout.html) << rem << "(" << pair.first << ", " << pair.second << ")\n";
        };
     
        [std::pair](../pair.html)<int, float> p1;
        print("(1) Value-initialized: ", p1);
     
        [std::pair](../pair.html)<int, double> p2{42, 3.1415};
        print("(2) Initialized with two values: ", p2);
     
        [std::pair](../pair.html)<char, int> p4{p2};
        print("(4) Implicitly converted: ", p4);
     
        [std::pair](../pair.html)<[std::complex](../../numeric/complex.html)<double>, [std::string](../../string/basic_string.html)> p6
            {[std::piecewise_construct](../piecewise_construct.html), [std::forward_as_tuple](../tuple/forward_as_tuple.html)(0.123, 7.7),
                [std::forward_as_tuple](../tuple/forward_as_tuple.html)(10, 'a')};
        print("(8) Piecewise constructed: ", p6);
    }

Possible output: 
    
    
    (1) Value-initialized: (0, 0)
    (2) Initialized with two values: (42, 3.1415)
    (4) Implicitly converted: (*, 3)
    (8) Piecewise constructed: ((0.123,7.7), aaaaaaaaaa)

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 265](https://cplusplus.github.io/LWG/issue265) | C++98  | the default constructor copy-initialized `first`  
and `second` with T1() and T2() respectively  
(thus required `T1` and `T2` to be [CopyConstructible](../../named_req/CopyConstructible.html "cpp/named req/CopyConstructible"))  | `first` and `second`  
are value-initialized   
[LWG 2510](https://cplusplus.github.io/LWG/issue2510) | C++11  | the default constructor was implicit  | made conditionally-explicit   
[N4387](https://wg21.link/N4387) | C++11  | some constructors were implicit-only, preventing some uses  | constructors made conditionally-explicit   
  
### See also

[ make_pair](make_pair.html "cpp/utility/pair/make pair") |  creates a `pair` object of type, determined by the argument types   
(function template)   
---|---  
[ (constructor)](../tuple/tuple.html "cpp/utility/tuple/tuple") |  constructs a new `tuple`   
(public member function of `std::tuple<Types...>`) 
