#include <iostream>

int main() {
    // 1. with Latin letters
    int myVariable = 10;
    // 2. case-sensitive
    int MyVariable = 20;
    int MYVARIABLE = 30;  // MYVARIABLE != MyVariable

    std::cout << "myVariable: " << myVariable << std::endl;
    std::cout << "MyVariable: " << MyVariable << std::endl;
    std::cout << "MYVARIABLE: " << MYVARIABLE << std::endl;

    // 3. with underscores (`_`)
    int my_variable = 40;
    int _private = 50;
    int __double_underscore = 60;

    std::cout << "my_variable: " << my_variable << std::endl;
    std::cout << "_private: " << _private << std::endl;

    // 4. with digits (NEVER as start)
    int var1 = 70;
    int variable123 = 80;
    int var_2_test = 90;
    // int 1var = 100;  // ❌ ERROR: cannot start with digit

    std::cout << "var1: " << var1 << std::endl;
    std::cout << "variable123: " << variable123 << std::endl;

    // 5. arbitrarily long identifiers (every character is significant)
    int thisIsAVeryLongIdentifierNameThatIsStillValidInCppAndEveryCharacterMatter = 110;

    std::cout << "Long identifier 0: " << thisIsAVeryLongIdentifierNameThatIsStillValidInCppAndEveryCharacterMatter << std::endl;

    // 6. MOST Unicode characters are ALLOWED (implementation-dependent)

    // Common Unicode characters / USUALLY work:
    // - Latin extended characters
    // - Greek letters
    // - Some mathematical symbols

    // those / may NOT compile | ALL systems
    // int café = 120;           // Latin extended
    // int α = 130;              // Greek alpha
    // int β = 140;              // Greek beta

    // Unicode / characters are NOT ALLOWED
    // int 你好 = 150;           // ❌ May not work
    // int 😀 = 160;             // ❌ Emojis are NOT allowed
    // int ∑ = 170;              // ❌ Many mathematical symbols are NOT allowed

    // 7. EVERY character is significant
    int temp = 300;
    int temp_ = 310;
    int _temp = 320;
    int temp1 = 330;
    int temp_1 = 340;

    std::cout << "temp: " << temp << std::endl;
    std::cout << "temp_: " << temp_ << std::endl;
    std::cout << "_temp: " << _temp << std::endl;
    std::cout << "temp1: " << temp1 << std::endl;
    std::cout << "temp_1: " << temp_1 << std::endl;

    return 0;
}
