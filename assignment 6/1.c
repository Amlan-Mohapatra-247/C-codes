#include <stdio.h>

int main() {
	int q=5;
	int *ptr=&q;
	printf("Original value of the integer is %d\n",q);
	*ptr=17;
	printf("Updated value of the integer is %d",q);
	return 0;
}
