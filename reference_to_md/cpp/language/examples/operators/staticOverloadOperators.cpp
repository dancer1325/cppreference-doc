struct SwapThem
    {
        template<typename T>
        static void operator()(T& lhs, T& rhs) 
        {
            std::ranges::swap(lhs, rhs);
        }

        template<typename T>
        static void operator[](T& lhs, T& rhs)
        {
            std::ranges::swap(lhs, rhs);
        } 
    };
inline constexpr SwapThem swap_them{};

void foo()
{
    int a = 1, b = 2;

    swap_them(a, b); // OK
    swap_them[a, b]; // OK

    SwapThem{}(a, b); // OK
    SwapThem{}[a, b]; // OK

    SwapThem::operator()(a, b); // OK
    SwapThem::operator[](a, b); // OK

    SwapThem(a, b); // error, invalid construction
    SwapThem[a, b]; // error
}