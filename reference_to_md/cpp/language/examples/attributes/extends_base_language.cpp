// Code
//      WITHOUT attributes: valid
//      WITH attributes: add capabilities

#include <iostream>
#include <memory>
#include <string>

// ============================================================================
// 1. | functions
// 1.1 BASE LANGUAGE
// ============================================================================

void baseLanguageFunction() {
    std::cout << "Basic function without attributes\n";
}

// ============================================================================
// 1.2 EXTENDED: function + behavior metadata
// ============================================================================

[[nodiscard]] int extendedFunction() {
    return 42;
    // if you ignore the return value -> compiler NOW warns
}

// ============================================================================
// 2. Basic control flow
// 2.1 BASE LANGUAGE:
// ============================================================================

int baseLanguageSwitch(int x) {
    switch(x) {
        case 1:
            std::cout << "one\n";
            // Without attribute: compiler may warn about fallthrough
        case 2:
            std::cout << "two\n";
            break;
        default:
            return 0;
    }
    return 0;
}

// ============================================================================
// 2.2 EXTENDED: Basic Control Flow + behavior metadata
// ============================================================================

int extendedSwitch(int x) {
    switch(x) {
        case 1:
            std::cout << "one\n";
            [[fallthrough]];  // EXTENDS: documents intention, suppresses warning
        case 2:
            std::cout << "two\n";
            break;
        default:
            return 0;
    }
    return 0;
}


// ============================================================================
// 3. Variables
// 3.1 BASE LANGUAGE:
// ============================================================================

void baseLanguageVariables() {
    int temporaryValue = 42;
    // Compiler may warn about unused variable
}

// ============================================================================
// 3.2. EXTENDED: variable + warning suppression
// ============================================================================

void extendedVariables() {
    [[maybe_unused]] int temporaryValue = 42;
    // EXTENDS: indicates it's intentional that it may not be used
}

// ============================================================================
// 4. TYPES
// ============================================================================

// 4.1 struct
// 4.1.1 extend
struct [[nodiscard]] Result {
    bool success;
    std::string message;
};
// 4.1.2 layout optimization
struct Empty { };
// 4.1.2.1 Base
struct BaseLanguageStruct {
    int x;
    Empty e;  // Takes space
    int y;
};
// 4.1.2.2 Extend
struct ExtendedStruct {
    int x;
    [[no_unique_address]] Empty e;  // EXTENDS: may take 0 bytes
    int y;
};

// 4.2 class
// 4.2.1 Base language
class NewAPI {
public:
    void doSomething() { std::cout << "New API\n"; }
};
// 4.2.2 Extend
class [[deprecated("Use NewAPI instead")]] OldAPI {
public:
    void doSomething() { std::cout << "Old API\n"; }
};

// 4.3 enum
enum class [[nodiscard]] ErrorCode {
    Success,
    Failure,
    Timeout
};

// ============================================================================
// 5. NAMES
// ============================================================================

// 5.1 function name
[[deprecated("Use newAPI() instead")]]
void oldAPI() {
    std::cout << "Old API function\n";
}

void oldAPIExtended() {
    std::cout << "Extended API function\n";
}

// 5.2 parameter name
void processWithDebug([[maybe_unused]] int debugLevel, int value) {
    // debugLevel is intentionally unused in release builds
    std::cout << "Processing value: " << value << "\n";
}

// ============================================================================
// 6. ATTRIBUTES ON CODE BLOCKS
// ============================================================================

// 6.1 if/else blocks
// 6.1.1 base
void baseLanguageBranching(int x) {
    if (x > 0) {
        std::cout << "positive\n";
    } else {
        std::cout << "not positive\n";
    }
}
// 6.1.2 extend
void extendedBranching(int x) {
    if (x > 0) [[likely]] {  // EXTENDS: attribute on code block
        std::cout << "positive (likely)\n";
    } else [[unlikely]] {    // EXTENDS: attribute on code block
        std::cout << "not positive (unlikely)\n";
    }
}

// 6.2 loop blocks
void loopWithAttributes() {
    for (int i = 0; i < 5; ++i) [[likely]] {  // EXTENDS: attribute on loop block
        std::cout << i << " ";
    }
    std::cout << "\n";
}

