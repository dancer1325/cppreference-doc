

  
  
  
  
  

  
  
  

---  
  

---  
  


[ Functions](functions.html "cpp/language/functions")

Declarations  
---  
[Function declaration](function.html "cpp/language/function")  
[Function parameter list](function.html#Parameter_list "cpp/language/function")  
[Function definition](function.html#Function_definition "cpp/language/function")  
[Function contract specifiers](function.html#Function_contract_specifiers "cpp/language/function") (C++26)  
[Default arguments](default_arguments.html "cpp/language/default arguments")  
**Variadic arguments**  
[`inline` specifier](inline.html "cpp/language/inline")  
[Lambda expressions](lambda.html "cpp/language/lambda") (C++11)  
[Coroutines](coroutines.html "cpp/language/coroutines") (C++20)  
[Replacement functions](replacement_function.html "cpp/language/replacement function")  
Function calls  
[Argument-Dependent Lookup (ADL)](adl.html "cpp/language/adl")  
[Function-call operator](operator_other.html#Built-in_function_call_operator "cpp/language/operator other")  
[Function objects](../named_req/FunctionObject.html "cpp/named req/FunctionObject")  
Overloading  
[Overload resolution](overload_resolution.html "cpp/language/overload resolution")  
[Operator overloading](operators.html "cpp/language/operators")  
[Address of an overload set](overloaded_address.html "cpp/language/overloaded address")  
  


Allows a function to accept any number of extra arguments. 

A function is a variadic if the last parameter of its [parameter list](function.html#Parameter_list "cpp/language/function") is an ellipsis (...). 

The comma preceding the ellipsis can be omitted. | (deprecated in C++26)  
---|---  
      
    
    // the function declared as follows
    int printx(const char* fmt, ...);
    int printx(const char* fmt...); // same as above, but deprecated since C++26
     
    // may be called with one or more arguments:
    printx("hello world");
    printx("a=%d b=%d", a, b);
     
    int printy(..., const char* fmt); // error: ... can only be the last parameter
    int printz(...); // valid, but the arguments cannot be accessed portably

This is different from a function [parameter pack](parameter_pack.html "cpp/language/parameter pack") expansion, which is indicated by an ellipsis that is a part of a parameter declarator, rather than an ellipsis being a parameter alone. Both parameter pack expansion and the “variadic” ellipsis may appear in the declaration of a function template, as in the case of [std::is_function](../types/is_function.html "cpp/types/is function").  | (since C++11)  
---|---  
  
## Contents

  * [1 Default argument promotions](variadic_arguments.html#Default_argument_promotions)
  * [2 Alternatives](variadic_arguments.html#Alternatives)
  * [3 Notes](variadic_arguments.html#Notes)
  * [4 Defect reports](variadic_arguments.html#Defect_reports)
  * [5 See also](variadic_arguments.html#See_also)

  
---  
  
### Default argument promotions

When a variadic function is called, after lvalue-to-rvalue, array-to-pointer, and function-to-pointer [conversions](implicit_cast.html#Value_transformations "cpp/language/implicit conversion"), each argument that is a part of the variable argument list undergoes additional conversions known as _default argument promotions_ : 

  * [std::nullptr_t](../types/nullptr_t.html "cpp/types/nullptr t") is converted to void*. 

| (since C++11)  
---|---  
  
  * float arguments are converted to double as in [floating-point promotion](implicit_cast.html#Floating-point_promotion "cpp/language/implicit conversion"). 
  * bool, char, short, and unscoped enumerations are converted to int or wider integer types as in [integral promotion](implicit_cast.html#Integral_promotion "cpp/language/implicit conversion"). 



Non-POD class types(until C++11)Scoped enumerations and class types with an eligible non-trivial copy constructor, an eligible non-trivial move constructor, or a non-trivial destructor(since C++11) are conditionally-supported in potentially-evaluated calls with implementation-defined semantics (these types are always supported in [unevaluated calls](expressions.html#Potentially-evaluated_expressions "cpp/language/expressions")). 

Because variadic parameters have the lowest rank for the purpose of [overload resolution](overload_resolution.html "cpp/language/overload resolution"), they are commonly used as the catch-all fallbacks in [SFINAE](sfinae.html "cpp/language/sfinae"). 

Within the body of a function that uses variadic arguments, the values of these arguments may be accessed using the [`<cstdarg>` library facilities](../utility/variadic.html "cpp/utility/variadic"): 

Defined in header `[<cstdarg>](../header/cstdarg.html "cpp/header/cstdarg")`  
---  
[ va_start](../utility/variadic/va_start.html "cpp/utility/variadic/va start") |  enables access to variadic function arguments   
(function macro)   
[ va_arg](../utility/variadic/va_arg.html "cpp/utility/variadic/va arg") |  accesses the next variadic function argument   
(function macro)   
[ va_copy](../utility/variadic/va_copy.html "cpp/utility/variadic/va copy")(C++11) |  makes a copy of the variadic function arguments   
(function macro)   
[ va_end](../utility/variadic/va_end.html "cpp/utility/variadic/va end") |  ends traversal of the variadic function arguments   
(function macro)   
[ va_list](../utility/variadic/va_list.html "cpp/utility/variadic/va list") |  holds the information needed by [va_start](../utility/variadic/va_start.html "cpp/utility/variadic/va start"), [va_arg](../utility/variadic/va_arg.html "cpp/utility/variadic/va arg"), [va_end](../utility/variadic/va_end.html "cpp/utility/variadic/va end"), and [va_copy](../utility/variadic/va_copy.html "cpp/utility/variadic/va copy")   
(typedef)   
  
The behavior of the [va_start](../utility/variadic/va_start.html "cpp/utility/variadic/va start") macro is undefined if the last parameter before the ellipsis has reference type, or has type that is not [compatible](../../c/language/compatible_type.html#Compatible_types "c/language/type") with the type that results from default argument promotions. 

If the a [pack expansion](parameter_pack.html#Pack_expansion "cpp/language/parameter pack") or an entity resulting from a [lambda capture](lambda.html#Lambda_capture "cpp/language/lambda") is used as the last parameter in [va_start](../utility/variadic/va_start.html "cpp/utility/variadic/va start"), the program is ill-formed, no diagnostic required.  | (since C++11)  
---|---  
  
### Alternatives

  * [Variadic templates](parameter_pack.html "cpp/language/parameter pack") can also be used to create functions that take variable number of arguments. They are often the better choice because they do not impose restrictions on the types of the arguments, do not perform integral and floating-point promotions, and are type safe. 
  * If all variable arguments share a common type, a [std::initializer_list](../utility/initializer_list.html "cpp/utility/initializer list") provides a convenient mechanism (albeit with a different syntax) for accessing variable arguments. In this case however the arguments cannot be modified since [std::initializer_list](../utility/initializer_list.html "cpp/utility/initializer list") can only provide a const pointer to its elements. 

| (since C++11)  
---|---  
  
### Notes

In the C programming language until C23, at least one named parameter must appear before the ellipsis parameter, so R printz(...); is not valid until C23. In C++, this form is allowed even though the arguments passed to such function are not accessible, and is commonly used as the fallback overload in [SFINAE](sfinae.html "cpp/language/sfinae"), exploiting the lowest priority of the ellipsis conversion in [overload resolution](overload_resolution.html "cpp/language/overload resolution"). 

This syntax for variadic arguments was introduced in 1983 C++ without the comma before the ellipsis. When C89 adopted function prototypes from C++, it replaced the syntax with one requiring the comma. For compatibility, C++98 accepts both C++-style f(int n...) and C-style f(int n, ...). The original C++-style grammar is deprecated since C++26. 

The comma can be used in abbreviated function templates to make the ellipsis signify a variadic function instead of a variadic template: void f1(auto...); // same as template<class... Ts> void f3(Ts...)  
void f2(auto, ...); // same as template<class T> void f3(T, ...) | (since C++20)  
---|---  
  
### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[CWG 506](https://cplusplus.github.io/CWG/issues/506.html) | C++98  | passing non-POD class arguments to an  
ellipsis resulted in undefined behavior  | passing such arguments is  
conditionally-supported with  
implementation-defined semantics   
[CWG 634](https://cplusplus.github.io/CWG/issues/634.html) | C++98  | conditionally-supported class types  
made some SFINAE idioms not work  | always supported if unevaluated   
[CWG 2247](https://cplusplus.github.io/CWG/issues/2247.html) | C++11  | no restriction on passing parameter  
pack or lambda capture to `va_start` | made ill-formed,  
no diagnostic required   
[CWG 2347](https://cplusplus.github.io/CWG/issues/2347.html) | C++11  | it was unclear whether scoped enumerations passed to  
an ellipsis are subject to default argument promotions  | passing scoped enumerations  
is conditionally-supported with  
implementation-defined semantics   
  
### See also

[C documentation](../../c/language/variadic.html "c/language/variadic") for Variadic arguments  
---  
[C documentation](../../c/language/conversion.html "c/language/conversion") for Implicit conversions
