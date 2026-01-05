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
**Object lifetime**  
[Storage duration and linkage](storage_duration.html "cpp/language/storage duration")  
[Definitions and ODR](definition.html "cpp/language/definition")  
[Name lookup](lookup.html "cpp/language/lookup")  
[ Qualified name lookup](qualified_lookup.html "cpp/language/qualified lookup")  
[ Unqualified name lookup](unqualified_lookup.html "cpp/language/unqualified lookup")  
[The as-if rule](as_if.html "cpp/language/as if")  
[Undefined behavior](ub.html "cpp/language/ub")  
[Memory model](memory_model.html "cpp/language/memory model")  
[Multi-threaded executions and data races](multithread.html "cpp/language/multithread") (C++11)  
[Character sets and encodings](charset.html "cpp/language/charset")  
[Phases of translation](translation_phases.html "cpp/language/translation phases")  
[The `main` function](main_function.html "cpp/language/main function")  
[Modules](modules.html "cpp/language/modules") (C++20)  
[Contracts](contracts.html "cpp/language/contracts") (C++26)  
  


Every [object](objects.html "cpp/language/object") and [reference](reference.html "cpp/language/reference") has a _lifetime_ , which is a runtime property: for any object or reference, there is a point of execution of a program when its lifetime begins, and there is a moment when it ends. 

