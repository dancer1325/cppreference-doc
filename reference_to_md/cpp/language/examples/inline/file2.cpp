#include "example.h"

int b()
{
    ++counter;                  // modify inline variable
    return sum(3, 4);      // inline function used here
}