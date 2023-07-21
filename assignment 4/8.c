#include <stdio.h>

//global variable declaration
int q;

void externstorage()
{
    extern int q;
    printf("Value of the variable declared as extern is %d\n",q);
  
    q=5;
    printf("Modified value of the variable declared as extern is %d\n",q);
}

int main() {
    externstorage();
    return 0;
}
