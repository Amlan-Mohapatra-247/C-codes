#include <stdio.h>
int main() {
	int a,b,c;
	printf("Enter first number: ");
	scanf("%d",&a);
	printf("Enter second number: ");
	scanf("%d",&b);
	printf("Enter third number: ");
	scanf("%d",&c);
	if (a>b) {
		if (a>c) {
			printf("%d is the largest among the three numbers",a);
		}
		else {
			printf("%d is the largest among the three numbers",c);
		}
	}
	else {
		if (b>c) {
			printf("%d is the largest among the three numbers",b);
		}
		else {
			printf("%d is the largest among the three numbers",c);
		}
	}
	return 0;
}
