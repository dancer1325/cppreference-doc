

Binds the specified names to subobjects or elements of the initializer. 

Like a reference, a structured binding is an alias to an existing object. Unlike a reference, a structured binding does not have to be of a reference type.   
  
---  
attr ﻿(optional) decl-specifier-seq ref-qualifier ﻿(optional) `**[**` sb-identifier-list `**]**` initializer ﻿`**;**` |  |   
attr |  \-  |  sequence of any number of [attributes](attributes.html "cpp/language/attributes")  
---|---|---  
decl-specifier-seq |  \-  |  sequence of the following specifiers (following the rules of [simple declaration](declarations.html#Simple_declaration "cpp/language/declarations")):  | 

  * [`constexpr`](constexpr.html "cpp/language/constexpr")
  * [`constinit`](constinit.html "cpp/language/constinit")

| (since C++26)  
---|---  
  
  * [`static`](../keywords/static.html "cpp/keyword/static")
  * [`thread_local`](../keyword/thread_local.html "cpp/keyword/thread local")
  * [`const`](../keyword/const.html "cpp/keyword/const")
  * [`volatile`](../keyword/volatile.html "cpp/keyword/volatile") (deprecated in C++20)
  * [`auto`](auto.html "cpp/language/auto")

  
ref-qualifier |  \-  |  either `**&**` or `**& &**`  
sb-identifier-list |  \-  |  list of comma-separated identifiers introduced by this declaration, each identifier may be followed by an [attribute specifier sequence](attributes.html "cpp/language/attributes")(since C++26)  
initializer |  \-  |  an initializer (see below)   
  
  
initializer may be one of the following:   
  
---  
`**=**` expression |  (1)  |   
`**{**` expression ``}  |  (2)  |   
`**(**` expression `**)**` |  (3)  |   
expression |  \-  |  any expression (except unparenthesized [comma expressions](operator_other.html#Built-in_comma_operator "cpp/language/operator other"))   
---|---|---  
  
  
A structured binding declaration introduces all identifiers in the sb-identifier-list as names in the surrounding scope and binds them to subobjects or elements of the object denoted by expression. The bindings so introduced are called _structured bindings_. 

One of the identifiers in the sb-identifier-list can be preceded by an ellipsis. Such an identifier introduces a _structured binding pack_. The identifier must declare a [templated entity](templates.html#Templated_entity "cpp/language/templates").  | (since C++26)  
---|---  
  
A structured binding is an identifier in the sb-identifier-list ﻿ that is not preceded by an ellipsis, or an element of a structured binding pack introduced in the same identifier list(since C++26). 

## Contents

  * [1 Binding process](structured_binding.html#Binding_process)
    * [1.1 Case 1: binding an array](structured_binding.html#Case_1:_binding_an_array)
    * [1.2 Case 2: binding a type implementing the tuple operations](structured_binding.html#Case_2:_binding_a_type_implementing_the_tuple_operations)
    * [1.3 Case 3: binding to data members](structured_binding.html#Case_3:_binding_to_data_members)
    * [1.4 Initialization order](structured_binding.html#Initialization_order)
  * [2 Notes](structured_binding.html#Notes)
  * [3 Keywords](structured_binding.html#Keywords)
  * [4 Example](structured_binding.html#Example)
  * [5 Defect reports](structured_binding.html#Defect_reports)
  * [6 References](structured_binding.html#References)
  * [7 See also](structured_binding.html#See_also)

  
---  
  
### Binding process

A structured binding declaration first introduces a uniquely-named variable (here denoted by e) to hold the value of the initializer, as follows: 

  * If expression has array type _cv1_ `A` and no ref-qualifier is present, define e as attr ﻿(optional) specifiers `A e;`, where specifiers is a sequence of the specifiers in decl-specifier-seq excluding auto. 



     Then each element of e is initialized from the corresponding element of expression as specified by the form of initializer ﻿: 

  * For initializer syntax (1), the elements are [copy-initialized](copy_initialization.html "cpp/language/copy initialization"). 
  * For initializer syntaxes (2,3), the elements are [direct-initialized](direct_initialization.html "cpp/language/direct initialization"). 



  * Otherwise, define e as attr ﻿(optional) decl-specifier-seq ref-qualifier ﻿(optional) `e` initializer ﻿`;`. 



We use `E` to denote the type of the identifier expression e (i.e., `E` is the equivalent of [std::remove_reference_t](../types/remove_reference.html)<decltype((e))>). 

A _structured binding size_ of `E` is the number of structured bindings that need to be introduced by the structured binding declaration. 

The number of identifiers in sb-identifier-list must be equal to the structured binding size of `E`.  | (until C++26)  
---|---  
Given the number of identifiers in sb-identifier-list as N and the structured binding size of `E` as S: 

  * If there is no structured binding pack, N must be equal to S. 
  * Otherwise, the number of non-pack elements (i.e., N - 1) must be less than or equal to S, and the number of elements of the structured binding pack is S - N + 1 (which can be zero). 

| (since C++26)  
      
    
    struct C { int x, y, z; };
     
    template<class T>
    void now_i_know_my() 
    {
        auto [a, b, c] = C(); // OK: a, b, c refer to x, y, z, respectively
        auto [d, ...e] = C(); // OK: d refers to x; ...e refers to y and z
        auto [...f, g] = C(); // OK: ...f refers x and y; g refers to z
        auto [h, i, j, ...k] = C();    // OK: the pack k is empty
        auto [l, m, n, o, ...p] = C(); // error: structured binding size is too small
    }

A structured binding declaration performs the binding in one of three possible ways, depending on `E`: 

  * Case 1: If `E` is an array type, then the names are bound to the array elements. 
  * Case 2: If `E` is a non-union class type and [std::tuple_size](../utility/tuple_size.html)<E> is a complete type with a member named `value` (regardless of the type or accessibility of such member), then the "tuple-like" binding protocol is used. 
  * Case 3: If `E` is a non-union class type but [std::tuple_size](../utility/tuple_size.html)<E> is not a complete type, then the names are bound to the accessible data members of `E`. 



Each of the three cases is described in more detail below. 

Each structured binding has a _referenced type_ , defined in the description below. This type is the type returned by [`decltype`](decltype.html "cpp/language/decltype") when applied to an unparenthesized structured binding. 

#### Case 1: binding an array

Each structured binding in the sb-identifier-list becomes the name of an lvalue that refers to the corresponding element of the array. The structured binding size of `E` is equal to the number of array elements. 

The _referenced type_ for each structured binding is the array element type. Note that if the array type `E` is cv-qualified, so is its element type. 
    
    
    int a[2] = {1, 2};
     
    auto [x, y] = a;    // creates e[2], copies a into e,
                        // then x refers to e[0], y refers to e[1]
    auto& [xr, yr] = a; // xr refers to a[0], yr refers to a[1]

#### Case 2: binding a type implementing the tuple operations

The expression [std::tuple_size](../utility/tuple_size.html)<E>::value must be a well-formed [integral constant expression](constant_expression.html#Integral_constant_expression "cpp/language/constant expression"), and the structured binding size of `E` is equal to [std::tuple_size](../utility/tuple_size.html)<E>::value. 

For each structured binding, a variable whose type is "reference to [std::tuple_element](../utility/tuple_element.html)<I, E>::type" is introduced: lvalue reference if its corresponding initializer is an lvalue, rvalue reference otherwise. The initializer for the Ith variable is 

  * e.get<I>(), if lookup for the identifier `get` in the scope of `E` by class member access lookup finds at least one declaration that is a function template whose first template parameter is a constant parameter 
  * Otherwise, get<I>(e), where get is looked up by [argument-dependent lookup](adl.html "cpp/language/adl") only, ignoring non-ADL lookup. 



In these initializer expressions, e is an lvalue if the type of the entity e is an lvalue reference (this only happens if the ref-qualifier is `**&**` or if it is `**& &**` and the initializer expression is an lvalue) and an xvalue otherwise (this effectively performs a kind of perfect forwarding), I is a [std::size_t](../types/size_t.html "cpp/types/size t") prvalue, and <I> is always interpreted as a template parameter list. 

The variable has the same [storage duration](storage_duration.html "cpp/language/storage duration") as e. 

The structured binding then becomes the name of an lvalue that refers to the object bound to said variable. 

The _referenced type_ for the Ith structured binding is [std::tuple_element](../utility/tuple_element.html)<I, E>::type. 
    
    
    float x{};
    char  y{};
    int   z{};
     
    [std::tuple](../utility/tuple.html)<float&, char&&, int> tpl(x, std::move(y), z);
    const auto& [a, b, c] = tpl;
    // using Tpl = const std::tuple<float&, char&&, int>;
    // a names a structured binding that refers to x (initialized from get<0>(tpl))
    // decltype(a) is std::tuple_element<0, Tpl>::type, i.e. float&
    // b names a structured binding that refers to y (initialized from get<1>(tpl))
    // decltype(b) is std::tuple_element<1, Tpl>::type, i.e. char&&
    // c names a structured binding that refers to the third component of tpl, get<2>(tpl)
    // decltype(c) is std::tuple_element<2, Tpl>::type, i.e. const int

#### Case 3: binding to data members

Every non-static data member of `E` must be a direct member of `E` or the same base class of `E`, and must be well-formed in the context of the structured binding when named as e.name. `E` may not have an anonymous union member. The structured binding size of `E` is equal to the number of non-static data members. 

Each structured binding in sb-identifier-list becomes the name of an lvalue that refers to the next member of e in declaration order (bit-fields are supported); the type of the lvalue is that of e.mI, where `mI` refers to the Ith member. 

The _referenced type_ of the Ith structured binding is the type of e.mI if it is not a reference type, or the declared type of `mI` otherwise. 
    
    
    #include <iostream>
     
    struct S
    {
        mutable int x1 : 2;
        volatile double y1;
    };
     
    S f() { return S{1, 2.3}; }
     
    int main()
    {
        const auto [x, y] = f(); // x is an int lvalue identifying the 2-bit bit-field
                                 // y is a const volatile double lvalue
        [std::cout](../io/cout.html) << x << ' ' << y << '\n';  // 1 2.3
        x = -2;   // OK
    //  y = -2.;  // Error: y is const-qualified
        [std::cout](../io/cout.html) << x << ' ' << y << '\n';  // -2 2.3
    }

#### Initialization order

Let valI be the object or reference named by the Ith structured binding in sb-identifier-list ﻿: 

  * The initialization of e is [sequenced before](eval_order.html "cpp/language/eval order") the initialization of any valI. 
  * The initialization of each valI is sequenced before the initialization of any valJ where I is less than J. 



### Notes

Structured bindings cannot be [constrained](constraints.html "cpp/language/constraints"): 
    
    
    template<class T>
    concept C = true;
     
    C auto [x, y] = [std::pair](../utility/pair.html){1, 2}; // error: constrained

| (since C++20)  
---|---  
  
The lookup for member `get` ignores accessibility as usual and also ignores the exact type of the constant template parameter. A private template<char*> void get(); member will cause the member interpretation to be used, even though it is ill-formed. 

The portion of the declaration preceding `**[**` applies to the hidden variable e, not to the introduced structured bindings: 
    
    
    int a = 1, b = 2;
    const auto& [x, y] = [std::tie](../utility/tuple/tie.html)(a, b); // x and y are of type int&
    auto [z, w] = [std::tie](../utility/tuple/tie.html)(a, b);        // z and w are still of type int&
    [assert](../error/assert.html)(&z == &a);                    // passes

The tuple-like interpretation is always used if [std::tuple_size](../utility/tuple_size.html)<E> is a complete type with a member named `value`, even if that would cause the program to be ill-formed: 
    
    
    struct A { int x; };
     
    namespace std
    {
        template<>
        struct tuple_size<::A> { void value(); };
    }
     
    auto [x] = A{}; // error; the "data member" interpretation is not considered.

The usual rules for reference-binding to temporaries (including lifetime-extension) apply if a ref-qualifier is present and the expression is a prvalue. In those cases the hidden variable e is a reference that binds to the temporary variable [materialized](implicit_cast.html#Temporary_materialization "cpp/language/implicit conversion") from the prvalue expression, extending its lifetime. As usual, the binding will fail if e is a non-const lvalue reference: 
    
    
    int a = 1;
     
    const auto& [x] = [std::make_tuple](../utility/tuple/make_tuple.html)(a); // OK, not dangling
    auto&       [y] = [std::make_tuple](../utility/tuple/make_tuple.html)(a); // error, cannot bind auto& to rvalue std::tuple
    auto&&      [z] = [std::make_tuple](../utility/tuple/make_tuple.html)(a); // also OK

decltype(x), where x denotes a structured binding, names the _referenced type_ of that structured binding. In the tuple-like case, this is the type returned by std::tuple_element, which may not be a reference even though a hidden reference is always introduced in this case. This effectively emulates the behavior of binding to a struct whose non-static data members have the types returned by std::tuple_element, with the referenceness of the binding itself being a mere implementation detail. 
    
    
    [std::tuple](../utility/tuple.html)<int, int&> f();
     
    auto [x, y] = f();       // decltype(x) is int
                             // decltype(y) is int&
     
    const auto [z, w] = f(); // decltype(z) is const int
                             // decltype(w) is int&

Structured bindings cannot be captured by [lambda expressions](lambda.html "cpp/language/lambda"): 
    
    
    #include <cassert>
     
    int main()
    {
        struct S { int p{6}, q{7}; };
        const auto& [b, d] = S{};
        auto l = [b, d] { return b * d; }; // valid since C++20
        [assert](../error/assert.html)(l() == 42);
    }

| (until C++20)  
---|---  
  
  


A structured binding size is allowed to be ​0​ as long as the sb-identifier-list contains exactly one identifier that can only introduce an empty structured binding pack. 
    
    
    auto return_empty() -> [std::tuple](../utility/tuple.html)<>;
     
    template <class>
    void test_empty()
    {
        auto [] = return_empty(); // error
        auto [...args] = return_empty(); // OK, args is an empty pack
        auto [one, ...rest] = return_empty(); // error, structured binding size is too small
    }

| (since C++26)  
---|---  
Feature-test macro  | Value | Std | Feature   
---|---|---|---  
[`__cpp_structured_bindings`](../experimental/feature_test.html#cpp_structured_bindings "cpp/feature test") | [`201606L`](../compiler_support/17.html#cpp_structured_bindings_201606L "cpp/compiler support/17") | (C++17) | Structured bindings   
[`202403L`](../compiler_support/26.html#cpp_structured_bindings_202403L "cpp/compiler support/26") | (C++26) | Structured bindings with attributes   
[`202406L`](../compiler_support/26.html#cpp_structured_bindings_202406L "cpp/compiler support/26") | (C++26) | Structured binding declaration as a condition   
[`202411L`](../compiler_support/26.html#cpp_structured_bindings_202411L "cpp/compiler support/26") | (C++26) | Structured bindings can introduce a pack   
  
### Keywords

[`auto`](../keyword/auto.html "cpp/keyword/auto")

### Example

Run this code
    
    
    #include <iomanip>
    #include <iostream>
    #include <set>
    #include <string>
     
    int main()
    {
        [std::set](../container/set.html)<[std::string](../string/basic_string.html)> myset{"hello"};
     
        for (int i{2}; i; --i)
        {
            if (auto [iter, success] = myset.insert("Hello"); success) 
                [std::cout](../io/cout.html) << "Insert is successful. The value is "
                          << [std::quoted](../io/manip/quoted.html)(*iter) << ".\n";
            else
                [std::cout](../io/cout.html) << "The value " << [std::quoted](../io/manip/quoted.html)(*iter)
                          << " already exists in the set.\n";
        }
     
        struct BitFields
        {
            // C++20: default member initializer for bit-fields
            int b : 4 {1}, d : 4 {2}, p : 4 {3}, q : 4 {4};
        };
     
        {
            const auto [b, d, p, q] = BitFields{};
            [std::cout](../io/cout.html) << b << ' ' << d << ' ' << p << ' ' << q << '\n';
        }
     
        {
            const auto [b, d, p, q] = []{ return BitFields{4, 3, 2, 1}; }();
            [std::cout](../io/cout.html) << b << ' ' << d << ' ' << p << ' ' << q << '\n';
        }
     
        {
            BitFields s;
     
            auto& [b, d, p, q] = s;
            [std::cout](../io/cout.html) << b << ' ' << d << ' ' << p << ' ' << q << '\n';
     
            b = 4, d = 3, p = 2, q = 1;
            [std::cout](../io/cout.html) << s.b << ' ' << s.d << ' ' << s.p << ' ' << s.q << '\n';
        }
    }

Output: 
    
    
    Insert is successful. The value is "Hello".
    The value "Hello" already exists in the set.
    1 2 3 4
    4 3 2 1
    1 2 3 4
    4 3 2 1

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[CWG 2285](https://cplusplus.github.io/CWG/issues/2285.html) | C++17  | expression could refer to the names from identifier-list | the declaration is  
ill-formed in this case   
[CWG 2312](https://cplusplus.github.io/CWG/issues/2312.html) | C++17  | the meaning of mutable was lost in case 3  | its meaning is still kept   
[CWG 2313](https://cplusplus.github.io/CWG/issues/2313.html) | C++17  | in case 2, the structure binding variables could be redeclared  | cannot be redeclared   
[CWG 2339](https://cplusplus.github.io/CWG/issues/2339.html) | C++17  | in case 2, the definition of I was missing  | added the definition   
[CWG 2341](https://cplusplus.github.io/CWG/issues/2341.html)  
([P1091R3](https://wg21.link/P1091R3))  | C++17  | structured bindings could not be  
declared with static storage duration  | allowed   
[CWG 2386](https://cplusplus.github.io/CWG/issues/2386.html) | C++17  | the “tuple-like” binding protocol was used  
whenever [std::tuple_size](../utility/tuple_size.html)<E> is a complete type  | used only when [std::tuple_size](../utility/tuple_size.html)<E>  
has a member `value`  
[CWG 2506](https://cplusplus.github.io/CWG/issues/2506.html) | C++17  | if expression is of a cv-qualified array type,  
the cv-qualification was carried over to `E` | discards that cv-qualification   
[CWG 2635](https://cplusplus.github.io/CWG/issues/2635.html) | C++20  | structured bindings could be constrained  | prohibited   
[CWG 2867](https://cplusplus.github.io/CWG/issues/2867.html) | C++17  | the initialization order was unclear  | made clear   
[P0961R1](https://wg21.link/P0961R1) | C++17  | in case 2, member `get` was used  
if lookup finds a `get` of any kind  | only if lookup finds a function  
template with a constant parameter   
[P0969R0](https://wg21.link/P0969R0) | C++17  | in case 3, the members were required to be public  | only required to be accessible  
in the context of the declaration   
  
### References

  * C++23 standard (ISO/IEC 14882:2024): 



    

  * 9.6 Structured binding declarations [dcl.struct.bind] (p: 228-229) 



  * C++20 standard (ISO/IEC 14882:2020): 



    

  * 9.6 Structured binding declarations [dcl.struct.bind] (p: 219-220) 



  * C++17 standard (ISO/IEC 14882:2017): 



    

  * 11.5 Structured binding declarations [dcl.struct.bind] (p: 219-220) 



### See also

[ tie](../utility/tuple/tie.html "cpp/utility/tuple/tie")(C++11) |  creates a [tuple](../utility/tuple.html "cpp/utility/tuple") of lvalue references or unpacks a tuple into individual objects   
(function template)   
---|---
  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
