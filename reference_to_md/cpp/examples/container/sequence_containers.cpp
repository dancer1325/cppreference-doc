#include <vector>
#include <deque>
#include <list>
#include <array>
#include <iostream>

int main() {
    // Sequence containers implement data structures / can be accessed sequentially
    
    std::vector<int> vec = {1, 2, 3, 4, 5};
    std::deque<int> deq = {10, 20, 30, 40, 50};
    std::list<int> lst = {100, 200, 300, 400, 500};
    std::array<int, 5> arr = {1000, 2000, 3000, 4000, 5000};
    
    // 1. std::vector
    std::cout << "Vector sequential access: ";
    for (auto it = vec.begin(); it != vec.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << "\n";

    // 2. std::deque
    std::cout << "Deque sequential access: ";
    for (const auto& elem : deq) {
        std::cout << elem << " ";
    }
    std::cout << "\n";

    // 3. std::list
    std::cout << "List sequential access: ";
    for (auto it = lst.begin(); it != lst.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << "\n";

    // 4. std::array
    std::cout << "Array sequential access: ";
    for (size_t i = 0; i < arr.size(); ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << "\n";
    
    return 0;
}
