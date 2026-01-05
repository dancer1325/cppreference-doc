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
  


"Pointer to implementation" or "pImpl" is a C++ [programming technique](pimpl.html#External_links) that removes implementation details of a class from its object representation by placing them in a separate class, accessed through an opaque pointer: 
    
    
    // --------------------
    // interface (widget.h)
    struct widget
    {
        // public members
    private:
        struct impl; // forward declaration of the implementation class
        // One implementation example: see below for other design options and trade-offs
        [std::experimental::propagate_const](../experimental/propagate_const.html)< // const-forwarding pointer wrapper
            [std::unique_ptr](../memory/unique_ptr.html)<                // unique-ownership opaque pointer
                impl>> pImpl;               // to the forward-declared implementation class
    };
     
    // ---------------------------
    // implementation (widget.cpp)
    struct widget::impl
    {
        // implementation details
    };

This technique is used to construct C++ library interfaces with stable ABI and to reduce compile-time dependencies. 

## Contents

  * [1 Explanation](pimpl.html#Explanation)
  * [2 Trade-offs](pimpl.html#Trade-offs)
    * [2.1 Compilation firewall](pimpl.html#Compilation_firewall)
    * [2.2 Runtime overhead](pimpl.html#Runtime_overhead)
    * [2.3 Maintenance overhead](pimpl.html#Maintenance_overhead)
  * [3 Implementation](pimpl.html#Implementation)
  * [4 Notes](pimpl.html#Notes)
  * [5 Example](pimpl.html#Example)
  * [6 External links](pimpl.html#External_links)

  
---  
  
### Explanation

Because private data members of a class participate in its object representation, affecting size and layout, and because private member functions of a class participate in [overload resolution](overload_resolution.html "cpp/language/overload resolution") (which takes place before member access checking), any change to those implementation details requires recompilation of all users of the class. 

pImpl removes this compilation dependency; changes to the implementation do not cause recompilation. Consequently, if a library uses pImpl in its ABI, newer versions of the library may change the implementation while remaining ABI-compatible with older versions. 

### Trade-offs

The alternatives to the pImpl idiom are 

  * inline implementation: private members and public members are members of the same class. 
  * pure abstract class (OOP factory): users obtain a unique pointer to a lightweight or abstract base class, the implementation details are in the derived class that overrides its virtual member functions. 



#### Compilation firewall

In simple cases, both pImpl and factory method remove compile-time dependency between the implementation and the users of the class interface. Factory method creates a hidden dependency on the vtable, and so reordering, adding, or removing virtual member functions breaks the ABI. The pImpl approach has no hidden dependencies, however if the implementation class is a class template specialization, the compilation firewall benefit is lost: the users of the interface must observe the entire template definition in order to instantiate the correct specialization. A common design approach in this case is to refactor the implementation in a way that avoids parametrization, this is another use case for the C++ Core Guidelines: 

  * [T.61 Do not over-parametrize members](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#Rt-scary) and 
  * [T.84 Use a non-template core implementation to provide an ABI-stable interface](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#t84-use-a-non-template-core-implementation-to-provide-an-abi-stable-interface). 



For example, the following class template does not use the type `T` in its private member or in the body of `push_back`: 
    
    
    template<class T>
    class ptr_vector
    {
        [std::vector](../container/vector.html)<void*> vp;
    public:
        void push_back(T* p)
        {
            vp.push_back(p);
        }
    };

Therefore, private members can be transferred to implementation as-is, and `push_back` can forward to an implementation that does not use `T` in the interface either: 

Run this code
    
    
    // ---------------------
    // header (ptr_vector.hpp)
    #include <memory>
     
    class ptr_vector_base
    {
        struct impl; // does not depend on T
        [std::unique_ptr](../memory/unique_ptr.html)<impl> pImpl;
    protected:
        void push_back_fwd(void*);
        void print() const;
        // ... see implementation section for special member functions
    public:
        ptr_vector_base();
        ~ptr_vector_base();
    };
     
    template<class T>
    class ptr_vector : private ptr_vector_base
    {
    public:
        void push_back(T* p) { push_back_fwd(p); }
        void print() const { ptr_vector_base::print(); }
    };
     
    // -----------------------
    // source (ptr_vector.cpp)
    // #include "ptr_vector.hpp"
    #include <iostream>
    #include <vector>
     
    struct ptr_vector_base::impl
    {
        [std::vector](../container/vector.html)<void*> vp;
     
        void push_back(void* p)
        {
            vp.push_back(p);
        }
     
        void print() const
        {
            for (void const * const p: vp) [std::cout](../io/cout.html) << p << '\n';
        }
    };
     
    void ptr_vector_base::push_back_fwd(void* p) { pImpl->push_back(p); }
    ptr_vector_base::ptr_vector_base() : pImpl{[std::make_unique](../memory/unique_ptr/make_unique.html)<impl>()} {}
    ptr_vector_base::~ptr_vector_base() {}
    void ptr_vector_base::print() const { pImpl->print(); }
     
    // ---------------
    // user (main.cpp)
    // #include "ptr_vector.hpp"
     
    int main()
    {
        int x{}, y{}, z{};
        ptr_vector<int> v;
        v.push_back(&x);
        v.push_back(&y);
        v.push_back(&z);
        v.print();
    }

Possible output: 
    
    
    0x7ffd6200a42c
    0x7ffd6200a430
    0x7ffd6200a434

#### Runtime overhead

  * Access overhead: In pImpl, each call to a private member function indirects through a pointer. Each access to a public member made by a private member indirects through another pointer. Both indirections cross translation unit boundaries and so can only be optimized out by link-time optimization. Note that OO factory requires indirection across translation units to access both public data and implementation detail, and offers even fewer opportunities for the link time optimizer due to virtual dispatch. 
  * Space overhead: pImpl adds one pointer to the public component and, if any private member needs access to a public member, another pointer is either added to the implementation component or passed as a parameter for each call to the private member that requires it. If stateful custom allocators are supported, the allocator instance also has to be stored. 
  * Lifetime management overhead: pImpl (as well as OO factory) place the implementation object on the heap, which imposes significant runtime overhead at construction and destruction. This may be partially offset by custom allocators, since allocation size for pImpl (but not OO factory) is known at compile time. 



On the other hand, pImpl classes are move-friendly; refactoring a large class as movable pImpl may improve performance of algorithms that manipulate containers holding such objects, although movable pImpl has an additional source of runtime overhead: any public member function that is permitted on a moved-from object and needs access to private implementation incurs a null pointer check. 

| This section is incomplete  
Reason: Microbenchmark?)   
---|---  
  
#### Maintenance overhead

Use of pImpl requires a dedicated translation unit (a header-only library cannot use pImpl), introduces an additional class, a set of forwarding functions, and, if allocators are used, exposes the implementation detail of allocator use in the public interface. 

Since virtual members are part of the interface component of pImpl, mocking a pImpl implies mocking the interface component alone. A testable pImpl is typically designed to allow full test coverage through the available interface. 

### Implementation

As the object of the interface type controls the lifetime of the object of the implementation type, the pointer to implementation is usually [std::unique_ptr](../memory/unique_ptr.html "cpp/memory/unique ptr"). 

Because [std::unique_ptr](../memory/unique_ptr.html "cpp/memory/unique ptr") requires that the pointed-to type is a complete type in any context where the deleter is instantiated, the special member functions must be user-declared and defined out-of-line, in the implementation file, where the implementation class is complete. 

Because when const member function calls a function through a non-const member pointer, the non-const overload of the implementation function is called, the pointer has to be wrapped in [std::experimental::propagate_const](../experimental/propagate_const.html "cpp/experimental/propagate const") or equivalent. 

All private data members and all private non-virtual member functions are placed in the implementation class. All public, protected, and virtual members remain in the interface class (see [GOTW #100](https://herbsutter.com/gotw/_100/) for the discussion of the alternatives). 

If any of the private members needs to access a public or protected member, a reference or pointer to the interface may be passed to the private function as a parameter. Alternatively, the back-reference may be maintained as part of the implementation class. 

If non-default allocators are intended to be supported for the allocation of the implementation object, any of the usual allocator awareness patterns may be utilized, including allocator template parameter defaulting to [std::allocator](../memory/allocator.html "cpp/memory/allocator") and constructor argument of type [`std::pmr::memory_resource*`](../memory/memory_resource.html "cpp/memory/memory resource"). 

### Notes

| This section is incomplete  
Reason: note connection to value-semantic polymorphism   
---|---  
  
### Example

Demonstrates a pImpl with const propagation, with back-reference passed as a parameter, without allocator awareness, and move-enabled without runtime checks:

Run this code
    
    
    // ----------------------
    // interface (widget.hpp)
    #include <experimental/propagate_const>
    #include <iostream>
    #include <memory>
     
    class widget
    {
        class impl;
        [std::experimental::propagate_const](../experimental/propagate_const.html)<[std::unique_ptr](../memory/unique_ptr.html)<impl>> pImpl;
    public:
        void draw() const; // public API that will be forwarded to the implementation
        void draw();
        bool shown() const { return true; } // public API that implementation has to call
     
        widget(); // even the default ctor needs to be defined in the implementation file
                  // Note: calling draw() on default constructed object is UB
        explicit widget(int);
        ~widget(); // defined in the implementation file, where impl is a complete type
        widget(widget&&); // defined in the implementation file
                          // Note: calling draw() on moved-from object is UB
        widget(const widget&) = delete;
        widget& operator=(widget&&); // defined in the implementation file
        widget& operator=(const widget&) = delete;
    };
     
    // ---------------------------
    // implementation (widget.cpp)
    // #include "widget.hpp"
     
    class widget::impl
    {
        int n; // private data
    public:
        void draw(const widget& w) const
        {
            if (w.shown()) // this call to public member function requires the back-reference 
                [std::cout](../io/cout.html) << "drawing a const widget " << n << '\n';
        }
     
        void draw(const widget& w)
        {
            if (w.shown())
                [std::cout](../io/cout.html) << "drawing a non-const widget " << n << '\n';
        }
     
        impl(int n) : n(n) {}
    };
     
    void widget::draw() const { pImpl->draw(*this); }
    void widget::draw() { pImpl->draw(*this); }
    widget::widget() = default;
    widget::widget(int n) : pImpl{[std::make_unique](../memory/unique_ptr/make_unique.html)<impl>(n)} {}
    widget::widget(widget&&) = default;
    widget::~widget() = default;
    widget& widget::operator=(widget&&) = default;
     
    // ---------------
    // user (main.cpp)
    // #include "widget.hpp"
     
    int main()
    {
        widget w(7);
        const widget w2(8);
        w.draw();
        w2.draw();
    }

Output: 
    
    
    drawing a non-const widget 7
    drawing a const widget 8

| This section is incomplete  
Reason: describe yet another alternative — "fast PImpl". The main difference is that the memory for the implementation is reserved in a data member that is an opaque C-array (inside the PImpl class definition), while in cpp file that memory is mapped (via `reinterpret_cast` or placement-`new`) to the implementation structure. This approach has it's own pros and cons, in particular, an obvious _pro_ is no extra allocation, on condition that enough memory was initially reserved at _design-time_ of the PImpl class. (Whereas among _cons_ is reduced move-friendliness.)   
---|---  
  
### External links

1\.  | [GotW #28](http://www.gotw.ca/gotw/028.htm) : The Fast Pimpl Idiom.   
---|---  
2\.  | [GotW #100](https://herbsutter.com/gotw/_100/): Compilation Firewalls.   
3\.  | [The Pimpl Pattern - what you should know.](https://www.cppstories.com/2018/01/pimpl/)
