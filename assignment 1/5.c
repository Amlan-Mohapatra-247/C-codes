#include <stdio.h>
int main() {
	int a,b,c,d,e,f,g;
	printf("Enter first number: ");
	scanf("%d",&a);
	printf("Enter second number: ");
	scanf("%d",&b);
	c=a+b;
	printf("Sum of the two numbers is %d",c);
	d=a-b;
	printf("\nDifferece between the two numbers is %d",d);
	e=a*b;
	printf("\nProduct of the two numbers is %d",e);
	f=a/b;
	g=a%b;
	printf("\nWhen one number is divided by other, it gives the quotient as %d while keeping the remainder %d",f,g);
	return 0;
}
