#include <stdio.h>
int main() {
	int exp,x,y,z;
	printf("Enter the value of 'x': ");
	scanf("%d",&x);
	printf("Enter the value of 'y': ");
	scanf("%d",&y);
	printf("Enter the value of 'z': ");
	scanf("%d",&z);
	exp=x++ + ++x + ++y + y++ + ++z;
	printf("Value of the expression is %d",exp);
	printf("\nUpdated value of 'x' is %d",x);
	printf("\nUpdated value of 'y' is %d",y);
	printf("\nUpdated value of 'z' is %d",z);
    return 0;
}
