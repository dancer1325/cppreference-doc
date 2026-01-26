 
  


  
  
  
  
  
  
  
  
  
  
  
  


---  
[invokeinvoke_r](invoke.html "cpp/utility/functional/invoke")(C++17)(C++23)  
Identity function object  
[identity](identity.html "cpp/utility/functional/identity")(C++20)  
  
| [Reference wrappers](../../functional.html#Reference_wrappers "cpp/utility/functional")  
---  
[reference_wrapper](reference_wrapper.html "cpp/utility/functional/reference wrapper")(C++11)  
[refcref](ref.html "cpp/utility/functional/ref")(C++11)(C++11)  
**unwrap_reference unwrap_ref_decay**(C++20)(C++20)  
  
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
  
  
  
  
  
  
  


Defined in header `[<type_traits>](../../header/type_traits.html "cpp/header/type traits")` |  |   
---|---|---  
Defined in header `[<functional>](../../header/functional.html "cpp/header/functional")` |  |   
template< class T >  
struct unwrap_reference; |  (1)  |  (since C++20)  
template< class T >  
struct unwrap_ref_decay; |  (2)  |  (since C++20)  
| |   
  
Unwraps any [std::reference_wrapper](reference_wrapper.html "cpp/utility/functional/reference wrapper"): changing [std::reference_wrapper](reference_wrapper.html)<U> to `U&`. 

1) If `T` is a specialization of [std::reference_wrapper](reference_wrapper.html "cpp/utility/functional/reference wrapper"), unwraps it; otherwise, `T` remains the same.

2) If the decayed `T` is a specialization of [std::reference_wrapper](reference_wrapper.html "cpp/utility/functional/reference wrapper"), unwraps it; otherwise, `T` is decayed.

If the program adds specializations for any of the templates described on this page, the behavior is undefined. 

## Contents

  * [1 Nested types](unwrap_reference.html#Nested_types)
  * [2 Helper types](unwrap_reference.html#Helper_types)
  * [3 Possible implementation](unwrap_reference.html#Possible_implementation)
  * [4 Notes](unwrap_reference.html#Notes)
  * [5 Example](unwrap_reference.html#Example)
  * [6 See also](unwrap_reference.html#See_also)

  
---  
  
### Nested types

Type  |  Definition   
---|---  
`type` |  (1) `U&` if `T` is [std::reference_wrapper](reference_wrapper.html)<U>; `T` otherwise  
(2) `U&` if [std::decay_t](../../types/decay.html)<T> is [std::reference_wrapper](reference_wrapper.html)<U>; [std::decay_t](../../types/decay.html)<T> otherwise   
  
### Helper types

template<class T>  
using unwrap_reference_t = unwrap_reference<T>::type; |  (1)  |  (since C++20)  
---|---|---  
template<class T>  
using unwrap_ref_decay_t = unwrap_ref_decay<T>::type; |  (2)  |  (since C++20)  
| |   
  
### Possible implementation
    
    
    template<class T>
    struct unwrap_reference { using type = T; };
    template<class U>
    struct unwrap_reference<[std::reference_wrapper](reference_wrapper.html)<U>> { using type = U&; };
     
    template<class T>
    struct unwrap_ref_decay : std::unwrap_reference<[std::decay_t](../../types/decay.html)<T>> {};  
  
---  
  
### Notes

`std::unwrap_ref_decay` performs the same transformation as used by [std::make_pair](../pair/make_pair.html "cpp/utility/pair/make pair") and [std::make_tuple](../tuple/make_tuple.html "cpp/utility/tuple/make tuple"). 

[Feature-test](../feature_test.html "cpp/utility/feature test") macro | Value | Std | Feature   
---|---|---|---  
[`__cpp_lib_unwrap_ref`](../../experimental/feature_test.html#cpp_lib_unwrap_ref "cpp/feature test") | [`201811L`](../../compiler_support/20.html#cpp_lib_unwrap_ref_201811L "cpp/compiler support/20") | (C++20) | `std::unwrap_ref_decay` and `std::unwrap_reference`  
  
### Example

Run this code
    
    
    #include <cassert>
    #include <functional>
    #include <iostream>
    #include <type_traits>
     
    int main()
    {
        static_assert([std::is_same_v](../../types/is_same.html)<std::unwrap_reference_t<int>, int>);
        static_assert([std::is_same_v](../../types/is_same.html)<std::unwrap_reference_t<const int>, const int>);
        static_assert([std::is_same_v](../../types/is_same.html)<std::unwrap_reference_t<int&>, int&>);
        static_assert([std::is_same_v](../../types/is_same.html)<std::unwrap_reference_t<int&&>, int&&>);
        static_assert([std::is_same_v](../../types/is_same.html)<std::unwrap_reference_t<int*>, int*>);
     
        {
            using T = [std::reference_wrapper](reference_wrapper.html)<int>;
            using X = std::unwrap_reference_t<T>;
            static_assert([std::is_same_v](../../types/is_same.html)<X, int&>);
        }
        {
            using T = [std::reference_wrapper](reference_wrapper.html)<int&>;
            using X = std::unwrap_reference_t<T>;
            static_assert([std::is_same_v](../../types/is_same.html)<X, int&>);
        }
     
        static_assert([std::is_same_v](../../types/is_same.html)<std::unwrap_ref_decay_t<int>, int>);
        static_assert([std::is_same_v](../../types/is_same.html)<std::unwrap_ref_decay_t<const int>, int>);
        static_assert([std::is_same_v](../../types/is_same.html)<std::unwrap_ref_decay_t<const int&>, int>);
     
        {
            using T = [std::reference_wrapper](reference_wrapper.html)<int&&>;
            using X = std::unwrap_ref_decay_t<T>;
            static_assert([std::is_same_v](../../types/is_same.html)<X, int&>);
        }
     
        {
            auto reset = []<typename T>(T&& z)
            {
            //  x = 0; // Error: does not work if T is reference_wrapper<>
                // converts T&& into T& for ordinary types
                // converts T&& into U& for reference_wrapper<U>
                decltype(auto) r = std::unwrap_reference_t<T>(z);
                [std::cout](../../io/cout.html) << "r: " << r << '\n';
                r = 0; // OK, r has reference type
            };
     
            int x = 1;
            reset(x);
            [assert](../../error/assert.html)(x == 0);
     
            int y = 2;
            reset([std::ref](ref.html)(y));
            [assert](../../error/assert.html)(y == 0);
        }
    }

Output: 
    
    
    r: 1
    r: 2

### See also

[ reference_wrapper](reference_wrapper.html "cpp/utility/functional/reference wrapper")(C++11) |  [CopyConstructible](../../named_req/CopyConstructible.html "cpp/named req/CopyConstructible") and [CopyAssignable](../../named_req/CopyAssignable.html "cpp/named req/CopyAssignable") reference wrapper   
(class template)   
---|---  
[ make_pair](../pair/make_pair.html "cpp/utility/pair/make pair") |  creates a `pair` object of type, determined by the argument types   
(function template)   
[ make_tuple](../tuple/make_tuple.html "cpp/utility/tuple/make tuple")(C++11) |  creates a `tuple` object of the type defined by the argument types   
(function template) 
  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
