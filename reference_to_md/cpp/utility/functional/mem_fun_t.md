 
  


  
  
  
  
  
  
  
  
  
  
  
  


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
[mem_fun](mem_fun.html "cpp/utility/functional/mem fun")(until C++17*)  
**mem_fun_t mem_fun1_tconst_mem_fun_tconst_mem_fun1_t**(until C++17*)(until C++17*)(until C++17*)(until C++17*)  
[not1](not1.html "cpp/utility/functional/not1")(until C++20*)  
[not2](not2.html "cpp/utility/functional/not2")(until C++20*)  
  


Defined in header `[<functional>](../../header/functional.html "cpp/header/functional")` |  |   
---|---|---  
template< class S, class T >   
class mem_fun_t : public unary_function<T*,S> {  
public:  
explicit mem_fun_t(S (T::*p)());  
S operator()(T* p) const;  
}; |  (1)  |  (deprecated in C++11)   
(removed in C++17)  
template< class S, class T >   
class const_mem_fun_t : public unary_function<const T*,S> {  
public:  
explicit const_mem_fun_t(S (T::*p)() const);  
S operator()(const T* p) const;  
}; |  (2)  |  (deprecated in C++11)   
(removed in C++17)  
template< class S, class T, class A >   
class mem_fun1_t : public binary_function<T*,A,S> {  
public:  
explicit mem_fun1_t(S (T::*p)(A));  
S operator()(T* p, A x) const;  
}; |  (3)  |  (deprecated in C++11)   
(removed in C++17)  
template< class S, class T, class A >   
class const_mem_fun1_t : public binary_function<const T*,A,S> {  
public:  
explicit const_mem_fun1_t(S (T::*p)(A) const);  
S operator()(const T* p, A x) const;  
}; |  (4)  |  (deprecated in C++11)   
(removed in C++17)  
| |   
  
Wrapper around a member function pointer. The class instance whose member function to call is passed as a pointer to the `operator()`. 

1) Wraps a non-const member function with no parameters.

2) Wraps a const member function with no parameters.

3) Wraps a non-const member function with a single parameter.

4) Wraps a const member function with a single parameter.

### See also

[ mem_fun](mem_fun.html "cpp/utility/functional/mem fun")(deprecated in C++11)(removed in C++17) |  creates a wrapper from a pointer to member function, callable with a pointer to object   
(function template)   
---|---  
[ mem_fun_ref_tmem_fun1_ref_tconst_mem_fun_ref_tconst_mem_fun1_ref_t](mem_fun_ref_t.html "cpp/utility/functional/mem fun ref t")(deprecated in C++11)(removed in C++17) |  wrapper for a pointer to nullary or unary member function, callable with a reference to object   
(class template) 
