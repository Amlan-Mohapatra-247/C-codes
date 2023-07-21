#include <stdio.h>

int max(int arr[], int n) {
	int i, q=arr[0];
	for (i=1;i<n;i++) {
		if (arr[i]>q) {
			q=arr[i];
		}
	}
	return q;
}

int min(int arr[], int n) {
	int i, q=arr[0];
	for (i=1;i<n;i++) {
		if (arr[i]<q) {
			q=arr[i];
		}
	}
	return q;
}

int main() {
	int i, j, n, arr[i], a, b;
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
    a=max(arr,n);
    b=min(arr,n);
    printf("\nMaximum element in the array is %d.",a);
    printf("\nMinimum element in the array is %d.",b);
    return 0;
}
