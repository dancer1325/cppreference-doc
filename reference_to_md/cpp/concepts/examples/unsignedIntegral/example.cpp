#include <concepts>
#include <iostream>
#include <string_view>

void test(std::signed_integral auto x, std::string_view text = "")
{
    std::cout << text << " (" + (text == "") << x << ") is a signed integral\n";
}

void test(std::unsigned_integral auto x, std::string_view text = "")
{
    std::cout << text << " (" + (text == "") << x << ") is an unsigned integral\n";
}

void test(auto x, std::string_view text = "")
{
    std::cout << text << " (" + (text == "") << x << ") is non-integral\n";
}

int main()
{
    test(42);               // signed
    test(0xFULL, "0xFULL"); // unsigned
    test('A');              // platform-dependent
    test(true, "true");     // unsigned
    test(4e-2, "4e-2");     // non-integral (hex-float)
    test("∫∫");             // non-integral
}
