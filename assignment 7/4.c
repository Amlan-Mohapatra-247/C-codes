#include <stdio.h>
#include <string.h>

int main() {
	char str[50], chr;
	int n, i, j;
	printf("Enter the string: ");
	gets(str);
	n=strlen(str);
	printf("The strings having duplicates are:\n");
	for (i=0;i<n;i++) {
		for (j=i+1;j<n;j++) {
		    if (str[i]==str[j]) {
			    printf("%c ",str[i]);
			    str[j]='\0';
		    }
	    }
	}
	return 0;
}
