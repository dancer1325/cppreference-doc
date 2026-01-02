namespace A {
    inline namespace B {
        int x = 5;
        void func() {}
    }
}

int main() {
    // 1. declarations are visible | enclosing namespace
    //      B's declarations are visible | A namespace      -- Reason: B is inline --
    int y = A::x;
    A::func();

    // 1.2 you can ALSO access EXPLICITLY
    int z = A::B::x;
}

