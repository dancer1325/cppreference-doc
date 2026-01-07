

  
| [`goto`](goto.html "cpp/language/goto") \- [`return`](return.html "cpp/language/return")  
---  
  
**Functions**  
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
  
  
  

  
  
  

---  
  

---  
  


**Functions**

Declarations  
---  
[Function declaration](function.html "cpp/language/function")  
  
  


Functions are C++ entities that associate a sequence of [statements](statements.html "cpp/language/statements") (a _function body_) with a _name_ and a list of zero or more _function parameters_. 
    
    
    // function name: "isodd"
    // parameter list has one parameter, with name "n" and type int
    // the return type is bool
    bool isodd(int n)
    {                 // the body of the function begins
        return n % 2;
    }                 // the body of the function ends

When a function is invoked, e.g. in a [function-call expression](operator_other.html#Built-in_function_call_operator "cpp/language/operator other"), the parameters are initialized from the arguments (either provided at the place of call or [defaulted](default_arguments.html "cpp/language/default arguments")) and the statements in the function body are executed. If the [parameter list](function.html#Parameter_list "cpp/language/function") ends with ..., extra arguments can be supplied to the function, such a function is called [variadic function](variadic_arguments.html "cpp/language/variadic arguments"). 
    
    
    int main()
    {
        for (int arg : {-3, -2, -1, 0, 1, 2, 3})
            [std::cout](../io/cout.html) << isodd(arg) << ' '; // isodd called 7 times, each
                                            // time n is copy-initialized from arg
    }

[Unqualified](unqualified_lookup.html "cpp/language/unqualified lookup") function names in function-call expressions are looked up with an extra set of rules called ["argument-dependent lookup" (ADL)](adl.html "cpp/language/adl"). 

A function can terminate by [returning](return.html "cpp/language/return") or by [throwing](throw.html "cpp/language/throw") an [exception](exceptions.html "cpp/language/exceptions"). 

A function may be a [coroutine](coroutines.html "cpp/language/coroutines"), in which case it can suspend execution to be resumed later.  | (since C++20)  
---|---  
  
A [function declaration](function.html "cpp/language/function") may appear in any scope, but a [function definition](function.html "cpp/language/function") may only appear in namespace scope or, for [member](member_functions.html "cpp/language/member functions") and [friend](friend.html "cpp/language/friend") functions, in class scope. A function that is declared in a class body without a friend specifier is a class member function. Such functions have many additional properties, see [member functions](member_functions.html "cpp/language/member functions") for details. 

Functions are not objects: there are no arrays of functions and functions cannot be passed by value or returned from other functions. Pointers and references to functions (except for [the main function](main_function.html "cpp/language/main function") and [most standard library functions](extending_std.html#Addressing_restriction "cpp/language/extending std")(since C++20)) are allowed, and may be used where these functions themselves cannot. Therefore we say these functions are "addressable". 

Each function has a type, which consists of the function's return type, the types of all parameters (after array-to-pointer and function-to-pointer transformations, see [parameter list](function.html#Parameter_list "cpp/language/function")) , whether the function is [`noexcept`](noexcept_spec.html "cpp/language/noexcept spec") or not(since C++17), and, for non-static member functions, cv-qualification and ref-qualification(since C++11). Function types also have [language linkage](language_linkage.html "cpp/language/language linkage"). There are no cv-qualified function types (not to be confused with the types of [cv-qualified functions](member_functions.html "cpp/language/member functions") such as int f() const; or functions returning [cv-qualified types](cv.html "cpp/language/cv"), such as [std::string](../string/basic_string.html) const f();). Any cv-qualifier is ignored if it is added to an alias for a function type. 

Multiple functions in the same scope may have the same name, as long as their parameter lists and, for non-static member functions, cv/ref(since C++11)-qualifications are different. This is known as [function overloading](overload_resolution.html "cpp/language/overload resolution"). Function declarations that differ only in the return type and the noexcept specification(since C++17) cannot be overloaded. The [address of an overloaded function](overloaded_address.html "cpp/language/overloaded address") is determined differently. 

C++ implements [anonymous functions](https://en.wikipedia.org/wiki/anonymous_function "enwiki:anonymous function") using [lambda-expressions](lambda.html "cpp/language/lambda").  | (since C++11)  
---|---  
  
### Function objects

Besides function lvalues, the function call expression supports pointers to functions, and any value of class type that overloads the function-call operator or is convertible to function pointer (including [lambda-expressions](lambda.html "cpp/language/lambda"))(since C++11). Together, these types are known as [FunctionObjects](../named_req/FunctionObject.html "cpp/named req/FunctionObject"), and they are used ubiquitously through the C++ standard library, see for example, usages of [BinaryPredicate](../named_req/BinaryPredicate.html "cpp/named req/BinaryPredicate") and [Compare](../named_req/Compare.html "cpp/named req/Compare"). 

The standard library also provides a number of predefined [function object templates](../functional.html "cpp/utility/functional") as well as the methods to compose new ones (including [std::less](../utility/functional/less.html "cpp/utility/functional/less"), [std::mem_fn](../utility/functional/mem_fn.html "cpp/utility/functional/mem fn"), [std::bind](../utility/functional/bind.html "cpp/utility/functional/bind"), [std::function](../utility/functional/function.html "cpp/utility/functional/function")(since C++11), [std::not_fn](../utility/functional/not_fn.html "cpp/utility/functional/not fn")(since C++17), [std::bind_front](../utility/functional/bind_front.html "cpp/utility/functional/bind front")(since C++20), std::bind_back, std::move_only_function(since C++23), std::copyable_function, and std::function_ref(since C++26)). 
