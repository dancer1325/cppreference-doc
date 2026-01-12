# C++ Program
## == Sequence of Text Files
* see 
  * [calculator.h](calculator.h)    
    * == declarations
  * [calculator.cpp](calculator.cpp)
    * == implementations
  * [main.cpp](main.cpp)
    * entry point -- via -- `main()`

TODO: 
## Estructura de los archivos

### Header File: `calculator.h`
- Contiene **DECLARACIONES** (QUÉ existe)
- Declaraciones de funciones, clases, constantes
- Se incluye con `#include "calculator.h"`
- NO se compila directamente (se copia donde se incluye)

### Source File: `calculator.cpp`
- Contiene **IMPLEMENTACIONES** (CÓMO funciona)
- Implementa las funciones/métodos declarados en .h
- Se compila en archivo objeto: `calculator.o`

### Source File: `main.cpp`
- Contiene la función `main()` (DÓNDE empieza)
- Punto de entrada del programa
- Se compila en archivo objeto: `main.o`

---

## Proceso: De texto a ejecutable

### 1. Traducción (Translation) - Fases 1-7

```bash
# Compilar cada .cpp en archivo objeto .o
g++ -std=c++17 -c calculator.cpp -o calculator.o
g++ -std=c++17 -c main.cpp -o main.o
```

Durante la compilación:
- Fase 1-3: Mapeo, lexing, tokenización
- Fase 4: Preprocesamiento (`#include` copia calculator.h)
- Fase 5-6: Codificación de literales
- Fase 7: Análisis y generación de código objeto

### 2. Linking - Fase 9

```bash
# Enlazar archivos objeto en ejecutable
g++ calculator.o main.o -o program
```

El linker:
- Combina calculator.o + main.o
- Resuelve referencias entre archivos
- Añade bibliotecas estándar
- Genera el ejecutable

### 3. Ejecución

```bash
# Ejecutar el programa
./program arg1 arg2
```

Cuando ejecutas `./program`:
1. SO carga el ejecutable en memoria
2. **C++ implementation** (startup code) prepara el entorno
3. **C++ implementation llama a main(argc, argv)** ← ¡Aquí empieza tu código!
4. main() ejecuta
5. main() retorna → std::exit() limpia → programa termina

---

## "which is executed when the C++ implementation calls its main function"

Esta frase hace referencia a **cómo se ejecuta el ejecutable**:

- **"They undergo translation"** = Proceso de compilación (texto → ejecutable)
- **"which is executed"** = El ejecutable resultante SE EJECUTA
- **"when the C++ implementation calls its main function"** = El runtime de C++ llama a main()

**C++ implementation** = Startup code + Runtime system + OS

---

## Compilación rápida

```bash
# Opción 1: Todo de una vez
g++ -std=c++17 calculator.cpp main.cpp -o program

# Opción 2: Por separado (mejor para proyectos grandes)
g++ -std=c++17 -c calculator.cpp -o calculator.o
g++ -std=c++17 -c main.cpp -o main.o
g++ calculator.o main.o -o program

# Ejecutar con argumentos
./program arg1 arg2
```

---

## Diagrama del proceso

```
ARCHIVOS DE TEXTO
    ↓
calculator.h  calculator.cpp  main.cpp
    ↓              ↓              ↓
    └──────┬───────┘              │
           ↓                      ↓
     [COMPILAR]              [COMPILAR]
           ↓                      ↓
    calculator.o              main.o
           ↓                      ↓
           └────────┬─────────────┘
                    ↓
               [LINKING]
                    ↓
          program (ejecutable)
                    ↓
              [EJECUCIÓN]
                    ↓
   SO carga → Startup code → Llama a main()
```
