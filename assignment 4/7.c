#include <stdio.h>

void staticstorage()
{
    int i=0;
    for (i=1;i<=5;i++) {
        static int a=3;
        int b=3;
        a++;
        b++;
        printf("\nThe value of static variable in %d iteration is %d\n",i,a);
        printf("The value of non-static variable in %d iteration is %d\n",i,b);
    }
}

int main()
{
    staticstorage();
    return 0;
}
