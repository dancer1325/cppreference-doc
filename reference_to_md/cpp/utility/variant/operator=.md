 
  


  
  
  
  
  
  
  
  
  
  
  
  


[`std::variant`](../variant.html "cpp/utility/variant")

[Member functions](../variant.html#Member_functions "cpp/utility/variant")  
---  
[variant::variant](variant.html "cpp/utility/variant/variant")  
[variant::~variant](~variant.html "cpp/utility/variant/~variant")  
**variant::operator=**  
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
[variant_alternative](variant_alternative.html "cpp/utility/variant/variant alternative")  
[hash<std::variant>](hash.html "cpp/utility/variant/hash")  
[Helper objects](../variant.html#Helper_objects "cpp/utility/variant")  
[variant_npos](variant_npos.html "cpp/utility/variant/variant npos")  
  


constexpr variant& operator=( const variant& rhs ); |  (1)  |  (since C++17)  
---|---|---  
constexpr variant& operator=( variant&& rhs ) noexcept(/* see below */); |  (2)  |  (since C++17)  
template< class T >  
variant& operator=( T&& t ) noexcept(/* see below */); |  (3) | (since C++17)   
(constexpr since C++20)  
| |   
  
Assigns a new value to an existing `variant` object. 

1) Copy-assignment: 

  * If both *this and rhs are valueless by exception, does nothing. 
  * Otherwise, if rhs is valueless, but *this is not, destroys the value contained in *this and makes it valueless. 
  * Otherwise, if rhs holds the same alternative as *this, assigns the value contained in rhs to the value contained in *this. If an exception is thrown, *this does not become valueless: the value depends on the exception safety guarantee of the alternative's copy assignment. 
  * Otherwise, if the alternative held by rhs is either nothrow copy constructible or _not_ nothrow move constructible (as determined by [std::is_nothrow_copy_constructible](../../types/is_copy_constructible.html "cpp/types/is copy constructible") and [std::is_nothrow_move_constructible](../../types/is_move_constructible.html "cpp/types/is move constructible"), respectively), equivalent to this->emplace<rhs.index()>(*[std::get_if](get_if.html)<rhs.index()>([std::addressof](../../memory/addressof.html)(rhs))). *this may become [`valueless_by_exception`](valueless_by_exception.html "cpp/utility/variant/valueless by exception") if an exception is thrown on the copy-construction inside [`emplace`](emplace.html "cpp/utility/variant/emplace"). 
  * Otherwise, equivalent to this->operator=(variant(rhs)).



This overload is defined as deleted unless [std::is_copy_constructible_v](../../types/is_copy_constructible.html)<T_i> and [std::is_copy_assignable_v](../../types/is_copy_assignable.html)<T_i> are both true for all `T_i` in `Types...`. This overload is trivial if [std::is_trivially_copy_constructible_v](../../types/is_copy_constructible.html)<T_i>,[std::is_trivially_copy_assignable_v](../../types/is_copy_assignable.html)<T_i> and [std::is_trivially_destructible_v](../../types/is_destructible.html)<T_i> are all true for all `T_i` in `Types...`.

2) Move-assignment: 

  * If both *this and rhs are valueless by exception, does nothing. 
  * Otherwise, if rhs is valueless, but *this is not, destroys the value contained in *this and makes it valueless. 
  * Otherwise, if rhs holds the same alternative as *this, assigns std::move(*[std::get_if](get_if.html)<j>([std::addressof](../../memory/addressof.html)(rhs))) to the value contained in *this, with `j` being `index()`. If an exception is thrown, *this does not become valueless: the value depends on the exception safety guarantee of the alternative's move assignment. 
  * Otherwise (if rhs and *this hold different alternatives), equivalent to this->emplace<rhs.index()>(std::move(*[std::get_if](get_if.html)<rhs.index()>([std::addressof](../../memory/addressof.html)(rhs)))). If an exception is thrown by `T_i`'s move constructor, *this becomes [`valueless_by_exception`](valueless_by_exception.html "cpp/utility/variant/valueless by exception").



