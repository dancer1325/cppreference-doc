 
  


  
  
  
  
  
  
  
  
  
  
  
  


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
**make_any**  
[Helper classes](../any.html#Helper_classes "cpp/utility/any")  
[bad_any_cast](bad_any_cast.html "cpp/utility/any/bad any cast")  
  


Defined in header `[<any>](../../header/any.html "cpp/header/any")` |  |   
---|---|---  
template< class T, class... Args >  
[std::any](../any.html) make_any( Args&&... args ); |  (1)  |  (since C++17)  
template< class T, class U, class... Args >  
[std::any](../any.html) make_any( [std::initializer_list](../initializer_list.html)<U> il, Args&&... args ); |  (2)  |  (since C++17)  
| |   
  
Constructs an `any` object containing an object of type `T`, passing the provided arguments to `T`'s constructor. 

1) Equivalent to return [std::any](../any.html)([std::in_place_type](../in_place.html)<T>, [std::forward](../forward.html)<Args>(args)...);

2) Equivalent to return [std::any](../any.html)([std::in_place_type](../in_place.html)<T>, il, [std::forward](../forward.html)<Args>(args)...);

### Example

Run this code
    
    
    #include <any>
    #include <complex>
    #include <functional>
    #include <iostream>
    #include <string>
     
    int main()
    {
        auto a0 = std::make_any<[std::string](../../string/basic_string.html)>("Hello, std::any!\n");
        auto a1 = std::make_any<[std::complex](../../numeric/complex.html)<double>>(0.1, 2.3);
     
        [std::cout](../../io/cout.html) << [std::any_cast](any_cast.html)<[std::string](../../string/basic_string.html)&>(a0);
        [std::cout](../../io/cout.html) << [std::any_cast](any_cast.html)<[std::complex](../../numeric/complex.html)<double>&>(a1) << '\n';
     
        using lambda = [std::function](../functional/function.html)<void(void)>;
     
        // Put a lambda into std::any. Attempt #1 (failed).
        [std::any](../any.html) a2 = [] { [std::cout](../../io/cout.html) << "Lambda #1.\n"; };
        [std::cout](../../io/cout.html) << "a2.type() = \"" << a2.type().name() << "\"\n";
     
        // any_cast casts to <void(void)> but actual type is not
        // a std::function..., but ~ main::{lambda()#1}, and it is
        // unique for each lambda. So, this throws...
        try
        {
            [std::any_cast](any_cast.html)<lambda>(a2)();
        }
        catch ([std::bad_any_cast](bad_any_cast.html) const& ex)
        {
            [std::cout](../../io/cout.html) << ex.what() << '\n';
        }
     
        // Put a lambda into std::any. Attempt #2 (successful).
        auto a3 = std::make_any<lambda>([] { [std::cout](../../io/cout.html) << "Lambda #2.\n"; });
        [std::cout](../../io/cout.html) << "a3.type() = \"" << a3.type().name() << "\"\n";
        [std::any_cast](any_cast.html)<lambda>(a3)();
    }

Possible output: 
    
    
    Hello, std::any!
    (0.1,2.3)
    a2.type() = "Z4mainEUlvE_"
    bad any_cast
    a3.type() = "St8functionIFvvEE"
    Lambda #2.

### See also

[ (constructor)](any.html "cpp/utility/any/any") |  constructs an `any` object   
(public member function)   
---|---  
[ any_cast](any_cast.html "cpp/utility/any/any cast")(C++17) |  type-safe access to the contained object   
(function template) 
