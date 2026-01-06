* defined | header [`<concepts>`](../header/concepts.md)   

* requirements
  * C++20


template< class T >  
concept integral = [std::is_integral_v](../types/is_integral.html)<T>; |  |  (since   
| |   
  
The concept integral<T> is satisfied if and only if `T` is an integral type.

---
// TODO: add it by Claude
## Explanation

### What is a Concept?
A **concept** is a named set of requirements that a type must satisfy. Introduced in C++20, concepts allow you to constrain template parameters at compile-time with clear, declarative syntax.

### Understanding the Definition

```cpp
template< class T >
concept integral = std::is_integral_v<T>;
```

This definition means:
* **`template< class T >`**: Declares a template parameter `T` that represents any type
* **`concept integral`**: Defines a new concept named `integral`
* **`= std::is_integral_v<T>`**: The requirement - `T` must satisfy the condition that `std::is_integral_v<T>` evaluates to `true`

The concept `integral<T>` acts as a **compile-time boolean predicate**:
* Returns `true` if `T` is an integral type (`bool`, `char`, `int`, `long`, etc.)
* Returns `false` otherwise (for `double`, `std::string`, user-defined types, etc.)

### Types that Satisfy `std::integral`

The following types satisfy `std::integral<T>`:
* `bool`
* Character types: `char`, `char8_t`, `char16_t`, `char32_t`, `wchar_t`
* Signed integers: `signed char`, `short`, `int`, `long`, `long long`
* Unsigned integers: `unsigned char`, `unsigned short`, `unsigned int`, `unsigned long`, `unsigned long long`

Types that do NOT satisfy `std::integral<T>`:
* Floating-point types: `float`, `double`, `long double`
* Pointers: `int*`, `void*`
* References: `int&`, `const int&`
* User-defined types: classes, structs, unions
* Other types: `std::string`, `std::vector<int>`, etc.

### Usage Example

```cpp
#include <concepts>
#include <iostream>

// Function template constrained by std::integral
template<std::integral T>
T increment(T value) {
    return value + 1;
}

int main() {
    // Valid: int satisfies std::integral
    int a = increment(5);           // OK: returns 6

    // Valid: char satisfies std::integral
    char c = increment('A');        // OK: returns 'B'

    // Invalid: double does NOT satisfy std::integral
    // double d = increment(3.14);  // Compilation ERROR

    // Invalid: std::string does NOT satisfy std::integral
    // auto s = increment("hello"); // Compilation ERROR
}
```

### Benefits

Using `std::integral` provides:
1. **Clear intent**: Makes it explicit that a function/class only works with integral types
2. **Better error messages**: Violations are caught at the point of use with clear diagnostics
3. **Compile-time safety**: Invalid types are rejected before code generation
4. **Documentation**: The constraint serves as machine-checkable documentation
// TODO: add it by Claude

----

### References

  * C++23 standard (ISO/IEC 14882:2024): 



    

  * 18.4.7 Arithmetic concepts [concepts.arithmetic] 



  * C++20 standard (ISO/IEC 14882:2020): 



    

  * 18.4.7 Arithmetic concepts [concepts.arithmetic] 



### See also

[ is_integral](../types/is_integral.html "cpp/types/is integral")(C++11) |  checks if a type is an integral type   
(class template)   
---|---
