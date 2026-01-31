#include <iostream>

// ============================================================================
// SYNTAX (1): class-key class-name
// elaborated type specifier -- for a -- class type
// ============================================================================

// Forward declarations
struct MyStruct;
class MyClass;
union MyUnion;

// elaborated type specifiers -- to refer to the -- declared types
void processStruct(struct MyStruct* s);      // struct == class-key, MyStruct == class-name
void processClass(class MyClass* c);         // class == class-key, MyClass == class-name
void processUnion(union MyUnion* u);         // union == class-key, MyUnion == class-name

// Definitions
struct MyStruct {
    int value;
    MyStruct(int v) : value(v) {}
};

class MyClass {
    int data;
public:
    MyClass(int d) : data(d) {}
    int getData() const { return data; }
};

union MyUnion {
    int intValue;
    double doubleValue;
};

void processStruct(struct MyStruct* s) {
    std::cout << "MyStruct value: " << s->value << "\n";
}

void processClass(class MyClass* c) {
    std::cout << "MyClass data: " << c->getData() << "\n";
}

void processUnion(union MyUnion* u) {
    std::cout << "MyUnion intValue: " << u->intValue << "\n";
}

// Example: if the name is hidden -> disambiguation
void example_syntax1_disambiguation() {
    struct Point { int x, y; };

    {
        int Point = 10;  // Variable hides the struct name

        // Point p{5, 7};  // Without elaborated type specifier: ERROR
        struct Point p{5, 7};     // OK: elaborated type specifier refers to the struct
        std::cout << "Point: (" << p.x << ", " << p.y << ")\n";
        std::cout << "Variable Point: " << Point << "\n";
    }
}

// 1.1 `class-name`
// 1.1.1 one of
// 1.1.1.1 name of a previously-declared class type
struct ExistingClass { int x; };  // Previously declared

void example_1_1_1_1() {
    struct ExistingClass obj;   // class-name refers to previously-declared type
    obj.x = 10;
    std::cout << "ExistingClass x: " << obj.x << "\n";
}

// 1.1.1.2 identifier / NOT previously declared -- as a -- type name
void example_1_1_1_2() {
    // 'NewType' has NOT been declared BEFORE
    struct NewType { int value; } obj;  // declares & defines NewType
    obj.value = 42;
    std::cout << "NewType value: " << obj.value << "\n";

    // NOW, NewType can be used again
    struct NewType another;  // == refers to the PREVIOUSLY declared type
    another.value = 99;
}

// 1.1.2 ALLOWED values
// 1.1.2.1 simple identifier
struct SimpleId { int data; };

void example_1_1_2_1() {
    struct SimpleId obj;  // 'SimpleId' == simple identifier
    obj.data = 100;
    std::cout << "SimpleId data: " << obj.data << "\n";
}

// 1.1.2.2 qualified-id
// TODO: Example: qualified identifier (with ::)
namespace ns {
    struct NestedClass { int value; };
}

class Container {
public:
    struct InnerClass { double data; };
};

void example_1_1_2_2() {
    // Namespace-qualified
    struct ns::NestedClass obj1;  // ✅ 'ns::NestedClass' is qualified-id
    obj1.value = 200;
    std::cout << "ns::NestedClass value: " << obj1.value << "\n";

    // Class-scope-qualified
    struct Container::InnerClass obj2;  // ✅ 'Container::InnerClass' is qualified-id
    obj2.data = 3.14;
    std::cout << "Container::InnerClass data: " << obj2.data << "\n";
}

// 1.1.3 is looked up , depending on their appearance, -- via --
// 1.1.3.1 unqualified name lookup
// Example: searches in current scope, then enclosing scopes
struct UnqualifiedType { int x; };

void example_1_1_3_1() {
    struct UnqualifiedType obj;  // ✅ unqualified lookup finds ::UnqualifiedType
    obj.x = 50;
    std::cout << "UnqualifiedType x: " << obj.x << "\n";

    {
        struct UnqualifiedType { int y; };  // Local type hides outer type
        struct UnqualifiedType local;       // ✅ finds local UnqualifiedType
        local.y = 75;
        std::cout << "Local UnqualifiedType y: " << local.y << "\n";
    }
}

