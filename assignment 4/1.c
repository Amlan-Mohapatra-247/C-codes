#include <stdio.h>

void swap(int a,int b) {
	int temp;
	temp=a;
	a=b;
	b=temp;
	printf("\nAfter swapping:\na=%d\nb=%d",a,b);
}

int main() {
	int a,b;
	printf("Enter value of a: ");
	scanf("%d",&a);
	printf("Enter value of b: ");
	scanf("%d",&b);
	printf("Before swapping:\na=%d\nb=%d",a,b);
	swap(a,b);
	return 0;
}
