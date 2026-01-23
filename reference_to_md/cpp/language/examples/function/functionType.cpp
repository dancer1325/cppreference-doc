void f(char*);         // #1
void f(char[]) {}      // defines #1
void f(const char*) {} // OK, another overload
void f(char* const) {} // Error: redefines #1

void g(char(*)[2]);   // #2
void g(char[3][2]) {} // defines #2
void g(char[3][3]) {} // OK, another overload

void h(int x(const int)); // #3
void h(int (*)(int)) {}   // defines #3