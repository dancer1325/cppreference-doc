#include <iostream>

// PHASE 7: Template Instantiation
// Templates are instantiated with concrete types by the compiler

// Function template
template<typename T>
T add(T a, T b) {
    return a + b;
}

// Class template
template<typename T>
class Container {
private:
    T value;
public:
    Container(T v) : value(v) {}

    T getValue() const {
        return value;
    }

    void display() {
        std::cout << "Value: " << value << std::endl;
    }
};

int main() {
    // Compiler INSTANTIATES add<int>
    int sumInt = add(5, 3);
    std::cout << "5 + 3 = " << sumInt << std::endl;

    // Compiler INSTANTIATES add<double>
    double sumDouble = add(3.14, 2.86);
    std::cout << "3.14 + 2.86 = " << sumDouble << std::endl;

    // Compiler INSTANTIATES Container<int>
    Container<int> intContainer(42);
    intContainer.display();

    // Compiler INSTANTIATES Container<std::string>
    Container<std::string> stringContainer("Hello");
    std::cout << "String in container: " << stringContainer.getValue() << std::endl;

    return 0;
}
