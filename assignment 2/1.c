#include <stdio.h>
int main() {
	float a=1.1,b=2.2,swap_no;
	printf("Before swapping:\na=%f\nb=%f",a,b);
	swap_no=a;
	a=b;
	b=swap_no;
	printf("\nAfter swapping:\na=%f\nb=%f",a,b);
	return 0;
}
