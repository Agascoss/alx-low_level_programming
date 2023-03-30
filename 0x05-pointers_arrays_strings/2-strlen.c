#include "main.h"

/**
 * _strlen - prints the length of a string
 *
 * @s: the char pointer
 *
 * Return: 0 (success)
 */

int _strlen(char *s)
{
int string_length = 0;

	while (s[string_length])
		string_length++;
	return (string_length);
}
