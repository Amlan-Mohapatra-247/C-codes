#include <stdio.h>
 
int main() {
    int dec, q, i=0, j;
    int *ptr;
    char hex[20];
    printf("Enter number: ");
    scanf("%d",&dec);
    ptr=&dec;
    while (*ptr>0) {
        q=*ptr%16;
        if (q<10) {
            hex[i++]=q+'0';
        }
        else {
            hex[i++]=55+q;
        }
        *ptr/=16;
    }
    printf("Hexadecimal value of %d is: ", dec);
    for (j=i-1;j>=0;j--) {
        printf("%c",hex[j]);
    }
    return 0;
}
