 
  


  
  
  
  
  
  
  
  
  
  
  
  


[`std::source_location`](../source_location.html "cpp/utility/source location")

Member functions  
---  
Creation  
[source_location::source_location](source_location.html "cpp/utility/source location/source location")  
[source_location::current](current.html "cpp/utility/source location/current")  
Field access  
[source_location::line](line.html "cpp/utility/source location/line")  
[source_location::column](column.html "cpp/utility/source location/column")  
[source_location::file_name](file_name.html "cpp/utility/source location/file name")  
**source_location::function_name**  
  


constexpr const char* function_name() const noexcept; |  |  (since C++20)  
---|---|---  
| |   
  
Returns the name of the function associated with the position represented by this object, if any. 

## Contents

  * [1 Parameters](function_name.html#Parameters)
  * [2 Return value](function_name.html#Return_value)
  * [3 Example](function_name.html#Example)
  * [4 See also](function_name.html#See_also)

  
---  
  
### Parameters

(none) 

### Return value

If this object represents a position in a body of a function, returns an implementation-defined null-terminated byte string corresponding to the name of the function. 

Otherwise, an empty string is returned. 

### Example

`std::source_location::function_name` may help to obtain the names of functions (including the special functions) alongside with their signatures.

Run this code
    
    
    #include <cstdio>
    #include <utility>
    #include <source_location>
     
    inline void print_function_name(
        const [std::source_location](../source_location.html)& location = std::source_location::current())
    {
        [std::puts](../../io/c/puts.html)(location.function_name()); // prints the name of the caller
    }
     
    void foo(double &&) { print_function_name(); }
     
    namespace bar { void baz() { print_function_name(); } }
     
    template <typename T> auto pub(T) { print_function_name(); return 42; }
     
    struct S {
        S() { print_function_name(); }
        S(int) { print_function_name(); }
        ~S() { print_function_name(); }
        S& operator=(S const&) { print_function_name(); return *this; }
        S& operator=(S&&) { print_function_name(); return *this; }
    };
     
    int main(int, char const* const[])
    {
        print_function_name();
        foo(3.14);
        bar::baz();
        pub(0xFULL);
        S p;
        S q{42};
        p = q;
        p = std::move(q);
        [] { print_function_name(); }();
    }

Possible output: 
    
    
    int main(int, const char* const*)
    void foo(double&&)
    void bar::baz()
    auto pub(T) [with T = long long unsigned int]
    S::S()
    S::S(int)
    S& S::operator=(const S&)
    S& S::operator=(S&&)
    main(int, const char* const*)::<lambda()>
    S::~S()
    S::~S()

### See also

[ line](line.html "cpp/utility/source location/line") |  return the line number represented by this object   
(public member function)   
---|---  
[ column](column.html "cpp/utility/source location/column") |  return the column number represented by this object   
(public member function)   
[ file_name](file_name.html "cpp/utility/source location/file name") |  return the file name represented by this object   
(public member function) 
