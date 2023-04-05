#include "main.h"
/**
 * _strchr - Find the first occurance of a character.
 *
 * @s: Pointer to the string to search.
 *
 * @c: The Character to find.
 *
 * Return: Pointer of first occurance or NULL if not found.
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
