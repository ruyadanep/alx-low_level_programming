#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *main - main function to generate a random number
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
	int n;
	int sums;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d is", n)
	sums = n % 10;
	if (sums > 5)
	{
		printf("%d and greater than 5\n", sums);
	}
	else if ((num < 6) && (num < 0))
	{
		printf("%d and is less than 6 and not 0\n", sums);
	}
	else
	{
		printf("%d and is 0\n", sums);
	}
	return (0);
}
