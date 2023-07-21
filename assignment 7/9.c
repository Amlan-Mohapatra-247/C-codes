#include <stdio.h>
#include <string.h>

void swap(char *x, char *y) {
    char temp;
    temp=*x;
    *x=*y;
    *y=temp;
}

void permute(char *a, int z, int x) {
    int i;
    if (z==x) {
        printf("%s\n",a);
    }
    else {
        for (i=z;i<=x;i++) {
            swap((a+z),(a+i));
            permute(a,(z+1),x);
            swap((a+z),(a+i));
        }
    }
}

int main() { 
    char str[50];
    int n;
    printf("Enter the string: ");
    gets(str);
	n=strlen(str);
	printf("Following are all the permutations of %s:\n",str);
    permute(str,0,n-1);
    return 0;
}
