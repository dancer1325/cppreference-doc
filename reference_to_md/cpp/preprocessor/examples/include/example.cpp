#if __has_include(<optional>)
#include <optional>
#define has_optional 1
template<class T>
using optional_t = std::optional<T>;
#elif __has_include(<experimental/optional>)
#include <experimental/optional>
#define has_optional -1
template<class T>
using optional_t = std::experimental::optional](../experimental/optional.html)<T>;
#else
#define has_optional 0
template<class V>
class optional_t
{
    V v{};
    bool has{};

public:
    optional_t() = default;
    optional_t(V&& v) : v(v), has{true} {}
    V value_or(V&& alt) const&
    {
        return has ? v : alt;
    }
    // etc.
};
#endif

#include <iostream>

int main()
{
    if (has_optional > 0)
        std::cout << "<optional> is present\n";
    else if (has_optional < 0)
        std::cout << "<experimental/optional> is present\n";
    else
        std::cout << "<optional> is not present\n";

    optional_t<int> op;
    std::cout << "op = " << op.value_or(-1) << '\n';
    op = 42;
    std::cout << "op = " << op.value_or(-1) << '\n';
}