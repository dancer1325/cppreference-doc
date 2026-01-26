 
  


  
  
  
  
  
  
  
  
  
  
  
  


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
  
  
  
  
  
  
  
| [binder1stbinder2nd](binder12.html "cpp/utility/functional/binder12")(until C++17*)(until C++17*)  
---  
[bind1stbind2nd](bind12.html "cpp/utility/functional/bind12")(until C++17*)(until C++17*)  
  
  
[mem_fun_ref](mem_fun_ref.html "cpp/utility/functional/mem fun ref")(until C++17*)  
**mem_fun_ref_t mem_fun1_ref_tconst_mem_fun_ref_tconst_mem_fun1_ref_t**(until C++17*)(until C++17*)(until C++17*)(until C++17*)  
[unary_negate](unary_negate.html "cpp/utility/functional/unary negate")(until C++20*)  
[binary_negate](binary_negate.html "cpp/utility/functional/binary negate")(until C++20*)  
  


Defined in header `[<functional>](../../header/functional.html "cpp/header/functional")` |  |   
---|---|---  
template< class S, class T >   
class mem_fun_ref_t : public unary_function<T,S> {  
public:  
explicit mem_fun_ref_t(S (T::*p)());  
S operator()(T& p) const;  
}; |  (1)  |  (deprecated in C++11)   
(removed in C++17)  
template< class S, class T >   
class const_mem_fun_ref_t : public unary_function<T,S> {  
public:  
explicit const_mem_fun_ref_t(S (T::*p)() const);  
S operator()(const T& p) const;  
}; |  (2)  |  (deprecated in C++11)   
(removed in C++17)  
template< class S, class T, class A >   
class mem_fun1_ref_t : public binary_function<T,A,S> {  
public:  
explicit mem_fun1_ref_t(S (T::*p)(A));  
S operator()(T& p, A x) const;  
}; |  (3)  |  (deprecated in C++11)   
(removed in C++17)  
template< class S, class T, class A >   
class const_mem_fun1_ref_t : public binary_function<T,A,S> {  
public:  
explicit const_mem_fun1_ref_t(S (T::*p)(A) const);  
S operator()(const T& p, A x) const;  
}; |  (4)  |  (deprecated in C++11)   
(removed in C++17)  
| |   
  
Wrapper around a member function pointer. The class instance whose member function to call is passed as a reference to the `operator()`. 

1) Wraps a non-const member function with no parameters.

2) Wraps a const member function with no parameters.

3) Wraps a non-const member function with a single parameter.

4) Wraps a const member function with a single parameter.

### See also

[ mem_fun_ref](mem_fun_ref.html "cpp/utility/functional/mem fun ref")(deprecated in C++11)(removed in C++17) |  creates a wrapper from a pointer to member function, callable with a reference to object   
(function template)   
---|---  
[ mem_fun_tmem_fun1_tconst_mem_fun_tconst_mem_fun1_t](mem_fun_t.html "cpp/utility/functional/mem fun t")(deprecated in C++11)(removed in C++17) |  wrapper for a pointer to nullary or unary member function, callable with a pointer to object   
(class template) 
