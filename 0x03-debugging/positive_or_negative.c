#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main- assign a random number to variable n
 *
 * Return: 0-execution return value
 */
int positive_or_negative(int i)
{
	if (i > 0)
	{printf("%d is positive\n", i); }
	else if (i < 0)
	{printf("%i is negative\n", i); }
	else
	{printf("%i is zero\n", i); }

	return (0);
}
