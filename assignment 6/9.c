#include <stdio.h>
#include <stdlib.h>

int main() {
	int n, i;
	int *ptr, *ptr_rev;
	printf("Enter the size of the array: ");
	scanf("%d",&n);
	ptr=(int*)malloc(n*sizeof(int));
	ptr_rev=(int*)malloc(n*sizeof(int));
	printf("Enter values for the array:\n");
	for (i=0;i<n;i++) {
		printf("Enter value number %d: ",i+1);
		scanf("%d",ptr+i);
	}
	printf("The array is: ");
	for (i=0;i<n;i++) {
		printf("%d ",*(ptr+i));
	}
	for (i=n-1;i>=0;i--) {
		*(ptr_rev+n-i-1)=*(ptr+i);
	}
	printf("\nIt's reversed array is: ");
	for (i=0;i<n;i++) {
		printf("%d ",*(ptr_rev+i));
	}
	return 0;
}
