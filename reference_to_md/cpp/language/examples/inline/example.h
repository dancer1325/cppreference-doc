#ifndef EXAMPLE_H
#define EXAMPLE_H

#include <atomic>

// 1. inline function
//      == function / included | MULTIPLE source files
inline int sum(int a, int b)
{
    return a + b;
}

// 2. inline variable
//      == variable /
//          has external linkage
//          included | MULTIPLE source files
inline std::atomic<int> counter(0);

#endif