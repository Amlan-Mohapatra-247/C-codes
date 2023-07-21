#include <stdio.h>

int main() {
	int a,num,i,k;
    printf("Enter number: ");
    scanf("%d",&a);
    for(num=1;num<=a;num++) {
        k=0;
        for(i=2;i<=num/2;i++) {
            if(num%i==0) {
                k++;
                break;
            }
        }
        if(k==0 & num!= 1)
            printf("%d ",num);
    }
    return 0;
}


