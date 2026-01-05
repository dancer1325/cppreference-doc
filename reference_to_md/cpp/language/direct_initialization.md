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
**Direct-initialization**  
  
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
  


[ Initialization](initialization.html "cpp/language/initialization")

[Initializer](initialization.html "cpp/language/initialization")  
---  
[Default initialization](default_initialization.html "cpp/language/default initialization")  
[Value initialization](value_initialization.html "cpp/language/value initialization")  
**Direct initialization**  
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
  


Initializes an object from explicit set of constructor arguments. 

## Contents

  * [1 Syntax](direct_initialization.html#Syntax)
  * [2 Explanation](direct_initialization.html#Explanation)
  * [3 Notes](direct_initialization.html#Notes)
  * [4 Example](direct_initialization.html#Example)
  * [5 See also](direct_initialization.html#See_also)

  
---  
  
### Syntax  
  
---  
T object `**(**` arg `**);**` T object `**(**` arg1, arg2, ... `**);**` |  (1)  |   
T object `**{**` arg `**};**` |  (2)  |  (since C++11)  
T `**(**` other `**)**` T `**(**` arg1, arg2, ... `**)**` |  (3)  |   
`**static_cast <**` T `**>(**` other `**)**` |  (4)  |   
`**new**` T`**(**` args, ... `**)**` |  (5)  |   
Class`**::**` Class`**()**` `**:**` member`**(**` args, ... `**)**` `**{**` ... `**}**` |  (6)  |   
`**[**` arg`**]() {**` ... `**}**` |  (7)  |  (since C++11)  
  
### Explanation

Direct-initialization is performed in the following situations: 

1) Initialization with a nonempty parenthesized list of expressions or braced-init-lists(since C++11).

2) Initialization of an object of non-class type with a single brace-enclosed initializer (note: for class types and other uses of braced-init-list, see [list-initialization](list_initialization.html "cpp/language/list initialization"))(since C++11).

3) Initialization of a prvalue temporary(until C++17)the result object of a prvalue(since C++17) by [function-style cast](explicit_cast.html "cpp/language/explicit cast") or with a parenthesized expression list.

4) Initialization of a prvalue temporary(until C++17)the result object of a prvalue(since C++17) by a [static_cast](static_cast.html "cpp/language/static cast") expression.

5) Initialization of an object with dynamic storage duration by a new-expression with an initializer.

6) Initialization of a base or a non-static member by constructor [initializer list](initializer_list.html "cpp/language/initializer list").

7) Initialization of closure object members from the variables caught by copy in a lambda-expression.

The effects of direct-initialization are: 

  * If `T` is an array type, 



    

  * the program is ill-formed. 


| (until C++20)  
---|---  
  
    

  * the array is initialized as in [aggregate initialization](aggregate_initialization.html "cpp/language/aggregate initialization"), except that narrowing conversions are allowed and any elements without an initializer are [value-initialized](value_initialization.html "cpp/language/value initialization"). 


    
    
    struct A
    {
        explicit A(int i = 0) {}
    };
     
    A a[2](A(1)); // OK: initializes a[0] with A(1) and a[1] with A()
    A b[2]{A(1)}; // error: implicit copy-list-initialization of b[1]
                  //        from {} selected explicit constructor

| (since C++20)  
  
  * If `T` is a class type, 



    

  * if the initializer is a [prvalue](value_category.html "cpp/language/value category") expression whose type is the same class as `T` (ignoring cv-qualification), the initializer expression itself, rather than a temporary materialized from it, is used to initialize the destination object.  
(Before C++17, the compiler may elide the construction from the prvalue temporary in this case, but the appropriate constructor must still be accessible: see [copy elision](copy_elision.html "cpp/language/copy elision")) 


| (since C++17)  
---|---  
  
    

  * the constructors of `T` are examined and the best match is selected by overload resolution. The constructor is then called to initialize the object. 



    

  * otherwise, if the destination type is a (possibly cv-qualified) aggregate class, it is initialized as described in [aggregate initialization](aggregate_initialization.html "cpp/language/aggregate initialization") except that narrowing conversions are permitted, designated initializers are not allowed, a temporary bound to a reference does not have its lifetime extended, there is no brace elision, and any elements without an initializer are [value-initialized](value_initialization.html "cpp/language/value initialization"). 


    
    
    struct B
    {
        int a;
        int&& r;
    };
     
    int f();
    int n = 10;
     
    B b1{1, f()};            // OK, lifetime is extended
    B b2(1, f());            // well-formed, but dangling reference
    B b3{1.0, 1};            // error: narrowing conversion
    B b4(1.0, 1);            // well-formed, but dangling reference
    B b5(1.0, std::move(n)); // OK

