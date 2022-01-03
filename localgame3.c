


#include <stdio.h>
#include <math.h>
#include <stdlib.h>


void guess(int N)
{
	int number, guess, numberforguess = 0;

	
	number = rand() % N;

	printf("Guess a number between"
		" 1 and %d\n",
		N);

	
	
	
	do {

		if (numberforguess > 9) {
			printf("\nYou Loose!\n");
			break;
		}

		
		scanf("%d", &guess);

		
		
		if (guess > number)

		{
			printf("Lower number ""please!\n");
			numberforguess++;
		}

		
		
		else if (number > guess)

		{
			printf("Higher number"" please!\n");
			numberforguess++;
		}

		
		
		
		else
			printf("You guessed the"" number in %d ""attempts!\n",numberforguess);

	} while (guess != number);
}


int main()
{
	int N = 100;

	
	guess(N);

	return 0;
}
