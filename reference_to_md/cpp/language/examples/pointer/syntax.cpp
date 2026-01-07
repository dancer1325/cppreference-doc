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
}