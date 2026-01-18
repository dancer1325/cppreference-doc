// 1. `decltype (entity)`
// 1.1 values
// Values are not entities themselves, but objects can hold values
// See 1.2 for object examples

// 1.2 objects
int obj = 42;
decltype(obj) obj2 = 10;        // obj2 has type 'int'
static_assert(std::is_same_v<decltype(obj), int>);

const double pi = 3.14;
decltype(pi) e = 2.71;          // e has type 'const double'
static_assert(std::is_same_v<decltype(pi), const double>);

// 1.3 references
int x = 5;
int& ref = x;
decltype(ref) ref2 = x;         // ref2 has type 'int&'
static_assert(std::is_same_v<decltype(ref), int&>);

const int& cref = x;
decltype(cref) cref2 = x;       // cref2 has type 'const int&'
static_assert(std::is_same_v<decltype(cref), const int&>);

// 1.4 structured bindings
struct Point { int x; int y; };
Point p{10, 20};
auto [px, py] = p;
decltype(px) coord = 30;        // coord has type 'int'
static_assert(std::is_same_v<decltype(px), int>);

// 1.5 result bindings
// TODO: C++26 feature - result bindings in postcondition assertions

// 1.6 functions
void funcVoid() { }
int funcInt(double) { return 0; }

// decltype of function name gives function type
static_assert(std::is_same_v<decltype(funcVoid), void()>);
static_assert(std::is_same_v<decltype(funcInt), int(double)>);

// 1.7 enumerators
enum Color { RED, GREEN, BLUE };
decltype(RED) color = GREEN;    // color has type 'Color'
static_assert(std::is_same_v<decltype(RED), Color>);

enum class Status { OK, ERROR };
decltype(Status::OK) status = Status::ERROR;  // status has type 'Status'
static_assert(std::is_same_v<decltype(Status::OK), Status>);

// 1.8 types
// Types themselves are entities but decltype doesn't directly apply to type names
// You need an entity (object, variable, etc.) of that type
struct MyStruct { int value; };
MyStruct ms{100};
decltype(ms) ms2{200};          // ms2 has type 'MyStruct'
static_assert(std::is_same_v<decltype(ms), MyStruct>);

// 1.9 class members
struct Data {
    int member;
    static int staticMember;
    void method() { }
};

Data d{42};
decltype(d.member) m = 10;      // m has type 'int'
static_assert(std::is_same_v<decltype(d.member), int>);

// For static members
decltype(Data::staticMember) sm = 20;  // sm has type 'int'
static_assert(std::is_same_v<decltype(Data::staticMember), int>);

// 1.10 templates
template<typename T>
struct TemplateClass {
    T value;
};

TemplateClass<int> tc{50};
decltype(tc) tc2{60};           // tc2 has type 'TemplateClass<int>'
static_assert(std::is_same_v<decltype(tc), TemplateClass<int>>);

// 1.11 template specializations
template<typename T>
struct Container { T val; };

template<>
struct Container<bool> { int val; };  // Specialization for bool

Container<int> c1{10};
Container<bool> c2{20};
decltype(c1) c3{30};            // c3 has type 'Container<int>'
decltype(c2) c4{40};            // c4 has type 'Container<bool>'
static_assert(std::is_same_v<decltype(c1), Container<int>>);
static_assert(std::is_same_v<decltype(c2), Container<bool>>);

// 1.12 packs
// Parameter packs are entities but decltype applies to expanded pack elements
template<typename... Ts>
void processPack(Ts... args) {
    // Each element in pack can use decltype
    // Example in fold expression context
    ((std::cout << typeid(decltype(args)).name() << " "), ...);
}

// 1.13 namespaces
// Namespaces are entities but decltype doesn't directly apply to namespace names
// You use entities within namespaces
namespace MyNamespace {
    int nsVar = 100;
}

decltype(MyNamespace::nsVar) nsv = 200;  // nsv has type 'int'
static_assert(std::is_same_v<decltype(MyNamespace::nsVar), int>);

// 2. `decltype (expression)`
// TODO: