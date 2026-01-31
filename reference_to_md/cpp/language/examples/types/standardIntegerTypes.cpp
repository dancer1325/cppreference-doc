#include <iostream>
#include <limits>
#include <climits>

// 1. `int`
// 1.1 basic integer type
void example_1_1_basic_integer_type() {
    int x = 42;
    int y = -100;
    int z = 0;

    std::cout << "=== 1.1: int == basic integer type ===\n";
    std::cout << "x = " << x << "\n";
    std::cout << "y = " << y << "\n";
    std::cout << "z = " << z << "\n";

    // MOST common used type | integer operations
    int sum = x + y;
    int product = x * 2;
    std::cout << "sum = " << sum << "\n";
    std::cout << "product = " << product << "\n";
}

// 1.2 if you use some modifier -> `int` may be omitted
void example_1_2_int_omitted() {
    std::cout << "\n=== 1.2: 'int' keyword may be omitted -- via -- modifiers ===\n";

    // ✅ With modifiers, 'int' can be omitted

    // Signedness modifiers
    signed x1 = 10;           // == signed int
    unsigned y1 = 20;         // == unsigned int
    std::cout << "signed x1 = " << x1 << " (type: signed int)\n";
    std::cout << "unsigned y1 = " << y1 << " (type: unsigned int)\n";

    // Size modifiers
    short x2 = 100;           // == short int
    long x3 = 100000;         // == long int
    long long x4 = 10000000000LL; // == long long int
    std::cout << "short x2 = " << x2 << " (type: short int)\n";
    std::cout << "long x3 = " << x3 << " (type: long int)\n";
    std::cout << "long long x4 = " << x4 << " (type: long long int)\n";

    // Combined: size + signedness (int still omitted)
    unsigned short x5 = 50;   // == unsigned short int
    unsigned long x6 = 99999; // == unsigned long int
    signed long x7 = -50000;  // == signed long int
    std::cout << "unsigned short x5 = " << x5 << " (type: unsigned short int)\n";
    std::cout << "unsigned long x6 = " << x6 << " (type: unsigned long int)\n";
    std::cout << "signed long x7 = " << x7 << " (type: signed long int)\n";

    // ❌ Without modifiers, 'int' CANNOT be omitted
    // x = 42;  // ERROR: no type specified
}

// 1.3 if there is NO length modifiers -> 's width >= 16 bits
void example_1_3_width_no_length_modifier() {
    std::cout << "\n=== 1.3: int (NO size modifiers) -> width >= 16 bits ===\n";

    // int without length modifiers (short, long, long long)
    int x = 100;
    signed int y = -200;
    unsigned int z = 300;

    std::cout << "sizeof(int) = " << sizeof(int) << " bytes = "
              << (sizeof(int) * 8) << " bits\n";
    std::cout << "sizeof(signed int) = " << sizeof(signed int) << " bytes\n";
    std::cout << "sizeof(unsigned int) = " << sizeof(unsigned int) << " bytes\n";

    // C++ standard guarantees: width >= 16 bits
    std::cout << "\nC++ standard guarantee: width >= 16 bits\n";
    std::cout << "int min value: " << INT_MIN << "\n";
    std::cout << "int max value: " << INT_MAX << "\n";
    std::cout << "unsigned int max value: " << UINT_MAX << "\n";
    // let's have N bits
    // | signed,
    //      's range: [-2^(N-1), 2^(N-1) - 1 ]
    // | unsigned,
    //      's range: [0, 2^N - 1 ]
    // 16 bits
    //     min signed: -32,768
    //     max signed: 32,767
    //     unsigned max: 65,535
    // 32 bits
    //     min signed: -2,147,483,648
    //     max signed: 2,147,483,647
    //     unsigned max: 4,294,967,295

    // Using numeric_limits
    std::cout << "\nUsing std::numeric_limits:\n";
    std::cout << "int bits: " << std::numeric_limits<int>::digits + 1 << " (including sign bit)\n";
    std::cout << "unsigned int bits: " << std::numeric_limits<unsigned int>::digits << "\n";
}

// 1.3.1 | 32/64 bit systems, 's width >= 32 bits
void example_1_3_1_modern_systems() {
    std::cout << "\n=== 1.3.1: Modern 32/64-bit systems -> int width >= 32 bits ===\n";

    std::cout << "Actual sizeof(int) on this system: " << sizeof(int) << " bytes = "
              << (sizeof(int) * 8) << " bits\n";

    // This is typically 32 bits on modern systems
    if (sizeof(int) >= 4) {
        std::cout << "✅ This is a modern 32/64-bit system (int >= 32 bits)\n";
    } else {
        std::cout << "⚠️ This appears to be an older 16-bit system\n";
    }
}

