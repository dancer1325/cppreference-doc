

void foo() {}

void baz()
    {
        // `foo` is lvalue
        // address may be taken by built-in address-of operator
        void (*p)() = &foo;
    }
    
    
struct foo {};

template <foo a>
void baz()
{
    const foo* obj = &a;  // `a` is an lvalue, template parameter object
}