#include "main.h"

/**
 * _islower - checks for lowercase letters
 * @c: character to be checked
 * Return: 0 or 1 always
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