// 2. Modifiers
void example_2_modifiers() {
    std::cout << "\n=== 2. Modifiers ===\n";

    // 2.0 allows: modifying int
    std::cout << "\n2.0 Modifiers allow modifying the int type:\n";

    // Base type: int
    int base = 100;
    std::cout << "int: size = " << sizeof(base) << " bytes, signed = "
              << std::numeric_limits<int>::is_signed << "\n";

    // Modified with signedness
    unsigned int modified_sign = 100;
    std::cout << "unsigned int: size = " << sizeof(modified_sign) << " bytes, signed = "
              << std::numeric_limits<unsigned int>::is_signed << "\n";

    // Modified with size
    short int modified_size = 100;
    std::cout << "short int: size = " << sizeof(modified_size) << " bytes\n";

    // Modified with both
    unsigned long int modified_both = 100;
    std::cout << "unsigned long int: size = " << sizeof(modified_both)
              << " bytes, signed = " << std::numeric_limits<unsigned long int>::is_signed << "\n";

    std::cout << "✅ Modifiers change properties: signedness and/or size\n";

    // 2.1 ALLOWED | ANY order
    std::cout << "\n2.1 Combining modifiers (any order allowed):\n";
    unsigned long ul1 = 1000;
    long unsigned ul2 = 1000; // Same as above
    std::cout << "unsigned long == long unsigned: " << (sizeof(ul1) == sizeof(ul2)) << "\n";

    signed short int ssi1 = -50;
    short signed int ssi2 = -50;
    int signed short ssi3 = -50; // All equivalent
    std::cout << "All three 'signed short int' variants are equivalent\n";

    // 2.2 1 of EACH group | type name (only ONE modifier from EACH group)
    std::cout << "\n2.2 Only ONE modifier from EACH group per type:\n";

    // ✅ VALID: one from each group
    unsigned long valid1 = 100;        // 1 signedness (unsigned) + 1 size (long)
    signed short valid2 = 50;          // 1 signedness (signed) + 1 size (short)
    long valid3 = 200;                 // 1 size (long), default signedness (signed)
    unsigned valid4 = 75;              // 1 signedness (unsigned), default size (int)
    std::cout << "✅ Valid combinations:\n";
    std::cout << "  unsigned long (1 sign + 1 size)\n";
    std::cout << "  signed short (1 sign + 1 size)\n";
    std::cout << "  long (1 size, default sign)\n";
    std::cout << "  unsigned (1 sign, default size)\n";

    // ❌ INVALID: multiple from same group
    std::cout << "\n❌ Invalid combinations (compile errors):\n";
    std::cout << "  // signed unsigned int x;     // ERROR: 2 signedness modifiers\n";
    std::cout << "  // short long int y;          // ERROR: 2 size modifiers\n";
    std::cout << "  // long short int z;          // ERROR: 2 size modifiers\n";
    std::cout << "  // unsigned signed w;         // ERROR: 2 signedness modifiers\n";

    // Exception: long long is a SINGLE modifier (not two "long"s)
    long long valid_longlong = 1000000;
    std::cout << "\n✅ Exception: 'long long' is a SINGLE size modifier (C++11)\n";
    std::cout << "  long long valid_longlong = " << valid_longlong << "\n";

    // Groups summary
    std::cout << "\nGroups:\n";
    std::cout << "  Signedness group: { signed, unsigned }\n";
    std::cout << "  Size group: { short, long, long long }\n";
    std::cout << "Rule: Pick at most ONE from EACH group\n";

    // 2.3 built-in groups
    // 2.3.1 Signedness
    std::cout << "\n2.3.1 Signedness modifiers:\n";
    signed int s = -42;       // Can be negative
    unsigned int u = 42;      // Only non-negative
    std::cout << "signed int: " << s << " (range: " << INT_MIN << " to " << INT_MAX << ")\n";
    std::cout << "unsigned int: " << u << " (range: 0 to " << UINT_MAX << ")\n";

    // 2.3.2 Size modifiers
    std::cout << "\n2.3.2 Size modifiers:\n";
    short sh = 100;           // At least 16 bits
    int i = 100;              // At least 16 bits (typically 32)
    long l = 100;             // At least 32 bits
    long long ll = 100;       // At least 64 bits

    std::cout << "short: " << sizeof(short) << " bytes (" << (sizeof(short) * 8) << " bits)\n";
    std::cout << "int: " << sizeof(int) << " bytes (" << (sizeof(int) * 8) << " bits)\n";
    std::cout << "long: " << sizeof(long) << " bytes (" << (sizeof(long) * 8) << " bits)\n";
    std::cout << "long long: " << sizeof(long long) << " bytes (" << (sizeof(long long) * 8) << " bits)\n";
}

