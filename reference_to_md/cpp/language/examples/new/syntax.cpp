#include <iostream>
#include <new>
#include <string>

// new syntax forms:
// 1) :: new (type) new-initializer         // with parentheses around type
// 2) :: new type new-initializer           // without parentheses around type
// 3) :: new (placement-args) (type) new-initializer    // placement new with parentheses
// 4) :: new (placement-args) type new-initializer      // placement new without parentheses

class MyClass {
public:
    int x;
    double y;

    MyClass() : x(0), y(0.0) {
        std::cout << "MyClass() default constructor" << std::endl;
    }

    MyClass(int a, double b) : x(a), y(b) {
        std::cout << "MyClass(" << a << ", " << b << ") constructor" << std::endl;
    }

    ~MyClass() {
        std::cout << "~MyClass() destructor, x=" << x << std::endl;
    }
};

int main() {
    std::cout << "=== NEW Expression Syntax Forms ===" << std::endl;
    std::cout << std::endl;

    // ========================================================================
    // SYNTAX 1: new (type) new-initializer
    // ========================================================================
    std::cout << "1. Syntax: new (type) new-initializer" << std::endl;
    std::cout << "   (Parentheses around type)" << std::endl;
    std::cout << std::endl;

    // 1.1 Required when type includes parentheses (function pointers, etc.)
    int (*p1)[10];                    // pointer to array of 10 ints
    p1 = new (int[10]);               // MUST use syntax 1
    std::cout << "   new (int[10]);  // allocated array of 10 ints" << std::endl;
    delete[] p1;

    // 1.2 Function pointer array
    typedef int(*FuncPtr)();
    FuncPtr* p2 = new (FuncPtr[5]);   // array of 5 function pointers
    std::cout << "   new (FuncPtr[5]);  // allocated array of 5 function pointers" << std::endl;
    delete[] p2;

    // 1.3 With initializer
    int* p3 = new (int)(42);          // single int initialized to 42
    std::cout << "   new (int)(42);  // allocated int, initialized to 42" << std::endl;
    std::cout << "   *p3 = " << *p3 << std::endl;
    delete p3;

    std::cout << std::endl;

    // ========================================================================
    // SYNTAX 2: new type new-initializer
    // ========================================================================
    std::cout << "2. Syntax: new type new-initializer" << std::endl;
    std::cout << "   (Most common form, no parentheses around type)" << std::endl;
    std::cout << std::endl;

    // 2.1 Basic type without initializer
    int* p4 = new int;
    std::cout << "   new int;  // allocated int, uninitialized" << std::endl;
    delete p4;

    // 2.2 Basic type with initializer
    int* p5 = new int(100);
    std::cout << "   new int(100);  // allocated int, initialized to 100" << std::endl;
    std::cout << "   *p5 = " << *p5 << std::endl;
    delete p5;

    // 2.3 Basic type with brace initializer (C++11)
    int* p6 = new int{200};
    std::cout << "   new int{200};  // allocated int, initialized to 200" << std::endl;
    std::cout << "   *p6 = " << *p6 << std::endl;
    delete p6;

    // 2.4 Class type with constructor arguments
    MyClass* p7 = new MyClass(10, 3.14);
    std::cout << "   new MyClass(10, 3.14);  // allocated MyClass" << std::endl;
    delete p7;

    // 2.5 Array of known size
    int* p8 = new int[5]{1, 2, 3, 4, 5};
    std::cout << "   new int[5]{1,2,3,4,5};  // allocated array of 5 ints" << std::endl;
    delete[] p8;

    // 2.6 Array of unknown bound (C++11)
    double* p9 = new double[]{1.1, 2.2, 3.3};
    std::cout << "   new double[]{1.1,2.2,3.3};  // allocated array of 3 doubles" << std::endl;
    delete[] p9;

    // 2.7 Using auto (C++11)
    auto* p10 = new auto(42);
    std::cout << "   new auto(42);  // deduced as int*" << std::endl;
    std::cout << "   *p10 = " << *p10 << std::endl;
    delete p10;

    // 2.8 Using CTAD (C++17)
    auto* p11 = new std::pair(1, 3.14);
    std::cout << "   new std::pair(1, 3.14);  // deduced as pair<int, double>*" << std::endl;
    std::cout << "   p11->first = " << p11->first << ", p11->second = " << p11->second << std::endl;
    delete p11;

    std::cout << std::endl;

    // ========================================================================
    // SYNTAX 3: new (placement-args) (type) new-initializer
    // ========================================================================
    std::cout << "3. Syntax: new (placement-args) (type) new-initializer" << std::endl;
    std::cout << "   (Placement new with parentheses around type)" << std::endl;
    std::cout << std::endl;

    // 3.1 Placement new - construct object at specific address
    alignas(MyClass) char buffer1[sizeof(MyClass)];
    MyClass* p12 = new (buffer1) (MyClass)(5, 2.71);
    std::cout << "   new (buffer) (MyClass)(5, 2.71);  // construct at buffer" << std::endl;
    std::cout << "   Address: " << (void*)p12 << " == " << (void*)buffer1 << std::endl;
    p12->~MyClass();  // manually call destructor

    // 3.2 Placement new with array type
    alignas(int) char buffer2[sizeof(int[3])];
    int* p13 = new (buffer2) (int[3]){10, 20, 30};
    std::cout << "   new (buffer) (int[3]){10,20,30};  // construct array at buffer" << std::endl;
    std::cout << "   Address: " << (void*)p13 << " == " << (void*)buffer2 << std::endl;
    // No destructor needed for int

    std::cout << std::endl;

    // ========================================================================
    // SYNTAX 4: new (placement-args) type new-initializer
    // ========================================================================
    std::cout << "4. Syntax: new (placement-args) type new-initializer" << std::endl;
    std::cout << "   (Placement new without parentheses around type)" << std::endl;
    std::cout << std::endl;

    // 4.1 Placement new - most common placement syntax
    alignas(int) char buffer3[sizeof(int)];
    int* p14 = new (buffer3) int(999);
    std::cout << "   new (buffer) int(999);  // construct int at buffer" << std::endl;
    std::cout << "   *p14 = " << *p14 << std::endl;
    std::cout << "   Address: " << (void*)p14 << " == " << (void*)buffer3 << std::endl;

    // 4.2 Placement new with class
    alignas(MyClass) char buffer4[sizeof(MyClass)];
    MyClass* p15 = new (buffer4) MyClass(7, 1.41);
    std::cout << "   new (buffer) MyClass(7, 1.41);  // construct MyClass at buffer" << std::endl;
    std::cout << "   Address: " << (void*)p15 << " == " << (void*)buffer4 << std::endl;
    p15->~MyClass();  // manually call destructor

    // 4.3 Placement new with std::nothrow
    int* p16 = new (std::nothrow) int(555);
    if (p16) {
        std::cout << "   new (std::nothrow) int(555);  // no exception on failure" << std::endl;
        std::cout << "   *p16 = " << *p16 << std::endl;
        delete p16;
    }

    std::cout << std::endl;

    // ========================================================================
    // ADDITIONAL EXAMPLES
    // ========================================================================
    std::cout << "Additional notes:" << std::endl;

    // The :: prefix calls global operator new (bypasses class-specific)
    int* p17 = ::new int(777);
    std::cout << "   ::new int(777);  // calls global operator new" << std::endl;
    std::cout << "   *p17 = " << *p17 << std::endl;
    ::delete p17;

    std::cout << std::endl;
    std::cout << "=== Summary ===" << std::endl;
    std::cout << "Syntax 1: new (type) init       - Required for complex types" << std::endl;
    std::cout << "Syntax 2: new type init         - Most common form" << std::endl;
    std::cout << "Syntax 3: new (place) (type) init - Placement with complex types" << std::endl;
    std::cout << "Syntax 4: new (place) type init - Most common placement form" << std::endl;

    return 0;
}
