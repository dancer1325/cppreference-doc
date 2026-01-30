#include <type_traits>
#include <list>
#include <algorithm>
#include <concepts>
#include <functional>                  // required -- by -- std::hash

// 1. := requirements | template arguments
// 1.1 class templates
template<typename T>
    requires std::is_integral_v<T>
class Counter
{
    T count;
public:
    Counter() : count(0) {}
    void increment() { ++count; }
    T get() const { return count; }
};

// define Hashable
template<typename T>
concept Hashable = requires(T a)
{
    { std::hash<T>{}(a) } -> std::convertible_to<std::size_t>;
};

// 1.2 function templates
template<typename T>
void process(T value) requires Hashable<T>
{
    // ...
}

// 2. allows: select the MOST appropriate function overloads & template specializations
// TODO:

int main()
{
    // 3. if there are violations -> detected | compile time
    std::list<int> l = {3, -1, 10};
    // Uncomment the line below to see the error:
    //std::sort(l.begin(), l.end());
    // Typical compiler diagnostic with concepts:
    // error: cannot call std::sort with std::_List_iterator<int>
    // note:  concept RandomAccessIterator<std::_List_iterator<int>> was not satisfied

    return 0;
}