#include <stdio.h>

int main() {
	int n, min, arr[n], q, i;
	int *ptr;
	printf("Enter the size of the array: ");
	scanf("%d",&n);
	for (i=0;i<n;i++) {
		printf("Enter value number %d: ",i+1);
	    scanf("%d",&q);
		arr[i]=q;
	}
	min=arr[0];
	ptr=&arr[0];
	for (i=0;i<n;i++) {
	    if (min>*ptr) {
		    min=*ptr;
		}
	    ptr++; 
	}
	printf("Minimum number in the given array is %d",min);
	return 0; 
}
