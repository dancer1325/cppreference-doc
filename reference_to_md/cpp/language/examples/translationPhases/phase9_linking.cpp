#include <iostream>

// PHASE 9: Linking
// The linker combines all object files and resolves external symbols

// External function declaration (defined in another file or library)
// In this simplified example, we define it in the same file
void externalFunction();

// Global variable
int globalCounter = 0;

void increment() {
    globalCounter++;
}

void externalFunction() {
    std::cout << "External function called" << std::endl;
}

int main() {
    std::cout << "=== PHASE 9: Linking ===" << std::endl;

    // The linker resolves the call to externalFunction
    externalFunction();

    // The linker resolves the access to globalCounter
    std::cout << "Initial counter: " << globalCounter << std::endl;

    increment();
    increment();

    std::cout << "Counter after incrementing: " << globalCounter << std::endl;

    // The linker also resolves standard library functions
    std::cout << "Standard library functions are also linked" << std::endl;

    return 0;
}

// Note: In a real project, you would have:
// - file1.cpp with the definition of externalFunction()
// - file2.cpp with main()
// - The linker would combine file1.o + file2.o → executable program
