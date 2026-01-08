#include <iostream>

// PHASE 5: String Literal Concatenation
// Adjacent string literals are automatically concatenated by the compiler

int main() {
    // Automatic string concatenation
    // "Hello, " and "World!" are joined into a single string
    const char* message1 = "Hello, " "World!";
    std::cout << message1 << std::endl;

    // Useful for splitting long strings across multiple lines
    const char* longMessage =
        "This is the first part. "
        "This is the second part. "
        "This is the third part.";
    std::cout << longMessage << std::endl;

    // Concatenation with different string literal types
    const char* mixed = "Normal " "string";
    std::cout << mixed << std::endl;

    // Useful for organizing code (e.g., SQL queries)
    const char* sql =
        "SELECT * "
        "FROM users "
        "WHERE age > 18 "
        "ORDER BY name";
    std::cout << "SQL: " << sql << std::endl;

    return 0;
}
