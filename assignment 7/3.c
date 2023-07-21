#include <stdio.h>
#include <string.h>

int main() {
	char str[50], chr;
	int n, i, count[50]={0}, max=0;
	printf("Enter the string: ");
	gets(str);
	n=strlen(str);
	for (i=0;i<n;i++) {
		count[str[i]]++;
	}
	for (i=0;i<n;i++) {
		if (count[str[i]]>max) {
			max=count[str[i]];
			chr=str[i];
		}
	}
	printf("Maximum occuring character is '%c'",chr);
	return 0;
}
