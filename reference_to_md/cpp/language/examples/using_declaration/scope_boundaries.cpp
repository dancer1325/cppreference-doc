#include <iostream>

namespace LibA {
    void function() {
        std::cout << "LibA::function()\n";
    }
}

namespace LibB {
    void function() {
        std::cout << "LibB::function()\n";
    }
}

namespace LibC {
    void another() {
        std::cout << "LibC::another()\n";
    }
}

// ============================================
// 1. Block scope
// ============================================
void exampleBlocks() {
    std::cout << "=== Block scope ===\n";

    {
        // 1.1 using-declaration ONLY | this block
        using LibA::function;
        function();  // ✓ LibA::function()
    }

    // 1.2 outside the block, 'function' is NOT available
    // function();      // ✗ ERROR: not declared
    LibA::function();  // -> MUST be qualified

    {
        // 1.3 | DIFFERENT block, can introduce DIFFERENT name
        using LibB::function;
        function();  // ✓ LibB::function()
    }
}

// ============================================
// 2. Function scope vs. global scope
// ============================================

// using-declaration | global scope
using LibC::another;

void functionWithAnotherScope() {
    std::cout << "\n=== Function scope ===\n";

    // 2.1 'another' is available
    //      Reason:🧠it's | global scope🧠
    another();  // ✓ LibC::another()

    // 2.2 introduces 'function' ONLY | this function
    using LibA::function;
    function();  // ✓ LibA::function()
}

void anotherFunction() {
    std::cout << "\n=== Another function ===\n";

    // 'another' is available
    //      Reason: 🧠global scope🧠
    another();  // ✓ LibC::another()

    // 2.2.1 'function' is NOT available
    //      Reason: 🧠it was local -- to -- functionWithAnotherScope🧠
    // function();       // ✗ ERROR: not declared
    LibA::function();  // MUST be qualified
}

// ============================================
// 3. Nested scopes
// ============================================
void nestedExample() {
    std::cout << "\n=== Nested scopes ===\n";

    using LibA::function;
    function();  // ✓ LibA::function()

    {
        // 3.1 Nested scope: 'function' is STILL available
        function();  // ✓ LibA::funcion() (inherited -- from -- outer scope)

        // 3.2 can introduce OTHER names
        using LibC::another;
        another();  // ✓ LibC::another()
    }

    // 3.3 | outside the nested block
    function();  // ✓ Still available
    // another();       // ✗ ERROR: 'another' was local to the nested block
    LibC::another();  // MUST be qualified
}

int main() {
    exampleBlocks();
    functionWithAnotherScope();
    anotherFunction();
    nestedExample();

    std::cout << "\n=== In main ===\n";
    another();  // ✓ Available (declared in global scope)
    // function();  // ✗ ERROR: not declared in main

    return 0;
}
