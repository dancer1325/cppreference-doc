

  
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
[constinit](constinit.html "cpp/language/constinit")(C++20)  
[Storage class specifiers](storage_duration.html "cpp/language/storage duration")  
**Translation-unit-local** (C++20)  
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
  
| Declarators  
---  
[Reference](reference.html "cpp/language/reference")  
[Pointer](pointer.html "cpp/language/pointer")  
[Array](array.html "cpp/language/array")  
Block declarations  
[Simple-declaration](declarations.html "cpp/language/declarations")  
→[Structured binding declaration](structured_binding.html "cpp/language/structured binding") (C++17)  
[Alias declaration](type_alias.html "cpp/language/type alias") (C++11)  
[Namespace alias definition](namespace_alias.html "cpp/language/namespace alias")  
[using declaration](using_declaration.html "cpp/language/using declaration")  
[`using` directive](namespace.html#Using-directives "cpp/language/namespace")  
[static_assert declaration](static_assert.html "cpp/language/static assert") (C++11)  
[asm declaration](asm.html "cpp/language/asm")  
[Opaque enum declaration](enum.html "cpp/language/enum") (C++11)  
Other declarations  
[Namespace definition](namespace.html "cpp/language/namespace")  
[Function declaration](function.html "cpp/language/function")  
[Class template declaration](class_template.html "cpp/language/class template")  
[Function template declaration](function_template.html "cpp/language/function template")  
[Explicit template instantiation](class_template.html#Explicit_instantiation "cpp/language/class template") (C++11)  
[Explicit template specialization](template_specialization.html "cpp/language/template specialization")  
[Linkage specification](language_linkage.html "cpp/language/language linkage")  
[Attribute declaration](declarations.html "cpp/language/declarations") (C++11)  
[Empty declaration](declarations.html "cpp/language/declarations")  
  
  
  


Translation-unit-local (TU-local) entities are introduced to prevent entities that are supposed to be local (not used in any other translation unit) being exposed and used in other translation units. 

An example from [Understanding C++ Modules: Part 2](https://vector-of-bool.github.io/2019/03/31/modules-2.html) illustrates the problem of not constraining exposures: 
    
    
    // Module unit without TU-local constraints
    export module Foo;
     
    import <iostream>;
     
    namespace
    {
       class LolWatchThis {        // internal linkage, cannot be exported
           static void say_hello()
           {
               [std::cout](../io/cout.html) << "Hello, everyone!\n";
           }
       };
    }
     
    export LolWatchThis lolwut() { // LolWatchThis is exposed as return type
        return LolWatchThis();
    }
    
    
    // main.cpp
    import Foo;
     
    int main()
    {
        auto evil = lolwut();        // 'evil' has type of 'LolWatchThis'
        decltype(evil)::say_hello(); // definition of 'LolWatchThis' is not internal anymore
    }

## Contents

  * [1 TU-local entities](tu_local.html#TU-local_entities)
  * [2 Exposures](tu_local.html#Exposures)
  * [3 TU-local constraints](tu_local.html#TU-local_constraints)
  * [4 Example](tu_local.html#Example)

  
---  
  
### TU-local entities

An entity is _TU-local_ if it is 

  1. a type, function, variable, or template that 
     1. has a name with [internal linkage](storage_duration.html#internal_linkage "cpp/language/storage duration"), or 
     2. does not have a name with linkage and is declared, or introduced by a [lambda expression](lambda.html "cpp/language/lambda"), within the definition of a TU-local entity, 
  2. a type with no name that is defined outside a [class-specifier](class.html "cpp/language/class"), function body, or initializer or is introduced by a defining-type-specifier (type-specifier, class-specifier or enum-specifier) that is used to declare only TU-local entities, 
  3. a specialization of a TU-local template, 
  4. a specialization of a template with any TU-local template argument, or 
  5. a specialization of a template whose (possibly instantiated) declaration is an exposure (defined below). 


    
    
    // TU-local entities with internal linkage
    namespace { // all names declared in unnamed namespace have internal linkage
        int tul_var = 1;                          // TU-local variable
        int tul_func() { return 1; }              // TU-local function
        struct tul_type { int mem; };             // TU-local (class) type
    }
    template<typename T>
    static int tul_func_temp() { return 1; }      // TU-local template
     
    // TU-local template specialization
    template<>
    static int tul_func_temp<int>() { return 3; } // TU-local specialization
     
    // template specialization with TU-local template argument
    template <> struct [std::hash](../utility/hash.html)<tul_type> {      // TU-local specialization
        [std::size_t](../types/size_t.html) operator()(const tul_type& t) const { return 4u; }
    };

| This section is incomplete  
Reason: missing examples of rules #1.2, #2 and #5   
---|---  
  
A value or object is _TU-local_ if either 

  1. it is, or is a pointer to, a TU-local function or the object associated with a TU-local variable, or 
  2. it is an object of class or array type and any of its [subobjects](objects.html#Subobjects "cpp/language/object") or any of the objects or functions to which its non-static data members of reference type refer is TU-local and is [usable in constant expressions](constant_expression.html#Usable_in_constant_expressions "cpp/language/constant expression"). 


    
    
    static int tul_var = 1;             // TU-local variable
    static int tul_func() { return 1; } // TU-local function
     
    int* tul_var_ptr = &tul_var;        // TU-local: pointer to TU-local variable
    int (* tul_func_ptr)() = &tul_func; // TU-local: pointer to TU-local function
     
    constexpr static int tul_const = 1; // TU-local variable usable in constant expressions
    int tul_arr[] = { tul_const };      // TU-local: array of constexpr TU-local object 
    struct tul_class { int mem; };
    tul_class tul_obj{tul_const};       // TU-local: has member constexpr TU-local object

### Exposures

A declaration D _names_ an entity E if 

  1. D contains a lambda expression whose closure type is E, 
  2. E is not a function or function template and D contains an id-expression, type-specifier, nested-name-specifier, template-name, or concept-name denoting E, or 
  3. E is a function or function template and D contains an expression that names E or an id-expression that refers to a set of overloads that contains E. 


    
    
    // lambda naming
    auto x = [] {}; // names decltype(x)
     
    // non-function (template) naming
    int y1 = 1;                      // names y1 (id-expression)
    struct y2 { int mem; };
    y2 y2_obj{1};                    // names y2 (type-specifier)
    struct y3 { int mem_func(); };
    int y3::mem_func() { return 0; } // names y3 (nested-name-specifier)
    template<typename T> int y4 = 1;
    int var = y4<y2>;                // names y4 (template-name)
    template<typename T> concept y5 = true;
    template<typename T> void func(T&&) requires y5<T>; // names y5 (concept-name)
     
    // function (template) naming
    int z1(int arg)    { [std::cout](../io/cout.html) << "no overload"; return 0; }
    int z2(int arg)    { [std::cout](../io/cout.html) << "overload 1";  return 1; }
    int z2(double arg) { [std::cout](../io/cout.html) << "overload 2";  return 2; }
     
    int val1 = z1(0); // names z1
    int val2 = z2(0); // names z2 ( int z2(int) )

A declaration is an _exposure_ if it either names a TU-local entity, ignoring 

  1. the function-body for a non-inline function or function template (but not the deduced return type for a (possibly instantiated) definition of a function with a declared return type that uses a [placeholder type](auto.html "cpp/language/auto")), 
  2. the initializer for a variable or variable template (but not the variable’s type), 
  3. friend declarations in a class definition, and 
  4. any reference to a non-volatile const object or reference with internal or no linkage initialized with a constant expression that is not an [odr-use](definition.html#ODR-use "cpp/language/definition"), 



or defines a constexpr variable initialized to a TU-local value. 

| This section is incomplete  
Reason: missing examples for exposures   
---|---  
  
### TU-local constraints

If a (possibly instantiated) [declaration](declarations.html "cpp/language/declarations") of, or a [deduction guide](ctad.html#Deduction_for_class_templates "cpp/language/class template argument deduction") for, a non-TU-local entity in a [module interface unit](modules.html "cpp/language/modules") (outside the private-module-fragment, if any) or module partition is an exposure, the program is ill-formed. Such a declaration in any other context is deprecated. 

If a declaration that appears in one translation unit names a TU-local entity declared in another translation unit that is not a header unit, the program is ill-formed. A declaration instantiated for a template specialization appears at the point of instantiation of the specialization. 

| This section is incomplete  
Reason: missing examples for constraints   
---|---  
  
### Example

Translation unit #1: 
    
    
    export module A;
    static void f() {}
    inline void it() { f(); }         // error: is an exposure of f
    static inline void its() { f(); } // OK
    template<int> void g() { its(); } // OK
    template void g<0>();
     
    decltype(f) *fp;                             // error: f (though not its type) is TU-local
    auto &fr = f;                                // OK
    constexpr auto &fr2 = fr;                    // error: is an exposure of f
    constexpr static auto fp2 = fr;              // OK
    struct S { void (&ref)(); } s{f};            // OK: value is TU-local
    constexpr extern struct W { S &s; } wrap{s}; // OK: value is not TU-local
     
    static auto x = []{ f(); }; // OK
    auto x2 = x;                // error: the closure type is TU-local
    int y = ([]{ f(); }(), 0);  // error: the closure type is not TU-local
    int y2 = (x, 0);            // OK
     
    namespace N
    {
        struct A {};
        void adl(A);
        static void adl(int);
    }
    void adl(double);
     
    inline void h(auto x) { adl(x); } // OK, but a specialization might be an exposure

Translation unit #2: 
    
    
    module A;
    void other()
    {
        g<0>();                  // OK: specialization is explicitly instantiated
        g<1>();                  // error: instantiation uses TU-local its
        h(N::A{});               // error: overload set contains TU-local N::adl(int)
        h(0);                    // OK: calls adl(double)
        adl(N::A{});             // OK; N::adl(int) not found, calls N::adl(N::A)
        fr();                    // OK: calls f
        constexpr auto ptr = fr; // error: fr is not usable in constant expressions here
    }

| This section is incomplete  
Reason: examples are too complex, need better arrangement   
---|---
