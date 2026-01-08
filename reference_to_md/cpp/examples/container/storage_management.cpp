#include <vector>
#include <iostream>

int main() {
    std::vector<int> vec;
    
    std::cout << "Initial - Size: " << vec.size() 
              << ", Capacity: " << vec.capacity() << std::endl;
    
    // Container manages storage automatically
    for (int i = 0; i < 10; i++) {
        vec.push_back(i);
        std::cout << "After push " << i 
                  << " - Size: " << vec.size() 
                  << ", Capacity: " << vec.capacity() << std::endl;
    }
    
    // Manual storage management
    vec.reserve(20);
    std::cout << "After reserve(20) - Size: " << vec.size() 
              << ", Capacity: " << vec.capacity() << std::endl;
    
    vec.shrink_to_fit();
    std::cout << "After shrink_to_fit() - Size: " << vec.size() 
              << ", Capacity: " << vec.capacity() << std::endl;
    
    return 0;
}
