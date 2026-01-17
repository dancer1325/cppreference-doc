#include <iostream>

extern "C" int func(int x);
// the definition of func is written in assembly language
// raw string literal could be very useful
asm(R"(
    .globl func
        .type func, @function
        func:
        .cfi_startproc
        movl %edi, %eax /* x is in RDI, see x86-64 calling convention */
        addl $1, %eax
        ret
        .cfi_endproc
    )");

int main()
{
    int n = func(0110);
    // 1. inline assembly
    // 1.1 formerly NON-standard inline assembly / comform P2361R6
    asm ("leal (%0,%0,4),%0"
         : "=r" (n)
         : "0" (n));
    std::cout << "73*5 = " << n << std::endl; // flush is intentional

    // 1.2 standard inline assembly
    asm ("movq $60, %rax\n" // the exit syscall number on Linux
         "movq $2,  %rdi\n" // this program returns 2
         "syscall");
}