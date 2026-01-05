

  
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
**Value-initialization**  
[Zero-initialization](zero_initialization.html "cpp/language/zero initialization")  
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
**Value initialization**  
[Direct initialization](direct_initialization.html "cpp/language/direct initialization")  
[Copy-initialization](copy_initialization.html "cpp/language/copy initialization")  
[List initialization](list_initialization.html "cpp/language/list initialization") (C++11)  
[Aggregate initialization](aggregate_initialization.html "cpp/language/aggregate initialization")  
[Reference initialization](reference_initialization.html "cpp/language/reference initialization")  
[Copy elision](copy_elision.html "cpp/language/copy elision")  
[Static initialization](initialization.html#Static_initialization "cpp/language/initialization")  
[Zero initialization](zero_initialization.html "cpp/language/zero initialization")  
[Constant initialization](constant_initialization.html "cpp/language/constant initialization")  
[Dynamic non-local initialization](initialization.html#Dynamic_initialization "cpp/language/initialization")  
[Ordered dynamic initialization](initialization.html#Dynamic_initialization "cpp/language/initialization")  
[Unordered dynamic initialization](initialization.html#Dynamic_initialization "cpp/language/initialization")  
[Class member initialization](initialization.html#Class_member_initialization "cpp/language/initialization")  
[Member initializer list](initializer_list.html "cpp/language/initializer list")  
[Default member initializer](data_members.html#Member_initialization "cpp/language/data members") (C++11)  
  


This is the initialization performed when an object is constructed with an empty initializer. 

## Contents

  * [1 Syntax](value_initialization.html#Syntax)
  * [2 Explanation](value_initialization.html#Explanation)
  * [3 Notes](value_initialization.html#Notes)
  * [4 Example](value_initialization.html#Example)
  * [5 Defect reports](value_initialization.html#Defect_reports)
  * [6 See also](value_initialization.html#See_also)

  
---  
  
### Syntax  
  
---  
T `**()**` |  (1)  |   
`**new**` T `**()**` |  (2)  |   
Class`**::**` Class`**(**`...`**)**` `**:**` member `**()**` `**{**` ... `**}**` |  (3)  |   
T object `**{};**` |  (4)  |  (since C++11)  
T `**{}**` |  (5)  |  (since C++11)  
`**new**` T `**{}**` |  (6)  |  (since C++11)  
Class`**::**` Class`**(**`...`**)**` `**:**` member `**{}**` `**{**` ... `**}**` |  (7)  |  (since C++11)  
  
### Explanation

Value-initialization is performed in these situations: 

1,5) when a nameless temporary object is created with the initializer consisting of an empty pair of parentheses or braces(since C++11);

2,6) when an object with dynamic storage duration is created by a [new expression](new.html "cpp/language/new") with the initializer consisting of an empty pair of parentheses or braces(since C++11);

3,7) when a non-static data member or a base class is initialized using a [member initializer](initializer_list.html "cpp/language/constructor") with an empty pair of parentheses or braces(since C++11);

4) when a named object (automatic, static, or thread-local) is declared with the initializer consisting of a pair of braces.

In all cases, if the empty pair of braces `{}` is used and `T` is an aggregate type, [aggregate initialization](aggregate_initialization.html "cpp/language/aggregate initialization") is performed instead of value-initialization. 

If `T` is a class type that has no default constructor but has a constructor taking [std::initializer_list](../utility/initializer_list.html "cpp/utility/initializer list"), [list-initialization](list_initialization.html "cpp/language/list initialization") is performed.  | (since C++11)  
---|---  
  
The effects of value-initialization are: 

  * If `T` is a (possibly cv-qualified) class type: 



    

  * If the default-initialization for `T` selects a [constructor](initializer_list.html "cpp/language/constructor"), and the constructor is not user-declared(until C++11)[user-provided](function.html#User-provided_functions "cpp/language/function")(since C++11), the object is first [zero-initialized](zero_initialization.html "cpp/language/zero initialization"). 
  * In any case, the object is [default-initialized](default_initialization.html "cpp/language/default initialization"). 



  * Otherwise, if `T` is an array type, each element of the array is value-initialized. 
  * Otherwise, the object is zero-initialized. 



### Notes

The syntax T object(); does not initialize an object; it declares a function that takes no arguments and returns `T`. The way to value-initialize a named variable before C++11 was T object = T();, which value-initializes a temporary and then copy-initializes the object: most compilers [optimize out the copy](copy_elision.html "cpp/language/copy elision") in this case. 

References cannot be value-initialized. 

As described in [function-style cast](explicit_cast.html "cpp/language/explicit cast"), the syntax T() (1) is prohibited if `T` names an array type, while T{} (5) is allowed. 

All standard containers ([std::vector](../container/vector.html "cpp/container/vector"), [std::list](../container/list.html "cpp/container/list"), etc.) value-initialize their elements when constructed with a single `size_type` argument or when grown by a call to resize(), unless their allocator customizes the behavior of construct. 

### Example

Run this code
    
    
    #include <cassert>
    #include <iostream>
    #include <string>
    #include <vector>
     
    struct T1
    {
        int mem1;
        [std::string](../string/basic_string.html) mem2;
        virtual void foo() {} // make sure T1 is not an aggregate
    }; // implicit default constructor
     
    struct T2
    {
        int mem1;
        [std::string](../string/basic_string.html) mem2;
        T2(const T2&) {} // user-provided copy constructor
    };                   // no default constructor
     
    struct T3
    {
        int mem1;
        [std::string](../string/basic_string.html) mem2;
        T3() {} // user-provided default constructor
    };
     
    [std::string](../string/basic_string.html) s{}; // class => default-initialization, the value is ""
     
    int main()
    {
        int n{};                // scalar => zero-initialization, the value is 0
        [assert](../error/assert.html)(n == 0);
        double f = double();    // scalar => zero-initialization, the value is 0.0
        [assert](../error/assert.html)(f == 0.0);
        int* a = new int[10](); // array => value-initialization of each element
        [assert](../error/assert.html)(a[9] == 0);      //          the value of each element is 0
        T1 t1{};                // class with implicit default constructor =>
        [assert](../error/assert.html)(t1.mem1 == 0);   //     t1.mem1 is zero-initialized, the value is 0
        [assert](../error/assert.html)(t1.mem2 == "");  //     t1.mem2 is default-initialized, the value is ""
    //  T2 t2{};                // error: class with no default constructor
        T3 t3{};                // class with user-provided default constructor =>
        [std::cout](../io/cout.html) << t3.mem1;   //     t3.mem1 is default-initialized to indeterminate value
        [assert](../error/assert.html)(t3.mem2 == "");  //     t3.mem2 is default-initialized, the value is ""
        [std::vector](../container/vector.html)<int> v(3);  // value-initialization of each element
        [assert](../error/assert.html)(v[2] == 0);      // the value of each element is 0
        [std::cout](../io/cout.html) << '\n';
        delete[] a;
    }

Possible output: 
    
    
    42

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[CWG 178](https://cplusplus.github.io/CWG/issues/178.html) | C++98  | there was no value-initialization; empty initializer invoked default-  
initialization (though new T() also performs zero-initialization)  | empty initializer invoke  
value-initialization   
[CWG 543](https://cplusplus.github.io/CWG/issues/543.html) | C++98  | value-initialization for a class object without any  
user-provided constructors was equivalent to value-  
initializing each subobject (which need not zero-  
initialize a member with user-provided default constructor)  | zero-initializes  
the entire object,  
then calls the  
default constructor   
[CWG 1301](https://cplusplus.github.io/CWG/issues/1301.html) | C++11  | value-initialization of unions with deleted  
default constructors led to zero-initialization  | they are  
default-initialized   
[CWG 1368](https://cplusplus.github.io/CWG/issues/1368.html) | C++98  | any user-provided constructor caused  
zero-initialization to be skipped  | only a user-provided  
default constructor  
skips zero-initialization   
[CWG 1502](https://cplusplus.github.io/CWG/issues/1502.html) | C++11  | value-initializing a union without a user-provided  
default constructor only zero-initialized the  
object, despite default member initializers  | performs default-  
initialization after  
zero-initialization   
[CWG 1507](https://cplusplus.github.io/CWG/issues/1507.html) | C++98  | value-initialization for a class object without any  
user-provided constructors did not check the validity  
of the default constructor when the latter is trivial  | the validity of trivial  
default constructor  
is checked   
[CWG 2820](https://cplusplus.github.io/CWG/issues/2820.html) | C++98  | the default-initialization following the zero-  
initialization required a non-trivial constructor  | not required   
[CWG 2859](https://cplusplus.github.io/CWG/issues/2859.html) | C++98  | value-initialization for a class object might involve  
zero-initialization even if the default-initialization  
does not actually select a user-provided constructor  | there is no  
zero-initialization  
in this case   
  
### See also

  * [default constructor](default_constructor.html "cpp/language/default constructor")
  * [`explicit`](explicit.html "cpp/language/explicit")
  * [aggregate initialization](aggregate_initialization.html "cpp/language/aggregate initialization")
  * [list-initialization](list_initialization.html "cpp/language/list initialization")


