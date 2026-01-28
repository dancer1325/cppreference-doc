// 1. `using typename nested-name-specifier unqualified-id`

#include <iostream>
#include <vector>

template<typename T>
struct Base {
    // type alias           !=      using declaration
    using value_type = T;
    using pointer = T*;
    using reference = T&;
};

template<typename T>
struct Derived : Base<T> {
    // defined | Derived scope
    using typename Base<T>::value_type;     // nested-name-specifier == Base<T>::       unqualified-id == value_type
    using typename Base<T>::pointer;        // nested-name-specifier == Base<T>::       unqualified-id == pointer
    using typename Base<T>::reference;      // nested-name-specifier == Base<T>::       unqualified-id == reference

    void print(value_type val) {            // value_type can be used directly
        std::cout << "Value: " << val << '\n';
    }

    pointer getPointer(reference ref) {     // reference can be used directly
        return &ref;
    }
};

void example1() {
    std::cout << "=== Syntax 1: using typename ===" << '\n';
    Derived<int> d;
    d.print(42);

    int x = 100;
    auto ptr = d.getPointer(x);
    std::cout << "Pointer value: " << *ptr << '\n';
}

// 2. `using declarator-list`
//      | C++17

#include <string>

namespace MyNamespace {
    void foo() { std::cout << "foo()" << '\n'; }
    void bar() { std::cout << "bar()" << '\n'; }
    void baz() { std::cout << "baz()" << '\n'; }

    int x = 10;
    int y = 20;
    int z = 30;
}

void example2() {
    std::cout << "\n=== Syntax 2: using declarator-list ===" << '\n';

    using MyNamespace::foo, MyNamespace::bar, MyNamespace::baz;
    // | PREVIOUS syntax, ==    MULTIPLE lines
    // using MyNamespace::foo
    // using MyNamespace::bar
    // using MyNamespace::baz

    using MyNamespace::x, MyNamespace::y, MyNamespace::z;
    // | PREVIOUS syntax, ==    MULTIPLE lines
    // using MyNamespace::x
    // using MyNamespace::y
    // using MyNamespace::z

    foo();
    bar();
    baz();

    std::cout << "x=" << x << ", y=" << y << ", z=" << z << '\n';
}

int main() {
    example1();
    example2();
    return 0;
}
