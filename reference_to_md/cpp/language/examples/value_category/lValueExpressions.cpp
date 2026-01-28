// 1. ALLOWED ones
// 1.1 name of a variable

// 1.2 name of a function

// 1.3 name of a template parameter object

// 1.4 name of a data member

// 1.5 function call OR overloaded operator expression / 's return type == lvalue reference
std::getline
std::cin
std::cout << 1, str1 = str2, or ++it

// 1.5.1 function call / 's return type == lvalue reference
int& a_ref()
{
    static int a{3};
    return a;
}

void foo()
{
    a_ref() = 5;  // `a_ref()` is lvalue, function call whose return type is lvalue reference
}  

// 1.6 assignment & compound assignment expressions
a = b
a += b
a %= b

// 1.7 pre-increment & pre-decrement
++a
--a

// 1.8 indirection expression
*p

// 1.9 subscript expression
a[n]            // 1 operand | a[n] == array lvalue 
p[n]

// 1.10 member of object expression
a.m      
// EXCEPT TO
//      1. `m` == member enumerator OR non-static member function
//      2. `a` == rvalue & `m` == object type'S non-static data member 

struct foo
{
    enum bar
    {
        m // member enumerator
    };
};

void baz()
{
    foo a;
    a.m = 42; // ill-formed, lvalue required as left operand of assignment
}

    
struct foo
{
    void m() {} // non-static member function
};

void baz()
{
    foo a;

    // `a.m` is a prvalue, hence the address cannot be taken by built-in
    // address-of operator
    void (foo::*p1)() = &a.m; // ill-formed

    void (foo::*p2)() = &foo::m; // OK: pointer to member function
}
    
    
struct foo
{
    static void m() {} // static member function
};

void baz()
{
    foo a;
    void (*p1)() = &a.m;     // `a.m` is an lvalue
    void (*p2)() = &foo::m;  // the same
}  

// 1.11 member of pointer expression
p->m
// EXCEPT TO, `m` == member enumerator OR non-static member function

// 1.12 pointer to member of object expression
a.*mp
// a    == lvalue 
// mp   == pointer -- to -- data member

// 1.13 pointer to member of pointer expression
p->*mp
// mp   == pointer -- to -- data member

// 1.14 pointer to member of pointer expression
p->*mp
// mp   == pointer -- to -- data member

// 1.15 comma expression
a, b
// b == lvalue

// 1.16 ternary conditional expression
a ? b : c

// 1.17 string literal
"Hello, world!";

// 1.18 cast expression -- to -- lvalue reference type
static_cast<int&>(x);
static_cast<void(&)(int)>(x);

// 1.19 lvalue reference type's template parameter
template <int& v>
void set()
{
    v = 5; // template parameter is lvalue
}

int a{3}; // static variable, fixed address is known at compile-time

void foo()
{
    set<a>();
}

// 1.20 function call OR overloaded operator expression / 's return type == rvalue reference -- to -- function

// 1.21 cast expression -- to -- rvalue reference -- to -- function type
static_cast<void(&&)(int)>(x)

// 2. regardless of type
