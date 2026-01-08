# compiler processes C++ source files -- to -- produce C++ programs

## Las 9 Fases de Traducción

1. **Physical source → basic character set** - Conversión de caracteres
2. **Line splicing** - Unir líneas con backslash (`phase2_line_splicing.cpp`)
3. **Tokenization & Preprocessing** - Procesar directivas (#include, #define) (`phase3_preprocessing.cpp`)
4. **Character/string literals** - Procesar literales
5. **String concatenation** - Concatenar strings adyacentes (`phase5_string_concatenation.cpp`)
6. **Translation** - Parsing y análisis semántico
7. **Template instantiation** - Instanciar templates (`phase7_template_instantiation.cpp`)
8. **Instantiation** - Instanciar entidades necesarias
9. **Linking** - Combinar archivos objeto y resolver símbolos (`phase9_linking.cpp`)

## Ejemplos

- `phase2_line_splicing.cpp` - Cómo el compilador une líneas con `\`
- `phase3_preprocessing.cpp` - Macros y directivas del preprocesador
- `phase5_string_concatenation.cpp` - Concatenación automática de strings
- `phase7_template_instantiation.cpp` - Instanciación de templates
- `phase9_linking.cpp` - Proceso de linking y resolución de símbolos
- `complete_process.cpp` - Ejemplo completo mostrando múltiples fases

## Comandos útiles

```bash
# Ver solo el preprocesado (hasta fase 3)
g++ -E phase3_preprocessing.cpp -o preprocessed.ii

# Ver el ensamblador (hasta fase 6)
g++ -S complete_process.cpp -o assembly.s

# Compilar sin linkear (hasta fase 8)
g++ -c complete_process.cpp -o object.o

# Compilar y linkear completamente (todas las fases)
g++ complete_process.cpp -o executable
```