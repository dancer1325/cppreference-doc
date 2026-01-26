 
  


  
  
  
  
  
  
  
  
  
  
  
  


[`std::variant`](../variant.html "cpp/utility/variant")

[Member functions](../variant.html#Member_functions "cpp/utility/variant")  
---  
**variant::variant**  
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
[bad_variant_access](bad_variant_access.html "cpp/utility/variant/bad variant access")  
[variant_size](variant_size.html "cpp/utility/variant/variant size")  
[variant_alternative](variant_alternative.html "cpp/utility/variant/variant alternative")  
[hash<std::variant>](hash.html "cpp/utility/variant/hash")  
[Helper objects](../variant.html#Helper_objects "cpp/utility/variant")  
[variant_npos](variant_npos.html "cpp/utility/variant/variant npos")  
  


constexpr variant() noexcept(/* see below */); |  (1)  |  (since C++17)  
---|---|---  
constexpr variant( const variant& other ); |  (2)  |  (since C++17)  
constexpr variant( variant&& other ) noexcept(/* see below */); |  (3)  |  (since C++17)  
template< class T >  
constexpr variant( T&& t ) noexcept(/* see below */); |  (4)  |  (since C++17)  
template< class T,  
class... Args >  
constexpr explicit variant( [std::in_place_type_t](../in_place.html)<T>,  
Args&&... args ); |  (5)  |  (since C++17)  
template< class T,  
class U,  
class... Args >  
constexpr explicit variant( [std::in_place_type_t](../in_place.html)<T>,  
[std::initializer_list](../initializer_list.html)<U> il,  
Args&&... args ); |  (6)  |  (since C++17)  
template< [std::size_t](../../types/size_t.html) I,  
class... Args >  
constexpr explicit variant( [std::in_place_index_t](../in_place.html)<I>,  
Args&&... args ); |  (7)  |  (since C++17)  
template< [std::size_t](../../types/size_t.html) I,  
class U,  
class... Args >  
constexpr explicit variant( [std::in_place_index_t](../in_place.html)<I>,  
[std::initializer_list](../initializer_list.html)<U> il,  
Args&&... args ); |  (8)  |  (since C++17)  
| |   
  
Constructs a new `variant` object. 

1) Default constructor. Constructs a `variant` holding the [value-initialized](../../language/value_initialization.html "cpp/language/value initialization") value of the first alternative ([index()](index.html "cpp/utility/variant/index") is zero). 

  * This constructor is constexpr if and only if the value initialization of the alternative type `T_0` would satisfy the requirements for a [constexpr function](../../language/constexpr.html "cpp/language/constexpr"). 
  * This overload participates in overload resolution only if [std::is_default_constructible_v](../../types/is_default_constructible.html)<T_0> is true.



2) Copy constructor. If other is not [valueless_by_exception](valueless_by_exception.html "cpp/utility/variant/valueless by exception"), constructs a `variant` holding the same alternative as other and [direct-initializes](../../language/direct_initialization.html "cpp/language/direct initialization") the contained value with *[std::get_if](get_if.html)<other.index()>([std::addressof](../../memory/addressof.html)(other)). Otherwise, initializes a [valueless_by_exception](valueless_by_exception.html "cpp/utility/variant/valueless by exception") variant. 

  * This constructor is defined as deleted unless [std::is_copy_constructible_v](../../types/is_copy_constructible.html)<T_i> is true for all `T_i` in Types.... 
  * It is trivial if [std::is_trivially_copy_constructible_v](../../types/is_copy_constructible.html)<T_i> is true for all `T_i` in Types....



3) Move constructor. If other is not [valueless_by_exception](valueless_by_exception.html "cpp/utility/variant/valueless by exception"), constructs a `variant` holding the same alternative as other and [direct-initializes](../../language/direct_initialization.html "cpp/language/direct initialization") the contained value with std::move(*[std::get_if](get_if.html)<other.index()>([std::addressof](../../memory/addressof.html)(other))). Otherwise, initializes a [valueless_by_exception](valueless_by_exception.html "cpp/utility/variant/valueless by exception") variant. 

  * This overload participates in overload resolution only if [std::is_move_constructible_v](../../types/is_move_constructible.html)<T_i> is true for all `T_i` in Types.... 
  * It is trivial if [std::is_trivially_move_constructible_v](../../types/is_move_constructible.html)<T_i> is true for all `T_i` in Types....



4) Converting constructor. Constructs a `variant` holding the alternative type `T_j` that would be selected by overload resolution for the expression F([std::forward](../forward.html)<T>(t)) if there was an overload of imaginary function `F(T_i)` for each `T_i` in Types..., except that narrowing conversions aren't considered. 

Formally: 

    

  * An overload F(T_i) is only considered if the declaration T_i x[] = { [std::forward](../forward.html)<T>(t) }; is valid for some invented variable `x`.



