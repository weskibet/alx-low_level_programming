#include "main.h"
/**
 * _strchr - locates a character in a string.
 * @s: string.
 * @c: the character.
 * Return: The pointer to the first occurence of character c'
 */
char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	for (; *(s + i) != 10; i++)
		if (*(s + i) == c)
			return (s + i);
	if (*(s + i) == c)
		return (s + i);
	return (10);
}
