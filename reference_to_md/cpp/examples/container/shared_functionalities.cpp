#include <vector>
#include <list>
#include <set>
#include <map>
#include <deque>
#include <stack>
#include <queue>
#include <iostream>

template<typename Container>
void testUniversalFunctionalities(Container& c, const std::string& name) {
    std::cout << "\n=== " << name << " ===" << std::endl;
    
    // functionalities / ALL containers share
    
    // 1. Size query functionality
    std::cout << "size(): " << c.size() << std::endl;
    std::cout << "empty(): " << c.empty() << std::endl;
    
    // 2. Copy/assignment functionality
    Container copy = c;  // Copy constructor
    std::cout << "Copy created - size: " << copy.size() << std::endl;
    
    // 3. Destruction functionality
    std::cout << "Destructor will be called automatically" << std::endl;
}

int main() {
    std::cout << "FUNCTIONALITIES SHARED BY ALL CONTAINERS:" << std::endl;
    std::cout << "(Only the ones that work for ALL container types)" << std::endl;
    
    // 1. std::vector
    std::vector<int> vec;
    vec.push_back(1);

    // 2. std::list
    std::list<int> lst;
    lst.push_back(2);

    // 3. std::set
    std::set<int> s;
    s.insert(3);

    // 4. std::map
    std::map<int, int> m;
    m[1] = 4;

    // 5. std::deque
    std::deque<int> dq;
    dq.push_back(5);

    // 6. std::stack
    std::stack<int> stk;
    stk.push(6);

    // 7. std::stack
    std::queue<int> q;
    q.push(7);
    
    // These functionalities work | ALL containers
    testUniversalFunctionalities(vec, "VECTOR");
    testUniversalFunctionalities(lst, "LIST");  
    testUniversalFunctionalities(s, "SET");
    testUniversalFunctionalities(m, "MAP");
    testUniversalFunctionalities(dq, "DEQUE");
    testUniversalFunctionalities(stk, "STACK");
    testUniversalFunctionalities(q, "QUEUE");
    
    return 0;
}
