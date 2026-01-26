 
  


  
  
  
  
  
  
  
  
  
  
  
  


---  
[invokeinvoke_r](invoke.html "cpp/utility/functional/invoke")(C++17)(C++23)  
Identity function object  
[identity](identity.html "cpp/utility/functional/identity")(C++20)  
  
| [Reference wrappers](../../functional.html#Reference_wrappers "cpp/utility/functional")  
---  
[reference_wrapper](reference_wrapper.html "cpp/utility/functional/reference wrapper")(C++11)  
**ref cref**(C++11)(C++11)  
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
  
  
  
  
  
  
  


Defined in header `[<functional>](../../header/functional.html "cpp/header/functional")` |  |   
---|---|---  
template< class T >  
[std::reference_wrapper](reference_wrapper.html)<T> ref( T& t ) noexcept; |  (1) | (since C++11)   
(constexpr since C++20)  
template< class T >  
[std::reference_wrapper](reference_wrapper.html)<T>  
ref( [std::reference_wrapper](reference_wrapper.html)<T> t ) noexcept; |  (2) | (since C++11)   
(constexpr since C++20)  
template< class T >  
void ref( const T&& ) = delete; |  (3) | (since C++11)  
template< class T >  
[std::reference_wrapper](reference_wrapper.html)<const T> cref( const T& t ) noexcept; |  (4) | (since C++11)   
(constexpr since C++20)  
template< class T >  
[std::reference_wrapper](reference_wrapper.html)<const T>  
cref( [std::reference_wrapper](reference_wrapper.html)<T> t ) noexcept; |  (5) | (since C++11)   
(constexpr since C++20)  
template< class T >  
void cref( const T&& ) = delete; |  (6) | (since C++11)  
| |   
  
Function templates `ref` and `cref` are helper functions that generate an object of type [std::reference_wrapper](reference_wrapper.html "cpp/utility/functional/reference wrapper"), using [template argument deduction](../../language/template_argument_deduction.html "cpp/language/template argument deduction") to determine the template argument of the result. 

`T` may be an incomplete type.  | (since C++20)  
---|---  
  
## Contents

  * [1 Parameters](ref.html#Parameters)
  * [2 Return value](ref.html#Return_value)
  * [3 Example](ref.html#Example)
  * [4 Defect reports](ref.html#Defect_reports)
  * [5 See also](ref.html#See_also)

  
---  
  
### Parameters

t  |  \-  |  lvalue reference to object that needs to be wrapped or an instance of [std::reference_wrapper](reference_wrapper.html "cpp/utility/functional/reference wrapper")  
---|---|---  
  
### Return value

1) [std::reference_wrapper](reference_wrapper.html)<T>(t)

2) t

4) [std::reference_wrapper](reference_wrapper.html)<const T>(t)

5) t

3,6) rvalue reference wrapper is deleted.

### Example

Run this code
    
    
    #include <functional>
    #include <iostream>
     
    void f(int& n1, int& n2, const int& n3)
    {
        [std::cout](../../io/cout.html) << "In function: " << n1 << ' ' << n2 << ' ' << n3 << '\n';
        ++n1; // increments the copy of n1 stored in the function object
        ++n2; // increments the main()'s n2
        // ++n3; // compile error
    }
     
    int main()
    {
        int n1 = 1, n2 = 2, n3 = 3;
        [std::function](function.html)<void()> bound_f = [std::bind](bind.html)(f, n1, std::ref(n2), std::cref(n3));
        n1 = 10;
        n2 = 11;
        n3 = 12;
        [std::cout](../../io/cout.html) << "Before function: " << n1 << ' ' << n2 << ' ' << n3 << '\n';
        bound_f();
        [std::cout](../../io/cout.html) << "After function: " << n1 << ' ' << n2 << ' ' << n3 << '\n';
    }

Output: 
    
    
    Before function: 10 11 12
    In function: 1 11 12
    After function: 10 12 12

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 3146](https://cplusplus.github.io/LWG/issue3146) | C++11  | unwrapping overloads sometimes led to error  | made always valid   
  
### See also

[ reference_wrapper](reference_wrapper.html "cpp/utility/functional/reference wrapper")(C++11) |  [CopyConstructible](../../named_req/CopyConstructible.html "cpp/named req/CopyConstructible") and [CopyAssignable](../../named_req/CopyAssignable.html "cpp/named req/CopyAssignable") reference wrapper   
(class template)   
---|---
