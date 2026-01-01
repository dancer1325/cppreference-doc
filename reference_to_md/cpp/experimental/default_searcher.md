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

[Library fundamentals](memory.html "cpp/experimental/lib extensions")

[experimental::optional](optional.html "cpp/experimental/optional")  
---  
[experimental::any](any.html "cpp/experimental/any")  
[experimental::basic_string_view](basic_string_view.html "cpp/experimental/basic string view")  
[experimental::sample](sample.html "cpp/experimental/sample")  
[experimental::shared_ptr](shared_ptr.html "cpp/experimental/shared ptr")  
[experimental::weak_ptr](weak_ptr.html "cpp/experimental/weak ptr")  
[experimental::apply](apply.html "cpp/experimental/apply")  
[experimental::invocation_typeexperimental::raw_invocation_type](invocation_type.html "cpp/experimental/invocation type")  
[experimental::search](search.html "cpp/experimental/search")  
**experimental::default_searcher experimental::make_default_searcher**  
[experimental::boyer_moore_searcherexperimental::make_boyer_moore_searcher](boyer_moore_searcher.html "cpp/experimental/boyer moore searcher")  
[experimental::boyer_moore_horspool_searcherexperimental::make_boyer_moore_horspool_searcher](boyer_moore_horspool_searcher.html "cpp/experimental/boyer moore horspool searcher")  
[Type-erased and polymorphic allocators](memory.html "cpp/experimental/memory")  
[Variable templates for type traits](type_trait_variable_templates.html "cpp/experimental/type trait variable templates")  
  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/lib_extensions/navbar_content&action=edit)

Defined in header `[<experimental/functional>](../header/experimental/functional.html "cpp/header/experimental/functional")` |  |   
---|---|---  
template< class ForwardIterator1, class BinaryPredicate = [std::equal_to](../utility/functional/equal_to.html)<> >  
class default_searcher; |  |  (library fundamentals TS)  
| |   
  
A class suitable for use with [`std::experimental::search`](search.html "cpp/experimental/search") that delegates the search operation to the standard library's [std::search](../algorithm/search.html "cpp/algorithm/search"). 

`default_searcher` is [CopyConstructible](../named_req/CopyConstructible.html "cpp/named req/CopyConstructible") and [CopyAssignable](../named_req/CopyAssignable.html "cpp/named req/CopyAssignable"). 

