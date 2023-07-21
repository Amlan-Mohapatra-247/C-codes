#include <stdio.h>

int prod(int a,int b) {
	if (a<b) {
        return prod(b,a);
    }
    else if (b!=0) {
        return (a+prod(a,b-1));
    }
    else {
        return 0;
    }
}

int main() {
	int a,b;
	printf("Enter first number: ");
	scanf("%d",&a);
	printf("Enter second number: ");
	scanf("%d",&b);
	printf("%dX%d=%d",a,b,prod(a,b));
	return 0;
}
