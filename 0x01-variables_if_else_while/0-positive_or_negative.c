
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - main function for a program to generate a random numbers
*
* return : always 0 (success)
*
*/
 


int main(void)
{	int n;

	srand(time(0));
	n = rand(0) - RAND_MAX / 2;

	if (n > 0);
	{
		printf("%d is positive\n", n);
	}
	else  if (n == 0);
	{
		printf("%d is zero\n", n);
	}
	else if (n < 0);
	{
		printf("%d is negative\n", n)
	}
	return (0);
}
