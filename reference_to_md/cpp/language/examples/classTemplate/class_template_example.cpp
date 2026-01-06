// 1. syntax
// 1.1 `template < parameter-list > class-declaration`
// 1.1.1    1 parameter
template<typename T>
class Container {
private:
    T data;
public:
    Container(T value) : data(value) {}
    T get() const { return data; }
    void set(T value) { data = value; }
};

// 1.1.2    MULTIPLE parameterS
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

// 1.2 `template < parameter-list > requires constraint class-declaration`
// 1.2.1    Simple constraint
#include <concepts>

template<typename T>
requires std::integral<T>
class IntegralContainer {
private:
    T value;
public:
    IntegralContainer(T val) : value(val) {}
    T get() const { return value; }
    void increment() { ++value; }
};

// 1.2.2    Multiple constraints (conjunction)
template<typename T>
requires std::integral<T> && std::signed_integral<T>
class SignedIntegralContainer {
private:
    T value;
public:
    SignedIntegralContainer(T val) : value(val) {}
    T get() const { return value; }
    void negate() { value = -value; }
};

int main() {
    // Examples of template < parameter-list > class-declaration
    Container<int> c1(42);
    Array<double, 5> arr;

    // Examples of template < parameter-list > requires constraint class-declaration
    IntegralContainer<int> ic(10);           // OK: int is integral
    // IntegralContainer<double> ic2(3.14);  // ERROR: double is not integral

    SignedIntegralContainer<int> sic(-5);    // OK: int is signed integral
    // SignedIntegralContainer<unsigned> u;  // ERROR: unsigned is not signed
}
