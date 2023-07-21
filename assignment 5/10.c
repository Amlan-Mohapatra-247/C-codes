#include <stdio.h>

int main() {
	int i, j, arr[4][4];
	printf("Enter values for the matrix:\n");
	for (i=0;i<4;i++) {
		for (j=0;j<4;j++) {
		    printf("Enter value for (%d,%d): ",i,j);
		    scanf("%d",&arr[i][j]);
        }
	}
	printf("The matrix is:\n");
	for (i=0;i<4;i++) {
		for (j=0;j<4;j++) {
		    printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    for (i=0;i<4;i++) {
		for (j=0;j<4;j++) {
		    if (i>j) {
		    	arr[i][j]=0;
			}
        }
	}
	printf("Its upper triangular matrix is:\n");
	for (i=0;i<4;i++) {
		for (j=0;j<4;j++) {
		    printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
