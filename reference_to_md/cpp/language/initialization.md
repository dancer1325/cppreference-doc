

  
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
**Initialization**  
| [Default-initialization](default_initialization.html "cpp/language/default initialization")  
---  
[Value-initialization](value_initialization.html "cpp/language/value initialization")  
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
  


**Initialization**

**Initializer**  
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
[Zero initialization](zero_initialization.html "cpp/language/zero initialization")  
[Constant initialization](constant_initialization.html "cpp/language/constant initialization")  
[Dynamic non-local initialization](initialization.html#Dynamic_initialization "cpp/language/initialization")  
[Ordered dynamic initialization](initialization.html#Dynamic_initialization "cpp/language/initialization")  
[Unordered dynamic initialization](initialization.html#Dynamic_initialization "cpp/language/initialization")  
[Class member initialization](initialization.html#Class_member_initialization "cpp/language/initialization")  
[Member initializer list](initializer_list.html "cpp/language/initializer list")  
[Default member initializer](data_members.html#Member_initialization "cpp/language/data members") (C++11)  
  


_Initialization_ of a variable provides its initial value at the time of construction. 

The initial value may be provided in the initializer section of a [declarator](declarations.html "cpp/language/declarations") or a [new expression](new.html "cpp/language/new"). It also takes place during function calls: function parameters and the function return values are also initialized. 

## Contents

  * [1 Initializers](initialization.html#Initializers)
    * [1.1 Initializer semantics](initialization.html#Initializer_semantics)
  * [2 Non-local variables](initialization.html#Non-local_variables)
    * [2.1 Static initialization](initialization.html#Static_initialization)
    * [2.2 Dynamic initialization](initialization.html#Dynamic_initialization)
    * [2.3 Early dynamic initialization](initialization.html#Early_dynamic_initialization)
    * [2.4 Deferred dynamic initialization](initialization.html#Deferred_dynamic_initialization)
  * [3 Static local variables](initialization.html#Static_local_variables)
  * [4 Class members](initialization.html#Class_members)
  * [5 Notes](initialization.html#Notes)
  * [6 Defect reports](initialization.html#Defect_reports)
  * [7 See also](initialization.html#See_also)

  
---  
  
### Initializers

For each declarator, the _initializer_ (if exists) may be one of the following:   
  
---  
`**=**` expression |  (1)  |   
`**= {}**`  
`**= {**` initializer-list `**}**`  
`**= {**` designated-initializer-list `**}**` |  (2)  |    
  
(since C++20)  
`**(**` expression-list `**)**`  
`**(**` initializer-list `**)**` |  (3)  |  (until C++11)  
(since C++11)  
`**{}**`  
`**{**` initializer-list `**}**`  
`**{**` designated-initializer-list `**}**` |  (4)  |  (since C++11)  
(since C++11)  
(since C++20)  
  
1) Copy-initialization syntax.

2) Aggregate initialization syntax.(until C++11)List-initialization syntax.(since C++11)

3) Direct-initialization syntax.

4) List-initialization syntax.

expression |  \-  |  any expression (except unparenthesized [comma expressions](operator_other.html#Built-in_comma_operator "cpp/language/operator other"))   
---|---|---  
expression-list |  \-  |  a comma-separated list of expressions (except unparenthesized comma expressions)   
initializer-list |  \-  |  a comma-separated list of initializer clauses (see below)   
designated-initializer-list |  \-  |  a comma-separated list of [designated initializer clauses](aggregate_initialization.html#Designated_initializers "cpp/language/aggregate initialization")  
  
  
An _initializer clause_ may be one of the following:   
  
---  
expression |  (1)  |   
`**{}**` |  (2)  |   
`**{**` initializer-list `**}**` |  (3)  |   
`**{**` designated-initializer-list `**}**` |  (4)  |  (since C++20)  
  
Syntaxes (2-4) are collectively called _brace-enclosed initializer list_. 

#### Initializer semantics

If no initializer is specified for an object, the object is [default-initialized](default_initialization.html "cpp/language/default initialization"). If no initializer is specified for a [reference](reference.html "cpp/language/reference"), the program is ill-formed. 

If the initializer specified for an object is () (cannot appear in declarators due to the syntax restriction), the object is [value-initialized](value_initialization.html "cpp/language/value initialization"). If the initializer specified for a reference is (), the program is ill-formed. 

The semantics of initializers are as follows: 

  * If the entity being initialized is a reference, see [reference initialization](reference_initialization.html "cpp/language/reference initialization"). 
  * Otherwise, the entity being initialized is an object. Given the type of the object as `T`: 



    

  * If the initializer is of syntax (1), the object is [copy-initialized](copy_initialization.html "cpp/language/copy initialization"). 



    

  * If the initializer is of syntax (2): 



    

  * If `T` is an [aggregate](aggregate_initialization.html#Definitions "cpp/language/aggregate initialization"), [aggregate initialization](aggregate_initialization.html "cpp/language/aggregate initialization") applies. 
  * If `T` is a [scalar type](../named_req/ScalarType.html "cpp/named req/ScalarType"), T x = { a }; is equivalent to T x = a;. 
  * Otherwise, the program is ill-formed. 


| (until C++11)  
---|---  
  
    

  * If the initializer is of syntax (2) or (4), the object is [list-initialized](list_initialization.html "cpp/language/list initialization"). 


| (since C++11)  
  
    

  * If the initializer is of syntax (3), the object is [direct-initialized](direct_initialization.html "cpp/language/direct initialization"). 


    
    
    #include <string>
     
    [std::string](../string/basic_string.html) s1;           // default-initialization
    [std::string](../string/basic_string.html) s2();         // NOT an initialization!
                              // actually declares a function “s2”
                              // with no parameter and returns std::string
    [std::string](../string/basic_string.html) s3 = "hello"; // copy-initialization
    [std::string](../string/basic_string.html) s4("hello");  // direct-initialization
    [std::string](../string/basic_string.html) s5{'a'};      // list-initialization (since C++11)
     
    char a[3] = {'a', 'b'}; // aggregate initialization
                            // (part of list initialization since C++11)
    char& c = a[0];         // reference initialization

### Non-local variables

All non-local variables with static [storage duration](storage_duration.html "cpp/language/storage duration") are initialized as part of program startup, before the execution of the [main function](main_function.html "cpp/language/main function") begins (unless deferred, see below). All non-local variables with thread-local storage duration are initialized as part of thread launch, sequenced-before the execution of the thread function begins. For both of these classes of variables, initialization occurs in two distinct stages: 

#### Static initialization

There are two forms of static initialization: 

1) If possible, [constant initialization](constant_initialization.html "cpp/language/constant initialization") is applied.

2) Otherwise, non-local static and thread-local variables are [zero-initialized](zero_initialization.html "cpp/language/zero initialization").

In practice: 

  * Constant initialization is usually applied at compile time. Pre-calculated object representations are stored as part of the program image. If the compiler doesn't do that, it must still guarantee that the initialization happens before any dynamic initialization. 
  * Variables to be zero-initialized are placed in the `.bss` segment of the program image, which occupies no space on disk and is zeroed out by the OS when loading the program. 



#### Dynamic initialization

After all static initialization is completed, dynamic initialization of non-local variables occurs in the following situations: 

1) _Unordered dynamic initialization_ , which applies only to (static/thread-local) class template [static data members](static.html "cpp/language/static") and [variable templates](variable_template.html "cpp/language/variable template")(since C++14) that aren't [explicitly specialized](template_specialization.html "cpp/language/template specialization"). Initialization of such static variables is indeterminately sequenced with respect to all other dynamic initialization except if the program starts a thread before a variable is initialized, in which case its initialization is unsequenced(since C++17). Initialization of such thread-local variables is unsequenced with respect to all other dynamic initialization.

2) _Partially-ordered dynamic initialization_ , which applies to all inline variables that are not an implicitly or explicitly instantiated specialization. If a partially-ordered V is defined before ordered or partially-ordered W in every translation unit, the initialization of V is sequenced before the initialization of W (or happens-before, if the program starts a thread). | (since C++17)  
---|---  
  
3) _Ordered dynamic initialization_ , which applies to all other non-local variables: within a single translation unit, initialization of these variables is always [sequenced](eval_order.html "cpp/language/eval order") in exact order their definitions appear in the source code. Initialization of static variables in different translation units is indeterminately sequenced. Initialization of thread-local variables in different translation units is unsequenced.

If the initialization of a non-local variable with static or thread storage duration exits via an exception, [std::terminate](../error/terminate.html "cpp/error/terminate") is called. 

#### Early dynamic initialization

The compilers are allowed to initialize dynamically-initialized variables as part of static initialization (essentially, at compile time), if the following conditions are both true: 

1) the dynamic version of the initialization does not change the value of any other object of namespace scope prior to its initialization

2) the static version of the initialization produces the same value in the initialized variable as would be produced by the dynamic initialization if all variables not required to be initialized statically were initialized dynamically.

Because of the rule above, if initialization of some object `o1` refers to a namespace-scope object `o2`, which potentially requires dynamic initialization, but is defined later in the same translation unit, it is unspecified whether the value of `o2` used will be the value of the fully initialized `o2` (because the compiler promoted initialization of `o2` to compile time) or will be the value of `o2` merely zero-initialized. 
    
    
    inline double fd() { return 1.0; }
     
    extern double d1;
     
    double d2 = d1;   // unspecified:
                      // dynamically initialized to 0.0 if d1 is dynamically initialized, or
                      // dynamically initialized to 1.0 if d1 is statically initialized, or
                      // statically initialized to 0.0 (because that would be its value
                      // if both variables were dynamically initialized)
     
    double d1 = fd(); // may be initialized statically or dynamically to 1.0

#### Deferred dynamic initialization

It is implementation-defined whether dynamic initialization happens-before the first statement of the main function (for statics) or the initial function of the thread (for thread-locals), or deferred to happen after. 

If the initialization of a non-inline variable(since C++17) is deferred to happen after the first statement of main/thread function, it happens before the first [ODR-use](definition.html#ODR-use "cpp/language/definition") of any variable with static/thread storage duration defined in the same translation unit as the variable to be initialized. If no variable or function is ODR-used from a given translation unit, the non-local variables defined in that translation unit may never be initialized (this models the behavior of an on-demand dynamic library). However, as long as anything from a translation unit is ODR-used, all non-local variables whose initialization or destruction has side effects will be initialized even if they are not used in the program. 

If the initialization of an inline variable is deferred, it happens before the first [ODR-use](definition.html#ODR-use "cpp/language/definition") of that specific variable.  | (since C++17)  
---|---  
      
    
    // ============
    // == File 1 ==
     
    #include "a.h"
    #include "b.h"
     
    B b;
    A::A() { b.Use(); }
     
    // ============
    // == File 2 ==
     
    #include "a.h"
     
    A a;
     
    // ============
    // == File 3 ==
     
    #include "a.h"
    #include "b.h"
     
    extern A a;
    extern B b;
     
    int main()
    {
        a.Use();
        b.Use();
    }
     
    // If a is initialized before main is entered, b may still be uninitialized
    // at the point where A::A() uses it (because dynamic initialization is
    // indeterminately sequenced across translation units)
     
    // If a is initialized at some point after the first statement of main (which odr-uses
    // a function defined in File 1, forcing its dynamic initialization to run),
    // then b will be initialized prior to its use in A::A

### Static local variables

For initialization of local (that is, block scope) static and thread-local variables, see [static block variables](storage_duration.html#Static_block_variables "cpp/language/storage duration"). 

Initializer is not allowed in a block-scope declaration of a variable with [external or internal linkage](storage_duration.html#Linkage "cpp/language/storage duration"). Such a declaration must appear with extern and cannot be a definition. 

### Class members

Non-static data members can be initialized with [member initializer list](initializer_list.html "cpp/language/initializer list") or with a [default member initializer](data_members.html#Member_initialization "cpp/language/data members"). 

### Notes

The order of destruction of non-local variables is described in [std::exit](../utility/program/exit.html "cpp/utility/program/exit"). 

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[CWG 270](https://cplusplus.github.io/CWG/issues/270.html) | C++98  | the order of initializing static data members  
of class templates was unspecified  | specified as unordered except for  
explicit specializations and definitions   
[CWG 441](https://cplusplus.github.io/CWG/issues/441.html) | C++98  | non-local references with static storage duration were  
not always initialized before dynamic initializations  | considered as static initialization, always  
initialized before dynamic initializations   
[CWG 1415](https://cplusplus.github.io/CWG/issues/1415.html) | C++98  | a block-scope extern variable  
declaration could be a definition  | prohibited (no initializer  
allowed in such declarations)   
[CWG 2599](https://cplusplus.github.io/CWG/issues/2599.html) | C++98  | it was unclear whether evaluating function  
arguments in the initializer is part of initialization  | it is part of initialization   
  
### See also

  * [copy elision](copy_elision.html "cpp/language/copy elision")
  * [converting constructor](converting_constructor.html "cpp/language/converting constructor")
  * [copy constructor](copy_constructor.html "cpp/language/copy constructor")
  * [default constructor](default_constructor.html "cpp/language/default constructor")
  * [`explicit`](explicit.html "cpp/language/explicit")
  * [move constructor](move_constructor.html "cpp/language/move constructor")
  * [`new`](new.html "cpp/language/new")

[C documentation](../../c/language/initialization.html "c/language/initialization") for Initialization  
---
