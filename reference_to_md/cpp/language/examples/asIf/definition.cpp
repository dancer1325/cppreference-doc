// my code with local variables - better optimization
int main() {
    int x = 5;
    int y = x + 3;
    int z = y * 2;
    return z;

    // compiler optimizes to:
    // return 16;
}
