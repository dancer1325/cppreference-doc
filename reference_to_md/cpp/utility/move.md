* defined | header [`<utility>`](../header/utility.md)   
  
`std::move` is used to _indicate_ that an object t may be "moved from", i.e. allowing the efficient transfer of resources from t to another object. 

In particular, `std::move` produces an [xvalue expression](../language/value_category.html "cpp/language/value category") that identifies its argument t. It is exactly equivalent to a `static_cast` to an rvalue reference type. 

## Contents

  * [1 Parameters](move.html#Parameters)
  * [2 Return value](move.html#Return_value)
  * [3 Notes](move.html#Notes)
  * [4 Example](move.html#Example)
  * [5 See also](move.html#See_also)

### Syntax

#### [C+11, C++14]
```c++
template< class T >  
typename [std::remove_reference](../types/remove_reference.html)<T>::type&& move( T&& t ) noexcept;
```
#### [C++14,]
```c++
template< class T >  
constexpr [std::remove_reference_t](../types/remove_reference.html)<T>&& move( T&& t ) noexcept;
```
  
### Parameters

t  |  \-  |  the object to be moved   
---|---|---  
  
### Return value

static_cast<typename [std::remove_reference](../types/remove_reference.html)<T>::type&&>(t)

### Notes

The functions that accept rvalue reference parameters (including [move constructors](../language/move_constructor.html "cpp/language/move constructor"), [move assignment operators](../language/move_operator.html "cpp/language/move operator"), and regular member functions such as [std::vector::push_back](../container/vector/push_back.html "cpp/container/vector/push back")) are selected, by [overload resolution](../language/overload_resolution.html "cpp/language/overload resolution"), when called with [rvalue](../language/value_category.html "cpp/language/value category") arguments (either [prvalues](../language/value_category.html "cpp/language/value category") such as a temporary object or [xvalues](../language/value_category.html "cpp/language/value category") such as the one produced by `std::move`). If the argument identifies a resource-owning object, these overloads have the option, but aren't required, to _move_ any resources held by the argument. For example, a move constructor of a linked list might copy the pointer to the head of the list and store nullptr in the argument instead of allocating and copying individual nodes. 

Names of [rvalue reference](../language/reference.html "cpp/language/reference") variables are [lvalues](../language/value_category.html "cpp/language/value category") and have to be converted to [xvalues](../language/value_category.html "cpp/language/value category") to be bound to the function overloads that accept rvalue reference parameters, which is why [move constructors](../language/move_constructor.html "cpp/language/move constructor") and [move assignment operators](../language/move_operator.html "cpp/language/move operator") typically use `std::move`: 
    
    
    // Simple move constructor
    A(A&& arg) : member(std::move(arg.member)) // the expression "arg.member" is lvalue
    {}
     
    // Simple move assignment operator
    A& operator=(A&& other)
    {
        member = std::move(other.member);
        return *this;
    }

One exception is when the type of the function parameter is a [forwarding reference](../language/reference.html#Forwarding_references "cpp/language/reference") (which looks like an rvalue reference to type template parameter), in which case [std::forward](forward.html "cpp/utility/forward") is used instead. 

Unless otherwise specified, all standard library objects that have been moved from are placed in a "valid but unspecified state", meaning the object's class invariants hold (so functions without preconditions, such as the assignment operator, can be safely used on the object after it was moved from): 
    
    
    [std::vector](../container/vector.html)<[std::string](../string/basic_string.html)> v;
    [std::string](../string/basic_string.html) str = "example";
    v.push_back(std::move(str)); // str is now valid but unspecified
    str.back(); // undefined behavior if size() == 0: back() has a precondition !empty()
    if (!str.empty())
        str.back(); // OK, empty() has no precondition and back() precondition is met
     
    str.clear(); // OK, clear() has no preconditions

Also, the standard library functions called with xvalue arguments may assume the argument is the only reference to the object; if it was constructed from an lvalue with `std::move`, no aliasing checks are made. However, self-move-assignment of standard library types is guaranteed to place the object in a valid (but usually unspecified) state: 
    
    
    [std::vector](../container/vector.html)<int> v = {2, 3, 3};
    v = std::move(v); // the value of v is unspecified

### Example

Run this code
    
    
    #include <iomanip>
    #include <iostream>
    #include <string>
    #include <utility>
    #include <vector>
     
    int main()
    {
        [std::string](../string/basic_string.html) str = "Salut";
        [std::vector](../container/vector.html)<[std::string](../string/basic_string.html)> v;
     
        // uses the push_back(const T&) overload, which means
        // we'll incur the cost of copying str
        v.push_back(str);
        [std::cout](../io/cout.html) << "After copy, str is " << [std::quoted](../io/manip/quoted.html)(str) << '\n';
     
        // uses the rvalue reference push_back(T&&) overload,
        // which means no strings will be copied; instead, the contents
        // of str will be moved into the vector. This is less
        // expensive, but also means str might now be empty.
        v.push_back(std::move(str));
        [std::cout](../io/cout.html) << "After move, str is " << [std::quoted](../io/manip/quoted.html)(str) << '\n';
     
        [std::cout](../io/cout.html) << "The contents of the vector are {" << [std::quoted](../io/manip/quoted.html)(v[0])
                  << ", " << [std::quoted](../io/manip/quoted.html)(v[1]) << "}\n";
    }

Possible output: 
    
    
    After copy, str is "Salut"
    After move, str is ""
    The contents of the vector are {"Salut", "Salut"}

### See also

[ forward](forward.html "cpp/utility/forward")(C++11) |  forwards a function argument and use the type template argument to preserve its value category   
(function template)   
---|---  
[ move_if_noexcept](move_if_noexcept.html "cpp/utility/move if noexcept")(C++11) |  converts the argument to an xvalue if the move constructor does not throw   
(function template)   
[ move](../algorithm/move.html "cpp/algorithm/move")(C++11) |  moves a range of elements to a new location   
(function template) 
