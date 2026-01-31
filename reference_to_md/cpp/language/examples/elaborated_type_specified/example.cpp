class T
{
public:
    class U;        // forward declaration
private:
    int U;          // member variable / SAME name
};

int main()
{
    // 1. local variable / hide the type of class
    // 1.1 without using elaborated type specified
    int T;      // local variable / 's name: T      != typed with T
    T t;        // error: the local variable T is found     ==   👀compiler finds first the local variable👀

    // 1.2 using elaborated type specified
    class T t;      // OK: -- Reason:🧠compiler finds first T / ignore the local variable T🧠

    // 2. class members (variable & class) / SAME name
    // 2.1 without using elaborated type specified
    T::U* u;        // error: lookup of T::U / finds FIRST the private data member, but since it's private -> access error

    // 2.2 using elaborated type specified
    class T::U* u;  // OK: -- Reason:🧠compiler finds the class member / it´s public -> can get access to it🧠
}
