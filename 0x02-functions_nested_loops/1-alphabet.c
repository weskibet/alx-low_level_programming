#include "main.h"
/**
 * print_alphabet - entry poin
 * Description: Prints the alphaebt in lower case followed by a new line
 * Return: Always 0
 */
void print_alphabet(void)
{
	char c;

	c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');

}
