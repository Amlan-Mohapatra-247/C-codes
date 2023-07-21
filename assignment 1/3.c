#include <stdio.h>
int main() {
    float a,b,c,d;
    printf("Enter first number: ");
    scanf("%f",&a);
    printf("Enter second number: ");
    scanf("%f",&b);
    c=a*b;
    printf("Product of the two numbers is %f",c);
    d=a/b;
    printf("\nWhen one number is divided by the other, it gives %f",d);
    return 0;
}
