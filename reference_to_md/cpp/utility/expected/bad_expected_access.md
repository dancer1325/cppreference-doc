 
  


  
  
  
  
  
  
  
  
  
  
  
  


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
[unexpected](unexpected.html "cpp/utility/expected/unexpected")  
**bad_expected_access**  
[unexpect_tunexpect](unexpect_t.html "cpp/utility/expected/unexpect t")  
  


Defined in header `[<expected>](../../header/expected.html "cpp/header/expected")` |  |   
---|---|---  
template< class E >  
class bad_expected_access : public std::bad_expected_access<void> |  (1)  |  (since C++23)  
template<>  
class bad_expected_access<void> : public [std::exception](../../error/exception.html) |  (2)  |  (since C++23)  
| |   
  
1) Defines a type of object to be thrown by [`std::expected::value`](value.html "cpp/utility/expected/value") when accessing an expected object that contains an unexpected value. `bad_expected_access<E>` stores a copy of the unexpected value.

2) bad_expected_access<void> is the base class of all other `bad_expected_access` specializations.

All member functions of `std::bad_expected_access` are constexpr: it is possible to create and use `std::bad_expected_access` objects in the evaluation of a constant expression.However, `std::bad_expected_access` objects generally cannot be constexpr, because any dynamically allocated storage must be released in the same evaluation of constant expression. | (since C++26)  
---|---  
| This section is incomplete  
Reason: inheritance diagram   
---|---  
  
## Contents

  * [1 Members of the primary template](bad_expected_access.html#Members_of_the_primary_template)
  * [2 std::bad_expected_access::bad_expected_access](bad_expected_access.html#std::bad_expected_access::bad_expected_access)
  * [3 std::bad_expected_access::error](bad_expected_access.html#std::bad_expected_access::error)
  * [4 std::bad_expected_access::what](bad_expected_access.html#std::bad_expected_access::what)
    * [4.1 Return value](bad_expected_access.html#Return_value)
    * [4.2 Notes](bad_expected_access.html#Notes)
  * [5 Inherited from std::bad_expected_access<void>](bad_expected_access.html#Inherited_from_std::bad_expected_access.3Cvoid.3E)
    * [5.1 Members of the bad_expected_access<void> specialization](bad_expected_access.html#Members_of_the_bad_expected_access.3Cvoid.3E_specialization)
  * [6 Inherited from std::exception](bad_expected_access.html#Inherited_from_std::exception)
    * [6.1 Member functions](bad_expected_access.html#Member_functions)
    * [6.2 Notes](bad_expected_access.html#Notes_2)
    * [6.3 Example](bad_expected_access.html#Example)
    * [6.4 See also](bad_expected_access.html#See_also)

  
---  
  
### Members of the primary template

**(constructor)** |  constructs a `bad_expected_access` object   
(public member function)  
---|---  
error |  returns the stored value   
(public member function)  
what |  returns the explanatory string   
(public member function)  
  
##  std::bad_expected_access::bad_expected_access

explicit bad_expected_access( E e ); |  | (since C++23)   
(constexpr since C++26)  
---|---|---  
| |   
  
Constructs a new `bad_expected_access<E>` object. Initializes the stored value with `std::move(e)`. 

##  std::bad_expected_access::error

const E& error() const & noexcept; |  (1) | (since C++23)   
(constexpr since C++26)  
---|---|---  
E& error() & noexcept; |  (2) | (since C++23)   
(constexpr since C++26)  
const E&& error() const && noexcept; |  (3) | (since C++23)   
(constexpr since C++26)  
E&& error() && noexcept; |  (4) | (since C++23)   
(constexpr since C++26)  
| |   
  
Returns a reference to the stored value. 

##  std::bad_expected_access::what

const char* what() const noexcept override; |  | (since C++23)   
(constexpr since C++26)  
---|---|---  
| |   
  
Returns the explanatory string. 

###  Return value

Pointer to a null-terminated string with explanatory information. The string is suitable for conversion and display as a [std::wstring](../../string/basic_string.html "cpp/string/basic string"). The pointer is guaranteed to be valid at least until the exception object from which it is obtained is destroyed, or until a non-const member function (e.g., copy assignment operator) on the exception object is called. 

The returned string is encoded with the ordinary literal encoding during constant evaluation.  | (since C++26)  
---|---  
  
###  Notes

Implementations are allowed but not required to override `what()`. 

##  Inherited from std::bad_expected_access<void>

###  Members of the bad_expected_access<void> specialization

(constructor) |  constructs a bad_expected_access<void> object   
(protected member function)  
---|---  
(destructor) |  destroys the bad_expected_access<void> object   
(protected member function)  
operator= |  replaces the bad_expected_access<void> object   
(protected member function)  
what |  returns the explanatory string   
(public member function)  
  
Special member functions of bad_expected_access<void> are protected. They can only be called by derived classes. 

##  Inherited from [std::exception](../../error/exception.html "cpp/error/exception")

###  Member functions

[ (destructor)](../../error/exception/~exception.html "cpp/error/exception/~exception")[virtual] |  destroys the exception object   
(virtual public member function of `std::exception`)   
---|---  
[ what](../../error/exception/what.html "cpp/error/exception/what")[virtual] |  returns an explanatory string   
(virtual public member function of `std::exception`)   
  
### Notes

[Feature-test](../feature_test.html "cpp/utility/feature test") macro  | Value | Std | Feature   
---|---|---|---  
[`__cpp_lib_constexpr_exceptions`](../../experimental/feature_test.html#cpp_lib_constexpr_exceptions "cpp/feature test") | [`202502L`](../../compiler_support/26.html#cpp_lib_constexpr_exceptions_202502L "cpp/compiler support/26") | (C++26) | constexpr `std::bad_expected_access`  
  
### Example

| This section is incomplete  
Reason: no example   
---|---  
  
### See also

[ bad_optional_access](../bad_optional_access.html "cpp/utility/optional/bad optional access")(C++17) |  exception indicating checked access to an optional that doesn't contain a value   
(class)   
---|---  
[ bad_variant_access](../variant/bad_variant_access.html "cpp/utility/variant/bad variant access")(C++17) |  exception thrown on invalid accesses to the value of a `variant`   
(class) 
  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
