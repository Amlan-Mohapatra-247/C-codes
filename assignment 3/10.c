#include <stdio.h>
#include <time.h>

int main() {
	int p,r,i=0,s=0,a;
	srand(time(NULL));
	p=rand();
	while (i<=1) {
		r=p%10;
		p=p/10;
		s=s*10+r;
		i++;
	}
	i=0;
	printf("The number to be guessed is between 1 & 100.\n");
	do {
		printf("Enter your guess: ");
		scanf("%d",&a);
		if (s>a) {
			printf("You guessed a smaller number.");
	    }
		else if (s<a) {
			printf("You guessed a larger number.");
		}
		else {
			printf("You guessed the correct number.\nYou WON!\nCongratulations.");
			return 0;
		}
		i++;
		printf("\n");
		}while (i<10);
	printf("Your 10 chances are over.\nGAME OVER!\nThe correct number is %d.",s);
	printf(" Better luck next time.");
	return 0;
}
