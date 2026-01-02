class Foo; // 1. forward declaration of a class

class Bar  // 2. definition of a class
{
public:
    Bar(int i) : m_i(i) {}
private:
    int m_i;
};

template<class T> // template argument
void qux()
{
    T t;
}

enum class Pub // scoped enum, since C++11
{
    b, d, p, q
};

int main()
{
    Bar Bar(1);          // variable / 's name ==  Bar
    // Bar Bar2(2);        // compiler error    -- Reason:🧠BAR is a variable != type🧠
    class Bar Bar3(3);   // make explicit that BAR is a type
}