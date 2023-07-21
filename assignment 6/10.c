#include <stdio.h>
#include <stdlib.h>

int main() {
	int n, max, i;
	int *ptr;
	printf("Enter the size of the array: ");
	scanf("%d",&n);
	ptr=(int*)calloc(n,sizeof(int));
	printf("Enter values for the array:\n");
	for (i=0;i<n;i++) {
		printf("Enter value number %d: ",i+1);
		scanf("%d",ptr+i);
	}
	printf("The array is: ");
	for (i=0;i<n;i++) {
		printf("%d ",*(ptr+i));
	}
	max=*ptr;
	for (i=0;i<n;i++) {
		if (*(ptr+i)>max) {
			max=*(ptr+i);
		}
	}
	printf("\nThe largest element of the array is %d",max);
	return 0;
}
