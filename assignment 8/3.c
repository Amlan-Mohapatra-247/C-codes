#include <stdio.h>

int main() {
    char ch;
    FILE *read;
    FILE *write;
    read=fopen("E:\\c_structs\\orc.txt","r");
    write=fopen("E:\\c_structs\\copy.txt","w");
    while ((ch=getc(read))!=EOF) {
        putc(ch,write);
    }
    fclose(read);
    fclose(write);
    printf("Done!");
    return 0;
}
