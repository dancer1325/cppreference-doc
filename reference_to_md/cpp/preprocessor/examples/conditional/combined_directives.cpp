#include <iostream>
using namespace std;

// Define some macros for testing
#define FEATURE_A
// FEATURE_C is NOT defined

int main() {

    // 1. `#ifdef` identifier == `#if defined` identifier
    cout << "1. `#ifdef` identifier == `#if defined` identifier\n";
    // 1.1 `#ifdef` identifier
#ifdef FEATURE_A
    cout << "1.1    #ifdef - FEATURE_A is defined\n";
#endif
    // 1.2 `#if defined` identifier
#if defined FEATURE_A
    cout << "1.2    `#if defined` identifier - FEATURE_A is defined\n\n";
#endif


    // 2. `#ifndef` identifier == `#if !defined` identifier
    cout << "2. `#ifndef` identifier == `#if !defined` identifier\n";
    // 2.1 `#ifndef` identifier
#ifndef FEATURE_C
    cout << "2.1 `#ifndef` identifier - FEATURE_C is NOT defined\n";
#endif
    // 2.2 `#if !defined` identifier
#if !defined FEATURE_C
    cout << "2.2 `#if !defined` identifier - FEATURE_C is NOT defined\n\n";
#endif

    // 3. `#elifdef` identifier == `#elif defined` identifier
    cout << "3. `#elifdef` identifier == `#elif defined` identifier\n";
    // 3.1 `#elifdef` identifier
#ifdef FEATURE_B
#elifdef FEATURE_A
    std::cout << "3.1 `#elifdef` identifier - FEATURE_A is defined\n";
#endif
    // 3.2 `#elif defined` identifier
#ifdef FEATURE_B
#elifdef FEATURE_A
    std::cout << "3.2 `#elif defined` identifier - FEATURE_A is defined\n\n";
#endif

    // 4. `#elifndef` identifier == `#elif !defined` identifier
    cout << "4. `#elifndef` identifier == `#elif !defined` identifier\n";
    // 4.1 `#elifndef` identifier
#ifdef FEATURE_B
#elifndef  FEATURE_C
    std::cout << "4.1 `#elifndef` identifier - FEATURE_C is NOT defined\n";
#endif
    // 4.2 `#elif !defined` identifier
#ifdef FEATURE_B
# elif !defined FEATURE_C
    std::cout << "4.2 `#elif !defined` identifier - FEATURE_C is NOT defined\n\n";
#endif

    return 0;
}
