[[edit template]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/scope_guard&action=edit)

[C++](../../cpp.html "cpp")

[Compiler support](../compiler_support.html "cpp/compiler support")  
---  
[Freestanding and hosted](../freestanding.html "cpp/freestanding")  
[Language](../language.html "cpp/language")  
[Standard library](../standard_library.html "cpp/standard library")  
[Standard library headers](../headers.html "cpp/header")  
[Named requirements](../iterator/concepts.html "cpp/named req")  
[Feature test macros](feature_test.html "cpp/feature test") (C++20)  
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
[Execution control library](execution.html "cpp/execution") (C++26)  
[Technical specifications](../experimental.html "cpp/experimental")  
[Symbols index](../symbol_index.html "cpp/symbol index")  
[External libraries](../links/libs.html "cpp/links/libs")  
  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/navbar_content&action=edit)

[Experimental](../experimental.html "cpp/experimental")

[Technical Specification](../experimental.html#Technical_Specification "cpp/experimental")  
---  
[Filesystem library](fs.html "cpp/experimental/fs") (filesystem TS)  
[Library fundamentals](memory.html "cpp/experimental/lib extensions") (library fundamentals TS)  
[Library fundamentals 2](lib_extensions_2.html "cpp/experimental/lib extensions 2") (library fundamentals TS v2)  
[Library fundamentals 3](lib_extensions_3.html "cpp/experimental/lib extensions 3") (library fundamentals TS v3)  
[Extensions for parallelism](parallelism.html "cpp/experimental/parallelism") (parallelism TS)  
[Extensions for parallelism 2](parallelism_2.html "cpp/experimental/parallelism 2") (parallelism TS v2)  
[Extensions for concurrency](concurrency.html "cpp/experimental/concurrency") (concurrency TS)  
[Extensions for concurrency 2](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/concurrency_2&action=edit&redlink=1 "cpp/experimental/concurrency 2 \(page does not exist\)") (concurrency TS v2)  
[Concepts](constraints.html "cpp/experimental/constraints") (concepts TS)  
[Ranges](ranges.html "cpp/experimental/ranges") (ranges TS)  
[Reflection](reflect.html "cpp/experimental/reflect") (reflection TS)  
[Mathematical special functions](special_math.html "cpp/experimental/special functions") (special functions TR)  
[Experimental Non-TS](../experimental.html#Experimental_Non-TS "cpp/experimental")  
[Pattern Matching](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/pm&action=edit&redlink=1 "cpp/experimental/pm \(page does not exist\)")  
[Linear Algebra](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/la&action=edit&redlink=1 "cpp/experimental/la \(page does not exist\)")  
[std::execution](execution.html "cpp/experimental/execution")  
[Contracts](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/contracts&action=edit&redlink=1 "cpp/experimental/contracts \(page does not exist\)")  
[2D Graphics](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/2dgraphics&action=edit&redlink=1 "cpp/experimental/2dgraphics \(page does not exist\)")  
  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/navbar_content&action=edit)

[Library fundamentals v3](lib_extensions_3.html "cpp/experimental/lib extensions 3")

[experimental::scope_exit](scope_exit.html "cpp/experimental/scope exit")  
---  
[experimental::scope_fail](scope_fail.html "cpp/experimental/scope fail")  
**experimental::scope_success**  
[experimental::unique_resource](unique_resource.html "cpp/experimental/unique resource")  
  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/lib_extensions_3/navbar_content&action=edit)

**`std::experimental::scope_success`**

Member functions  
---  
[scope_success::scope_success](scope_success/scope_success.html "cpp/experimental/scope success/scope success")  
[scope_success::~scope_success](scope_success/~scope_success.html "cpp/experimental/scope success/~scope success")  
Modifiers  
[scope_success::release](scope_success/release.html "cpp/experimental/scope success/release")  
[Deduction guides](scope_success/deduction_guides.html "cpp/experimental/scope success/deduction guides")  
  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/scope_success/navbar_content&action=edit)

Defined in header `[<experimental/scope>](https://en.cppreference.com/mwiki/index.php?title=cpp/header/experimental/scope&action=edit&redlink=1 "cpp/header/experimental/scope \(page does not exist\)")` |  |   
---|---|---  
template< class EF >  
class scope_success; |  |  (library fundamentals TS v3)  
| |   
  
The class template `scope_success` is a general-purpose scope guard intended to call its exit function when a scope is normally exited. 

`scope_success` is not [CopyConstructible](../named_req/CopyConstructible.html "cpp/named req/CopyConstructible"), [CopyAssignable](../named_req/CopyAssignable.html "cpp/named req/CopyAssignable") or [MoveAssignable](../named_req/MoveAssignable.html "cpp/named req/MoveAssignable"), however, it may be [MoveConstructible](../named_req/MoveConstructible.html "cpp/named req/MoveConstructible") if `EF` meets some requirements, which permits wrapping a `scope_success` into another object. 

A `scope_success` may be either active, i.e. calls its exit function on destruction, or inactive, i.e. does nothing on destruction. A `scope_success` is active after constructed from an exit function. 

A `scope_success` can become inactive by calling release() on it either manually or automatically (by the move constructor). An inactive `scope_success` may also be obtained by initializing with another inactive `scope_success`. Once a `scope_success` is inactive, it cannot become active again. 

A `scope_success` effectively holds an `EF` and a bool flag indicating if it is active, alongwith a counter of uncaught exceptions used for detecting whether the destructor is called during stack unwinding. 

