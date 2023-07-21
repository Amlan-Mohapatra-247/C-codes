#include <stdio.h>
  
int main() {
    FILE *fptr;
    int count=1; //1 instead of 0 as last line doesn't have '\n' in end
    char c;
    fptr=fopen("E:\\c_structs\\nol.txt","r");
    for (c=getc(fptr);c!=EOF;c=getc(fptr)) {
        if (c=='\n') {
		    count=count+1;
		}
	}
    fclose(fptr);
    printf("The file has %d lines",count);
    return 0;
}
