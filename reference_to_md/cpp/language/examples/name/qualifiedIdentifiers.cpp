#include <iostream>
#include <vector>
#include <type_traits>

// 1. allows: defining OR redeclaring a PREVIOUSLY declared
// 1.1 namespace member
namespace MyNamespace {
    // Declaration | namespace (NOT definition)
    extern int globalValue;  // ✅ 'extern' = declaration only, != definition
    void myFunction();       // function declaration (-> AUTOMATICALLY extern)
    class MyClass;           // class forward declaration
}

// ✅ Definition OUTSIDE namespace -- via -- qualified identifier, a PREVIOUSLY one
int MyNamespace::globalValue = 42;  // NOW this is the definition

void MyNamespace::myFunction() {
    std::cout << "MyNamespace::myFunction() called\n";
}

class MyNamespace::MyClass {
    int data;
public:
    MyClass(int d) : data(d) {}
    void display();
};

// ✅ Defining member function outside class AND namespace
void MyNamespace::MyClass::display() {      // >1 sequence of ::, since they are 2" level
    std::cout << "MyClass data: " << data << "\n";
}

// 1.2 class member
class OuterClass {
public:
    // Declaration inside class
    int memberVariable;
    void memberFunction();
    class NestedClass;

    OuterClass() : memberVariable(0) {}
};

// ✅ Definition OUTSIDE class using qualified identifier, a PREVIOUSLY
void OuterClass::memberFunction() {
    std::cout << "OuterClass::memberFunction() called\n";
}

class OuterClass::NestedClass {
    double value;
public:
    NestedClass(double v) : value(v) {}
    void show();
};

void OuterClass::NestedClass::show() {
    std::cout << "NestedClass value: " << value << "\n";
}

// 2. qualified identifier expression -- `optionalSequenceOfSeparatedByScopeResolutionOperators::unqualifiedIdentifierExpression` --
// 2.1 `optionalSequenceOfSeparatedByScopeResolutionOperators` / ALLOWED ones

// 2.1.1 namespace name
namespace ns1 {
    namespace ns2 {
        int value = 100;
        void function() {
            std::cout << "ns1::ns2::function()\n";
        }
    }
}

void example_2_1_1_namespace() {
    // ✅ Qualified identifier with namespace name
    int x = ns1::ns2::value;                    // ns1::ns2 == namespace qualifier
    ns1::ns2::function();                       // ns1::ns2 == namespace qualifier
    std::cout << "ns1::ns2::value = " << x << "\n";

    // ✅ Global namespace qualifier
    ::std::cout << "Using ::std::cout\n";       // :: == global namespace
}

// 2.1.2 class name
class Base {
public:
    static int staticMember;
    typedef int IntType;
    enum NestedEnum { ValueA, ValueB };
};

int Base::staticMember = 200;

class Derived : public Base {
public:
    void accessBase() {
        // ✅ Qualified identifier -- via -- class name
        int x = Base::staticMember;             // Base == class qualifier
        Base::IntType y = 42;                   // Base == class qualifier
        Base::NestedEnum e = Base::ValueA;      // Base == class qualifier
        std::cout << "Base::staticMember = " << x << "\n";
    }
};

void example_2_1_2_class() {
    // ✅ Accessing class members -- via -- qualified identifier
    int val = Base::staticMember;               // Base == class qualifier
    Base::IntType num = 99;                     // Base == class qualifier
    std::cout << "Base::staticMember = " << val << "\n";
}

// 2.1.3 enumeration name
enum Color { Red, Green, Blue };

enum class Status {
    Active,
    Inactive,
    Pending
};

void example_2_1_3_enum() {
    // ✅ Scoped enum requires qualified identifier
    Status s = Status::Active;                  // Status == enum qualifier
    std::cout << "Status::Active = " << static_cast<int>(s) << "\n";

    // unscoped enum can use qualified OR unqualified
    Color c1 = Red;                             // Unqualified
    Color c2 = Color::Red;                      // Qualified (C++11+)
}

// 2.1.4 `decltype` specifier / denote a class OR enumeration type
class MyClass {
public:
    static int staticValue;
    typedef double DoubleType;
};

