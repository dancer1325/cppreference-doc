

  
  
  
  
  
Specifiers  
| [`const`/`volatile`](cv.html "cpp/language/cv")  
---  
[`decltype`](decltype.html "cpp/language/decltype") (C++11)  
[`auto`](auto.html "cpp/language/auto") (C++11)  
  
| **`constexpr`** (C++11)  
---  
[`consteval`](consteval.html "cpp/language/consteval") (C++20)  
[`constinit`](constinit.html "cpp/language/constinit") (C++20)  
  
[Storage duration specifiers](storage_duration.html "cpp/language/storage duration")  
[Initialization](initialization.html "cpp/language/initialization")  
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
  


[Declarations](declarations.html "cpp/language/declarations")

| Overview  
---  
[Declaration syntax](declarations.html "cpp/language/declarations")  
[_decl-specifier-seq_](declarations.html#Specifiers "cpp/language/declarations")  
[Declarator](declarations.html#Declarators "cpp/language/declarations")  
[Conflicting declarations](conflicting_declarations.html "cpp/language/conflicting declarations")  
Specifiers  
[typedef](typedef.html "cpp/language/typedef")  
[inline](inline.html "cpp/language/inline")  
[virtual function specifier](virtual.html "cpp/language/virtual")  
[explicit function specifier](explicit.html "cpp/language/explicit")  
[friend](friend.html "cpp/language/friend")  
**constexpr**(C++11)  
[consteval](consteval.html "cpp/language/consteval")(C++20)  
[constinit](constinit.html "cpp/language/constinit")(C++20)  
[Storage class specifiers](storage_duration.html "cpp/language/storage duration")  
[Translation-unit-local](tu_local.html "cpp/language/tu local") (C++20)  
[class/struct](class.html "cpp/language/class")  
[union](union.html "cpp/language/union")  
[enum](enum.html "cpp/language/enum")  
[decltype](decltype.html "cpp/language/decltype")(C++11)  
[auto](auto.html "cpp/language/auto")(C++11)  
[alignas](alignas.html "cpp/language/alignas")(C++11)  
[constvolatile](cv.html "cpp/language/cv")  
[Pack indexing specifier](pack_indexing.html#Pack_indexing_specifier "cpp/language/pack indexing") (C++26)  
[Elaborated type specifier](elaborated_type_specifier.html "cpp/language/elaborated type specifier")  
[Attributes](attributes.html "cpp/language/attributes") (C++11)  
  
 
  
  
  


    

  * `**constexpr**` \- specifies that the value of a variable, [structured binding](structured_binding.html "cpp/language/structured binding")(since C++26) or function can appear in [constant expressions](constant_expression.html "cpp/language/constant expression")



## Contents

  * [1 Explanation](constexpr.html#Explanation)
  * [2 constexpr variable](constexpr.html#constexpr_variable)
  * [3 constexpr function](constexpr.html#constexpr_function)
  * [4 constexpr constructor](constexpr.html#constexpr_constructor)
  * [5 constexpr destructor](constexpr.html#constexpr_destructor)
  * [6 Notes](constexpr.html#Notes)
  * [7 Keywords](constexpr.html#Keywords)
  * [8 Example](constexpr.html#Example)
  * [9 Defect reports](constexpr.html#Defect_reports)
  * [10 See also](constexpr.html#See_also)

  
---  
  
### Explanation

The constexpr specifier declares that it is possible to evaluate the value of the entities at compile time. Such entities can then be used where only compile time [constant expressions](constant_expression.html "cpp/language/constant expression") are allowed (provided that appropriate function arguments are given). 

A constexpr specifier used in an object declaration or non-static member function(until C++14) implies const. 

A constexpr specifier used in the first declaration of a function or [static](static.html "cpp/language/static") data member(since C++17) implies inline. If any declaration of a function or function template has a constexpr specifier, then every declaration must contain that specifier. 

### constexpr variable

A variable or variable template(since C++14) can be declared constexpr if all following conditions are satisfied: 

  * The declaration is a [definition](definition.html "cpp/language/definition"). 
  * It is of a [literal type](constant_expression.html#Literal_type "cpp/language/constant expression"). 
  * It is initialized (by the declaration). 



  * The [full-expression](expressions.html#Full-expressions "cpp/language/expressions") of its initialization is a [constant expression](constant_expression.html "cpp/language/constant expression"). 

| (until C++26)  
---|---  
  
  * It is [constant-initializable](constant_expression.html#Constant-initialized_entities "cpp/language/constant expression"). 

| (since C++26)  
  
  * It has constant destruction, which means one of the following conditions needs to be satisfied: 



    

  * It is not of class type nor (possibly multi-dimensional) array thereof. 
  * It is of a class type with a constexpr destructor or (possibly multi-dimensional) array thereof, and for a hypothetical expression e whose only effect is to destroy the object, e would be a [core constant expression](constant_expression.html#Core_constant_expression "cpp/language/constant expression") if the lifetime of the object and its non-mutable subobjects (but not its mutable subobjects) were considered to start within e. 


If a constexpr variable is not [translation-unit-local](tu_local.html "cpp/language/tu local"), it should not be initialized to refer to a translation-unit-local entity that is usable in constant expressions, nor have a subobject that refers to such an entity. Such initialization is disallowed in a [module interface unit](modules.html "cpp/language/modules") (outside its [private module fragment](modules.html#Private_module_fragment "cpp/language/modules"), if any) or a module partition, and is deprecated in any other context.  | (since C++20)  
---|---  
  
### constexpr function

A function or function template can be declared constexpr. 

A function is _constexpr-suitable_ if all following conditions are satisfied: 

  * It is not a [virtual](virtual.html "cpp/language/virtual") function. 

| (until C++20)  
---|---  
  
  * Its return type (if exists) is a [literal type](constant_expression.html#Literal_type "cpp/language/constant expression"). 
  * Each of its parameter types is a literal type. 

| (until C++23)  
  
  * It is not a [coroutine](coroutines.html "cpp/language/coroutines"). 

| (since C++20)  
  
  * If it is a constructor or destructor(since C++20), its class does not have any [virtual base class](derived_class.html#Virtual_base_classes "cpp/language/derived class"). 



  * Its function body is = default, = delete, or a compound statement [enclosing](statements.html#Substatements "cpp/language/statements") only the following: 



    

  * [null statements](statements.html#Expression_statements "cpp/language/statements")
  * [`static_assert`](static_assert.html "cpp/language/static assert") declarations 
  * [`typedef`](typedef.html "cpp/language/typedef") declarations and [alias](type_alias.html "cpp/language/type alias") declarations that do not define classes or enumerations 
  * [using declarations](namespace.html#Using-declarations "cpp/language/namespace")
  * [using directives](namespace.html#Using-directives "cpp/language/namespace")
  * exactly one [`return`](return.html "cpp/language/return") statement if the function is not a constructor 


| (until C++14)  
---|---  
  
  * Its function body is = default, = delete, or a compound statement that(until C++20) does **not** [enclose](statements.html#Substatements "cpp/language/statements") the following: 



    

  * [goto](goto.html "cpp/language/goto") statements 
  * statements with [labels](statements.html#Labeled_statements "cpp/language/statements") other than case and default


| 

    

  * [try blocks](try.html "cpp/language/try")
  * [inline assembly](asm.html "cpp/language/asm") declarations 
  * definitions of variables for which [no initialization is performed](default_initialization.html "cpp/language/default initialization")


| (until C++20)  
---|---  
  
    

  * definitions of variables of non-literal types 
  * definitions of variables of static or thread [storage duration](storage_duration.html "cpp/language/storage duration")


(since C++14)  
(until C++23)  
  
Except for instantiated constexpr functions, non-templated constexpr functions must be constexpr-suitable. 

For a non-constructor constexpr function that is neither defaulted nor templated, if no argument values exist such that an invocation of the function could be an evaluated subexpression of a [core constant expression](constant_expression.html#Core_constant_expression "cpp/language/constant expression"), the program is ill-formed, no diagnostic required. For a templated constexpr function, if no specialization of the function/class template would make the templated function constexpr-suitable when considered as a non-templated function, the program is ill-formed, no diagnostic required.  | (until C++23)  
---|---  
  
An invocation of a constexpr function in a given context produces the same result as an invocation of an equivalent non-constexpr function in the same context in all respects, with the following exceptions: 

  * An invocation of a constexpr function can appear in a [constant expression](constant_expression.html "cpp/language/constant expression"). 
  * [Copy elision](copy_elision.html "cpp/language/copy elision") is not performed in a constant expression. 



### constexpr constructor

On top of the requirements of constexpr functions, a constructor also needs to satisfy all following conditions to be constexpr-suitable: 

  * Its function body is = delete or satisfies the following additional requirements: 

| 

    

  * If the class is a [union](union.html "cpp/language/union") having variant members, exactly one of them is initialized. 
  * If the class is a [union-like class](union.html#Union-like_classes "cpp/language/union"), but is not a union, for each of its anonymous union members having variant members, exactly one of them is initialized. 
  * Every non-variant non-static data member and base class subobject is initialized. 


| (until C++20)  
---|---  
  
    

  * If the constructor is a [delegating constructor](initializer_list.html#Delegating_constructor "cpp/language/constructor"), the target constructor is a constexpr constructor. 
  * If the constructor is a non-delegating constructor, every constructor selected to initialize non-static data members and base class subobjects is a constexpr constructor. 


(until C++23)  
  
  * The class does not have any [virtual base class](derived_class.html#Virtual_base_classes "cpp/language/derived class"). 

For a constexpr constructor that is neither defaulted nor templated, if no argument values exist such that an invocation of the function could be an evaluated subexpression of the initialization full-expression of some object subject to [constant expression](constant_expression.html "cpp/language/constant expression"), the program is ill-formed, no diagnostic required.  | (until C++23)  
---|---  
  
### constexpr destructor

Destructors cannot be constexpr, but a [trivial destructor](destructor.html#Trivial_destructor "cpp/language/destructor") can be implicitly called in constant expressions.  | (until C++20)  
---|---  
On top of the requirements of constexpr functions, a destructor also needs to satisfy all following conditions to be constexpr-suitable:  | 

  * For every subobject of class type or (possibly multi-dimensional) array thereof, that class type has a constexpr destructor. 

| (until C++23)  
---|---  
  
  * The class does not have any virtual base class. 

(since C++20)  
  
### Notes

Because the [`noexcept`](noexcept.html "cpp/language/noexcept") operator always returns true for a constant expression, it can be used to check if a particular invocation of a constexpr function takes the constant expression branch: 
    
    
    constexpr int f(); 
    constexpr bool b1 = noexcept(f()); // false, undefined constexpr function
    constexpr int f() { return 0; }
    constexpr bool b2 = noexcept(f()); // true, f() is a constant expression

| (until C++17)  
---|---  
It is possible to write a constexpr function whose invocation can never satisfy the requirements of a core constant expression: 
    
    
    void f(int& i) // not a constexpr function
    {
        i = 0;
    }
     
    constexpr void g(int& i) // well-formed since C++23
    {
        f(i); // unconditionally calls f, cannot be a constant expression
    }

| (since C++23)  
---|---  
  
Constexpr constructors are permitted for classes that are not literal types. For example, the default constructor of [std::shared_ptr](../memory/shared_ptr.html "cpp/memory/shared ptr") is constexpr, allowing [constant initialization](constant_initialization.html "cpp/language/constant initialization"). 

Reference variables can be declared constexpr (their initializers have to be [reference constant expressions](constant_expression.html#Constant_expression "cpp/language/constant expression")): 
    
    
    static constexpr int const& x = 42; // constexpr reference to a const int object
                                        // (the object has static storage duration
                                        //  due to life extension by a static reference)

Even though try blocks and inline assembly are allowed in constexpr functions, throwing exceptions that are uncaught(since C++26) or executing the assembly is still disallowed in a constant expression. If a variable has constant destruction, there is no need to generate machine code in order to call destructor for it, even if its destructor is not trivial. A non-lambda, non-special-member, and non-templated constexpr function cannot implicitly become an immediate function. Users need to explicitly mark it consteval to make such an intended function definition well-formed.  | (since C++20)  
---|---  
Feature-test macro  | Value | Std | Feature   
---|---|---|---  
[`__cpp_constexpr`](../experimental/feature_test.html#cpp_constexpr "cpp/feature test") | [`200704L`](../compiler_support/11.html#cpp_constexpr_200704L "cpp/compiler support/11") | (C++11) | constexpr  
[`201304L`](../compiler_support/14.html#cpp_constexpr_201304L "cpp/compiler support/14") | (C++14) | [Relaxed constexpr](constexpr.html#relaxed-constexpr), [non-const constexpr methods](constexpr.html#constexpr-method-is-const)  
[`201603L`](../compiler_support/17.html#cpp_constexpr_201603L "cpp/compiler support/17") | (C++17) | [Constexpr lambda](lambda.html "cpp/language/lambda")  
[`201907L`](../compiler_support/20.html#cpp_constexpr_201907L "cpp/compiler support/20") | (C++20) | Trivial [default initialization](default_initialization.html "cpp/language/default initialization") and [asm-declaration](asm.html "cpp/language/asm") in constexpr functions   
[`202002L`](../compiler_support/20.html#cpp_constexpr_202002L "cpp/compiler support/20") | (C++20) | Changing the active member of a union in constant evaluation   
[`202110L`](../compiler_support/23.html#cpp_constexpr_202110L "cpp/compiler support/23") | (C++23) | Non-[literal](../named_req/LiteralType.html "cpp/named req/LiteralType") variables, labels, and [`goto`](../language.html "cpp/language") statements in constexpr functions   
[`202207L`](../compiler_support/23.html#cpp_constexpr_202207L "cpp/compiler support/23") | (C++23) | Relaxing some constexpr restrictions   
[`202211L`](../compiler_support/23.html#cpp_constexpr_202211L "cpp/compiler support/23") | (C++23) | Permitting static constexpr variables in constexpr functions   
[`202306L`](../compiler_support/26.html#cpp_constexpr_202306L "cpp/compiler support/26") | (C++26) | Constexpr cast from void*: towards constexpr type-erasure   
[`__cpp_constexpr_in_decltype`](../experimental/feature_test.html#cpp_constexpr_in_decltype "cpp/feature test") | [`201711L`](../compiler_support/11.html#cpp_constexpr_in_decltype_201711L "cpp/compiler support/11") | (C++11)  
(DR) | Generation of function and variable definitions when [needed for constant evaluation](constant_expression.html#Functions_and_variables_needed_for_constant_evaluation "cpp/language/constant expression")  
[`__cpp_constexpr_dynamic_alloc`](../experimental/feature_test.html#cpp_constexpr_dynamic_alloc "cpp/feature test") | [`201907L`](../compiler_support/20.html#cpp_constexpr_dynamic_alloc_201907L "cpp/compiler support/20") | (C++20) | Operations for dynamic storage duration in constexpr functions   
  
### Keywords

[`constexpr`](../keyword/constexpr.html "cpp/keyword/constexpr")

### Example

Defines C++11/14 constexpr functions that compute factorials; defines a literal type that extends string literals:

Run this code
    
    
    #include <iostream>
    #include <stdexcept>
     
    // C++11 constexpr functions use recursion rather than iteration
    constexpr int factorial(int n)
    {
        return n <= 1 ? 1 : (n * factorial(n - 1));
    }
     
    // C++14 constexpr functions may use local variables and loops
    #if __cplusplus >= 201402L
    constexpr int factorial_cxx14(int n)
    {
        int res = 1;
        while (n > 1)
            res *= n--;
        return res;
    }
    #endif // C++14
     
    // A literal class
    class conststr
    {
        const char* p;
        [std::size_t](../types/size_t.html) sz;
    public:
        template<[std::size_t](../types/size_t.html) N>
        constexpr conststr(const char(&a)[N]): p(a), sz(N - 1) {}
     
        // constexpr functions signal errors by throwing exceptions
        // in C++11, they must do so from the conditional operator ?:
        constexpr char operator[]([std::size_t](../types/size_t.html) n) const
        {
            return n < sz ? p[n] : throw [std::out_of_range](../error/out_of_range.html)("");
        }
     
        constexpr [std::size_t](../types/size_t.html) size() const { return sz; }
    };
     
    // C++11 constexpr functions had to put everything in a single return statement
    // (C++14 does not have that requirement)
    constexpr [std::size_t](../types/size_t.html) countlower(conststr s, [std::size_t](../types/size_t.html) n = 0,
                                                 [std::size_t](../types/size_t.html) c = 0)
    {
        return n == s.size() ? c :
            'a' <= s[n] && s[n] <= 'z' ? countlower(s, n + 1, c + 1)
                                       : countlower(s, n + 1, c);
    }
     
    // An output function that requires a compile-time constant, for testing
    template<int n>
    struct constN
    {
        constN() { [std::cout](../io/cout.html) << n << '\n'; }
    };
     
    int main()
    {
        [std::cout](../io/cout.html) << "4! = ";
        constN<factorial(4)> out1; // computed at compile time
     
        volatile int k = 8; // disallow optimization using volatile
        [std::cout](../io/cout.html) << k << "! = " << factorial(k) << '\n'; // computed at run time
     
        [std::cout](../io/cout.html) << "The number of lowercase letters in \"Hello, world!\" is ";
        constN<countlower("Hello, world!")> out2; // implicitly converted to conststr
     
        constexpr int a[12] = {0, 1, 2, 3, 4, 5, 6, 7, 8};
        constexpr int length_a = sizeof a / sizeof(int); // std::size(a) in C++17,
                                                          // std::ssize(a) in C++20
        [std::cout](../io/cout.html) << "Array of length " << length_a << " has elements: ";
        for (int i = 0; i < length_a; ++i)
            [std::cout](../io/cout.html) << a[i] << ' ';
        [std::cout](../io/cout.html) << '\n';
    }

Output: 
    
    
    4! = 24
    8! = 40320
    The number of lowercase letters in "Hello, world!" is 9
    Array of length 12 has elements: 0 1 2 3 4 5 6 7 8 0 0 0

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[CWG 1358](https://cplusplus.github.io/CWG/issues/1358.html) | C++11  | templated constexpr functions also needed  
to have at least one valid argument value  | no need   
[CWG 1359](https://cplusplus.github.io/CWG/issues/1359.html) | C++11  | constexpr union constructors  
must initialize all data members  | initializes exactly one data  
member for non-empty unions   
[CWG 1366](https://cplusplus.github.io/CWG/issues/1366.html) | C++11  | classes with constexpr constructors whose function bodies  
are = default or = delete could have virtual base classes  | such classes can neither  
have virtual base classes   
[CWG 1595](https://cplusplus.github.io/CWG/issues/1595.html) | C++11  | constexpr delegating constructors required  
all involved constructors to be constexpr | only requires the target  
constructor to be constexpr  
[CWG 1712](https://cplusplus.github.io/CWG/issues/1712.html) | C++14  | a constexpr variable template was required to have  
all its declarations contain the constexpr specifier[[1]](constexpr.html#cite_note-1) | not required anymore   
[CWG 1911](https://cplusplus.github.io/CWG/issues/1911.html) | C++11  | constexpr constructors for non-literal types were not allowed  | allowed in constant initialization   
[CWG 2004](https://cplusplus.github.io/CWG/issues/2004.html) | C++11  | copy/move of a union with a mutable member  
was allowed in a constant expression  | mutable variants disqualify  
implicit copy/move   
[CWG 2022](https://cplusplus.github.io/CWG/issues/2022.html) | C++98  | whether equivalent constexpr and non-constexpr  
function produce equal result might depend  
on whether copy elision is performed  | assume that copy elision is always  
performed in constant expressions   
[CWG 2163](https://cplusplus.github.io/CWG/issues/2163.html) | C++14  | labels were allowed in constexpr functions  
even though goto statements are prohibited  | labels also prohibited   
[CWG 2268](https://cplusplus.github.io/CWG/issues/2268.html) | C++11  | copy/move of a union with a mutable member was  
prohibited by the resolution of [CWG issue 2004](https://cplusplus.github.io/CWG/issues/2004.html) | allowed if the object is created  
within the constant expression   
[CWG 2278](https://cplusplus.github.io/CWG/issues/2278.html) | C++98  | the resolution of [CWG issue 2022](https://cplusplus.github.io/CWG/issues/2022.html) was not implementable  | assume that copy elision is never  
performed in constant expressions   
[CWG 2531](https://cplusplus.github.io/CWG/issues/2531.html) | C++11  | a non-inline variable became inline  
if it is redeclared with constexpr | the variable does  
not become inline   
  
  1. [↑](constexpr.html#cite_ref-1) It is redundant because there cannot be more than one declaration of a variable template with the constexpr specifier.



### See also

[constant expression](constant_expression.html "cpp/language/constant expression") |  defines an [expression](expressions.html "cpp/language/expressions") that can be evaluated at compile time   
---|---  
[ `consteval` specifier](consteval.html "cpp/language/consteval")(C++20) |  specifies that a function is an _immediate function_ , that is, every call to the function must be in a constant evaluation  
[ `constinit` specifier](constinit.html "cpp/language/constinit")(C++20) |  asserts that a variable has static initialization, i.e. [zero initialization](zero_initialization.html "cpp/language/zero initialization") and [constant initialization](constant_initialization.html "cpp/language/constant initialization")  
[C documentation](../../c/language/constexpr.html "c/language/constexpr") for constexpr
  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