This overload participates in overload resolution only if [std::is_move_constructible_v](../../types/is_move_constructible.html)<T_i> and [std::is_move_assignable_v](../../types/is_move_assignable.html)<T_i> are both true for all `T_i` in `Types...`. This overload is trivial if [std::is_trivially_move_constructible_v](../../types/is_move_constructible.html)<T_i>, [std::is_trivially_move_assignable_v](../../types/is_move_assignable.html)<T_i>, and [std::is_trivially_destructible_v](../../types/is_destructible.html)<T_i> are all true for all `T_i` in `Types...`.

3) Converting assignment. 

  * Determines the alternative type `T_j` that would be selected by overload resolution for the expression F([std::forward](../forward.html)<T>(t)) if there was an overload of imaginary function F(T_i) for every `T_i` from `Types...` in scope at the same time, except that: 



    

  * An overload F(T_i) is only considered if the declaration T_i x[] = { [std::forward](../forward.html)<T>(t) }; is valid for some invented variable `x`; 



  * If *this already holds a `T_j`, assigns [std::forward](../forward.html)<T>(t) to the value contained in *this. If an exception is thrown, *this does not become valueless: the value depends on the exception safety guarantee of the assignment called. 
  * Otherwise, if [std::is_nothrow_constructible_v](../../types/is_constructible.html)<T_j, T> || ![std::is_nothrow_move_constructible_v](../../types/is_move_constructible.html)<T_j> is true, equivalent to this->emplace<j>([std::forward](../forward.html)<T>(t)). *this may become [`valueless_by_exception`](valueless_by_exception.html "cpp/utility/variant/valueless by exception") if an exception is thrown on the initialization inside [`emplace`](emplace.html "cpp/utility/variant/emplace"). 
  * Otherwise, equivalent to this->emplace<j>(T_j([std::forward](../forward.html)<T>(t))). 



This overload participates in overload resolution only if [std::decay_t](../../types/decay.html)<T>(until C++20)[std::remove_cvref_t](../../types/remove_cvref.html)<T>(since C++20) is not the same type as [`variant`](../variant.html "cpp/utility/variant") and [std::is_assignable_v](../../types/is_assignable.html)<T_j&, T> is true and [std::is_constructible_v](../../types/is_constructible.html)<T_j, T> is true and the expression F([std::forward](../forward.html)<T>(t)) (with F being the above-mentioned set of imaginary functions) is well formed. 
    
    
    [std::variant](../variant.html)<[std::string](../../string/basic_string.html)> v1;
    v1 = "abc"; // OK
    [std::variant](../variant.html)<[std::string](../../string/basic_string.html), [std::string](../../string/basic_string.html)> v2;
    v2 = "abc"; // Error
    [std::variant](../variant.html) <[std::string](../../string/basic_string.html), bool> v3;
    v3 = "abc"; // OK, chooses string; bool is not a candidate
    [std::variant](../variant.html)<float, long, double> v4; // holds float
    v4 = 0; // OK, holds long; float and double are not candidates

