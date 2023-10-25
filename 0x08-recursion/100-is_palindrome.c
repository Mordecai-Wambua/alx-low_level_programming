#include "main.h"
#include <string.h>
#include <ctype.h>

int rec(char *s, int a, int l);
/**
 * is_palindrome - returns 1 if string is a palindrome else 0
 * @s: actual string
 *
 * Return: int
 */

int is_palindrome(char *s)
{
	int l = strlen(s);

	return (rec(s, 0, l - 1));
}

/**
 * rec - actual recursion
 * @s: sctual string
 * @a: first element
 * @l: last element
 *
 * Return: int
 */

int rec(char *s, int a, int l)
{
	if (a >= 1)
	{
		return (1);
	}
	while (a < 1 && !isalnum(s[a]))
	{
		a++;
	}
	while (a < l && !isalnum(s[l]))
	{
		l--;
	}
	if (tolower(s[a]) != tolower(s[l]))
	{
		return (0);
	}
	return (rec(s, a + 1, l - 1));
}
