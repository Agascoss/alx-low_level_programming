#include "main.h"

/**
 * _strncat - Joins two strings
 *
 * @dest: A pointer to the string to join
 *
 * @src: A pointer to the source string to join
 *
 * @n: The maximum number of characters to join
 *
 * Return: returns dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0;
	int i;

	while (*(dest + dest_len) != '\0')
	{
		dest_len++;
	}
	for (i = 0; i < n && *(src + i) != '\0'; i++)
	{
		*(dest + dest_len + i) = *(src + i);
	}
	*(dest + dest_len + i) = '\0';
	return (dest);
}
