#include <iostream>

int main()
{
    // comma is often used to execute more than one expression
    // where the language grammar allows only one expression:

    // * in the third component of the for loop
    for (int i = 0, j = 10; i <= j; ++i, --j)
        //            ^list separator      ^comma operator
            std::cout << "i = " << i << " j = " << j << '\n';

    // * in a return statement
    // return log("an error!"), -1;

    // * in an initializer expression
    // MyClass(const Arg& arg)
    // : member{ throws_if_bad(arg), arg }

    // etc.

    // comma operators can be chained; the result of the last
    // (rightmost) expression is the result of the whole chain:
    int n = 1;
    int m = (++n, std::cout << "n = " << n << '\n', ++n, 2 * n);

    // m is now 6
    std::cout << "m = " << (++m, m) << '\n';
}