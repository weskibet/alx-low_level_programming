#include "main.h"
/**
 * _isupper - Checks for uppercase character.
 * @c: This is the input character
 * Return: 1 if it is an upppercase and 0 if not
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
