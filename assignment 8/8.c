#include <stdio.h>

int main() { 
    FILE *fptr;
    char ch;
    int wrd=1,charctr=1;
    char fname[20];
    fptr=fopen("E:\\c_structs\\sample.txt","r");
    ch=fgetc(fptr);
    printf("The content of the file is: ");
    while(ch!=EOF) {
        printf("%c",ch);
        if(ch==' '||ch=='\n') {
            wrd++;
        }
        else {
            charctr++;
        }
        ch=fgetc(fptr);
    }
    printf("\nThe number of words in the file is %d\n",wrd);
    printf("The number of characters in the file is %d",charctr-1);
    fclose(fptr);
    return 0;
}
