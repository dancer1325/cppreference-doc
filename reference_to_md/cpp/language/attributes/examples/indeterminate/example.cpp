void f(int);

void g()
{
    int x [[indeterminate]]; // indeterminate value
    int y;                   // erroneous value

    f(x); // undefined behavior
    f(y); // erroneous behavior
}

struct T
{
    T() {}
    int x;
};

void h(T a [[indeterminate]], T b)
{
    f(a.x); // undefined behavior when called below
    f(b.x); // erroneous behavior when called below
}

h(T(), T());