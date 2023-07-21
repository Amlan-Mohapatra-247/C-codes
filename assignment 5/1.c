#include <stdio.h>

void cyc_rot(int arr[], int n)
{
   int i, q=arr[n-1];
   for (i=n-1;i>0;i--)
      arr[i]=arr[i-1];
   arr[0]=q;
}

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
	cyc_rot(arr,n);
	printf("\nThe array after cyclically rotating it once, becomes: ");
	for (i=0;i<n;i++) {
		printf("%d ",arr[i]);
	}
	return 0;
}
