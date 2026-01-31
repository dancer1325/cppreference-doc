#include <iostream>

// ============================================================================
// USE 1: Refer -- to a -- PREVIOUSLY-declared class name (class, struct, or union)
// ============================================================================

struct Point;  // forward declaration

// 1.1 refers -- to -- PREVIOUSLY-declared struct
void printPoint(struct Point p);

struct Point {
    int x, y;
};

// again using elaborated type specifier
void printPoint(struct Point p) {
    std::cout << "Point(" << p.x << ", " << p.y << ")\n";
}

// ============================================================================
// USE 2: Refer -- to -- PREVIOUSLY-declared enum name, EVEN if hidden by non-type
// ============================================================================

enum Color { Red, Green, Blue };

void example_enum_hidden() {
    int Color = 42;  // NON-type declaration / hides the enum name

    // Color c = Red;  // ERROR: -- Reason: 🧠Color refers -- to the -- int variable, NOT the enum🧠

    // Solution: Use elaborated type specifier to access the hidden enum
    enum Color c = Red;  // OK: 'enum Color' explicitly refers to the enum type
    std::cout << "Color value: " << c << "\n";

    // The variable Color is still accessible
    std::cout << "Variable Color: " << Color << "\n";
}

// Another example with different scope
namespace ns {
    enum Status { Active, Inactive };
}

void example_namespace_enum() {
    int Status = 100;  // Hides ns::Status in this scope

    // ns::Status s = ns::Active;  // ERROR: Status is hidden

    enum ns::Status s = ns::Active;  // OK: elaborated type specifier
    std::cout << "Status: " << s << "\n";
}

// ============================================================================
// USE 3: Declare NEW class names
// ============================================================================

// declare & define a new class -- via -- elaborated type specifier
class NewClass {
    int value;
public:
    NewClass(int v) : value(v) {}
    int getValue() const { return value; }
};

// Declare a new struct in a function parameter
void processData(struct DataPacket {
    int id;
    double value;
} packet) {
    std::cout << "DataPacket id: " << packet.id << ", value: " << packet.value << "\n";
}

// Declare a new union
void example_new_union() {
    union Result {
        int intValue;
        double doubleValue;
    } result;

    result.intValue = 42;
    std::cout << "Union int value: " << result.intValue << "\n";
}

// Combined example: forward declaration and definition
struct Node;  // Forward declaration

struct Node* createNode(int value);  // Use elaborated type specifier with forward declaration

struct Node {  // Definition
    int data;
    struct Node* next;  // Elaborated type specifier (though not necessary here)
};

struct Node* createNode(int value) {
    struct Node* node = new struct Node;
    node->data = value;
    node->next = nullptr;
    return node;
}

// ============================================================================
// USE 4: Disambiguation in class scope
// ============================================================================

class Container {
    struct Element {  // Nested class
        int value;
    };

    int Element;  // Member variable with same name

public:
    Container() : Element(0) {}

    struct Element createElement(int v) {  // Elaborated type specifier to refer to the nested class
        struct Element e;
        e.value = v;
        return e;
    }

    void setElement(int val) {
        Element = val;  // Refers to member variable
    }

    int getElement() const {
        return Element;  // Refers to member variable
    }
};

// ============================================================================
// USE 5: Friend declarations with elaborated type specifiers
// ============================================================================

class MyClass;  // Forward declaration

class Friend {
    int secret = 42;
    friend class MyClass;  // Elaborated type specifier in friend declaration
};

class MyClass {
public:
    void revealSecret(const Friend& f) {
        std::cout << "Friend's secret: " << f.secret << "\n";
    }
};

// ============================================================================
// Main function demonstrating all uses
// ============================================================================

int main() {
    std::cout << "=== USE 1: Refer to previously-declared class ===\n";
    struct Point p{10, 20};
    printPoint(p);

    std::cout << "\n=== USE 2: Refer to hidden enum ===\n";
    example_enum_hidden();
    example_namespace_enum();

    std::cout << "\n=== USE 3: Declare new class names ===\n";
    NewClass nc(100);
    std::cout << "NewClass value: " << nc.getValue() << "\n";

    struct DataPacket packet{1, 3.14};
    processData(packet);

    example_new_union();

    struct Node* node = createNode(99);
    std::cout << "Node data: " << node->data << "\n";
    delete node;

    std::cout << "\n=== USE 4: Disambiguation in class scope ===\n";
    Container container;
    auto elem = container.createElement(55);
    std::cout << "Element value: " << elem.value << "\n";
    container.setElement(77);
    std::cout << "Container Element member: " << container.getElement() << "\n";

    std::cout << "\n=== USE 5: Friend declarations ===\n";
    Friend f;
    MyClass mc;
    mc.revealSecret(f);

    return 0;
}