[Direct-initializes](../../language/direct_initialization.html "cpp/language/direct initialization") the contained value as if by direct non-list-initialization from [std::forward](../forward.html)<T>(t). 

  * This overload participates in overload resolution only if 
    * sizeof...(Types) > 0, 
    * [std::decay_t](../../types/decay.html)<T>(until C++20)[std::remove_cvref_t](../../types/remove_cvref.html)<T>(since C++20) is neither the same type as `variant`, nor a specialization of [std::in_place_type_t](../in_place.html "cpp/utility/in place"), nor a specialization of [std::in_place_index_t](../in_place.html "cpp/utility/in place"), 
    * [std::is_constructible_v](../../types/is_constructible.html)<T_j, T> is true, 
    * and the expression F([std::forward](../forward.html)<T>(t)) (with F being the above-mentioned set of imaginary functions) is well formed. 
  * This constructor is a constexpr constructor if `T_j`'s selected constructor is a constexpr constructor. 


    
    
    [std::variant](../variant.html)<[std::string](../../string/basic_string.html)> v("abc"); // OK
    [std::variant](../variant.html)<[std::string](../../string/basic_string.html), [std::string](../../string/basic_string.html)> w("abc"); // ill-formed
    [std::variant](../variant.html)<[std::string](../../string/basic_string.html), const char*> x("abc"); // OK, chooses const char*
    [std::variant](../variant.html)<[std::string](../../string/basic_string.html), bool> y("abc"); // OK, chooses string; bool is not a candidate
    [std::variant](../variant.html)<float, long, double> z = 0; // OK, holds long
                                             // float and double are not candidates

5) Constructs a `variant` with the specified alternative `T` and initializes the contained value with the arguments [std::forward](../forward.html)<Args>(args).... 

  * If `T`'s selected constructor is a constexpr constructor, this constructor is also a constexpr constructor. 
  * This overload participates in overload resolution only if there is exactly one occurrence of `T` in Types... and [std::is_constructible_v](../../types/is_constructible.html)<T, Args...> is true.



6) Constructs a `variant` with the specified alternative `T` and initializes the contained value with the arguments il, [std::forward](../forward.html)<Args>(args).... 

  * If `T`'s selected constructor is a constexpr constructor, this constructor is also a constexpr constructor. 
  * This overload participates in overload resolution only if there is exactly one occurrence of `T` in Types... and [std::is_constructible_v](../../types/is_constructible.html)<T, initializer_list<U>&, Args...> is true.



7) Constructs a `variant` with the alternative `T_i` specified by the index `I` and initializes the contained value with the arguments [std::forward](../forward.html)<Args>(args).... 

  * If `T_i`'s selected constructor is a constexpr constructor, this constructor is also a constexpr constructor. 
  * This overload participates in overload resolution only if I < sizeof...(Types) and [std::is_constructible_v](../../types/is_constructible.html)<T_i, Args...> is true.



8) Constructs a `variant` with the alternative `T_i` specified by the index `I` and initializes the contained value with the arguments il, [std::forward](../forward.html)<Args>(args).... 

  * If `T_i`'s selected constructor is a constexpr constructor, this constructor is also a constexpr constructor. 
  * This overload participates in overload resolution only if I < sizeof...(Types) and [std::is_constructible_v](../../types/is_constructible.html)<T_i, [std::initializer_list](../initializer_list.html)<U>&, Args...> is true.



## Contents

  * [1 Parameters](variant.html#Parameters)
  * [2 Exceptions](variant.html#Exceptions)
  * [3 Notes](variant.html#Notes)
  * [4 Example](variant.html#Example)
  * [5 Defect reports](variant.html#Defect_reports)

  
---  
  
### Parameters

other  |  \-  |  another `variant` object whose contained value to copy/move   
---|---|---  
t  |  \-  |  value to initialize the contained value with   
args...  |  \-  |  arguments to initialize the contained value with   
il  |  \-  |  initializer list to initialize the contained value with   
  
### Exceptions

1) May throw any exception thrown by the value initialization of the first alternative. 

[`noexcept`](../../language/noexcept_spec.html "cpp/language/noexcept spec") specification: 

noexcept([std::is_nothrow_default_constructible_v](../../types/is_default_constructible.html)<T_0>)

2) May throw any exception thrown by direct-initializing any `T_i` in Types....

3) May throw any exception thrown by move-constructing any `T_i` in Types.... 

[`noexcept`](../../language/noexcept_spec.html "cpp/language/noexcept spec") specification: 

noexcept(([std::is_nothrow_move_constructible_v](../../types/is_move_constructible.html)<Types> && ...))

4) May throw any exception thrown by the initialization of the selected alternative `T_j`. 

[`noexcept`](../../language/noexcept_spec.html "cpp/language/noexcept spec") specification: 

noexcept([std::is_nothrow_constructible_v](../../types/is_constructible.html)<T_j, T>)

5-8) May throw any exception thrown by calling the selected constructor of the selected alternative.

