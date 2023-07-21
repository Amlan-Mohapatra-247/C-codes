#include <stdio.h>

int main() {
    FILE *fptr;
    int i,n;
    char str[100];
    printf("Enter the number of lines to be written: ");
    scanf("%d", &n);
    fptr=fopen("E:\\c_structs\\multi.txt","w"); 
    for(i=0;i<=n;i++) {
        gets(str);
        fputs(str,fptr);
        fputs("\n",fptr);
    }
    fclose (fptr);
    printf("Done!");
    return 0;
}
