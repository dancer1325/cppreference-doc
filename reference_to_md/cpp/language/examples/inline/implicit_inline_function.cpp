#include <iostream>

// ============================================
// implicit inline function
// ============================================


// 1. POSSIBLE cases
// 1.1 function defined entirely | class/struct/union definition
class Calculator
{
public:
    // 1.1.1 INDEPENDENTLY whether it's
    // 1.1.1.1    member function
    int subtract(int a, int b)      // 0. implicit     ==      NOT require `inline` keyword
    {
        return a - b;
    }

    // 0.1 ALTHOUGH you can STILL mark it
    inline int divide(int a, int b)
    {
        return a / b;
    }

    // 1.1.1.2    non-member friend function
    //            == friend function / defined | class definition
    // TODO: but this function is member, not?
    friend std::ostream& operator<<(std::ostream& os, const Calculator& calc)
    {
        os << "Calculator{}";
        return os;
    }
};

// 1.2 function / its first declaration is declared
// 1.2.1 `constexpr` OR
// TODO:
// 1.2.2 `consteval`
// TODO:

// 1.3 deleted function
// TODO:
// 1.3.1  its (deleted) definition can appear | >=1 translation unit
// TODO:

int main()
{
    std::cout << "=== inline function examples ===" << std::endl;
    std::cout << std::endl;

    // 1. Explicit inline
    std::cout << "add(5, 3) = " << add(5, 3) << std::endl;
    std::cout << "multiply(5, 3) = " << multiply(5, 3) << std::endl;
    std::cout << std::endl;

    // 2. Implicit inline (class member defined in-class)
    Calculator calc;
    std::cout << "subtract(10, 4) = " << calc.subtract(10, 4) << std::endl;
    std::cout << "divide(10, 2) = " << calc.divide(10, 2) << std::endl;
    std::cout << std::endl;

    return 0;
}
