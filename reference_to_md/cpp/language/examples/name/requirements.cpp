#include <iostream>

int main() {
    // 1. MUST conform to Normalization Form C
    // Unicode characters must be normalized to NFC form
    int café = 42;        // Valid: é | NFC form (U+00E9)
    // int café = 42;     // Invalid: é -- as -- e + combining acute (U+0065 U+0301)


    // 2. First character MUST be one of:
    // 2.1 Uppercase Latin letters A-Z
    int Variable = 1;
    
    // 2.2 Lowercase Latin letters a-z
    int variable = 2;
    
    // 2.3 Underscore
    int _private = 3;
    
    // 2.4 Unicode characters / XID_Start property
    int α = 4;           // Greek alpha (U+03B1)
    int 变量 = 5;        // Chinese characters
    int переменная = 6;  // Cyrillic characters

    // INVALID
    // int 123var;       // digit


    // 3. Any other character MUST be one of:
    // 3.1 Digits 0-9
    int var123 = 7;
    
    // 3.2 Uppercase/lowercase Latin letters A-Z, a-z
    int myVariable = 8;
    
    // 3.3 Underscore
    int my_variable = 9;
    
    // 3.4 Unicode characters / XID_Continue property
    int α1β2 = 10;       // Greek letters + digits
    int 变量1 = 11;      // Chinese + digit
    int var_α_1 = 12;    // Mixed Latin, Greek, underscore, digit
    
    // INVALID
    // int var-name;     // -
    // int var space;    // Space
    // int var@name;     // @ symbol
    
    std::cout << "All valid identifiers defined\n";
    return 0;
}
