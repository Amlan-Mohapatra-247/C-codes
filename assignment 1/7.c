#include <stdio.h>
int main() {
	int a,b;
	printf("Enter the number you want to increment: ");
	scanf("%d",&a);
	printf("Its pre-increment is %d",++a);
	b=a++;
	printf("\nIts post-increment is %d",b);
	return 0;
}
