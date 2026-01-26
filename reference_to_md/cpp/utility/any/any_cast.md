 
  


  
  
  
  
  
  
  
  
  
  
  
  


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
**any_cast**  
[make_any](make_any.html "cpp/utility/any/make any")  
[Helper classes](../any.html#Helper_classes "cpp/utility/any")  
[bad_any_cast](bad_any_cast.html "cpp/utility/any/bad any cast")  
  


Defined in header `[<any>](../../header/any.html "cpp/header/any")` |  |   
---|---|---  
template< class T >  
T any_cast( const any& operand ); |  (1)  |  (since C++17)  
template< class T >  
T any_cast( any& operand ); |  (2)  |  (since C++17)  
template< class T >  
T any_cast( any&& operand ); |  (3)  |  (since C++17)  
template< class T >  
const T* any_cast( const any* operand ) noexcept; |  (4) | (since C++17)  
template< class T >  
T* any_cast( any* operand ) noexcept; |  (5)  |  (since C++17)  
| |   
  
Performs type-safe access to the contained object. 

Let `U` be [std::remove_cv_t](../../types/remove_cv.html)<[std::remove_reference_t](../../types/remove_reference.html)<T>>. 

1) The program is ill-formed if [std::is_constructible_v](../../types/is_constructible.html)<T, const U&> is false.

2) The program is ill-formed if [std::is_constructible_v](../../types/is_constructible.html)<T, U&> is false.

3) The program is ill-formed if [std::is_constructible_v](../../types/is_constructible.html)<T, U> is false.

4,5) The program is ill-formed if [std::is_void_v](../../types/is_void.html)<T> is true.

## Contents

  * [1 Parameters](any_cast.html#Parameters)
  * [2 Return value](any_cast.html#Return_value)
  * [3 Exceptions](any_cast.html#Exceptions)
  * [4 Example](any_cast.html#Example)
  * [5 Defect reports](any_cast.html#Defect_reports)

  
---  
  
### Parameters

operand  |  \-  |  target `any` object   
---|---|---  
  
### Return value

1,2) Returns static_cast<T>(*std::any_cast<U>(&operand)).

3) Returns static_cast<T>(std::move(*std::any_cast<U>(&operand))).

4,5) If operand is not a null pointer, and the [`typeid`](../../language/typeid.html "cpp/language/typeid") of the requested `T` matches that of the contents of operand, a pointer to the value contained by operand, otherwise a null pointer.

### Exceptions

1-3) Throws [std::bad_any_cast](bad_any_cast.html "cpp/utility/any/bad any cast") if the [`typeid`](../../language/typeid.html "cpp/language/typeid") of the requested `T` does not match that of the contents of operand.

### Example

Run this code
    
    
    #include <any>
    #include <iostream>
    #include <string>
    #include <type_traits>
    #include <utility>
     
    int main()
    {
        // Simple example
        auto a1 = [std::any](../any.html)(12);
        [std::cout](../../io/cout.html) << "1) a1 is int: " << std::any_cast<int>(a1) << '\n';
     
        try
        {
            auto s = std::any_cast<[std::string](../../string/basic_string.html)>(a1); // throws
        }
        catch (const [std::bad_any_cast](bad_any_cast.html)& e)
        {
            [std::cout](../../io/cout.html) << "2) " << e.what() << '\n';
        }
     
        // Pointer example
        if (int* i = std::any_cast<int>(&a1))
            [std::cout](../../io/cout.html) << "3) a1 is int: " << *i << '\n';
        else if ([std::string](../../string/basic_string.html)* s = std::any_cast<[std::string](../../string/basic_string.html)>(&a1))
            [std::cout](../../io/cout.html) << "3) a1 is std::string: " << *s << '\n';
        else
            [std::cout](../../io/cout.html) << "3) a1 is another type or unset\n";
     
        // Advanced example
        a1 = [std::string](../../string/basic_string.html)("hello");
        auto& ra = std::any_cast<[std::string](../../string/basic_string.html)&>(a1); // reference
        ra[1] = 'o';
     
        [std::cout](../../io/cout.html) << "4) a1 is string: "
                  << std::any_cast<const [std::string](../../string/basic_string.html)&>(a1) << '\n'; // const reference
     
        auto s1 = std::any_cast<[std::string](../../string/basic_string.html)&&>(std::move(a1)); // rvalue reference
        // Note: “s1” is a move-constructed std::string:
        static_assert([std::is_same_v](../../types/is_same.html)<decltype(s1), [std::string](../../string/basic_string.html)>);
     
        // Note: the std::string in “a1” is left in valid but unspecified state
        [std::cout](../../io/cout.html) << "5) a1.size(): "
                  << std::any_cast<[std::string](../../string/basic_string.html)>(&a1)->size() // pointer
                  << '\n'
                  << "6) s1: " << s1 << '\n';
    }

Possible output: 
    
    
    1) a1 is int: 12
    2) bad any_cast
    3) a1 is int: 12
    4) a1 is string: hollo
    5) a1.size(): 0
    6) s1: hollo

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 3305](https://cplusplus.github.io/LWG/issue3305) | C++17  | the behavior of overloads ([4,5](any_cast.html#Version_4)) was unclear if `T` is void | the program ill-formed in this case 