// 1.1.3.2 qualified name lookup
// Example: searches in specified namespace/class scope
namespace lookup_ns {
    struct QualifiedType { int value; };
}

void example_1_1_3_2() {
    // Must use qualified name to access namespace member
    struct lookup_ns::QualifiedType obj;  // ✅ qualified lookup in lookup_ns
    obj.value = 300;
    std::cout << "lookup_ns::QualifiedType value: " << obj.value << "\n";

    // struct QualifiedType obj2;  // ❌ ERROR: unqualified lookup won't find it
}

// 1.1.4 ❌NOT ALLOWED ❌
// 1.1.4.1 non-type names
// Example: elaborated type specifier can ONLY find types, not variables/functions
void example_1_1_4_1() {
    int MyVariable = 42;         // Variable (non-type)
    void MyFunction();           // Function (non-type)

    struct TypeName { int x; };  // Type
    int TypeName = 10;           // Variable with same name (hides type)

    // struct int obj;           // ❌ ERROR: 'int' is built-in type, not user-defined
    // struct MyVariable obj;    // ❌ ERROR: MyVariable is a variable, not a type
    // struct MyFunction obj;    // ❌ ERROR: MyFunction is a function, not a type

    struct TypeName obj;         // ✅ OK: finds the type, ignores the variable
    obj.x = 100;
    std::cout << "TypeName x: " << obj.x << "\n";
    std::cout << "TypeName variable: " << TypeName << "\n";  // Accesses variable
}


// ============================================================================
// SYNTAX (2): enum enum-name
// elaborated type specifier -- for an -- enumeration type
// ============================================================================

// Enum declarations
enum Color { Red, Green, Blue };
enum class Status { Active, Inactive, Pending };  // scoped enum

// Using elaborated type specifier for enum
void printColor(enum Color c) {  // 'enum Color' is elaborated type specifier
    std::cout << "Color value: " << c << "\n";
}

// Example: accessing hidden enum name
void example_syntax2_hidden_enum() {
    int Color = 42;  // Variable hides the enum name

    // Color c = Red;  // ERROR: Color refers to int variable

    enum Color c = Red;  // OK: elaborated type specifier accesses the enum type
    std::cout << "Enum Color: " << c << "\n";
    std::cout << "Variable Color: " << Color << "\n";
}

// Scoped enum with elaborated type specifier
void processStatus(enum class Status s) {  // 'enum class Status' is elaborated type specifier
    if (s == Status::Active) {
        std::cout << "Status is Active\n";
    }
}

// ============================================================================
// SYNTAX (3): class-key attr(optional) identifier
// Declaration / consists SOLELY of an elaborated type specifier
// -> ALWAYS declares a class type / named by identifier in the scope
// ============================================================================

// Pure elaborated type specifier declarations (forward declarations)
struct ForwardDeclaredStruct;     // Declares ForwardDeclaredStruct as incomplete type
class ForwardDeclaredClass;       // Declares ForwardDeclaredClass as incomplete type
union ForwardDeclaredUnion;       // Declares ForwardDeclaredUnion as incomplete type

// With C++11 attributes (attr is optional)
[[deprecated]] struct DeprecatedStruct;   // Declaration with attribute
struct [[nodiscard]] ImportantStruct;     // Declaration with attribute

// These can be used in declarations before definition
ForwardDeclaredStruct* ptr1;      // OK: pointer to incomplete type
ForwardDeclaredClass* ptr2;       // OK: pointer to incomplete type
ForwardDeclaredUnion* ptr3;       // OK: pointer to incomplete type

// Later definitions
struct ForwardDeclaredStruct {
    int value;
};

class ForwardDeclaredClass {
    int data;
public:
    ForwardDeclaredClass(int d) : data(d) {}
};

union ForwardDeclaredUnion {
    int intVal;
    float floatVal;
};

struct [[nodiscard]] ImportantStruct {
    int result;
};

// ============================================================================
// CONTRAST: Class forward declaration vs Opaque enum declaration
// ============================================================================

// Class forward declaration - type is INCOMPLETE
struct IncompleteClass;

