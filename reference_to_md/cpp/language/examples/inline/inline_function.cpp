#include <iostream>

// ============================================
// inline function
// := function / `inline` specifier appears | function's decl-specifier-seq
// ============================================

// 1. inline specifier | decl-specifier-seq
// 1.1 BEFORE return type
inline int add(int a, int b)
{
    return a + b;
}

// 1.2 AFTER return type
int inline multiply(int a, int b)
{
    return a * b;
}

int main()
{
    std::cout << "=== inline function examples ===" << std::endl;
    std::cout << std::endl;

    // 1. Explicit inline
    std::cout << "add(5, 3) = " << add(5, 3) << std::endl;
    std::cout << "multiply(5, 3) = " << multiply(5, 3) << std::endl;
    std::cout << std::endl;

    return 0;
}
