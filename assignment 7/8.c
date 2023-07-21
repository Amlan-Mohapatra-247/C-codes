#include <stdio.h>
#include <string.h>

void swap(char *x, char *y) {
    char temp=*x;
    *x=*y;
    *y=temp;
}
 
void reverse(char str[], int l, int h) {
    if (l < h) {
        swap(&str[l], &str[h]);
        reverse(str, l + 1, h - 1);
    }
}
 
int main() {
    char str[50];
    printf("Enter the string: ");
    gets(str);
    int n;
    n=strlen(str);
    reverse(str,0,n-1);
    printf("Reverse of the given string is %s",str);
    return 0;
}
