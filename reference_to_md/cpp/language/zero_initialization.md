

  
| [`goto`](goto.html "cpp/language/goto") \- [`return`](return.html "cpp/language/return")  
---  
  
[Functions](functions.html "cpp/language/functions")  
[Function declaration](function.html "cpp/language/function")  
[Lambda function expression](lambda.html "cpp/language/lambda")  
[`inline` specifier](inline.html "cpp/language/inline")  
[Dynamic exception specifications](except_spec.html "cpp/language/except spec") (until C++17*)  
[`noexcept` specifier](noexcept_spec.html "cpp/language/noexcept spec") (C++11)  
Exceptions  
| [`throw`-expression](throw.html "cpp/language/throw")  
---  
[`try` block](try.html "cpp/language/try")  
  
|   
  
---  
[`catch` handler](catch.html "cpp/language/catch")  
  
Namespaces  
| [Namespace declaration](namespace.html "cpp/language/namespace")` `  
---  
  
| [Namespace aliases](namespace_alias.html "cpp/language/namespace alias")  
---  
  
Types  
| [Fundamental types](types.html "cpp/language/types")  
---  
[Enumeration types](enum.html "cpp/language/enum")  
[Function types](function.html "cpp/language/function")  
  
| [Class/struct types](class.html "cpp/language/class")  
---  
[Union types](union.html "cpp/language/union")  
  
  
  
Specifiers  
| [`const`/`volatile`](cv.html "cpp/language/cv")  
---  
[`decltype`](decltype.html "cpp/language/decltype") (C++11)  
[`auto`](auto.html "cpp/language/auto") (C++11)  
  
| [`constexpr`](constexpr.html "cpp/language/constexpr") (C++11)  
---  
[`consteval`](consteval.html "cpp/language/consteval") (C++20)  
[`constinit`](constinit.html "cpp/language/constinit") (C++20)  
  
[Storage duration specifiers](storage_duration.html "cpp/language/storage duration")  
[Initialization](initialization.html "cpp/language/initialization")  
| [Default-initialization](default_initialization.html "cpp/language/default initialization")  
---  
[Value-initialization](value_initialization.html "cpp/language/value initialization")  
**Zero-initialization**  
[Copy-initialization](copy_initialization.html "cpp/language/copy initialization")  
[Direct-initialization](direct_initialization.html "cpp/language/direct initialization")  
  
| [Aggregate initialization](aggregate_initialization.html "cpp/language/aggregate initialization")  
---  
[List-initialization](list_initialization.html "cpp/language/list initialization") (C++11)` `  
[Constant initialization](constant_initialization.html "cpp/language/constant initialization")  
[Reference initialization](reference_initialization.html "cpp/language/reference initialization")  
  
  
  

---  
  

---  
  


[ Initialization](initialization.html "cpp/language/initialization")

