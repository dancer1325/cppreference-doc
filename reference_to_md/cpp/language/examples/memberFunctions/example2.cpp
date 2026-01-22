class S
{
    int mf1(); // non-static member function declaration
    void mf2() volatile, mf3() &&; // can have cv-qualifiers and/or a reference-qualifier
    // the declaration above is equivalent to two separate declarations:
    // void mf2() volatile;
    // void mf3() &&;

    int mf4() const { return data; } // can be defined inline
    virtual void mf5() final; // can be virtual, can use final/override
    S() : data(12) {} // constructors are member functions too
    int data;
};

int S::mf1() { return 7; } // if not defined inline, has to be defined at namespace