The lifetime of an object begins when: 

  * storage with the proper alignment and size for its type is obtained, and 
  * its initialization (if any) is complete (including [default initialization](default_initialization.html "cpp/language/default initialization") via no constructor or [trivial default constructor](default_constructor.html#Trivial_default_constructor "cpp/language/default constructor")), except that 



    

  * if the object is a [union member](union.html#Member_lifetime "cpp/language/union") or subobject thereof, its lifetime only begins if that union member is the initialized member in the union, or it is made active, 
  * if the object is nested in a union object, its lifetime may begin if the containing union object is assigned or constructed by a trivial special member function, 
  * an array object's lifetime may also begin if it is allocated by [std::allocator::allocate](../memory/allocator/allocate.html "cpp/memory/allocator/allocate"). 



Some operations [implicitly create objects](objects.html#Object_creation "cpp/language/object") of [implicit-lifetime types](type-id.html#Implicit-lifetime_type "cpp/language/type") in given region of storage and start their lifetime. If a subobject of an implicitly created object is not of an implicit-lifetime type, its lifetime does not begin implicitly. 

The lifetime of an object ends when: 

  * if it is of a non-class type, the object is destroyed (maybe via a pseudo-destructor call), or 
  * if it is of a class type, the [destructor](destructor.html "cpp/language/destructor") call starts, or 
  * the storage which the object occupies is released, or is [reused](lifetime.html#Storage_reuse) by an object that is not nested within it. 



Lifetime of an object is equal to or is nested within the lifetime of its storage, see [storage duration](storage_duration.html "cpp/language/storage duration"). 

The lifetime of a [reference](reference.html "cpp/language/reference") begins when its initialization is complete and ends as if it were a scalar object. 

Note: the lifetime of the referred object may end before the end of the lifetime of the reference, which makes [dangling references](reference.html#Dangling_references "cpp/language/reference") possible. 

Lifetimes of non-static data members and base subobjects begin and end following [class initialization order](initializer_list.html#Initialization_order "cpp/language/initializer list"). 

## Contents

  * [1 Temporary object lifetime](lifetime.html#Temporary_object_lifetime)
  * [2 Storage reuse](lifetime.html#Storage_reuse)
    * [2.1 Providing storage](lifetime.html#Providing_storage)
  * [3 Access outside of lifetime](lifetime.html#Access_outside_of_lifetime)
  * [4 Notes](lifetime.html#Notes)
  * [5 Defect reports](lifetime.html#Defect_reports)
  * [6 References](lifetime.html#References)
  * [7 See also](lifetime.html#See_also)

  
---  
  
### Temporary object lifetime

Temporary objects are created when a prvalue is [materialized](implicit_cast.html#Temporary_materialization "cpp/language/implicit conversion") so that it can be used as a glvalue, which occurs(since C++17) in the following situations: 

  * [binding a reference to a prvalue](reference_initialization.html "cpp/language/reference initialization")



  * [initializing](list_initialization.html "cpp/language/list initialization") an object of type [std::initializer_list](../utility/initializer_list.html)<T> from a [brace-enclosed initializer list](initialization.html "cpp/language/initialization")

| (since C++11)  
---|---  
  
  * returning a prvalue from a function 
  * [conversion](expressions.html#Conversions "cpp/language/expressions") that creates a prvalue ([including](explicit_cast.html "cpp/language/explicit cast") T(a, b, c) and T{}) 

| 

  * [lambda expression](lambda.html "cpp/language/lambda")

| (since C++11)  
---|---  
  
  * [copy-initialization](copy_initialization.html "cpp/language/copy initialization") that requires conversion of the initializer, 
  * [reference-initialization](reference_initialization.html "cpp/language/reference initialization") to a different but convertible type or to a bitfield. 

(until C++17)  
  
  * when performing [member access](operator_member_access.html#Built-in_member_access_operators "cpp/language/operator member access") on a class prvalue 
  * when performing an [array-to-pointer](array.html#Array-to-pointer_decay "cpp/language/array") conversion or [subscripting](operator_member_access.html#Built-in_subscript_operator "cpp/language/operator member access") on an array prvalue 
  * for unevaluated operands in [`sizeof`](sizeof.html "cpp/language/sizeof") and [`typeid`](typeid.html "cpp/language/typeid")
  * when a prvalue appears as a [discarded-value expression](expressions.html#Discarded-value_expressions "cpp/language/expressions")

The materialization of a temporary object is generally delayed as long as possible in order to avoid creating unnecessary temporary object: see [copy elision](copy_elision.html "cpp/language/copy elision").  | (since C++17)  
  
  


When an object of type `T` is passed to or returned from a [potentially-evaluated](expressions.html#Potentially-evaluated_expressions "cpp/language/expressions") function call, if `T` is one of the following types, implementations are permitted to create temporary objects to hold the function parameter or result object:  | 

  * a [scalar type](type-id.html#Scalar_type "cpp/language/type")

| (since C++26)  
---|---  
  
  * a class type satisfying all following conditions: 
    * `T` has at least one eligible [copy](copy_constructor.html#Eligible_copy_constructor "cpp/language/copy constructor") or [move](move_constructor.html#Eligible_move_constructor "cpp/language/move constructor") constructor. 
    * Each eligible copy/move constructor of `T` is trivial. 
    * The [destructor](destructor.html "cpp/language/destructor") of `T` is either trivial or deleted. 

The temporary object is constructed from the function argument or return value, respectively, and the function’s parameter or return object is initialized as if by using the eligible trivial constructor to copy the temporary (even if that constructor is inaccessible or would not be selected by overload resolution to perform a copy or move of the object).  | (until C++26)  
---|---  
The temporary objects are created as follows: 

  * The first such temporary object is constructed from the function argument or return value, respectively. 
  * Each successive temporary object is initialized from the previous one as if by [direct-initialization](direct_initialization.html "cpp/language/direct initialization") if `T` is a scalar type, otherwise by using an eligible trivial constructor. 
  * The function parameter or return object is initialized from the final temporary as if by direct initialization if `T` is a scalar type, otherwise by using an eligible trivial constructor. 

In all cases, the eligible constructor is used even if that constructor is inaccessible or would not be selected by overload resolution to perform a copy or move of the object.  | (since C++26)  
  
This latitude is granted to allow objects to be passed to or returned from functions in registers. 

(since C++17)  
  
All temporary objects are destroyed as the last step in evaluating the [full-expression](expressions.html#Full-expressions "cpp/language/expressions") that (lexically) contains the point where they were created, and if multiple temporary objects were created, they are destroyed in the order opposite to the order of creation. This is true even if that evaluation ends in throwing an exception. 

There are the following exceptions from that: 

  * The lifetime of a temporary object may be extended by binding to a reference, see [reference initialization](reference_initialization.html#Lifetime_of_a_temporary "cpp/language/reference initialization") for details. 
  * The lifetime of a temporary object created when evaluating the default arguments of a default or copy constructor used to initialize or copy an element of an array ends before the next element of the array begins initialization. 



  * The lifetime of a temporary object created in a [structured binding](structured_binding.html "cpp/language/structured binding") declaration (introduced by the initializer for a variable with unique name) is extended to the end of the structured binding declaration. 

| (since C++17)  
---|---  
  
  * The lifetime of a temporary object created in the range-initializer of a [range-for](range-for.html "cpp/language/range-for") statement that would otherwise be destroyed at the end of the range-initializer is extended to the end of the loop body. 

| (since C++23)  
  
### Storage reuse

A program is not required to call the destructor of an object to end its lifetime if the object is [trivially-destructible](destructor.html#Trivial_destructor "cpp/language/destructor") (be careful that the correct behavior of the program may depend on the destructor). However, if a program ends the lifetime of a non-trivially destructible object that is a variable explicitly, it must ensure that a new object of the same type is constructed in-place (e.g. via placement new) before the destructor may be called implicitly, i.e. due to scope exit or exception for automatic objects, due to thread exit for thread-local objects,(since C++11) or due to program exit for static objects; otherwise the behavior is undefined. 
    
    
    class T {}; // trivial
     
    struct B
    {
        ~B() {} // non-trivial
    };
     
    void x()
    {
        long long n; // automatic, trivial
        new (&n) double(3.14); // reuse with a different type okay
    } // okay
     
    void h()
    {
        B b; // automatic non-trivially destructible
        b.~B(); // end lifetime (not required, since no side-effects)
        new (&b) T; // wrong type: okay until the destructor is called
    } // destructor is called: undefined behavior

It is undefined behavior to reuse storage that is or was occupied by a const complete object of static, thread-local,(since C++11) or automatic storage duration because such objects may be stored in read-only memory: 
    
    
    struct B
    {
        B(); // non-trivial
        ~B(); // non-trivial
    };
    const B b; // const static
     
    void h()
    {
        b.~B(); // end the lifetime of b
        new (const_cast<B*>(&b)) const B; // undefined behavior: attempted reuse of a const
    }

When evaluating a [new expression](new.html "cpp/language/new"), storage is considered reused after it is returned from the [allocation function](../memory/new/operator_new.html "cpp/memory/new/operator new"), but before the evaluation of the initializer of the new expression: 
    
    
    struct S
    {
        int m;
    };
     
    void f()
    {
        S x{1};
        new(&x) S(x.m); // undefined behavior: the storage is reused
    }

If a new object is created at the address that was occupied by another object, then all pointers, references, and the name of the original object will automatically refer to the new object and, once the lifetime of the new object begins, can be used to manipulate the new object, but only if the original object is transparently replaceable by the new object. 

If all following conditions are satisfied, object x is _transparently replaceable_ by object y: 

  * The storage for y exactly overlays the storage location which x occupied. 
  * y is of the same type as x (ignoring the top-level cv-qualifiers). 
  * x is not a complete const object. 
  * Neither x nor y is a base class subobject, or a member subobject declared with `[[[no_unique_address](attributes/no_unique_address.html "cpp/language/attributes/no unique address")]]`(since C++20). 
  * One of the following conditions is satisfied: 



    

  * x and y are both complete objects. 
  * x and y are direct subobjects of objects ox and oy respectively, and ox is transparently replaceable by oy. 


    
    
    struct C
    {
        int i;
        void f();
        const C& operator=(const C&);
    };
     
    const C& C::operator=(const C& other)
    {
        if (this != &other)
        {
            this->~C();          // lifetime of *this ends
            new (this) C(other); // new object of type C created
            f();                 // well-defined
        }
        return *this;
    }
     
    C c1;
    C c2;
    c1 = c2; // well-defined
    c1.f();  // well-defined; c1 refers to a new object of type C

If the conditions listed above are not met, a valid pointer to the new object may still be obtained by applying the pointer optimization barrier [std::launder](../utility/launder.html "cpp/utility/launder"): 
    
    
    struct A
    { 
        virtual int transmogrify();
    };
     
    struct B : A
    {
        int transmogrify() override { ::new(this) A; return 2; }
    };
     
    inline int A::transmogrify() { ::new(this) B; return 1; }
     
    void test()
    {
        A i;
        int n = i.transmogrify();
        // int m = i.transmogrify(); // undefined behavior:
        // the new A object is a base subobject, while the old one is a complete object
        int m = [std::launder](../utility/launder.html)(&i)->transmogrify(); // OK
        [assert](../error/assert.html)(m + n == 3);
    }

| (since C++17)  
---|---  
  
Similarly, if an object is created in the storage of a class member or array element, the created object is only a subobject (member or element) of the original object's containing object if: 

  * the lifetime of the containing object has begun and not ended 
  * the storage for the new object exactly overlays the storage of the original object 
  * the new object is of the same type as the original object (ignoring cv-qualification). 

Otherwise, the name of the original subobject cannot be used to access the new object without [std::launder](../utility/launder.html "cpp/utility/launder"):  | | This section is incomplete  
Reason: an appropriate example   
---|---  
(since C++17)  
  
#### Providing storage

As a special case, objects can be created in arrays of unsigned char or [`std::byte`](../types/byte.html "cpp/types/byte")(since C++17) (in which case it is said that the array _provides storage_ for the object) if 

  * the lifetime of the array has begun and not ended 
  * the storage for the new object fits entirely within the array 
  * there is no array object that satisfies these constraints nested within the array. 



If that portion of the array previously provided storage for another object, the lifetime of that object ends because its storage was reused, however the lifetime of the array itself does not end (its storage is not considered to have been reused). 
    
    
    template<typename... T>
    struct AlignedUnion
    {
        alignas(T...) unsigned char data[max(sizeof(T)...)];
    };
     
    int f()
    {
        AlignedUnion<int, char> au;
        int *p = new (au.data) int;     // OK, au.data provides storage
        char *c = new (au.data) char(); // OK, ends lifetime of *p
        char *d = new (au.data + 1) char();
        return *c + *d; // OK
    }

### Access outside of lifetime

Before the lifetime of an object has started but after the storage which the object will occupy has been allocated or, after the lifetime of an object has ended and before the storage which the object occupied is reused or released, the behaviors of the following uses of the glvalue expression that identifies that object are undefined, unless the object is being constructed or destructed (separate set of rules applies): 

  1. Access the object. 
  2. Access to a non-static data member or a call to a non-static member function. 
  3. Binding a reference to a virtual base class subobject. 
  4. [`dynamic_cast`](dynamic_cast.html "cpp/language/dynamic cast") or [`typeid`](typeid.html "cpp/language/typeid") expressions. 



The above rules apply to pointers as well (binding a reference to virtual base is replaced by implicit conversion to a pointer to virtual base), with two additional rules: 

  1. [`static_cast`](static_cast.html "cpp/language/static cast") of a pointer to storage without an object is only allowed when casting to (possibly cv-qualified) void*. 
  2. Pointers to storage without an object that were cast to possibly cv-qualified void* can only be [`static_cast`](static_cast.html "cpp/language/static cast") to pointers to possibly cv-qualified char, or possibly cv-qualified unsigned char, or possibly cv-qualified [`std::byte`](../types/byte.html "cpp/types/byte")(since C++17). 



During construction and destruction it is generally allowed to call non-static member functions, access non-static data members, and use [`typeid`](typeid.html "cpp/language/typeid") and [`dynamic_cast`](dynamic_cast.html "cpp/language/dynamic cast"). However, because the lifetime either has not begun yet (during construction) or has already ended (during destruction), only specific operations are allowed. For one restriction, see [virtual function calls during construction and destruction](virtual.html#During_construction_and_destruction "cpp/language/virtual"). 

### Notes

Until the resolution of [CWG issue 2256](https://cplusplus.github.io/CWG/issues/2256.html), the end of lifetime rules are different between non-class objects (end of storage duration) and class objects (reverse order of construction): 
    
    
    struct A
    {
        int* p;
        ~A() { [std::cout](../io/cout.html) << *p; } // undefined behavior since CWG2256: n does not outlive a
                                  // well-defined until CWG2256: prints 123
    };
     
    void f()
    {
        A a;
        int n = 123; // if n did not outlive a, this could have been optimized out (dead store)
        a.p = &n;
    }

Until the resolution of [RU007](https://wg21.link/p1971r0#RU007), a non-static member of a const-qualified type or a reference type prevents its containing object from being transparently replaceable, which makes [std::vector](../container/vector.html "cpp/container/vector") and [std::deque](../container/deque.html "cpp/container/deque") hard to implement: 
    
    
    struct X { const int n; };
    union U { X x; float f; };
     
    void tong()
    {
        U u = { {1} };
        u.f = 5.f;                          // OK: creates new subobject of 'u'
        X *p = new (&u.x) X {2};            // OK: creates new subobject of 'u'
        [assert](../error/assert.html)(p->n == 2);                  // OK
        [assert](../error/assert.html)(u.x.n == 2);                 // undefined until RU007:
                                            // 'u.x' does not name the new subobject
        [assert](../error/assert.html)(*[std::launder](../utility/launder.html)(&u.x.n) == 2); // OK even until RU007
    }

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[CWG 119](https://cplusplus.github.io/CWG/issues/119.html) | C++98  | an object of a class type with a non-trivial constructor can  
only start its lifetime when the constructor call has completed  | lifetime also started  
for other initializations   
[CWG 201](https://cplusplus.github.io/CWG/issues/201.html) | C++98  | lifetime of a temporary object in a default argument  
of a default constructor was required to end  
when the initialization of the array completes  | lifetime ends before  
initializing the next  
element (also resolves  
[CWG issue 124](https://cplusplus.github.io/CWG/issues/124.html))   
[CWG 274](https://cplusplus.github.io/CWG/issues/274.html) | C++98  | an lvalue designating an out-of-lifetime object could be  
used as the operand of static_cast only if the conversion  
was ultimately to cv-unqualified char& or unsigned char& | cv-qualified char&  
and unsigned char&  
also allowed   
[CWG 597](https://cplusplus.github.io/CWG/issues/597.html) | C++98  | the following behaviors were undefined:  
1\. a pointer to an out-of-lifetime object is implicitly  
converted to a pointer to a non-virtual base class  
2\. an lvalue referring to an out-of-lifetime object  
is bound to a reference to a non-virtual base class  
3\. an lvalue referring to an out-of-lifetime object is used  
as the operand of a static_cast (with a few exceptions)  | made well-defined   
[CWG 2012](https://cplusplus.github.io/CWG/issues/2012.html) | C++98  | lifetime of references was specified to match storage duration,  
requiring that extern references are alive before their initializers run  | lifetime begins  
at initialization   
[CWG 2107](https://cplusplus.github.io/CWG/issues/2107.html) | C++98  | the resolution of [CWG issue 124](https://cplusplus.github.io/CWG/issues/124.html) was not applied to copy constructors  | applied   
[CWG 2256](https://cplusplus.github.io/CWG/issues/2256.html) | C++98  | lifetime of trivially destructible objects were inconsistent with other objects  | made consistent   
[CWG 2470](https://cplusplus.github.io/CWG/issues/2470.html) | C++98  | more than one arrays could provide storage for the same object  | only one provides   
[CWG 2489](https://cplusplus.github.io/CWG/issues/2489.html) | C++98  | char[] cannot provide storage, but objects  
could be implicitly created within its storage  | objects cannot be  
implicitly created within  
the storage of char[]  
[CWG 2527](https://cplusplus.github.io/CWG/issues/2527.html) | C++98  | if a destructor is not invoked because of reusing storage and the  
program depends on its side effects, the behavior was undefined  | the behavior is well-  
defined in this case   
[CWG 2721](https://cplusplus.github.io/CWG/issues/2721.html) | C++98  | the exact time point of storage reuse was unclear for placement new | made clear   
[CWG 2849](https://cplusplus.github.io/CWG/issues/2849.html) | C++23  | function parameter objects were considered as temporary  
objects for range-for loop temporary object lifetime extension  | not considered as  
temporary objects   
[CWG 2854](https://cplusplus.github.io/CWG/issues/2854.html) | C++98  | exception objects were temporary objects  | they are not  
temporary objects   
[CWG 2867](https://cplusplus.github.io/CWG/issues/2867.html) | C++17  | the lifetime of temporary objects created in  
structured binding declarations were not extended  | extended to the end  
of the declaration   
[P0137R1](https://wg21.link/P0137R1) | C++98  | creating an object in an array of unsigned char reused its storage  | its storage is not reused   
[P0593R6](https://wg21.link/P0593R6) | C++98  | a pseudo-destructor call had no effects  | it destroys the object   
[P1971R0](https://wg21.link/P1971R0) | C++98  | a non-static data member of a const-qualified type or a reference type  
prevented its containing object from being transparently replaceable  | restriction removed   
[P2103R0](https://wg21.link/P2103R0) | C++98  | transparently replaceability did not require keeping the original structure  | requires   
  
### References

  * C++23 standard (ISO/IEC 14882:2024): 



    

  * 6.7.3 Object lifetime [basic.life] 



    

  * 11.9.5 Construction and destruction [class.cdtor] 



  * C++20 standard (ISO/IEC 14882:2020): 



    

  * 6.7.3 Object lifetime [basic.life] 



    

  * 11.10.4 Construction and destruction [class.cdtor] 



  * C++17 standard (ISO/IEC 14882:2017): 



    

  * 6.8 Object lifetime [basic.life] 



    

  * 15.7 Construction and destruction [class.cdtor] 



  * C++14 standard (ISO/IEC 14882:2014): 



    

  * 3 Object lifetime [basic.life] 



    

  * 12.7 Construction and destruction [class.cdtor] 



  * C++11 standard (ISO/IEC 14882:2011): 



    

  * 3.8 Object lifetime [basic.life] 



    

  * 12.7 Construction and destruction [class.cdtor] 



  * C++03 standard (ISO/IEC 14882:2003): 



    

  * 3.8 Object lifetime [basic.life] 



    

  * 12.7 Construction and destruction [class.cdtor] 



  * C++98 standard (ISO/IEC 14882:1998): 



    

  * 3.8 Object lifetime [basic.life] 



    

  * 12.7 Construction and destruction [class.cdtor] 



### See also

[C documentation](../../c/language/lifetime.html "c/language/lifetime") for Lifetime  
---
