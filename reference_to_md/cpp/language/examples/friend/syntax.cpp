#include <iostream>
#include <string>

// ============================================
// Friend: 5 Possible Syntaxes
// ============================================

// forward declarations
class Printer;
class Logger;
template<typename T> class Container;

// ============================================
// Syntax 1: friend function-declaration
// ============================================
class Box1
{
    int width;

public:
    Box1(int w) : width(w) {}

    // friend function-declaration (declared but NOT defined here)
    friend void print_box(const Box1& box);
};

// Definition outside class
void print_box(const Box1& box)
{
    std::cout << "Box width: " << box.width << std::endl;
}

// ============================================
// Syntax 2: friend function-definition
// ============================================
class Box2
{
    int height;

public:
    Box2(int h) : height(h) {}

    // friend function-definition (defined | class body)
    friend void display_box(const Box2& box)
    {
        std::cout << "Box height: " << box.height << std::endl;
    }

    // another friend function-definition
    friend std::ostream& operator<<(std::ostream& os, const Box2& box)
    {
        os << "Box2{height=" << box.height << "}";
        return os;
    }
};

// ============================================
// Syntax 3: friend elaborated-class-specifier
// ============================================
class Secret
{
    std::string password;

public:
    Secret() : password("secret123") {}

    // friend elaborated-class-specifier
    // Uses: class-key (class/struct/union) + name
    friend class Printer;           // Grants access to entire Printer class
    friend struct Logger;           // Grants access to entire Logger struct
};

// Printer can access Secret's private members
class Printer
{
public:
    void print(const Secret& s)
    {
        std::cout << "Password: " << s.password << std::endl;
    }
};

// Logger can access Secret's private members
struct Logger
{
    void log(const Secret& s)
    {
        std::cout << "Logging password: " << s.password << std::endl;
    }
};

// ============================================
// Syntax 4: friend simple-type-specifier
// ============================================
class DataA;  // Forward declaration
class DataB;

class DataA
{
    int value_a;

public:
    DataA() : value_a(42) {}

    // friend simple-type-specifier (just the name, no class-key)
    // This works when the class is already known/declared
    friend DataB;  // Equivalent to: friend class DataB;
};

class DataB
{
public:
    void access_data(const DataA& a)
    {
        std::cout << "DataA value: " << a.value_a << std::endl;
    }
};

// ============================================
// Syntax 5: friend typename-specifier
// ============================================
class Document
{
    std::string content;

public:
    Document(const std::string& c) : content(c) {}

    // friend typename-specifier (for template classes)
    template<typename T>
    friend class Container;  // All specializations of Container are friends
};

// Template class that can access Document's private members
template<typename T>
class Container
{
    T data;

public:
    Container(const T& d) : data(d) {}

    void show_document(const Document& doc)
    {
        std::cout << "Document content: " << doc.content << std::endl;
    }
};

// ============================================
// Additional Examples: Combining Syntaxes
// ============================================
class Widget
{
    int id;

public:
    Widget(int i) : id(i) {}

    // Syntax 1: friend function-declaration
    friend void inspect(const Widget& w);

    // Syntax 2: friend function-definition
    friend void show(const Widget& w)
    {
        std::cout << "Widget ID: " << w.id << std::endl;
    }

    // Syntax 3: friend elaborated-class-specifier
    friend class WidgetManager;

    // Syntax 4: friend simple-type-specifier (if WidgetFactory already declared)
    // friend WidgetFactory;

    // Syntax 5: friend typename-specifier (template friend)
    template<typename T>
    friend class SmartPointer;
};

void inspect(const Widget& w)
{
    std::cout << "Inspecting Widget: " << w.id << std::endl;
}

class WidgetManager
{
public:
    void manage(const Widget& w)
    {
        std::cout << "Managing Widget ID: " << w.id << std::endl;
    }
};

template<typename T>
class SmartPointer
{
    T* ptr;

public:
    SmartPointer(T* p) : ptr(p) {}

    void show_widget_id(const Widget& w)
    {
        std::cout << "SmartPointer accessing Widget ID: " << w.id << std::endl;
    }
};

// ============================================
// Main: Test all syntaxes
// ============================================
int main()
{
    std::cout << "=== Friend: 5 Syntaxes ===" << std::endl;
    std::cout << std::endl;

    // Syntax 1: friend function-declaration
    std::cout << "1. friend function-declaration:" << std::endl;
    Box1 b1(10);
    print_box(b1);
    std::cout << std::endl;

    // Syntax 2: friend function-definition
    std::cout << "2. friend function-definition:" << std::endl;
    Box2 b2(20);
    display_box(b2);
    std::cout << "   Using operator<<: " << b2 << std::endl;
    std::cout << std::endl;

    // Syntax 3: friend elaborated-class-specifier
    std::cout << "3. friend elaborated-class-specifier:" << std::endl;
    Secret secret;
    Printer printer;
    printer.print(secret);
    Logger logger;
    logger.log(secret);
    std::cout << std::endl;

    // Syntax 4: friend simple-type-specifier
    std::cout << "4. friend simple-type-specifier:" << std::endl;
    DataA data_a;
    DataB data_b;
    data_b.access_data(data_a);
    std::cout << std::endl;

    // Syntax 5: friend typename-specifier
    std::cout << "5. friend typename-specifier (template friend):" << std::endl;
    Document doc("Confidential information");
    Container<int> container(42);
    container.show_document(doc);
    std::cout << std::endl;

    // Combined example
    std::cout << "6. Combined Example (Widget):" << std::endl;
    Widget widget(999);
    inspect(widget);              // Syntax 1
    show(widget);                 // Syntax 2
    WidgetManager wm;
    wm.manage(widget);            // Syntax 3
    SmartPointer<int> sp(nullptr);
    sp.show_widget_id(widget);    // Syntax 5
    std::cout << std::endl;

    std::cout << "=== Summary ===" << std::endl;
    std::cout << "Syntax 1: friend function-declaration" << std::endl;
    std::cout << "Syntax 2: friend function-definition" << std::endl;
    std::cout << "Syntax 3: friend elaborated-class-specifier (friend class Name)" << std::endl;
    std::cout << "Syntax 4: friend simple-type-specifier (friend Name)" << std::endl;
    std::cout << "Syntax 5: friend typename-specifier (template<...> friend class Name)" << std::endl;

    return 0;
}

/*
Detailed Syntax Breakdown:
---------------------------

1. friend function-declaration
   friend void func(const T&);
   ↑      ↑    ↑
   |      |    └─ declarator
   |      └────── return type
   └─────────── friend keyword

2. friend function-definition
   friend void func(const T&) { ... }
   ↑      ↑    ↑              ↑
   |      |    └─ declarator  └─ function body
   |      └────── return type
   └─────────── friend keyword

3. friend elaborated-class-specifier
   friend class Name;
   ↑      ↑     ↑
   |      |     └─ class name
   |      └────── class-key (class/struct/union)
   └─────────── friend keyword

4. friend simple-type-specifier
   friend Name;
   ↑      ↑
   |      └─ class name (already known)
   └─────── friend keyword

5. friend typename-specifier
   template<typename T> friend class Name;
   ↑                    ↑      ↑     ↑
   |                    |      |     └─ class name
   |                    |      └────── class-key
   |                    └─────────── friend keyword
   └────────────────────────────── template parameter
*/
