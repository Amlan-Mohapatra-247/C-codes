#include <stdio.h>

void autostorage()
{
    auto int w=23;
    printf("Value of the variable declared as auto is %d",w);
}

int main() {
    autostorage();
    printf("\nValue of the auto variable is stored in the main memory of the CPU.");
    printf("\nHence, the value is retrived slower than registered storage.");
    return 0;
}
