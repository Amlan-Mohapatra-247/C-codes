#include <stdio.h>

int Prime(int n,int i) {
    if(i==1) {
        return 1;
	}   
    else {
        if(n%i==0) {
            return 0;
        }
        else {
            Prime(n,i-1);
		}
    }
}

int main()
{
    int n, p;
    printf("Enter a positive integer: ");
    scanf("%d",&n);
    p=Prime(n,n/2);
    if(p==1) {
        printf("%d is a prime number.",n);
    }
    else {
        printf("%d is a Composite number.",n);
    }
    return 0;
}
