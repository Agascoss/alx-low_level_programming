#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * *string_nconcat - joins n bytes of string to another string
 *
 * @s1: string to append to
 *
 * @s2: string to join from
 *
 * @n: number of bytes from s2 to concatenate to s1
 *
 * Return: pointer to the resulting string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;
	unsigned int len1, len2;

	len1 = strlen(s1);
	len2 = strlen(s2);

	result = malloc(sizeof(char) * (len1 + n + 1));

	if (result == NULL)
	{
		return (NULL);
	}
	strncpy(result, s1, len1);

	if (n < len2)
	{
		strncat(result, s2, n);
	}
	else
	{
		strncat(result, s2, len2);
	}
	result[len1 + n] = '\0';

	return (result);
}
