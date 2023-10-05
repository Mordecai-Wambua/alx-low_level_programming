#include <stdio.h>
/**
 * main- prints the size of the various types
 * Return: 0-exit status
 */
int main(void)
{
	printf("Size of char: %d bytes\n", sizeof(char));
	printf("Size of int: %d bytes\n", sizeof(int));
	printf("Size of long int: %d bytes\n", sizeof(long int));
	printf("Size of long long int: %d bytes\n", sizeof(long long int));
	printf("Size of float: %d bytes\n", sizeof(float));
	return (0);
}
