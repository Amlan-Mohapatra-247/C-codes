#include <stdio.h>

int main() {
	int n, i, ar1[n], ar2[n], q;
	int *ptr1, *ptr2;
	printf("Enter the size of the array: ");
	scanf("%d",&n);
	printf("Enter values for first array:\n");
	for (i=0;i<n;i++) {
		printf("Enter value number %d: ",i+1);
	    scanf("%d",&ar1[i]);
	}
	printf("The first array is:\n");
	for (i=0;i<n;i++) {
		printf("%d ",ar1[i]);
	}
	printf("\n\nEnter values for second array:\n");
	for (i=0;i<n;i++) {
		printf("Enter value number %d: ",i+1);
	    scanf("%d",&ar2[i]);
	}
	printf("The second array is:\n");
	for (i=0;i<n;i++) {
		printf("%d ",ar2[i]);
	}
	ptr1=&ar1[0];
	ptr2=&ar2[0];
	for (i=0;i<n;i++) {
		*ptr2=*ptr1;
		ptr1++;
		ptr2++;
	}
	printf("\n\nThe second array after coppying is:\n");
	for (i=0;i<n;i++) {
		printf("%d ",ar2[i]);
	}
	return 0;
}
