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
**Constant initialization**  
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
[Direct initialization](direct_initialization.html "cpp/language/direct initialization")  
[Copy-initialization](copy_initialization.html "cpp/language/copy initialization")  
[List initialization](list_initialization.html "cpp/language/list initialization") (C++11)  
[Aggregate initialization](aggregate_initialization.html "cpp/language/aggregate initialization")  
[Reference initialization](reference_initialization.html "cpp/language/reference initialization")  
[Copy elision](copy_elision.html "cpp/language/copy elision")  
[Static initialization](initialization.html#Static_initialization "cpp/language/initialization")  
[Zero initialization](zero_initialization.html "cpp/language/zero initialization")  
**Constant initialization**  
[Dynamic non-local initialization](initialization.html#Dynamic_initialization "cpp/language/initialization")  
[Ordered dynamic initialization](initialization.html#Dynamic_initialization "cpp/language/initialization")  
[Unordered dynamic initialization](initialization.html#Dynamic_initialization "cpp/language/initialization")  
[Class member initialization](initialization.html#Class_member_initialization "cpp/language/initialization")  
[Member initializer list](initializer_list.html "cpp/language/initializer list")  
[Default member initializer](data_members.html#Member_initialization "cpp/language/data members") (C++11)  
  


Sets the initial values of the [static](storage_duration.html "cpp/language/storage duration") variables to a compile-time constant. 

## Contents

  * [1 Explanation](constant_initialization.html#Explanation)
  * [2 Notes](constant_initialization.html#Notes)
  * [3 Example](constant_initialization.html#Example)
  * [4 Defect reports](constant_initialization.html#Defect_reports)
  * [5 See also](constant_initialization.html#See_also)

  
---  
  
### Explanation

_Constant initialization_ is performed in the following cases: 

  * Initializing a reference with [static storage duration](storage_duration.html#Static_storage_duration "cpp/language/storage duration") with a [constant expression](constant_expression.html "cpp/language/constant expression"). 


  * Initializing an object of [POD type](type-id.html#POD_type "cpp/language/type") with static storage duration with a constant expression. 

| (until C++11)  
---|---  
  
  * Initializing a reference with [static](storage_duration.html#Static_storage_duration "cpp/language/storage duration") or [thread](storage_duration.html#Thread_storage_duration "cpp/language/storage duration") storage duration, where all following conditions are satisfied: 



    

  * Each [full-expression](expressions.html#Full-expressions "cpp/language/expressions") (including implicit conversions) that appears in the initializer is a [constant expression](constant_expression.html "cpp/language/constant expression"). 
  * The reference is bound to one of the following entities: 



    

  * an lvalue designating an object with static storage duration 
  * a temporary object 
  * a [subobject](objects.html#Subobjects "cpp/language/object") of a temporary object 
  * a function 



  * Initializing an object with static or thread storage duration, and one of the following conditions is satisfied: 



    

  * If the object is initialized by a constructor call, where the initialization full-expression is a constant expression, except that it may also invoke [constexpr constructors](constexpr.html#constexpr_constructor "cpp/language/constexpr") for the object and its subobjects (even if those objects are of non-[literal](constant_expression.html#Literal_types "cpp/language/constant expression") class types). 
  * Otherwise, either the object is [value-initialized](value_initialization.html "cpp/language/value initialization") or every full-expression that appears in its initializer is a constant expression. 


| (since C++11)  
(until C++17)  
  
  * Initializing a variable or temporary object with [static](storage_duration.html#Static_storage_duration "cpp/language/storage duration") or [thread](storage_duration.html#Thread_storage_duration "cpp/language/storage duration") storage duration by an initializer whose [full-expression](expressions.html#Full-expressions "cpp/language/expressions") is a [constant expression](constant_expression.html "cpp/language/constant expression"), except that if the entity being intialized is an object, such an initializer may also invoke [constexpr constructors](constexpr.html#constexpr_constructor "cpp/language/constexpr") for the object and its [subobjects](objects.html#Subobjects "cpp/language/object") (even if those objects are of non-[literal](constant_expression.html#Literal_types "cpp/language/constant expression") class types). 

| (since C++17)  
(until C++20)  
  
  * A variable or temporary object(until C++26) with [static](storage_duration.html#Static_storage_duration "cpp/language/storage duration") or [thread](storage_duration.html#Thread_storage_duration "cpp/language/storage duration") storage duration is [constant-initialized](constant_expression.html#Constant-initialized_entities "cpp/language/constant expression"). 

| (since C++20)  
  
The effects of constant initialization are the same as the effects of the corresponding initialization, except that it is guaranteed that it is complete before any other initialization of a static or thread-local(since C++11) object begins. 

### Notes

The compiler is permitted to initialize other static and thread-local(since C++11) objects using constant initialization, if it can guarantee that the value would be the same as if the standard order of initialization was followed. 

Constant initialization usually happens when the program loads into memory, as part of initializing the program's runtime environment. 

### Example

Run this code
    
    
    #include <iostream>
    #include <array>
     
    struct S
    {
        static const int c;
    };
     
    const int d = 10 * S::c; // not a constant expression: S::c has no preceding
                             // initializer, this initialization happens after const
    const int S::c = 5;      // constant initialization, guaranteed to happen first
     
    int main()
    {
        [std::cout](../io/cout.html) << "d = " << d << '\n';
        [std::array](../container/array.html)<int, S::c> a1; // OK: S::c is a constant expression
    //  std::array<int, d> a2;    // error: d is not a constant expression
    }

Output: 
    
    
    d = 50

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[CWG 441](https://cplusplus.github.io/CWG/issues/441.html) | C++98  | references could not be constant initialized  | made constant initializable   
[CWG 1489](https://cplusplus.github.io/CWG/issues/1489.html) | C++11  | it was unclear whether value-initializing  
an object can be a constant initialization  | it can   
[CWG 1747](https://cplusplus.github.io/CWG/issues/1747.html) | C++11  | binding a reference to a function could not be constant initialization  | it can   
[CWG 1834](https://cplusplus.github.io/CWG/issues/1834.html) | C++11  | binding a reference to an xvalue could not be constant initialization  | it can   
  
### See also

  * [`constinit`](constinit.html "cpp/language/constinit")
  * [`constexpr`](constexpr.html "cpp/language/constexpr")
  * [constructor](initializer_list.html "cpp/language/constructor")
  * [converting constructor](converting_constructor.html "cpp/language/converting constructor")
  * [copy constructor](copy_constructor.html "cpp/language/copy constructor")
  * [default constructor](default_constructor.html "cpp/language/default constructor")
  * [`explicit`](explicit.html "cpp/language/explicit")
  * [initialization](initialization.html "cpp/language/initialization")
    * [aggregate initialization](aggregate_initialization.html "cpp/language/aggregate initialization")
    * [copy initialization](copy_initialization.html "cpp/language/copy initialization")
    * [default initialization](default_initialization.html "cpp/language/default initialization")
    * [direct initialization](direct_initialization.html "cpp/language/direct initialization")
    * [list initialization](list_initialization.html "cpp/language/list initialization")
    * [reference initialization](reference_initialization.html "cpp/language/reference initialization")
    * [value initialization](value_initialization.html "cpp/language/value initialization")
    * [zero initialization](zero_initialization.html "cpp/language/zero initialization")
  * [move constructor](move_constructor.html "cpp/language/move constructor")


