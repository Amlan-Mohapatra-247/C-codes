#include <stdio.h>
#include <string.h>

int main() {	
    char str[50];
    int count, i, j, n;
    n=strlen(str);
    printf("Enter the string: ");
    gets(str);
    for(i=0;i<n;i++) {
        count=0; 
        for(j=0;j<n;j++) {
            if((str[i]==str[j]) && (i!=j)) {
                count=1;
                break;
           }
        }
        if (count==0) {
            printf("First non-repeating character is %c",str[i]);
            break;
        }
    }
    if (count==1) {
        printf("Didn't find any non-repeating character");
    }
    return 0;
}
