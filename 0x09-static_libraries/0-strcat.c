#include "main.h"

/**
 * _strcat - joins strings
 *
 * @dest: pointer destionation
 *
 * @src: pointer to the string source
 *
 * Return: return dest
 */

char *_strcat(char *dest, char *src)
{
	int dest_len = strlen(dest);
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[dest_len + i] = src[i];

	dest[dest_len + i] = '\0';

	return (dest);

}
