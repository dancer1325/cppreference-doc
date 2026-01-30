#include <iostream>

// ============================================
// NAMES DEFINED | BASE CLASS
// ============================================
class Animal {
protected:
    void eat() {
        std::cout << "The animal is eating\n";
    }

    void sleep() {
        std::cout << "The animal is sleeping\n";
    }

    void breath() {
        std::cout << "The animal is breathing\n";
    }
};

// ============================================
// DECLARATIVE REGION: class Dog
// Private inheritance makes all members private
// ============================================
class Dog : private Animal {
public:
    // INTRODUCES 'eat' from Animal | Dog's public section
    using Animal::eat;

    // INTRODUCES 'breath' from Animal | Dog's public section
    using Animal::breath;

    // 'sleep' is NOT introduced -> remains private

    void bark() {
        std::cout << "Woof!\n";
        // Can access sleep(), because it's a Dog´s member
        sleep();
    }
};

int main() {
    std::cout << "=== Example with Perro ===\n";
    Dog myDog;

    myDog.eat();     // ✓ 'eat' was introduced -- as -- public
    myDog.breath();  // ✓ 'breath' was introduced -- as -- public
    myDog.bark();    // ✓ Dog's own method

    // myDog.sleep(); // ✗ ERROR: 'sleep' was NOT introduced == it's private

    return 0;
}
