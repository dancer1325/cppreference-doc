 
  


  
  
  
  
  
  
  
  
  
  
  
  


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
**any::type**  
[Non-member functions](../any.html#Non-member_functions "cpp/utility/any")  
[swap(std::any)](swap2.html "cpp/utility/any/swap2")  
[any_cast](any_cast.html "cpp/utility/any/any cast")  
[make_any](make_any.html "cpp/utility/any/make any")  
[Helper classes](../any.html#Helper_classes "cpp/utility/any")  
[bad_any_cast](bad_any_cast.html "cpp/utility/any/bad any cast")  
  


const [std::type_info](../../types/type_info.html)& type() const noexcept; |  |  (since C++17)  
---|---|---  
| |   
  
Queries the contained type. 

### Return value

The typeid of the contained value if instance is non-empty, otherwise typeid(void). 

### Example

The example demonstrates `std::any` visitor idiom with ability to register new visitors at compile- and run-time.

Run this code
    
    
    #include <any>
    #include <functional>
    #include <iomanip>
    #include <iostream>
    #include <type_traits>
    #include <typeindex>
    #include <typeinfo>
    #include <unordered_map>
    #include <vector>
     
    template<class T, class F>
    inline [std::pair](../pair.html)<const [std::type_index](../../types/type_index.html), [std::function](../functional/function.html)<void(const [std::any](../any.html)&)>>
        to_any_visitor(const F& f)
    {
        return
        {
            [std::type_index](../../types/type_index.html)(typeid(T)),
            [g = f]([std::any](../any.html) const& a)
            {
                if constexpr ([std::is_void_v](../../types/is_void.html)<T>)
                    g();
                else
                    g([std::any_cast](any_cast.html)<T const&>(a));
            }
        };
    }
     
    static [std::unordered_map](../../container/unordered_map.html)<[std::type_index](../../types/type_index.html), [std::function](../functional/function.html)<void(const [std::any](../any.html)&)>>
        any_visitor
    {
        to_any_visitor<void>([] { [std::cout](../../io/cout.html) << "{}"; }),
        to_any_visitor<int>([](int x) { [std::cout](../../io/cout.html) << x; }),
        to_any_visitor<unsigned>([](unsigned x) { [std::cout](../../io/cout.html) << x; }),
        to_any_visitor<float>([](float x) { [std::cout](../../io/cout.html) << x; }),
        to_any_visitor<double>([](double x) { [std::cout](../../io/cout.html) << x; }),
        to_any_visitor<char const*>([](char const* s)
            { [std::cout](../../io/cout.html) << [std::quoted](../../io/manip/quoted.html)(s); }),
        // ... add more handlers for your types ...
    };
     
    inline void process(const [std::any](../any.html)& a)
    {
        if (const auto it = any_visitor.find([std::type_index](../../types/type_index.html)(a.type()));
            it != any_visitor.cend())
            it->second(a);
        else
            [std::cout](../../io/cout.html) << "Unregistered type " << [std::quoted](../../io/manip/quoted.html)(a.type().name());
    }
     
    template<class T, class F>
    inline void register_any_visitor(const F& f)
    {
        [std::cout](../../io/cout.html) << "Register visitor for type "
                  << [std::quoted](../../io/manip/quoted.html)(typeid(T).name()) << '\n';
        any_visitor.insert(to_any_visitor<T>(f));
    }
     
    int main()
    {
        [std::vector](../../container/vector.html)<[std::any](../any.html)> va{{}, 42, 123u, 3.14159f, 2.71828, "C++17"};
     
        for (int n{}; const [std::any](../any.html)& a : va)
        {
            [std::cout](../../io/cout.html) << (n++ ? ", " : "[");
            process(a);
        }
        [std::cout](../../io/cout.html) << "]\n";
     
        process([std::any](../any.html)(0xFULL)); //< Unregistered type "y" (unsigned long long)
        [std::cout](../../io/cout.html) << '\n';
     
        register_any_visitor<unsigned long long>([](auto x)
        {
            [std::cout](../../io/cout.html) << [std::hex](../../io/manip/hex.html) << [std::showbase](../../io/manip/showbase.html) << x; 
        });
     
        process([std::any](../any.html)(0xFULL)); //< OK: 0xf
        [std::cout](../../io/cout.html) << '\n';
    }

Possible output: 
    
    
    [{}, 42, 123, 3.14159, 2.71828, "C++17"]
    Unregistered type "y"
    Register visitor for type "y"
    0xf

### See also

[ type_index](../../types/type_index.html "cpp/types/type index")(C++11) |  wrapper around a `type_info` object, that can be used as index in associative and unordered associative containers   
(class)   
---|---
