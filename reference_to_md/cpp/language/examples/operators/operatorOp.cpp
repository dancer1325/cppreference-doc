#include <iostream>

class Value {
private:
    int data;

public:
    Value(int d = 0) : data(d) {}

    int get() const { return data; }
    void set(int d) { data = d; }

    // 1. arithmetic operators ============
    // 1.1 operator+
    Value operator+(const Value& other) const {
        return Value(data + other.data);
    }

    // 1.2 operator-
    Value operator-(const Value& other) const {
        return Value(data - other.data);
    }

    // 1.3 operator*
    Value operator*(const Value& other) const {
        return Value(data * other.data);
    }

    // 1.4 operator/
    Value operator/(const Value& other) const {
        return Value(data / other.data);
    }

    // 1.5 operator%
    Value operator%(const Value& other) const {
        return Value(data % other.data);
    }

    // 2. bitwise operators
    // 2.1 operator^
    Value operator^(const Value& other) const {  // XOR
        return Value(data ^ other.data);
    }

    // 2.2 operator&
    Value operator&(const Value& other) const {  // AND
        return Value(data & other.data);
    }

    // 2.3 operator|
    Value operator|(const Value& other) const {  // OR
        return Value(data | other.data);
    }

    // 2.4 operator~
    Value operator~() const {  // NOT
        return Value(~data);
    }

    // 2.5 operator<<
    Value operator<<(int shift) const {  // left shift
        return Value(data << shift);
    }

    // 2.6 operator>>
    Value operator>>(int shift) const {  // right shift
        return Value(data >> shift);
    }

    // 3. logic operators
    // 3.1 operator!
    bool operator!() const {
        return !data;
    }

    // 3.2 operator&&
    bool operator&&(const Value& other) const {
        return data && other.data;
    }

    // 3.3 operator||
    bool operator||(const Value& other) const {
        return data || other.data;
    }

    // 4. compare operators
    // 4.1 operator==
    bool operator==(const Value& other) const {
        return data == other.data;
    }

    // 4.2 operator!=
    bool operator!=(const Value& other) const {
        return data != other.data;
    }

    // 4.3 operator<
    bool operator<(const Value& other) const {
        return data < other.data;
    }

    // 4.4 operator>
    bool operator>(const Value& other) const {
        return data > other.data;
    }

    // 4.5 operator<=
    bool operator<=(const Value& other) const {
        return data <= other.data;
    }

    // 4.6 operator>=
    bool operator>=(const Value& other) const {
        return data >= other.data;
    }

    // C++20: three-way comparison (spaceship operator)
    // auto operator<=>(const Value& other) const = default;

    // 5. assign operators
    // 5.1 operator=
    Value& operator=(const Value& other) {
        data = other.data;
        return *this;
    }

    // 5.2 operator+=
    Value& operator+=(const Value& other) {
        data += other.data;
        return *this;
    }

    // 5.3 operator-=
    Value& operator-=(const Value& other) {
        data -= other.data;
        return *this;
    }

    // 5.4 operator*=
    Value& operator*=(const Value& other) {
        data *= other.data;
        return *this;
    }

    // 5.5 operator/=
    Value& operator/=(const Value& other) {
        data /= other.data;
        return *this;
    }

    // 5.6 operator%=
    Value& operator%=(const Value& other) {
        data %= other.data;
        return *this;
    }

    // 5.7 operator^=
    Value& operator^=(const Value& other) {
        data ^= other.data;
        return *this;
    }

    // 5.8 operator&=
    Value& operator&=(const Value& other) {
        data &= other.data;
        return *this;
    }

    // 5.9 operator!=
    Value& operator|=(const Value& other) {
        data |= other.data;
        return *this;
    }

    // 5.10 operator<<=
    Value& operator<<=(int shift) {
        data <<= shift;
        return *this;
    }

    // 5.11 operator>>=
    Value& operator>>=(int shift) {
        data >>= shift;
        return *this;
    }

