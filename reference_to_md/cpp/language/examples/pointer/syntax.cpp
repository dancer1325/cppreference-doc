#include <iostream>

int main() {
    // 1. pointer declarator
    // Syntax: * attr(optional) cv(optional) declarator

    // 1.1 * declarator
    int* ptr1;                  // ptr1 == pointer -- to -- int
    int** ptrPtr;               // == * declaratorExternal / declaratorExternal == * declaratorInternal

    // 1.2 * attr declarator
    int* const ptr2 = nullptr;  // ptr2 is a const pointer to int
    const int* ptr3;            // ptr3 is a pointer to const int
    const int* const ptr4 = nullptr;  // ptr4 is a const pointer to const int

    // 1.3 * cv declarator
    volatile int* ptr5;         // ptr5 is a pointer to volatile int
    int* volatile ptr6 = nullptr;  // ptr6 is a volatile pointer to int

    // 2. pointer -- to -- member declarator
    // Syntax: nested-name-specifier * attr(optional) cv(optional) declarator

    class MyClass {
    public:
        int data;
        int value;
        void method() { std::cout << "method called\n"; }
        void display(int x) { std::cout << "display: " << x << "\n"; }
        int compute(int a, int b) { return a + b; }
    };

    // 2.1 Pointer to data member
    // nested-name-specifier * declarator
    int MyClass::*ptrToMember;          // ptrToMember == pointer -- to -- int member of MyClass
    ptrToMember = &MyClass::data;       // Points to 'data' member

    MyClass obj;
    obj.data = 42;
    obj.value = 100;

    // Access member through pointer to member
    std::cout << "obj.*ptrToMember = " << obj.*ptrToMember << std::endl;  // Prints 42

    // Change which member it points to
    ptrToMember = &MyClass::value;
    std::cout << "obj.*ptrToMember = " << obj.*ptrToMember << std::endl;  // Prints 100

    // Using with pointer to object
    MyClass* objPtr = &obj;
    std::cout << "objPtr->*ptrToMember = " << objPtr->*ptrToMember << std::endl;  // Prints 100

    // 2.2 Pointer to member function (no parameters)
    // nested-name-specifier * declarator
    void (MyClass::*ptrToMethod)();     // ptrToMethod == pointer -- to -- member function of MyClass
    ptrToMethod = &MyClass::method;     // Points to 'method' member function

    // Call member function through pointer to member
    (obj.*ptrToMethod)();               // Calls obj.method()
    (objPtr->*ptrToMethod)();           // Calls objPtr->method()

    // 2.3 Pointer to member function (with parameters)
    void (MyClass::*ptrToDisplay)(int); // Pointer to member function taking int
    ptrToDisplay = &MyClass::display;

    (obj.*ptrToDisplay)(999);           // Calls obj.display(999)

    // 2.4 Pointer to member function (with return value)
    int (MyClass::*ptrToCompute)(int, int);  // Returns int, takes two ints
    ptrToCompute = &MyClass::compute;

    int result = (obj.*ptrToCompute)(5, 3);
    std::cout << "result = " << result << std::endl;  // Prints 8

    // 2.5 Const pointer to member
    int MyClass::* const constPtrToMember = &MyClass::data;
    // constPtrToMember = &MyClass::value;  // Error: cannot reassign

    std::cout << "obj.*constPtrToMember = " << obj.*constPtrToMember << std::endl;

    return 0;
}