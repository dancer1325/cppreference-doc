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
  


[ Basic Concepts](basics.html "cpp/language/basic concepts")

[Comments](../comments.html "cpp/comment")  
---  
[ASCII](ascii.html "cpp/language/ascii")  
[Punctuation](punctuators.html "cpp/language/punctuators")  
[Names and identifiers](name.html "cpp/language/identifiers")  
[Types](type-id.html "cpp/language/type")  
[Fundamental types](types.html "cpp/language/types")  
[Objects](objects.html "cpp/language/object")  
[Scope](scope.html "cpp/language/scope")  
[Object lifetime](lifetime.html "cpp/language/lifetime")  
[Storage duration and linkage](storage_duration.html "cpp/language/storage duration")  
[Definitions and ODR](definition.html "cpp/language/definition")  
[Name lookup](lookup.html "cpp/language/lookup")  
[ Qualified name lookup](qualified_lookup.html "cpp/language/qualified lookup")  
[ Unqualified name lookup](unqualified_lookup.html "cpp/language/unqualified lookup")  
[The as-if rule](as_if.html "cpp/language/as if")  
**Undefined behavior**  
[Memory model](memory_model.html "cpp/language/memory model")  
[Multi-threaded executions and data races](multithread.html "cpp/language/multithread") (C++11)  
[Character sets and encodings](charset.html "cpp/language/charset")  
[Phases of translation](translation_phases.html "cpp/language/translation phases")  
[The `main` function](main_function.html "cpp/language/main function")  
[Modules](modules.html "cpp/language/modules") (C++20)  
[Contracts](contracts.html "cpp/language/contracts") (C++26)  
  


Renders the entire program meaningless if certain rules of the language are violated. 

