#define F(...) f(0 __VA_OPT__(,) __VA_ARGS__)
F(a, b, c)  // replaced by f(0, a, b, c)
F()        // replaced by f(0)

#define G(X, ...) f(0, X __VA_OPT__(,) __VA_ARGS__)
G(a, b, c) // replaced by f(0, a, b, c)
G(a, )     // replaced by f(0, a)
G(a)       // replaced by f(0, a)

#define SDEF(sname, ...) S sname __VA_OPT__(= { __VA_ARGS__ })
SDEF(foo);       // replaced by S foo;
SDEF(bar, 1, 2); // replaced by S bar = { 1, 2 };