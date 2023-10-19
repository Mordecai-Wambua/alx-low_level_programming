#include "main.h"
#include <string.h>
#include <ctype.h>

/**
 * string_toupper - change all lowercase letters of a string to uppercase
 * @str:actual string
 * Return:char
 */
char *cap_string(char *str)
{
	for (i = 0; i < strlen(str); i++)
	{
		if (isdigit(str[i]))
		{
			continue;
		}
		else if (i == 0 || strchr(" \t\n,;.!\"(){}", str[i - 1]))
		{
			str[i] = toupper(str[i]);
		}
	}
	return (str);
}
