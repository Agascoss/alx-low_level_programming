#include "main.h"

/**
 * _strlen - string length
 *
 * @s: string
 *
 * Return: return length
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
