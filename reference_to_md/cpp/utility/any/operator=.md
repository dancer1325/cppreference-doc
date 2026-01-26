 
  


  
  
  
  
  
  
  
  
  
  
  
  


[`std::any`](../any.html "cpp/utility/any")

[Member functions](../any.html#Member_functions "cpp/utility/any")  
---  
[any::any](any.html "cpp/utility/any/any")  
[any::~any](~any.html "cpp/utility/any/~any")  
**any::operator=**  
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
[bad_any_cast](bad_any_cast.html "cpp/utility/any/bad any cast")  
  


any& operator=( const any& rhs ); |  (1)  |  (since C++17)  
---|---|---  
any& operator=( any&& rhs ) noexcept; |  (2)  |  (since C++17)  
template< typename ValueType >  
any& operator=( ValueType&& rhs ); |  (3)  |  (since C++17)  
| |   
  
Assigns contents to the contained value. 

1) Assigns by copying the state of rhs, as if by [std::any](../any.html)(rhs).swap(*this).

2) Assigns by moving the state of rhs, as if by [std::any](../any.html)(std::move(rhs)).swap(*this). rhs is left in a valid but unspecified state after the assignment.

3) Assigns the type and value of rhs, as if by [std::any](../any.html)([std::forward](../forward.html)<ValueType>(rhs)).swap(*this). This overload participates in overload resolution only if [std::decay_t](../../types/decay.html)<ValueType> is not the same type as [std::any](../any.html "cpp/utility/any") and [std::is_copy_constructible_v](../../types/is_copy_constructible.html)<[std::decay_t](../../types/decay.html)<ValueType>> is true.

## Contents

  * [1 Template parameters](operator=.html#Template_parameters)
  * [2 Parameters](operator=.html#Parameters)
  * [3 Return value](operator=.html#Return_value)
  * [4 Exceptions](operator=.html#Exceptions)
  * [5 Example](operator=.html#Example)
  * [6 See also](operator=.html#See_also)

  
---  
  
### Template parameters

ValueType  |  \-  |  contained value type   
---|---|---  
Type requirements   
-`[std::decay_t](../../types/decay.html)<ValueType>` must meet the requirements of [CopyConstructible](../../named_req/CopyConstructible.html "cpp/named req/CopyConstructible").   
  
### Parameters

rhs  |  \-  |  object whose contained value to assign   
---|---|---  
  
### Return value

*this

### Exceptions

1,3) Throws [std::bad_alloc](../../memory/new/bad_alloc.html "cpp/memory/new/bad alloc") or any exception thrown by the constructor of the contained type. If an exception is thrown for any reason, these functions have no effect ([strong exception safety guarantee](../../language/exceptions.html#Exception_safety "cpp/language/exceptions")).

### Example

Run this code
    
    
    #include <any>
    #include <cassert>
    #include <iomanip>
    #include <iostream>
    #include <string>
    #include <typeinfo>
     
    int main()
    {
        using namespace std::string_literals;
        [std::string](../../string/basic_string.html) cat{"cat"};
     
        [std::any](../any.html) a1{42};
        [std::any](../any.html) a2{cat};
        [assert](../../error/assert.html)(a1.type() == typeid(int));
        [assert](../../error/assert.html)(a2.type() == typeid([std::string](../../string/basic_string.html)));
     
        a1 = a2; // overload (1)
        [assert](../../error/assert.html)(a1.type() == typeid([std::string](../../string/basic_string.html)));
        [assert](../../error/assert.html)(a2.type() == typeid([std::string](../../string/basic_string.html)));
        [assert](../../error/assert.html)([std::any_cast](any_cast.html)<[std::string](../../string/basic_string.html)&>(a1) == cat);
        [assert](../../error/assert.html)([std::any_cast](any_cast.html)<[std::string](../../string/basic_string.html)&>(a2) == cat);
     
        a1 = 96; // overload (3)
        a2 = "dog"s; // overload (3)
        a1 = std::move(a2); // overload (2)
        [assert](../../error/assert.html)(a1.type() == typeid([std::string](../../string/basic_string.html)));
        [assert](../../error/assert.html)([std::any_cast](any_cast.html)<[std::string](../../string/basic_string.html)&>(a1) == "dog");
        // The state of a2 is valid but unspecified. In fact,
        // it is void in gcc/clang and std::string in msvc.
        [std::cout](../../io/cout.html) << "a2.type(): " << [std::quoted](../../io/manip/quoted.html)(a2.type().name()) << '\n';
     
        a1 = std::move(cat); // overload (3)
        [assert](../../error/assert.html)(*[std::any_cast](any_cast.html)<[std::string](../../string/basic_string.html)>(&a1) == "cat");
        // The state of cat is valid but indeterminate:
        [std::cout](../../io/cout.html) << "cat: " << [std::quoted](../../io/manip/quoted.html)(cat) << '\n';
    }

Possible output: 
    
    
    a2.type(): "void"
    cat: ""

### See also

[ (constructor)](any.html "cpp/utility/any/any") |  constructs an `any` object   
(public member function)   
---|---
