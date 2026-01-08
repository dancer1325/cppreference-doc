#include <cstdio>

int a() { return std::puts("a"); }
int b() { return std::puts("b"); }
int c() { return std::puts("c"); }

void z(int, int, int) {}

int main()
{
    // 1. order | intermediate results are obtained -- by the -- compiler
    //      EVEN function arguments
    z(a(), b(), c());       // ALL 6 permutations of output are ALLOWED

    // 2. ❌NOT exist "left-to-right" nor "right-to-left" evaluation❌
    //      in a() + b() + c(), evaluation of b() can happen BEFORE c() OR BEFORE a(), .... == unexpected
    // 2.1 ⚠️!= "left-to-right" & "right-to-left" associativity of operators⚠️
    //      a() + b() + c() is parsed -- as -- (a() + b()) + c()
    //          Reason:🧠left-to-right associativity operator🧠
    return a() + b() + c(); // ALL 6 permutations of output are ALLOWED
}