// 6.3 compound statement blocks
void compoundBlockExample() {
    {  // compound statement (code block)
        [[maybe_unused]] int scopedVar = 42;
        std::cout << "Inside compound block\n";
    }
}

// ============================================================================
// 7. ATTRIBUTES ON TRANSLATION UNITS
// ============================================================================
// TODO: check
// Translation unit attributes typically appear at file scope
// Example: [[gnu::visibility("default")]] for shared libraries
// Most are implementation-specific (gnu::, msvc::, etc.)

// ============================================================================
// 8. Base language works WITHOUT attributes
// ============================================================================

void demonstrateBaseLanguage() {
    std::cout << "\n=== BASE LANGUAGE (Without attributes) ===\n";
    baseLanguageFunction();
    baseLanguageSwitch(1);
    baseLanguageBranching(5);
    oldAPI();

    std::cout << "\nSize of BaseLanguageStruct: "
              << sizeof(BaseLanguageStruct) << " bytes\n";
}

// ============================================================================
// 9. Attributes ADD capabilities
// ============================================================================

void demonstrateExtendedLanguage() {
    std::cout << "\n=== EXTENDED LANGUAGE (With attributes) ===\n";

    int result = extendedFunction();  // [[nodiscard]] forces using the value
    // std::cout << "Result: " << result << "\n";   // uncomment to fix the warning

    extendedSwitch(1);                // [[fallthrough]] documents intention
    extendedBranching(5);             // [[likely]] optimizes performance
    // oldAPIExtended();              // [[deprecated]] generates warning

    std::cout << "Size of ExtendedStruct: "
              << sizeof(ExtendedStruct) << " bytes\n";
    std::cout << "(no_unique_address can reduce size)\n";
}

// ============================================================================
// 10. Demonstrate attribute usage contexts
// ============================================================================

void demonstrateAttributeContexts() {
    std::cout << "\n=== ATTRIBUTES IN DIFFERENT CONTEXTS ===\n";

    // TYPES
    std::cout << "\n1. Attributes on TYPES:\n";
    Result r{true, "Operation completed"};
    std::cout << "   Result struct with [[nodiscard]]: " << r.message << "\n";

    ErrorCode err = ErrorCode::Success;
    std::cout << "   ErrorCode enum with [[nodiscard]]\n";

    std::cout << "   BaseLanguageStruct size: " << sizeof(BaseLanguageStruct) << " bytes\n";
    std::cout << "   ExtendedStruct size: " << sizeof(ExtendedStruct) << " bytes\n";
    std::cout << "   (no_unique_address optimization)\n";

    // NAMES
    std::cout << "\n2. Attributes on NAMES:\n";
    std::cout << "   Function with [[deprecated]]: oldAPI()\n";
    // oldAPI();  // Uncomment to see deprecation warning

    std::cout << "   Parameter with [[maybe_unused]]:\n";
    processWithDebug(3, 100);

    // CODE BLOCKS
    std::cout << "\n3. Attributes on CODE BLOCKS:\n";
    std::cout << "   If/else with [[likely]]/[[unlikely]]:\n";
    extendedBranching(10);

    std::cout << "   Loop with [[likely]]:\n";
    loopWithAttributes();

    std::cout << "   Compound statement:\n";
    compoundBlockExample();

    // TRANSLATION UNITS
    std::cout << "\n4. Attributes on TRANSLATION UNITS:\n";
    std::cout << "   File-scope attributes (implementation-specific)\n";
    std::cout << "   Example: [[gnu::visibility(\"default\")]]\n";
}

int main() {
    // Base language vs Extended language
    demonstrateBaseLanguage();
    demonstrateExtendedLanguage();

    std::cout << "\n=== CONCLUSION ===\n";
    std::cout << "Attributes EXTEND because:\n";
    std::cout << "1. They are OPTIONAL - base code works without them\n";
    std::cout << "2. They ADD metadata - information base language can't express\n";
    std::cout << "3. They are NOT invasive - can be removed without breaking code\n";
    std::cout << "4. They allow EVOLUTION - new capabilities without changing core syntax\n";

    return 0;
}
