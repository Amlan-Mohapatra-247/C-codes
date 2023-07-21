#include <stdio.h>

int main() {
	int b,q,on=0,tw=0,th=0,fo=0,fi=0,si=0,se=0,ei=0,ni=0,ze=0;
	printf("Enter number: ");
	scanf("%d",&b);
	while (b>0) {
		q=b%10;
		b=b/10;
		switch(q) {
			case 1:
				on+=1;
				break;
			case 2:
				tw+=1;
				break;
			case 3:
				th+=1;
				break;
			case 4:
				fo+=1;
				break;
			case 5:
				fi+=1;
				break;
			case 6:
				si+=1;
				break;
			case 7:
				se+=1;
				break;
			case 8:
				ei+=1;
				break;
			case 9:
				ni+=1;
				break;
			case 0:
				ze+=1;
				break;
		}
	}
	printf("\nNumber of ones   => %d",on);
	printf("\nNumber of twos   => %d",tw);
	printf("\nNumber of threes => %d",th);
	printf("\nNumber of fours  => %d",fo);
	printf("\nNumber of fives  => %d",fi);
	printf("\nNumber of sixs   => %d",si);
	printf("\nNumber of sevens => %d",se);
	printf("\nNumber of eights => %d",ei);
	printf("\nNumber of nines  => %d",ni);
	printf("\nNumber of zeroes => %d",ze);
	return 0;
}
