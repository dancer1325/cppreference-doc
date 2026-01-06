

  
  
  
  
  
Specifiers  
| [`const`/`volatile`](cv.html "cpp/language/cv")  
---  
[`decltype`](decltype.html "cpp/language/decltype") (C++11)  
[`auto`](auto.html "cpp/language/auto") (C++11)  
  
| [`constexpr`](constexpr.html "cpp/language/constexpr") (C++11)  
---  
**`consteval`** (C++20)  
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
[constexpr](constexpr.html "cpp/language/constexpr")(C++11)  
**consteval**(C++20)  
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
  
 
  
  
  


    

  * `**consteval**` \- specifies that a function is an _immediate function_ , that is, every call to the function must produce a compile-time constant 



## Contents

  * [1 Explanation](consteval.html#Explanation)
  * [2 Notes](consteval.html#Notes)
  * [3 Keywords](consteval.html#Keywords)
  * [4 Example](consteval.html#Example)
  * [5 See also](consteval.html#See_also)

  
---  
  
### Explanation

The `consteval` specifier declares a function or function template to be an _immediate function_ , that is, every [potentially-evaluated](expressions.html#Potentially-evaluated_expressions "cpp/language/expressions") call to the function must (directly or indirectly) produce a compile time [constant expression](constant_expression.html "cpp/language/constant expression"). 

An immediate function is a [constexpr function](constexpr.html#constexpr_function "cpp/language/constexpr"), subject to its requirements as the case may be. Same as `constexpr`, a `consteval` specifier implies `inline`. However, it may not be applied to destructors, allocation functions, or deallocation functions. 

A function or function template declaration specifying `consteval` may not also specify `constexpr`, and any redeclarations of that function or function template must also specify `consteval`. 

A [potentially-evaluated](expressions.html#Potentially-evaluated_expressions "cpp/language/expressions") invocation of an immediate function whose innermost non-block scope is not a [function parameter scope](scope.html#Function_parameter_scope "cpp/language/scope") of an immediate function  or the true-branch of a [consteval if statement](if.html#Consteval_if "cpp/language/if")(since C++23) must produce a constant expression; such an invocation is known as an _immediate invocation_. 
    
    
    consteval int sqr(int n)
    {
        return n*n;
    }
    constexpr int r = sqr(100); // OK
     
    int x = 100;
    int r2 = sqr(x);            // Error: Call does not produce a constant
     
    consteval int sqrsqr(int n)
    {
        return sqr(sqr(n));     // Not a constant expression at this point, but OK
    }
     
    constexpr int dblsqr(int n)
    {
        return 2 * sqr(n);      // Error: Enclosing function is not consteval
                                // and sqr(n) is not a constant
    }

An [identifier expression](name.html#In_expressions "cpp/language/identifiers") that denotes an immediate function may only appear within a subexpression of an immediate invocation or within an _immediate function context_ (i.e. a context mentioned above, in which a call to an immediate function needs not to be a constant expression). A pointer or reference to an immediate function can be taken but cannot escape constant expression evaluation: 
    
    
    consteval int f() { return 42; }
    consteval auto g() { return &f; }
    consteval int h(int (*p)() = g()) { return p(); }
    constexpr int r = h();  // OK
    constexpr auto e = g(); // ill-formed: a pointer to an immediate function is
                            // not a permitted result of a constant expression

### Notes

Feature-test macro  | Value | Std | Feature   
---|---|---|---  
[`__cpp_consteval`](../experimental/feature_test.html#cpp_consteval "cpp/feature test") | [`201811L`](../compiler_support/20.html#cpp_consteval_201811L "cpp/compiler support/20") | (C++20) | Immediate functions   
[`202211L`](../compiler_support/23.html#cpp_consteval_202211L "cpp/compiler support/23") | (C++23)  
(DR20) | Making consteval propagate up   
  
### Keywords

[`consteval`](../keyword/consteval.html "cpp/keyword/consteval")

### Example

Run this code
    
    
    #include <iostream>
     
    // This function might be evaluated at compile-time, if the input
    // is known at compile-time. Otherwise, it is executed at run-time.
    constexpr unsigned factorial(unsigned n)
    {
        return n < 2 ? 1 : n * factorial(n - 1);
    }
     
    // With consteval we enforce that the function will be evaluated at compile-time.
    consteval unsigned combination(unsigned m, unsigned n)
    {
        return factorial(n) / factorial(m) / factorial(n - m);
    }
     
    static_assert(factorial(6) == 720);
    static_assert(combination(4, 8) == 70);
     
    int main(int argc, const char*[])
    {
        constexpr unsigned x{factorial(4)};
        [std::cout](../io/cout.html) << x << '\n';
     
        [[maybe_unused]]
        unsigned y = factorial(argc); // OK
    //  unsigned z = combination(argc, 7); // error: 'argc' is not a constant expression
    }

Output: 
    
    
    24

### See also

[ `constexpr` specifier](constexpr.html "cpp/language/constexpr")(C++11) |  specifies that the value of a variable or function can be computed at compile time  
---|---  
[ `constinit` specifier](constinit.html "cpp/language/constinit")(C++20) |  asserts that a variable has static initialization, i.e. [zero initialization](zero_initialization.html "cpp/language/zero initialization") and [constant initialization](constant_initialization.html "cpp/language/constant initialization")  
[constant expression](constant_expression.html "cpp/language/constant expression") |  defines an [expression](expressions.html "cpp/language/expressions") that can be evaluated at compile time 
  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
