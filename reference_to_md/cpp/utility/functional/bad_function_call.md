 
  


  
  
  
  
  
  
  
  
  
  
  
  


[Function objects](../../functional.html "cpp/utility/functional")

| [Function wrappers](../../functional.html#Function_wrappers "cpp/utility/functional")  
---  
[function](function.html "cpp/utility/functional/function")(C++11)  
[move_only_function](move_only_function.html "cpp/utility/functional/move only function")(C++23)  
[copyable_function](copyable_function.html "cpp/utility/functional/copyable function")(C++26)  
[function_ref](function_ref.html "cpp/utility/functional/function ref")(C++26)  
[mem_fn](mem_fn.html "cpp/utility/functional/mem fn")(C++11)  
**bad_function_call**(C++11)  
  
| [Partial function application](../../functional.html#Partial_function_application "cpp/utility/functional")  
---  
[bind_frontbind_back](bind_front.html "cpp/utility/functional/bind front")(C++20)(C++23)  
[bind](bind.html "cpp/utility/functional/bind")(C++11)  
[is_bind_expression](is_bind_expression.html "cpp/utility/functional/is bind expression")(C++11)  
[is_placeholder](is_placeholder.html "cpp/utility/functional/is placeholder")(C++11)  
[_1, _2, _3, ...](placeholders.html "cpp/utility/functional/placeholders")(C++11)  
  
| [Function invocation](../../functional.html#Function_invocation "cpp/utility/functional")  
---  
[invokeinvoke_r](invoke.html "cpp/utility/functional/invoke")(C++17)(C++23)  
Identity function object  
[identity](identity.html "cpp/utility/functional/identity")(C++20)  
  
| [Reference wrappers](../../functional.html#Reference_wrappers "cpp/utility/functional")  
---  
[reference_wrapper](reference_wrapper.html "cpp/utility/functional/reference wrapper")(C++11)  
[refcref](ref.html "cpp/utility/functional/ref")(C++11)(C++11)  
[unwrap_referenceunwrap_ref_decay](unwrap_reference.html "cpp/utility/functional/unwrap reference")(C++20)(C++20)  
  
| [Operator wrappers](../../functional.html#Operator_function_objects "cpp/utility/functional")  
---  
| [plus](plus.html "cpp/utility/functional/plus")  
---  
[minus](minus.html "cpp/utility/functional/minus")  
[negate](negate.html "cpp/utility/functional/negate")  
[multiplies](multiplies.html "cpp/utility/functional/multiplies")  
[divides](divides.html "cpp/utility/functional/divides")  
[modulus](modulus.html "cpp/utility/functional/modulus")  
[bit_and](bit_and.html "cpp/utility/functional/bit and")  
[bit_or](bit_or.html "cpp/utility/functional/bit or")  
[bit_not](bit_not.html "cpp/utility/functional/bit not")(C++14)  
[bit_xor](bit_xor.html "cpp/utility/functional/bit xor")  
  
| [equal_to](equal_to.html "cpp/utility/functional/equal to")  
---  
  
  
  
  
  
  
  


Defined in header `[<functional>](../../header/functional.html "cpp/header/functional")` |  |   
---|---|---  
class bad_function_call; |  |   
| |   
  
`std::bad_function_call` is the type of the exception thrown by [`std::function::operator()`](function/operator\(\).html "cpp/utility/functional/function/operator\(\)") if the function wrapper has no target. 

![std-bad function call-inheritance.svg](https://upload.cppreference.com/mwiki/images/1/15/std-bad_function_call-inheritance.svg)

Inheritance diagram

## Contents

  * [1 Member functions](bad_function_call.html#Member_functions)
  * [2 std::bad_function_call::bad_function_call](bad_function_call.html#std::bad_function_call::bad_function_call)
    * [2.1 Parameters](bad_function_call.html#Parameters)
  * [3 std::bad_function_call::operator=](bad_function_call.html#std::bad_function_call::operator.3D)
    * [3.1 Parameters](bad_function_call.html#Parameters_2)
    * [3.2 Return value](bad_function_call.html#Return_value)
  * [4 std::bad_function_call::what](bad_function_call.html#std::bad_function_call::what)
    * [4.1 Return value](bad_function_call.html#Return_value_2)
    * [4.2 Notes](bad_function_call.html#Notes)
  * [5 Inherited from std::exception](bad_function_call.html#Inherited_from_std::exception)
    * [5.1 Member functions](bad_function_call.html#Member_functions_2)
    * [5.2 Example](bad_function_call.html#Example)
    * [5.3 Defect reports](bad_function_call.html#Defect_reports)
    * [5.4 See also](bad_function_call.html#See_also)

  
---  
  
### Member functions

(constructor) |  constructs a new `bad_function_call` object   
(public member function)  
---|---  
operator= |  replaces the `bad_function_call` object   
(public member function)  
what |  returns the explanatory string   
(public member function)  
  
##  std::bad_function_call::bad_function_call

bad_function_call() noexcept; |  (1) | (since C++11)  
---|---|---  
bad_function_call( const bad_function_call& other ) noexcept; |  (2) | (since C++11)  
| |   
  
Constructs a new `bad_function_call` object with an implementation-defined null-terminated byte string which is accessible through [`what()`](../../error/exception/what.html "cpp/error/exception/what"). 

1) Default constructor.

2) Copy constructor. If *this and other both have dynamic type `std::bad_function_call` then [std::strcmp](../../string/byte/strcmp.html)(what(), other.what()) == 0.

###  Parameters

other  |  \-  |  another exception object to copy   
---|---|---  
  
##  std::bad_function_call::operator=

bad_function_call& operator=( const bad_function_call& other ) noexcept; |  | (since C++11)  
---|---|---  
| |   
  
Assigns the contents with those of other. If *this and other both have dynamic type `std::bad_function_call` then [std::strcmp](../../string/byte/strcmp.html)(what(), other.what()) == 0 after assignment. 

###  Parameters

other  |  \-  |  another exception object to assign with   
---|---|---  
  
###  Return value

*this

##  std::bad_function_call::what

virtual const char* what() const noexcept; |  | (since C++11)  
---|---|---  
| |   
  
Returns the explanatory string. 

###  Return value

Pointer to an implementation-defined null-terminated string with explanatory information. The string is suitable for conversion and display as a [std::wstring](../../string/basic_string.html "cpp/string/basic string"). The pointer is guaranteed to be valid at least until the exception object from which it is obtained is destroyed, or until a non-const member function (e.g. copy assignment operator) on the exception object is called. 

###  Notes

Implementations are allowed but not required to override `what()`. 

##  Inherited from [std::exception](../../error/exception.html "cpp/error/exception")

###  Member functions

[ (destructor)](../../error/exception/~exception.html "cpp/error/exception/~exception")[virtual] |  destroys the exception object   
(virtual public member function of `std::exception`)   
---|---  
[ what](../../error/exception/what.html "cpp/error/exception/what")[virtual] |  returns an explanatory string   
(virtual public member function of `std::exception`)   
  
### Example

Run this code
    
    
    #include <functional>
    #include <iostream>
     
    int main()
    {
        [std::function](function.html)<int()> f = nullptr;
        try
        {
            f();
        }
        catch (const std::bad_function_call& e)
        {
            [std::cout](../../io/cout.html) << e.what() << '\n';
        }
    }

Possible output: 
    
    
    bad function call

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 2233](https://cplusplus.github.io/LWG/issue2233) | C++11  | `what()` always returned the same explanatory  
string as [`std::exception::what()`](../../error/exception/what.html "cpp/error/exception/what") | returns its own  
explanatory string   
  
### See also

[ function](function.html "cpp/utility/functional/function")(C++11) |  copyable wrapper of any copy constructible callable object   
(class template)   
---|---
