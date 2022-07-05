#include <stdio.h>

/**
 * main - entry point
 *@void: no argumen
 * Return: always returns 0
 **/
int main(void)
{
	char a;
	for (a = 'a'; a <= 'z'; a++)
	{
		if (a != 'q' || a != 'e')
			putchar(a);
	}
	putchar (10);
	return (0);
}
