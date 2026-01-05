// 1. `enumerator`
// 1.1 visible | enclosing scope
enum Color { red, green, blue };
Color r = red;

switch(r)
{
    case red  : std::cout << "red\n";   break;
    case green: std::cout << "green\n"; break;
    case blue : std::cout << "blue\n";  break;
}

// 1.2 EACH one is associated -- with a -- underlying type's value
// TODO:

// 2. if name is omitted -> declaration ONLY introduces the enumerators | enclosing scope
enum { a, b, c = 0, d = a + 2 }; // defines a = 0, b = 1, c = 0, d = 2

// 3.
struct X
{
    enum direction { left = 'l', right = 'r' };
};
X x;
X* p = &x;

int a = X::direction::left; // allowed only in C++11 and later
int b = X::left;
int c = x.left;
int d = p->left;