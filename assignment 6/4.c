#include <stdio.h>

void sort(int arr[], int n) {
	int i, j, q;
	int *ptr;
	for (i=0;i<n;i++) {
		ptr=&arr[i];
		for(j=i+1;j<n;j++) {
			if (*ptr>arr[j]) {
				q=*ptr;
				*ptr=arr[j];
				arr[j]=q;
			}
		}
	}
	printf("\nThe array after sorting is: ");
	for (i=0;i<n;i++) {
		printf("%d ",arr[i]);
	}
}

int main() {
	int n, i, arr[n];
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
	sort(arr,n);
	return 0;
}
