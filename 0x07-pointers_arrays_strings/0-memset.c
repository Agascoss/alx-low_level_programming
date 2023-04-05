#include "main.h"
/**
 * _memset - Fills a block of memory with a specified value.
 *
 * @s: pointer to the memory to be filled.
 *
 * @b: Value to be set.
 *
 * @n: Number of bytes to be filled.
 *
 * Return: Pointer to be filled.
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
