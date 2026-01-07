#include <iostream>

int func() {
    return 42;
}

int main() {
    int x = 10, y = 20;

    // 1. expression / used ONLY -- for -- side effects
    // == calculated value is discarded
    x++;

    // 2. use cases
    // 2.1 full-expression of any EXPRESSION STATEMENT
    x + y;           // value discarded (calculates 30, not used)
    func();          // return value (42) discarded
    x++;             // return value discarded, side-effect (increment) happens

    // 2.2 built-in comma operator's left-hand operand discarded
    //    == ONLY use right-hand operand

    int result = (x++, 100);
    //            x++ value discarded, BUT side-effect (== x is incremented)
    //                 ^^^ this value is used (result = 100)

    std::cout << "   x = " << x << std::endl;
    std::cout << "   result = " << result << std::endl;

    // 2.3 cast-expression's operand / casts -- to the -- type `void`
    //    Explicit discard using (void) cast

    (void)func();    // explicitly discard return value
    (void)(x * y);   // explicitly discard calculated value

    return 0;
}
