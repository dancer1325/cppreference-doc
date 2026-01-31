#include <tuple>

template <std::size_t... Indices, typename Decomposable>
constexpr auto splice(Decomposable d)
{
    auto [...elems] = d;
    return std::make_tuple(elems...[Indices]...);
}

struct Point
{
    int x;
    int y;
    int z;
};

int main() 
{
    constexpr Point p { .x = 1, .y = 4, .z = 3 };
    static_assert(splice<2, 1, 0>(p) == std::make_tuple(3, 4, 1));
    static_assert(splice<1, 1, 0, 0>(p) == std::make_tuple(4, 4, 1, 1));
}