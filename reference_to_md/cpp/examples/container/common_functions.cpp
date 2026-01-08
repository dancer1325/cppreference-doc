#include <vector>
#include <list>
#include <set>
#include <map>
#include <deque>
#include <iostream>

template<typename Container>
void showCommonFunctions(Container& c, const std::string& name) {
    std::cout << "\n=== " << name << " ===" << std::endl;
    
    // COMMON member functions / shared -- by -- MOST containers
    std::cout << "empty(): " << c.empty() << std::endl;
    std::cout << "size(): " << c.size() << std::endl;
    std::cout << "max_size(): " << c.max_size() << std::endl;
    
    // Iterator functions (shared by all)
    std::cout << "begin() != end(): " << (c.begin() != c.end()) << std::endl;
    
    // Clear function (shared by most)
    auto originalSize = c.size();
    c.clear();
    std::cout << "After clear() - size(): " << c.size() << std::endl;
    std::cout << "After clear() - empty(): " << c.empty() << std::endl;
}

int main() {
    // 1. COMMON MULTIPLE member functions
    std::vector<int> vec = {1, 2, 3};
    std::list<int> lst = {4, 5, 6};
    std::set<int> s = {7, 8, 9};
    std::map<int, int> m = {{1, 10}, {2, 20}};
    std::deque<int> dq = {11, 12, 13};

    showCommonFunctions(vec, "vector");
    showCommonFunctions(lst, "list");
    showCommonFunctions(s, "set");
    showCommonFunctions(m, "map");
    showCommonFunctions(dq, "deque");

    return 0;
}
