#include <iostream>

int main() {
    // typedef is NOT a variable OR function declaration

    // 1. it creates a TYPE ALIAS / replace a type name
    // 1.1 Basic type alias
    typedef int Integer;        // `typedef` + declaration
                                // Integer is NOT a variable, it's a TYPE NAME
                                // You cannot do: Integer = 10; (error!)
    // 2. != variable declaration
    int a = 10;         // Variable declaration: 'a' is a variable
    Integer b = 20;     // Variable declaration: 'b' is a variable ( / type Integer/int)
                        // 'Integer'
                        //      is used -- as a -- TYPE
                        //      is NOT used -- as a -- variable

    std::cout << "a = " << a << ", b = " << b << std::endl;

    // ---

    // 1.2 Pointer type alias
    typedef int* IntPtr;        // IntPtr is a TYPE NAME (not a pointer variable!)
                                // You cannot do: *IntPtr = 10; (error!)
    // 2. != variable declaration
    int value = 42;
    int* ptr1 = &value;      // ptr1 is a VARIABLE (pointer)
    IntPtr ptr2 = &value;    // ptr2 is a VARIABLE (of type IntPtr, which is int*)
                             // 'IntPtr' is used as a TYPE
    std::cout << "*ptr1 = " << *ptr1 << ", *ptr2 = " << *ptr2 << std::endl;

    // ---

    // 1.3 Array type alias
    typedef int IntArray[5];    // `typedef` + declaration

    // 2. != variable declaration
    int arr1[5] = {1, 2, 3, 4, 5};     // Using original type
    IntArray arr2 = {10, 20, 30, 40, 50};  // Using alias

    std::cout << "arr1[0] = " << arr1[0] << ", arr2[0] = " << arr2[0] << std::endl;

    // ---

    // 1.4 Function pointer alias
    typedef void (*FunctionPtr)(int);   // FunctionPtr is a TYPE NAME (not a function!)
                                        // You cannot do: FunctionPtr(42); (error!)

    // 2. != function declaration
    auto printValue = [](int x) { std::cout << "Value: " << x << std::endl; };
    FunctionPtr func = printValue;  // func is a VARIABLE (function pointer)
                                    // 'FunctionPtr' is used as a TYPE
    func(100);                      // Calling through the function pointer

    return 0;
}
