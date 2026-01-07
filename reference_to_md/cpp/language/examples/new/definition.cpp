#include <iostream>
#include <string>

// Function / creates an object -- with -- NEW
// ⚠️Object lifetime EXTENDS BEYOND the function scope⚠️
int* createInt() {
    int* ptr = new int(42);  // dynamic storage duration
    // ptr      points -- to -- memory | heap
    std::cout << "   Inside scope: *ptr = " << *ptr << std::endl;
    return ptr;  // Object survives function return
}  // 👀Scope ends, BUT object at *ptr is STILL ALIVE👀

// Function / creates an object | stack
// ⚠️Object lifetime is TIED to the function scope⚠️
int* createIntStack() {
    int value = 42;  // automatic storage duration
    std::cout << "   Inside scope: value = " << value << std::endl;
    // value is | stack
    return &value;  // DANGER: returning address of local variable
}  // 👀Scope ends & value is DESTROYED👀


int main() {
    // 1.    Object lifetime extends beyond creation scope
    // 1.1      specified via {}
    std::cout << "1. specified via {}" << std::endl;
    int* p1;
    {
        // Inner scope
        p1 = new int(10);  // Created | inner scope
        std::cout << "   Inside scope: *p1 = " << *p1 << std::endl;
    }  // Scope ends, but *p1 is STILL ALIVE

    std::cout << "   Outside scope: *p1 = " << *p1 << std::endl;
    delete p1;  // Must manually delete
    std::cout << std::endl;

    // 1.2  from function
    std::cout << "2. from function" << std::endl;
    int* p2 = createInt();  // Object created inside createInt()
    std::cout << "   Outside scope: *p2 = " << *p2 << std::endl;
    delete p2;  // Must manually delete
    std::cout << std::endl;

    // 1.3  Undefined Behavior
    std::cout << "3. Undefined Behavior" << std::endl;
    int* p3 = createIntStack();
    std::cout << "   Outside scope: *p3 = " << *p3 << std::endl;
    std::cout << std::endl;

    return 0;
}
