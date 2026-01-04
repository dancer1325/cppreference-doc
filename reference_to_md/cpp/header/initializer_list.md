* header
  * part of the [language support](../utility.md) library 

###  Classes  

* [`initializer_list`](../utility/initializer_list.md)
  * requirements
    * C++11
  * == [template class](../language/class_template.md) /
    * references a temporary array / created | [list-initialization](../language/list_initialization.md)    
  
###  Functions  

* [`std::begin(std::initializer_list)`](../utility/initializer_list/begin2.md)
  * requirements
    * C++11
  * == function template /
    * 👀overloads [std::begin](../iterator/begin.md)👀    
* [std::end(std::initializer_list)](../utility/initializer_list/end2.md)
  * requirements
    * C++11
  * == function template /
    * 👀overloads [std::end](../iterator/end.md)👀
  
### Synopsis
    
```c++
    // all freestanding
    namespace std {
      template<class E> class initializer_list {
      public:
        using value_type      = E;
        using reference       = const E&;
        using const_reference = const E&;
        using size_type       = size_t;

        using iterator        = const E*;
        using const_iterator  = const E*;

        constexpr initializer_list() noexcept;

        constexpr size_t size() const noexcept;     // number of elements
        constexpr const E* begin() const noexcept;  // first element
        constexpr const E* end() const noexcept;    // one past the last element
      };

      // initializer list range access
      template<class E> constexpr const E* begin(initializer_list<E> il) noexcept;
      template<class E> constexpr const E* end(initializer_list<E> il) noexcept;
    }
```
