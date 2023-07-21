#include <stdio.h>

void sort(int arr[], int n, int k) {
	int q,i,j;
	for (i=0;i<n;i++) {
        for (j=i+1;j<n;j++) {
            if (arr[i]>arr[j]) {
                q=arr[i];
                arr[i]=arr[j];
                arr[j]=q;
            }
		}
    }
}

int main() {
	int i, j, n, arr[i], k, a, b, c;
	printf("Enter the size of the array: ");
	scanf("%d",&n);
	for (i=0;i<n;i++) {
		printf("Enter value number %d: ",i+1);
		scanf("%d",&arr[i]);
    }
    printf("Enter number 'k' for 'k'th term': ");
    scanf("%d",&k);
	printf("The original array is: ");
	for (i=0;i<n;i++) {
		printf("%d ",arr[i]);
    }
    sort(arr,n,k);
    a=arr[k-1];
    b=arr[n-k];
    printf("\nThe %dth largest number is %d.",k,b);
    printf("\nThe %dth smallest number is %d.",k,a);
    return 0;
}
