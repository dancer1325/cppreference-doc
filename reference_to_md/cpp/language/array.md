[C++](../../cpp.html "cpp")

[Compiler support](../compiler_support.html "cpp/compiler support")  
---  
[Freestanding and hosted](../freestanding.html "cpp/freestanding")  
[Language](../language.html "cpp/language")  
[Standard library](../standard_library.html "cpp/standard library")  
[Standard library headers](../headers.html "cpp/header")  
[Named requirements](../iterator/concepts.html "cpp/named req")  
[Feature test macros](../experimental/feature_test.html "cpp/feature test") (C++20)  
[Language support library](../utility.html#Language_support "cpp/utility")  
[Concepts library](../concepts.html "cpp/concepts") (C++20)  
[Diagnostics library](../error.html "cpp/error")  
[Memory management library](../memory.html "cpp/memory")  
[Metaprogramming library](../meta.html "cpp/meta") (C++11)  
[General utilities library](../utility.html "cpp/utility")  
[Containers library](../container.html "cpp/container")  
[Iterators library](../iterator.html "cpp/iterator")  
[Ranges library](../ranges.html "cpp/ranges") (C++20)  
[Algorithms library](../algorithm.html "cpp/algorithm")  
[Strings library](../string.html "cpp/string")  
[Text processing library](../text.html "cpp/text")  
[Numerics library](../numeric.html "cpp/numeric")  
[Date and time library](../chrono.html "cpp/chrono")  
[Input/output library](../io.html "cpp/io")  
[Filesystem library](../filesystem.html "cpp/filesystem") (C++17)  
[Concurrency support library](../atomic.html "cpp/thread") (C++11)  
[Execution control library](../experimental/execution.html "cpp/execution") (C++26)  
[Technical specifications](../experimental.html "cpp/experimental")  
[Symbols index](../symbol_index.html "cpp/symbol index")  
[External libraries](../links/libs.html "cpp/links/libs")  
  


[C++ language](../language.html "cpp/language")

General topics  
---  
| [Preprocessor](../preprocessor.html "cpp/preprocessor")  
---  
[Comments](../comments.html "cpp/comment")  
  
| [Keywords](../keywords.html "cpp/keyword")  
---  
[Escape sequences](escape.html "cpp/language/escape")  
  
[Flow control](statements.html "cpp/language/statements")  
Conditional execution statements  
| [`if`](if.html "cpp/language/if")  
---  
  
| [`switch`](switch.html "cpp/language/switch")  
---  
  
Iteration statements (loops)  
| [`for`](for.html "cpp/language/for")  
---  
[range-`for`](range-for.html "cpp/language/range-for") (C++11)  
  
| [`while`](while.html "cpp/language/while")  
---  
[`do-while`](do.html "cpp/language/do")  
  
Jump statements  
| [`continue`](continue.html "cpp/language/continue") \- [`break`](break.html "cpp/language/break")  
---  
  
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
[Zero-initialization](zero_initialization.html "cpp/language/zero initialization")  
[Copy-initialization](copy_initialization.html "cpp/language/copy initialization")  
[Direct-initialization](direct_initialization.html "cpp/language/direct initialization")  
  
| [Aggregate initialization](aggregate_initialization.html "cpp/language/aggregate initialization")  
---  
[List-initialization](list_initialization.html "cpp/language/list initialization") (C++11)` `  
[Constant initialization](constant_initialization.html "cpp/language/constant initialization")  
[Reference initialization](reference_initialization.html "cpp/language/reference initialization")  
  
  
  
[Expressions](expressions.html "cpp/language/expressions")  
---  
| [Value categories](value_category.html "cpp/language/value category")  
---  
[Order of evaluation](eval_order.html "cpp/language/eval order")  
  
| [Operators](operators.html "cpp/language/operators")  
---  
[Operator precedence](operator_precedence.html "cpp/language/operator precedence")  
  
[Alternative representations](operator_alternative.html "cpp/language/operator alternative")  
[Literals](expressions.html#Literals "cpp/language/expressions")  
[Boolean](bool_literal.html "cpp/language/bool literal") \- [Integer](integer_literal.html "cpp/language/integer literal") \- [Floating-point](floating_literal.html "cpp/language/floating literal")  
[Character](character_literal.html "cpp/language/character literal") \- [String](string_literal.html "cpp/language/string literal") \- [`nullptr`](nullptr.html "cpp/language/nullptr") (C++11)  
[User-defined](user_literal.html "cpp/language/user literal") (C++11)  
Utilities  
[Attributes](attributes.html "cpp/language/attributes") (C++11)  
Types  
[`typedef` declaration](typedef.html "cpp/language/typedef")  
[Type alias declaration](type_alias.html "cpp/language/type alias") (C++11)  
Casts  
| [Implicit conversions](implicit_cast.html "cpp/language/implicit conversion")  
---  
[`static_cast`](static_cast.html "cpp/language/static cast")  
[`const_cast`](const_cast.html "cpp/language/const cast")  
  
| [Explicit conversions](explicit_cast.html "cpp/language/explicit cast")  
---  
[`dynamic_cast`](dynamic_cast.html "cpp/language/dynamic cast")  
[`reinterpret_cast`](reinterpret_cast.html "cpp/language/reinterpret cast")  
  
Memory allocation  
| [`new` expression](new.html "cpp/language/new")  
---  
  
| [`delete` expression](delete.html "cpp/language/delete")  
---  
  
[Classes](classes.html "cpp/language/classes")  
| [Class declaration](class.html "cpp/language/class")  
---  
[Constructors](initializer_list.html "cpp/language/constructor")  
[`this` pointer](this.html "cpp/language/this")  
  
| [Access specifiers](access.html "cpp/language/access")  
---  
[`friend` specifier](friend.html "cpp/language/friend")  
  
  
  
Class-specific function properties  
| [Virtual function](virtual.html "cpp/language/virtual")  
---  
[`override` specifier](override.html "cpp/language/override") (C++11)` `  
[`final` specifier](final.html "cpp/language/final") (C++11)  
  
| [`explicit`](explicit.html "cpp/language/explicit") (C++11)  
---  
[`static`](static.html "cpp/language/static")  
  
  
  
Special member functions  
| [Default constructor](default_constructor.html "cpp/language/default constructor")  
---  
[Copy constructor](copy_constructor.html "cpp/language/copy constructor")  
[Move constructor](move_constructor.html "cpp/language/move constructor") (C++11)  
  
| [Copy assignment](as_operator.html "cpp/language/as operator")  
---  
[Move assignment](move_operator.html "cpp/language/move operator") (C++11)  
[Destructor](destructor.html "cpp/language/destructor")  
  
[Templates](templates.html "cpp/language/templates")  
| [Class template](class_template.html "cpp/language/class template")  
---  
[Function template](function_template.html "cpp/language/function template")  
  
| [Template specialization](template_specialization.html "cpp/language/template specialization")  
---  
[Parameter packs](parameter_pack.html "cpp/language/pack") (C++11)  
  
Miscellaneous  
| [Inline assembly](asm.html "cpp/language/asm")  
---  
  
| [History of C++](history.html "cpp/language/history")  
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
  
| Declarators  
---  
[Reference](reference.html "cpp/language/reference")  
[Pointer](pointer.html "cpp/language/pointer")  
**Array**  
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
  
  
  


Declares an object of array type. 

## Contents

  * [1 Syntax](array.html#Syntax)
    * [1.1 Assignment](array.html#Assignment)
    * [1.2 Array-to-pointer decay](array.html#Array-to-pointer_decay)
    * [1.3 Multidimensional arrays](array.html#Multidimensional_arrays)
    * [1.4 Arrays of unknown bound](array.html#Arrays_of_unknown_bound)
    * [1.5 Array rvalues](array.html#Array_rvalues)
  * [2 Defect reports](array.html#Defect_reports)
  * [3 See also](array.html#See_also)

  
---  
  
### Syntax

An array declaration is any simple declaration whose [declarator](declarations.html "cpp/language/declarations") has the form   
  
---  
noptr-declarator `**[**` expr ﻿(optional)`**]**` attr ﻿(optional) |  |   
noptr-declarator |  \-  |  any valid declarator, but if it begins with `*`, `&`, or `&&`, it has to be surrounded by parentheses (otherwise the whole declarator is treated as a [pointer declarator](pointer.html "cpp/language/pointer") or [reference declarator](reference.html "cpp/language/reference")).   
---|---|---  
expr |  \-  |  an [integral constant expression](constant_expression.html "cpp/language/constant expression")(until C++14)a [converted constant expression](constant_expression.html "cpp/language/constant expression") of type [std::size_t](../types/size_t.html "cpp/types/size t")(since C++14), which evaluates to a value greater than zero   
attr |  \-  |  (since C++11) list of [attributes](attributes.html "cpp/language/attributes")  
  
A declaration of the form T a[N];, declares a as an array [object](objects.html "cpp/language/object") that consists of N contiguously allocated objects of type `T`. The elements of an array are numbered ​0​, …, N - 1, and may be accessed with the [subscript operator []](operator_member_access.html#Built-in_subscript_operator "cpp/language/operator member access"), as in a[0], …, a[N - 1]. 

Arrays can be constructed from any [fundamental type](types.html "cpp/language/types") (except void), [pointers](pointer.html "cpp/language/pointer"), [pointers to members](pointer.html "cpp/language/pointer"), [classes](classes.html "cpp/language/classes"), [enumerations](enum.html "cpp/language/enum"), or from other arrays of known bound (in which case the array is said to be multi-dimensional). In other words, only object types except for array types of unknown bound can be element types of array types. Array types of incomplete element type are also incomplete types. 

The possibly [constrained](constraints.html "cpp/language/constraints")(since C++20) [`auto`](auto.html "cpp/language/auto") specifier can be used as array element type in the declaration of a pointer or reference to array, which deduces the element type from the initializer or the function argument(since C++14), e.g. auto (*p)[42] = &a; is valid if a is an lvalue of type int[42].  | (since C++11)  
---|---  
  
There are no arrays of references or arrays of functions. 

Applying [cv-qualifiers](cv.html "cpp/language/cv") to an array type (through typedef or template type manipulation) applies the qualifiers to the element type, but any array type whose elements are of cv-qualified type is considered to have the same cv-qualification. 
    
    
    // a and b have the same const-qualified type "array of 5 const char"
     
    typedef const char CC;
    CC a[5] = {};
     
    typedef char CA[5];
    const CA b = {};

When used with [new[]-expression](new.html "cpp/language/new"), the size of an array may be zero; such an array has no elements: 
    
    
    int* p = new int[0]; // accessing p[0] or *p is undefined
    delete[] p; // cleanup still required

#### Assignment

Objects of array type cannot be modified as a whole: even though they are [lvalues](value_category.html#lvalue "cpp/language/value category") (e.g. an address of array can be taken), they cannot appear on the left hand side of an assignment operator: 
    
    
    int a[3] = {1, 2, 3}, b[3] = {4, 5, 6};
    int (*p)[3] = &a; // okay: address of a can be taken
    a = b;            // error: a is an array
     
    struct { int c[3]; } s1, s2 = {3, 4, 5};
    s1 = s2; // okay: implicitly-defined copy assignment operator
             // can assign data members of array type

#### Array-to-pointer decay

There is an [implicit conversion](implicit_cast.html "cpp/language/implicit conversion") from lvalues and rvalues of array type to rvalues of pointer type: it constructs a pointer to the first element of an array. This conversion is used whenever arrays appear in context where arrays are not expected, but pointers are: 

Run this code
    
    
    #include <iostream>
    #include <iterator>
    #include <numeric>
     
    void g(int (&a)[3])
    {
        [std::cout](../io/cout.html) << a[0] << '\n';
    }
     
    void f(int* p)
    {
        [std::cout](../io/cout.html) << *p << '\n';
    }
     
    int main()
    {
        int a[3] = {1, 2, 3};
        int* p = a;
     
        [std::cout](../io/cout.html) << sizeof a << '\n'  // prints size of array
                  << sizeof p << '\n'; // prints size of a pointer
     
        // where arrays are acceptable, but pointers aren't, only arrays may be used
        g(a); // okay: function takes an array by reference
    //  g(p); // error
     
        for (int n : a)            // okay: arrays can be used in range-for loops
            [std::cout](../io/cout.html) << n << ' '; // prints elements of the array
    //  for (int n : p)            // error
    //      std::cout << n << ' ';
     
        [std::iota](../algorithm/iota.html)([std::begin](../iterator/begin.html)(a), [std::end](../iterator/end.html)(a), 7); // okay: begin and end take arrays
    //  std::iota(std::begin(p), std::end(p), 7); // error
     
        // where pointers are acceptable, but arrays aren't, both may be used:
        f(a); // okay: function takes a pointer
        f(p); // okay: function takes a pointer
     
        [std::cout](../io/cout.html) << *a << '\n' // prints the first element
                  << *p << '\n' // same
                  << *(a + 1) << ' ' << a[1] << '\n'  // prints the second element
                  << *(p + 1) << ' ' << p[1] << '\n'; // same
    }

#### Multidimensional arrays

When the element type of an array is another array, it is said that the array is multidimensional: 
    
    
    // array of 2 arrays of 3 int each
    int a[2][3] = {{1, 2, 3},  // can be viewed as a 2 × 3 matrix
                   {4, 5, 6}}; // with row-major layout

Note that when array-to-pointer decay is applied, a multidimensional array is converted to a pointer to its first element (e.g., a pointer to its first row or to its first plane): array-to-pointer decay is applied only once. 
    
    
    int a[2];            // array of 2 int
    int* p1 = a;         // a decays to a pointer to the first element of a
     
    int b[2][3];         // array of 2 arrays of 3 int
    // int** p2 = b;     // error: b does not decay to int**
    int (*p2)[3] = b;    // b decays to a pointer to the first 3-element row of b
     
    int c[2][3][4];      // array of 2 arrays of 3 arrays of 4 int
    // int*** p3 = c;    // error: c does not decay to int***
    int (*p3)[3][4] = c; // c decays to a pointer to the first 3 × 4-element plane of c

#### Arrays of unknown bound

If expr is omitted in the declaration of an array, the type declared is "array of unknown bound of T", which is a kind of [incomplete type](incomplete_type.html "cpp/language/incomplete type"), except when used in a declaration with an [aggregate initializer](aggregate_initialization.html "cpp/language/aggregate initialization"): 
    
    
    extern int x[];      // the type of x is "array of unknown bound of int"
    int a[] = {1, 2, 3}; // the type of a is "array of 3 int"

Because array elements cannot be arrays of unknown bound, multidimensional arrays cannot have unknown bound in a dimension other than the first: 
    
    
    extern int a[][2]; // okay: array of unknown bound of arrays of 2 int
    extern int b[2][]; // error: array has incomplete element type

If there is a preceding declaration of the entity in the same scope in which the bound was specified, an omitted array bound is taken to be the same as in that earlier declaration, and similarly for the definition of a static data member of a class: 
    
    
    extern int x[10];
    struct S
    {
        static int y[10];
    };
     
    int x[];               // OK: bound is 10
    int S::y[];            // OK: bound is 10
     
    void f()
    {
        extern int x[];
        int i = sizeof(x); // error: incomplete object type
    }

References and pointers to arrays of unknown bound can be formed, but cannot(until C++20)and can(since C++20) be initialized or assigned from arrays and pointers to arrays of known bound. Note that in the C programming language, pointers to arrays of unknown bound are compatible with pointers to arrays of known bound and are thus convertible and assignable in both directions. 
    
    
    extern int a1[];
     
    int (&r1)[] = a1;  // okay
    int (*p1)[] = &a1; // okay
    int (*q)[2] = &a1; // error (but okay in C)
     
    int a2[] = {1, 2, 3};
    int (&r2)[] = a2;  // okay (since C++20)
    int (*p2)[] = &a2; // okay (since C++20)

Pointers to arrays of unknown bound cannot participate in [pointer arithmetic](operator_arithmetic.html#Additive_operators "cpp/language/operator arithmetic") and cannot be used on the left of the [subscript operator](operator_member_access.html#Built-in_subscript_operator "cpp/language/operator member access"), but can be dereferenced. 

#### Array rvalues

Although arrays cannot be returned from functions by value and cannot be targets of most cast expressions, array [prvalues](value_category.html "cpp/language/value category") may be formed by using a type alias to construct an array temporary using [brace-initialized functional cast](explicit_cast.html "cpp/language/explicit cast"). 

Like class prvalues, array prvalues convert to xvalues by [temporary materialization](implicit_cast.html#Temporary_materialization "cpp/language/implicit conversion") when evaluated.  | (since C++17)  
---|---  
  
Array [xvalues](value_category.html "cpp/language/value category") may be formed directly by accessing an array member of a class rvalue or by using std::move or another cast or function call that returns an rvalue reference. 

Run this code
    
    
    #include <iostream>
    #include <type_traits>
    #include <utility>
     
    void f(int (&&x)[2][3])
    {
        [std::cout](../io/cout.html) << sizeof x << '\n';
    }
     
    struct X
    {
        int i[2][3];
    } x;
     
    template<typename T>
    using identity = T;
     
    int main()
    {
        [std::cout](../io/cout.html) << sizeof X().i << '\n';           // size of the array
        f(X().i);                                    // okay: binds to xvalue
    //  f(x.i);                                      // error: cannot bind to lvalue
     
        int a[2][3];
        f(std::move(a));                             // okay: binds to xvalue
     
        using arr_t = int[2][3];
        f(arr_t{});                                  // okay: binds to prvalue
        f(identity<int[][3]>{{1, 2, 3}, {4, 5, 6}}); // okay: binds to prvalue
     
    }

Output: 
    
    
    24
    24
    24
    24
    24

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[CWG 393](https://cplusplus.github.io/CWG/issues/393.html) | C++98  | a pointer or reference to an array of unknown  
bound could not be a function parameter  | allowed   
[CWG 619](https://cplusplus.github.io/CWG/issues/619.html) | C++98  | when omitted, the bound of an array could  
not be inferred from a previous declaration  | inference allowed   
[CWG 2099](https://cplusplus.github.io/CWG/issues/2099.html) | C++98  | the bound of an array static data member could  
not be omitted even if an initializer is provided  | omission allowed   
[CWG 2397](https://cplusplus.github.io/CWG/issues/2397.html) | C++11  | auto could not be used as element type  | allowed   
  
### See also

[C documentation](../../c/language/array.html "c/language/array") for Array declaration  
---
