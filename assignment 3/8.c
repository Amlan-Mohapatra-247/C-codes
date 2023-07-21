#include <stdio.h>

int main() {
	int a,i,s=0;
	printf("Enter number: ");
	scanf("%d",&a);
	printf("Multiples of %d between 1 & 500 are:-\n",a);
	for (i=1;i<=500;i++) {
		if (i%a==0) {
			printf("%d\n",i);
			s+=i;
		}
	}
	printf("Sum of these multiples is %d",s);
	return 0;
}
