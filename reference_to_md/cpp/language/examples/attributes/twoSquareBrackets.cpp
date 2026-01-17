void f()
{
    int y[3];
    y[[] { return 0; }()] = 1;  // error
    int i [[cats::meow([[]])]]; // OK
}