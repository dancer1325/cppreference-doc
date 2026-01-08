/**
 * SEQUENCE POINT
 *
 * Point in execution where:
 *   - ALL side effects from PREVIOUS evaluations are COMPLETE
 *   - NO side effects from SUBSEQUENT evaluations have started
 */

#include <iostream>
using namespace std;

int main() {
    // Example 1: Semicolon creates sequence point
    int x = 5;
    x = x + 1;  // <-- sequence point at semicolon
    cout << x << "\n";  // guaranteed: x = 6

    // Example 2: Comma operator creates sequence point
    int a = (x = 10, x + 2);  // sequence point at comma
    //           ^
    //           x = 10 completes BEFORE x + 2 evaluates
    cout << "a = " << a << "\n";  // a = 12

    // Example 3: && and || create sequence points
    x = 5;
    if (x > 0 && ++x > 5) {  // sequence point after "x > 0"
        //           ^
        //           ++x evaluated only if x > 0 is true
        cout << "x = " << x << "\n";  // x = 6
    }

    // Example 4: UNDEFINED BEHAVIOR - no sequence point
    // x = x++;     // WRONG! Modifies x twice without sequence point
    // int y = ++x + ++x;  // WRONG! Modifies x twice in same expression

    cout << "\nKey rule: Don't modify same variable multiple times\n";
    cout << "          without sequence point between modifications\n";

    return 0;
}
