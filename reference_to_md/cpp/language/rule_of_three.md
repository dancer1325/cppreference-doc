

  
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
  


## Contents

  * [1 Rule of three](rule_of_three.html#Rule_of_three)
  * [2 Rule of five](rule_of_three.html#Rule_of_five)
  * [3 Rule of zero](rule_of_three.html#Rule_of_zero)
  * [4 External links](rule_of_three.html#External_links)

  
---  
  
### Rule of three

If a class requires a user-defined [destructor](destructor.html "cpp/language/destructor"), a user-defined [copy constructor](copy_constructor.html "cpp/language/copy constructor"), or a user-defined [copy assignment operator](as_operator.html "cpp/language/as operator"), it almost certainly requires all three. 

Because C++ copies and copy-assigns objects of user-defined types in various situations (passing/returning by value, manipulating a container, etc), these special member functions will be called, if accessible, and if they are not user-defined, they are implicitly-defined by the compiler. 

The implicitly-defined special member functions should not be used if the class [manages a resource](raii.html "cpp/language/raii") whose handle is an object of non-class type (raw pointer, POSIX file descriptor, etc), whose destructor does nothing and copy constructor/assignment operator performs a "shallow copy" (copies the value of the handle, without duplicating the underlying resource). 

Run this code
    
    
    #include <cstddef>
    #include <cstring>
    #include <iostream>
    #include <utility>
     
    class rule_of_three
    {
        char* cstring; // raw pointer used as a handle to a
                       // dynamically-allocated memory block
     
    public:
        explicit rule_of_three(const char* s = "") : cstring(nullptr)
        {   
            if (s)
            {   
                cstring = new char[[std::strlen](../string/byte/strlen.html)(s) + 1]; // allocate
                [std::strcpy](../string/byte/strcpy.html)(cstring, s); // populate
            }
        }
     
        ~rule_of_three() // I. destructor
        {
            delete[] cstring; // deallocate
        }
     
        rule_of_three(const rule_of_three& other) // II. copy constructor
            : rule_of_three(other.cstring) {}
     
        rule_of_three& operator=(const rule_of_three& other) // III. copy assignment
        {
            // implemented through copy-and-swap for brevity
            // note that this prevents potential storage reuse
            rule_of_three temp(other);
            [std::swap](../algorithm/swap.html)(cstring, temp.cstring);
            return *this;
        }
     
        const char* c_str() const // accessor
        {
            return cstring;
        }
    };
     
    int main()
    {
        rule_of_three o1{"abc"};
        [std::cout](../io/cout.html) << o1.c_str() << ' ';
        auto o2{o1}; // II. uses copy constructor
        [std::cout](../io/cout.html) << o2.c_str() << ' ';
        rule_of_three o3("def");
        [std::cout](../io/cout.html) << o3.c_str() << ' ';
        o3 = o2; // III. uses copy assignment
        [std::cout](../io/cout.html) << o3.c_str() << '\n';
    }   // I. all destructors are called here

Output: 
    
    
    abc abc def abc

Classes that manage non-copyable resources through copyable handles may have to declare copy assignment and copy constructor private and not provide their definitions(until C++11)define copy assignment and copy constructor as = delete(since C++11). This is another application of the rule of three: deleting one and leaving the other to be implicitly-defined typically incorrect. 

### Rule of five

Because the presence of a user-defined (include = default or = delete declared) destructor, copy-constructor, or copy-assignment operator prevents implicit definition of the [move constructor](move_constructor.html "cpp/language/move constructor") and the [move assignment operator](move_operator.html "cpp/language/move operator"), any class for which move semantics are desirable, has to declare all five special member functions: 
    
    
    class rule_of_five
    {
        char* cstring; // raw pointer used as a handle to a
                       // dynamically-allocated memory block
    public:
        explicit rule_of_five(const char* s = "") : cstring(nullptr)
        { 
            if (s)
            {
                cstring = new char[[std::strlen](../string/byte/strlen.html)(s) + 1]; // allocate
                [std::strcpy](../string/byte/strcpy.html)(cstring, s); // populate 
            } 
        }
     
        ~rule_of_five()
        {
            delete[] cstring; // deallocate
        }
     
        rule_of_five(const rule_of_five& other) // copy constructor
            : rule_of_five(other.cstring) {}
     
        rule_of_five(rule_of_five&& other) noexcept // move constructor
            : cstring([std::exchange](../utility/exchange.html)(other.cstring, nullptr)) {}
     
        rule_of_five& operator=(const rule_of_five& other) // copy assignment
        {
            // implemented as move-assignment from a temporary copy for brevity
            // note that this prevents potential storage reuse
            return *this = rule_of_five(other);
        }
     
        rule_of_five& operator=(rule_of_five&& other) noexcept // move assignment
        {
            [std::swap](../algorithm/swap.html)(cstring, other.cstring);
            return *this;
        }
     
    // alternatively, replace both assignment operators with copy-and-swap
    // implementation, which also fails to reuse storage in copy-assignment.
    //  rule_of_five& operator=(rule_of_five other) noexcept
    //  {
    //      std::swap(cstring, other.cstring);
    //      return *this;
    //  }
    };

Unlike Rule of Three, failing to provide move constructor and move assignment is usually not an error, but a missed optimization opportunity. 

### Rule of zero

Classes that have custom destructors, copy/move constructors or copy/move assignment operators should deal exclusively with ownership (which follows from the [Single Responsibility Principle](https://en.wikipedia.org/wiki/Single_responsibility_principle "enwiki:Single responsibility principle")). Other classes should not have custom destructors, copy/move constructors or copy/move assignment operators[[1]](rule_of_three.html#cite_note-1). 

This rule also appears in the C++ Core Guidelines as [C.20: If you can avoid defining default operations, do](https://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines#Rc-zero). 
    
    
    class rule_of_zero
    {
        [std::string](../string/basic_string.html) cppstring;
    public:
        rule_of_zero(const [std::string](../string/basic_string.html)& arg) : cppstring(arg) {}
    };

When a base class is intended for polymorphic use, its destructor may have to be declared public and virtual. This blocks implicit moves (and deprecates implicit copies), and so the special member functions have to be defined as = default[[2]](rule_of_three.html#cite_note-2). 
    
    
    class base_of_five_defaults
    {
    public:
        base_of_five_defaults(const base_of_five_defaults&) = default;
        base_of_five_defaults(base_of_five_defaults&&) = default;
        base_of_five_defaults& operator=(const base_of_five_defaults&) = default;
        base_of_five_defaults& operator=(base_of_five_defaults&&) = default;
        virtual ~base_of_five_defaults() = default;
    };

However, this makes the class prone to slicing, which is why polymorphic classes often define copy as = delete (see [C.67: A polymorphic class should suppress public copy/move](https://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines#c67-a-polymorphic-class-should-suppress-public-copymove) in C++ Core Guidelines), which leads to the following generic wording for the Rule of Five: 

    [C.21: If you define or =delete any copy, move, or destructor function, define or =delete them all.](https://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines#c21-if-you-define-or-delete-any-copy-move-or-destructor-function-define-or-delete-them-all)

### External links

  1. [↑](rule_of_three.html#cite_ref-1) ["Rule of Zero", R. Martinho Fernandes 08/15/2012](https://web.archive.org/web/20130211035910/http://flamingdangerzone.com/cxx11/2012/08/15/rule-of-zero.html)
  2. [↑](rule_of_three.html#cite_ref-2) ["A Concern about the Rule of Zero", Scott Meyers, 3/13/2014](https://scottmeyers.blogspot.fr/2014/03/a-concern-about-rule-of-zero.html).

  
---
