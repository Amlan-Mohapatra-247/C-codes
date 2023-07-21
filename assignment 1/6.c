#include <stdio.h>
int main() {
	int a,b;
	printf("Enter the number you want to increment: ");
	scanf("%d",&a);
	printf("Enter the number you want to decrement: ");
	scanf("%d",&b);
	printf("Its Increment is %d",++a);
	printf("\nIts Decrement is %d,",--b);
	return 0;
}
