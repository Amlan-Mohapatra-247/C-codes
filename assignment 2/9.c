#include <stdio.h>
int main() {
	int q;
	printf("Enter the number: ");
	scanf("%d",&q);
	if (q%2==0) {
		printf("%d is an even number",q);
	}
	else {
		printf("%d is an odd number",q);
	}
	return 0;
}
