#include <stdio.h>
#include <string.h>

int main() {
	char str1[50], str2[50], temp[50];
	int i;
	printf("Enter stirng-1: ");
	gets(str1);
	printf("Enter stirng-2: ");
	gets(str2);
	printf("Before swap:\nFirst string = %s\nSecond string = %s",str1,str2);
	while(str1[i]!='\0') {
        temp[i]=str1[i];
        i++;
    }
    temp[i]='\0';
    i=0;
    while(str2[i]!='\0') {
        str1[i]=str2[i];
        i++;
    }
    str1[i]='\0';
    i=0;
    while(temp[i]!='\0') {
        str2[i]=temp[i];
        i++;
    }
    str2[i]='\0';
    printf("\nAfter Swap:\nFirst string = %s\nSecond string = %s",str1,str2);
	return 0;
}