int MyClass::staticValue = 300;

enum class MyEnum { First, Second };

void example_2_1_4_decltype() {
    MyClass obj;
    MyEnum enumVal = MyEnum::First;

    // ✅ decltype specifier as qualifier (denotes class type)
    decltype(obj)::staticValue = 400;                       // decltype(obj) == MyClass
    std::cout << "decltype(obj)::staticValue = " << decltype(obj)::staticValue << "\n";

    decltype(obj)::DoubleType d = 3.14;                     // decltype(obj) == MyClass
    std::cout << "decltype(obj)::DoubleType = " << d << "\n";

    // ✅ decltype specifier as qualifier (denotes enum type)
    decltype(enumVal) e = decltype(enumVal)::Second;        // decltype(enumVal) == MyEnum
    std::cout << "decltype(enumVal)::Second = " << static_cast<int>(e) << "\n";
}

// 2.1.5 pack indexing specifier / denote a class OR enumeration type (C++26)
// TODO:
#if __cplusplus > 202302L  // C++26 or later
template<typename... Types>
void example_2_1_5_pack_indexing() {
    // ✅ Pack indexing specifier as qualifier
    // Types...[0] would access first type in pack
    // This is a C++26 feature for accessing pack elements by index
    using FirstType = Types...[0];
    typename FirstType::value_type v;  // Qualified with pack-indexed type
}
#else
// Placeholder for pre-C++26: similar effect using tuple
template<typename... Types>
void example_2_1_5_pack_indexing() {
    // Pre-C++26: use std::tuple to demonstrate concept
    using FirstType = typename std::tuple_element<0, std::tuple<Types...>>::type;
    std::cout << "Pack indexing (via tuple): first type accessed\n";
}
#endif

// 2.2 POSSIBLE to use: keyword `template`
template<typename T>
class Container {
public:
    template<typename U>
    class NestedTemplate {
    public:
        void show() {
            std::cout << "NestedTemplate::show()\n";
        }
    };

    template<typename U>
    void processTemplate(U val) {
        std::cout << "processTemplate: " << val << "\n";
    }
};

void example_2_2_template_keyword() {
    Container<int> container;

    // ❌ Without 'template' keyword (ambiguous in dependent context)
    // container.NestedTemplate<double> obj;  // ERROR in dependent context

    // ✅ With 'template' keyword to disambiguate
    typename Container<int>::template NestedTemplate<double> obj;
    obj.show();

    // In non-dependent context, 'template' keyword is not required
    Container<int>::NestedTemplate<double> obj2;
    obj2.show();
}

template<typename T>
void template_dependent_example() {
    T container;

    // ✅ 'template' keyword required in dependent context
    typename T::template NestedTemplate<double> obj;
    obj.show();

    // ✅ 'template' keyword required for member function templates
    container.template processTemplate<int>(42);
}


/*std::string::npos

::tolower

::std::cout

boost::signals2::connection*/

int main() {
    std::cout << "=== 1.1: Namespace member definition ===\n";
    MyNamespace::myFunction();
    MyNamespace::MyClass obj(99);
    obj.display();

    std::cout << "\n=== 1.2: Class member definition ===\n";
    OuterClass outer;
    outer.memberFunction();
    OuterClass::NestedClass nested(3.14);
    nested.show();

    std::cout << "\n=== 2.1.1: Namespace name qualifier ===\n";
    example_2_1_1_namespace();

    std::cout << "\n=== 2.1.2: Class name qualifier ===\n";
    example_2_1_2_class();
    Derived derived;
    derived.accessBase();

    std::cout << "\n=== 2.1.3: Enumeration name qualifier ===\n";
    example_2_1_3_enum();

    std::cout << "\n=== 2.1.4: decltype specifier qualifier ===\n";
    example_2_1_4_decltype();

    std::cout << "\n=== 2.1.5: Pack indexing specifier ===\n";
    example_2_1_5_pack_indexing<std::vector<int>, std::string>();

    std::cout << "\n=== 2.2: template keyword ===\n";
    example_2_2_template_keyword();
    template_dependent_example<Container<int>>();

    return 0;
}