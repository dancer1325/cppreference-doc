 
  


  
  
  
  
  
  
  
  
  
  
  
  


[`std::any`](../any.html "cpp/utility/any")

[Member functions](../any.html#Member_functions "cpp/utility/any")  
---  
[any::any](any.html "cpp/utility/any/any")  
[any::~any](~any.html "cpp/utility/any/~any")  
[any::operator=](operator=.html "cpp/utility/any/operator=")  
[Modifiers](../any.html#Modifiers "cpp/utility/any")  
[any::emplace](emplace.html "cpp/utility/any/emplace")  
[any::reset](reset.html "cpp/utility/any/reset")  
[any::swap](swap.html "cpp/utility/any/swap")  
[Observers](../any.html#Observers "cpp/utility/any")  
[any::has_value](has_value.html "cpp/utility/any/has value")  
[any::type](type.html "cpp/utility/any/type")  
[Non-member functions](../any.html#Non-member_functions "cpp/utility/any")  
[swap(std::any)](swap2.html "cpp/utility/any/swap2")  
[any_cast](any_cast.html "cpp/utility/any/any cast")  
[make_any](make_any.html "cpp/utility/any/make any")  
[Helper classes](../any.html#Helper_classes "cpp/utility/any")  
**bad_any_cast**  
  


Defined in header `[<any>](../../header/any.html "cpp/header/any")` |  |   
---|---|---  
class bad_any_cast : public [std::bad_cast](../../types/bad_cast.html) |  |  (since C++17)  
| |   
  
Defines a type of object to be thrown by the value-returning forms of [std::any_cast](any_cast.html "cpp/utility/any/any cast") on failure. 

## Contents

  * [1 Member functions](bad_any_cast.html#Member_functions)
  * [2 std::bad_any_cast::bad_any_cast](bad_any_cast.html#std::bad_any_cast::bad_any_cast)
    * [2.1 Parameters](bad_any_cast.html#Parameters)
  * [3 std::bad_any_cast::operator=](bad_any_cast.html#std::bad_any_cast::operator.3D)
    * [3.1 Parameters](bad_any_cast.html#Parameters_2)
    * [3.2 Return value](bad_any_cast.html#Return_value)
  * [4 std::bad_any_cast::what](bad_any_cast.html#std::bad_any_cast::what)
    * [4.1 Return value](bad_any_cast.html#Return_value_2)
    * [4.2 Notes](bad_any_cast.html#Notes)
  * [5 Inherited from std::bad_cast](bad_any_cast.html#Inherited_from_std::bad_cast)
  * [6 Inherited from std::exception](bad_any_cast.html#Inherited_from_std::exception)
    * [6.1 Member functions](bad_any_cast.html#Member_functions_2)
    * [6.2 Example](bad_any_cast.html#Example)

  
---  
  
### Member functions

(constructor) |  constructs a new `bad_any_cast` object   
(public member function)  
---|---  
operator= |  replaces the `bad_any_cast` object   
(public member function)  
what |  returns the explanatory string   
(public member function)  
  
##  std::bad_any_cast::bad_any_cast

bad_any_cast() noexcept; |  (1) | (since C++17)  
---|---|---  
bad_any_cast( const bad_any_cast& other ) noexcept; |  (2) | (since C++17)  
| |   
  
Constructs a new `bad_any_cast` object with an implementation-defined null-terminated byte string which is accessible through [`what()`](../../error/exception/what.html "cpp/error/exception/what"). 

1) Default constructor.

2) Copy constructor. If *this and other both have dynamic type `std::bad_any_cast` then [std::strcmp](../../string/byte/strcmp.html)(what(), other.what()) == 0.

###  Parameters

other  |  \-  |  another exception object to copy   
---|---|---  
  
##  std::bad_any_cast::operator=

bad_any_cast& operator=( const bad_any_cast& other ) noexcept; |  | (since C++17)  
---|---|---  
| |   
  
Assigns the contents with those of other. If *this and other both have dynamic type `std::bad_any_cast` then [std::strcmp](../../string/byte/strcmp.html)(what(), other.what()) == 0 after assignment. 

###  Parameters

other  |  \-  |  another exception object to assign with   
---|---|---  
  
###  Return value

*this

##  std::bad_any_cast::what

virtual const char* what() const noexcept; |  | (since C++17)  
---|---|---  
| |   
  
Returns the explanatory string. 

###  Return value

Pointer to an implementation-defined null-terminated string with explanatory information. The string is suitable for conversion and display as a [std::wstring](../../string/basic_string.html "cpp/string/basic string"). The pointer is guaranteed to be valid at least until the exception object from which it is obtained is destroyed, or until a non-const member function (e.g. copy assignment operator) on the exception object is called. 

###  Notes

Implementations are allowed but not required to override `what()`. 

##  Inherited from [std::bad_cast](../../types/bad_cast.html "cpp/types/bad cast")

##  Inherited from [std::exception](../../error/exception.html "cpp/error/exception")

###  Member functions

[ (destructor)](../../error/exception/~exception.html "cpp/error/exception/~exception")[virtual] |  destroys the exception object   
(virtual public member function of `std::exception`)   
---|---  
[ what](../../error/exception/what.html "cpp/error/exception/what")[virtual] |  returns an explanatory string   
(virtual public member function of `std::exception`)   
  
### Example

Run this code
    
    
    #include <any>
    #include <cassert>
    #include <print>
     
    int main()
    {
        auto x = [std::any](../any.html)(42);
        [assert](../../error/assert.html)([std::any_cast](any_cast.html)<int>(x) == 42); // OK
     
        try
        {
            [[maybe_unused]] auto s = [std::any_cast](any_cast.html)<[std::string](../../string/basic_string.html)>(x); // throws
        }
        catch (const std::bad_any_cast& ex)
        {
            [std::println](../../io/println.html)("{}", ex.what());
        }
    }

Possible output: 
    
    
    bad any_cast
