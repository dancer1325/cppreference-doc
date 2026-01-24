#include <iostream>
#include <utility>
#include <type_traits>

// Helper / show the category
template<typename T>
void print_category(T&& expr) {
  using U = decltype(expr);

  if constexpr (std::is_lvalue_reference_v<U>) {
      std::cout << "  → LVALUE\n";
  } else if constexpr (std::is_rvalue_reference_v<U>) {
      std::cout << "  → XVALUE (rvalue reference)\n";
  } else {
      std::cout << "  → PRVALUE (pure rvalue)\n";
  }
}

int get_value() { return 42; }
int& get_ref() { static int x = 10; return x; }
int&& get_rvalue_ref() { static int x = 20; return std::move(x); }

int main()
{
  int x = 5;

  std::cout << "Expression: x\n";
  print_category(x);  // lvalue

  std::cout << "Expression: 42\n";
  print_category(42);  // prvalue

  std::cout << "Expression: x + 1\n";
  print_category(x + 1);  // prvalue

  std::cout << "Expression: ++x\n";
  print_category(++x);  // lvalue (returns reference)

  std::cout << "Expression: x++\n";
  print_category(x++);  // prvalue (returns copy)

  std::cout << "Expression: get_value()\n";
  print_category(get_value());  // prvalue

  std::cout << "Expression: get_ref()\n";
  print_category(get_ref());  // lvalue

  std::cout << "Expression: std::move(x)\n";
  print_category(std::move(x));  // xvalue

  std::cout << "Expression: get_rvalue_ref()\n";
  print_category(get_rvalue_ref());  // xvalue

  std::cout << "Expression: \"hello\"\n";
  print_category("hello");  // lvalue (string literal is array)

  std::cout << "Expression: 3.14\n";
  print_category(3.14);  // prvalue

  return 0;
}