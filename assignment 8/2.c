#include <stdio.h>
#include <string.h>

int main() {
    FILE *fptr;
    int len;
    fptr=fopen("E:\\c_structs\\orc.txt", "r");
    fseek(fptr,0,SEEK_END);
    len=ftell(fptr);
    fclose(fptr);
    printf("Size of the file is %d bytes", len);
    return 0;
}
