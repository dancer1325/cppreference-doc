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
| **`new` expression**  
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
  


[ Expressions](expressions.html "cpp/language/expressions")

General  
---  
| [Value categories](value_category.html "cpp/language/value category")  
---  
[Order of evaluation](eval_order.html "cpp/language/eval order")  
[Constant expressions](constant_expression.html "cpp/language/constant expression")  
[Primary expressions](expressions.html#Primary_expressions "cpp/language/expressions")  
  
| [Lambda expressions](lambda.html "cpp/language/lambda") (C++11)  
---  
[Requires expressions](requires.html "cpp/language/requires") (C++20)  
[Pack indexing expression](pack_indexing.html#Pack_indexing_expression "cpp/language/pack indexing") (C++26)  
[Potentially-evaluated expressions](expressions.html#Potentially-evaluated_expressions "cpp/language/expressions")  
  
Literals  
| [Integer literals](integer_literal.html "cpp/language/integer literal")  
---  
[Floating-point literals](floating_literal.html "cpp/language/floating literal")  
[Boolean literals](bool_literal.html "cpp/language/bool literal")  
[Character literals](character_literal.html "cpp/language/character literal")  
  
| [Escape sequences](escape.html "cpp/language/escape")  
---  
[String literals](string_literal.html "cpp/language/string literal")  
[Null pointer literal](nullptr.html "cpp/language/nullptr") (C++11)  
[User-defined literal](user_literal.html "cpp/language/user literal") (C++11)  
  
Operators  
| [Assignment operators](operator_assignment.html "cpp/language/operator assignment")  
---  
[Increment and decrement](operator_incdec.html "cpp/language/operator incdec")  
[Arithmetic operators](operator_arithmetic.html "cpp/language/operator arithmetic")  
[Logical operators](operator_logical.html "cpp/language/operator logical")  
[Comparison operators](operator_comparison.html "cpp/language/operator comparison")  
[Member access operators](operator_member_access.html "cpp/language/operator member access")  
[Other operators](operator_other.html "cpp/language/operator other")  
**`new`-expression**  
[`delete`-expression](delete.html "cpp/language/delete")  
[`throw`-expression](throw.html "cpp/language/throw")  
  
| [`alignof`](alignof.html "cpp/language/alignof")  
---  
[`sizeof`](sizeof.html "cpp/language/sizeof")  
[`sizeof...`](sizeof....html "cpp/language/sizeof...") (C++11)  
[`typeid`](typeid.html "cpp/language/typeid")  
[`noexcept`](noexcept.html "cpp/language/noexcept") (C++11)  
[Fold expressions](fold.html "cpp/language/fold") (C++17)  
[Alternative representations of operators](operator_alternative.html "cpp/language/operator alternative")  
[Precedence and associativity](operator_precedence.html "cpp/language/operator precedence")  
[Operator overloading](operators.html "cpp/language/operators")  
[Default comparisons](default_comparisons.html "cpp/language/default comparisons") (C++20)  
  
Conversions  
| [Implicit conversions](implicit_cast.html "cpp/language/implicit conversion")  
---  
[Explicit conversions](explicit_cast.html "cpp/language/explicit cast")  
[Usual arithmetic conversions](usual_arithmetic_conversions.html "cpp/language/usual arithmetic conversions")  
[User-defined conversion](cast_operator.html "cpp/language/cast operator")  
  
| [`const_cast`](const_cast.html "cpp/language/const cast")  
---  
[`static_cast`](static_cast.html "cpp/language/static cast")  
[`dynamic_cast`](dynamic_cast.html "cpp/language/dynamic cast")  
[`reinterpret_cast`](reinterpret_cast.html "cpp/language/reinterpret cast")  
  


Creates and initializes objects with dynamic [storage duration](storage_duration.html "cpp/language/storage duration"), that is, objects whose lifetime is not necessarily limited by the scope in which they were created. 

## Contents

  * [1 Syntax](new.html#Syntax)
  * [2 Explanation](new.html#Explanation)
  * [3 Dynamic arrays](new.html#Dynamic_arrays)
  * [4 Allocation](new.html#Allocation)
    * [4.1 Placement new](new.html#Placement_new)
  * [5 Initialization](new.html#Initialization)
    * [5.1 Initialization failure](new.html#Initialization_failure)
  * [6 Memory leaks](new.html#Memory_leaks)
  * [7 Notes](new.html#Notes)
  * [8 Keywords](new.html#Keywords)
  * [9 Defect reports](new.html#Defect_reports)
  * [10 See also](new.html#See_also)

  
---  
  
### Syntax  
  
---  
`**::**`(optional) `**new**` `**(**` type ﻿`**)**` new-initializer ﻿(optional) |  (1)  |   
`**::**`(optional) `**new**` type new-initializer ﻿(optional) |  (2)  |   
`**::**`(optional) `**new**` `**(**` placement-args ﻿`**)**` `**(**` type ﻿`**)**` new-initializer ﻿(optional) |  (3)  |   
`**::**`(optional) `**new**` `**(**` placement-args ﻿`**)**` type new-initializer ﻿(optional) |  (4)  |   
  
1,2) Attempts to create an object of type, denoted by the [type-id](type-id.html#Type_naming "cpp/language/type") type, which may be array type, and may include a [placeholder type specifier](auto.html "cpp/language/auto")(since C++11), or include a class template name whose argument is to be deduced by [class template argument deduction](ctad.html "cpp/language/class template argument deduction")(since C++17).

3,4) Same as (1,2), but provides additional arguments to the allocation function, see [placement new](new.html#Placement_new).

### Explanation

type |  \-  |  the target type-id   
---|---|---  
new-initializer |  \-  |  a parentheses-enclosed expression list or a [brace-enclosed initializer list](initialization.html "cpp/language/initialization")(since C++11)  
placement-args |  \-  |  additional placement arguments   
  
  
The new expression attempts to allocate storage and then attempts to construct and initialize either a single unnamed object, or an unnamed array of objects in the allocated storage. The new expression returns a prvalue pointer to the constructed object or, if an array of objects was constructed, a pointer to the initial element of the array. 

Syntax (1) or (3) is required if type includes parentheses: 
    
    
    new int(*[10])();    // error: parsed as (new int) (*[10]) ()
    new (int (*[10])()); // okay: allocates an array of 10 pointers to functions

In addition, type is parsed greedily: it will be taken include every token that can be a part of a declarator: 
    
    
    new int + 1; // okay: parsed as (new int) + 1, increments a pointer returned by new int
    new int * 1; // error: parsed as (new int*) (1)

The new-initializer is not optional if 

  * type is an [array of unknown bound](array.html#Arrays_of_unknown_bound "cpp/language/array"), 



  * a [placeholder](auto.html "cpp/language/auto") is used in type, that is, auto or decltype(auto)(since C++14), possibly combined with a [type constraint](constraints.html#Concepts "cpp/language/constraints")(since C++20), 

| (since C++11)  
---|---  
  
  * a class template is used in type whose arguments need to be [deduced](ctad.html "cpp/language/class template argument deduction"). 

| (since C++17)  
      
    
    double* p = new double[]{1, 2, 3}; // creates an array of type double[3]
    auto p = new auto('c');            // creates a single object of type char. p is a char*
     
    auto q = new [std::integral](../concepts/integral.html) auto(1);         // OK: q is an int*
    auto q = new [std::floating_point](../concepts/floating_point.html) auto(true) // ERROR: type constraint not satisfied
     
    auto r = new [std::pair](../utility/pair.html)(1, true); // OK: r is a std::pair<int, bool>*
    auto r = new [std::vector](../container/vector.html);        // ERROR: element type can't be deduced

### Dynamic arrays

If type is an array type, all dimensions other than the first must be specified as positive [integral constant expression](constant_expression.html "cpp/language/constant expression")(until C++14)[converted constant expression](constant_expression.html "cpp/language/constant expression") of type [std::size_t](../types/size_t.html "cpp/types/size t")(since C++14), but (only when using un-parenthesized syntaxes (2) and (4)) the first dimension may be an expression of integral type, enumeration type, or class type with a single non-explicit conversion function to integral or enumeration type(until C++14)any expression convertible to [std::size_t](../types/size_t.html "cpp/types/size t")(since C++14). This is the only way to directly create an array with size defined at runtime, such arrays are often referred to as _dynamic arrays_ : 
    
    
    int n = 42;
    double a[n][5]; // error
    auto p1 = new  double[n][5];  // OK
    auto p2 = new  double[5][n];  // error: only the first dimension may be non-constant
    auto p3 = new (double[n][5]); // error: syntax (1) cannot be used for dynamic arrays

The behavior is undefined if the value in the first dimension (converted to integral or enumeration type if needed) is negative.  | (until C++11)  
---|---  
In the following cases the value of the expression specifying the first dimension is invalid: 

  * the expression is of non-class type and its value before conversion to [std::size_t](../types/size_t.html "cpp/types/size t") is negative; 
  * the expression is of class type and its value after user-defined conversion function and before the [second standard conversion](implicit_cast.html "cpp/language/implicit conversion") is negative; 
  * the value of the expression is larger than some implementation-defined limit; 
  * the value is smaller than the number of array elements provided in the brace-enclosed initializer list (including the terminating '\0' on a [string literal](string_literal.html "cpp/language/string literal")). 

If the value in the first dimension is invalid for any of these reasons, 

  * if, after conversion to [std::size_t](../types/size_t.html "cpp/types/size t"), the first dimension is a [core constant expression](constant_expression.html#Core_constant_expressions "cpp/language/constant expression") and it is [potentially evaluated](expressions.html#Potentially-evaluated_expressions "cpp/language/expressions"), the program is ill-formed, 
  * otherwise, if the allocation function that would have been called is non-throwing (including [std::nothrow](../memory/new/nothrow.html "cpp/memory/new/nothrow") overloads not declared noexcept), the new expression returns the null pointer of the required result type, 
  * otherwise, the new expression does not call the allocation function, and instead throws an exception of a type that would match a [handler](catch.html "cpp/language/catch") of type [std::bad_array_new_length](../memory/new/bad_array_new_length.html "cpp/memory/new/bad array new length"). 

| (since C++11)  
  
The first dimension of zero is acceptable, and the allocation function is called. 

If new-initializer is a braced-enclosed initializer list, and the first dimension is [potentially evaluated](expressions.html#Potentially-evaluated_expressions "cpp/language/expressions") and not a [core constant expression](constant_expression.html#Core_constant_expressions "cpp/language/constant expression"), the semantic constraints of [copy-initializing](copy_initialization.html "cpp/language/copy initialization") a hypothetical element of the array from an empty initializer list are checked.  | (since C++11)  
---|---  
  
### Allocation

The new expression allocates storage by calling the appropriate [allocation function](../memory/new/operator_new.html "cpp/memory/new/operator new"). If type is a non-array type, the name of the function is [operator new](../memory/new/operator_new.html). If type is an array type, the name of the function is [operator new](../memory/new/operator_new.html)[]. 

As described in [allocation function](../memory/new/operator_new.html "cpp/memory/new/operator new"), the C++ program may provide global and class-specific replacements for these functions. If the new expression begins with the optional :: operator, as in ::new T or ::new T[n], class-specific replacements will be ignored (the function is [looked up](lookup.html "cpp/language/lookup") in global [scope](scope.html "cpp/language/scope")). Otherwise, if `T` is a class type, lookup begins in the class scope of `T`. 

When calling the allocation function, the new expression passes the number of bytes requested as the first argument, of type [std::size_t](../types/size_t.html "cpp/types/size t"), which is exactly sizeof(T) for non-array `T`. 

Array allocation may supply unspecified overhead, which may vary from one call to new to the next, unless the allocation function selected is the standard non-allocating form. The pointer returned by the new expression will be offset by that value from the pointer returned by the allocation function. Many implementations use the array overhead to store the number of objects in the array which is used by the [delete[]](delete.html "cpp/language/delete") expression to call the correct number of destructors. In addition, if the new expression is used to allocate an array of char, unsigned char, or [`std::byte`](../types/byte.html "cpp/types/byte")(since C++17), it may request additional memory from the allocation function if necessary to guarantee correct alignment of objects of all types no larger than the requested array size, if one is later placed into the allocated array. 

new expressions are allowed to elide or combine allocations made through replaceable allocation functions. In case of elision, the storage may be provided by the compiler without making the call to an allocation function (this also permits optimizing out unused new expression). In case of combining, the allocation made by a new expression E1 may be extended to provide additional storage for another new expression E2 if all of the following is true:  1) The lifetime of the object allocated by E1 strictly contains the lifetime of the object allocated by E2. 2) E1 and E2 would invoke the same replaceable global allocation function. 3) For a throwing allocation function, exceptions in E1 and E2 would be first caught in the same handler. Note that this optimization is only permitted when new expressions are used, not any other methods to call a replaceable allocation function: delete[] new int[10]; can be optimized out, but [operator delete](../memory/new/operator_delete.html)([operator new](../memory/new/operator_new.html)(10)); cannot.  | (since C++14)  
---|---  
During an evaluation of a [constant expression](constant_expression.html "cpp/language/constant expression"), a call to an allocation function is always omitted. Only new expressions that would otherwise result in a call to a replaceable global allocation function can be evaluated in constant expressions.  | (since C++20)  
  
#### Placement new

If placement-args are provided, they are passed to the allocation function as additional arguments. Such allocation functions are known as "placement new", after the standard allocation function void* [operator new](../memory/new/operator_new.html)([std::size_t](../types/size_t.html), void*), which simply returns its second argument unchanged. This is used to construct objects in allocated storage: 
    
    
    // within any block scope...
    {
        // Statically allocate the storage with automatic storage duration
        // which is large enough for any object of type “T”.
        alignas(T) unsigned char buf[sizeof(T)];
     
        T* tptr = new(buf) T; // Construct a “T” object, placing it directly into your 
                              // pre-allocated storage at memory address “buf”.
     
        tptr->~T();           // You must **manually** call the object's destructor
                              // if its side effects is depended by the program.
    }                         // Leaving this block scope automatically deallocates “buf”.

Note: this functionality is encapsulated by the member functions of the [Allocator](../named_req/Allocator.html "cpp/named req/Allocator") classes. 

When allocating an object whose alignment requirement exceeds [`__STDCPP_DEFAULT_NEW_ALIGNMENT__`](../preprocessor/replace.html#Predefined_macros "cpp/preprocessor/replace") or an array of such objects, the new expression passes the alignment requirement (wrapped in [std::align_val_t](../memory/new/align_val_t.html "cpp/memory/new/align val t")) as the second argument for the allocation function (for placement forms, placement-arg appear after the alignment, as the third, fourth, etc arguments). If overload resolution fails (which happens when a class-specific allocation function is defined with a different signature, since it hides the globals), overload resolution is attempted a second time, without alignment in the argument list. This allows alignment-unaware class-specific allocation functions to take precedence over the global alignment-aware allocation functions.  | (since C++17)  
---|---  
      
    
    new T;      // calls operator new(sizeof(T))
                // (C++17) or operator new(sizeof(T), std::align_val_t(alignof(T))))
    new T[5];   // calls operator new[](sizeof(T)*5 + overhead)
                // (C++17) or operator new(sizeof(T)*5+overhead, std::align_val_t(alignof(T))))
    new(2,f) T; // calls operator new(sizeof(T), 2, f)
                // (C++17) or operator new(sizeof(T), std::align_val_t(alignof(T)), 2, f)

If a non-throwing allocation function (e.g. the one selected by new([std::nothrow](../memory/new/nothrow.html)) T) returns a null pointer because of an allocation failure, then the new expression returns immediately, it does not attempt to initialize an object or to call a deallocation function. If a null pointer is passed as the argument to a non-allocating placement new expression, which makes the selected standard non-allocating placement allocation function return a null pointer, the behavior is undefined. 

### Initialization

The object created by a new expression is initialized according to the following rules. 

If type is not an array type, the single object is constructed in the acquired memory area: 

  * If new-initializer is absent, the object is [default-initialized](default_initialization.html "cpp/language/default initialization"). 
  * If new-initializer is a parentheses-enclosed expression list, the object is [direct-initialized](direct_initialization.html "cpp/language/direct initialization"). 



  * If new-initializer is a braced-enclosed initializer list, the object is [list-initialized](list_initialization.html "cpp/language/list initialization"). 

| (since C++11)  
---|---  
  
If type is an array type, an array of objects is initialized: 

  * If new-initializer is absent, each element is [default-initialized](default_initialization.html "cpp/language/default initialization"). 



    

  * Even if the first dimension is zero, the semantic constraints of default-initializing a hypothetical element still need to be met. 



  * If new-initializer is a pair of parentheses, each element is [value-initialized](value_initialization.html "cpp/language/value initialization"). 



    

  * Even if the first dimension is zero, the semantic constraints of value-initializing a hypothetical element still need to be met. 



  * If new-initializer is a braced-enclosed initializer list, the array is [aggregate-initialized](aggregate_initialization.html "cpp/language/aggregate initialization"). 

| (since C++11)  
---|---  
  
  * If new-initializer is a parentheses-enclosed non-empty expression list, the array is [aggregate-initialized](aggregate_initialization.html "cpp/language/aggregate initialization"). 

| (since C++20)  
  
#### Initialization failure

If initialization terminates by throwing an exception (e.g. from the constructor), the program looks up a matching deallocation function, then: 

  * If a suitable deallocation function can be found, the deallocation function is called to free the memory in which the object was being constructed. After that, the exception continues to propagate in the context of the new expression. 
  * If no unambiguous matching deallocation function can be found, propagating the exception does not cause the object’s memory to be freed. It is only appropriate if the called allocation function does not allocate memory, otherwise it is likely to result in a memory leak. 



The scope of the [lookup](lookup.html "cpp/language/lookup") of the matching deallocation function is determined as follows: 

  * If the new expression does not begin with `::`, and the allocated type is either a class type `T` or an array of class type `T`, a search is performed for the deallocation function’s name in the class scope of `T`. 
  * Otherwise, or if nothing is found in the `T`'s class scope, the deallocation function’s name is looked up by searching for it in the [global scope](scope.html "cpp/language/scope"). 



For a non-placement allocation function, the normal deallocation function lookup is used to find the matching deallocation function (see [delete-expression](delete.html "cpp/language/delete")). 

For a placement allocation function, the matching deallocation function must have the same number of parameter, and each parameter type except the first is identical to the corresponding parameter type of the allocation function (after [parameter transformations](function.html#Function_type "cpp/language/function")). 

  * If the lookup finds a single matching deallocation function, that function will be called; otherwise, no deallocation function will be called. 
  * If the lookup finds a non-placement deallocation function and that function, considered as a placement deallocation function, would have been selected as a match for the allocation function, the program is ill-formed. 



In any case, the matching deallocation function (if any) must be non-deleted and(since C++11) accessible from the point where the new expression appears. 
    
    
    struct S
    {
        // Placement allocation function:
        static void* [operator new](../memory/new/operator_new.html)([std::size_t](../types/size_t.html), [std::size_t](../types/size_t.html));
     
        // Non-placement deallocation function:
        static void [operator delete](../memory/new/operator_delete.html)(void*, [std::size_t](../types/size_t.html));
    };
     
    S* p = new (0) S; // error: non-placement deallocation function matches
                      //        placement allocation function

If a deallocation function is called in a new expression (due to initialization failure), the arguments passed to that function are determined as follows: 

  * The first argument is the value (of type void*) returned from the allocation function call. 
  * Other arguments (only for placement deallocation functions) are the placement-args passed to the placement allocation function. 



If the implementation is allowed to introduce a temporary object or make a copy of any argument as part of the call to the allocation function, it is unspecified whether the same object is used in the call to both the allocation and deallocation functions. 

### Memory leaks

The objects created by new expressions (objects with dynamic storage duration) persist until the pointer returned by the new expression is used in a matching [delete-expression](delete.html "cpp/language/delete"). If the original value of pointer is lost, the object becomes unreachable and cannot be deallocated: a _memory leak_ occurs. 

This may happen if the pointer is assigned to: 
    
    
    int* p = new int(7); // dynamically allocated int with value 7
    p = nullptr; // memory leak

or if the pointer goes out of scope: 
    
    
    void f()
    {
        int* p = new int(7);
    } // memory leak

or due to exception: 
    
    
    void f()
    {
        int* p = new int(7);
        g();      // may throw
        delete p; // okay if no exception
    } // memory leak if g() throws

To simplify management of dynamically-allocated objects, the result of a new expression is often stored in a [smart pointer](../memory.html#Smart_pointers "cpp/memory"): [std::auto_ptr](../memory/auto_ptr.html "cpp/memory/auto ptr") (until C++17)[std::unique_ptr](../memory/unique_ptr.html "cpp/memory/unique ptr"), or [std::shared_ptr](../memory/shared_ptr.html "cpp/memory/shared ptr")(since C++11). These pointers guarantee that the delete expression is executed in the situations shown above. 

### Notes

[Itanium C++ ABI](https://itanium-cxx-abi.github.io/cxx-abi/abi.html#array-cookies) requires that the array allocation overhead is zero if the element type of the created array is trivially destructible. So does MSVC. 

Some implementations (e.g. MSVC before VS 2019 v16.7) require non-zero array allocation overhead on non-allocating placement array new if the element type is not trivially destructible, which is no longer conforming since [CWG issue 2382](https://cplusplus.github.io/CWG/issues/2382.html). 

A non-allocating placement array new expression that creates an array of unsigned char, or [`std::byte`](../types/byte.html "cpp/types/byte")(since C++17) can be used to [implicitly create objects](lifetime.html "cpp/language/lifetime") on given region of storage: it ends lifetime of objects overlapping with the array, and then implicitly creates objects of implicit-lifetime types in the array. 

[std::vector](../container/vector.html "cpp/container/vector") offers similar functionality for one-dimensional dynamic arrays. 

### Keywords

[`new`](../keyword/new.html "cpp/keyword/new")

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[CWG 74](https://cplusplus.github.io/CWG/issues/74.html) | C++98  | value in the first dimension must have integral type  | enumeration types permitted   
[CWG 299](https://cplusplus.github.io/CWG/issues/299.html) | C++98  | value in the first dimension must  
have integral or enumeration type  | class types with a single  
conversion function to integral  
or enumeration type permitted   
[CWG 624](https://cplusplus.github.io/CWG/issues/624.html) | C++98  | the behavior was unspecified when the  
size of the allocated object would exceed  
the implementation-defined limit  | no storage is obtained and an  
exception is thrown in this case   
[CWG 1748](https://cplusplus.github.io/CWG/issues/1748.html) | C++98  | non-allocating placement new need  
to check if the argument is null  | undefined behavior for null argument   
[CWG 1992](https://cplusplus.github.io/CWG/issues/1992.html) | C++11  | new ([std::nothrow](../memory/new/nothrow.html)) int[N]  
could throw [std::bad_array_new_length](../memory/new/bad_array_new_length.html "cpp/memory/new/bad array new length") | changed to return a null pointer   
[CWG 2102](https://cplusplus.github.io/CWG/issues/2102.html) | C++98  | it was unclear whether default/value-initialization is  
required to be well-formed when initializing empty arrays  | required   
[CWG 2382](https://cplusplus.github.io/CWG/issues/2382.html) | C++98  | non-allocating placement array new  
could require allocation overhead  | such allocation overhead disallowed   
[CWG 2392](https://cplusplus.github.io/CWG/issues/2392.html) | C++11  | the program might be ill-formed even if the  
first dimension is not potentially-evaluated  | well-formed in this case   
[P1009R2](https://wg21.link/P1009R2) | C++11  | the array bound could not be  
deduced in a new expression  | deduction permitted   
  
### See also

  * [constructor](initializer_list.html "cpp/language/constructor")
  * [copy elision](copy_elision.html "cpp/language/copy elision")
  * [default constructor](default_constructor.html "cpp/language/default constructor")
  * [`delete`](delete.html "cpp/language/delete")
  * [destructor](destructor.html "cpp/language/destructor")
  * [initialization](initialization.html "cpp/language/initialization")
    * [aggregate initialization](aggregate_initialization.html "cpp/language/aggregate initialization")
    * [default initialization](default_initialization.html "cpp/language/default initialization")
    * [direct initialization](direct_initialization.html "cpp/language/direct initialization")
    * [list initialization](list_initialization.html "cpp/language/list initialization")
    * [value initialization](value_initialization.html "cpp/language/value initialization")


