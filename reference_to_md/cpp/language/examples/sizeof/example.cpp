#include <cstdlib>
#include <iostream>

struct Empty          { };
struct Base           { int a; };
struct Derived : Base { int b; };
struct Bit            { unsigned bit: 1; };
struct CharChar       { char c; char c2; };
struct CharCharInt    { char c; char c2; int i; };
struct IntCharChar    { int i;  char c;  char c2; };
struct CharIntChar    { char c; int i;   char c2; };
struct CharShortChar  { char c; short s; char c2; };

int main()
{
    Empty e;
    Derived d;
    Base& b = d;
    [[maybe_unused]] Bit bit;
    int a[10];

    auto f = [&]() { return sizeof(int[10]) == sizeof a ? throw 1 : e; };
//  f(); // the return type is Empty, but always throws 1

    auto println = [](auto rem, std::size_t size) { std::cout << rem << size << '\n'; };

    // 1. allows querying
    std::cout << "1. allows querying" << '\n';
    // 1.1 object's size
    //      OBJECT (variable, instance)
    std::cout << "1.1 object's size" << '\n';
    int x = 42;
    double y = 3.14;
    char z = 'A';
    println( "1.1a) sizeof x (int object):      ", sizeof x              );
    println( "1.1b) sizeof y (double object):   ", sizeof y              );
    println( "1.1c) sizeof z (char object):     ", sizeof z              );
    println( "1.1d) sizeof e (Empty object):    ", sizeof e              );
    println( "1.1e) sizeof d (Derived object):  ", sizeof d              );
    println( "1.1f) sizeof a (array object):    ", sizeof a              );

    // 1.2 type's size
    //      TYPE (== WITHOUT creating an object)
    std::cout << "1.2 type's size" << '\n';
    println( "1.2a) sizeof(int):                ", sizeof(int)           );
    println( "1.2b) sizeof(double):             ", sizeof(double)        );
    println( "1.2c) sizeof(char):               ", sizeof(char)          );
    println( "1.2d) sizeof(Empty):              ", sizeof(Empty)         );
    println( "1.2e) sizeof(Derived):            ", sizeof(Derived)       );
    println( "1.2f) sizeof(int[10]):            ", sizeof(int[10])       );


    // 2. dat
    std::cout << "2 others" << '\n';
    println( "2.1) sizeof empty class:              ", sizeof e                     );
    println( "2.2) sizeof pointer:                  ", sizeof &e                    );
    println( "2.3) sizeof(Bit) class:               ", sizeof(Bit)                  );
    println( "2.4) sizeof(int[10]) array of 10 int: ", sizeof(int[10])              );
    println( "2.5) sizeof a        array of 10 int: ", sizeof a                     );
    println( "2.6) length of array of 10 int:       ", ((sizeof a) / (sizeof *a))   );
    println( "2.7) length of array of 10 int (2):   ", ((sizeof a) / (sizeof a[0])) );
    println( "2.8) sizeof the Derived class:        ", sizeof d                     );
    println( "2.9) sizeof the Derived through Base: ", sizeof b                     );
    println( "2.10) sizeof(unsigned):                ", sizeof(unsigned)             );
    println( "2.11) sizeof(int):                     ", sizeof(int)                  );
    println( "2.12) sizeof(short):                   ", sizeof(short)                );
    println( "2.13) sizeof(char):                    ", sizeof(char)                 );
    println( "2.14) sizeof(CharChar):                ", sizeof(CharChar)             );
    println( "2.15) sizeof(CharCharInt):             ", sizeof(CharCharInt)          );
    println( "2.16) sizeof(IntCharChar):             ", sizeof(IntCharChar)          );
    println( "2.17) sizeof(CharIntChar):             ", sizeof(CharIntChar)          );
    println( "2.18) sizeof(CharShortChar):           ", sizeof(CharShortChar)        );
    println( "2.19) sizeof f():                      ", sizeof f()                   );
    println( "2.20) sizeof Base::a:                  ", sizeof Base::a               );

//  println( "sizeof function:        ", sizeof(void()) ); // error
//  println( "sizeof incomplete type: ", sizeof(int[])  ); // error
//  println( "sizeof bit-field:       ", sizeof bit.bit ); // error
}