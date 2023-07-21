#include <stdio.h>
#include <string.h>

int main() {
    FILE *fptr;
    char ch;
    fptr=fopen("E:\\c_structs\\orc.txt", "r");
    printf("File contents as a stream:\n");
	while (ch!=EOF) {
    	ch=fgetc(fptr);
        printf("%c\n",ch);
	}
    fclose(fptr);
    return 0;
}
