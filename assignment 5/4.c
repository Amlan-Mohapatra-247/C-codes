#include <stdio.h>

int main() {
	int i, j, n, arr[i];
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
    printf("\nFirst non-repeating element is : ");
    for (i=0;i<n;i++) {
        for (j=i+1;j<n;j++) {
            if (arr[i]==arr[j]) {
                continue;
            }
            else {
            	printf("%d",arr[j]);
            	return 0;
			}
        }
    }
}