| (since C++20)  
---|---  
  
  * Otherwise, if `T` is a non-class type but the source type is a class type, the conversion functions of the source type and its base classes, if any, are examined and the best match is selected by overload resolution. The selected user-defined conversion is then used to convert the initializer expression into the object being initialized. 
  * Otherwise, if `T` is bool and the source type is [std::nullptr_t](../types/nullptr_t.html "cpp/types/nullptr t"), the value of the initialized object is false. 
  * Otherwise, [standard conversions](implicit_cast.html "cpp/language/implicit cast") are used, if necessary, to convert the value of other to the cv-unqualified version of `T`, and the initial value of the object being initialized is the (possibly converted) value. 



### Notes

Direct-initialization is more permissive than copy-initialization: copy-initialization only considers non-[explicit](explicit.html "cpp/language/explicit") constructors and non-explicit user-defined [conversion functions](cast_operator.html "cpp/language/cast operator"), while direct-initialization considers all constructors and all user-defined conversion functions. 

In case of ambiguity between a variable declaration using the direct-initialization syntax (1) (with round parentheses) and a [function declaration](function.html "cpp/language/function"), the compiler always chooses function declaration. This disambiguation rule is sometimes counter-intuitive and has been called the [most vexing parse](https://en.wikipedia.org/wiki/most_vexing_parse "enwiki:most vexing parse"). 

Run this code
    
    
    #include <fstream>
    #include <iterator>
    #include <string>
     
    int main()
    {
        [std::ifstream](../io/basic_ifstream.html) file("data.txt");
     
        // The following is a function declaration:
        [std::string](../string/basic_string.html) foo1([std::istreambuf_iterator](../iterator/istreambuf_iterator.html)<char>(file),
                         [std::istreambuf_iterator](../iterator/istreambuf_iterator.html)<char>());
        // It declares a function called foo1, whose return type is std::string,
        // first parameter has type std::istreambuf_iterator<char> and the name "file",
        // second parameter has no name and has type std::istreambuf_iterator<char>(),
        // which is rewritten to function pointer type std::istreambuf_iterator<char>(*)()
     
        // Pre-C++11 fix (to declare a variable) - add extra parentheses around one
        // of the arguments:
        [std::string](../string/basic_string.html) str1(([std::istreambuf_iterator](../iterator/istreambuf_iterator.html)<char>(file)),
                          [std::istreambuf_iterator](../iterator/istreambuf_iterator.html)<char>());
     
        // Post-C++11 fix (to declare a variable) - use list-initialization for any
        // of the arguments:
        [std::string](../string/basic_string.html) str2([std::istreambuf_iterator](../iterator/istreambuf_iterator.html)<char>{file}, {});
    }

### Example

Run this code
    
    
    #include <iostream>
    #include <memory>
    #include <string>
     
    struct Foo
    {
        int mem;
        explicit Foo(int n) : mem(n) {}
    };
     
    int main()
    {
        [std::string](../string/basic_string.html) s1("test"); // constructor from const char*
        [std::string](../string/basic_string.html) s2(10, 'a');
     
        [std::unique_ptr](../memory/unique_ptr.html)<int> p(new int(1));  // OK: explicit constructors allowed
    //  std::unique_ptr<int> p = new int(1); // error: constructor is explicit
     
        Foo f(2); // f is direct-initialized:
                  // constructor parameter n is copy-initialized from the rvalue 2
                  // f.mem is direct-initialized from the parameter n
    //  Foo f2 = 2; // error: constructor is explicit
     
        [std::cout](../io/cout.html) << s1 << ' ' << s2 << ' ' << *p << ' ' << f.mem  << '\n';
    }

Output: 
    
    
    test aaaaaaaaaa 1 2

### See also

  * [copy elision](copy_elision.html "cpp/language/copy elision")
  * [converting constructor](converting_constructor.html "cpp/language/converting constructor")
  * [copy assignment](as_operator.html "cpp/language/copy assignment")
  * [copy constructor](copy_constructor.html "cpp/language/copy constructor")
  * [default constructor](default_constructor.html "cpp/language/default constructor")
  * [destructor](destructor.html "cpp/language/destructor")
  * [`explicit`](explicit.html "cpp/language/explicit")
  * [initialization](initialization.html "cpp/language/initialization")
    * [aggregate initialization](aggregate_initialization.html "cpp/language/aggregate initialization")
    * [constant initialization](constant_initialization.html "cpp/language/constant initialization")
    * [copy initialization](copy_initialization.html "cpp/language/copy initialization")
    * [default initialization](default_initialization.html "cpp/language/default initialization")
    * [initializer list](initializer_list.html "cpp/language/initializer list")
    * [list initialization](list_initialization.html "cpp/language/list initialization")
    * [reference initialization](reference_initialization.html "cpp/language/reference initialization")
    * [value initialization](value_initialization.html "cpp/language/value initialization")
    * [zero initialization](zero_initialization.html "cpp/language/zero initialization")
  * [move assignment](move_operator.html "cpp/language/move assignment")
  * [move constructor](move_constructor.html "cpp/language/move constructor")
  * [`new`](new.html "cpp/language/new")


