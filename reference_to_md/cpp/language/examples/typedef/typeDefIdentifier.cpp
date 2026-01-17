// 1. may NOT appear |
// 1.1 declaration of a function parameter
void f1(typedef int param); // ill-formed
// 1.2 function definition's `decl-specifier-seq`
typedef int f2() {}         // ill-formed
// 1.3 declaration / does NOT contain a declarator
typedef struct X {}; // ill-formed
