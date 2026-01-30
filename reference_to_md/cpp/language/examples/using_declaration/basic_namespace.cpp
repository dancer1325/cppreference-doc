#include <iostream>

// ============================================
// defined elsewhere
// ============================================
namespace Maths {
    int addition(int a, int b) {
        return a + b;
    }

    int substract(int a, int b) {
        return a - b;
    }

    int multiply(int a, int b) {
        return a * b;
    }
}

// ============================================
// declarative region
// ============================================
int main() {
    // 1. WITHOUT using-declaration
    //      -> MUST qualify the name
    std::cout << "Without using: " << Maths::addition(5, 3) << "\n";

    // ============================================
    // 2. using-declaration
    //      -> allows introducing the name (Example: 'addition') | declarative region (main)
    // ============================================
    using Maths::addition;

    //      -> name is available | declarative region
    std::cout << "With using: " << addition(10, 20) << "\n";

    // 2.1 MULTIPLE names can be introduced
    using Maths::multiply;
    std::cout << "multiply introduced: " << multiply(4, 5) << "\n";

    // 3. names / NOT introduced (Example: `substract`)
    //      -> MUST be qualified
    std::cout << "substract must be qualified: " << Maths::substract(10, 3) << "\n";

    return 0;
}
