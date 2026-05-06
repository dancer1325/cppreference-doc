// 1. pointer type's value, ALLOWED ones
// 1.1 Pointer to object OR function
// 1.1.1 -- to -- object
// == (first byte in memory / occupied by the object)'s address
// TODO:
// 1.1.2 -- to -- function
// TODO:
// == (first byte in memory / occupied by the object)'s address

// 1.2 Pointer pasts the end of an object
// == (first byte in memory AFTER end of the storage / occupied by the object)'s address
// TODO:

// 1.3 null pointer value
// TODO:

// 1.4 invalid pointer value
// TODO:

// 2.   2 pointers / represent the SAME address, may have DIFFERENT values
struct C
{
    int x, y;
} c;

int* px = &c.x;   // value of px is "pointer to c.x"
int* pxe= px + 1; // value of pxe is "pointer past the end of c.x"
int* py = &c.y;   // value of py is "pointer to c.y"

assert(pxe == py); // == tests if two pointers represent the same address
// may or may not fire

*pxe = 1; // undefined behavior even if the assertion does not fire

int main() {
    return 0;
}