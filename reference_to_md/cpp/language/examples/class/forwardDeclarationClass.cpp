class Vector;   // 1. forward declaration

// 2.  classes refer to each other      -- Reason:🧠class name / incomplete type🧠
class Matrix
{
    // ...
    friend Vector operator*(const Matrix&, const Vector&);
};

class Vector
{
    // ...
    friend Vector operator*(const Matrix&, const Vector&);
};