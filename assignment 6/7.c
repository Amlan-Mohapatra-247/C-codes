#include <stdio.h>

int main() {
	int n, i, arr[n], d, j, q=0;
	printf("Enter the size of the array: ");
	scanf("%d",&n);
	for (i=0;i<n;i++) {
		printf("Enter value number %d: ",i+1);
	    scanf("%d",&arr[i]);
	}
	printf("The array is: ");
	for (i=0;i<n;i++) {
		printf("%d ",arr[i]);
	}
	printf("\nEnter number for division check: ");
	scanf("%d",&d);
	for (i=0;i<n;i++) {
		if (arr[i]%d!=0) {
			for (j=i+1;j<n;j++) {
				arr[j-1]=arr[j];
			}
			q++;
		}
	}
	printf("The elements of the array divisible by %d are \n",d);
	for (i=0;i<n-q;i++) {
		printf("%d ",arr[i]);
	}
	return 0;
}
