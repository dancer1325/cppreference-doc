#include <iostream>
#include <ostream>
// 1. `requires { requirement-seq }`
template<typename T>
concept HasValue = requires
{
 typename T::value;
};

// 2. `requires ( parameter-list ) { requirement-seq }`
bool result = requires(int x) { x + x; };

int main() {
 std::cout << typeid(result).name() << std::endl;
 // mangled value

 return 0;
}