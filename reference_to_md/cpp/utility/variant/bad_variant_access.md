 
  


  
  
  
  
  
  
  
  
  
  
  
  


[`std::variant`](../variant.html "cpp/utility/variant")

[Member functions](../variant.html#Member_functions "cpp/utility/variant")  
---  
[variant::variant](variant.html "cpp/utility/variant/variant")  
[variant::~variant](~variant.html "cpp/utility/variant/~variant")  
[variant::operator=](operator=.html "cpp/utility/variant/operator=")  
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
**bad_variant_access**  
[variant_size](variant_size.html "cpp/utility/variant/variant size")  
[variant_alternative](variant_alternative.html "cpp/utility/variant/variant alternative")  
[hash<std::variant>](hash.html "cpp/utility/variant/hash")  
[Helper objects](../variant.html#Helper_objects "cpp/utility/variant")  
[variant_npos](variant_npos.html "cpp/utility/variant/variant npos")  
  


Defined in header `[<variant>](../../header/variant.html "cpp/header/variant")` |  |   
---|---|---  
class bad_variant_access : public [std::exception](../../error/exception.html) |  |  (since C++17)  
| |   
  
`std::bad_variant_access` is the type of the exception thrown in the following situations: 

  * [`std::get(std::variant)`](get.html "cpp/utility/variant/get") called with an index or type that does not match the currently active alternative. 
  * [`std::visit`](visit2.html "cpp/utility/variant/visit2") called to visit a `variant` that is [`valueless_by_exception`](valueless_by_exception.html "cpp/utility/variant/valueless by exception"). 



  * [`std::variant::visit`](visit.html "cpp/utility/variant/visit") called to visit a `variant` that is [`valueless_by_exception`](valueless_by_exception.html "cpp/utility/variant/valueless by exception"). 

| (since C++26)  
---|---  
  
All member functions of `std::bad_variant_access` are constexpr: it is possible to create and use `std::bad_variant_access` objects in the evaluation of a constant expression.However, `std::bad_variant_access` objects generally cannot be constexpr, because any dynamically allocated storage must be released in the same evaluation of constant expression. | (since C++26)  
---|---  
  
## Contents

  * [1 Member functions](bad_variant_access.html#Member_functions)
  * [2 std::bad_variant_access::bad_variant_access](bad_variant_access.html#std::bad_variant_access::bad_variant_access)
    * [2.1 Parameters](bad_variant_access.html#Parameters)
  * [3 std::bad_variant_access::operator=](bad_variant_access.html#std::bad_variant_access::operator.3D)
    * [3.1 Parameters](bad_variant_access.html#Parameters_2)
    * [3.2 Return value](bad_variant_access.html#Return_value)
  * [4 std::bad_variant_access::what](bad_variant_access.html#std::bad_variant_access::what)
    * [4.1 Return value](bad_variant_access.html#Return_value_2)
    * [4.2 Notes](bad_variant_access.html#Notes)
  * [5 Inherited from std::exception](bad_variant_access.html#Inherited_from_std::exception)
    * [5.1 Member functions](bad_variant_access.html#Member_functions_2)
    * [5.2 Notes](bad_variant_access.html#Notes_2)
    * [5.3 Example](bad_variant_access.html#Example)
    * [5.4 See also](bad_variant_access.html#See_also)

  
---  
  
### Member functions

(constructor) |  constructs a new `bad_variant_access` object   
(public member function)  
---|---  
operator= |  replaces the `bad_variant_access` object   
(public member function)  
what |  returns the explanatory string   
(public member function)  
  
##  std::bad_variant_access::bad_variant_access

bad_variant_access() noexcept; |  (1) | (since C++17)   
(constexpr since C++26)  
---|---|---  
bad_variant_access( const bad_variant_access& other ) noexcept; |  (2) | (since C++17)   
(constexpr since C++26)  
| |   
  
Constructs a new `bad_variant_access` object with an implementation-defined null-terminated byte string which is accessible through [`what()`](../../error/exception/what.html "cpp/error/exception/what"). 

1) Default constructor.

2) Copy constructor. If *this and other both have dynamic type `std::bad_variant_access` then [std::strcmp](../../string/byte/strcmp.html)(what(), other.what()) == 0.

###  Parameters

other  |  \-  |  another exception object to copy   
---|---|---  
  
##  std::bad_variant_access::operator=

bad_variant_access& operator=( const bad_variant_access& other ) noexcept; |  | (since C++17)   
(constexpr since C++26)  
---|---|---  
| |   
  
Assigns the contents with those of other. If *this and other both have dynamic type `std::bad_variant_access` then [std::strcmp](../../string/byte/strcmp.html)(what(), other.what()) == 0 after assignment. 

###  Parameters

other  |  \-  |  another exception object to assign with   
---|---|---  
  
###  Return value

*this

##  std::bad_variant_access::what

virtual const char* what() const noexcept; |  | (since C++17)   
(constexpr since C++26)  
---|---|---  
| |   
  
Returns the explanatory string. 

###  Return value

Pointer to an implementation-defined null-terminated string with explanatory information. The string is suitable for conversion and display as a [std::wstring](../../string/basic_string.html "cpp/string/basic string"). The pointer is guaranteed to be valid at least until the exception object from which it is obtained is destroyed, or until a non-const member function (e.g. copy assignment operator) on the exception object is called. 

The returned string is encoded with the ordinary literal encoding during constant evaluation.  | (since C++26)  
---|---  
  
###  Notes

Implementations are allowed but not required to override `what()`. 

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
[`__cpp_lib_constexpr_exceptions`](../../experimental/feature_test.html#cpp_lib_constexpr_exceptions "cpp/feature test") | [`202502L`](../../compiler_support/26.html#cpp_lib_constexpr_exceptions_202502L "cpp/compiler support/26") | (C++26) | constexpr `std::bad_variant_access`  
  
### Example

Run this code
    
    
    #include <iostream>
    #include <variant>
     
    int main()
    {
        [std::variant](../variant.html)<int, float> v;
        v = 12;
        try
        {
            std::get<float>(v);
        }
        catch (const std::bad_variant_access& e)
        {
            [std::cout](../../io/cout.html) << e.what() << '\n';
        }
    }

Possible output: 
    
    
    bad_variant_access

### See also

[ get(std::variant)](get.html "cpp/utility/variant/get")(C++17) |  reads the value of the variant given the index or the type (if the type is unique), throws on error   
(function template)   
---|---  
[ visit](visit2.html "cpp/utility/variant/visit2")(C++17) |  calls the provided functor with the arguments held by one or more `variant`s   
(function template)   
[ visit](visit.html "cpp/utility/variant/visit")(C++26) |  calls the provided functor with the argument held by the `variant`   
(public member function)   
[ bad_optional_access](../bad_optional_access.html "cpp/utility/optional/bad optional access")(C++17) |  exception indicating checked access to an optional that doesn't contain a value   
(class)   
[ bad_expected_access](../expected/bad_expected_access.html "cpp/utility/expected/bad expected access")(C++23) |  exception indicating checked access to an `expected` that contains an unexpected value   
(class template) 
  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
