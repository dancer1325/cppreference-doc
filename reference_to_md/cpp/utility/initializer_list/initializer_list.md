 
  


  
  
  
  
  
  
  
  
  
  
  
  


[`std::initializer_list`](../initializer_list.html "cpp/utility/initializer list")

Member functions  
---  
**initializer_list::initializer_list**  
Capacity  
[initializer_list::size](size.html "cpp/utility/initializer list/size")  
Iterators  
[initializer_list::begin](begin.html "cpp/utility/initializer list/begin")  
[initializer_list::end](end.html "cpp/utility/initializer list/end")  
Non-member functions  
[begin(std::initializer_list)](begin2.html "cpp/utility/initializer list/begin2")  
[end(std::initializer_list)](end2.html "cpp/utility/initializer list/end2")  
  


initializer_list() noexcept; |  | (since C++11)   
(constexpr since C++14)  
---|---|---  
| |   
  
Constructs an empty initializer list. 

## Contents

  * [1 Parameters](initializer_list.html#Parameters)
  * [2 Complexity](initializer_list.html#Complexity)
  * [3 Notes](initializer_list.html#Notes)
  * [4 Example](initializer_list.html#Example)

  
---  
  
### Parameters

(none) 

### Complexity

Constant 

### Notes

Despite a lack of constructors, it is possible to create non-empty initializer lists. Instances of `std::initializer_list` are implicitly constructed when: 

  * a _braced-init-list_ is used in [list-initialization](../../language/list_initialization.html "cpp/language/list initialization"), including function-call list initialization and assignment expressions (not to be confused with [constructor initializer lists](../../language/initializer_list.html "cpp/language/initializer list")) 
  * a _braced-init-list_ is bound to auto, including in a [ranged for loop](../../language/range-for.html "cpp/language/range-for")



### Example

Run this code
    
    
    #include <initializer_list>
    #include <iostream>
     
    int main()
    {
        [std::initializer_list](../initializer_list.html)<int> empty_list;
        [std::cout](../../io/cout.html) << "empty_list.size(): " << empty_list.size() << '\n';
     
        // create initializer lists using list-initialization
        [std::initializer_list](../initializer_list.html)<int> digits{1, 2, 3, 4, 5};
        [std::cout](../../io/cout.html) << "digits.size(): " << digits.size() << '\n';
     
        // special rule for auto means 'fractions' has the
        // type std::initializer_list<double>
        auto fractions = {3.14159, 2.71828};
        [std::cout](../../io/cout.html) << "fractions.size(): " << fractions.size() << '\n';
     
        // create constexpr initializer list (since C++14)
        static constexpr auto ab = {'a', 'b'};
        static_assert(ab.size() == 2 and *ab.begin() == 'a');
    }

Output: 
    
    
    empty_list.size(): 0
    digits.size(): 5
    fractions.size(): 2
