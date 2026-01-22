#include <iostream>

class Number {
private:
    int value;

public:
    Number(int v) : value(v) {}

    // 1. operator functions
    // 1.1 NO operator function == regular name
    Number add(const Number& other) const {
        return Number(value + other.value);
    }

    // 1.2 function / special name
    // 1.2.1 "operator+"
    Number operator+(const Number& other) const {
        return Number(value + other.value);
    }

    // 1.2.2 "operator=="
    bool operator==(const Number& other) const {
        return value == other.value;
    }

    void print() const {
        std::cout << value;
    }
};


int main() {
    Number a(10);
    Number b(20);

    // 2. how to invoke
    // 2.1 use NO operator function
    Number c1 = a.add(b);
    std::cout << "a.add(b) = ";
    c1.print();
    std::cout << "\n\n";

    // 2.2 use the operator function
    // 2.2.1 explicit way
    Number c2 = a.operator+(b);    // forma explícita: objeto.operator+(args)
    std::cout << "a.operator+(b) = ";
    c2.print();
    std::cout << "\n";

    // 2.2.2 operator name
    Number c3 = a + b;
    std::cout << "a + b = ";
    c3.print();
    std::cout << "\n\n";

    return 0;
}
