/**
 * ASM-DECLARATION SYNTAX EXAMPLES
 *
 * Two syntaxes:
 * 1. asm ( string-literal ) ;           // | C++26-
 * 2. asm ( balanced-token-seq ) ;       // | C++26
 */

#include <iostream>
using namespace std;

int main() {
    cout << "=== ASM-DECLARATION SYNTAX ===\n\n";

    // ============================================================
    // Syntax 1: asm ( string-literal ) ;
    // ============================================================
    cout << "Syntax 1: asm ( string-literal ) ;\n";

    // Example 1.1: Simple string literal
    asm("nop");
    cout << "  Executed: asm(\"nop\");\n";

    // Example 1.2: Multiple instructions in one string
    asm("nop; nop; nop");
    cout << "  Executed: asm(\"nop; nop; nop\");\n";

    // Example 1.3: Raw string literal (C++11)
    asm(R"(
        nop
        nop
    )");
    cout << "  Executed: asm(R\"(nop nop)\");\n";

    cout << "\n";

    // ============================================================
    // Syntax 2: asm ( balanced-token-seq ) ;
    // ============================================================
    cout << "Syntax 2: asm ( balanced-token-seq ) ;  // C++26\n";
    cout << "  balanced-token-seq = tokens with balanced (), [], {}\n";
    cout << "  (Implementation-defined meaning)\n";

    // Note: This syntax is C++26 and implementation-defined
    // Examples would depend on specific compiler implementation

    cout << "\n=== KEY DIFFERENCES ===\n";
    cout << "1. string-literal: Must be a C++ string (with quotes)\n";
    cout << "2. balanced-token-seq: More flexible, implementation-defined\n";
    cout << "   (allows more complex assembly code structures)\n";

    return 0;
}
