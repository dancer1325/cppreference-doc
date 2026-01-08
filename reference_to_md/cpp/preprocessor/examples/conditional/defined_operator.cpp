/**
 * PREPROCESSOR: defined operator
 *
 * Unary operator forms:
 *   - defined identifier
 *   - defined(identifier)
 *
 * Returns:
 *   - 1 if identifier is defined as a macro
 *   - 0 if identifier is NOT defined
 */

#include <iostream>
using namespace std;

// Define some macros for testing
#define FEATURE_A
#define FEATURE_B 100
// FEATURE_C is NOT defined

int main() {
    cout << "=== Testing 'defined' operator ===\n\n";

    // 1. defined identifier
#if defined FEATURE_A
    cout << "1. FEATURE_A is defined (no parentheses)\n";
#else
    cout << "1. FEATURE_A is NOT defined\n";
#endif

    // 2. defined (identifier)
#if defined(FEATURE_B)
    cout << "2. FEATURE_B is defined (with parentheses)\n";
#else
    cout << "2. FEATURE_B is NOT defined\n";
#endif

    // 2.1 defined (identifier) = 0
#if defined(FEATURE_C)
    cout << "3. FEATURE_C is defined\n";
#else
    cout << "3. FEATURE_C is NOT defined\n";
#endif

    // Example 4: using ! (NOT operator)
#if !defined(FEATURE_C)
    cout << "4. FEATURE_C is NOT defined (using !defined)\n";
#endif

    // Example 5: combining with && (AND)
#if defined(FEATURE_A) && defined(FEATURE_B)
    cout << "5. Both FEATURE_A and FEATURE_B are defined\n";
#endif

    // Example 6: combining with || (OR)
#if defined(FEATURE_A) || defined(FEATURE_C)
    cout << "6. At least one of FEATURE_A or FEATURE_C is defined\n";
#endif

    // Example 7: complex expression
#if defined(FEATURE_A) && !defined(FEATURE_C)
    cout << "7. FEATURE_A is defined AND FEATURE_C is NOT defined\n";
#endif

    // Example 8: comparing with value (note: defined returns 1 or 0)
#if defined(FEATURE_B) && FEATURE_B == 100
    cout << "8. FEATURE_B is defined and equals 100\n";
#endif

    // Equivalences demonstration
    cout << "\n=== Equivalences ===\n";

    // #ifdef is equivalent to #if defined
#ifdef FEATURE_A
    cout << "#ifdef FEATURE_A works\n";
#endif

    // #ifndef is equivalent to #if !defined
#ifndef FEATURE_C
    cout << "#ifndef FEATURE_C works\n";
#endif

    return 0;
}
