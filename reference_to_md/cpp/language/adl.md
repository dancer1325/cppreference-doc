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
  


[ Functions](functions.html "cpp/language/functions")

Declarations  
---  
[Function declaration](function.html "cpp/language/function")  
[Function parameter list](function.html#Parameter_list "cpp/language/function")  
[Function definition](function.html#Function_definition "cpp/language/function")  
[Function contract specifiers](function.html#Function_contract_specifiers "cpp/language/function") (C++26)  
[Default arguments](default_arguments.html "cpp/language/default arguments")  
[Variadic arguments](variadic_arguments.html "cpp/language/variadic arguments")  
[`inline` specifier](inline.html "cpp/language/inline")  
[Lambda expressions](lambda.html "cpp/language/lambda") (C++11)  
[Coroutines](coroutines.html "cpp/language/coroutines") (C++20)  
[Replacement functions](replacement_function.html "cpp/language/replacement function")  
Function calls  
**Argument-Dependent Lookup (ADL)**  
[Function-call operator](operator_other.html#Built-in_function_call_operator "cpp/language/operator other")  
[Function objects](../named_req/FunctionObject.html "cpp/named req/FunctionObject")  
Overloading  
[Overload resolution](overload_resolution.html "cpp/language/overload resolution")  
[Operator overloading](operators.html "cpp/language/operators")  
[Address of an overload set](overloaded_address.html "cpp/language/overloaded address")  
  


Argument-dependent lookup (ADL), also known as Koenig lookup[[1]](adl.html#cite_note-1), is the set of rules for looking up the unqualified function names in [function-call expressions](operator_other.html "cpp/language/operator other"), including implicit function calls to [overloaded operators](operators.html "cpp/language/operators"). These function names are looked up in the namespaces of their arguments in addition to the scopes and namespaces considered by the usual [unqualified name lookup](lookup.html "cpp/language/lookup"). 

Argument-dependent lookup makes it possible to use operators defined in a different namespace. Example:

Run this code
    
    
    #include <iostream>
     
    int main()
    {
        [std::cout](../io/cout.html) << "Test\n"; // There is no operator<< in global namespace, but ADL
                               // examines std namespace because the left argument is in
                               // std and finds std::operator<<(std::ostream&, const char*)
        operator<<([std::cout](../io/cout.html), "Test\n"); // Same, using function call notation
     
        // However,
        [std::cout](../io/cout.html) << endl; // Error: “endl” is not declared in this namespace.
                           // This is not a function call to endl(), so ADL does not apply
     
        endl([std::cout](../io/cout.html)); // OK: this is a function call: ADL examines std namespace
                         // because the argument of endl is in std, and finds std::endl
     
        (endl)([std::cout](../io/cout.html)); // Error: “endl” is not declared in this namespace.
                           // The sub-expression (endl) is not an unqualified-id
    }

## Contents

  * [1 Details](adl.html#Details)
  * [2 Notes](adl.html#Notes)
  * [3 Examples](adl.html#Examples)
  * [4 Defect reports](adl.html#Defect_reports)
  * [5 See also](adl.html#See_also)
  * [6 External links](adl.html#External_links)

  
---  
  
### Details

First, the argument-dependent lookup is not considered if the lookup set produced by usual [unqualified lookup](lookup.html "cpp/language/lookup") contains any of the following: 

1) a declaration of a class member.

2) a declaration of a function at block scope (that's not a [using declaration](namespace.html#Using-declarations "cpp/language/namespace")).

3) any declaration that is not a function or a function template (e.g. a function object or another variable whose name conflicts with the name of the function that's being looked up).

Otherwise, for every argument in a function call expression its type is examined to determine the _associated set of namespaces and classes_ that it will add to the lookup. 

1) For arguments of fundamental type, the associated set of namespaces and classes is empty.

2) For arguments of class type (including union), the set consists of:

a) The class itself.

b) If the class is [complete](type-id.html#Incomplete_type "cpp/language/type"), all of its direct and indirect base classes.

c) If the class is a [member of another class](nested_classes.html "cpp/language/nested types"), the class of which it is a member.

d) The innermost enclosing namespaces of the classes added to the set.

3) For arguments whose type is a [class template](class_template.html "cpp/language/class template") specialization, in addition to the class rules, the following associated classes and namespaces are added to the set.

a) The types of all template arguments provided for type template parameters (skipping constant template parameters and skipping template template parameters).

b) The namespaces in which any template template arguments are members.

c) The classes in which any template template arguments are members (if they happen to be class member templates).

4) For arguments of enumeration type, the innermost enclosing namespace of the declaration of the enumeration type is defined is added to the set. If the enumeration type is a member of a class, that class is added to the set.

