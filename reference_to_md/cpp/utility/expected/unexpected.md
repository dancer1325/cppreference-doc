 
  


  
  
  
  
  
  
  
  
  
  
  
  


[`std::expected`](../expected.html "cpp/utility/expected")

[Member functions](../expected.html#Member_functions "cpp/utility/expected")  
---  
[expected::expected](expected.html "cpp/utility/expected/expected")  
[expected::~expected](~expected.html "cpp/utility/expected/~expected")  
[expected::operator=](operator=.html "cpp/utility/expected/operator=")  
[Observers](../expected.html#Observers "cpp/utility/expected")  
[expected::operator->expected::operator*](operator*.html "cpp/utility/expected/operator*")  
[expected::operator boolexpected::has_value](operator_bool.html "cpp/utility/expected/operator bool")  
[expected::value](value.html "cpp/utility/expected/value")  
[expected::error](error.html "cpp/utility/expected/error")  
[expected::value_or](value_or.html "cpp/utility/expected/value or")  
[expected::error_or](error_or.html "cpp/utility/expected/error or")  
[Monadic operations](../expected.html#Monadic_operations "cpp/utility/expected")  
[expected::and_then](and_then.html "cpp/utility/expected/and then")  
[expected::or_else](or_else.html "cpp/utility/expected/or else")  
[expected::transform](transform.html "cpp/utility/expected/transform")  
[expected::transform_error](transform_error.html "cpp/utility/expected/transform error")  
[Modifiers](../expected.html#Modifiers "cpp/utility/expected")  
[expected::emplace](emplace.html "cpp/utility/expected/emplace")  
[expected::swap](swap.html "cpp/utility/expected/swap")  
[Non-member functions](../expected.html#Non-member_functions "cpp/utility/expected")  
[operator==(std::expected)](operator_cmp.html "cpp/utility/expected/operator cmp")  
[swap(std::expected)](swap2.html "cpp/utility/expected/swap2")  
[Helper classes](../expected.html#Helper_classes "cpp/utility/expected")  
**unexpected**  
[bad_expected_access](bad_expected_access.html "cpp/utility/expected/bad expected access")  
[unexpect_tunexpect](unexpect_t.html "cpp/utility/expected/unexpect t")  
  


Defined in header `[<expected>](../../header/expected.html "cpp/header/expected")` |  |   
---|---|---  
template< class E >  
class unexpected; |  |  (since C++23)  
| |   
  
The class template `std::unexpected` represents an unexpected value stored in std::expected. In particular, std::expected has constructors with `std::unexpected` as a single argument, which creates an [`expected`](../expected.html "cpp/utility/expected") object that contains an unexpected value. 

A program is ill-formed if it instantiates an `unexpected` with a non-object type, an array type, a specialization of `std::unexpected`, or a cv-qualified type. 

## Contents

  * [1 Template parameters](unexpected.html#Template_parameters)
  * [2 Member functions](unexpected.html#Member_functions)
  * [3 Non-member functions](unexpected.html#Non-member_functions)
  * [4 std::unexpected::unexpected](unexpected.html#std::unexpected::unexpected)
    * [4.1 Parameters](unexpected.html#Parameters)
    * [4.2 Exceptions](unexpected.html#Exceptions)
  * [5 std::unexpected::error](unexpected.html#std::unexpected::error)
  * [6 std::unexpected::swap](unexpected.html#std::unexpected::swap)
  * [7 operator==(std::unexpected)](unexpected.html#operator.3D.3D.28std::unexpected.29)
  * [8 swap(std::unexpected)](unexpected.html#swap.28std::unexpected.29)
    * [8.1 Deduction guides](unexpected.html#Deduction_guides)
    * [8.2 Notes](unexpected.html#Notes)
    * [8.3 Example](unexpected.html#Example)
    * [8.4 See also](unexpected.html#See_also)

  
---  
  
### Template parameters

E  |  \-  |  the type of the unexpected value. The type must not be an array type, a non-object type, a specialization of `std::unexpected`, or a cv-qualified type.   
---|---|---  
  
### Member functions

[ (constructor)](unexpected.html#ctor "cpp/utility/expected/unexpected") |  constructs the `unexpected` object   
(public member function)  
---|---  
(destructor)(implicitly declared) |  destroys the `unexpected` object, along with the stored value   
(public member function)  
operator=(implicitly declared) |  assigns the stored value   
(public member function)  
[ error](unexpected.html#error "cpp/utility/expected/unexpected") |  accesses the stored value   
(public member function)  
[ swap](unexpected.html#swap "cpp/utility/expected/unexpected") |  swaps the stored value   
(public member function)  
  
### Non-member functions

[ operator==](unexpected.html#compare "cpp/utility/expected/unexpected")(C++23) |  compares the stored value   
(function template)  
---|---  
[ swap(std::unexpected)](unexpected.html#swap2 "cpp/utility/expected/unexpected")(C++23) |  specializes the [std::swap](../swap.html "cpp/algorithm/swap") algorithm   
(function template)  
  
##  std::unexpected::unexpected

constexpr unexpected( const unexpected& ) = default; |  (1)  |   
---|---|---  
constexpr unexpected( unexpected&& ) = default; |  (2)  |   
template< class Err = E >  
constexpr explicit unexpected( Err&& e ); |  (3)  |   
template< class... Args >  
constexpr explicit unexpected( [std::in_place_t](../in_place.html), Args&&... args ); |  (4)  |   
template< class U, class... Args >  
constexpr explicit unexpected( [std::in_place_t](../in_place.html),  
[std::initializer_list](../initializer_list.html)<U> il, Args&&... args ); |  (5)  |   
| |   
  
Constructs a `std::unexpected` object. 

1,2) Copy/move constructor. Copies or moves the stored value, respectively.

3) Constructs the stored value, as if by [direct-initializing](../../language/direct_initialization.html "cpp/language/direct initialization") a value of type `E` from [std::forward](../forward.html)<Err>(e). 

  * This overload participates in overload resolution only if 
    * [std::is_same_v](../../types/is_same.html)<[std::remove_cvref_t](../../types/remove_cvref.html)<Err>, unexpected> is false, and 
    * [std::is_same_v](../../types/is_same.html)<[std::remove_cvref_t](../../types/remove_cvref.html)<Err>, [std::in_place_t](../in_place.html)> is false, and 
    * [std::is_constructible_v](../../types/is_constructible.html)<E, Err> is true.



4) Constructs the stored value, as if by [direct-initializing](../../language/direct_initialization.html "cpp/language/direct initialization") a value of type `E` from the arguments [std::forward](../forward.html)<Args>(args).... 

  * This overload participates in overload resolution only if [std::is_constructible_v](../../types/is_constructible.html)<E, Args...> is true.



5) Constructs the stored value, as if by [direct-initializing](../../language/direct_initialization.html "cpp/language/direct initialization") a value of type `E` from the arguments il, [std::forward](../forward.html)<Args>(args).... 

  * This overload participates in overload resolution only if [std::is_constructible_v](../../types/is_constructible.html)<E, [std::initializer_list](../initializer_list.html)<U>&, Args...> is true.



###  Parameters

e  |  \-  |  value with which to initialize the contained value   
---|---|---  
args...  |  \-  |  arguments with which to initialize the contained value   
il  |  \-  |  initializer list with which to initialize the contained value   
  
###  Exceptions

Throws any exception thrown by the constructor of `E`. 

##  std::unexpected::error

constexpr const E& error() const& noexcept;  
constexpr E& error() & noexcept;  
constexpr const E&& error() const&& noexcept;  
constexpr E&& error() && noexcept; |  |   
---|---|---  
| |   
  
Returns a reference to the stored value. 

##  std::unexpected::swap

constexpr void swap( unexpected& other ) noexcept([std::is_nothrow_swappable_v](../../types/is_swappable.html)<E>); |  |   
---|---|---  
| |   
  
Swaps the stored values, as if by using [std::swap](../../algorithm/swap.html); swap(error(), other.error());. 

The program is ill-formed if [std::is_swappable_v](../../types/is_swappable.html)<E> is false. 

##  operator==(std::unexpected)

template< class E2 >  
friend constexpr bool operator==( unexpected& x, std::unexpected<E2>& y ); |  |   
---|---|---  
| |   
  
Compares the stored values, as if by return x.error() == y.error(). 

If the expression x.error() == e.error() is not well-formed, or if its result is not convertible to bool, the program is ill-formed. 

This function is not visible to ordinary [unqualified](../../language/unqualified_lookup.html "cpp/language/unqualified lookup") or [qualified lookup](../../language/qualified_lookup.html "cpp/language/qualified lookup"), and can only be found by [argument-dependent lookup](../../language/adl.html "cpp/language/adl") when `std::unexpected<E>` is an associated class of the arguments. 

##  swap(std::unexpected)

friend constexpr void  
swap( unexpected& x, unexpected& y ) noexcept(noexcept(x.swap(y))); |  |   
---|---|---  
| |   
  
Equivalent to x.swap(y). 

This overload participates in overload resolution only if [std::is_swappable_v](../../types/is_swappable.html)<E> is true. 

This function is not visible to ordinary [unqualified](../../language/unqualified_lookup.html "cpp/language/unqualified lookup") or [qualified lookup](../../language/qualified_lookup.html "cpp/language/qualified lookup"), and can only be found by [argument-dependent lookup](../../language/adl.html "cpp/language/adl") when `std::unexpected<E>` is an associated class of the arguments. 

### Deduction guides

template< class E >  
unexpected(E) -> unexpected<E>; |  |  (since C++23)  
---|---|---  
| |   
  
The [deduction guide](../../language/ctad.html "cpp/language/class template argument deduction") is provided for unexpected to allow deduction from the constructor argument. 

### Notes

Prior to C++17, the name [`std::unexpected`](../../error/unexpected.html "cpp/error/unexpected") denoted the function called by the C++ runtime when a dynamic exception specification was violated. 

### Example

Run this code
    
    
    #include <expected>
    #include <iostream>
     
    enum class error
    {
        compile_time_error,
        runtime_error
    };
     
    [[nodiscard]] auto unexpected_runtime_error() -> [std::expected](../expected.html)<int, error>
    {
        return std::unexpected(error::runtime_error);
    }
     
    int main()
    {
        [std::expected](../expected.html)<double, int> ex = std::unexpected(3);
     
        if (!ex)
            [std::cout](../../io/cout.html) << "ex contains an error value\n";
     
        if (ex == std::unexpected(3))
            [std::cout](../../io/cout.html) << "The error value is equal to 3\n";
     
        const auto e = unexpected_runtime_error();
     
        e.and_then([](const auto& e) -> [std::expected](../expected.html)<int, error>
        {
            [std::cout](../../io/cout.html) << "and_then: " << int(e); // not printed
            return {};
        })
        .or_else([](const auto& e) -> [std::expected](../expected.html)<int, error>
        {
            [std::cout](../../io/cout.html) << "or_else: " << int(e); // prints this line
            return {};
        });
    }

Output: 
    
    
    ex contains an error value
    The error value is equal to 3
    or_else: 1

### See also

[ (constructor)](expected.html "cpp/utility/expected/expected") |  constructs the `expected` object   
(public member function)   
---|---  
[ value](value.html "cpp/utility/expected/value") |  returns the expected value   
(public member function)   
[ swap](swap.html "cpp/utility/expected/swap") |  exchanges the contents   
(public member function)   
[ swap(std::expected)](swap2.html "cpp/utility/expected/swap2")(C++23) |  specializes the [std::swap](../swap.html "cpp/algorithm/swap") algorithm   
(function)   
[ operator==](operator_cmp.html "cpp/utility/expected/operator cmp")(C++23) |  compares `expected` objects   
(function template) 
