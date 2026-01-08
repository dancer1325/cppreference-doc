#include <vector>
#include <list>
#include <map>
#include <iostream>

int main() {
    std::vector<int> vec = {10, 20, 30, 40, 50};
    std::list<int> lst = {1, 2, 3, 4, 5};
    std::map<std::string, int> m = {{"a", 1}, {"b", 2}, {"c", 3}};
    
    // 1. Direct access methods
    std::cout << "=== DIRECT ACCESS ===" << std::endl;
    // 1.1 vector
    std::cout << "vec[2]: " << vec[2] << std::endl;           // Index access
    std::cout << "vec.at(1): " << vec.at(1) << std::endl;     // Safe access
    std::cout << "vec.front(): " << vec.front() << std::endl; // First element
    std::cout << "vec.back(): " << vec.back() << std::endl;   // Last element
    // 1.2 map
    std::cout << "m[\"b\"]: " << m["b"] << std::endl;         // Key access
    
    // 2. Iterator access methods
    std::cout << "\n=== ITERATOR ACCESS ===" << std::endl;
    // 2.1 vector
    std::cout << "vec via iterators: ";
    for (auto it = vec.begin(); it != vec.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    // 2.2 list
    std::cout << "lst via iterators: ";
    for (auto it = lst.begin(); it != lst.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
    
    // 2.3 map
    std::cout << "\n=== RANGE-BASED ACCESS ===" << std::endl;
    std::cout << "map via range: ";
    for (const auto& pair : m) {
        std::cout << pair.first << ":" << pair.second << " ";
    }
    std::cout << std::endl;
    
    return 0;
}
