#include <boost/type_index.hpp>
#include <iostream>

struct Empty {}; // The size of any object of empty class type is at least 1
static_assert(sizeof(Empty) >= 1);

struct X
{
    int i;
    Empty e; // At least one more byte is needed to give ‘e’ a unique address
};
static_assert(sizeof(X) >= sizeof(int) + 1);

struct Y
{
    int i;
    [[no_unique_address]] Empty e; // Empty member optimized out
};
static_assert(sizeof(Y) >= sizeof(int));

struct Z
{
    char c;
    // e1 and e2 cannot share the same address because they have the
    // same type, even though they are marked with [[no_unique_address]].
    // However, either may share address with ‘c’.
    [[no_unique_address]] Empty e1, e2;
};
static_assert(sizeof(Z) >= 2);

struct W
{
    char c[2];
    // e1 and e2 cannot have the same address, but one of
    // them can share with c[0] and the other with c[1]:
    [[no_unique_address]] Empty e1, e2;
};
static_assert(sizeof(W) >= 2);

template <typename T>
void print_size_of()
{
    using boost::typeindex::type_id;
    std::cout << "sizeof(" << type_id<T>() << ") == " << sizeof(T) << '\n';
}

int main()
{
    print_size_of<Empty>();
    print_size_of<int>();
    print_size_of<X>();
    print_size_of<Y>();
    print_size_of<Z>();
    print_size_of<W>();
}