5) For arguments of type pointer to `T` or pointer to an array of `T`, the type `T` is examined and its associated set of classes and namespaces is added to the set.

6) For arguments of function type, the function parameter types and the function return type are examined and their associated set of classes and namespaces are added to the set.

7) For arguments of type pointer to member function `F` of class `X`, the function parameter types, the function return type, and the class `X` are examined and their associated set of classes and namespaces are added to the set.

8) For arguments of type pointer to data member `T` of class `X`, the member type and the type `X` are both examined and their associated set of classes and namespaces are added to the set.

9) If the argument is the name or the [address-of expression for a set of overloaded functions](overloaded_address.html "cpp/language/overloaded address") (or function templates), every function in the overload set is examined and its associated set of classes and namespaces is added to the set. 

  * Additionally, if the set of overloads is named by a [template identifier](templates.html#Template_identifiers "cpp/language/templates"), all of its type template arguments and template template arguments (but not constant template arguments) are examined and their associated set of classes and namespaces are added to the set.



If any namespace in the associated set of classes and namespaces is an [inline namespace](namespace.html "cpp/language/namespace"), its enclosing namespace is also added to the set. If any namespace in the associated set of classes and namespaces directly contains an inline namespace, that inline namespace is added to the set.  | (since C++11)  
---|---  
  
After the associated set of classes and namespaces is determined, all declarations found in classes of this set are discarded for the purpose of further ADL processing, except namespace-scoped friend functions and function templates, as stated in point 2 below. 

The set of declarations found by ordinary [unqualified lookup](lookup.html "cpp/language/lookup") and the set of declarations found in all elements of the associated set produced by ADL, are merged, with the following special rules: 

1) [using directives](namespace.html#Using-directives "cpp/language/namespace") in the associated namespaces are ignored.

2) namespace-scoped friend functions (and function templates) that are declared in an associated class are visible through ADL even if they are not visible through ordinary lookup.

3) all names except for the functions and function templates are ignored (no collision with variables).

### Notes

