#include "main.h"
/**
 * _islower - entry point
 *
 * Description: check for a lowercase character
 *@c: contains letter to be compared
 * Return: 0- true 1-false
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
