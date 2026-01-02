#include <iostream>

// 1. void (incomplete type)
void func1(); // OK - can declare functions returning void
// void v;    // ERROR - cannot declare variables of type void

// 2. Forward declared class (incomplete type)
class ForwardDeclared; // Forward declaration - incomplete

// Can use pointers/references to incomplete types
ForwardDeclared* ptr1;     // OK
ForwardDeclared& getRef(); // OK
// ForwardDeclared obj;    // ERROR - incomplete type

// 3. Array of unknown bound (incomplete type)
extern int arr[];          // OK - incomplete array type
// int local_arr[];        // ERROR - cannot have local incomplete array

// 4. Array of incomplete type elements
extern ForwardDeclared forward_arr[10]; // OK - array of incomplete type
// ForwardDeclared local_forward_arr[5]; // ERROR - elements are incomplete

// 5. Enumeration before underlying type determined
enum Color; // Forward declaration - incomplete until defined
// Color c;  // ERROR - incomplete enum

// Complete the types to make them usable
class ForwardDeclared {
public:
    int value;
    ForwardDeclared(int v) : value(v) {}
};

enum Color { RED, GREEN, BLUE }; // Now complete

// Now we can define the array size
int arr[5] = {1, 2, 3, 4, 5}; // Complete the array

int main() {
    std::cout << "=== Incomplete Types Demo ===\n\n";
    
    // 1. void - can call functions but not declare variables
    std::cout << "1. void type:\n";
    func1(); // OK - calling function returning void
    
    // 2. Now ForwardDeclared is complete
    std::cout << "\n2. Forward declared class (now complete):\n";
    ForwardDeclared obj(42);
    std::cout << "ForwardDeclared object value: " << obj.value << "\n";
    
    // 3. Array is now complete
    std::cout << "\n3. Array (now complete):\n";
    std::cout << "Array elements: ";
    for (int i = 0; i < 5; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << "\n";
    
    // 4. Enum is now complete
    std::cout << "\n4. Enumeration (now complete):\n";
    Color c = RED;
    std::cout << "Color value: " << static_cast<int>(c) << "\n";
    
    return 0;
}

void func1() {
    std::cout << "Function returning void called\n";
}
