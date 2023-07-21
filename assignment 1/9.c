#include <stdio.h>
int main() {
	int a,b,c,d;
	printf("Enter first number: ");
	scanf("%d",&a);
	printf("Enter second number: ");
	scanf("%d",&b);
	c=a/b;
	d=a%b;
	printf("Quotient of the division is %d",c);
	printf("\nRemainder of the division is %d",d);
	return 0;
}