// 3. Properties
void example_3_properties() {
    std::cout << "\n=== 3. Properties of standard integer types ===\n";

    // 3.1 Size guarantees
    std::cout << "\n3.1 Size guarantees (C++ standard):\n";
    std::cout << "sizeof(char) <= sizeof(short) <= sizeof(int) <= sizeof(long) <= sizeof(long long)\n";
    std::cout << "Actual: " << sizeof(char) << " <= " << sizeof(short) << " <= "
              << sizeof(int) << " <= " << sizeof(long) << " <= " << sizeof(long long) << "\n";

    // Verify: 1 == sizeof(char) ≤ sizeof(short) ≤ sizeof(int) ≤ sizeof(long) ≤ sizeof(long long)
    bool valid = (sizeof(char) == 1) &&
                 (sizeof(char) <= sizeof(short)) &&
                 (sizeof(short) <= sizeof(int)) &&
                 (sizeof(int) <= sizeof(long)) &&
                 (sizeof(long) <= sizeof(long long));
    std::cout << "✅ Size ordering is correct: " << (valid ? "YES" : "NO") << "\n";

    // 3.2 Minimum widths
    std::cout << "\n3.2 Minimum width guarantees:\n";
    std::cout << "char: at least 8 bits (actual: " << (CHAR_BIT) << " bits)\n";
    std::cout << "short: at least 16 bits (actual: " << (sizeof(short) * 8) << " bits)\n";
    std::cout << "int: at least 16 bits (actual: " << (sizeof(int) * 8) << " bits)\n";
    std::cout << "long: at least 32 bits (actual: " << (sizeof(long) * 8) << " bits)\n";
    std::cout << "long long: at least 64 bits (actual: " << (sizeof(long long) * 8) << " bits)\n";

    // 3.3 Signedness
    std::cout << "\n3.3 Signedness:\n";
    std::cout << "signed char is signed: " << std::numeric_limits<signed char>::is_signed << "\n";
    std::cout << "unsigned char is signed: " << std::numeric_limits<unsigned char>::is_signed << "\n";
    std::cout << "char is signed: " << std::numeric_limits<char>::is_signed
              << " (implementation-defined)\n";
    std::cout << "int is signed: " << std::numeric_limits<int>::is_signed << " (default)\n";

    // 3.4 Value ranges
    std::cout << "\n3.4 Value ranges on this system:\n";
    std::cout << "signed char: [" << (int)SCHAR_MIN << ", " << (int)SCHAR_MAX << "]\n";
    std::cout << "unsigned char: [0, " << (int)UCHAR_MAX << "]\n";
    std::cout << "short: [" << SHRT_MIN << ", " << SHRT_MAX << "]\n";
    std::cout << "unsigned short: [0, " << USHRT_MAX << "]\n";
    std::cout << "int: [" << INT_MIN << ", " << INT_MAX << "]\n";
    std::cout << "unsigned int: [0, " << UINT_MAX << "]\n";
    std::cout << "long: [" << LONG_MIN << ", " << LONG_MAX << "]\n";
    std::cout << "unsigned long: [0, " << ULONG_MAX << "]\n";
    std::cout << "long long: [" << LLONG_MIN << ", " << LLONG_MAX << "]\n";
    std::cout << "unsigned long long: [0, " << ULLONG_MAX << "]\n";

    // 3.5 Data models
    std::cout << "\n3.5 Detecting data model:\n";
    if (sizeof(int) == 2 && sizeof(long) == 4 && sizeof(void*) == 4) {
        std::cout << "Data model: LP32 (16-bit int, 32-bit long/pointer)\n";
    } else if (sizeof(int) == 4 && sizeof(long) == 4 && sizeof(void*) == 4) {
        std::cout << "Data model: ILP32 (32-bit int/long/pointer) - Common on 32-bit systems\n";
    } else if (sizeof(int) == 4 && sizeof(long) == 4 && sizeof(void*) == 8) {
        std::cout << "Data model: LLP64 (32-bit int/long, 64-bit pointer) - Windows 64-bit\n";
    } else if (sizeof(int) == 4 && sizeof(long) == 8 && sizeof(void*) == 8) {
        std::cout << "Data model: LP64 (32-bit int, 64-bit long/pointer) - Unix/Linux 64-bit\n";
    } else {
        std::cout << "Data model: Unknown or custom\n";
    }
}

int main() {
    example_1_1_basic_integer_type();
    example_1_2_int_omitted();
    example_1_3_width_no_length_modifier();
    example_1_3_1_modern_systems();
    example_2_modifiers();
    example_3_properties();

    return 0;
}