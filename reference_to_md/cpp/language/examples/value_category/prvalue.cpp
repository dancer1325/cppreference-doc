// 1. == “pure” rvalue

// 2. == expression /

// 2.1 | evaluate,
// 2.1.1 computes the built-in operator's operand's value
// TODO:
// 2.1.2 initializes an object (result object)
// TODO:
// 2.2 ALLOWED ones
// 2.2.1 literal
42;
true;
nullptr;
// 2.2.1.1 EXCEPT for, string literal
// "hello"

// 2.2.2 function call OR overloaded operator expression
str.substr(1, 2)
str1 + str2
it++

// 2.2.3 post-increment & post-decrement expressions
a++;
a--;

// 2.2.4 arithmetic expressions
a + b;
a % b;
a & b;
a << b;

// 2.2.5 logical expressions
a && b;
a || b;
!a;

// 2.2.6 comparison expressions
a < b;
a == b;
a >= b;

// 2.2.7 address-of expression
&a;

// 2.2.8 member of object expression
// TODO: m == member enumerator OR non-static member function
a.m;

// 2.2.9 member of pointer expression
// TODO: m == member enumerator OR non-static member function
p->m;

// 2.2.10 pointer to member of object expression
// TODO: mp == pointer -- to -- member function
a.*mp;

// 2.2.11 pointer to member of pointer expression
// TODO: mp == pointer -- to -- member function
p->*mp;

// 2.2.12 comma expression
// TODO: b == prvalue
a,b;

// 2.2.13 ternary conditional expression
// TODO: expression -- for -- certain `b` & `c`
a ? b : c;

// 2.2.14 cast expression -- to -- non-reference type
static_cast<double>(x);
std::string{};
(int)42;

// 2.2.15 this pointer
// TODO:

// 2.2.16 enumerator
// TODO:

// 2.2.17 template parameter / constant & scalar type
template <int v>
void foo()
{
    // != lvalue
    // `v` == template parameter / scalar type int
    const int* a = &v; // ill-formed

    v = 3; // ill-formed: lvalue required as left operand of assignment
}

// 2.2.18 lambda expression
[](int x){ return x * x; };

// 2.2.19 requires expression
requires (T i) { typename T::type; };

// 2.2.20 specialization of a concept
std::equality_comparable<int>
