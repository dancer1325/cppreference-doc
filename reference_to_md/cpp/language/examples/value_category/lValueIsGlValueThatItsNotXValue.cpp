void foo();

void baz()
{
    int a; // Expression `a` is lvalue
    a = 4; // OK, could appear on the left-hand side of an assignment expression

    int &b{a}; // Expression `b` is lvalue
    b = 5; // OK, could appear on the left-hand side of an assignment expression

    const int &c{a}; // Expression `c` is lvalue
    c = 6;           // ill-formed, assignment of read-only reference

    // Expression `foo` is lvalue
    // address may be taken by built-in address-of operator
    void (*p)() = &foo;

    foo = baz; // ill-formed, assignment of function
}  