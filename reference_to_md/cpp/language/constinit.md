

  
  
  
  
  
Specifiers  
| [`const`/`volatile`](cv.html "cpp/language/cv")  
---  
[`decltype`](decltype.html "cpp/language/decltype") (C++11)  
[`auto`](auto.html "cpp/language/auto") (C++11)  
  
| [`constexpr`](constexpr.html "cpp/language/constexpr") (C++11)  
---  
[`consteval`](consteval.html "cpp/language/consteval") (C++20)  
**`constinit`** (C++20)  
  
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
[consteval](consteval.html "cpp/language/consteval")(C++20)  
**constinit**(C++20)  
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
  
 
  
  
  


    

  * `**constinit**` \- asserts that a variable has static initialization, i.e. [zero initialization](zero_initialization.html "cpp/language/zero initialization") and [constant initialization](constant_initialization.html "cpp/language/constant initialization"), otherwise the program is ill-formed. 



## Contents

  * [1 Explanation](constinit.html#Explanation)
  * [2 Notes](constinit.html#Notes)
  * [3 Keywords](constinit.html#Keywords)
  * [4 Example](constinit.html#Example)
  * [5 Defect reports](constinit.html#Defect_reports)
  * [6 See also](constinit.html#See_also)

  
---  
  
### Explanation

The constinit specifier declares a variable with static or thread [storage duration](storage_duration.html "cpp/language/storage duration"). 

The constinit specifier can also be applied to [structured binding](structured_binding.html "cpp/language/structured binding") declarations. In this case, constinit is also applied to the [uniquely-named variable](structured_binding.html#Binding_process "cpp/language/structured binding") introduced by the declaration.  | (since C++26)  
---|---  
  
If a variable is declared with constinit, its [initializing declaration](initialization.html "cpp/language/initialization") must be applied with constinit. If a variable declared with constinit has [dynamic initialization](initialization.html#Dynamic_initialization "cpp/language/initialization") (even if it is [performed as static initialization](initialization.html#Early_dynamic_initialization "cpp/language/initialization")), the program is ill-formed. 

If no constinit declaration is reachable at the point of the initializing declaration, the program is ill-formed, no diagnostic required. 

constinit cannot be used together with constexpr. When the declared variable is a reference, constinit is equivalent to constexpr. When the declared variable is an object, constexpr mandates that the object must have static initialization and constant destruction and makes the object const-qualified, however, constinit does not mandate constant destruction and const-qualification. As a result, an object of a type which has constexpr constructors and no constexpr destructor (e.g. [std::shared_ptr](../memory/shared_ptr.html)<T>) might be declared with constinit but not constexpr. 
    
    
    const char* g() { return "dynamic initialization"; }
    constexpr const char* f(bool p) { return p ? "constant initializer" : g(); }
     
    constinit const char* c = f(true);     // OK
    // constinit const char* d = f(false); // error

constinit can also be used in a non-initializing declaration to tell the compiler that a thread_local variable is already initialized, [reducing overhead](storage_duration.html#Static_local_variables "cpp/language/storage duration") that would otherwise be incurred by a hidden guard variable. 
    
    
    extern thread_local constinit int x;
    int f() { return x; } // no check of a guard variable needed

### Notes

Feature-test macro | Value | Std | Feature   
---|---|---|---  
[`__cpp_constinit`](../experimental/feature_test.html#cpp_constinit "cpp/feature test") | [`201907L`](../compiler_support/20.html#cpp_constinit_201907L "cpp/compiler support/20") | (C++20) | constinit  
  
### Keywords

[`constinit`](../keyword/constinit.html "cpp/keyword/constinit")

### Example

Run this code
    
    
    #include <cassert>
     
    constexpr int square(int i)
    {
        return i * i;
    }
     
    int twice(int i)
    {
        return i + i;
    }
     
    constinit int sq = square(2);    // OK: initialization is done at compile time
    // constinit int x_x = twice(2); // Error: compile time initializer required
     
    int square_4_gen()
    {
        static constinit int pow = square(4);
     
        // constinit int prev = pow; // Error: constinit can only be applied to a
                                     // variable with static or thread storage duration
        int prev = pow;
        pow = pow * pow;
        return prev;
    }
     
    int main()
    {
        [assert](../error/assert.html)(sq == 4);
        sq = twice(1); // Unlike constexpr this value can be changed later at runtime
        [assert](../error/assert.html)(sq == 2);
     
        [assert](../error/assert.html)(square_4_gen() == 16);
        [assert](../error/assert.html)(square_4_gen() == 256);
        [assert](../error/assert.html)(square_4_gen() == 65536);
    }

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[CWG 2543](https://cplusplus.github.io/CWG/issues/2543.html) | C++20  | the behavior was unclear if the variable declared with constinit  
is dynamically initialized as part of static initialization  | the program is ill-  
formed in this case   
  
### See also

[ `consteval` specifier](consteval.html "cpp/language/consteval")(C++20) |  specifies that a function is an _immediate function_ , that is, every call to the function must be in a constant evaluation  
---|---  
[ `constexpr` specifier](constexpr.html "cpp/language/constexpr")(C++11) |  specifies that the value of a variable or function can be computed at compile time  
[constant expression](constant_expression.html "cpp/language/constant expression") |  defines an [expression](expressions.html "cpp/language/expressions") that can be evaluated at compile time   
[constant initialization](constant_initialization.html "cpp/language/constant initialization") |  sets the initial values of the [static](storage_duration.html "cpp/language/storage duration") variables to a compile-time constant   
[zero initialization](zero_initialization.html "cpp/language/zero initialization") |  sets the initial value of an object to zero 
  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
