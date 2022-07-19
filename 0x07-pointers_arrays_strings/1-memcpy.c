#include "main.h"
/**
 * _memcpy - Copies memory area
 * @dest: Destination memoery area
 * @src: Source memomery area
 * @n: Bytes from memory area to copy
 * Return: The pointer to destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
