 
  


  
  
  
  
  
  
  
  
  
  
  
  


[`std::any`](../any.html "cpp/utility/any")

[Member functions](../any.html#Member_functions "cpp/utility/any")  
---  
[any::any](any.html "cpp/utility/any/any")  
[any::~any](~any.html "cpp/utility/any/~any")  
[any::operator=](operator=.html "cpp/utility/any/operator=")  
[Modifiers](../any.html#Modifiers "cpp/utility/any")  
**any::emplace**  
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
  


template< class ValueType, class... Args >  
[std::decay_t](../../types/decay.html)<ValueType>& emplace( Args&&... args ); |  (1)  |  (since C++17)  
---|---|---  
template< class ValueType, class U, class... Args >  
[std::decay_t](../../types/decay.html)<ValueType>& emplace( [std::initializer_list](../initializer_list.html)<U> il, Args&&... args ); |  (2)  |  (since C++17)  
| |   
  
Changes the contained object to one of type [std::decay_t](../../types/decay.html)<ValueType> constructed from the arguments. 

First destroys the current contained object (if any) by [reset()](reset.html "cpp/utility/any/reset"), then: 

1) constructs an object of type [std::decay_t](../../types/decay.html)<ValueType>, [direct-non-list-initialized](../../language/direct_initialization.html "cpp/language/direct initialization") from [std::forward](../forward.html)<Args>(args)..., as the contained object. 

  * This overload participates in overload resolution only if [std::is_constructible_v](../../types/is_constructible.html)<[std::decay_t](../../types/decay.html)<ValueType>, Args...> and [std::is_copy_constructible_v](../../types/is_copy_constructible.html)<[std::decay_t](../../types/decay.html)<ValueType>> are both true.



2) constructs an object of type [std::decay_t](../../types/decay.html)<ValueType>, [direct-non-list-initialized](../../language/direct_initialization.html "cpp/language/direct initialization") from il, [std::forward](../forward.html)<Args>(args)..., as the contained object. 

  * This overload participates in overload resolution only if [std::is_constructible_v](../../types/is_constructible.html)<[std::decay_t](../../types/decay.html)<ValueType>, [std::initializer_list](../initializer_list.html)<U>&, Args...> and [std::is_copy_constructible_v](../../types/is_copy_constructible.html)<[std::decay_t](../../types/decay.html)<ValueType>> are both true. 



## Contents

  * [1 Template parameters](emplace.html#Template_parameters)
  * [2 Return value](emplace.html#Return_value)
  * [3 Exceptions](emplace.html#Exceptions)
  * [4 Example](emplace.html#Example)
  * [5 See also](emplace.html#See_also)

  
---  
  
### Template parameters

ValueType  |  \-  |  contained value type   
---|---|---  
Type requirements   
-`std::decay_t<ValueType>` must meet the requirements of [CopyConstructible](../../named_req/CopyConstructible.html "cpp/named req/CopyConstructible").   
  
### Return value

A reference to the new contained object. 

### Exceptions

Throws any exception thrown by `T`'s constructor. If an exception is thrown, the previously contained object (if any) has been destroyed, and *this does not contain a value. 

### Example

Run this code
    
    
    #include <algorithm>
    #include <any>
    #include <iostream>
    #include <string>
    #include <vector>
     
    class Star
    {
        [std::string](../../string/basic_string.html) name;
        int id;
     
    public:
        Star([std::string](../../string/basic_string.html) name, int id) : name{name}, id{id}
        {
            [std::cout](../../io/cout.html) << "Star::Star(string, int)\n";
        }
     
        void print() const
        {
            [std::cout](../../io/cout.html) << "Star{\"" << name << "\" : " << id << "};\n";
        }
    };
     
    int main()
    {
        [std::any](../any.html) celestial;
        // (1) emplace(Args&&... args);
        celestial.emplace<Star>("Procyon", 2943);
        const auto* star = [std::any_cast](any_cast.html)<Star>(&celestial);
        star->print();
     
        [std::any](../any.html) av;
        // (2) emplace(std::initializer_list<U> il, Args&&... args);
        av.emplace<[std::vector](../../container/vector.html)<char>>({'C', '+', '+', '1', '7'} /* no args */);
        [std::cout](../../io/cout.html) << av.type().name() << '\n';
        const auto* va = [std::any_cast](any_cast.html)<[std::vector](../../container/vector.html)<char>>(&av);
        [std::for_each](../../algorithm/for_each.html)(va->cbegin(), va->cend(), [](char const& c) { [std::cout](../../io/cout.html) << c; });
        [std::cout](../../io/cout.html) << '\n';
    }

Possible output: 
    
    
    Star::Star(string, int)
    Star{"Procyon" : 2943};
    St6vectorIcSaIcEE
    C++17

### See also

[ (constructor)](any.html "cpp/utility/any/any") |  constructs an `any` object   
(public member function)   
---|---  
[ reset](reset.html "cpp/utility/any/reset") |  destroys contained object   
(public member function) 
