// ============================================================================
// main.cpp - SOURCE FILE (punto de entrada del programa)
// ============================================================================
// Este es un archivo de texto que contiene la función main()
// Es el punto de entrada que la "C++ implementation" llamará

#include "calculator.h"  // Incluye las declaraciones
#include <iostream>
#include <exception>

// ============================================================================
// FUNCIÓN MAIN - Punto de entrada del programa
// ============================================================================
// La "C++ implementation" (runtime de C++) llama a esta función
// cuando se ejecuta el programa ejecutable

int main(int argc, char* argv[]) {
    std::cout << "=== C++ Program == Sequence of Text Files ===\n\n";

    std::cout << "Este programa está compuesto por:\n";
    std::cout << "1. calculator.h   (header file - declaraciones)\n";
    std::cout << "2. calculator.cpp (source file - implementaciones)\n";
    std::cout << "3. main.cpp       (source file - punto de entrada)\n\n";

    // ========================================================================
    // Usando funciones definidas en calculator.cpp
    // ========================================================================
    std::cout << "--- Usando funciones globales ---\n";
    std::cout << "add(10, 5) = " << add(10, 5) << "\n";
    std::cout << "subtract(10, 5) = " << subtract(10, 5) << "\n";
    std::cout << "multiply(10, 5) = " << multiply(10, 5) << "\n";

    try {
        std::cout << "divide(10, 5) = " << divide(10, 5) << "\n";
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << "\n";
    }

    std::cout << "\n";

    // ========================================================================
    // Usando clase definida en calculator.h e implementada en calculator.cpp
    // ========================================================================
    std::cout << "--- Usando clase Calculator ---\n";

    // Crear objeto de la clase Calculator
    Calculator my_calc("MiCalculadora");

    // Realizar operaciones
    std::cout << "Calculando: 15 + 3 = " << my_calc.calculate('+', 15, 3) << "\n";
    std::cout << "Calculando: 20 - 7 = " << my_calc.calculate('-', 20, 7) << "\n";
    std::cout << "Calculando: 6 * 4 = " << my_calc.calculate('*', 6, 4) << "\n";

    std::cout << "\n";
    my_calc.print_info();

    std::cout << "\n--- Proceso de compilación y ejecución ---\n";
    std::cout << "1. TRADUCCIÓN (Translation):\n";
    std::cout << "   g++ -c calculator.cpp -o calculator.o\n";
    std::cout << "   g++ -c main.cpp -o main.o\n";
    std::cout << "   (Cada .cpp se compila en un .o separadamente)\n\n";

    std::cout << "2. LINKING:\n";
    std::cout << "   g++ calculator.o main.o -o program\n";
    std::cout << "   (Los .o se combinan en un ejecutable)\n\n";

    std::cout << "3. EJECUCIÓN:\n";
    std::cout << "   ./program\n";
    std::cout << "   (La C++ implementation llama a main())\n\n";

    std::cout << "Argumentos de línea de comandos:\n";
    std::cout << "argc = " << argc << "\n";
    for (int i = 0; i < argc; ++i) {
        std::cout << "argv[" << i << "] = " << argv[i] << "\n";
    }

    return 0;  // Retorna al runtime, que llama a std::exit(0)
}

// ============================================================================
// RESUMEN: C++ Program == Sequence of Text Files
// ============================================================================
//
// Un programa C++ es una secuencia de archivos de texto:
//
// ┌─────────────────────────────────────────────────────────────┐
// │ HEADER FILES (.h, .hpp)                                     │
// │ • Contienen DECLARACIONES                                   │
// │ • Se incluyen con #include                                  │
// │ • No se compilan directamente                               │
// │ • Ejemplo: calculator.h                                     │
// └─────────────────────────────────────────────────────────────┘
//
// ┌─────────────────────────────────────────────────────────────┐
// │ SOURCE FILES (.cpp, .cc, .cxx)                              │
// │ • Contienen DEFINICIONES/IMPLEMENTACIONES                   │
// │ • Se compilan en archivos objeto (.o)                       │
// │ • Ejemplos: calculator.cpp, main.cpp                        │
// └─────────────────────────────────────────────────────────────┘
//
// ┌─────────────────────────────────────────────────────────────┐
// │ PROCESO DE TRANSLATION (Traducción)                         │
// │                                                             │
// │ calculator.cpp  ──┐                                         │
// │                   ├─→ [Fases 1-7] ─→ calculator.o          │
// │ calculator.h   ───┘                                         │
// │                                                             │
// │ main.cpp       ──┐                                          │
// │                  ├─→ [Fases 1-7] ─→ main.o                 │
// │ calculator.h  ───┘                                          │
// │                                                             │
// │ [Fase 8] Instanciación de templates                        │
// │                                                             │
// │ [Fase 9] LINKING:                                           │
// │ calculator.o + main.o + libstdc++ ─→ program (ejecutable)  │
// └─────────────────────────────────────────────────────────────┘
//
// ┌─────────────────────────────────────────────────────────────┐
// │ EJECUCIÓN (Execution)                                       │
// │                                                             │
// │ ./program                                                   │
// │    ↓                                                        │
// │ SO carga el ejecutable                                     │
// │    ↓                                                        │
// │ Startup code (C++ implementation)                          │
// │    ↓                                                        │
// │ C++ implementation llama a main() ← ¡AQUÍ EMPIEZA TU CÓDIGO!│
// │    ↓                                                        │
// │ main() retorna                                             │
// │    ↓                                                        │
// │ std::exit() limpia                                         │
// │    ↓                                                        │
// │ Programa termina                                           │
// └─────────────────────────────────────────────────────────────┘