    // 6. increase/decrease operators
    // 6.1 operator++ (pre-incremento)
    Value& operator++() {
        ++data;
        return *this;
    }

    // 6.2 operator++ (post-incremento)
    Value operator++(int) {
        Value temp = *this;
        ++data;
        return temp;
    }

    // 6.3 operator-- (pre-decremento)
    Value& operator--() {
        --data;
        return *this;
    }

    // 6.4 operator-- (post-decremento)
    Value operator--(int) {
        Value temp = *this;
        --data;
        return temp;
    }

    // 7. subscript operator -- [] --
    int& operator[](int index) {
        return data;  // ONLY returns data
    }

    // 8. function call operator
    int operator()() const {
        return data * data;
    }

    // 9. operator to access member
    Value* operator->() {
        return this;
    }

    // 10. operator comma
    Value& operator,(Value& other) {
        return other;  // retorna el segundo operando
    }
};

int main() {
    Value a(10), b(3);

    std::cout << "=== OPERADORES ARITMÉTICOS ===\n";
    std::cout << "a + b = " << (a + b).get() << "\n";
    std::cout << "a - b = " << (a - b).get() << "\n";
    std::cout << "a * b = " << (a * b).get() << "\n";
    std::cout << "a / b = " << (a / b).get() << "\n";
    std::cout << "a % b = " << (a % b).get() << "\n\n";

    std::cout << "=== OPERADORES BITWISE ===\n";
    std::cout << "a ^ b = " << (a ^ b).get() << " (XOR)\n";
    std::cout << "a & b = " << (a & b).get() << " (AND)\n";
    std::cout << "a | b = " << (a | b).get() << " (OR)\n";
    std::cout << "~a = " << (~a).get() << " (NOT)\n";
    std::cout << "a << 1 = " << (a << 1).get() << " (left shift)\n";
    std::cout << "a >> 1 = " << (a >> 1).get() << " (right shift)\n\n";

    std::cout << "=== OPERADORES LÓGICOS ===\n";
    std::cout << "!Value(0) = " << (!Value(0)) << "\n";
    std::cout << "a && b = " << (a && b) << "\n";
    std::cout << "a || Value(0) = " << (a || Value(0)) << "\n\n";

    std::cout << "=== OPERADORES DE COMPARACIÓN ===\n";
    std::cout << "a == b: " << (a == b) << "\n";
    std::cout << "a != b: " << (a != b) << "\n";
    std::cout << "a < b: " << (a < b) << "\n";
    std::cout << "a > b: " << (a > b) << "\n";
    std::cout << "a <= b: " << (a <= b) << "\n";
    std::cout << "a >= b: " << (a >= b) << "\n\n";

    std::cout << "=== OPERADORES DE ASIGNACIÓN ===\n";
    Value c = a;
    std::cout << "c = a: " << c.get() << "\n";
    c += b;
    std::cout << "c += b: " << c.get() << "\n";
    c -= b;
    std::cout << "c -= b: " << c.get() << "\n";
    c *= Value(2);
    std::cout << "c *= 2: " << c.get() << "\n\n";

    std::cout << "=== INCREMENTO/DECREMENTO ===\n";
    Value d(5);
    std::cout << "d inicial: " << d.get() << "\n";
    std::cout << "++d: " << (++d).get() << "\n";
    std::cout << "d++: " << (d++).get() << " (retorna valor anterior)\n";
    std::cout << "d después: " << d.get() << "\n";
    std::cout << "--d: " << (--d).get() << "\n\n";

    std::cout << "=== OPERADOR SUBSCRIPT [] ===\n";
    std::cout << "a[0]: " << a[0] << "\n\n";

    std::cout << "=== OPERADOR FUNCTION CALL () ===\n";
    std::cout << "a(): " << a() << " (cuadrado de " << a.get() << ")\n";

    return 0;
}
