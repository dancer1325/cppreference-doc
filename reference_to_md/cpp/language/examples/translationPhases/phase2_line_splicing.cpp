#include <iostream>

// PHASE 2: Line Splicing
// Backslash at end of line combines multiple physical lines into one logical line

int main() {
    // Normal single line
    int sum = 1 + 2 + 3;

    // Line split with backslash (line splicing)
    // The compiler joins these 3 physical lines into 1 logical line
    int total = 10 + \
                20 + \
                30;

    std::cout << "Sum: " << sum << std::endl;
    std::cout << "Total (joined lines): " << total << std::endl;

    // Also works with string literals
    const char* message = "This is a very long message \
that spans across \
multiple physical lines";

    std::cout << message << std::endl;

    return 0;
}
