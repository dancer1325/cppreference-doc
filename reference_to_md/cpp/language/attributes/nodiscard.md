* (C++17)(C++20) |  encourages the compiler to issue a warning if the return value is discarded  
  (attribute specifier)
If a function declared `nodiscard` or a function returning an enumeration or class declared `nodiscard` by value is called from a [discarded-value expression](../expressions.html#Discarded-value_expressions "cpp/language/expressions") other than a cast to void, the compiler is encouraged to issue a warning. 

## Contents

  * [1 Syntax](nodiscard.html#Syntax)
  * [2 Explanation](nodiscard.html#Explanation)
  * [3 Example](nodiscard.html#Example)
  * [4 Standard library](nodiscard.html#Standard_library)
    * [4.1 Allocation functions](nodiscard.html#Allocation_functions)
    * [4.2 Indirect access](nodiscard.html#Indirect_access)
    * [4.3 Emptiness-checking functions](nodiscard.html#Emptiness-checking_functions)
    * [4.4 Miscellaneous](nodiscard.html#Miscellaneous)
  * [5 Defect reports](nodiscard.html#Defect_reports)
  * [6 References](nodiscard.html#References)
  * [7 See also](nodiscard.html#See_also)

### Syntax  

`**[[nodiscard]]**` |  (1)  |  (since C++17)  
`**[[nodiscard(**` string-literal `**)]]**` |  (2)  |  (since C++20)  
string-literal |  \-  |  an [unevaluated string literal](../string_literal.html#Unevaluated_strings "cpp/language/string literal") that could be used to explain the rationale for why the result should not be discarded   
---|---|---  
  
### Explanation

Appears in a function declaration, enumeration declaration, or class declaration. 

If, from a [discarded-value expression](../expressions.html#Discarded-value_expressions "cpp/language/expressions") other than a cast to void, 

  * a function declared `nodiscard` is called, or 
  * a function returning an enumeration or class declared `nodiscard` by value is called, or 
  * a constructor declared `nodiscard` is called by [explicit type conversion](../explicit_cast.html "cpp/language/explicit cast") or [`static_cast`](../static_cast.html "cpp/language/static cast"), or 
  * an object of an enumeration or class type declared `nodiscard` is initialized by [explicit type conversion](../explicit_cast.html "cpp/language/explicit cast") or [`static_cast`](../static_cast.html "cpp/language/static cast"), 



the compiler is encouraged to issue a warning. 

The string-literal, if specified, is usually included in the warnings.  | (since C++20)  
---|---

###  Standard library

The following standard functions are declared with `nodiscard` attribute:  | Extended content  
  
| 

#####  Allocation functions   

[ operator newoperator new[]](../../memory/new/operator_new.html "cpp/memory/new/operator new") |  allocation functions   
(function)   
[ allocate](../../memory/allocator/allocate.html "cpp/memory/allocator/allocate") |  allocates uninitialized storage   
(public member function of `std::allocator<T>`)   
[ allocate](../../memory/allocator_traits/allocate.html "cpp/memory/allocator traits/allocate")[static] |  allocates uninitialized storage using the allocator   
(public static member function of `std::allocator_traits<Alloc>`)   
[ allocate](../../memory/memory_resource/allocate.html "cpp/memory/memory resource/allocate") |  allocates memory   
(public member function of `std::pmr::memory_resource`)   
[ allocate](../../memory/polymorphic_allocator/allocate.html "cpp/memory/polymorphic allocator/allocate") |  allocate memory   
(public member function of `std::pmr::polymorphic_allocator<T>`)   
[ allocate](../../memory/scoped_allocator_adaptor/allocate.html "cpp/memory/scoped allocator adaptor/allocate") |  allocates uninitialized storage using the outer allocator   
(public member function of `std::scoped_allocator_adaptor<OuterAlloc,InnerAlloc...>`)   
  
#####  Indirect access   
  
[ launder](../../utility/launder.html "cpp/utility/launder")(C++17) |  pointer optimization barrier   
(function template)   
[ assume_aligned](../../memory/assume_aligned.html "cpp/memory/assume aligned")(C++20) |  informs the compiler that a pointer is aligned   
(function template)   
  
#####  Emptiness-checking functions   
  
[ empty](../../iterator/empty.html "cpp/iterator/empty")(C++17) |  checks whether the container is empty   
(function template)   
[ empty](../../container/node_handle.html#empty "cpp/container/node handle") |  checks whether the node handle is empty  
(public member function of `_node handle_`)  
[ empty](../../container/array/empty.html "cpp/container/array/empty") |  checks whether the container is empty   
(public member function of `std::array<T,N>`)   
[ empty](../../string/basic_string/empty.html "cpp/string/basic string/empty") |  checks whether the string is empty   
(public member function of `std::basic_string<CharT,Traits,Allocator>`)   
[ empty](../../string/basic_string_view/empty.html "cpp/string/basic string view/empty") |  checks whether the view is empty   
(public member function of `std::basic_string_view<CharT,Traits>`)   
[ empty](../../container/deque/empty.html "cpp/container/deque/empty") |  checks whether the container is empty   
(public member function of `std::deque<T,Allocator>`)   
[ empty](../../container/forward_list/empty.html "cpp/container/forward list/empty") |  checks whether the container is empty   
(public member function of `std::forward_list<T,Allocator>`)   
[ empty](../../container/list/empty.html "cpp/container/list/empty") |  checks whether the container is empty   
(public member function of `std::list<T,Allocator>`)   
[ empty](../../container/map/empty.html "cpp/container/map/empty") |  checks whether the container is empty   
(public member function of `std::map<Key,T,Compare,Allocator>`)   
[ empty](../../regex/match_results/empty.html "cpp/regex/match results/empty") |  checks whether the match was successful   
(public member function of `std::match_results<BidirIt,Alloc>`)   
[ empty](../../container/multimap/empty.html "cpp/container/multimap/empty") |  checks whether the container is empty   
(public member function of `std::multimap<Key,T,Compare,Allocator>`)   
[ empty](../../container/multiset/empty.html "cpp/container/multiset/empty") |  checks whether the container is empty   
(public member function of `std::multiset<Key,Compare,Allocator>`)   
[ empty](../../container/priority_queue/empty.html "cpp/container/priority queue/empty") |  checks whether the container adaptor is empty   
(public member function of `std::priority_queue<T,Container,Compare>`)   
[ empty](../../container/queue/empty.html "cpp/container/queue/empty") |  checks whether the container adaptor is empty   
(public member function of `std::queue<T,Container>`)   
[ empty](../../container/set/empty.html "cpp/container/set/empty") |  checks whether the container is empty   
(public member function of `std::set<Key,Compare,Allocator>`)   
[ empty](../../container/span/empty.html "cpp/container/span/empty") |  checks if the sequence is empty   
(public member function of `std::span<T,Extent>`)   
[ empty](../../container/stack/empty.html "cpp/container/stack/empty") |  checks whether the container adaptor is empty   
(public member function of `std::stack<T,Container>`)   
[ empty](../../container/unordered_map/empty.html "cpp/container/unordered map/empty") |  checks whether the container is empty   
(public member function of `std::unordered_map<Key,T,Hash,KeyEqual,Allocator>`)   
[ empty](../../container/unordered_multimap/empty.html "cpp/container/unordered multimap/empty") |  checks whether the container is empty   
(public member function of `std::unordered_multimap<Key,T,Hash,KeyEqual,Allocator>`)   
[ empty](../../container/unordered_multiset/empty.html "cpp/container/unordered multiset/empty") |  checks whether the container is empty   
(public member function of `std::unordered_multiset<Key,Hash,KeyEqual,Allocator>`)   
[ empty](../../container/unordered_set/empty.html "cpp/container/unordered set/empty") |  checks whether the container is empty   
(public member function of `std::unordered_set<Key,Hash,KeyEqual,Allocator>`)   
[ empty](../../container/vector/empty.html "cpp/container/vector/empty") |  checks whether the container is empty   
(public member function of `std::vector<T,Allocator>`)   
[ empty](../../filesystem/path/empty.html "cpp/filesystem/path/empty") |  checks if the path is empty   
(public member function of `std::filesystem::path`)   
  
#####  Miscellaneous   
  
[ async](../../thread/async.html "cpp/thread/async")(C++11) |  runs a function asynchronously (potentially in a new thread) and returns a [std::future](../../thread/future.html "cpp/thread/future") that will hold the result   
(function template)   
  
(until C++26)  
  
### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[P1771R1](https://wg21.link/P1771R1) | C++17  | `[[nodiscard]]` on constructors has no effect  | can cause a warning if the constructed object is discarded   
  
### References

  * C++23 standard (ISO/IEC 14882:2024): 



    

  * 9.12.9 Nodiscard attribute [dcl.attr.nodiscard] 



  * C++20 standard (ISO/IEC 14882:2020): 



    

  * 9.12.8 Nodiscard attribute [dcl.attr.nodiscard] 



  * C++17 standard (ISO/IEC 14882:2017): 



    

  * 10.6.7 Nodiscard attribute [dcl.attr.nodiscard] 



### See also

[ ignore](../../utility/tuple/ignore.html "cpp/utility/tuple/ignore")(C++11) |  placeholder to skip an element when unpacking a `tuple` using [`tie`](../../utility/tuple/tie.html "cpp/utility/tuple/tie")   
(constant)   
---|---  
[C documentation](../../../c/language/attributes/nodiscard.html "c/language/attributes/nodiscard") for nodiscard
