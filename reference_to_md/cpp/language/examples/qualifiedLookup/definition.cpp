#include <iostream>

class Example {
public:
    int someType = 3;
    static void functionStatic() {
        std::cout << "Example - functionStatic() " << std::endl;
    }
    void functionNonStatic() {
        std::cout << "Example - functionNonStatic() " << std::endl;
    }
};

enum ExampleEnum {
    MOTHER,
    FATHER,
    CHILD_FIRST,
    CHILD_SECOND,
};

namespace mine {
    int mineValue = 2;
}

int main() {

    // 1. class member
    // 1.1 static
    Example::functionStatic();

    // 1.2 NON-static members
    Example obj;        // -> require an object instance
    obj.functionNonStatic();
    int someValue = obj.someType;
    std::cout << "someType value: " << someValue << std::endl;

    // 2. namespace member
    int mineValue = mine::mineValue;
    std::cout << "mineValue value: " << mineValue << std::endl;

    // 3. enumerator
    int fatherValue = ExampleEnum::FATHER;
    std::cout << "fatherValue value: " << fatherValue << std::endl;

    return 0;
}