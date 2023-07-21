#include <stdio.h>

int pow(int b,int p) {
	if (p!=0) {
	    return b*pow(b,p-1);
    }
    else {
    	return 1;
	}
}

int main() {
	int b,p,v;
	printf("Enter base: ");
	scanf("%d",&b);
	printf("Enter power: ");
	scanf("%d",&p);
	v=pow(b,p);
	printf("%d^%d=%d",b,p,v);
	return 0;
}
