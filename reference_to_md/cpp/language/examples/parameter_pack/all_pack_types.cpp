#include <iostream>
#include <tuple>
#include <utility>
#include <string>

// ============================================================================
// 1. TEMPLATE PARAMETER PACK & FUNCTION PARAMETER PACK
// ============================================================================

// Template parameter pack: Types...
// Function parameter pack: args
template<typename... Types>
void print_all(Types... args) {
    std::cout << "=== Template & Function Parameter Pack ===" << std::endl;
    std::cout << "Number of arguments: " << sizeof...(Types) << std::endl;

    // Pack expansion in fold expression (C++17)
    ((std::cout << args << " "), ...);
    std::cout << std::endl;
}

// Template parameter pack with non-type parameters
template<int... Values>
struct SumValues {
    static constexpr int sum = (Values + ...);  // fold expression
};

// ============================================================================
// 2. LAMBDA INIT-CAPTURE PACK (C++20)
// ============================================================================

template<typename... Args>
auto create_lambda_with_pack(Args... args) {
    std::cout << "\n=== Lambda Init-Capture Pack (C++20) ===" << std::endl;

    // Lambda init-capture pack: ...captured = args
    // Each element of args is captured by value into the pack 'captured'
    auto lambda = [...captured = args]() {
        std::cout << "Captured values: ";
        ((std::cout << captured << " "), ...);
        std::cout << std::endl;

        // Can also modify if captured by reference
        return std::make_tuple(captured...);
    };

    return lambda;
}

template<typename... Args>
auto create_lambda_with_ref_pack(Args&... args) {
    std::cout << "\n=== Lambda Init-Capture Pack by Reference ===" << std::endl;

    // Capture pack by reference
    auto lambda = [&...captured = args]() mutable {
        std::cout << "Modifying captured references..." << std::endl;
        ((captured = captured * 2), ...);  // Modify each captured value
    };

    return lambda;
}

// ============================================================================
// 3. STRUCTURED BINDING PACK (C++26)
// Note: This requires C++26 support, may not compile on older compilers
// ============================================================================

#if __cplusplus >= 202600L || defined(__cpp_structured_bindings) && __cpp_structured_bindings >= 202601L

template<typename... Tuples>
void process_tuples(Tuples... tuples) {
    std::cout << "\n=== Structured Binding Pack (C++26) ===" << std::endl;

    // Structured binding pack: ...elems
    // Each tuple is unpacked into the structured binding pack
    auto [...elems] = std::tuple{tuples...};

    std::cout << "Elements from structured binding pack: ";
    ((std::cout << elems << " "), ...);
    std::cout << std::endl;
}

#endif

// ============================================================================
// 4. COMBINED EXAMPLE: All packs working together
// ============================================================================

template<typename... Types>
class VariadicContainer {
    std::tuple<Types...> data;  // Template parameter pack in template argument

public:
    // Constructor with function parameter pack
    VariadicContainer(Types... args) : data(args...) {
        std::cout << "\n=== Combined Example ===" << std::endl;
        std::cout << "Container created with " << sizeof...(Types) << " elements" << std::endl;
    }

    // Method that creates a lambda with init-capture pack
    auto create_printer() {
        return [... values = std::get<Types>(data)]() {
            std::cout << "Values in container: ";
            ((std::cout << values << " "), ...);
            std::cout << std::endl;
        };
    }

    // Method with function parameter pack expansion
    template<typename... OtherTypes>
    void append_and_print(OtherTypes... others) {
        std::cout << "Appending: ";
        ((std::cout << others << " "), ...);
        std::cout << std::endl;
    }
};

// ============================================================================
// 5. PRACTICAL EXAMPLES
// ============================================================================

// Perfect forwarding with parameter packs
template<typename... Args>
void forward_to_function(Args&&... args) {
    std::cout << "\n=== Perfect Forwarding Example ===" << std::endl;
    print_all(std::forward<Args>(args)...);
}

// Variadic template with multiple packs (same size required)
template<typename... T1>
struct Zip {
    template<typename... T2>
    static void print_pairs(T1... first, T2... second) {
        static_assert(sizeof...(T1) == sizeof...(T2), "Packs must have same size");
        std::cout << "\n=== Multiple Parameter Packs ===" << std::endl;

        // Note: This expands both packs simultaneously
        int dummy[] = {(std::cout << "(" << first << "," << second << ") ", 0)...};
        (void)dummy;
        std::cout << std::endl;
    }
};

// ============================================================================
// MAIN FUNCTION
// ============================================================================

int main() {
    std::cout << "C++ Parameter Pack Examples\n" << std::endl;

    // 1. Template & Function Parameter Pack
    print_all(1, 2.5, "hello", 'c', true);

    std::cout << "Sum of 1,2,3,4,5 = " << SumValues<1,2,3,4,5>::sum << std::endl;

    // 2. Lambda Init-Capture Pack (C++20)
    auto lambda1 = create_lambda_with_pack(10, 20, 30);
    auto result = lambda1();

    int a = 5, b = 10, c = 15;
    std::cout << "Before: " << a << " " << b << " " << c << std::endl;
    auto lambda2 = create_lambda_with_ref_pack(a, b, c);
    lambda2();
    std::cout << "After: " << a << " " << b << " " << c << std::endl;

    // 3. Structured Binding Pack (C++26)
    // Uncomment if compiler supports C++26
    #if __cplusplus >= 202600L || defined(__cpp_structured_bindings) && __cpp_structured_bindings >= 202601L
    process_tuples(std::make_tuple(1, 2), std::make_tuple(3, 4), std::make_tuple(5, 6));
    #else
    std::cout << "\n=== Structured Binding Pack (C++26) ===" << std::endl;
    std::cout << "Not supported: requires C++26 compiler" << std::endl;
    #endif

    // 4. Combined Example
    VariadicContainer<int, double, std::string> container(42, 3.14, "test");
    auto printer = container.create_printer();
    printer();
    container.append_and_print(100, 200, 300);

    // 5. Practical Examples
    forward_to_function(1, 2.5, "forwarded", 'x');

    Zip<int, double, char>::print_pairs(1, 2.5, 'a', 10, 20.5, 'z');

    return 0;
}