## Contents

  * [1 Member functions](default_searcher.html#Member_functions)
  * [2 std::experimental::default_searcher::default_searcher](default_searcher.html#std::experimental::default_searcher::default_searcher)
    * [2.1 Parameters](default_searcher.html#Parameters)
    * [2.2 Exceptions](default_searcher.html#Exceptions)
  * [3 std::experimental::default_searcher::operator()](default_searcher.html#std::experimental::default_searcher::operator.28.29)
    * [3.1 Parameters](default_searcher.html#Parameters_2)
    * [3.2 Return value](default_searcher.html#Return_value)
    * [3.3 Helper Functions](default_searcher.html#Helper_Functions)
    * [3.4 Parameters](default_searcher.html#Parameters_3)
    * [3.5 Return value](default_searcher.html#Return_value_2)
    * [3.6 Example](default_searcher.html#Example)
    * [3.7 See also](default_searcher.html#See_also)

  
---  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/default_searcher&action=edit&section=1 "Edit section: Member functions")] Member functions

##  std::experimental::default_searcher::default_searcher

default_searcher( ForwardIterator pat_first,  
ForwardIterator pat_last,  
BinaryPredicate pred = BinaryPredicate() ); |  |   
---|---|---  
| |   
  
Constructs a `default_searcher` by storing copies of pat_first, pat_last, and pred. 

###  Parameters

pat_first, pat_last  |  \-  |  a pair of iterators designating the string to be searched for   
---|---|---  
pred  |  \-  |  a callable object used to determine equality   
  
###  Exceptions

Any exceptions thrown by the copy constructors of `BinaryPredicate` or `ForwardIterator`. 

##  std::experimental::default_searcher::operator()

template< class ForwardIterator2 >  
ForwardIterator2 operator()( ForwardIterator2 first, ForwardIterator2 last ) const; |  |  (until C++17)  
---|---|---  
template< class ForwardIterator2 >  
[std::pair](../utility/pair.html)<ForwardIterator2, ForwardIterator2>  
operator()( ForwardIterator2 first, ForwardIterator2 last ) const; |  |  (since C++17)  
| |   
  
The member function called by [`std::experimental::search`](search.html "cpp/experimental/search") to perform a search with this searcher. 

Equivalent to [std::search](../algorithm/search.html)(first, last, pat_first, pat_last, pred);.  | (until C++17)  
---|---  
Returns a pair of iterators `i, j`, where `i` is [std::search](../algorithm/search.html)(first, last, pat_first, pat_last, pred) and `j` is [std::next](../iterator/next.html)(i, [std::distance](../iterator/distance.html)(pat_first, pat_last)) unless `std::search` returned last (no match), in which case `j` equals last as well.  | (until C++17)  
  
###  Parameters

first, last  |  \-  |  a pair of iterators designating the string to be examined   
---|---|---  
  
###  Return value

Iterator to the first position in `[`first`, `last`)` where a subsequence that compares equal to `[`pat_first`, `pat_last`)` as defined by pred is located, or a copy of last otherwise.  | (until C++17)  
---|---  
A pair of iterators to the first and one past last positions in `[`first`, `last`)` where a subsequence that compares equal to `[`pat_first`, `pat_last`)` as defined by pred is located, or a pair of copies of last otherwise.  | (since C++17)  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/default_searcher&action=edit&section=6 "Edit section: Helper Functions")] Helper Functions

template< class ForwardIterator, class BinaryPredicate = [std::equal_to](../utility/functional/equal_to.html)<> >  
default_searcher<ForwardIterator, BinaryPredicate> make_default_searcher(  
ForwardIterator pat_first,  
ForwardIterator pat_last,  
BinaryPredicate pred = BinaryPredicate()); |  |  (library fundamentals TS)  
---|---|---  
| |   
  
Helper function that constructs a `std::experimental::default_searcher` using template argument deduction. Equivalent to return default_searcher<ForwardIterator, BinaryPredicate>(pat_first, pat_last, pred);

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/default_searcher&action=edit&section=7 "Edit section: Parameters")] Parameters

pat_first, pat_last  |  \-  |  a pair of iterators designating the string to be searched for   
---|---|---  
pred  |  \-  |  a callable object used to determine equality   
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/default_searcher&action=edit&section=8 "Edit section: Return value")] Return value

A `default_searcher` constructed with the arguments pat_first, pat_last, pred. 

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/default_searcher&action=edit&section=9 "Edit section: Example")] Example

Run this code
    
    
    #include <experimental/algorithm>
    #include <experimental/functional>
    #include <iostream>
    #include <string>
     
    int main()
    {
        [std::string](../string/basic_string.html) in = "Lorem ipsum dolor sit amet, consectetur adipiscing elit,"
                         " sed do eiusmod tempor incididunt ut labore et dolore magna aliqua";
        [std::string](../string/basic_string.html) needle = "pisci";
        auto it = [std::experimental::search](search.html)(in.begin(), in.end(),
                      std::experimental::make_default_searcher(
                          needle.begin(), needle.end()));
        if (it != in.end())
            [std::cout](../io/cout.html) << "The string " << needle << " found at offset "
                      << it - in.begin() << '\n';
        else
            [std::cout](../io/cout.html) << "The string " << needle << " not found\n";
    }

Output: 
    
    
    The string pisci found at offset 43

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/default_searcher&action=edit&section=10 "Edit section: See also")] See also

[ search](../algorithm/search.html "cpp/algorithm/search") |  searches for the first occurrence of a range of elements   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/algorithm/dsc_search&action=edit)  
---|---
