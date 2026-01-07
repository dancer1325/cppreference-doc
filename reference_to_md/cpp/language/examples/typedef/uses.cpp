int main() {
    // 1. uses
    // 1.1 | start of the declaration
    typedef char DefinedCharAtStart;

    // 1.2 | AFTER type specifiers
    char typedef DefinedCharAfterTypeSpecifier;

    // 1.3 | BETWEEN 2 type specifiers
    unsigned typedef int UnsignedInt;
    const typedef long ConstLong;

    // 2. NOT uses
    // 2.1 + other specifier
    //      _Example:_ storage-class-specifiers ()

    // ERROR examples - uncomment to see the error | compile
    // typedef static int StaticInt;      // ERROR: cannot combine typedef + static
    // typedef extern int ExternInt;      // ERROR: cannot combine typedef + extern
    // typedef register int RegisterInt;  // ERROR: cannot combine typedef + register
    // typedef auto int AutoInt;          // ERROR: cannot combine typedef + auto
    // typedef thread_local int TLInt;    // ERROR: cannot combine typedef + thread_local

    // 2.1.1 EXCEPT for: type specifiers    == typedef + someTypeSpecifier
    typedef const int ConstInt;           // OK: const == type specifier
    typedef volatile int VolatileInt;     // OK: volatile == type specifier
    typedef unsigned int UInt;            // OK: unsigned == type specifier
    typedef long long LongLong;           // OK: long == type specifier

    return 0;
}