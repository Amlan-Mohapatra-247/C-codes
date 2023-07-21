#include <stdio.h>
int main() {
	int a,b,c;
	printf("We are adding two numbers without using the addition operator,\n");
	printf("Enter the first number: ");
	scanf("%d",&a);
	printf("Enter the second number: ");
	scanf("%d",&b);
	c=a-(-b);
	printf("Their sum is %d",c);
	return 0;
}
