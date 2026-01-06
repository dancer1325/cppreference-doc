#include <iostream>

// Declarations introduce names into the C++ program

// 1. Variable declarations
int x;                    // introduces name 'x'
extern int y;             // re-introduces name 'y' (defined elsewhere)
static int z = 42;        // introduces name 'z' with internal linkage

// 2. Function declarations
void func();              // introduces name 'func'
int add(int a, int b);    // introduces name 'add' & parameters 'a', 'b'

// 3. Template declarations
template<typename T>      // introduces template parameter 'T'
class Container {         // introduces name 'Container'
    T data;              // uses 'T', introduces member 'data'
};

// 4. Type declarations
struct Point {            // introduces name 'Point'
    int x, y;            // introduces member names 'x', 'y'
};

class MyClass;           // forward declaration - introduces name 'MyClass'

enum Color {             // introduces name 'Color'
    RED,                 // introduces enumerator 'RED'
    GREEN,               // introduces enumerator 'GREEN'
    BLUE                 // introduces enumerator 'BLUE'
};

// 5. Namespace declarations
namespace MyNamespace {   // introduces name 'MyNamespace'
    int value = 100;     // introduces name 'value' in MyNamespace
}


// 6. Alias declarations
using MyInt = int;        // introduces alias name 'MyInt'
typedef double Real;      // introduces alias name 'Real'

// 7. Re-introducing names in different scopes
void example() {
    int x = 10;          // re-introduces 'x' in local scope (shadows global x)
    {
        int x = 20;      // re-introduces 'x' again in nested scope
        std::cout << "Inner x: " << x << std::endl;  // prints 20
    }
    std::cout << "Outer x: " << x << std::endl;      // prints 10
}

// Function definitions (introduce implementation)
void func() {
    std::cout << "Function called" << std::endl;
}

int add(int a, int b) {
    return a + b;
}

int main() {
    // Using declared names
    x = 5;
    z = 100;
    
    Point p = {1, 2};
    Color c = RED;
    MyInt mi = 42;
    Real r = 3.14;
    
    func();
    std::cout << "add(3, 4) = " << add(3, 4) << std::endl;
    std::cout << "MyNamespace::value = " << MyNamespace::value << std::endl;
    
    Container<int> container;
    
    example();
    
    return 0;
}
