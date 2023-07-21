#include <stdio.h>

int main() {
	int i,j,n,k;
	printf("Enter number: ");
	scanf("%d",&n);
	for (k=1;k<=n+2;k++) {
		printf("* ");
	}
	printf("\n");
	n=2*n-1;
	for (i=1;i<=n;i++) {
		printf("* ");
		for (j=1;j<=n;j++) {
			if (i==j) {
				printf("*");
			}
			else if (j==n-i+1) {
				printf("*");
			}
			else {
				printf(" ");
			}
		}
		printf(" *\n");
	}
	n=(n+1)/2;
	for (k=1;k<=n+2;k++) {
		printf("* ");
	}
	return 0;
}
