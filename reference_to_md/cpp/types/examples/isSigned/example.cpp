#include <iostream>
#include <type_traits>

class A {};
static_assert(std::is_signed_v<A> == false);

class B { int i; };
static_assert(std::is_signed_v<B> == false);

enum C : int {};
static_assert(std::is_signed_v<C> == false);

enum class D : int {};
static_assert(std::is_signed_v<D> == false);

static_assert
(
    std::is_signed<signed int>::value == true and // C++11
    std::is_signed<signed int>() == true and      // C++11
    std::is_signed<signed int>{} == true and      // C++11
    std::is_signed_v<signed int> == true and      // C++17
    std::is_signed_v<unsigned int> == false and
    std::is_signed_v<float> == true and
    std::is_signed_v<bool> == false and
    std::is_signed_v<signed char> == true and
    std::is_signed_v<unsigned char> == false
);

int main()
{
    // signedness of char is implementation-defined:
    std::cout << std::boolalpha << std::is_signed_v<char> << '\n';
}