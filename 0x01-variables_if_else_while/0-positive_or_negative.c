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
	n=rand() - RAND_MAX /2;
	if (n>0)
	{printf("%d is a positive number\n");}
	else if(n<0)
	{printf("%d is a negative number\n");}
	else
	{printf("zero\n");}

	return (0);
}
