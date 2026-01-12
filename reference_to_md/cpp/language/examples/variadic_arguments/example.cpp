#include <iostream>
// 1. variadic function
// 1.1  | LAST argument
// 1.1.1    ,...
int printx(const char* fmt, ...) {
    std::cout << "fmt: " << fmt << "\n" << std::endl;
}
// 1.1.2    ...                 // | C++26, deprecated
int printxWithoutComma(const char* fmt...) {
    std::cout << "fmt: " << fmt << "\n" << std::endl;
}

// 1.2  NOT | LAST argument
// 1.2.1    ,...
//int printy(..., const char* fmt);           // uncomment to see the error
// 1.2.2    ...
//int printz(...);                            // uncomment to see the error

// ========================================
// 2. != FUNCTION PARAMETER PACK EXPANSION (C++11 templates with ...)
// ========================================

// 2.1 Base case for recursion
void printArgs() {
    std::cout << std::endl;
}

// 2.2 Recursive variadic template function
// T... is a template parameter pack
// args... is a function parameter pack
template<typename T, typename... Args>
void printArgs(T first, Args... rest) {
    std::cout << first << " ";
    printArgs(rest...);  // Pack expansion: rest...
}

// 2.3 Sum all arguments using fold expression (C++17)
template<typename... Args>
auto sum(Args... args) {
    return (args + ...);  // Fold expression
}

// 2.4 Count number of arguments using sizeof...
template<typename... Args>
constexpr std::size_t countArgs(Args... args) {
    return sizeof...(Args);
}

int main() {
    std::cout << "=== 1. VARIADIC FUNCTIONS (C-style) ===" << std::endl;
    printx("hello world");
    printxWithoutComma("a=%d b=%d", "a", "b");

    std::cout << "\n=== 2. PARAMETER PACK EXPANSION (C++11 templates) ===" << std::endl;
    printArgs(1, 2.5, "hello", 'x');
    printArgs("foo", 42, 3.14);

    std::cout << "\n=== FOLD EXPRESSIONS ===" << std::endl;
    std::cout << "sum(1, 2, 3, 4, 5) = " << sum(1, 2, 3, 4, 5) << std::endl;

    std::cout << "\n=== sizeof... OPERATOR ===" << std::endl;
    std::cout << "countArgs(1, 2, 3) = " << countArgs(1, 2, 3) << std::endl;

    return 0;
}