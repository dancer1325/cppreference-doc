#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <string>

// 1. declare functions
int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
double divide(int a, int b);

// 2. declare class
class Calculator {
private:
    std::string name;
    int last_result;

public:
    // 2.1 declare class' methods
    Calculator(const std::string& calc_name);

    int calculate(char operation, int a, int b);
    int get_last_result() const;
    void print_info() const;

    // 2.1.1 ALSO POSSIBLE to implement | headers
    void reset() {
        last_result = 0;
    }
};

// 3. constants
const int MAX_VALUE = 1000;
const int MIN_VALUE = -1000;

#endif // CALCULATOR_H

// ============================================================================
// NOTAS:
// ============================================================================
// 1. Este archivo se INCLUYE en otros archivos con #include "calculator.h"
// 2. Los guards (#ifndef, #define, #endif) evitan inclusiones múltiples
// 3. Este archivo NO genera código ejecutable por sí solo
// 4. Durante la compilación, el preprocesador COPIA este contenido
//    en los archivos que hacen #include