## Contents

  * [1 Explanation](ub.html#Explanation)
  * [2 UB and optimization](ub.html#UB_and_optimization)
    * [2.1 Signed overflow](ub.html#Signed_overflow)
    * [2.2 Access out of bounds](ub.html#Access_out_of_bounds)
    * [2.3 Uninitialized scalar](ub.html#Uninitialized_scalar)
    * [2.4 Invalid scalar](ub.html#Invalid_scalar)
    * [2.5 Null pointer dereference](ub.html#Null_pointer_dereference)
    * [2.6 Access to pointer passed to std::realloc](ub.html#Access_to_pointer_passed_to_std::realloc)
    * [2.7 Infinite loop without side-effects](ub.html#Infinite_loop_without_side-effects)
  * [3 Ill-formed with diagnostic message](ub.html#Ill-formed_with_diagnostic_message)
  * [4 References](ub.html#References)
  * [5 See also](ub.html#See_also)
  * [6 External links](ub.html#External_links)

  
---  
  
### Explanation

The C++ standard precisely defines the [observable behavior](as_if.html "cpp/language/as if") of every C++ program that does not fall into one of the following classes: 

  * _ill-formed_ \- The program has syntax errors or diagnosable semantic errors. 



    

  * A conforming C++ compiler is required to issue a diagnostic, even if it defines a language extension that assigns meaning to such code (such as with variable-length arrays). 
  * The text of the standard uses _shall_ , _shall not_ , and _ill-formed_ to indicate these requirements. 



  * _ill-formed,[no diagnostic required](../ndr.html "cpp/language/ndr")_ \- The program has semantic errors which may not be diagnosable in general case (e.g. violations of the [ODR](definition.html "cpp/language/definition") or other errors that are only detectable at link time). 



    

  * The behavior is undefined if such program is executed. 



  * _implementation-defined behavior_ \- The behavior of the program varies between implementations, and the conforming implementation must document the effects of each behavior. 



    

  * For example, the type of [std::size_t](../types/size_t.html "cpp/types/size t") or the number of bits in a byte, or the text of [std::bad_alloc::what](../memory/new/bad_alloc.html "cpp/memory/new/bad alloc"). 
  * A subset of implementation-defined behavior is _locale-specific behavior_ , which depends on the implementation-supplied [locale](../locale.html "cpp/locale"). 



  * _unspecified behavior_ \- The behavior of the program varies between implementations, and the conforming implementation is not required to document the effects of each behavior. 



    

  * For example, [order of evaluation](eval_order.html "cpp/language/eval order"), whether identical [string literals](string_literal.html "cpp/language/string literal") are distinct, the amount of array allocation overhead, etc. 
  * Each unspecified behavior results in one of a set of valid results. 



  * _erroneous behavior_ \- The (incorrect) behavior that the implementation is recommended to diagnose. 



    

  * Erroneous behavior is always the consequence of incorrect program code. 
  * The evaluation of a constant expression never results in an erroneous behavior. 
  * If the execution contains an operation specified as having erroneous behavior, the implementation is permitted and recommended to issue a diagnostic, and is permitted to terminate the execution at an unspecified time after that operation. 
  * An implementation can issue a diagnostic if it can determine that erroneous behavior is reachable under an implementation-specific set of assumptions about the program behavior, which can result in false positives. 


| Examples of erroneous behavior  
---  
      
    
    #include <cassert>
    #include <cstring>
     
    void f()
    {   
        int d1, d2;       // d1, d2 have erroneous values
        int e1 = d1;      // erroneous behavior
        int e2 = d1;      // erroneous behavior
        [assert](../error/assert.html)(e1 == e2); // holds
        [assert](../error/assert.html)(e1 == d1); // holds, erroneous behavior
        [assert](../error/assert.html)(e2 == d1); // holds, erroneous behavior
     
        [std::memcpy](../string/byte/memcpy.html)(&d2, &d1, sizeof(int)); // no erroneous behavior, but
                                            // d2 has an erroneous value
     
        [assert](../error/assert.html)(e1 == d2); // holds, erroneous behavior
        [assert](../error/assert.html)(e2 == d2); // holds, erroneous behavior
    }
     
    unsigned char g(bool b)
    {
        unsigned char c;     // c has erroneous value
        unsigned char d = c; // no erroneous behavior, but d has an erroneous value
        [assert](../error/assert.html)(c == d);      // holds, both integral promotions have erroneous behavior
        int e = d;           // erroneous behavior
        return b ? d : 0;    // erroneous behavior if b is true
    }  
  
(since C++26)  
  
  * _undefined behavior_ \- There are no restrictions on the behavior of the program. 



    

  * Some examples of undefined behavior are data races, memory accesses outside of array bounds, signed integer overflow, null pointer dereference, [more than one](eval_order.html "cpp/language/eval order") modifications of the same scalar in an expression without any intermediate sequence point(until C++11)that is unsequenced(since C++11), access to an object through [a pointer of a different type](reinterpret_cast.html#Type_aliasing "cpp/language/reinterpret cast"), etc. 
  * Implementations are not required to diagnose undefined behavior (although many simple situations are diagnosed), and the compiled program is not required to do anything meaningful. 



  * _runtime-undefined behavior_ \- The behavior that is undefined except when it occurs during the evaluation of an expression as a [core constant expression](constant_expression.html#Core_constant_expression "cpp/language/constant expression"). 

| (since C++11)  
---|---  
  
### UB and optimization

Because correct C++ programs are free of undefined behavior, compilers may produce unexpected results when a program that actually has UB is compiled with optimization enabled: 

For example, 

#### Signed overflow
    
    
    int foo(int x)
    {
        return x + 1 > x; // either true or UB due to signed overflow
    }

may be compiled as ([demo](https://godbolt.org/z/re39h7P1K)) 
    
    
    foo(int):
            mov     eax, 1
            ret

#### Access out of bounds
    
    
    int table[4] = {};
    bool exists_in_table(int v)
    {
        // return true in one of the first 4 iterations or UB due to out-of-bounds access
        for (int i = 0; i <= 4; i++)
            if (table[i] == v)
                return true;
        return false;
    }

May be compiled as ([demo](https://godbolt.org/z/vMbsdo5az)) 
    
    
    exists_in_table(int):
            mov     eax, 1
            ret

#### Uninitialized scalar
    
    
    [std::size_t](../types/size_t.html) f(int x)
    {
        [std::size_t](../types/size_t.html) a;
        if (x) // either x nonzero or UB
            a = 42;
        return a;
    }

May be compiled as ([demo](https://godbolt.org/z/1sraffdM8)) 
    
    
    f(int):
            mov     eax, 42
            ret

The output shown was observed on an older version of gcc

Run this code
    
    
    #include <cstdio>
     
    int main()
    {
        bool p; // uninitialized local variable
        if (p)  // UB access to uninitialized scalar
            [std::puts](../io/c/puts.html)("p is true");
        if (!p) // UB access to uninitialized scalar
            [std::puts](../io/c/puts.html)("p is false");
    }

Possible output: 
    
    
    p is true
    p is false

#### Invalid scalar
    
    
    int f()
    {
        bool b = true;
        unsigned char* p = reinterpret_cast<unsigned char*>(&b);
        *p = 10;
        // reading from b is now UB
        return b == 0;
    }

May be compiled as ([demo](https://godbolt.org/z/4vKxhcea4)) 
    
    
    f():
            mov     eax, 11
            ret

#### Null pointer dereference

The examples demonstrate reading from the result of dereferencing a null pointer. 
    
    
    int foo(int* p)
    {
        int x = *p;
        if (!p)
            return x; // Either UB above or this branch is never taken
        else
            return 0;
    }
     
    int bar()
    {
        int* p = nullptr;
        return *p; // Unconditional UB
    }

may be compiled as ([demo](https://godbolt.org/z/edxr5W5T7)) 
    
    
    foo(int*):
            xor     eax, eax
            ret
    bar():
            ret

#### Access to pointer passed to [std::realloc](../memory/c/realloc.html "cpp/memory/c/realloc")

Choose clang to observe the output shown

Run this code
    
    
    #include <cstdlib>
    #include <iostream>
     
    int main()
    {
        int* p = (int*)[std::malloc](../memory/c/malloc.html)(sizeof(int));
        int* q = (int*)[std::realloc](../memory/c/realloc.html)(p, sizeof(int));
        *p = 1; // UB access to a pointer that was passed to realloc
        *q = 2;
        if (p == q) // UB access to a pointer that was passed to realloc
            [std::cout](../io/cout.html) << *p << *q << '\n';
    }

Possible output: 
    
    
    12

#### Infinite loop without side-effects

Choose clang or the latest gcc to observe the output shown.

Run this code
    
    
    #include <iostream>
     
    bool fermat()
    {
        const int max_value = 1000;
     
        // Non-trivial infinite loop with no side effects is UB
        for (int a = 1, b = 1, c = 1; true; )
        {
            if (((a * a * a) == ((b * b * b) + (c * c * c))))
                return true; // disproved :()
            a++;
            if (a > max_value)
            {
                a = 1;
                b++;
            }
            if (b > max_value)
            {
                b = 1;
                c++;
            }
            if (c > max_value)
                c = 1;
        }
     
        return false; // not disproved
    }
     
    int main()
    {
        [std::cout](../io/cout.html) << "Fermat's Last Theorem ";
        fermat()
            ? [std::cout](../io/cout.html) << "has been disproved!\n"
            : [std::cout](../io/cout.html) << "has not been disproved.\n";
    }

Possible output: 
    
    
    Fermat's Last Theorem has been disproved!

### Ill-formed with diagnostic message

Note that compilers are permitted to extend the language in ways that give meaning to ill-formed programs. The only thing C++ standard requires in such cases is a diagnostic message (compiler warning), unless the program was "ill-formed no diagnostic required". 

For example, unless language extensions are disabled via `--pedantic-errors`, GCC will compile the following example [with only a warning](https://coliru.stacked-crooked.com/a/3cc6bdd9576df9a5) even though it [appears in the C++ standard](https://eel.is/c++draft/dcl.init.list#example-6) as an example of an "error" (see also [GCC Bugzilla #55783](https://gcc.gnu.org/bugzilla/show_bug.cgi?id=55783)) 

Run this code
    
    
    #include <iostream>
     
    // Example tweak, do not use constant
    double a{1.0};
     
    // C++23 standard, §9.4.5 List-initialization [dcl.init.list], Example #6:
    struct S
    {
        // no initializer-list constructors
        S(int, double, double); // #1
        S();                    // #2
        // ...
    };
     
    S s1 = {1, 2, 3.0}; // OK, invoke #1
    S s2{a, 2, 3}; // error: narrowing
    S s3{}; // OK, invoke #2
    // — end example]
     
    S::S(int, double, double) {}
    S::S() {}
     
    int main()
    {
        [std::cout](../io/cout.html) << "All checks have passed.\n";
    }

Possible output: 
    
    
    main.cpp:17:6: error: type 'double' cannot be narrowed to 'int' in initializer ⮠
    list [-Wc++11-narrowing]
    S s2{a, 2, 3}; // error: narrowing
         ^
    main.cpp:17:6: note: insert an explicit cast to silence this issue
    S s2{a, 2, 3}; // error: narrowing
         ^
         static_cast<int>( )
    1 error generated.

### References

Extended content  
---  
  
  * C++23 standard (ISO/IEC 14882:2024): 



    

  * 3.25 ill-formed program [defns.ill.formed] 



    

  * 3.26 implementation-defined behavior [defns.impl.defined] 



    

  * 3.66 unspecified behavior [defns.unspecified] 



    

  * 3.68 well-formed program [defns.well.formed] 



  * C++20 standard (ISO/IEC 14882:2020): 



    

  * TBD ill-formed program [defns.ill.formed] 



    

  * TBD implementation-defined behavior [defns.impl.defined] 



    

  * TBD unspecified behavior [defns.unspecified] 



    

  * TBD well-formed program [defns.well.formed] 



  * C++17 standard (ISO/IEC 14882:2017): 



    

  * TBD ill-formed program [defns.ill.formed] 



    

  * TBD implementation-defined behavior [defns.impl.defined] 



    

  * TBD unspecified behavior [defns.unspecified] 



    

  * TBD well-formed program [defns.well.formed] 



  * C++14 standard (ISO/IEC 14882:2014): 



    

  * TBD ill-formed program [defns.ill.formed] 



    

  * TBD implementation-defined behavior [defns.impl.defined] 



    

  * TBD unspecified behavior [defns.unspecified] 



    

  * TBD well-formed program [defns.well.formed] 



  * C++11 standard (ISO/IEC 14882:2011): 



    

  * TBD ill-formed program [defns.ill.formed] 



    

  * TBD implementation-defined behavior [defns.impl.defined] 



    

  * TBD unspecified behavior [defns.unspecified] 



    

  * TBD well-formed program [defns.well.formed] 



  * C++98 standard (ISO/IEC 14882:1998): 



    

  * TBD ill-formed program [defns.ill.formed] 



    

  * TBD implementation-defined behavior [defns.impl.defined] 



    

  * TBD unspecified behavior [defns.unspecified] 



    

  * TBD well-formed program [defns.well.formed] 

  
  
### See also

`[[[assume](attributes/assume.html "cpp/language/attributes/assume")(_expression_)]]`(C++23) |  specifies that the _expression_ will always evaluate to true at a given point  
(attribute specifier)  
---|---  
`[[[indeterminate](attributes/indeterminate.html "cpp/language/attributes/indeterminate")]]`(C++26) |  specifies that an object has an indeterminate value if it is not initialized  
(attribute specifier)  
[ unreachable](../utility/unreachable.html "cpp/utility/unreachable")(C++23) |  marks unreachable point of execution   
(function)   
[C documentation](../../c/language/behavior.html "c/language/behavior") for Undefined behavior  
  
### External links

1\.  | [The LLVM Project Blog: What Every C Programmer Should Know About Undefined Behavior #1/3](https://blog.llvm.org/2011/05/what-every-c-programmer-should-know.html)  
---|---  
2\.  | [The LLVM Project Blog: What Every C Programmer Should Know About Undefined Behavior #2/3](https://blog.llvm.org/2011/05/what-every-c-programmer-should-know_14.html)  
3\.  | [The LLVM Project Blog: What Every C Programmer Should Know About Undefined Behavior #3/3](https://blog.llvm.org/2011/05/what-every-c-programmer-should-know_21.html)  
4\.  | [Undefined behavior can result in time travel (among other things, but time travel is the funkiest)](https://devblogs.microsoft.com/oldnewthing/20140627-00/?p=633)  
5\.  | [Understanding Integer Overflow in C/C++](https://www.cs.utah.edu/~regehr/papers/overflow12.pdf)  
6\.  | [Fun with NULL pointers, part 1](https://lwn.net/Articles/342330/) (local exploit in Linux 2.6.30 caused by UB due to null pointer dereference)   
7\.  | [Undefined Behavior and Fermat’s Last Theorem](https://web.archive.org/web/20201108094235/https://kukuruku.co/post/undefined-behavior-and-fermats-last-theorem/)  
8\.  | [C++ programmer's guide to undefined behavior](https://pvs-studio.com/en/blog/posts/cpp/1129/)
