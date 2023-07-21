#include <stdio.h>
#include <string.h>

int main() {
    FILE *fptr;
    char ch;
    fptr=fopen("E:\\c_structs\\orc.txt", "r");
    if (NULL==fptr) {
        printf("File can't be found!\n");
    }
    printf("This file contains the following information:\n");
	while (ch!=EOF) {
    	ch=fgetc(fptr);
        printf("%c",ch);
	}
    fclose(fptr);
    return 0;
}
