#include <stdio.h>

int main() {
	int i, j, n, arr[3][3];
	for (i=0;i<3;i++) {
		for (j=0;j<3;j++) {
		    printf("Enter value for (%d,%d): ",i,j);
		    scanf("%d",&arr[i][j]);
        }
	}
	printf("The original array is:\n");
	for (i=0;i<3;i++) {
		for (j=0;j<3;j++) {
		    printf("%d\t",arr[i][j]);
        }
        printf("\n");
	}
	printf("Its transpose array is:\n");
	for (i=0;i<3;i++) {
		for (j=0;j<3;j++) {
		    printf("%d\t",arr[j][i]);
        }
        printf("\n");
	}
	return 0;
}
