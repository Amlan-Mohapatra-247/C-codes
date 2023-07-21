#include <stdio.h>
int main() {
    int a,b,c,d;
    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter second number: ");
    scanf("%d",&b);
    c=a+b;
    printf("Sum of the two numbers is %d",c);
    d=a-b;
    printf("\nDifference between the two numbers is %d",d);
    return 0;
}
