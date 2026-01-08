#include <iostream>

// PHASE 3: Tokenization and Preprocessing
// Preprocessor directives are processed and macros are expanded

// Define macros
#define PI 3.14159
#define MAX(a, b) ((a) > (b) ? (a) : (b))

// Conditional compilation
#define DEBUG_MODE 1

int main() {
    double radius = 5.0;
    double area = PI * radius * radius;  // PI will be replaced with 3.14159

    std::cout << "Circle area: " << area << std::endl;

    int x = 10, y = 20;
    // MAX(x, y) will be replaced with ((x) > (y) ? (x) : (y))
    std::cout << "Maximum of " << x << " and " << y << ": " << MAX(x, y) << std::endl;

#ifdef DEBUG_MODE
    std::cout << "[DEBUG] Debug mode is active" << std::endl;
#endif

#if DEBUG_MODE == 1
    std::cout << "[DEBUG] DEBUG_MODE = 1" << std::endl;
#endif

    return 0;
}