Because of argument-dependent lookup, non-member functions and non-member operators defined in the same namespace as a class are considered part of the public interface of that class (if they are found through ADL) [[2]](adl.html#cite_note-2). 

ADL is the reason behind the established idiom for swapping two objects in generic code:using [std::swap](../algorithm/swap.html); swap(obj1, obj2); because calling [std::swap](../algorithm/swap.html)(obj1, obj2) directly would not consider the user-defined `swap()` functions that could be defined in the same namespace as the types of obj1 or obj2, and just calling the unqualified swap(obj1, obj2) would call nothing if no user-defined overload was provided. In particular, [std::iter_swap](../algorithm/iter_swap.html "cpp/algorithm/iter swap") and all other standard library algorithms use this approach when dealing with [Swappable](../named_req/Swappable.html "cpp/named req/Swappable") types. 

Name lookup rules make it impractical to declare operators in global or user-defined namespace that operate on types from the `std` namespace, e.g. a custom operator>> or operator+ for [std::vector](../container/vector.html "cpp/container/vector") or for [std::pair](../utility/pair.html "cpp/utility/pair") (unless the element types of the vector/pair are user-defined types, which would add their namespace to ADL). Such operators would not be looked up from template instantiations, such as the standard library algorithms. See [dependent names](dependent_name.html "cpp/language/dependent name") for further details. 

ADL can find a [friend function](friend.html "cpp/language/friend") (typically, an overloaded operator) that is defined entirely within a class or class template, even if it was never declared at namespace level. 
    
    
    template<typename T>
    struct number
    {
        number(int);
        friend number gcd(number x, number y) { return 0; }; // Definition within
                                                             // a class template
    };
     
    // Unless a matching declaration is provided gcd is
    // an invisible (except through ADL) member of this namespace
    void g()
    {
        number<double> a(3), b(4);
        a = gcd(a, b); // Finds gcd because number<double> is an associated class,
                       // making gcd visible in its namespace (global scope)
    //  b = gcd(3, 4); // Error; gcd is not visible
    }

Although a function call can be resolved through ADL even if ordinary lookup finds nothing, a function call to a [function template](function_template.html "cpp/language/function template") with explicitly-specified template arguments requires that there is a declaration of the template found by ordinary lookup (otherwise, it is a syntax error to encounter an unknown name followed by a less-than character). 
    
    
    namespace N1
    {
        struct S {};
     
        template<int X>
        void f(S);
    }
     
    namespace N2
    {
        template<class T>
        void f(T t);
    }
     
    void g(N1::S s)
    {
        f<3>(s);     // Syntax error until C++20 (unqualified lookup finds no f)
        N1::f<3>(s); // OK, qualified lookup finds the template 'f'
        N2::f<3>(s); // Error: N2::f does not take a constant parameter
                     //        N1::f is not looked up because ADL only works
                     //              with unqualified names
     
        using N2::f;
        f<3>(s); // OK: Unqualified lookup now finds N2::f
                 //     then ADL kicks in because this name is unqualified
                 //     and finds N1::f
    }

| (until C++20)  
---|---  
  
In the following contexts ADL-only lookup (that is, lookup in associated namespaces only) takes place: 

  * the lookup of non-member functions `begin` and `end` performed by the [range-for](range-for.html "cpp/language/range-for") loop if member lookup fails. 

| (since C++11)  
---|---  
  
  * the [dependent name lookup](dependent_name.html#Lookup_rules "cpp/language/dependent name") from the point of template instantiation. 



  * the lookup of non-member function `get` performed by [structured binding declaration](structured_binding.html "cpp/language/structured binding") for tuple-like types. 

| (since C++17)  
---|---  
  
### Examples

| This section is incomplete  
Reason: more examples   
---|---  
  
Example from <http://www.gotw.ca/gotw/030.htm>

Run this code
    
    
    namespace A
    {
        struct X;
        struct Y;
     
        void f(int);
        void g(X);
    }
     
    namespace B
    {
        void f(int i)
        {
            f(i); // Calls B::f (endless recursion)
        }
     
        void g(A::X x)
        {
            g(x); // Error: ambiguous between B::g (ordinary lookup)
                  //        and A::g (argument-dependent lookup)
        }
     
        void h(A::Y y)
        {
            h(y); // Calls B::h (endless recursion): ADL examines the A namespace
                  // but finds no A::h, so only B::h from ordinary lookup is used
        }
    }

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[CWG 33](https://cplusplus.github.io/CWG/issues/33.html) | C++98  | the associated namespaces or classes are unspecified  
if an argument used for lookup is the address of a  
group of overloaded functions or a function template  | specified   
[CWG 90](https://cplusplus.github.io/CWG/issues/90.html) | C++98  | the associated classes of a nested non-union class  
did not include its enclosing class, but a nested  
union was associated with its enclosing class  | non-unions also associated   
[CWG 239](https://cplusplus.github.io/CWG/issues/239.html) | C++98  | a block-scope function declaration found in the ordinary  
unqualified lookup did not prevent ADL from happening  | ADL not considered except  
for using declarations   
[CWG 997](https://cplusplus.github.io/CWG/issues/997.html) | C++98  | dependent parameter types and return types were  
excluded from consideration in determining the associated  
classes and namespaces of a function template  | included   
[CWG 1690](https://cplusplus.github.io/CWG/issues/1690.html) | C++98  
C++11  | ADL could not find lambdas (C++11) or objects  
of local class types (C++98) that are returned  | they can be found   
[CWG 1691](https://cplusplus.github.io/CWG/issues/1691.html) | C++11  | ADL had surprising behaviors for opaque enumeration declarations  | fixed   
[CWG 1692](https://cplusplus.github.io/CWG/issues/1692.html) | C++98  | doubly-nested classes did not have associated namespaces  
(their enclosing classes are not members of any namespace)  | associated namespaces are  
extended to the innermost  
enclosing namespaces   
[CWG 2857](https://cplusplus.github.io/CWG/issues/2857.html) | C++98  | the associated classes of an incomplete  
class type included its base classes  | not included   
  
### See also

  * [Name lookup](lookup.html "cpp/language/lookup")
  * [Template argument deduction](function_template.html "cpp/language/function template")
  * [Overload resolution](overload_resolution.html "cpp/language/overload resolution")



### External links

  1. [↑](adl.html#cite_ref-1) Andrew Koenig: ["A Personal Note About Argument-Dependent Lookup"](https://www.drdobbs.com/cpp/a-personal-note-about-argument-dependent/232901443)
  2. [↑](adl.html#cite_ref-2) H. Sutter (1998) ["What's In a Class? - The Interface Principle"](http://www.gotw.ca/publications/mill02.htm) in C++ Report, 10(3)

  
---
