#include "main.h"

/**
 * _memset - occupy memory
 *
 * @s: pointer to memory
 *
 * @b: value set
 *
 * @n: number of bytes
 *
 * Return: s (success)
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
		s[j] = b;
	return (s);
}
