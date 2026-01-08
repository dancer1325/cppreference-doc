#include <iostream>

// 1. VARIABLE
int globalVar;

// 2. FUNCTION
int addNumbers(int a, int b);

// 3. CLASS
class MyClass;

// 4. STRUCT
struct Point {
    int x;
    int y;
};

// 5. ENUM
enum Color {
    RED,
    GREEN,
    BLUE
};

// 6. TYPEDEF
typedef unsigned long ulong;

// 7. USING
using Integer = int;

// 8. NAMESPACE
namespace MyNamespace {
    int value = 42;
}

// 9. TEMPLATE
template<typename T>
T maximum(T a, T b);

// 10. CONSTEXPR
constexpr int MAX_SIZE = 100;

int main() {
    std::cout << "=== Ejemplos de declaraciones según la entidad ===" << std::endl;

    // 1. use variable
    globalVar = 10;
    std::cout << "Variable: " << globalVar << std::endl;

    // 2. use function
    // requirements: define (!= declare)

    // 3. use class
    // requirements: define (!= declare)
    //MyClass obj;

    // 4. use struct
    Point p = {10, 20};
    std::cout << "Struct: (" << p.x << ", " << p.y << ")" << std::endl;

    // 5. use enum
    Color myColor = RED;
    std::cout << "Enum: " << myColor << std::endl;

    // 6. use typedef
    ulong bigNumber = 1000000UL;
    std::cout << "Typedef: " << bigNumber << std::endl;

    // 7. use alias
    Integer number = 42;
    std::cout << "Using alias: " << number << std::endl;

    // 8. use namespace
    std::cout << "Namespace: " << MyNamespace::value << std::endl;

    // 9. use template
    // requirements: define (!= declare)

    // 10. use constexpr
    std::cout << "Constexpr: " << MAX_SIZE << std::endl;

    return 0;
}
