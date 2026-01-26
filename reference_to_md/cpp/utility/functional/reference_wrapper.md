 
  


  
  
  
  
  
  
  
  
  
  
  
  


---  
[invokeinvoke_r](invoke.html "cpp/utility/functional/invoke")(C++17)(C++23)  
Identity function object  
[identity](identity.html "cpp/utility/functional/identity")(C++20)  
  
| [Reference wrappers](../../functional.html#Reference_wrappers "cpp/utility/functional")  
---  
**reference_wrapper**(C++11)  
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
  
  
  
  
  
  
  


**`std::reference_wrapper`**

Member functions  
---  
[reference_wrapper::reference_wrapper](reference_wrapper/reference_wrapper.html "cpp/utility/functional/reference wrapper/reference wrapper")  
[reference_wrapper::operator=](reference_wrapper/operator=.html "cpp/utility/functional/reference wrapper/operator=")  
[reference_wrapper::getreference_wrapper::operator T&](reference_wrapper/get.html "cpp/utility/functional/reference wrapper/get")  
[reference_wrapper::operator()](reference_wrapper/operator\(\).html "cpp/utility/functional/reference wrapper/operator\(\)")  
Non-member functions  
[operator==operator<=>](reference_wrapper/operator_cmp.html "cpp/utility/functional/reference wrapper/operator cmp")(C++26)(C++26)  
[Deduction guides](reference_wrapper/deduction_guides.html "cpp/utility/functional/reference wrapper/deduction guides") (C++17)  
Helper classes  
[basic_common_reference<std::reference_wrapper>](reference_wrapper/basic_common_reference.html "cpp/utility/functional/reference wrapper/basic common reference")(C++23)  
  


Defined in header `[<functional>](../../header/functional.html "cpp/header/functional")` |  |   
---|---|---  
template< class T >  
class reference_wrapper; |  |  (since C++11)  
| |   
  
`std::reference_wrapper` is a class template that wraps a reference in a copyable, assignable object. 

Specifically, `std::reference_wrapper` is a [CopyConstructible](../../named_req/CopyConstructible.html "cpp/named req/CopyConstructible") and [CopyAssignable](../../named_req/CopyAssignable.html "cpp/named req/CopyAssignable") wrapper around a reference to object or reference to function of type `T`. Instances of `std::reference_wrapper` are objects (they can be copied or stored in containers) but they are implicitly convertible to T&, so that they can be used as arguments with the functions that take the underlying type by reference. 

If the stored reference is [Callable](../../named_req/Callable.html "cpp/named req/Callable"), `std::reference_wrapper` is callable with the same arguments. 

Helper functions [std::ref](ref.html "cpp/utility/functional/ref") and [std::cref](ref.html "cpp/utility/functional/ref") are often used to generate `std::reference_wrapper` objects. 

`std::reference_wrapper` is used to pass objects by reference to [std::bind](bind.html "cpp/utility/functional/bind"), the constructor of [std::thread](../../thread/thread.html "cpp/thread/thread"), or the helper functions [std::make_pair](../pair/make_pair.html "cpp/utility/pair/make pair") and [std::make_tuple](../tuple/make_tuple.html "cpp/utility/tuple/make tuple"). It can also be used as a mechanism to store references inside standard containers (like [std::vector](../../container/vector.html "cpp/container/vector")) that cannot normally hold references. 

`std::reference_wrapper` is guaranteed to be [TriviallyCopyable](../../named_req/TriviallyCopyable.html "cpp/named req/TriviallyCopyable").  | (since C++17)  
---|---  
`T` may be an incomplete type.  | (since C++20)  
---|---  
  
## Contents

  * [1 Member types](reference_wrapper.html#Member_types)
  * [2 Member functions](reference_wrapper.html#Member_functions)
  * [3 Non-member functions](reference_wrapper.html#Non-member_functions)
  * [4 Deduction guides(since C++17)](reference_wrapper.html#Deduction_guides.28since_C.2B.2B17.29)
  * [5 Helper classes](reference_wrapper.html#Helper_classes)
  * [6 Possible implementation](reference_wrapper.html#Possible_implementation)
  * [7 Example](reference_wrapper.html#Example)
  * [8 See also](reference_wrapper.html#See_also)

  
---  
  
### Member types

type  |  definition   
---|---  
`type` |  `T`  
`result_type`  
(deprecated in C++17)  
(removed in C++20) |  The return type of `T` if `T` is a function. Otherwise, not defined.   
`argument_type`  
(deprecated in C++17)  
(removed in C++20) | 

  * if `T` is a function or pointer to function that takes one argument of type `A1`, then `argument_type` is `A1`  

  * if `T` is a pointer to member function of class `T0` that takes no arguments, then `argument_type` is T0*, possibly cv-qualified  

  * if `T` is a class type with a member type T::argument_type, then `argument_type` is an alias of that 

  
`first_argument_type`  
(deprecated in C++17)  
(removed in C++20) | 

  * if `T` is a function or pointer to function that takes two arguments of types `A1` and `A2`, then `first_argument_type` is `A1`  

  * if `T` is a pointer to member function of class `T0` that takes one argument, then `first_argument_type` is T0*, possibly cv-qualified  

  * if `T` is a class type with a member type T::first_argument_type, then `first_argument_type` is an alias of that 

  
`second_argument_type`  
(deprecated in C++17)  
(removed in C++20) | 

  * if `T` is a function or pointer to function that takes two arguments of type s `A1` and `A2`, then `second_argument_type` is `A2`  

  * if `T` is a pointer to member function of class `T0` that takes one argument `A1`, then `second_argument_type` is `A1`, possibly cv-qualified  

  * if `T` is a class type with a member type T::second_argument_type, then `second_argument_type` is an alias of that 

  
  
### Member functions

[ (constructor)](reference_wrapper/reference_wrapper.html "cpp/utility/functional/reference wrapper/reference wrapper") |  stores a reference in a new **std::reference_wrapper** object   
(public member function)   
---|---  
[ operator=](reference_wrapper/operator=.html "cpp/utility/functional/reference wrapper/operator=") |  rebinds a **std::reference_wrapper**   
(public member function)   
[ getoperator T&](reference_wrapper/get.html "cpp/utility/functional/reference wrapper/get") |  accesses the stored reference   
(public member function)   
[ operator()](reference_wrapper/operator\(\).html "cpp/utility/functional/reference wrapper/operator\(\)") |  calls the stored function   
(public member function) &action=edit)  
  
### Non-member functions

[ operator==operator<=>](reference_wrapper/operator_cmp.html "cpp/utility/functional/reference wrapper/operator cmp")(C++26) |  compares `reference_wrapper` objects as their stored references   
(function)   
---|---  
  
### [Deduction guides](reference_wrapper/deduction_guides.html "cpp/utility/functional/reference wrapper/deduction guides")(since C++17)

### Helper classes

[ std::basic_common_reference<std::reference_wrapper>](reference_wrapper/basic_common_reference.html "cpp/utility/functional/reference wrapper/basic common reference")(C++23) |  determines the common reference type of `reference_wrapper` and non-`reference_wrapper`   
(class template specialization)   
---|---  
  
### Possible implementation
    
    
    namespace detail
    {
        template<class T> constexpr T& FUN(T& t) noexcept { return t; }
        template<class T> void FUN(T&&) = delete;
    }
     
    template<class T>
    class reference_wrapper
    {
    public:
        // types
        using type = T;
     
        // construct/copy/destroy
        template<class U, class = decltype(
            detail::FUN<T>([std::declval](../declval.html)<U>()),
            [std::enable_if_t](../../types/enable_if.html)<![std::is_same_v](../../types/is_same.html)<reference_wrapper, [std::remove_cvref_t](../../types/remove_cvref.html)<U>>>()
        )>
        constexpr reference_wrapper(U&& u)
            noexcept(noexcept(detail::FUN<T>([std::forward](../forward.html)<U>(u))))
            : _ptr([std::addressof](../../memory/addressof.html)(detail::FUN<T>([std::forward](../forward.html)<U>(u)))) {}
     
        reference_wrapper(const reference_wrapper&) noexcept = default;
     
        // assignment
        reference_wrapper& operator=(const reference_wrapper& x) noexcept = default;
     
        // access
        constexpr operator T& () const noexcept { return *_ptr; }
        constexpr T& get() const noexcept { return *_ptr; }
     
        template<class... ArgTypes>
        constexpr [std::invoke_result_t](../../types/result_of.html)<T&, ArgTypes...>
            operator() (ArgTypes&&... args ) const
                noexcept([std::is_nothrow_invocable_v](../../types/is_invocable.html)<T&, ArgTypes...>)
        {
            return [std::invoke](invoke.html)(get(), [std::forward](../forward.html)<ArgTypes>(args)...);
        }
     
    private:
        T* _ptr;
    };
     
    // deduction guides
    template<class T>
    reference_wrapper(T&) -> reference_wrapper<T>;  
  
---  
  
### Example

Demonstrates the use of `std::reference_wrapper` as a container of references, which makes it possible to access the same container using multiple indices.

Run this code
    
    
    #include <algorithm>
    #include <functional>
    #include <iostream>
    #include <list>
    #include <numeric>
    #include <random>
    #include <vector>
     
    void println(auto const rem, std::[ranges::range](../../ranges/range.html) auto const& v)
    {
        for ([std::cout](../../io/cout.html) << rem; auto const& e : v)
            [std::cout](../../io/cout.html) << e << ' ';
        [std::cout](../../io/cout.html) << '\n';
    }
     
    int main()
    {
        [std::list](../../container/list.html)<int> l(10);
        [std::iota](../../algorithm/iota.html)(l.begin(), l.end(), -4);
     
        // can't use shuffle on a list (requires random access), but can use it on a vector
        [std::vector](../../container/vector.html)<std::reference_wrapper<int>> v(l.begin(), l.end());
     
        std::[ranges::shuffle](../../algorithm/ranges/shuffle.html)(v, [std::mt19937](../../numeric/random/mersenne_twister_engine.html){[std::random_device](../../numeric/random/random_device.html){}()});
     
        println("Contents of the list: ", l);
        println("Contents of the list, as seen through a shuffled vector: ", v);
     
        [std::cout](../../io/cout.html) << "Doubling the values in the initial list...\n";
        std::[ranges::for_each](../../algorithm/ranges/for_each.html)(l, [](int& i) { i *= 2; });
     
        println("Contents of the list, as seen through a shuffled vector: ", v);
    }

Possible output: 
    
    
    Contents of the list: -4 -3 -2 -1 0 1 2 3 4 5
    Contents of the list, as seen through a shuffled vector: -1 2 -2 1 5 0 3 -3 -4 4
    Doubling the values in the initial list...
    Contents of the list, as seen through a shuffled vector: -2 4 -4 2 10 0 6 -6 -8 8

### See also

[ refcref](ref.html "cpp/utility/functional/ref")(C++11)(C++11) |  creates a **std::reference_wrapper** with a type deduced from its argument   
(function template)   
---|---  
[ bind](bind.html "cpp/utility/functional/bind")(C++11) |  binds one or more arguments to a function object   
(function template)   
[ unwrap_referenceunwrap_ref_decay](unwrap_reference.html "cpp/utility/functional/unwrap reference")(C++20)(C++20) |  get the reference type wrapped in **std::reference_wrapper**   
(class template) 
