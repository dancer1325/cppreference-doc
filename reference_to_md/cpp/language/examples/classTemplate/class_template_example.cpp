#include <iostream>

// 1. Basic class template
template<typename T>
class Container {
private:
    T data;
public:
    Container(T value) : data(value) {}
    T get() const { return data; }
    void set(T value) { data = value; }
};

// 2. Class template with multiple parameters
template<typename T, int Size>
class Array {
private:
    T elements[Size];
public:
    void set(int index, T value) {
        if (index >= 0 && index < Size) {
            elements[index] = value;
        }
    }
    
    T get(int index) const {
        if (index >= 0 && index < Size) {
            return elements[index];
        }
        return T{};
    }
    
    constexpr int size() const { return Size; }
};

// 3. Class template specialization
template<typename T>
class Printer {
public:
    void print(const T& value) {
        std::cout << "Generic: " << value << std::endl;
    }
};

// Specialization for bool
template<>
class Printer<bool> {
public:
    void print(const bool& value) {
        std::cout << "Bool: " << (value ? "true" : "false") << std::endl;
    }
};

int main() {
    std::cout << "=== Class Template Examples ===\n\n";
    
    // 1. Basic template usage
    std::cout << "1. Basic Container template:\n";
    Container<int> int_container(42);
    Container<std::string> string_container("Hello");
    
    std::cout << "Int container: " << int_container.get() << std::endl;
    std::cout << "String container: " << string_container.get() << std::endl;
    
    // 2. Template with non-type parameter
    std::cout << "\n2. Array template with size parameter:\n";
    Array<int, 5> int_array;
    Array<double, 3> double_array;
    
    // Fill arrays
    for (int i = 0; i < int_array.size(); ++i) {
        int_array.set(i, i * 10);
    }
    
    for (int i = 0; i < double_array.size(); ++i) {
        double_array.set(i, i * 1.5);
    }
    
    // Print arrays
    std::cout << "Int array: ";
    for (int i = 0; i < int_array.size(); ++i) {
        std::cout << int_array.get(i) << " ";
    }
    std::cout << std::endl;
    
    std::cout << "Double array: ";
    for (int i = 0; i < double_array.size(); ++i) {
        std::cout << double_array.get(i) << " ";
    }
    std::cout << std::endl;
    
    // 3. Template specialization
    std::cout << "\n3. Template specialization:\n";
    Printer<int> int_printer;
    Printer<bool> bool_printer;
    Printer<std::string> string_printer;
    
    int_printer.print(123);
    bool_printer.print(true);        // Uses specialized version
    bool_printer.print(false);       // Uses specialized version
    string_printer.print("Template");
    
    // 4. template name vs class name
    std::cout << "\n4. Template name concept:\n";
    std::cout << "Container is now a TEMPLATE NAME, not a class name\n";
    std::cout << "Must specify type: Container<int>, Container<string>, etc.\n";
    
    // Container obj;           // ERROR - Container is template name
    Container<char> char_obj('A'); // OK - Container<char> is a type
    std::cout << "Char container: " << char_obj.get() << std::endl;
    
    return 0;
}
