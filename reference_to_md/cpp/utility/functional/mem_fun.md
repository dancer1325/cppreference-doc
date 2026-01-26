 
  


  
  
  
  
  
  
  
  
  
  
  
  


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
  
  
  
  
  
  
| [Negators](../../functional.html#Negators "cpp/utility/functional")  
---  
[not_fn](not_fn.html "cpp/utility/functional/not fn")(C++17)  
[Searchers](../../functional.html#Searchers "cpp/utility/functional")  
[default_searcher](default_searcher.html "cpp/utility/functional/default searcher")(C++17)  
[boyer_moore_searcher](boyer_moore_searcher.html "cpp/utility/functional/boyer moore searcher")(C++17)  
[boyer_moore_horspool_searcher](boyer_moore_horspool_searcher.html "cpp/utility/functional/boyer moore horspool searcher")(C++17)  
  
| [Constrained comparators](../../functional.html#Constrained_comparison_function_objects "cpp/utility/functional")  
---  
[ranges::equal_to](ranges/equal_to.html "cpp/utility/functional/ranges/equal to")(C++20)  
[ranges::not_equal_to](ranges/not_equal_to.html "cpp/utility/functional/ranges/not equal to")(C++20)  
[ranges::greater](ranges/greater.html "cpp/utility/functional/ranges/greater")(C++20)  
[ranges::less](ranges/less.html "cpp/utility/functional/ranges/less")(C++20)  
[ranges::greater_equal](ranges/greater_equal.html "cpp/utility/functional/ranges/greater equal")(C++20)  
[ranges::less_equal](ranges/less_equal.html "cpp/utility/functional/ranges/less equal")(C++20)  
[compare_three_way](../compare/compare_three_way.html "cpp/utility/compare/compare three way")(C++20)  
  
[Old binders and adaptors](../../functional.html#Old_binders_and_adaptors "cpp/utility/functional")  
| [unary_function](unary_function.html "cpp/utility/functional/unary function")(until C++17*)  
---  
[binary_function](binary_function.html "cpp/utility/functional/binary function")(until C++17*)  
[ptr_fun](ptr_fun.html "cpp/utility/functional/ptr fun")(until C++17*)  
[pointer_to_unary_function](pointer_to_unary_function.html "cpp/utility/functional/pointer to unary function")(until C++17*)  
[pointer_to_binary_function](pointer_to_binary_function.html "cpp/utility/functional/pointer to binary function")(until C++17*)  
**mem_fun**(until C++17*)  
[mem_fun_tmem_fun1_tconst_mem_fun_tconst_mem_fun1_t](mem_fun_t.html "cpp/utility/functional/mem fun t")(until C++17*)(until C++17*)(until C++17*)(until C++17*)  
[not1](not1.html "cpp/utility/functional/not1")(until C++20*)  
[not2](not2.html "cpp/utility/functional/not2")(until C++20*)  
  


Defined in header `[<functional>](../../header/functional.html "cpp/header/functional")` |  |   
---|---|---  
template< class Res, class T >  
[std::mem_fun_t](mem_fun_t.html)<Res,T> mem_fun( Res (T::*f)() ); |  (1)  |  (deprecated in C++11)   
(removed in C++17)  
template< class Res, class T >  
[std::const_mem_fun_t](mem_fun_t.html)<Res,T> mem_fun( Res (T::*f)() const ); |  (1)  |  (deprecated in C++11)   
(removed in C++17)  
template< class Res, class T, class Arg >  
[std::mem_fun1_t](mem_fun_t.html)<Res,T,Arg> mem_fun( Res (T::*f)(Arg) ); |  (2)  |  (deprecated in C++11)   
(removed in C++17)  
template< class Res, class T, class Arg >  
[std::const_mem_fun1_t](mem_fun_t.html)<Res,T,Arg> mem_fun( Res (T::*f)(Arg) const ); |  (2)  |  (deprecated in C++11)   
(removed in C++17)  
| |   
  
Creates a member function wrapper object, deducing the target type from the template arguments. The wrapper object expects a pointer to an object of type `T` as the first parameter to its operator(). 

1) Effectively calls [std::mem_fun_t](mem_fun_t.html)<Res,T>(f) or [std::const_mem_fun_t](mem_fun_t.html)<Res,T>(f).

2) Effectively calls [std::mem_fun1_t](mem_fun_t.html)<Res,T,Arg>(f) or [std::const_mem_fun1_t](mem_fun_t.html)<Res,T,Arg>(f).

This function and the related types were deprecated in C++11 and removed in C++17 in favor of the more general [std::mem_fn](mem_fn.html "cpp/utility/functional/mem fn") and [std::bind](bind.html "cpp/utility/functional/bind"), both of which create callable adaptor-compatible function objects from member functions. 

## Contents

  * [1 Parameters](mem_fun.html#Parameters)
  * [2 Return value](mem_fun.html#Return_value)
  * [3 Exceptions](mem_fun.html#Exceptions)
  * [4 Notes](mem_fun.html#Notes)
  * [5 Example](mem_fun.html#Example)
  * [6 See also](mem_fun.html#See_also)

  
---  
  
### Parameters

f  |  \-  |  pointer to a member function to create a wrapper for   
---|---|---  
  
### Return value

A function object wrapping f. 

### Exceptions

May throw implementation-defined exceptions. 

### Notes

The difference between std::mem_fun and [std::mem_fun_ref](mem_fun_ref.html) is that the former produces a function wrapper that expects a pointer to an object, whereas the latter — a reference. 

### Example

Demonstrates `std::mem_fun` usage and compares it with [std::mem_fn](mem_fn.html "cpp/utility/functional/mem fn"). C++11/14 compatible compilation mode might be necessary: g++/clang++ with -std=c++11, cl with /std:c++11, etc. On recent compilers, e.g. gcc-12, might issue "deprecated declaration" warnings if not compiled in C++98 mode.

Run this code
    
    
    #include <functional>
    #include <iostream>
     
    struct S
    {
        int get_data() const { return data; }
        void no_args() const { [std::cout](../../io/cout.html) << "void S::no_args() const\n"; }
        void one_arg(int) { [std::cout](../../io/cout.html) << "void S::one_arg()\n"; }
        void two_args(int, int) { [std::cout](../../io/cout.html) << "void S::two_args(int, int)\n"; }
    #if __cplusplus > 201100
        int data{42};
    #else
        int data;
        S() : data(42) {}
    #endif
    };
     
    int main()
    {
        S s;
     
        [std::const_mem_fun_t](mem_fun_t.html)<int, S> p = std::mem_fun(&S::get_data);
        [std::cout](../../io/cout.html) << "s.get_data(): " << p(&s) << '\n';
     
        [std::const_mem_fun_t](mem_fun_t.html)<void, S> p0 = std::mem_fun(&S::no_args);
        p0(&s);
     
        [std::mem_fun1_t](mem_fun_t.html)<void, S, int> p1 = std::mem_fun(&S::one_arg);
        p1(&s, 1);
     
    #if __cplusplus > 201100
    //  auto p2 = std::mem_fun(&S::two_args); // Error: mem_fun supports only member functions
                                              // without parameters or with only one parameter.
                                              // Thus, std::mem_fn is a better alternative:
        auto p2 = [std::mem_fn](mem_fn.html)(&S::two_args);
        p2(s, 1, 2);
     
    //  auto pd = std::mem_fun(&S::data); // Error: pointers to data members are not supported.
                                          // Use std::mem_fn instead:
        auto pd = [std::mem_fn](mem_fn.html)(&S::data);
        [std::cout](../../io/cout.html) << "s.data = " << pd(s) << '\n';
    #endif
    }

Possible output: 
    
    
    s.get_data(): 42
    void S::no_args() const
    void S::one_arg(int)
    void S::two_args(int, int)
    s.data = 42

### See also

[ mem_fn](mem_fn.html "cpp/utility/functional/mem fn")(C++11) |  creates a function object out of a pointer to a member   
(function template)   
---|---  
[ mem_fun_ref](mem_fun_ref.html "cpp/utility/functional/mem fun ref")(deprecated in C++11)(removed in C++17) |  creates a wrapper from a pointer to member function, callable with a reference to object   
(function template) 
