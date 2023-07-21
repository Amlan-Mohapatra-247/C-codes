#include <stdio.h>  
#include <string.h>  
   
int main() {
    char str1[50], str2[50];
    printf("Enter string no.1: ");
    gets(str1);
    printf("Enter string no.2: ");
    gets(str2);
    if (strlen(str1) != strlen(str2)) {
        printf("Second string is not a rotation of first string");
    }
    else {
        strcat(str1, str1);
        if (strstr(str1, str2) != NULL) {
            printf("Second string is a rotation of first string");
	    }
        else {
            printf("Second string is not a rotation of first string");
		}
    }
    return 0;
}
