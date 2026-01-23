#include <iostream>
#include <string>
#include <typeinfo>

// =============================================================================
// EXAMPLE 1: Simple template - 1 template defines a FAMILY
// =============================================================================

// TEMPLATE function (recipe/blueprint)
template<typename T>
T add(T a, T b) {
    std::cout << "  add<T> instantiated for some type T\n";
    return a + b;
}

// =============================================================================
// EXAMPLE 2: Template / MULTIPLE parameters - BIGGER family
// =============================================================================

template<typename T>
T multiply(T a, T b) {
    return a * b;
}

// =============================================================================
// EXAMPLE 3: Template / shows the type being used
// =============================================================================

template<typename T>
void printType(T value) {
    std::cout << "  printType called with value: " << value << "\n";
}

// =============================================================================
// EXAMPLE 4: Template / 2 type parameters
// =============================================================================

template<typename T1, typename T2>
void printPair(T1 first, T2 second) {
    std::cout << "  Pair: (" << first << ", " << second << ")\n";
}

// =============================================================================
// EXAMPLE 5: Overloaded templates - TWO families
// =============================================================================

// Family #1: process(T)
template<typename T>
void process(T value) {
    std::cout << "  process<T>(T): generic version\n";
}

// Family #2: process(T*)
template<typename T>
void process(T* ptr) {
    std::cout << "  process<T>(T*): pointer version\n";
}

// =============================================================================
// MAIN - Shows the families being generated
// =============================================================================

int main() {
    std::cout << "=== FAMILY 1: add<T> ===\n";

    // FROM 1 template, we get MANY functions:
    std::cout << "1. Calling add(5, 3):\n";
    int r1 = add(5, 3);           // Generates: add<int>(int, int)
    std::cout << "   Result: " << r1 << "\n\n";

    std::cout << "2. Calling add(3.14, 2.71):\n";
    double r2 = add(3.14, 2.71);  // Generates: add<double>(double, double)
    std::cout << "   Result: " << r2 << "\n\n";

    std::cout << "3. Calling add(2.0f, 3.0f):\n";
    float r3 = add(2.0f, 3.0f);   // Generates: add<float>(float, float)
    std::cout << "   Result: " << r3 << "\n\n";

    std::cout << "Summary: ONE template 'add<T>' created 3 DIFFERENT functions!\n";
    std::cout << "  - add<int>(int, int)\n";
    std::cout << "  - add<double>(double, double)\n";
    std::cout << "  - add<float>(float, float)\n";
    std::cout << "This is the FAMILY defined by the template.\n\n";

    std::cout << "=== FAMILY 2: multiply<T> ===\n";
    std::cout << "multiply(10, 20) = " << multiply(10, 20) << "\n";        // multiply<int>
    std::cout << "multiply(1.5, 2.0) = " << multiply(1.5, 2.0) << "\n";    // multiply<double>
    std::cout << "multiply(3L, 4L) = " << multiply(3L, 4L) << "\n\n";      // multiply<long>

    std::cout << "=== FAMILY 3: printType<T> ===\n";
    printType(42);                    // printType<int>
    printType(3.14);                  // printType<double>
    printType("Hello");               // printType<const char*>
    printType(std::string("World"));  // printType<std::string>
    printType('A');                   // printType<char>
    std::cout << "ONE template generated 5 different functions!\n\n";

    std::cout << "=== FAMILY 4: printPair<T1, T2> ===\n";
    printPair(10, 20);                // printPair<int, int>
    printPair(3.14, "pi");            // printPair<double, const char*>
    printPair("Name", 42);            // printPair<const char*, int>
    printPair(true, 3.14);            // printPair<bool, double>
    std::cout << "Template with TWO type parameters = even BIGGER family!\n\n";

    std::cout << "=== FAMILIES 5 & 6: Overloaded templates ===\n";
    int x = 10;
    process(x);     // Calls family #1: process<int>(int)
    process(&x);    // Calls family #2: process<int>(int*)

    double y = 3.14;
    process(y);     // Calls family #1: process<double>(double)
    process(&y);    // Calls family #2: process<double>(double*)
    std::cout << "TWO template families, each can generate infinite members!\n\n";

    std::cout << "=== VISUALIZATION ===\n";
    std::cout << "\n";
    std::cout << "Template (Blueprint):          Generated Family:\n";
    std::cout << "┌───────────────────┐          ┌──────────────────────────┐\n";
    std::cout << "│ template<class T> │          │ add<int>(int, int)       │\n";
    std::cout << "│ T add(T a, T b)   │  ═════►  │ add<double>(double, ..)  │\n";
    std::cout << "│ { return a+b; }   │          │ add<float>(float, ..)    │\n";
    std::cout << "└───────────────────┘          │ add<long>(long, ..)      │\n";
    std::cout << "                               │ ... infinite more ...    │\n";
    std::cout << "                               └──────────────────────────┘\n";
    std::cout << "\n";

    std::cout << "=== KEY CONCEPTS ===\n";
    std::cout << "1. Template = Blueprint/Recipe (NOT a function)\n";
    std::cout << "2. Instantiation = Creating a specific function from template\n";
    std::cout << "3. Family = All possible functions that CAN be generated\n";
    std::cout << "4. ONE template can generate INFINITE functions\n";
    std::cout << "5. Each unique type argument creates a NEW function\n";
    std::cout << "\n";

    std::cout << "=== ANALOGY ===\n";
    std::cout << "Template is like a cookie cutter (shape)\n";
    std::cout << "Instantiated functions are like actual cookies\n";
    std::cout << "The family is all possible cookies you COULD make\n";
    std::cout << "You only bake (instantiate) the cookies you need\n";

    return 0;
}

/*
DETAILED EXPLANATION:

1. WHAT IS A TEMPLATE?
   - NOT a function
   - A pattern/blueprint/recipe
   - Tells compiler HOW to generate functions

2. WHAT IS INSTANTIATION?
   When you call add(5, 3):
   - Compiler sees you need add<int>
   - Looks for existing add<int>
   - If not found, GENERATES it from template
   - This is called "instantiation"

3. WHAT IS A FAMILY?
   - All possible functions that COULD be generated
   - From template<T> T add(T,T), you get:
     * add<int>(int,int)
     * add<double>(double,double)
     * add<float>(float,float)
     * add<char>(char,char)
     * ... and infinitely more
   - These are all MEMBERS of the add<T> family

4. HOW MANY FAMILIES IN THIS FILE?
   - add<T>           → Family #1
   - multiply<T>      → Family #2
   - printType<T>     → Family #3
   - printPair<T1,T2> → Family #4 (bigger: two parameters!)
   - process<T>(T)    → Family #5
   - process<T>(T*)   → Family #6

5. WHEN ARE FUNCTIONS CREATED?
   - NOT at template definition
   - ONLY when you use them (lazy instantiation)
   - Each unique type creates ONE new function
   - If you call add(5,3) twice, only ONE add<int> is created

6. WHY IS THIS USEFUL?
   - Write code ONCE, works for ALL types
   - Type-safe (unlike void* in C)
   - No runtime overhead (generated at compile time)
   - Code reuse without copy-paste

COMPILE AND RUN:
    g++ -std=c++17 family.cpp -o family && ./family
*/
