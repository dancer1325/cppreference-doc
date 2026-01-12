// ============================================================================
// calculator.cpp - SOURCE FILE
// ============================================================================
// Este es un archivo de texto que contiene DEFINICIONES/IMPLEMENTACIONES
// Los source files implementan la FUNCIONALIDAD (cómo funciona el código)

#include "calculator.h"  // Incluye las declaraciones del header
#include <iostream>
#include <stdexcept>

// ============================================================================
// IMPLEMENTACIONES DE FUNCIONES
// ============================================================================
// Estas son las DEFINICIONES de las funciones declaradas en calculator.h

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

double divide(int a, int b) {
    if (b == 0) {
        throw std::runtime_error("Division by zero!");
    }
    return static_cast<double>(a) / b;
}

// ============================================================================
// IMPLEMENTACIONES DE LA CLASE Calculator
// ============================================================================

// Constructor
Calculator::Calculator(const std::string& calc_name)
    : name(calc_name), last_result(0) {
    std::cout << "Calculator '" << name << "' created\n";
}

// Método calculate
int Calculator::calculate(char operation, int a, int b) {
    switch (operation) {
        case '+':
            last_result = add(a, b);
            break;
        case '-':
            last_result = subtract(a, b);
            break;
        case '*':
            last_result = multiply(a, b);
            break;
        case '/':
            last_result = static_cast<int>(divide(a, b));
            break;
        default:
            throw std::runtime_error("Unknown operation");
    }
    return last_result;
}

// Método get_last_result
int Calculator::get_last_result() const {
    return last_result;
}

// Método print_info
void Calculator::print_info() const {
    std::cout << "Calculator: " << name << "\n";
    std::cout << "Last result: " << last_result << "\n";
}

// ============================================================================
// NOTAS:
// ============================================================================
// 1. Este archivo se COMPILA separadamente en un archivo objeto (calculator.o)
// 2. Necesita #include "calculator.h" para conocer las declaraciones
// 3. Este archivo genera código ejecutable (código máquina)
// 4. El linker combinará este código con otros archivos .cpp
