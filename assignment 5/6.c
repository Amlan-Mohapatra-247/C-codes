#include <stdio.h>

int main() {
	int i, n, arr[i], q;
	printf("Enter the size of the array: ");
	scanf("%d",&n);
	for (i=0;i<n;i++) {
		printf("Enter value number %d: ",i+1);
		scanf("%d",&arr[i]);
    }
	printf("The original array is: ");
	for (i=0;i<n;i++) {
		printf("%d ",arr[i]);
	}
	printf("\nThe array reversed, becomes: ");
	for (i=n-1;i>=0;i--) {
		printf("%d ",arr[i]);
	}
	return 0;
}