void example_incomplete_class() {
    // sizeof(IncompleteClass);  // ERROR: incomplete type
    IncompleteClass* ptr;        // OK: pointer to incomplete type
    // IncompleteClass obj;      // ERROR: incomplete type
}

// Opaque enum declaration - type is COMPLETE after declaration
enum OpaqueEnum : int;  // Opaque enum declaration with underlying type

void example_opaque_enum() {
    // The enum is COMPLETE after opaque declaration
    OpaqueEnum e;                // OK: complete type
    sizeof(OpaqueEnum);          // OK: complete type

    // But we can't use enumerators until definition
    // e = OpaqueEnum::Value1;   // ERROR: enumerators not yet defined
}

// Definition of opaque enum
enum OpaqueEnum : int {
    Value1 = 1,
    Value2 = 2,
    Value3 = 3
};

void use_opaque_enum() {
    OpaqueEnum e = Value1;  // OK: now enumerators are available
    std::cout << "OpaqueEnum value: " << static_cast<int>(e) << "\n";
}

// ============================================================================
// DETAILED COMPARISON: Syntax (3) vs Opaque Enum
// ============================================================================

void comparison_example() {
    std::cout << "\n=== Comparison: Class forward declaration vs Opaque enum ===\n";

    // Class forward declaration
    struct ClassForward;        // Declares incomplete type
    // sizeof(ClassForward);    // ERROR: incomplete until definition
    ClassForward* ptr;          // OK: pointers allowed

    // Opaque enum declaration
    enum EnumOpaque : int;      // Declares COMPLETE type (with known size)
    sizeof(EnumOpaque);         // OK: size is known (size of int)
    EnumOpaque e;               // OK: can create objects

    std::cout << "Size of EnumOpaque: " << sizeof(EnumOpaque) << "\n";

    // Class definition makes it complete
    struct ClassForward {
        int x;
    };

    sizeof(ClassForward);       // OK: now complete
    ClassForward obj;           // OK: now complete

    std::cout << "Size of ClassForward: " << sizeof(ClassForward) << "\n";

    // Enum definition adds enumerators
    enum EnumOpaque : int {
        First = 10,
        Second = 20
    };

    e = First;                  // OK: enumerators now available
    std::cout << "EnumOpaque value: " << static_cast<int>(e) << "\n";
}

// ============================================================================
// NESTED EXAMPLE: Syntax (3) in class scope
// ============================================================================

class Outer {
    struct Inner;  // Forward declaration in class scope (Syntax 3)

    Inner* ptr;    // OK: pointer to incomplete type

public:
    struct Inner {  // Definition
        int value;
        Inner(int v) : value(v) {}
    };

    Inner createInner(int v) {
        return Inner(v);
    }
};

// ============================================================================
// Main function demonstrating all syntax forms
// ============================================================================

int main() {
    std::cout << "=== SYNTAX (1): class-key class-name ===\n";

    MyStruct ms(100);
    MyClass mc(200);
    MyUnion mu;
    mu.intValue = 300;

    processStruct(&ms);
    processClass(&mc);
    processUnion(&mu);

    example_syntax1_disambiguation();

    std::cout << "\n=== SYNTAX (2): enum enum-name ===\n";

    enum Color color = Green;
    printColor(color);

    example_syntax2_hidden_enum();

    enum class Status status = Status::Active;
    processStatus(status);

    std::cout << "\n=== SYNTAX (3): class-key attr(optional) identifier ===\n";

    ForwardDeclaredStruct fds;
    fds.value = 999;
    std::cout << "ForwardDeclaredStruct value: " << fds.value << "\n";

    ForwardDeclaredClass fdc(888);
    std::cout << "ForwardDeclaredClass data: " << fdc.data << "\n";

    ImportantStruct is{42};
    std::cout << "ImportantStruct result: " << is.result << "\n";

    std::cout << "\n=== Incomplete vs Complete Types ===\n";
    example_incomplete_class();
    example_opaque_enum();
    use_opaque_enum();

    comparison_example();

    std::cout << "\n=== Nested Class Example ===\n";
    Outer outer;
    Outer::Inner inner = outer.createInner(555);
    std::cout << "Outer::Inner value: " << inner.value << "\n";

    return 0;
}
