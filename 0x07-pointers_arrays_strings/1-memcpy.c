#include "main.h"
/**
 * _memcpy - Copies specified number of bytes in 1  memory location to another.
 *
 * @dest: Pointer to the destination  memory location.
 *
 * @src: Pointer to the source memory location.
 *
 * @n: Number of bytes to be copied.
 *
 * Return: Pointer to the destination memory.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
