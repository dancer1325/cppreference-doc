#include <iostream>

int main() {
    // Expression == sequence of operators + operands
    
    int a = 5, b = 3, c = 2;
    
    // 1. Simple expressions: operand operator operand
    std::cout << "=== Simple Expressions ===" << std::endl;
    std::cout << "a + b = " << (a + b) << std::endl;        // operands: a, b          operator: +      -- computation --
    std::cout << "a * c = " << (a * c) << std::endl;        // operands: a, c          operator: *      -- computation --
    std::cout << "b > c = " << (b > c) << std::endl;        // operands: b, c          operator: >      -- computation --
    
    // 2. Complex expressions: MULTIPLE operators and operands
    std::cout << "\n=== Complex Expressions ===" << std::endl;
    std::cout << "a + b * c = " << (a + b * c) << std::endl; // operands: a, b, c       operators: +, *     -- computation --

    
    std::cout << "(a + b) * c = " << ((a + b) * c) << std::endl; // operands: a, b, c       operators: +, *, ()     -- computation --

    std::cout << "a > b && b > c = " << (a > b && b > c) << std::endl; // operands: a, b, b, c       operators: >, >, &&        -- computation --
    
    // 3. Unary expressions: operator operand
    std::cout << "\n=== Unary Expressions ===" << std::endl;
    std::cout << "-a = " << (-a) << std::endl;              // operand: a           operator: - (unary)         -- computation --
    std::cout << "!true = " << (!true) << std::endl;        // operand: true        operator: !     -- computation --
    std::cout << "++a = " << (++a) << std::endl;            // operand: a           operator: ++ (prefix)       -- computation --
    
    // 4. Ternary expression: operand operator operand operator operand
    std::cout << "\n=== Ternary Expression ===" << std::endl;
    std::cout << "a > b ? a : b = " << (a > b ? a : b) << std::endl; // operands: a, b, a, b            operators: >, ?, :      -- computation --
    
    // 5. Assignment expressions: operand operator operand
    std::cout << "\n=== Assignment Expressions ===" << std::endl;
    int x;
    std::cout << "x = a + b = " << (x = a + b) << std::endl; // operands: x, a, b        operators: =, +        -- computation --
    
    std::cout << "x += c = " << (x += c) << std::endl;       // operands: x, c     operator: +=     -- computation --
    
    // 6. Array subscript expressions: operand operator operand
    std::cout << "\n=== Array Subscript Expressions ===" << std::endl;
    int arr[] = {10, 20, 30};
    std::cout << "arr[1] = " << arr[1] << std::endl; // operands: arr, 1         operator: []       -- computation --
    
    // 7. Member access expressions: operand operator operand
    std::cout << "\n=== Member Access Expressions ===" << std::endl;
    struct Point { int x, y; };
    Point p = {4, 7};
    std::cout << "p.x = " << p.x << std::endl;  // operands: p, x        operator: .        -- computation --
    
    Point* ptr = &p;
    std::cout << "ptr->y = " << ptr->y << std::endl;    // operands: ptr, y     operator: ->        -- computation --
    
    // 8. Complex nested expression
    std::cout << "\n=== Complex Nested Expression ===" << std::endl;
    int result = (a + b) * (c - 1) + arr[0] / 2;                                    //      -- computation --
    std::cout << "(a + b) * (c - 1) + arr[0] / 2 = " << result << std::endl;        //      -- computation --
    // operands: a, b, c, 1, arr, 0, 2
    // operators: +, *, -, +, [], /
    
    return 0;
}
