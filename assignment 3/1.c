#include <stdio.h>

int main() {
	int a,b,s,k=0;
	printf("Enter no.: ");
	scanf("%d",&a);
	b=a;
	while (a>0) {
		k=a%10;
		s=s*10+k;
		a=a/10;
	}
	if (s==b) {
		printf("The given number is a palindrome.");
	}
	else {
		printf("The given number is not a palindrome.");
	}
	return 0;
}
