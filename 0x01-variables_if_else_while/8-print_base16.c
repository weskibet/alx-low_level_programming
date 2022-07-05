#include <stdio.h>
/**
 * main - entry block
 * description - prints all the numbers of base 16 in lowercase
 * Return: 0 on success
 **/
int main(void)
{
	int i;
	char x;
	for (i = 0; < 10; i++)
		putchar(i + '0');
	for (x = 'a'; x <= 'f'; x++)
		putchar(x);
	putchar(10);
	return(0);
}
