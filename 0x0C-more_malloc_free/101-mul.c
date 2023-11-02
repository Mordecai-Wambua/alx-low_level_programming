#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/**
 * is_number - checks validity of a number
 * @str: input number
 *
 * Return: 1 = valid, 0 = invalid
 */

int is_number(char *str)
{
	int i = 0;

	if (str == NULL || str[0] == '\0')
		return (0);
	if (str[0] == '+' || str[0] == '-')
		i++;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

/**
 * mul - multiplies the two numbers
 * @num1: first number
 * @num2: second number
 *
 * Return: char
 */

char *mul(char *num1, char *num2)
{
	int len1 = strlen(num1);
	int len2 = strlen(num2);
	int len = len1 + len2;
	char *result = malloc(len + 1);
	int i, j, k, carry, prod;

	for (i = 0; i < len; i++)
		result[i] = '0';
	result[len] = '\0';
	for (i = len1 - 1; i >= 0; i--)
	{
		carry = 0;
		k = len - (len1 - i);
		for (j = len2 - 1; j >= 0; j--)
		{
			prod = (num1[i] - '0') * (num2[j] - '0') + carry + (result[k] - '0');
			result[k] = (prod % 10) + '0';
			carry = prod / 10;
			k--;
		}
		while (carry > 0)
		{
			prod = carry + (result[k] - '0');
			result[k] = (prod % 10) + '0';
			carry = prod / 10;
			k--;
		}
	}
	i = 0;
	while (result[i] == '0' && i < len - 1)
		i++;
	return (result + i);
}


/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: int
 */

int main(int argc, char **argv)
{
	char *num1, *num2, *result;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = argv[1];
	num2 = argv[2];
	if (!is_number(num1) || !is_number(num2))
	{
		printf("Error\n");
		exit(98);
	}
	result = mul(num1, num2);
	printf("%s\n", result);
	return (0);
}