## Contents

  * [1 Parameters](operator=.html#Parameters)
  * [2 Return value](operator=.html#Return_value)
  * [3 Exceptions](operator=.html#Exceptions)
  * [4 Notes](operator=.html#Notes)
  * [5 Example](operator=.html#Example)
  * [6 Defect reports](operator=.html#Defect_reports)
  * [7 See also](operator=.html#See_also)

  
---  
  
### Parameters

rhs  |  \-  |  another `variant`  
---|---|---  
t  |  \-  |  a value convertible to one of the variant's alternatives   
  
### Return value

*this

### Exceptions

1) May throw any exception thrown by assignment and copy/move initialization of any alternative.

2)

[`noexcept`](../../language/noexcept_spec.html "cpp/language/noexcept spec") specification: 

noexcept((([std::is_nothrow_move_constructible_v](../../types/is_move_constructible.html)<Types> &&  
[std::is_nothrow_move_assignable_v](../../types/is_move_assignable.html)<Types>) && ...))

3)

[`noexcept`](../../language/noexcept_spec.html "cpp/language/noexcept spec") specification: 

noexcept([std::is_nothrow_assignable_v](../../types/is_assignable.html)<T_j&, T> &&  
[std::is_nothrow_constructible_v](../../types/is_constructible.html)<T_j, T>)

### Notes

[Feature-test](../feature_test.html "cpp/utility/feature test") macro  | Value | Std | Feature   
---|---|---|---  
[`__cpp_lib_variant`](../../experimental/feature_test.html#cpp_lib_variant "cpp/feature test") | [`202106L`](../../compiler_support/20.html#cpp_lib_variant_202106L "cpp/compiler support/20") | (C++20)  
(DR) | Fully constexpr `std::variant` ([3](operator=.html#Version_3))  
  
### Example

Run this code
    
    
    #include <iomanip>
    #include <iostream>
    #include <string>
    #include <type_traits>
    #include <variant>
     
    [std::ostream](../../io/basic_ostream.html)& operator<<([std::ostream](../../io/basic_ostream.html)& os, [std::variant](../variant.html)<int, [std::string](../../string/basic_string.html)> const& va)
    {
        os << ": { ";
     
        [std::visit](visit.html)([&](auto&& arg)
        {
            using T = [std::decay_t](../../types/decay.html)<decltype(arg)>;
            if constexpr ([std::is_same_v](../../types/is_same.html)<T, int>)
                os << arg;
            else if constexpr ([std::is_same_v](../../types/is_same.html)<T, [std::string](../../string/basic_string.html)>)
                os << [std::quoted](../../io/manip/quoted.html)(arg);
        }, va);
     
        return os << " };\n";
    }
     
    int main()
    {
        [std::variant](../variant.html)<int, [std::string](../../string/basic_string.html)> a{2017}, b{"CppCon"};
        [std::cout](../../io/cout.html) << "a" << a << "b" << b << '\n';
     
        [std::cout](../../io/cout.html) << "(1) operator=( const variant& rhs )\n";
        a = b;
        [std::cout](../../io/cout.html) << "a" << a << "b" << b << '\n';
     
        [std::cout](../../io/cout.html) << "(2) operator=( variant&& rhs )\n";
        a = std::move(b);
        [std::cout](../../io/cout.html) << "a" << a << "b" << b << '\n';
     
        [std::cout](../../io/cout.html) << "(3) operator=( T&& t ), where T is int\n";
        a = 2019;
        [std::cout](../../io/cout.html) << "a" << a << '\n';
     
        [std::cout](../../io/cout.html) << "(3) operator=( T&& t ), where T is std::string\n";
        [std::string](../../string/basic_string.html) s{"CppNow"};
        [std::cout](../../io/cout.html) << "s: " << [std::quoted](../../io/manip/quoted.html)(s) << '\n';
        a = std::move(s);
        [std::cout](../../io/cout.html) << "a" << a << "s: " << [std::quoted](../../io/manip/quoted.html)(s) << '\n';
    }

Possible output: 
    
    
    a: { 2017 };
    b: { "CppCon" };
     
    (1) operator=( const variant& rhs )
    a: { "CppCon" };
    b: { "CppCon" };
     
    (2) operator=( variant&& rhs )
    a: { "CppCon" };
    b: { "" };
     
    (3) operator=( T&& t ), where T is int
    a: { 2019 };
     
    (3) operator=( T&& t ), where T is std::string
    s: "CppNow"
    a: { "CppNow" };
    s: ""

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 3024](https://cplusplus.github.io/LWG/issue3024) | C++17  | copy assignment operator doesn't participate in overload resolution  
if any member type is not copyable  | defined as deleted instead   
[LWG 3585](https://cplusplus.github.io/LWG/issue3585) | C++17  | converting assignment was sometimes unexpectedly ill-formed  
because there was no available move assignment  | made well-formed   
[P0602R4](https://wg21.link/P0602R4) | C++17  | copy/move assignment may not be trivial  
even if underlying operations are trivial  | required to propagate triviality   
[P0608R3](https://wg21.link/P0608R3) | C++17  | converting assignment blindly assembles an overload set,  
leading to unintended conversions  | narrowing and boolean conversions  
not considered   
[P2231R1](https://wg21.link/P2231R1) | C++20  | converting assignment ([3](operator=.html#Version_3)) was not constexpr  
while the required operations can be constexpr in C++20  | made constexpr  
  
### See also

[ emplace](emplace.html "cpp/utility/variant/emplace") |  constructs a value in the `variant`, in place   
(public member function)   
---|---
  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
