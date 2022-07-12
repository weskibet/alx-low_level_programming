#include "main.h"
/**
 * _abs - outputs absolute value of interger in input
 * @n: integer to check
 * Return: n always
 */

int _abs(int n)
{
	if (n >= 0)
		return (n);

	else
	{
		n *= -1;
		return (n);
	}
}
