namespace A {
    int x = 5;
    void func() {}
}

// 1. declarations are NOT visible | enclosing namespace
// int y = x;        // ERROR       -- uncomment to see it --
// func();           // ERROR       -- uncomment to see it --

int main() {
    // -> you need to use ::
    int y = A::x;
    A::func();

    return 0;
}
