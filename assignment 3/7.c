#include <stdio.h>

int sod(int i) {
    int k,s=0;
    while (i>0) {
        k=i%10;
        i=i/10;
        s+=k;
    }
    return s;
}

int main() {
    int a,i,m,s,j;
    printf("Enter number(between 1 & 27): ");
	scanf("%d",&a);
	printf("The 3-digits numbers having sum of digits as %d are:-\n",a);
    for (i=100;i<=999;i++) {
        j=i;
        m=sod(i);
        if (m==a) {
            printf("%d\n",j);
        }
    }
    return 0;
}
