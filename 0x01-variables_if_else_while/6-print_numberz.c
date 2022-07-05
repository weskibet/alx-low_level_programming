#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry point
 * description - prints all singled digit numbers of base 10 starting from 0
 * Return: alwasy 0 (Success)
 */

int main(void)
{
	int d;
	for (d = '0'; d <= '9'; d++)
		putchar (d);
	putchar (10);
	return (0);
}
