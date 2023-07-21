#include <stdio.h>
int main() {
	char o;
	int a,b,c;
	printf("Choose the operator(+,-,*/): ");
	scanf("%c",&o);
	printf("Enter the first number: ");
	scanf("%d",&a);
	printf("Enter the second number: ");
	scanf("%d",&b);
	switch (o) {
		case '+':
			c=a+b;
			printf("Sum of the two numbers is %d",c);
			break;
		case '-':
			c=a-b;
			printf("Difference between the two numbers is %d",c);
			break;
		case '*':
			c=a*b;
			printf("Product of the two numbers is %d",c);
			break;
		case '/':
			c=a/b;
			printf("When the first number is divided by the second, it gives the quotient %d",c);
			break;
	}
	return 0;
}