### Notes

MSVC STL initially treated [P0608R3](https://wg21.link/P0608R3) as a change in C++20. As of VS 2022 17.12, MSVC STL also treats P0608R3 as a defect report against C++17. 

### Example

Run this code
    
    
    #include <cassert>
    #include <iostream>
    #include <string>
    #include <variant>
    #include <vector>
     
    using vector_t = [std::vector](../../container/vector.html)<int>;
     
    auto& operator<<(auto& out, const vector_t& v)
    {
        out << "{ ";
        for (int e : v)
            out << e << ' ';
        return out << '}';
    }
     
    int main()
    {
        // value-initializes first alternative
        [std::variant](../variant.html)<int, [std::string](../../string/basic_string.html)> var0;
        [assert](../../error/assert.html)([std::holds_alternative](holds_alternative.html)<int>(var0) and
               var0.index() == 0 and
               std::get<int>(var0) == 0);
     
        // initializes first alternative with std::string{"STR"};
        [std::variant](../variant.html)<[std::string](../../string/basic_string.html), int> var1{"STR"};
        [assert](../../error/assert.html)(var1.index() == 0);
        [std::cout](../../io/cout.html) << "1) " << std::get<[std::string](../../string/basic_string.html)>(var1) << '\n';
     
        // initializes second alternative with int == 42;
        [std::variant](../variant.html)<[std::string](../../string/basic_string.html), int> var2{42};
        [assert](../../error/assert.html)([std::holds_alternative](holds_alternative.html)<int>(var2));
        [std::cout](../../io/cout.html) << "2) " << std::get<int>(var2) << '\n';
     
        // initializes first alternative with std::string{4, 'A'};
        [std::variant](../variant.html)<[std::string](../../string/basic_string.html), vector_t, float> var3
        {
            [std::in_place_type](../in_place.html)<[std::string](../../string/basic_string.html)>, 4, 'A'
        };
        [assert](../../error/assert.html)(var3.index() == 0);
        [std::cout](../../io/cout.html) << "3) " << std::get<[std::string](../../string/basic_string.html)>(var3) << '\n';
     
        // initializes second alternative with std::vector{1,2,3,4,5};
        [std::variant](../variant.html)<[std::string](../../string/basic_string.html), vector_t, char> var4
        {
            [std::in_place_type](../in_place.html)<vector_t>, {1, 2, 3, 4, 5}
        };
        [assert](../../error/assert.html)(var4.index() == 1);
        [std::cout](../../io/cout.html) << "4) " << std::get<vector_t>(var4) << '\n';
     
        // initializes first alternative with std::string{"ABCDE", 3};
        [std::variant](../variant.html)<[std::string](../../string/basic_string.html), vector_t, bool> var5 {[std::in_place_index](../in_place.html)<0>, "ABCDE", 3};
        [assert](../../error/assert.html)(var5.index() == 0);
        [std::cout](../../io/cout.html) << "5) " << std::get<[std::string](../../string/basic_string.html)>(var5) << '\n';
     
        // initializes second alternative with std::vector(4, 42);
        [std::variant](../variant.html)<[std::string](../../string/basic_string.html), vector_t, char> var6 {[std::in_place_index](../in_place.html)<1>, 4, 42};
        [assert](../../error/assert.html)([std::holds_alternative](holds_alternative.html)<vector_t>(var6));
        [std::cout](../../io/cout.html) << "6) " << std::get<vector_t>(var6) << '\n';
    }

Output: 
    
    
    1) STR
    2) 42
    3) AAAA
    4) { 1 2 3 4 5 }
    5) ABC
    6) { 42 42 42 42 }

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 2901](https://cplusplus.github.io/LWG/issue2901) | C++17  | allocator-aware constructors provided but  
`variant` can't properly support allocators  | constructors removed   
[P0739R0](https://wg21.link/P0739R0) | C++17  | converting constructor template interacts  
poorly with class template argument deduction  | constraint added   
[LWG 3024](https://cplusplus.github.io/LWG/issue3024) | C++17  | copy constructor doesn't participate in  
overload resolution if any member type is not copyable  | defined as deleted instead   
[P0602R4](https://wg21.link/P0602R4) | C++17  | copy/move constructors may not be  
trivial even if underlying constructors are trivial  | required to propagate triviality   
[P0608R3](https://wg21.link/P0608R3) | C++17  | converting constructor blindly assembles  
an overload set, leading to unintended conversions  | narrowing and boolean conversions not considered   
[P1957R2](https://wg21.link/P1957R2) | C++17  | converting constructor for bool did not allow  
implicit conversion  | Pointer to bool conversion is narrowing and  
converting constructor has no  
exception for bool
