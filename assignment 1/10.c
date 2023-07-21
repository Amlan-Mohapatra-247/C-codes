#include <stdio.h>
int main() {
	float p,r,y,s,t;
	printf("Enter the principal amount: Rs.");
	scanf("%f",&p);
	printf("Enter the rate of interest: ");
	scanf("%f",&r);
	printf("Enter the time(in years): ");
	scanf("%f",&y);
	s=p*r*y/100;
	printf("The Simple Interest is Rs.%f",s);
	t=p+s;
	printf("\nSo, the total amounts to Rs.%f",t);
	return 0;
}
