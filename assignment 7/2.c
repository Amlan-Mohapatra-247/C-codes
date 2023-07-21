#include <stdio.h>
#include <string.h>

int check(char *str, int n) {
	int i;
	for (i=0;i<n;i++) {
		if (str[i]!=str[n-i-1]) {
			return 0;
		}
	}
	return 1;
}

int main() {
	char str[50];
	int n, q;
	printf("Enter string: ");
	gets(str);
	n=strlen(str);
	q=check(str,n);
	if (q==1) {
		printf("The string is a palindrome");
	}
	else {
		printf("The string is not a palindrome");
	}
	return 0;
}
