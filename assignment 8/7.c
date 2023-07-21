#include <stdio.h>

int main() {
    FILE *fptr1, *fptr2;
    char c;
    fptr1=fopen("E:\\c_structs\\sample.txt", "r");
    fptr2=fopen("E:\\c_structs\\upper.txt", "w");
    while (c!=EOF) {
        c=fgetc(fptr1);
        c=toupper(c);
        fputc(c,fptr2);
	}
    fclose(fptr1);
    fclose(fptr2);
    printf("Done!");
    return 0;
}
