// TODO: function call or an overloaded operator expression, whose return type is lvalue reference, such as [std::getline](../string/basic_string/getline.html)([std::cin](../io/cin.html), str), [std::cout](../io/cout.html) << 1, str1 = str2, or ++it;

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