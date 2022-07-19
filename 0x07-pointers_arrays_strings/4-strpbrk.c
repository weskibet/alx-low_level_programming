#include "main.h"
/**
 * _strpbrk - Searches a string for any set of bytes.
 * @s: First string.
 * @accept: second dtring.
 * Return: A pointer to the byte is s that matches of the
 * bytes in accept, or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
				return (s + i);
		}
	}
	return ('\0');
}
