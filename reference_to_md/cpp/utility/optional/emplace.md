 
  


  
  
  
  
  
  
  
  
  
  
  
  


[`std::optional`](../optional.html "cpp/utility/optional")

[Member functions](../optional.html#Member_functions "cpp/utility/optional")  
---  
[optional::optional](optional.html "cpp/utility/optional/optional")  
[optional::~optional](~optional.html "cpp/utility/optional/~optional")  
[optional::operator=](operator=.html "cpp/utility/optional/operator=")  
[Observers](../optional.html#Observers "cpp/utility/optional")  
[optional::operator->optional::operator*](operator*.html "cpp/utility/optional/operator*")  
[optional::operator booloptional::has_value](operator_bool.html "cpp/utility/optional/operator bool")  
[optional::value](value.html "cpp/utility/optional/value")  
[optional::value_or](value_or.html "cpp/utility/optional/value or")  
[Iterators](../optional.html#Iterators "cpp/utility/optional")  
[optional::begin](begin.html "cpp/utility/optional/begin")(C++26)  
[optional::end](end.html "cpp/utility/optional/end")(C++26)  
[Monadic operations](../optional.html#Monadic_operations "cpp/utility/optional")  
[optional::and_then](and_then.html "cpp/utility/optional/and then")(C++23)  
[optional::transform](transform.html "cpp/utility/optional/transform")(C++23)  
[optional::or_else](or_else.html "cpp/utility/optional/or else")(C++23)  
[Modifiers](../optional.html#Modifiers "cpp/utility/optional")  
**optional::emplace**  
[optional::swap](swap.html "cpp/utility/optional/swap")  
[optional::reset](reset.html "cpp/utility/optional/reset")  
[Non-member functions](../optional.html#Non-member_functions "cpp/utility/optional")  
[operator==operator!=operator<operator<=operator>operator>=operator<=>](operator_cmp.html "cpp/utility/optional/operator cmp")(C++20)  
[make_optional](make_optional.html "cpp/utility/optional/make optional")  
[swap(std::optional)](swap2.html "cpp/utility/optional/swap2")  
[Deduction guides](deduction_guides.html "cpp/utility/optional/deduction guides")  
[Helper classes](../optional.html#Helper_classes "cpp/utility/optional")  
[hash<std::optional>](hash.html "cpp/utility/optional/hash")  
[nullopt_t](nullopt_t.html "cpp/utility/optional/nullopt t")  
[in_place_t](../in_place.html "cpp/utility/in place")  
[bad_optional_access](../bad_optional_access.html "cpp/utility/optional/bad optional access")  
[Helper objects](../optional.html#Helpers "cpp/utility/optional")  
[nullopt](nullopt.html "cpp/utility/optional/nullopt")  
[in_place](../in_place.html "cpp/utility/in place")  
  


template< class... Args >  
T& emplace( Args&&... args ); |  (1) | (since C++17)   
(constexpr since C++20)  
---|---|---  
template< class U, class... Args >  
T& emplace( [std::initializer_list](../initializer_list.html)<U> ilist, Args&&... args ); |  (2) | (since C++17)   
(constexpr since C++20)  
| |   
  
Constructs the contained value in-place. If *this already contains a value before the call, the contained value is destroyed by calling its destructor. 

1) Initializes the contained value by [direct-initializing](../../language/direct_initialization.html "cpp/language/direct initialization") (but not direct-list-initializing) with [std::forward](../forward.html)<Args>(args)... as parameters.

2) Initializes the contained value by calling its constructor with ilist, [std::forward](../forward.html)<Args>(args)... as parameters. This overload participates in overload resolution only if [std::is_constructible](../../types/is_constructible.html)<T, [std::initializer_list](../initializer_list.html)<U>&, Args&&...>::value is true.

## Contents

  * [1 Parameters](emplace.html#Parameters)
  * [2 Return value](emplace.html#Return_value)
  * [3 Exceptions](emplace.html#Exceptions)
  * [4 Example](emplace.html#Example)
  * [5 Defect reports](emplace.html#Defect_reports)
  * [6 See also](emplace.html#See_also)

  
---  
  
### Parameters

args...  |  \-  |  the arguments to pass to the constructor   
---|---|---  
ilist  |  \-  |  the initializer list to pass to the constructor   
Type requirements   
-`T` must be constructible from `Args...` for overload (1)  
-`T` must be constructible from [std::initializer_list](../initializer_list.html "cpp/utility/initializer list") and `Args...` for overload (2)  
  
### Return value

A reference to the new contained value. 

### Exceptions

Any exception thrown by the selected constructor of `T`. If an exception is thrown, *this does not contain a value after this call (the previously contained value, if any, had been destroyed). 

[Feature-test](../feature_test.html "cpp/utility/feature test") macro  | Value | Std | Feature   
---|---|---|---  
[`__cpp_lib_optional`](../../experimental/feature_test.html#cpp_lib_optional "cpp/feature test") | [`202106L`](../../compiler_support/20.html#cpp_lib_optional_202106L "cpp/compiler support/20") | (C++20)  
(DR20) | Fully constexpr ([1,2](emplace.html#Version_1))  
  
### Example

Run this code
    
    
    #include <iostream>
    #include <optional>
     
    struct A
    {
        [std::string](../../string/basic_string.html) s;
     
        A([std::string](../../string/basic_string.html) str) : s(std::move(str)), id{n++} { note("+ constructed"); }
        ~A() { note("~ destructed"); }
        A(const A& o) : s(o.s), id{n++} { note("+ copy constructed"); }
        A(A&& o) : s(std::move(o.s)), id{n++} { note("+ move constructed"); }
     
        A& operator=(const A& other)
        {
            s = other.s;
            note("= copy assigned");
            return *this;
        }
     
        A& operator=(A&& other)
        {
            s = std::move(other.s);
            note("= move assigned");
            return *this;
        }
     
        inline static int n{};
        int id{};
        void note(auto s) { [std::cout](../../io/cout.html) << "  " << s << " #" << id << '\n'; }
    };
     
    int main()
    {
        [std::optional](../optional.html)<A> opt;
     
        [std::cout](../../io/cout.html) << "Assign:\n";
        opt = A("Lorem ipsum dolor sit amet, consectetur adipiscing elit nec.");
     
        [std::cout](../../io/cout.html) << "Emplace:\n";
        // As opt contains a value it will also destroy that value
        opt.emplace("Lorem ipsum dolor sit amet, consectetur efficitur.");
     
        [std::cout](../../io/cout.html) << "End example\n";
    }

Output: 
    
    
    Assign:
      + constructed #0
      + move constructed #1
      ~ destructed #0
    Emplace:
      ~ destructed #1
      + constructed #2
    End example
      ~ destructed #2

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[P2231R1](https://wg21.link/P2231R1) | C++20  | `emplace` was not constexpr while the required operations can be constexpr in C++20  | made constexpr  
  
### See also

[ operator=](operator=.html "cpp/utility/optional/operator=") |  assigns contents   
(public member function)   
---|---
  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
