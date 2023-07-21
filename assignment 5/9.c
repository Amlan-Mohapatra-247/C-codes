#include <stdio.h>

int main() {
	int i, j, n, ar1[3][3], ar2[3][3], k, q, mul[3][3];
	//first matrix
	printf("Enter values for first matrix->\n");
	for (i=0;i<3;i++) {
		for (j=0;j<3;j++) {
		    printf("Enter value for (%d,%d): ",i,j);
		    scanf("%d",&ar1[i][j]);
        }
	}
	printf("The first matrix is:\n");
	for (i=0;i<3;i++) {
		for (j=0;j<3;j++) {
		    printf("%d\t",ar1[i][j]);
        }
        printf("\n");
    }
    //second matrix
    printf("Enter values for second matrix->\n");
	for (i=0;i<3;i++) {
		for (j=0;j<3;j++) {
		    printf("Enter value for (%d,%d): ",i,j);
		    scanf("%d",&ar2[i][j]);
        }
	}
	printf("The second matrix is:\n");
	for (i=0;i<3;i++) {
		for (j=0;j<3;j++) {
		    printf("%d\t",ar2[i][j]);
        }
        printf("\n");
    }
    //multiplication matrix
    for (i=0;i<3;i++) {
    	for (j=0;j<3;j++) {
    		q=0;
    		for (k=0;k<3;k++) {
    			q+=ar1[i][k]*ar2[k][j];
			}
			mul[i][j]=q;
		}
	}
	printf("Product of the entered matrices is:\n");
	for (i=0;i<3;i++) {
		for (j=0;j<3;j++) {
		    printf("%d\t",mul[i][j]);
        }
        printf("\n");
    }
    return 0;
}
