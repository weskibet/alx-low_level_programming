#include "main.h"
#include <stdio.h>
/**
 * _strcpy -Copies the string pointed to by the source,
 * including the terminating null byte, to the,
 * buffer pointed to the destination.
 * @dest: destination.
 * @src: source.
 * Return: The pointer to teh destination.
 */
char *_strcpy(char *dest, char *src)
{
	int count = 0;

	while (count >= 0)
	{
		*(dest + count) = *(src + count);
		if (*(src + count) != '\0')
			count++;
		else
			count = -1;
	}
	return (dest);
}
