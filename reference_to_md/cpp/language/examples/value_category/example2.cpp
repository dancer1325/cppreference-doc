#include <type_traits>

template <class T> struct is_prvalue : [std::true_type](../types/integral_constant.html) {};
template <class T> struct is_prvalue<T&> : [std::false_type](../types/integral_constant.html) {};
template <class T> struct is_prvalue<T&&> : [std::false_type](../types/integral_constant.html) {};

template <class T> struct is_lvalue : [std::false_type](../types/integral_constant.html) {};
template <class T> struct is_lvalue<T&> : [std::true_type](../types/integral_constant.html) {};
template <class T> struct is_lvalue<T&&> : [std::false_type](../types/integral_constant.html) {};

template <class T> struct is_xvalue : [std::false_type](../types/integral_constant.html) {};
template <class T> struct is_xvalue<T&> : [std::false_type](../types/integral_constant.html) {};
template <class T> struct is_xvalue<T&&> : [std::true_type](../types/integral_constant.html) {};

// Example from C++23 standard: 7.2.1 Value category [basic.lval]
struct A
{
    int m;
};

A&& operator+(A, A);
A&& f();

int main()
{
    A a;
    A&& ar = static_cast<A&&>(a);

    // Function call with return type rvalue reference is xvalue
    static_assert(is_xvalue<decltype( (f()) )>::value);

    // Member of object expression, object is xvalue, `m` is a non-static data member
    static_assert(is_xvalue<decltype( (f().m) )>::value);

    // A cast expression to rvalue reference
    static_assert(is_xvalue<decltype( (static_cast<A&&>(a)) )>::value);

    // Operator expression, whose return type is rvalue reference to object
    static_assert(is_xvalue<decltype( (a + a) )>::value);

    // Expression `ar` is lvalue, `&ar` is valid
    static_assert(is_lvalue<decltype( (ar) )>::value);
    [[maybe_unused]] A* ap = &ar;
}