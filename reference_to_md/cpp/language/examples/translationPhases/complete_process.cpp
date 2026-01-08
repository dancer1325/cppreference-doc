#include <iostream>

// ============================================
// COMPLETE TRANSLATION PROCESS
// From source file to executable program
// ============================================

#define VERSION "1.0"
#define SQUARE(x) ((x) * (x))

// Template (Phase 7: instantiation)
template<typename T>
T multiply(T a, T b) {
    return a * b;
}

// External function (Phase 9: linking)
void printHeader() {
    std::cout << "==================================" << std::endl;
    std::cout << "  C++ Translation Process  " << std::endl;
    std::cout << "  Version: " VERSION << std::endl;
    std::cout << "==================================" << std::endl;
}

int main() {
    printHeader();

    // Phase 3: Preprocessing (macros expanded)
    int num = 5;
    int squared = SQUARE(num);
    std::cout << "SQUARE(" << num << ") = " << squared << std::endl;

    // Phase 5: String concatenation
    const char* message = "Hello, " "C++ " "World!";
    std::cout << message << std::endl;

    // Phase 7: Template instantiation
    int result1 = multiply(3, 4);        // instantiates multiply<int>
    double result2 = multiply(2.5, 3.0); // instantiates multiply<double>

    std::cout << "3 * 4 = " << result1 << std::endl;
    std::cout << "2.5 * 3.0 = " << result2 << std::endl;

    // Phase 9: Linking (std::cout comes from the standard library)
    std::cout << "\nProgram executed successfully!" << std::endl;

    return 0;
}

/*
SUMMARY OF THE 9 PHASES:

1. Physical source file → basic source character set
2. Line splicing (backslash at end of line)
3. Tokenization and preprocessing (#include, #define, etc)
4. Character and string literals processing
5. String literal concatenation
6. Translation (parsing, semantic analysis)
7. Template instantiation
8. Instantiation of necessary entities
9. Linking (combines object files, resolves symbols)

Typical compilation commands:
g++ -E  source.cpp -o preprocessed.ii   (up to phase 3)
g++ -S  source.cpp -o assembly.s        (up to phase 6)
g++ -c  source.cpp -o object.o          (up to phase 8)
g++     source.cpp -o executable        (all phases)
*/