[Initializer](initialization.html "cpp/language/initialization")  
---  
[Default initialization](default_initialization.html "cpp/language/default initialization")  
[Value initialization](value_initialization.html "cpp/language/value initialization")  
[Direct initialization](direct_initialization.html "cpp/language/direct initialization")  
[Copy-initialization](copy_initialization.html "cpp/language/copy initialization")  
[List initialization](list_initialization.html "cpp/language/list initialization") (C++11)  
[Aggregate initialization](aggregate_initialization.html "cpp/language/aggregate initialization")  
[Reference initialization](reference_initialization.html "cpp/language/reference initialization")  
[Copy elision](copy_elision.html "cpp/language/copy elision")  
[Static initialization](initialization.html#Static_initialization "cpp/language/initialization")  
**Zero initialization**  
[Constant initialization](constant_initialization.html "cpp/language/constant initialization")  
[Dynamic non-local initialization](initialization.html#Dynamic_initialization "cpp/language/initialization")  
[Ordered dynamic initialization](initialization.html#Dynamic_initialization "cpp/language/initialization")  
[Unordered dynamic initialization](initialization.html#Dynamic_initialization "cpp/language/initialization")  
[Class member initialization](initialization.html#Class_member_initialization "cpp/language/initialization")  
[Member initializer list](initializer_list.html "cpp/language/initializer list")  
[Default member initializer](data_members.html#Member_initialization "cpp/language/data members") (C++11)  
  


Sets the initial value of an object to zero. 

## Contents

  * [1 Syntax](zero_initialization.html#Syntax)
  * [2 Explanation](zero_initialization.html#Explanation)
  * [3 Notes](zero_initialization.html#Notes)
  * [4 Example](zero_initialization.html#Example)
  * [5 Defect reports](zero_initialization.html#Defect_reports)
  * [6 See also](zero_initialization.html#See_also)

  
---  
  
### Syntax

Note that this is not the syntax for zero-initialization, which does not have a dedicated syntax in the language. These are examples of other types of initializations, which might perform zero-initialization.   
  
---  
`**static**` T object `**;**` |  (1)  |   
T `**()**` `**;**` T t `**=**` `**{}**` `**;**` T `**{}**` `**;**` (since C++11) |  (2)  |   
CharT array `**[**` n `**]**` `**=**` `**"**` short-sequence `**";**` |  (3)  |   
  
### Explanation

Zero-initialization is performed in the following situations: 

1) For every named variable with static or thread-local(since C++11) [storage duration](storage_duration.html "cpp/language/storage duration") that is not subject to [constant initialization](constant_initialization.html "cpp/language/constant initialization"), before any other initialization.

2) As part of [value-initialization](value_initialization.html "cpp/language/value initialization") sequence for non-class types and for members of value-initialized class types that have no constructors, including value initialization of elements of [aggregates](aggregate_initialization.html "cpp/language/aggregate initialization") for which no initializers are provided.

3) When an array of any [character type](types.html#Character_types "cpp/language/types") is [initialized with a string literal](aggregate_initialization.html#Character_arrays "cpp/language/aggregate initialization") that is too short, the remainder of the array is zero-initialized.

The effects of zero-initialization are: 

  * If `T` is a [scalar type](../named_req/ScalarType.html "cpp/named req/ScalarType"), the object is initialized to the value obtained by [explicitly converting](explicit_cast.html "cpp/language/explicit cast") the integer literal ​0​ (zero) to `T`. 
  * If `T` is a non-union class type: 



    

  * all [padding bits](objects.html#Object_representation_and_value_representation "cpp/language/object") are initialized to zero bits, 
  * each non-static [data member](data_members.html "cpp/language/data members") is zero-initialized, 
  * each non-virtual base class [subobject](objects.html#Subobjects "cpp/language/object") is zero-initialized, and 
  * if the object is not a base class subobject, each [virtual base class](derived_class.html#Virtual_base_classes "cpp/language/derived class") subobject is zero-initialized. 



  * If `T` is a union type: 



    

  * all padding bits are initialized to zero bits, and 
  * the object’s first non-static named data member is zero-initialized. 



  * If `T` is array type, each element is zero-initialized. 
  * If `T` is reference type, nothing is done. 



### Notes

As described in [non-local initialization](initialization.html#Non-local_variables "cpp/language/initialization"), static and thread-local(since C++11) variables that aren't constant-initialized are zero-initialized before any other initialization takes place. If the definition of a non-class non-local variable has no initializer, then default initialization does nothing, leaving the result of the earlier zero-initialization unmodified. 

A zero-initialized pointer is the null pointer value of its type, even if the value of the null pointer is not integral zero. 

### Example

Run this code
    
    
    #include <iostream>
    #include <string>
     
    struct A
    {
        int a, b, c;
    };
     
    double f[3];   // zero-initialized to three 0.0's
     
    int* p;        // zero-initialized to null pointer value
                   // (even if the value is not integral 0)
     
    [std::string](../string/basic_string.html) s; // zero-initialized to indeterminate value, then
                   // default-initialized to "" by the std::string default constructor
     
    int main(int argc, char*[])
    {
        delete p; // safe to delete a null pointer
     
        static int n = argc; // zero-initialized to 0 then copy-initialized to argc
        [std::cout](../io/cout.html) << "n = " << n << '\n';
     
        A a = A(); // the effect is same as: A a{}; or A a = {};
        [std::cout](../io/cout.html) << "a = {" << a.a << ' ' << a.b << ' ' << a.c << "}\n";
    }

Possible output: 
    
    
    n = 1
    a = {0 0 0}

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[CWG 277](https://cplusplus.github.io/CWG/issues/277.html) | C++98  | pointers might be initialized with a non-constant  
expression of value 0, which is not a null pointer constant  | must initialize with an integral  
constant expression of value 0   
[CWG 694](https://cplusplus.github.io/CWG/issues/694.html) | C++98  | zero-initialization for class types ignored padding  | padding is initialized to zero bits   
[CWG 903](https://cplusplus.github.io/CWG/issues/903.html) | C++98  | zero-initialization for scalar types set the initial value to the value  
converted from an integral constant expression with value 0  | the object is initialized to the value  
converted from the integer literal ​0​  
[CWG 2026](https://cplusplus.github.io/CWG/issues/2026.html) | C++98  | zero-initialization was specified to always  
occur first, even before constant initialization  | no zero-initialization if  
constant initialization applies   
[CWG 2196](https://cplusplus.github.io/CWG/issues/2196.html) | C++98  | zero-initialization for class types ignored base class subobjects  | they are also zero-initialized   
[CWG 2253](https://cplusplus.github.io/CWG/issues/2253.html) | C++98  | it was unclear whether zero-initialization  
applies to unnamed bit-fields  | it applies (all padding bits  
are initialized to zero bits)   
  
### See also

  * [constructor](initializer_list.html "cpp/language/constructor")
  * [copy assignment](as_operator.html "cpp/language/copy assignment")
  * [default constructor](default_constructor.html "cpp/language/default constructor")
  * [initialization](initialization.html "cpp/language/initialization")
    * [aggregate initialization](aggregate_initialization.html "cpp/language/aggregate initialization")
    * [constant initialization](constant_initialization.html "cpp/language/constant initialization")
    * [copy initialization](copy_initialization.html "cpp/language/copy initialization")
    * [default initialization](default_initialization.html "cpp/language/default initialization")
    * [direct initialization](direct_initialization.html "cpp/language/direct initialization")
    * [list initialization](list_initialization.html "cpp/language/list initialization")
    * [value initialization](value_initialization.html "cpp/language/value initialization")
  * [move assignment](move_operator.html "cpp/language/move assignment")
  * [`new`](new.html "cpp/language/new")


