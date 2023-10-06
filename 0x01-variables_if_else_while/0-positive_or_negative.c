#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main- assign a random number to variable n
 *
 * Return: 0-execution return value
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{printf("%d is positive\n", n); }
	else if (n < 0)
	{printf("%i is negative\n", n); }
	else
	{printf("%i is zero\n", n); }

	return (0);
}
