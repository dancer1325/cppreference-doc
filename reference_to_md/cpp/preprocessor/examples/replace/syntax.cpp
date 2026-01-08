#include <iostream>
#include <string>
using namespace std;

// ============================================================================
// (1) Object-like macros: #define identifier replacement-list
// ============================================================================

#define PI 3.14159
#define MAX_SIZE 100
#define VERSION "1.0.0"
#define EMPTY              // replacement-list is optional (empty)

void example1_object_like() {
    cout << "\n=== (1) Object-like macros ===\n";
    cout << "PI = " << PI << "\n";
    cout << "MAX_SIZE = " << MAX_SIZE << "\n";
    cout << "VERSION = " << VERSION << "\n";
    // EMPTY expands to nothing
}

// ============================================================================
// (2) Function-like macros: #define identifier(parameters) replacement-list
// ============================================================================

#define SQUARE(x) ((x) * (x))
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define MIN(a, b) ((a) < (b) ? (a) : (b))

void example2_function_like() {
    cout << "\n=== (2) Function-like macros ===\n";
    cout << "SQUARE(5) = " << SQUARE(5) << "\n";           // 25
    cout << "MAX(10, 20) = " << MAX(10, 20) << "\n";       // 20
    cout << "MIN(10, 20) = " << MIN(10, 20) << "\n";       // 10
}

// ============================================================================
// (3) Variadic macros: #define identifier(parameters, ...) replacement-list
//     C++11 - variable number of arguments
// ============================================================================

#define PRINT_NUMS(first, ...) \
    cout << "First: " << first << ", Rest: " << #__VA_ARGS__ << "\n"

#define LOG(level, msg) \
    cout << "[" << level << "] " << msg << "\n"

void example3_variadic_with_params() {
    cout << "\n=== (3) Variadic macros (parameters, ...) ===\n";
    PRINT_NUMS(1, 2, 3, 4);
    LOG("INFO", "Server started");
    LOG("ERROR", "Connection failed");
}

// ============================================================================
// (4) Variadic macros: #define identifier(...) replacement-list
//     C++11 - only variadic arguments, no fixed parameters
// ============================================================================

#define PRINT_ALL(...) \
    cout << "Arguments: " << #__VA_ARGS__ << "\n"

#define DEBUG(msg) \
    cout << "[DEBUG] " << msg << "\n"

void example4_variadic_only() {
    cout << "\n=== (4) Variadic macros (...) only ===\n";
    PRINT_ALL(1, 2, 3);
    PRINT_ALL("hello", "world");
    DEBUG("Some debug message");
}

// ============================================================================
// (5) #undef directive
// ============================================================================

#define TEMP_VALUE 999

void example5_undef() {
    cout << "\n=== (5) #undef directive ===\n";
    cout << "TEMP_VALUE before undef: " << TEMP_VALUE << "\n";

#undef TEMP_VALUE
    // TEMP_VALUE is now undefined, cannot use it anymore
    // cout << TEMP_VALUE;  // ERROR: TEMP_VALUE not defined

    cout << "TEMP_VALUE has been undefined\n";
}

// ============================================================================
// OPERATORS: # (stringification) and ## (token pasting)
// ============================================================================

// # operator: converts parameter to string
#define STRINGIFY(x) #x
#define TO_STRING(x) STRINGIFY(x)

// ## operator: concatenates tokens
#define CONCAT(a, b) a##b
#define VAR_NAME(prefix, suffix) prefix##_##suffix

void example6_operators() {
    cout << "\n=== # operator (stringification) ===\n";
    cout << STRINGIFY(hello world) << "\n";    // "hello world"
    cout << TO_STRING(100) << "\n";            // "100"

    cout << "\n=== ## operator (token pasting) ===\n";
    int value_123 = 456;
    cout << "CONCAT(value_, 123) = " << CONCAT(value_, 123) << "\n";  // 456

    int my_variable = 789;
    cout << "VAR_NAME(my, variable) = " << VAR_NAME(my, variable) << "\n";  // 789
}

// ============================================================================
// C++20: __VA_OPT__
// ============================================================================

#if __cplusplus >= 202002L
#define LOG_WITH_COMMA(msg, ...) \
    cout << msg __VA_OPT__(,) __VA_ARGS__ << "\n"

void example7_va_opt() {
    cout << "\n=== C++20: __VA_OPT__ ===\n";
    LOG_WITH_COMMA("Message");              // No comma if no args
    LOG_WITH_COMMA("Message", " extra");    // Comma if args present
}
#endif

// ============================================================================
// Scanning and Replacement example
// ============================================================================

#define EXAMPLE_SCAN 42
#define USE_EXAMPLE EXAMPLE_SCAN

void example8_scanning() {
    cout << "\n=== Scanning and Replacement ===\n";
    cout << "USE_EXAMPLE = " << USE_EXAMPLE << "\n";  // 42
    // Macro expansion: USE_EXAMPLE -> EXAMPLE_SCAN -> 42
}

// ============================================================================
// MAIN
// ============================================================================

int main() {
    cout << "=================================================\n";
    cout << "  #define SYNTAX EXAMPLES\n";
    cout << "=================================================\n";

    example1_object_like();
    example2_function_like();
    example3_variadic_with_params();
    example4_variadic_only();
    example5_undef();
    example6_operators();

#if __cplusplus >= 202002L
    example7_va_opt();
#else
    cout << "\n=== C++20: __VA_OPT__ ===\n";
    cout << "(Requires C++20 or later)\n";
#endif

    example8_scanning();

    cout << "\n=================================================\n";
    cout << "Summary:\n";
    cout << "(1) Object-like: #define NAME value\n";
    cout << "(2) Function-like: #define NAME(params) replacement\n";
    cout << "(3) Variadic: #define NAME(params, ...) __VA_ARGS__\n";
    cout << "(4) Variadic only: #define NAME(...) __VA_ARGS__\n";
    cout << "(5) Undefine: #undef NAME\n";
    cout << "Operators: # (stringify), ## (concatenate)\n";
    cout << "=================================================\n";

    return 0;
}