## Contents

  * [1 Template parameters](scope_success.html#Template_parameters)
  * [2 Member functions](scope_success.html#Member_functions)
    * [2.1 Modifiers](scope_success.html#Modifiers)
  * [3 Deduction guides](scope_success.html#Deduction_guides)
  * [4 Notes](scope_success.html#Notes)
  * [5 Example](scope_success.html#Example)
  * [6 See also](scope_success.html#See_also)

  
---  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/scope_guard&action=edit&section=T-1 "Template:cpp/experimental/scope guard")] Template parameters

EF  |  \-  |  type of stored exit function   
---|---|---  
Type requirements   
-`EF` shall be either: 

  * a [Destructible](../named_req/Destructible.html "cpp/named req/Destructible") [FunctionObject](../named_req/FunctionObject.html "cpp/named req/FunctionObject") type, 
  * an lvalue reference to [FunctionObject](../named_req/FunctionObject.html "cpp/named req/FunctionObject"), 
  * an lvalue reference to function. 

  
-Calling an lvalue of [std::remove_reference_t](../types/remove_reference.html)<EF> with no argument shall be well-formed.   
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/scope_guard&action=edit&section=T-2 "Template:cpp/experimental/scope guard")] Member functions

[ (constructor)](scope_success/scope_success.html "cpp/experimental/scope success/scope success") |  constructs a new `scope_success`   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/scope_guard/dsc_constructor&action=edit)  
---|---  
[ (destructor)](scope_success/~scope_success.html "cpp/experimental/scope success/~scope success") |  calls the exit function when the scope is exited normally if the `scope_success` is active, then destroys the `scope_success`   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/scope_guard/dsc_destructor&action=edit)  
operator=[deleted] |  `scope_success` is not assignable   
(public member function)  
  
#####  Modifiers   
  
[ release](scope_success/release.html "cpp/experimental/scope success/release") |  makes the `scope_success` inactive   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/scope_guard/dsc_release&action=edit)  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/scope_guard&action=edit&section=T-3 "Template:cpp/experimental/scope guard")] [Deduction guides](scope_success/deduction_guides.html "cpp/experimental/scope success/deduction guides")

### [[edit](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/scope_guard&action=edit&section=T-4 "Template:cpp/experimental/scope guard")] Notes

Constructing a `scope_success` of dynamic storage duration might lead to unexpected behavior. 

Constructing a `scope_success` is constructed from another `scope_success` created in a different thread might also lead to unexpected behavior since the count of uncaught exceptions obtained in different threads may be compared during the destruction. 

If the `EF` stored in a `scope_success` object refers to a local variable of the function where it is defined, e.g., as a lambda capturing the variable by reference, and that variable is used as a return operand in that function, that variable might have already been returned when the `scope_success`'s destructor executes, calling the exit function. This can lead to surprising behavior. 

### [[edit](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/scope_guard&action=edit&section=T-5 "Template:cpp/experimental/scope guard")] Example

Run this code
    
    
    #include <iostream>
    #include <cstdlib>
    #include <string_view>
    #include <experimental/scope>
     
    void print_exit_status([std::string_view](../string/basic_string_view.html) name, bool exit_status, bool did_throw) {
      [std::cout](../io/cout.html) << name << ":\n";
      [std::cout](../io/cout.html) << "  Throwed exception  " << (did_throw ? "yes" : "no") << "\n";
      [std::cout](../io/cout.html) << "  Exit status        " << (exit_status ? "finished" : "pending") << "\n\n";
    }
     
    // Randomly throw an exception (50% chance)
    void maybe_throw() {
        if ([std::rand](../numeric/random/rand.html)() >= [RAND_MAX](../numeric/random/RAND_MAX.html) / 2)
            throw [std::exception](../error/exception.html){};
    }
     
    int main() {
      bool exit_status{false}, did_throw{false};
     
      // Manual handling at "end of scope"
      try {
        maybe_throw();
        exit_status = true; 
      } catch (...) { did_throw = true; }
      print_exit_status("Manual handling", exit_status, did_throw);
     
      // Using scope_exit: runs on scope exit (success or exception)
      exit_status = did_throw = false;
      try {
        auto guard = std::experimental::scope_exit{[&]{ exit_status = true; } };
        maybe_throw();
      } catch (...) { did_throw = true; }
      print_exit_status("scope_exit", exit_status, did_throw);
     
      // Using scope_fail: runs only if an exception occurs
      exit_status = did_throw = false;
      try {
        auto guard = std::experimental::scope_fail{[&]{ exit_status = true; } };
        maybe_throw();
      } catch (...) { did_throw = true; }
      print_exit_status("scope_fail", exit_status, did_throw);
     
      // Using scope_success: runs only if no exception occurs
      exit_status = did_throw = false;
      try {
        auto guard = std::experimental::scope_success{[&]{ exit_status = true; } };
        maybe_throw();
      } catch (...) { did_throw = true; }
      print_exit_status("scope_success", exit_status, did_throw);
    }

Output: 
    
    
    Manual handling:
      Throwed exception  yes
      Exit status        pending
     
    scope_exit:
      Throwed exception  no
      Exit status        finished
     
    scope_fail:
      Throwed exception  yes
      Exit status        finished
     
    scope_success:
      Throwed exception  yes
      Exit status        pending

### [[edit](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/scope_guard&action=edit&section=T-6 "Template:cpp/experimental/scope guard")] See also

[ scope_exit](scope_exit.html "cpp/experimental/scope exit") |  wraps a function object and invokes it on exiting the scope   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/dsc_scope_exit&action=edit)  
---|---  
[ scope_fail](scope_fail.html "cpp/experimental/scope fail") |  wraps a function object and invokes it on exiting the scope through an exception   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/dsc_scope_fail&action=edit)  
[ default_delete](../memory/default_delete.html "cpp/memory/default delete")(C++11) |  default deleter for [unique_ptr](../memory/unique_ptr.html "cpp/memory/unique ptr")   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/memory/dsc_default_delete&action=edit)
