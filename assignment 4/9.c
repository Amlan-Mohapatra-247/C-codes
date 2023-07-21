#include <stdio.h>

void registerstorage()
{
    register int q=39;
    printf("Value of the variable declared as register is %d",q);
}

int main() {
    registerstorage();
    printf("\nValue of the registered variable is stored in the register memory of the CPU.");
    printf("\nHence, the value is retrived faster than auto storage.");
    return 0;
}
