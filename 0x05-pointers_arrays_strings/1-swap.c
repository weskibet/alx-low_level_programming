#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @a: first integer.
 * @b: second integer.
 * REturn: void.
 */
void swap_int(int *a, int *b)
{
	int c = *b;
	*b = *a;
	*a = c;
}
