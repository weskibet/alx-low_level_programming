#include <stdio.h>
/**
 * main - entry block
 * description - prints lowercase alphabet in reverse
 * Return: 0 on success
 */
int main(void)
{
	char c;
	for (c = 'z'; c >= 'a'; c--)
		putchar(c);
	putchar(10);
	return(0);
}
