#include <stdio.h>

/**
 * main - Assign a random number to the variable n each
 * 
 * Return : Always 0
 */
int main(void)
{
	int ch;
	for (ch = 97; ch <=122; ch++)
	{
		putchar(ch);
	}
	for (ch = 65; ch <=90; ch++)
	{
		putchar(ch);
	}
	putchar(10);

	return(0);
}
