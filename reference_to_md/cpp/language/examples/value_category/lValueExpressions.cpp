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




// 2. regardless of type
