#include <iostream>
#include <string>

int getValue() { return 42; }
int& getRef() { static int x = 10; return x; }

int main() {
    int x = 5;
    const int y = 10;
    
    // 1. SAME TYPE, DIFFERENT VALUE_CATEGORY
    
    // Expression: x
    // TYPE: int
    // VALUE_CATEGORY: lvalue (has identity, can take address)
    std::cout << "x: type=int, value_category=lvalue" << std::endl;
    
    // Expression: 42
    // TYPE: int  
    // VALUE_CATEGORY: prvalue (no identity, temporary)
    std::cout << "42: type=int, value_category=prvalue" << std::endl;
    
    // Expression: getValue()
    // TYPE: int
    // VALUE_CATEGORY: prvalue (temporary return value)
    std::cout << "getValue(): type=int, value_category=prvalue" << std::endl;
    
    // Expression: getRef()
    // TYPE: int
    // VALUE_CATEGORY: lvalue (returns reference)
    std::cout << "getRef(): type=int, value_category=lvalue" << std::endl;
    
    std::cout << std::endl;
    
    // Same VALUE_CATEGORY, different TYPE
    std::cout << "--- Same VALUE_CATEGORY (lvalue), Different TYPE ---" << std::endl;
    
    std::string str = "hello";
    double d = 3.14;
    
    // Expression: x
    // TYPE: int
    // VALUE_CATEGORY: lvalue
    std::cout << "x: type=int, value_category=lvalue" << std::endl;
    
    // Expression: str
    // TYPE: std::string
    // VALUE_CATEGORY: lvalue
    std::cout << "str: type=std::string, value_category=lvalue" << std::endl;
    
    // Expression: d
    // TYPE: double
    // VALUE_CATEGORY: lvalue
    std::cout << "d: type=double, value_category=lvalue" << std::endl;
    
    std::cout << std::endl;
    
    // Complex expressions showing independence
    std::cout << "--- Complex Expressions ---" << std::endl;
    
    // Expression: x + y
    // TYPE: int (result of int + int)
    // VALUE_CATEGORY: prvalue (temporary result)
    std::cout << "x + y: type=int, value_category=prvalue" << std::endl;
    
    // Expression: (x = 20)
    // TYPE: int& (assignment returns reference)
    // VALUE_CATEGORY: lvalue (can be assigned to again)
    std::cout << "(x = 20): type=int&, value_category=lvalue" << std::endl;
    x = 5; // reset
    
    // Expression: std::move(x)
    // TYPE: int&& (rvalue reference)
    // VALUE_CATEGORY: xvalue (expiring value)
    std::cout << "std::move(x): type=int&&, value_category=xvalue" << std::endl;
    
    std::cout << std::endl;
    
    // Demonstrating independence with arrays
    std::cout << "--- Array Examples ---" << std::endl;
    int arr[5] = {1, 2, 3, 4, 5};
    
    // Expression: arr
    // TYPE: int[5] (array type)
    // VALUE_CATEGORY: lvalue (has identity)
    std::cout << "arr: type=int[5], value_category=lvalue" << std::endl;
    
    // Expression: arr[2]
    // TYPE: int (element type)
    // VALUE_CATEGORY: lvalue (can be assigned to)
    std::cout << "arr[2]: type=int, value_category=lvalue" << std::endl;
    
    std::cout << std::endl;
    std::cout << "KEY POINT: TYPE and VALUE_CATEGORY are INDEPENDENT!" << std::endl;
    std::cout << "- Same type can have different value categories" << std::endl;
    std::cout << "- Same value category can have different types" << std::endl;
    
    return 0;
}
