#include <stdio.h>
#include <string.h>
 
int main()
{
    char str[100],rem[10];
    int i, l, j, k, n;
    printf("Enter the main String: ");
    gets(str);
    printf("Enter the string that you want to remove: ");
    gets(rem);
	l = strlen(str);
	n=strlen(rem);
	for (k=0;k<n;k++) {   	
        for(i = 0; i < l; i++) {
		    if(str[i] == rem[k]) {
			    for(j = i; j < l; j++) {
				    str[j] = str[j + 1];
			    }
			    l--;
			    i--;	
		    } 
	    }
	}
	printf("The Final String after removal of %s is -> %s",rem,str);
    return 0;
}
