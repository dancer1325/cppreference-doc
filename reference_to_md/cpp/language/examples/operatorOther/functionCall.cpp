// Example: operator() (function call operator)
// Demonstrates:
// 1. operator() is OVERLOADABLE
// 2. Inside class definition: R T::operator()(Arg1 &a1, Arg2 &a2, ...);
// 3. Outside class definition: N/A (cannot be a free function)

#include <iostream>
#include <string>
#include <vector>

// =============================================================================
// EXAMPLE 1: Basic function call operator
// =============================================================================

class Adder {
public:
    // R = int, T = Adder
    // Inside class definition
    int operator()(int a, int b) {
        return a + b;
    }
};

// =============================================================================
// EXAMPLE 2: OVERLOADABLE - Multiple overloads with different signatures
// =============================================================================

class Calculator {
public:
    // Overload #1: 2 int parameters
    int operator()(int a, int b) {
        std::cout << "Calculator::operator()(int, int)\n";
        return a + b;
    }

    // Overload #2: 3 int parameters
    int operator()(int a, int b, int c) {
        std::cout << "Calculator::operator()(int, int, int)\n";
        return a + b + c;
    }

    // Overload #3: double parameters
    double operator()(double a, double b) {
        std::cout << "Calculator::operator()(double, double)\n";
        return a * b;
    }

    // Overload #4: no parameters
    void operator()() {
        std::cout << "Calculator::operator()() - no parameters\n";
    }

    // Overload #5: string parameter
    std::string operator()(const std::string& msg) {
        std::cout << "Calculator::operator()(string)\n";
        return "Processed: " + msg;
    }
};

// =============================================================================
// EXAMPLE 3: Inside vs Outside class definition
// =============================================================================

class Multiplier {
public:
    // 3.1 Inside class definition (inline)
    int operator()(int a, int b) {
        return a * b;
    }
};

class Divider {
public:
    // Declaration inside class
    double operator()(double a, double b);
};

// 3.2 Definition outside class -- as -- member function
//      != free function
// R      T         operator()  (parameters)
double Divider::operator()(double a, double b) {
    if (b == 0) {
        std::cout << "Division by zero!\n";
        return 0;
    }
    return a / b;
}

// =============================================================================
// EXAMPLE 4: Why Outside class definition is N/A
// =============================================================================

class MyClass {
public:
    int value;
    MyClass(int v) : value(v) {}

    // This works: member operator()
    int operator()(int x) {
        return value + x;
    }
};

// ❌ uncomment to see the error
// ❌ ERROR: operator() must be a member
/*int operator()(MyClass& obj, int x) {
    return obj.value + x;
}
*/

// Why? Because operator() requires a left-hand operand (the object),
// and only member functions have an implicit 'this' pointer.

// =============================================================================
// EXAMPLE 5: Practical use case - Functors (Function Objects)
// =============================================================================

class Counter {
private:
    int count;

public:
    Counter() : count(0) {}

    // Makes Counter objects callable like functions
    int operator()() {
        return ++count;
    }

    int getCount() const { return count; }
};

class GreaterThan {
private:
    int threshold;

public:
    GreaterThan(int t) : threshold(t) {}

    // Predicate functor
    bool operator()(int value) const {
        return value > threshold;
    }
};

// =============================================================================
// EXAMPLE 6: TODO: Lambda functions (they use operator() internally)
// =============================================================================

void lambdaExample() {
    std::cout << "\n=== LAMBDA EXAMPLE ===\n";

    // Lambda syntax (C++11)
    auto add = [](int a, int b) { return a + b; };

    // Under the hood, compiler creates something like:
    // class LambdaType {
    // public:
    //     int operator()(int a, int b) const { return a + b; }
    // };

    std::cout << "Lambda add(3, 4) = " << add(3, 4) << "\n";
}

// =============================================================================
// MAIN - Usage examples
// =============================================================================

int main() {
    std::cout << "=== EXAMPLE 1: Basic Usage ===\n";
    Adder adder;
    std::cout << "adder(5, 3) = " << adder(5, 3) << "\n";
    std::cout << "Equivalent to: adder.operator()(5, 3) = "
              << adder.operator()(5, 3) << "\n\n";

    std::cout << "=== EXAMPLE 2: Overloading ===\n";
    Calculator calc;
    calc(10, 20);              // calls overload #1
    calc(10, 20, 30);          // calls overload #2
    calc(3.14, 2.0);           // calls overload #3
    calc();                    // calls overload #4
    std::cout << calc("Hello") << "\n\n";  // calls overload #5

    std::cout << "=== EXAMPLE 3: Inside vs Outside Definition ===\n";
    Multiplier mult;
    std::cout << "mult(7, 6) = " << mult(7, 6) << "\n";

    Divider div;
    std::cout << "div(10.0, 2.0) = " << div(10.0, 2.0) << "\n";
    std::cout << "div(10.0, 0.0) = " << div(10.0, 0.0) << "\n\n";

    std::cout << "=== EXAMPLE 4: Member Function Only ===\n";
    MyClass obj(100);
    std::cout << "obj(42) = " << obj(42) << "\n";
    std::cout << "This works because operator() is a MEMBER function\n";
    std::cout << "Cannot define operator() as free function!\n\n";

    std::cout << "=== EXAMPLE 5: Functors ===\n";
    Counter counter;
    std::cout << "counter() = " << counter() << "\n";
    std::cout << "counter() = " << counter() << "\n";
    std::cout << "counter() = " << counter() << "\n";
    std::cout << "Total count: " << counter.getCount() << "\n\n";

    GreaterThan gt5(5);
    std::cout << "gt5(3) = " << (gt5(3) ? "true" : "false") << "\n";
    std::cout << "gt5(7) = " << (gt5(7) ? "true" : "false") << "\n\n";

    // Using functor with STL algorithms
    std::vector<int> numbers = {1, 3, 5, 7, 9};
    std::cout << "Numbers greater than 5: ";
    for (int n : numbers) {
        if (gt5(n)) {
            std::cout << n << " ";
        }
    }
    std::cout << "\n\n";

    lambdaExample();

    std::cout << "\n=== KEY POINTS ===\n";
    std::cout << "1. operator() IS overloadable (multiple versions)\n";
    std::cout << "2. Defined INSIDE class: R T::operator()(Args...)\n";
    std::cout << "3. CANNOT be defined as free function (N/A outside class)\n";
    std::cout << "4. Makes objects 'callable' like functions (functors)\n";
    std::cout << "5. Used extensively in STL and lambdas\n";

    return 0;
}

/*
OUTPUT EXPLANATION:

Why N/A for outside class definition?
- operator() MUST be a non-static member function
- It needs implicit 'this' pointer to access the object
- Free functions don't have 'this'
- Therefore, you CANNOT write operator() as a global function

Syntax breakdown:
    R T::operator()(Arg1 &a1, Arg2 &a2, ...)
    │ │            │
    │ │            └─ Parameters the function call accepts
    │ └─ Class name (T)
    └─ Return type (R)
*/
