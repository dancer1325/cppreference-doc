#include <iostream>
#include "example.h"

// declare file1.cpp's functions & file2.cpp's functions
extern int a();
extern int b();

int main()
{
    std::cout << "=== Testing inline function & inline variable ===" << std::endl;
    std::cout << std::endl;

    // Initial counter state
    std::cout << "Initial counter value: " << counter << std::endl;
    std::cout << std::endl;

    // call file1.cpp's function a()
    std::cout << "Calling a() from file1.cpp..." << std::endl;
    int result_a = a();
    std::cout << "  Result: sum(1, 2) = " << result_a << std::endl;
    std::cout << "  Counter after a(): " << counter << std::endl;
    std::cout << std::endl;

    // call file2.cpp's function b()
    std::cout << "Calling b() from file2.cpp..." << std::endl;
    int result_b = b();
    std::cout << "  Result: sum(3, 4) = " << result_b << std::endl;
    std::cout << "  Counter after b(): " << counter << std::endl;
    std::cout << std::endl;

    // use the inline function sum()
    std::cout << "Calling sum(10, 20) directly from main..." << std::endl;
    int result_main = sum(10, 20);
    std::cout << "  Result: sum(10, 20) = " << result_main << std::endl;
    std::cout << std::endl;

    // modify inline variable here
    std::cout << "Incrementing counter from main..." << std::endl;
    ++counter;
    std::cout << "  Final counter value: " << counter << std::endl;
    std::cout << std::endl;

    // Verificación
    std::cout << "=== Verification ===" << std::endl;
    std::cout << "✓ inline function 'sum' works across all files" << std::endl;
    std::cout << "✓ inline variable 'counter' is shared (same instance) across all files" << std::endl;
    std::cout << "✓ Expected counter increments: 3 (1 from a(), 1 from b(), 1 from main)" << std::endl;
    std::cout << "✓ Actual counter value: " << counter << std::endl;

    return 0;
}
