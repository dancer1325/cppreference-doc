// Scope Resolution Operator :: Examples
// ======================================
// :: is used in multiple contexts:
// 1. Qualified name lookup (accessing members from specific scopes)
// 2. Pointer-to-member declarations
// 3. ::new and ::delete expressions (force global lookup)

#include <iostream>
#include <new>

// =============================================================================
// 1. QUALIFIED NAME LOOKUP
// =============================================================================

int value = 100;  // Global variable

namespace MyNamespace {
    int value = 200;  // Namespace variable

    class MyClass {
    public:
        static int value;  // Static member
        int instanceValue;

        MyClass() : instanceValue(400) {}

        void showValues() {
            int value = 500;  // Local variable

            std::cout << "Local value: " << value << "\n";              // 500 (local)
            std::cout << "Instance value: " << this->instanceValue << "\n";  // 400
            std::cout << "Class static: " << MyClass::value << "\n";    // 300
            std::cout << "Namespace value: " << MyNamespace::value << "\n";  // 200
            std::cout << "Global value: " << ::value << "\n";           // 100 (:: forces global scope)
        }
    };

    int MyClass::value = 300;  // Definition of static member (requires ::)
}

// =============================================================================
// 2. POINTER-TO-MEMBER DECLARATIONS
// =============================================================================

class Data {
public:
    int x;
    int y;

    void print() const {
        std::cout << "Data(" << x << ", " << y << ")\n";
    }

    int sum() const {
        return x + y;
    }
};

// Pointer-to-member-data (requires :: to specify the class)
int Data::*ptrToX = &Data::x;
int Data::*ptrToY = &Data::y;

// Pointer-to-member-function (requires :: to specify the class)
void (Data::*ptrToPrint)() const = &Data::print;
int (Data::*ptrToSum)() const = &Data::sum;

void demonstratePointerToMember() {
    Data d{10, 20};

    // Access member through pointer-to-member
    std::cout << "d.*ptrToX = " << d.*ptrToX << "\n";  // 10
    std::cout << "d.*ptrToY = " << d.*ptrToY << "\n";  // 20

    // Call member function through pointer-to-member
    (d.*ptrToPrint)();  // Calls d.print()
    std::cout << "Sum: " << (d.*ptrToSum)() << "\n";  // Calls d.sum()

    // Works with pointers too
    Data* pd = &d;
    std::cout << "pd->*ptrToX = " << pd->*ptrToX << "\n";  // 10
    (pd->*ptrToPrint)();  // Calls pd->print()
}

// =============================================================================
// 3. ::new AND ::delete - FORCE GLOBAL ALLOCATION/DEALLOCATION LOOKUP
// =============================================================================

class CustomAlloc {
public:
    int value;

    CustomAlloc(int v) : value(v) {
        std::cout << "CustomAlloc(" << value << ") constructed\n";
    }

    ~CustomAlloc() {
        std::cout << "CustomAlloc(" << value << ") destroyed\n";
    }

    // Custom class-specific new operator
    void* operator new(std::size_t size) {
        std::cout << "CustomAlloc::operator new called (size=" << size << ")\n";
        void* ptr = ::operator new(size);  // Call global new
        return ptr;
    }

    // Custom class-specific delete operator
    void operator delete(void* ptr) {
        std::cout << "CustomAlloc::operator delete called\n";
        ::operator delete(ptr);  // Call global delete
    }

    // Custom array new
    void* operator new[](std::size_t size) {
        std::cout << "CustomAlloc::operator new[] called (size=" << size << ")\n";
        void* ptr = ::operator new[](size);  // Call global new[]
        return ptr;
    }

    // Custom array delete
    void operator delete[](void* ptr) {
        std::cout << "CustomAlloc::operator delete[] called\n";
        ::operator delete[](ptr);  // Call global delete[]
    }
};

void demonstrateGlobalNewDelete() {
    std::cout << "\n=== Using regular new (calls CustomAlloc::operator new) ===\n";
    CustomAlloc* p1 = new CustomAlloc(1);
    delete p1;

    std::cout << "\n=== Using ::new (bypasses CustomAlloc::operator new) ===\n";
    // ::new forces lookup of ONLY global operator new
    // Bypasses CustomAlloc::operator new
    CustomAlloc* p2 = ::new CustomAlloc(2);
    ::delete p2;  // Also use global delete

    std::cout << "\n=== Array allocation ===\n";
    CustomAlloc* arr1 = new CustomAlloc[2]{{3}, {4}};
    delete[] arr1;

    std::cout << "\n=== Array with global operators ===\n";
    CustomAlloc* arr2 = ::new CustomAlloc[2]{{5}, {6}};
    ::delete[] arr2;
}

// =============================================================================
// MAIN - RUN ALL EXAMPLES
// =============================================================================

int main() {
    std::cout << "=== 1. QUALIFIED NAME LOOKUP ===\n";
    MyNamespace::MyClass obj;
    obj.showValues();

    std::cout << "\n=== 2. POINTER-TO-MEMBER ===\n";
    demonstratePointerToMember();

    std::cout << "\n=== 3. GLOBAL NEW/DELETE ===\n";
    demonstrateGlobalNewDelete();

    return 0;
}

/* Expected Output:
=== 1. QUALIFIED NAME LOOKUP ===
Local value: 500
Instance value: 400
Class static: 300
Namespace value: 200
Global value: 100

=== 2. POINTER-TO-MEMBER ===
d.*ptrToX = 10
d.*ptrToY = 20
Data(10, 20)
Sum: 30
pd->*ptrToX = 10
Data(10, 20)

=== 3. GLOBAL NEW/DELETE ===

=== Using regular new (calls CustomAlloc::operator new) ===
CustomAlloc::operator new called (size=4)
CustomAlloc(1) constructed
CustomAlloc(1) destroyed
CustomAlloc::operator delete called

=== Using ::new (bypasses CustomAlloc::operator new) ===
CustomAlloc(2) constructed
CustomAlloc(2) destroyed

=== Array allocation ===
CustomAlloc::operator new[] called (size=8)
CustomAlloc(3) constructed
CustomAlloc(4) constructed
CustomAlloc(4) destroyed
CustomAlloc(3) destroyed
CustomAlloc::operator delete[] called

=== Array with global operators ===
CustomAlloc(5) constructed
CustomAlloc(6) constructed
CustomAlloc(6) destroyed
CustomAlloc(5) destroyed
*/
