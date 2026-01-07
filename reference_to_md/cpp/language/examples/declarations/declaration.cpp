#include <iostream>
#include <ostream>

void function() {
    // defined character | this scope
    char character;
    std::cout << character << std::endl;
}

int main() {
    // 1. introduce names | C++ program
    int number;

    // 2. re-introduce names | C++ program
    char character;     // existed | another scope
    std::cout << character << std::endl;

    // 3. if name ALREADY exist -> NOT need to declare again    ==  throw an error
    //int number = 3;       // uncomment to see the error
}
