#include <iostream>

struct A {};

template<class T>
void f(T)  { std::cout << "#1\n"; } // overload #1 before f() POR

template<class T>
void f(T*) { std::cout << "#2\n"; } // overload #2 before f() POR

template<class T>
void g(T* t) 
{
    // wrap the function name with () -> suppresses the argument-dependent lookup
    (f)(t); // f() POR
}

int main()
{
    A* p = nullptr;
    g(p); // POR of g() and f()
}

// Both #1 and #2 are added to the candidate list;
// #2 is selected because it is a better match.