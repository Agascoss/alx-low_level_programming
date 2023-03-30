#include "main.h"

/**
 * _putchar - called function
 *
 * @c: putchar parameter
 *
 * print_rev - reverse printing string
 *
 * @s: pointer to be revesed
 *
 * Return: 0 (success)
 */
int _putchar(char c);
void print_rev(char *s)
{
	int start = 0;

	while (s[start])
		start++;
	while (start--)
		_putchar(s[start]);
	_putchar('\n');
}
