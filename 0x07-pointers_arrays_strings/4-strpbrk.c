#include "main.h"
/**
 * _strpbrk - searches a string for any f a set of bytes.
 *
 * @s: Sttring too search.
 *
 * @accept: String containing characters to search for.
 *
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{
	int k;

	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
		if (*s == accept[k])
		return (s);
		}
	s++;
	}
	return ('\0');
}
