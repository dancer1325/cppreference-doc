#include <iostream>
// 1. variadic function
// 1.1  | LAST argument
// 1.1.1    ,...
int printx(const char* fmt, ...) {
    std::cout << "fmt: " << fmt << "\n" << std::endl;
}
// 1.1.2    ...                 // | C++26, deprecated
int printxWithoutComma(const char* fmt...) {
    std::cout << "fmt: " << fmt << "\n" << std::endl;
}

// 1.2  NOT | LAST argument
// 1.2.1    ,...
//int printy(..., const char* fmt);           // uncomment to see the error
// 1.2.2    ...
//int printz(...);                            // uncomment to see the error

int main() {
    // uses
    printx("hello world");
    printxWithoutComma("a=%d b=%d", "a", "b");
}