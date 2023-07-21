#include <stdio.h>

int sum(int *ptr, int n) {
	int i, s=0;
	for (i=0;i<n;i++) {
		s+=*ptr;
		ptr++;
	}
	return s;
}

int main() {
	int n, i, arr[n], s;
	int *ptr;
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
	ptr=&arr[0];
	s=sum(ptr,n);
	printf("\nSum of the elements of the array is %d",s);
	return 0;
}
